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
    char* d = &a;

    tRef r = {&a, b, &c};

    printf("sizeof(r): %d\n", sizeof(r));
    printf("sizeof(r.befor): %d\n", sizeof(r.before));
    printf("sizeof(r.affter): %d\n", sizeof(r.after));

    printf("&r.before: %p\n", &r.before);
    printf("&r.affter: %p\n", &r.after);


    printf("sizeof(b): %d\n", sizeof(b));
    printf("sizeof(*d): %d\n", sizeof(*d));


}

// sizeof(r): 24
// sizeof(r.befor): 8
// sizeof(r.affter): 8
// &r.before: 0x7fff97120d10
// &r.affter: 0x7fff97120d20
// sizeof(b): 1
// sizeof(*d): 1
