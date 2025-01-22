#include <iostream>
#include <string> // we do not need this for cin and cout strings
using namespace std;


// # We write class name with capital and object in lowercase, for consistency

// 1. SINGLE INHERITANCE:
class Person
{
public:
    string name = "Aryan";
    int age = 10;
};

class Student : public Person
{
public:
    string steam = "Science Maths";
};











// 2. MULTILEVEL INHERITANCE:

// redefination of class is not allowed
// i.e. you can not write same class name multiple times

class Human
{
public:
    string name = "Aryan";
    int age = 12;
};

class Study : public Human
{
public:
    string steam = "Science Maths";
};

class College : public Study
{
public:
    string branch = "Computer Science";
};








// 3. MULTIPLE INHERITANCE:

class Teacher
{
public:
    string subject = "Civil";
    double salary = 23000;
};

class CollegeStudent
{
public:
    string name = "Arun";
    int rollNo = 540160;
};

// use comma to seperate out multiple classes inherited
class phdProfessor : public CollegeStudent, public Teacher
{
public:
    string researchArea = "Material for Construction and Building Stability";
};








// 4. MULTIPLE INHERITANCE:

class Vehicle
{
public:
    string type = "Land";
};

class Car :  public Vehicle
{
public:
    string company = "Toyota";
    int wheel = 4;
};

class Bike : public Vehicle
{
public:
    string company = "Honda";
    string modal = "123XH";
    int wheel = 2;
};






// 5. HYBRID INHERITANCE:

class Transport
{
public:
    string usedFor = "Transfer of Goods and People";
};

class Land :  public Transport
{
public:
    string type = "land";
    string speed = "slow";
};

class Truck : public Land{
    int wheel =  6;
    string company = "TATA"; 
};

class Air : public Transport
{
public:
    string type = "air";
    string speed = "slow";
};







int main()
{
    // 1. SINGLE INHERITANCE:
    /*
        Parent ---> Child

        e.g.
        Person ---> Student
    */



    // 2. MULTI-LEVEL INHERITANCE:
    /*
        Parent ---> Parent ---> Child

        e.g.
        Person ---> Student ---> College Student
    */




    // 3. MULTI-PLE INHERITANCE:
    /*
        Parent --->  |       |
        -            | Child |
        Parent --->  |       |

        e.g.
        Student --->  |               |
        -             | Phd Professor |
        Teacher --->  |               |
    */



   // 4. HIERARCHIAL INHERITANCE:
    /*
        |         | ---> Child
        |  Parent |
        |         | ---> Child


        e.g.
        |          | ---> Car
        |  Vehicle |
        |          | ---> Bike
    */



    // 5. HYBRID INHERITANCE:
    /*
        Its a mixed/random kind of Inheritance

        |         | ---> Parent  ---> Child
        |  Parent |
        |         | ---> Child


        e.g.
        |            | ---> Land ---> Truck  
        |  Transport |
        |            | ---> Air
    */


    return 0;
}