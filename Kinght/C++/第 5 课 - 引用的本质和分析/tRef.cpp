#include <stdio.h>

struct tRef
{
    char* before;
    char& ref;
    char* after;
};


int main()
{
    char a = 'a';
    char& b = a;
    char c = 'c';

    tRef r = {&a, b, &c};

    printf("sizeof(r): %d\n", sizeof(r));
    printf("sizeof(r.befor): %d\n", sizeof(r.before));
    printf("sizeof(r.affter): %d\n", sizeof(r.after));

    printf("&r.before: %p\n", &r.before);
    printf("&r.affter: %p\n", &r.after);


}