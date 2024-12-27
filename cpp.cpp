#include "header.h"

adr newNode_103012300316(infotype x){
    adr N = new node;
    info(N) = x;
    right(N) = NULL;
    left(N) = NULL;
    return N;
}

void insertNode_103012300316(adr &root, adr P){
    if (root == NULL){
        root = P;
    }else{
        if (info(P) < info(root)){
            insertNode_103012300316(left(root), P);
        }else{
            insertNode_103012300316(right(root), P);
        }
    }
}

void deleteNode_103012300316(adr &root, adr &P){
    if (root == NULL) {
        cout << "(kosong)" << endl;
    }

    if (info(P) < info(root)) {
        deleteNode_103012300316(left(root), P);
    } else if (info(P) > info(root)) {
        deleteNode_103012300316(right(root), P);
    } else {
        if (left(root) == NULL && right(root) == NULL) {
            root = NULL;
        } else if (left(root) == NULL || right(root) == NULL) {
            adr temp = root;
            if (left(root) != NULL) {
                root = left(root);
            } else {
                root = right(root);
            }
        } else {
            adr minNode = findMin_103012300316(right(root));
            info(root) = info(minNode);
            deleteNode_103012300316(right(root), minNode);
        }
    }
}

void printInOrder_103012300316(adr root){
    if (root != NULL){
        printInOrder_103012300316(left(root));
        cout << info(root) << " ";
        printInOrder_103012300316(right(root));
    }
}

adr findMin_103012300316(adr root){
    if (root == NULL){
        return NULL;
    }
    if (left(root) == NULL){
        return root;
    }
    return (findMin_103012300316(left(root)));
}


