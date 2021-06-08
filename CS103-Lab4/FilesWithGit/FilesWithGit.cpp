// Olivia Walker
// CS103 Lab 4
// Iteration 1

#include <iostream>
#include <string>
using namespace std;



void title(){
	cout << "\n******************************************************************" << endl;
	cout << "\nShoe Shop Product System" << endl;
	cout << "\n******************************************************************" << endl;
};

void outputting() {

	cout << "\n******************************************************************" << endl;
	cout << "\nShoes Current Information" << endl;
	cout << "\n******************************************************************" << endl;
}
struct shoes 
{

	string name;
	string brand;
	string material;
	string colour;
	int size;
	int price;
	
};
int main()
{
	struct shoes s;

	title();
	
	//input

	cout << "\nAdding a New Shoe To The Catalogue" << endl;
	
	cout << "\nWhats The Product Name: ";
	cin >> s.name;

	cout << "\nWhat Brand: ";
	cin >> s.brand;

	cout << "\nWhat Type Of Material: ";
	cin >> s.material;

	cout << "\nWhat Colour: ";
	cin >> s.colour;

	cout << "\nWhat Size: ";
	cin >> s.size;

	cout << "\nHow Much Is The Product: ";
	cin >> s.price;

	outputting();
	cout << "\n" << " Product Name:"<< "\t" << s.name << "\t" << "Has Been Added To The System" << endl;
	cout << "\n" << " Product brand:" << "\t" << s.brand << "\t" << "Has Been Added To The System" << endl;
	cout << "\n" << " Product Material:" << "\t" << s.material << "\t" << "Has Been Added To The System" << endl;
	cout << "\n" << " Product colour:" << "\t" << s.colour << "\t" << "Has Been Added To The System" << endl;
	cout << "\n" << " Product size:" << "\t" << s.size << "\t" << "Has Been Added To The System" << endl;
	cout << "\n" << " Product price:" << "\t" << s.price << "\t" << "Has Been Added To The System" << endl;


}


