
//Olivia Walker

//Loops, Functions, arrays, structures, pointers etc..

/*
1. Choose any entity(student, school, subject, bank-customers, cars, computer etc).
2. Use all the features we have learnt so far - Loops, functions, if-else conditions, arrays, structures, pointer.. 
array of structures using pointers etc.
3. Demonstrate the use of these features for your chosen entitys details and process.
4. use functions to pass and return pointers to structures/arrays.
5. Output the result of your functions with appropriate headings.
6. give comments suitably.
7. when finished for today push to github.
8.
*/



#include <iostream>
#include <string>
using namespace std;

//Function with dummy parameter
void under_line(int line) {
    int i;
    cout << "\t";

    for (i = 0; i < line; i++) {
        cout << "*+.+*";
    }
    cout << endl;
}

void breath_lines(int breath) {
    int i;
    cout << "\t";
    for (i = 0; i < breath; i++) {
        cout << "-";
    }
    cout << endl;
}

Dogs* input_dogs(struct dogs) {

}

int main()
{

    string name;
    string Respond;
    string password;
    
    string username;
    string email;
    //My Chosen Entity Is A PetShop
    cout << "\n\t\t\t\t*+.+*+.LIVS PETSHOP!*+.+*+.\t\n" << endl;
    under_line(16); // underline for the Output

    cout << "\n\t\t\t - - - Just So We Remember You Next time! - - - \t\n" << endl;
    under_line(16);

    cout << "\n\t Whats Your Name : ";
    cin >> name;
    breath_lines(30);

    cout << "\n\t" << name <<" Do You Wish To Be A Member? " << endl;
    breath_lines(30);

     
    cout << "\n\t Yes or No? : ";
    cin >> Respond;
    breath_lines(30);
    if (Respond == "yes" || Respond == "Yes") {
        cout << "\n\tPlease Enter Your Chosen  Username: ";
        cin >> username;

        cout << "\n\tPlease Enter Your Chosen Password: ";
        cin >> password;

        cout << "\n\tPlease Enter Your Chosen Email: ";
        cin >> email;
    }

} 


