//Olivia Walker

// Arrays & Pointers Manipulation

//Creating a Menu



/*
* 
Task 5

1. Store an array with integer values (ages of people) and use pointer to do the following.
2. Create a menu to search a value in an array, filter values from an array and sort the array.
3. Use respective functions for each of the above passing the array and returning the corresponding value and/or array to the main function
4. Output relevant values in the main function with appropriate headings.*/

#include <iostream>
using namespace std;

int main()
{
	/*Part #1*/

	/*Storing An array with integer values & pointers*/
	int age[4] = { 15, 19, 20, 55};
	int* PtrAge;

	PtrAge = age;
	int choice;
	/*Part #2*/

	/*Creating  A Menu For Searching Values in an array
	and filtering values from an array and sorting the array*/

	cout << "\n\t.-.-.-.-.- WELCOME TO THE ARRAY & POINTER MENU -.-.-.-.-.\n" << endl;

	cout << "\n\t\t\t.-.-.-.-.- SEARCH -.-.-.-.-." << "\n";

	cout << "\n\t\t\t.-.-.-.-.- SORT -.-.-.-.-." << "\n";

	cout << "\n\t\t\t.-.-.-.-.- FILTER -.-.-.-.-." << "\n";

	cout << "\n\t\t\t.-.-.-.-.- EXIT -.-.-.-.-." << "\n";
	
	cout << "\n\t.-.-.-.-.-.-.-.-.-.PLEASE ENTER THE FOLLOWING-.-.-.-.-.-.-.-.-.-.\n" << endl;

	cout << "\t\n\tPlease Enter An Age: ";
	cin >> choice;

	cout << "\t\n\tPlease Enter An Age: ";
	cin >> choice;




}


