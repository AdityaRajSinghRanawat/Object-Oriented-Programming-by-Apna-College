#include <iostream>
using namespace std;



class Account {
private:
    double balance;     // sensitive data:
    string password;    // either make this data private or protected for data hiding
public:
    string accountID;
    string username;
};





int main()
{
    
    /*
        OPPS major terms:
        1. Encapsulatiion
        2. Abstraction
        3. Inheritance
        4. Polymorphism
    
    */


    // Encapsulation:
    // Encapsulation is wrapping of data & member functions in a single unit called class.


    // data/properties + member function/methods = encapsulation = class


    // encapsulation helps in data hiding
    // data hiding -> private

    Account A1;

    A1.accountID = "1823749757";
    A1.username = "Adiya@001";

    cout << A1.accountID << endl; 
    cout << A1.username << endl; 


    return 0;
}