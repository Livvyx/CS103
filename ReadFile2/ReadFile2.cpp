

//Olivia Walker

//Read file handling

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char data[100];

    //open a file in write mode
    ofstream outfile;
    outfile.open("C:/Users/270046103/OneDrive - UP Education/Desktop/CS103");
    //output
    cout << "\n\t*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;
    cout << ".+*Writing To The File.+*" << endl;
    cout << "\n\t*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;
    cout << "\n\tEnter Your Name: ";
    cin.getline(data, 100);
    cout << "\n\t*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;
    //Write inputted data into the file;
    outfile << data << endl;

    cout << "Enter Your Age: ";
    cin >> data;
    cin.ignore();
    cout << "\n\t*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;

    //again write inputted data into the file
    outfile << data << endl;

    //close the opened file.
    outfile.close();

    //open a file in read mode;
    ifstream infile;
    infile.open("C:/Users/270046103/OneDrive - UP Education/Desktop/CS103");

    cout << ".+*Reading From The File.+*" << endl;
    infile >> data;

    //write the data at the screen
    cout << data << endl;

    //again read the data from the file and display it
    infile >> data;
    cout << data << endl;

    //close the opened file
    infile.close();

    return 0;
}


