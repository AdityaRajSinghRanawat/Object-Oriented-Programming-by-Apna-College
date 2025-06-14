#include <iostream>
using namespace std;



class Teacher {
private:
    double salary;

public: 

    string name;
    string subject;


    // parameterized
    Teacher(string name, string subject, double salary) {
        this->name = name;        // this->name is object's name and right name is parameter
        this->subject = subject;
        this->salary = salary;
    }

    

    void getInfo(){
        cout << "name = " << name << endl;
        cout << "subject = " << subject << endl;
        cout << "salary = " << salary << endl;
    }


    
}; 






int main()
{
    // CONSTRUCTOR:

    // this pointer:
    // this is a special pointer in C++ that points to the current object.

    /*
        Syntax:

        this->prop 
        
        is same as

        *(this).prop





        eg
        obj1.functionX()

        if this functionX want to refer to the properties of this object then
        it can access it by writing prop. i.e. this property is the property of this object

        or we can write this->prop
    */



    // - = hyphen symbol


    Teacher T1("Aditya", "C++", 25000); // if i don't provide the parameter now then it will give error
    // because i created a constructor by myself and that is only parameterized constructor 

    T1.getInfo(); // do not give any value 
    // even though we provided the parameter in object T1, then also our compiler gets confused 
    /*
        Due to:
        name = name;
        subject = subject;
        salary = salary;

        so we used:
        this->name = name;
        this->subject = subject;
        this->salary = salary;

        to tell the compiler that we are talking about this object property to be set as name(parameter) 
        i.e. 
        left    -> object
        right   -> property

    */





    // WORKING OF THIS POINTER:
    /*
        obj ====>   [       store: data        ]{address: 105} 
        this ===>   [       store: 105         ]{address: 505} 
    
        "this" is a special pointer 
        which is automatically created pointer
        which point the calling object 
        which is calling this object






        when we declare a pointer 
        for example

        int x = 10;
        int *ptr = &x; // this *ptr is storing the address of x in variable ptr

        so when we want to access the value of x then we can write x or *ptr
    */



    // BASICS OF POINTER:

    // address of these variable is stored in a variable ptr
    int x = 10;
    int *ptr =  &x;

    cout << ptr << endl;   // show address of variable
    cout << *ptr << endl;  // show value of address it is pointing
    cout << &ptr << endl;  // show location of itself :it is stored at different location

    char y = 'abc';     // because y is char 
    char *ptr2 =  &y;   // we need to write the data type of y in char type ptr2






    // "*" this symbol is called DEREFERENCING OPERATOR


    // e.g. *ptr ----> X = 10
    // i.e. ptr  :  pointer is pointing variable  (ptr is pointing x)
    // e.g. *ptr :  pointing at value             (*ptr is pointing x's value)

    // *this            => object
    // (*this).property => object.property
    


    return 0;
}