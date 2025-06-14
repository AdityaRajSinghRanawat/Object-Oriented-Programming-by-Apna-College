#include <iostream>
using namespace std;

class A
{
public:

    // constructor overloading
    A()
    {
        cout << "non-parameterized constructor" << endl;
    }

    A(int age)
    {
        cout << "parameterized constructor with age " << age << endl;
    }



    // function overloading
    void functionA(int num){
        cout << num << endl;
    }
    void functionA(char character){
        cout << character << endl;
    }
    void functionA(int num, char character){
        cout << num << " "<< character << endl;
    }

};

class Alpha {
public:
    // function overriding
    void getInfo(){
        cout << "Parent Class Alpha" << endl;
    }

    // virtual function
    virtual void getMoreInfo(){
        cout << "Parent Class Alpha's Virtual Function" << endl;
    }
};

class Beta : public Alpha{
public:

    // function overriding
    void getInfo(){
        cout << "Child Class Beta" << endl;
    }

    // virtual function
    void getMoreInfo(){
        cout << "Child Class Beta's Virtual Function" << endl;
    }
};

int main()
{
    // POLYMORPHISM:
    /*
        Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the ontext in which they are used.

        1) Compile Time Polymorphism (we already know output at compile time)
        2) Run Time Polymorphism     (we already know output at run time)
    */

    // eg.
    // constructor overloading is an example of POLIMORPHISM







    // #1 COMPILE TIME POLYMORPHISM

    // i) Constructor Overloading

    // re-declaration of object is not allowed
    /*
        A obj;     
        A obj(10); 
    */
    A obj1;     // non-parameterized constructor called
    A obj2(10); // parameterized constructor called





    // ii) Function Overloading

    A obj;
    obj.functionA(10);
    obj.functionA('a');
    obj.functionA(10, 'a');




    // iii) Operator Overloading

    int y = 10;
    int x = y;

    string b = "abc";
    string a = b;
    // similarly the string library, interally overload this "=", add extra functionality
    // i.e. make a copy of, this string b in string a














    // #2 RUN TIME POLYMORPHISM

    // also known as Dynamic Polyorphism







    // i) Function Overriding
    /*
        Parent & Child both contain the same function with different implementation.
        The parent class function is said to be overridden.
    */

    // overloading is like multiple things in same class 
    // overriding occurs in inheritance and not in same class, like stuff

    // the child class function override parent class function i.e. child has more priority


    // I can not write same name of a object, in some other class object
    // B obj;
    
    /*  
        // this kind of error is run time error

        ERROR:
        conflicting declaration 'B obj'
        B obj;
        previous declaration as 'A obj'
        A obj;
    */ 
    
    Beta objectBeta;
    objectBeta.getInfo();  // child override it

    Alpha objectAlpha;
    objectAlpha.getInfo();  // parent function is called directly










    // ii) Virtual Functions
    /*
        A virtual function is a member function that you expect to be redefined in derived classes.

        - Virtual functions are Dynamic in nature 
        - Defined by the keyword "virtual" inside a base class and are always 
          declared with a base class and overridden in a child class
        - A virtual function is called during Runtime
    */

    Beta b1;
    b1.getMoreInfo();  // child override it

    Alpha a1;
    a1.getMoreInfo();  // parent function is called directly



    return 0;
}