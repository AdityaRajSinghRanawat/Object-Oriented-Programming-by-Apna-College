#include <iostream>
using namespace std;




class DeepStudent {
public: 

    string newName;  // these normal variable gets free when we call a destructor
    double *cgpaPtr; // these DMA do not get deleted

    DeepStudent(string name, double cgpa){
        newName = name;
        cgpaPtr = new double;    // these DMA do not get deleted
        *cgpaPtr = cgpa;        
    }

    DeepStudent(DeepStudent &obj){
        this->newName = obj.newName;
        cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr); 
    }

    // DESTRUCTOR:
    ~DeepStudent(){
        cout << "Hi, I deleted everything" << endl;
        delete cgpaPtr;
        // no change will be shown in code 
        // the change will be shown in the memory
    }

    void getInfo() {
        cout << "name = " << newName << endl;
        cout << "cgpa = " << *cgpaPtr << endl;
    }
};





int main()
{
    // DESTUCTOR:
    // ~ClassName(){}


    // its opposite of constructor

    /*
        Constructor: Allocate
        Destructor:  Deallocate
    */ 


    // compiler automatically makes a destructor when the main() function ends
    // but it only deallocate the statically allocated memory
    // yes, the same problem of shallow and deep copy arises here



    // i.e. if you have allocated a memory of an object 
    // dynamically then you need to deallocate it dynamically

    // in C++ to: 
    // allocate     = "new"     keword 
    // de-allocate  = "delete"  keword

    // to fre a memory:
    // Heap     =>       [         55(address: 203)          ]
    // Pointer:                ptr ^


    // delete ptr;
    // it does not mean that ptr pointer should be deleted
    // it state that the address/memory which the pointer is pointing should be deleted
    // pointer can NEVER be deleted




    DeepStudent S1("Aditya", 9.9);
    S1.getInfo();

    // destructor is automatically made by compiler
    // destructor is called by itself, depending upon
    // when our object goes out of scope, i.e. when our code dont need that object  




    // when we are practicing dsa and oops
    // we deal with 1 cpp file 
    // but in big organization we will be working on large data set 
    // so deleting memory becomes a essential task

    // many issue like MEMORY LEAK can occure
    // Memory leak occure when you made multiple heap memory 
    // and no pointer is pointing towards that memory
    // and that memory can not be used for other works 




    return 0;
}