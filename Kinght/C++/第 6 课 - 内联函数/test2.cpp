#include <stdio.h>

__attribute__((always_inline))
//_forceinlie
//inline 
int add_inline(int n);

int main()
{
    printf("%d\n", add_inline(100));

    return 0;

}

inline int add_inline(int n){
    
    int ret = 0;
    for(int i = 0; i < n; i++){

        ret += i;

    }

    return ret;
}