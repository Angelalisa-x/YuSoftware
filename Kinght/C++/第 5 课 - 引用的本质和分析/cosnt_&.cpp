#include <stdio.h>

void const_1(){

    const int& b = 1; //区别, 编译器为分配（int）大小字节的空间，并且命名为 b
    int* p = (int*)&b;
    printf("b: %d, *p: %d\n", b, *p);

    *p = 5;
    printf("b: %d, *p: %d\n", b, *p);

}

void const_2(){

    const int b = 1; //区别,
    int* p = (int*)&b;  //分配空间
    printf("b: %d, *p: %d\n", b, *p);

    *p = 5;
    printf("b: %d, *p: %d\n", b, *p);

}

void const_3(){

    int a = 2;
    const int& b = a;   //区别
    int* p = (int*)&b;
    printf("a: %d, b: %d, *p: %d\n", a, b, *p);

    *p = 5;
    printf("a: %d, b: %d, *p: %d\n", a, b, *p);
}


int main()
{
    const_1();
    const_2();
    const_3();


    return 0;

}

// b: 1, *p: 1
// b: 5, *p: 5
// b: 1, *p: 1
// b: 1, *p: 5
// a: 2, b: 2, *p: 2
// a: 5, b: 5, *p: 5
