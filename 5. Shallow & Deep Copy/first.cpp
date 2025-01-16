#include <iostream>
using namespace std;


// normal use of Copy-Constructor:
class Student {
public: 
    string name;
    double cgpa;

    Student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }

    Student(Student &obj){
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }

    void getInfo() {
        cout << "name = " << name << endl;
        cout << "cgpa = " << cgpa << endl;
    }
};












// Shallow Copy-Constructor due to normal use of pointer:
class ShallowStudent {
public: 
    string newName;
    double *cgpaPtr;

    ShallowStudent(string name, double cgpa){
        newName = name;
        cgpaPtr = new double; // cgpaPtr is pointing to new heap memory of double type
        *cgpaPtr = cgpa; // dereferencing, i.e. cgpaPtr, pointing address, variable value is changed  
        /*
            e.g.
            cgpaPtr [100]   address:250     // storing address of heap memory
            heap [8.9]      address:100     // value of heap can be changed by *cgpaPtr
        */
    }

    ShallowStudent(ShallowStudent &obj){
        this->newName = obj.newName;
        this->cgpaPtr = obj.cgpaPtr;
    }

    void getInfo() {
        cout << "name = " << newName << endl;
        cout << "cgpa = " << *cgpaPtr << endl;
    }
};










// // Deep Copy-Constructor due to Advance use of pointer:
class DeepStudent {
public: 
    string newName;
    double *cgpaPtr; // or double* cgpaPtr

    DeepStudent(string name, double cgpa){
        newName = name;
        cgpaPtr = new double;   // cgpaPtr is pointing to new heap memory of double type
        *cgpaPtr = cgpa;        // dereferencing, i.e. cgpaPtr, pointing address, variable value is changed  
    }

    DeepStudent(DeepStudent &obj){
        this->newName = obj.newName;
        cgpaPtr = new double;

        
        *cgpaPtr = *(obj.cgpaPtr); // or *obj.cgpaPtr / since cgpaPtr is storing a address not a value of variable it is pointing

        // storing exact same value of original object in new pointer cgpaPtr

        // i.e. both the heap memory will contain the same value  but later on we will change them
        // memory -> [     8.9        8.9     ]
    }

    void getInfo() {
        cout << "name = " << newName << endl;
        cout << "cgpa = " << *cgpaPtr << endl;
    }
};




int main()
{
    // SHALLOW AND DEEP COPY:


    /* 
        SHALLOW COPY:
        A shallow copy of an object copies all of the member values from one object to another.
    */

    /*  
        DEEP COPY:
        A deep copy, on the other hand, not only copies the member values 
        but also makes copies of any dynamically allocated memory 
        that the members point to. 
    */



   // by using the copy constructor we might not face a major problem
   // but when we use Dynamic Memory Allocation we might face some issues

   // the shallow copy refers to normal errors/misalignment we might face 
   // due to improper use of copy constructor and DMA

   // the deep copy makes a totally new copy of the original object 
   // and do not alter the previous object




    // all our variable are created in our stack memory
    // but DMA is a dynamic memory so it is alloted at runtime
    // initiated by new keyword
    /* 
        int x = 10;             // then this is alloted at compile time in stack memory
        void *x = new int[5]    // this is alloted in runtime in heap memory
    */

    Student S1("Aditya", 8.9);
    S1.getInfo();
    cout << endl;

    Student S2(S1);
    S2.getInfo();

    cout << "--------------------------" << endl;

















    

    ShallowStudent SW1("Kumar", 7.9);
    SW1.getInfo();
    cout << endl;

    ShallowStudent SW2(SW1);
    SW2.getInfo();
    cout << endl;

    SW2.newName = "Neha";
    *(SW2.cgpaPtr) = 9.9; // dereferencing
    SW2.getInfo();
    cout << endl;

    // info of SW1 object's cgpa should be same as per our assumption 
    // but it changes too, bcz SW2's cgpaPtr was pointing towards SW1's cgpa value
    SW1.getInfo();


    // this issue will occure, whether we are using copy-constructor or default-constructor

    cout << "--------------------------" << endl;















    // we need to make a constructor for DEEP COPY
    // compiler is not going to give us a deep-copy

    // in deep constructor, we makes copy of dynamically allocted memory too

    /*
    
        before: Heap => [                        8.9                    ] 
        pointing:         s1.cgpaPtr & s2.cgpaPtr ^   

        after:  Heap => [           8.9                   9.2           ] 
        pointing:         s1.cgpaPtr ^          s2.cgpaPtr ^ 
    */




    DeepStudent DP1("Rohan", 5.5);
    DP1.getInfo();
    cout << endl;

    DeepStudent DP2(DP1);
    DP2.getInfo();
    cout << endl;

    DP2.newName = "Anita";
    *(DP2.cgpaPtr) = 9.9; // dereferencing
    DP2.getInfo();
    cout << endl;

    // since we have made a new copy of DP2 then this will only edit that object pointer
    DP1.getInfo();

    cout << "--------------------------" << endl;













    




   
    return 0;
}