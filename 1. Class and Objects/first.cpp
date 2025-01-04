#include <iostream>
using namespace std;



// declared outside the main function
class Teacher
{
private:
    double salary;


// access modifiers:
public:

    // properties/attributes
    string name;
    string dept;
    string subject;
    

    // methods/member functions(bcz these function become member of our class)
    void changeDept(string newDept)
    {
        dept = newDept;
    }





    // setter function
    void setSalary(double newSalary)
    {
        salary = newSalary; // salary datatype can be accessed from the private modifier
    }

    // getter function
    double getSalary()
    {
        return salary; 
    }
};






int main()
{
    // Objects: objects are entities in real world
    // Class:   class is a blueprint of these entities(objects)

    // example toyota make car 1, car 2, .... on the basis of their blueprint

    // example teacher info template will contain name, deartment, subjecrt, salary, etc
    // (these are properties i.e. values associated with techer object)
    // teacher might have some function like change Department, change salary, etc.
    // (these function are called methods)

    /*
        teacher -> object
        name, subject -> properties
        function -> methods
    */

    // class => blueprint
    // obj1 T1
    // obj1 T2
    // obj1 T3
    // ........
    // obj1 Tn

    // this class & object concept exist in java, python, javascript, etc

    // example amazon has properties for its products like name, price, description, discount, etc

    /*
        class declare:

        class className {
            // code
            // properties
            // methods
        };
    */

    /*
        class call:

        class object;
    */

    Teacher T1;
    Teacher T2;
    Teacher T3;
    Teacher T4;

    T1.name = "Aditya";
    T1.dept = "Computer Science";
    T1.subject = "C++";
    

    /*
        Access Modifiers:

        private:    data & methods accessible inside class  // default
        public:     data & methods accessible to everyone
        protected:  data & methods accessible inside class & to its derived class  // in inheritance
    */

    cout << T1.name << endl; 
    cout << T1.dept << endl; 
    cout << T1.subject << endl; 


    // setter & getter method
    T1.setSalary(25000);
    cout << T1.getSalary() << endl;

    return 0;
}