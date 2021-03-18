#include <stdio.h>
#include <malloc.h>

typedef struct{
    TNode* left;
    TNode* right;
    int value;
} TNode;

TNode* root = NULL;
void append(int N);

int main()
{
    append(63);
    append(45);
    append(32);
    append(77);
    append(96);
    append(21);
    append(17); // Again, 数字任意给出
}

void append(int N)
{
    TNode* NewNode=(TNode *)malloc(sizeof(TNode));
    NewNode->value= N;

    if(root == NULL){
        root = NewNode;
        return;
    } else{
        TNode* temp;
        temp = root;
        while((N >= temp->value && temp->left != NULL) || (N < temp->value && temp->right != NULL)){
            while(N >= temp->value && temp->left != NULL)
                temp = temp->left;
            while(N < temp->value && temp->right != NULL)
                temp = temp->right;
        }

        if(N >= temp->value)
            temp->left = NewNode;
        else
            temp->right = NewNode;

        return;
    }
}
