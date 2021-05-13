// Olivia Walker

//Structure 2
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
    int i;

    struct Students bse[5]; // bse will take the structure of struct Students{}
   /* bse.name[5] = "pinky";
    bse.age = 20;
    bse.phone = "0203456538";
    bse.fees[5] = 9950;
    bse.address = "45 britania street, newlands";*/
    

    cout << endl <<"\t\tWelcome To Yoobee!\n" << endl;
    cout << "\t\t------------------\n" << endl;


    for (i = 0; i < 5; i++) {
        //input
        cout << "\n\t Please Enter The Student\'s Name" << i + 1 << " : ";
        cin >> bse[i].name;
        cout << "\t\t------------------\n" << endl;
        cout << "\n\t Please Enter The Student\'s Fees" << i + 1 << " : ";
        cin >> bse[i].fees;
        cout << "\t\t------------------\n" << endl;
        cout << "\n\t Please Enter The Student\'s Address" << i + 1 << " : ";
        cin >> bse[i].address;
        cout << "\t\t------------------\n" << endl;

    }
  


    //output 
    for (i = 0; i < 5; i++) {

        cout << "\t\nStudents Information" << endl;
     

        cout << "\tName" << i + 1 << " : " << bse[i].name;
        

        cout <<"\tFees" << i + 1 << " : " << bse[i].fees;
       

        cout << "\tAddress" << i + 1 << " : " << bse[i].address;
       
    }

  



}
