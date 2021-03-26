#include <stdio.h>

int main(){
    const int a = 3;
    int* p = (int*)&a;

    *p = 5;

    printf("a: %d\n", a); //a: 5

    return 0;
}