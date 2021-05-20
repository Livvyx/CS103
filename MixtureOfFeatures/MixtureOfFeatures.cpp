

//Olivia Walker

//using array of structures with pointers
//passing pointers into a function and returning pointer

#include <iostream>
#include <string>
using namespace std;

//definition of structure
struct dogs {
	string breed;
	string colour;
	string behaviour;
	string description;

	//constructor to initialize; keep the same as structure
	dogs(string br = "GermanShepard", string c = "Brown", string be = "Loyal", string d="Loyal and protective of families") {
		breed = br;
		colour = c;
		behaviour = be;
		description = d;

	}

		
};

dogs* input_dogs(struct dogs *p) {

	int i;

	for (i = 0; i < 2; i++){

	cout << "Enter Dog Breed: ";
	cin >> p->breed;

	cout << "Enter Dog Colour: ";
	cin >> p->colour;

	cout << "Enter Dog Behaviour: ";
	cin >> p->behaviour;

	cout << "Enter Dog Description: ";
	cin >> p->description;
	}
	return 0;
}


int main()
{
   
	cout << "\n\tWelcome to Mixture of Features" << endl;
	cout << "\n\t------------------------------" << endl;

	struct dogs dog[2];
	struct dogs* ptr, **pptr;
	ptr = dog;
	pptr = &ptr;

	cout << "the memory address of cat array begin at " << ptr << endl;
	cout << "\n\t------------------------------" << endl;

	cout << "the memory address of the pointer to pointer " << pptr << endl;
	cout << "\n\t------------------------------" << endl;

	//accessing members of the structure array variable with pointers
	cout << "\n\t Breed: " << ptr->breed << " \n " << endl;
	cout << "\n\t Colour: " << ptr->colour << " \n " << endl;
	cout << "\n\t Behaviour: " << ptr->behaviour << " \n " << endl;
	cout << "\n\t Description: " << ptr->description << " \n " << endl;
	cout << "\n\t------------------------------" << endl;

	//passing the pointer to the array of structures into the function
	input_dogs(ptr);

}


