//Olivia Walker

// Pointer & Array Exercise


#include <iostream>
using namespace std;


int* AddingToArray(int b[], int n) {
    for (int i = 0; i < n; i++) {
        b[i] += 5;
    }
    return (b);
}



int main()
{
    
    int age;
    int* PointerAge;

/*
* TASK 1.
1. Store the age of a person in a variable called "age";
2. Output the Variable using the variable name;
3. Output the Value using the pointer;
4. Output the memory address of the variable age;
*/
    cout << "\n\t\t-----Welcome!-----";
    cout << "\n\t <-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*->" << endl;

    cout << "\n\t\t----TASK 1-----";
    cout << "\n\t\tEnter your age: ";
    cin >> age;

    PointerAge = &age;

    //Outputting the variable (2.)
    cout << "\n\t\tThe Age is: " << age << endl;

    //Outputting the value using the pointer (3.)
   
    cout << "\n\t\tAge: " << *PointerAge << endl;

    //Outputting the memory address of the variable age(4.)

    cout << "\n\t\tThe Memory Address Of Your Age: " << PointerAge << endl;

    
    /*
    * TASK 2.
   1. Modify the program to hold the ages of two people age1. age2.
   2. find the average of ages using pointers
   3. output the average age
    */
    cout << "\n\t <-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*->" << endl;
    cout << "\n\t\t----TASK 2----" << endl;

    //Declaring

    int age1 = 10, age2 = 24;
    int* PointerAge1;
    int* PointerAge2;

    PointerAge1 = &age1;
    PointerAge2 = &age2;
    cout << "\n\t\tThe average of ages is: " << (*PointerAge1 + *PointerAge1) / 2 << endl;

    /*
    * TASK 3.
    */

    cout << "\n\t <-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*->" << endl;
    cout << "\n\t\t----TASK 3----" << endl;
    cout << "\n\t\t.-.-Arrays-.-." << endl;

    int a[5] = { 10,20,30,40,50 };
   

    //PointerAge = a; // Store array name in the pointer, it refers to the first element in the array.

    PointerAge = AddingToArray(a, 5); //Passing a array and storing the memory address in the pointer.

    cout << "\n\t\tThe Array Values" << endl;
    cout << "\n\t <-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*->" << endl;



    //access the array using a pointer
    for (int i = 0; i < 5; i++) {
        //cout << a[i]; // using array variable and index

        cout << "\n\t\t" << *(PointerAge + i) << endl;
        cout << "\n\t\tMemory Address of Element " << i << " is " << PointerAge + i << endl;
    }
    





}


