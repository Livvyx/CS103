// Olivia Walker

//Intro to Structures

#include <iostream>
using namespace std;

/*structure is a complex type of data where a group of different data types
can be called*/


//defining the structure
struct Students {
    //5 Members inside this structure
    string name; //Member
    string phone;
    float fees;
    string address;
    int age;
        
};
   



int main()
{
    
   struct Students bse, bse1, bse2; // bse will take the structure of struct Students{}
    bse.name = "pinky";
    bse.age = 20;
    bse.phone = "0203456538";
    bse.fees = 9950;
    bse.address = "45 britania street, newlands";

    cout << "\t\tWelcome To Yoobee!\n" << endl;

    //input
    cout << "\t Please Enter The First Student\'s Name: ";
    cin >> bse1.name;

    cout << "\t Please Enter The First Student\'s Fees: ";
    cin >> bse1.fees;

    cout << "\t Please Enter The Second Student\'s Name: ";
    cin >> bse2.name;

    cout << "\t Please Enter The Second Student\'s Fees: ";
    cin >> bse2.fees;

    //output 
    cout << "Students Information" << endl;

    cout << "\tName: " << bse1.name << endl;
    cout << "\tFees: " << bse1.fees << endl;

    cout << "\tName: " << bse2.name << endl;
    cout << "\tFees: " << bse2.fees << endl;

  /*  cout << "Name: " << bse.name << endl;
    cout << "Phone: " << bse.phone << endl;
    cout << "Fees: " << bse.fees << endl;
    cout << "Address: " << bse.address << endl;*/



}


