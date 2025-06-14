#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "----------------------------------------" << endl;
        cout << "Person(Base, Parent) Class Constructor" << endl;
        cout << "----------------------------------------" << endl;
    };

    ~Person()
    {
        cout << "----------------------------------------" << endl;
        cout << "Person(Base, Parent) Class Destructor" << endl;
        cout << "----------------------------------------" << endl;
    };

    string name;
    int age;
};

class Student : public Person
{
public:
    Student()
    {
        cout << "----------------------------------------" << endl;
        cout << "Student(Derived, Child) Class Constructor" << endl;
        cout << "----------------------------------------" << endl;
    };

    ~Student()
    {
        cout << "----------------------------------------" << endl;
        cout << "Student(Derived, Child) Class Destructor" << endl;
        cout << "----------------------------------------" << endl;
    };

    // name, age, roll no
    // : = this is access modifier

    int rollNo;

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollNo : " << rollNo << endl;
    }
};

class Vehicle
{
public:
    Vehicle(int modalNo, string company)
    {
        this->modalNo = modalNo;
        this->company = company;

        cout << endl;
        cout << "#####################################################" << endl;
        cout << "Vehicle Class (Parent) Constructor is called :-" << endl;
        cout << "modalNo : " << modalNo << endl;
        cout << "company : " << company << endl;
        cout << "#####################################################" << endl;

        // these will not be defined here
        // cout << "launchYear :" << launchYear << endl;
        // cout << "country :" << country << endl;
    }

    int modalNo;
    string company;
};

class Car : public Vehicle
{
public:

    // we will call our parent class constructor (vehicle) from child class
    // so parent constructor class will be called first and not the child

    // we did this because parent has a parameterized constuctor
    // and they are not called without parameter passing 

    // so modalNo and company name will be sent to parent first

    // when we pass constructor then w only need to pass values
    // e.g. Vehicle(modalNo, company)               [correct]
    // e.g. Vehicle(int modalNo, string company)    [wrong]

    Car(int launchYear, string country, int modalNo, string company) : Vehicle(modalNo, company)
    {
        this->launchYear = launchYear;
        this->country = country;
        
        cout << "#####################################################" << endl;
        cout << "Car Class (Child) Constructor is called :-" << endl;
        cout << "modalNo : " << modalNo << endl;
        cout << "company : " << company << endl;
        cout << "launchYear :" << launchYear << endl;
        cout << "country :" << country << endl;
        cout << "#####################################################" << endl;   
        cout << endl;     
    }
    int launchYear;
    string country;

};

int main()
{
    // INHERITANCE:
    // When properties & member function of base class are passed on the derived class

    // CLASS A (Parent, Base Class) ------> CLASS B (Child, Derived Class, Inherit)

    // it is important for code reusability

    Student s1;   // if I write Student s1(); then its necessary to give parameters 
    s1.name = "Rahul";
    s1.age = 21;
    s1.rollNo = 1010244;
    s1.getInfo();

    /*
        CLASS A (Parent, Base Class) ------> CLASS B (Child, Derived Class, Inherit)

        When,
        B obj();

        Calling Process:-
        1) Base Class Constructor
        2) Derived Class Constructor
        3) Derived Class Destructor
        4) Base Class Destructor
    */

    // we can explicitely call our parent class constructor by access modifier
    
    Car c1(2024, "Japan", 45335, "Toyota");


    return 0;
}