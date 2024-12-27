#include <iostream>
#include "header.h"
using namespace std;

int main() {
    adr root = NULL;

    insertNode_103012300316(root, newNode_103012300316(8));
    insertNode_103012300316(root, newNode_103012300316(9));
    insertNode_103012300316(root, newNode_103012300316(12));
    insertNode_103012300316(root, newNode_103012300316(13));
    insertNode_103012300316(root, newNode_103012300316(15));
    insertNode_103012300316(root, newNode_103012300316(17));
    insertNode_103012300316(root, newNode_103012300316(7));
    insertNode_103012300316(root, newNode_103012300316(6));
    insertNode_103012300316(root, newNode_103012300316(4));


    printInOrder_103012300316(root);
    cout << endl;


    adr P;
    P = newNode_103012300316(8);
    deleteNode_103012300316(root, P);
    printInOrder_103012300316(root);
    cout << endl;

    P = newNode_103012300316(9);
    deleteNode_103012300316(root, P);
    printInOrder_103012300316(root);
    cout << endl;

    P = newNode_103012300316(12);
    deleteNode_103012300316(root, P);
    printInOrder_103012300316(root);
    cout << endl;

    P = newNode_103012300316(13);
    deleteNode_103012300316(root, P);
    printInOrder_103012300316(root);
    cout << endl;

    P = newNode_103012300316(15);
    deleteNode_103012300316(root, P);
    printInOrder_103012300316(root);
    cout << endl;

    P = newNode_103012300316(17);
    deleteNode_103012300316(root, P);
    printInOrder_103012300316(root);
    cout << endl;

    P = newNode_103012300316(7);
    deleteNode_103012300316(root, P);
    printInOrder_103012300316(root);
    cout << endl;

    P = newNode_103012300316(6);
    deleteNode_103012300316(root, P);
    printInOrder_103012300316(root);
    cout << endl;

    P = newNode_103012300316(4);
    deleteNode_103012300316(root, P);
    printInOrder_103012300316(root);
    cout << endl;

    printInOrder_103012300316(root);

    return 0;
}
