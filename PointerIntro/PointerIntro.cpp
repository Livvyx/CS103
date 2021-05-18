// Olivia Walker

//Pointer intro

#include <iostream>
using namespace std;

int main()
{
   

	//initializing
	int age = 25;
	int* ptrage;
	int a[5] = { 10, 20, 30, 40, 50 };
	int* ptra;

	ptrage = &age; // assigning pointer to age
	ptra = a; //store array name in the pointer


	//output

	// output value
	cout << "\n\tage =" << age << endl; 

	//output memory address
	cout << "\n\tmemory address of age = " << ptrage << endl; 

	//output value
	cout << "\n\tage = " << ptrage << endl; 



	cout << "\n\tThe Array Values" << endl;

	//access the array using the pointer
	for (int i = 0; i < 5; i++) {
		//cout << a[i];
		cout << "\n\t" << *(ptra + i) << "\t\n" << endl;
	}
	cout << "\n\t The Third Element In The Array: " << *(ptra + 2) << endl;
}


