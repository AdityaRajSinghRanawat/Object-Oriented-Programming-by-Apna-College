#include <iostream>
using namespace std;



class Teacher {
private:
    double salary;

public: // constrctor is always public

    string dept;

    string name;
    string subject;



    // if i give parameter while creating objects and calling the constructor 
    // then the parameterized constructor will be called
    // otherwise if i do not give parameters then non-parameterized constructor will be called


    // non-parameterized constructor
    Teacher() { // constructor has same name as of class and no return type 
        cout << "Hi, i am constructor" << endl;
        dept = "Computer Science";
    }



    // parameterized constructor
    Teacher(string n, string s, double sal) {
        name = n;
        subject = s;
        salary = sal;
    }



    // copy constructor
    Teacher(Teacher &originalObject){ // this is pass by reference
        // this means that, this object is not a copy of original object
        // instead it is the original object

        // i.e address is passed of original object
        // and a copy is not created

        cout << "I am custom copy-constructor" << endl;

        this->name = originalObject.name;
        this->subject = originalObject.subject;
        this->salary = originalObject.salary;
    }

    

    void getInfo(){
        cout << "name = " << name << endl;
        cout << "subject = " << subject << endl;
        cout << "salary = " << salary << endl;
        cout << "department = " << dept << endl;
    }


    
}; 




int main()
{
    // CONSTRUCTOR:
    // special method invoked automatically at time of object creation. Used for initialisation
    /*
        - same name as class
        - constructor doesn't have a return type 
        - only called once (automatically), at object creation
        - memory allocation happens when constructor is called
    */
   
    // constrctor is always public

    Teacher T1; // call constructor
    Teacher T2; // this will also call constructor Teacher
    cout << endl;

    // class is just a blueprint so they do not occupy much space in memory 
    // but these individual object occupy a significant space in our memory

    // if we do not make a constructor then the compiler makes it by itself
    // so constructer is made by 
    // 1. compiler
    // 2. programmer


    cout << T1.dept << endl;
    cout << endl;


    /*
        class  A{
            int x;
        };
    
        A obj1; 
        A obj2;

        then this will occupy space like this

        obj1 -> [       x [space]      ] 
        obj2 -> [       x [space]      ] 

        memory allocation is for objects and not for class
        and this allocation happens when we calls our constructor
    */


















    /*
        Types of constructor:
        1. Non - parameterized
        2. Parameterized 
        3. Copy
    */
    


   // 2. Parameterized 
    Teacher T3("Aditya", "C++", 25000); // call parameterized constructor

    T3.getInfo(); 
    cout << endl;
    // department will not be shown 
    // because T3 object never called non-parameterized constructor 


    // ## CONSTRUCTOR OVERLOADING ##
    // this phenomenon of calling constructor of same name but differnt type is called

    // constructor overloading is an example of POLIMORPHISM

    
















    // 3. Copy Constructor:
    // Special Contructor (default) used to copy properties of one object into another.

    // if we do not make a copy constructor then c++ will make a default copy constructor



    Teacher T4(T3); // C++ default constructor is called (if we have not written copy constructor)
    T4.getInfo();   // copy of T3 is created in T4 object

    /*
        DEFAULT Copy-Constructor:
        T3 Memory => [name = n;        subject = s;        salary = sal;]
        T4 Memory => [name = n;        subject = s;        salary = sal;]  // copy of T3 created
    */




    // we can also make our own copy-constructor in class

    // because we have specified the copy-constructor in class
    // the default copy-constructor will not work



    return 0;
}