#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name = "Rohan";
    int age = 10;
};

class Student : private Person
{
public:
    // we can call public member here but not outside this class
    // since mode of iheritance is private
    int rollNo = 1208;

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollNo : " << rollNo << endl;
    }
};

int main()
{
    /*
                                    Mode of Inheritance
        ---------------------------------------------------------------------------
        Base(Parent) Class | Private Mode  |  Protected Mode  |   Public Mode
        ---------------------------------------------------------------------------
        Private Member     | Not Inherited |  Not Inherited   |   Not Inherited
        Protected Member   | Private       |  Protected       |   Protected
        Public Member      | Private       |  Protected       |   Public
        ---------------------------------------------------------------------------
        /\
        ||
        (members, functions and properties in Base(Parent) Class)

        Note:- Private Properties and Private functions are never inherited

        Note:- In Private Mode the derived members will become private, public in public and protected in protected.

        Reference :- See 1. Class and Objects
    */

    Student s1;
    s1.getInfo();

    // unlike before where i can just write
    // cout << s1.name << endl;
    // to access name, but here since i am in derived/child class 
    // i can not access it outside the class, sice public memeber of parent class
    // act as private member in child class

    // but i can use
    Person p1;
    cout << p1.name << endl;
    // to get member because they are public there 

    return 0;
}