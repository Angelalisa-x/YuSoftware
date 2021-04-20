#include <stdio.h>

#define FUNC(a,b) (a < b) ? a : b

inline int func(int a, int b){
    return ((a < b) ? a : b);
}

int main(int argc, char* argv[])
{
    int a1 = 1;
    int a2 = 1;
    int b = 3;

    printf("FUNC(++a, b): %d\n", FUNC(++a1, b)); //++a1 < b ? ++a1 : b  3

    printf("func(++a, b): %d\n", func(++a2, b));//2

    return 0;
}