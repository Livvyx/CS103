//Olivia Walker
//Array & MultiDimensionalArray

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    
    // ---- Single Dimensional Array ---- //



    //string names[5] = { "john", "Larissa", "Keith", "Olivia", "Jakob" }; //storing names
   // int i;

    //output
    //for (i = 0; i < 5; i++) {
     //   cout << "\n" << names[i];

    //}

    //cout << "\n";
   // return 0;



   // ---- Single Dimensional Array End ---- //








    // ---- Multi Dimensional Array ---- //



    string students[5][2] = { "john", "16", "Larissa", "48", "Keith", "23", "Olivia", "18", "Jakob", "70" }; //storing names 
    int i, j;

    //output
    for (i = 0; i < 5; i++) { //refers to the row
        for (j = 0; j < 2; j++) { //Refers to collumn
            cout << students[i][j] << "\t"; // using /t allows for spacing between the collums and rows
        }
       
        cout << "\n";
        

    }

    cout << "\n";
    return 0;

    // ---- Multi Dimensional Array ---- //
}



