#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#define info(P) (P)->info
#define right(P) (P)->right
#define left(P) (P)->left

using namespace std;

typedef int infotype;
typedef struct node *adr;

struct node{
    infotype info;
    adr right;
    adr left;
};
typedef adr BinTree;

adr newNode_103012300316(infotype x);
void insertNode_103012300316(adr &root, adr P);
void deleteNode_103012300316(adr &root, adr &P);
void printInOrder_103012300316(adr root);
adr findMin_103012300316(adr root);



#endif // HEADER_H_INCLUDED
