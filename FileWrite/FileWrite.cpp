
//Olivia Walker

//File handling

//writing into the file
#include <iostream>
#include <fstream>//must be included to handle file
#include <string>
using namespace std;


//string input_nameAge() {
//    int i;
//    string name;
//    int age;
//    for (i = 0; i < 5; i++) {
//        cout << "What is your name: ";
//        cin >> name;
//        cout << "How old are you: ";
//        cin >> age;
//
//        out
//    }
//    return 0;
//}
//




int main()
{
    ofstream outfile; //ofstream is a datatype

    outfile.open("C:/Users/270046103/OneDrive - UP Education/Desktop/myFile.txt", ios::trunc);
    //outfile("name of file"); //more simple way of opening

    //initializing
    //string name = "livvy";
    //int age = 25;

    
    //input_nameAge();
   
    int i;
    string name;
    int age;
    cout << "\n\t*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;
    cout << "\n\t\tPlease Fill Out The Following! :D" << endl;
    cout << "\n\t*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;
    for (i = 0; i < 5; i++) {
        cout << "*.+What Is Your Name+.*: ";
        cin >> name;
        cout << "\n*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;
        cout << "*.+How old are you+.*: ";
        cin >> age;
        cout << "\n*.+*.+*.+*.+*.+*.+*.+*.+*.+" << endl;
        //outputting by being written to the file 
        outfile << name << endl;
        outfile << age << endl;

    }
    
    outfile << "Thank You So Much For answering! Hope You Enjoy The outputFile!";
    cout << "\tfile in out mode\n" << endl;

    //output in file
   /* outfile << "My Name Is Olivia" << endl;

    outfile << "I live in wellington, where do you live?";*/
   

    cout << "\tfile is written with the given information\n" << endl;

    outfile.close(); //closes the file

    cout << "\tfile is closed for operation\n" << endl;
}


