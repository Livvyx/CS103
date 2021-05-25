
//Olivia Walker

//File handling - ReadFile



#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	char data[100];
	string myData;
	ifstream infile;
	ofstream outfile;
	infile.open("C:/Users/270046103/OneDrive - UP Education/Desktop/myFile.txt", ios::in);

	// read line one by one until there is no more written content to output
	while (getline(infile, myData)) {

		// Output the text from the file
		cout << myData;
		cout << endl;
	}
	cout << "\n\t*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;
	infile.close();
	cout << "\n\tFile Is Closed After Reading" << endl;

	cout << "\n\t*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;
	cout << "\n\tWriting To The File Being Used" << endl;
	cout << "\n\t*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;
	cout << "\n\tEnter Your Name: ";
	cin.getline(data, 100);
	cout << "\n\t*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;

	//writing inputed data into the file
	outfile << data << endl;

	cout << "\n\tEnter Your Age: ";
	cin >> data;
	cin.ignore();
	cout << "\n\t*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;

	
	
}


