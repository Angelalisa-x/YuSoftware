#include <stdio.h>

//引用 （相当于自动挡车）
void swap_1(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}

//指针 （相当于手动挡车）
void swap_2(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}


int main()
{
    int a = 1;
    int b = 2;

    swap_1(a, b);
    printf("a: %d, b: %d\n", a, b);

    swap_2(&a, &b);
    printf("a: %d, b: %d\n", a, b);


    return 0;
}