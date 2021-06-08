
//Olivia Walker

//Singly Links

#include <iostream>
using namespace std;

struct ListNode {
    double value;
    ListNode* next; // Self Referential
};
void StarLine() {
    cout << "\n**********************************************************************" << endl;
}

int main()
{
    StarLine();
    cout << "\n\t\tLEARNING SINGLY LINKS" << endl;
    StarLine();

    // First Node
    ListNode* head = new ListNode; //creating a new node
    head->value = 12.5;
    head->next = nullptr;
    cout << "\nThe value of the node is " << head->value << endl;
    cout << "\nThe next of the node is " << head->next << endl;
    StarLine();

    //Second node
    ListNode* secondNode = new ListNode;//creates an new object of this particular type
    secondNode->value = 5.2;
    secondNode->next = nullptr;
    head->next = secondNode;
    cout << "\nThe value of the second node is " << secondNode->value << endl;
    cout << "\nThe next of the second node is " << secondNode->next << endl;
    cout << "\nThe next of the node is " << head->next << endl;
    StarLine();

    //Third Node
    ListNode* thirdNode = new ListNode;
    thirdNode->value = 3.6;
    thirdNode->next = nullptr;
    head->next = thirdNode;
    cout << "\n the value of the first node(head) is " << head->value << endl;
    cout << "\n the value of the second node is " << secondNode->value << endl;
    cout << "\n the value of the last node is " << thirdNode->value << endl;
    cout << "\n the pointer of the head node point to : " << head->value << endl;
    cout << "\n the pointer of the second node point to : " << head->value << endl;
    cout << "\n the pointer of the last node point to : " << head->value << endl;
    StarLine();








}


