#include <stdio.h>
void sort(int* array, int length);
int main()
{
    int array[]={45,56,76,234,1,34,23,2,3}; //数字任//意给出
    printf("sizeof(array): %d sizeof(array[0]: %d\n", (int)sizeof(array), (int)sizeof(array[0]));
    int length = sizeof(array) / sizeof(array[0]);
    sort(array, length);

    for(int i = 0; i < length; i++){
        printf("array[%d]: %d\n", i, array[i]);
    }

    return 0;
}

void sort(int* array, int length)
{
    printf("Array length: %d\n", length);

    for(int i = 0; i < length; i++ ){
        int min = i;

        for(int j = i + 1; j < length; j++){
            if(array[min] < array[j]){
                min = j;
            }
        }

        if(min != i){
            int mid = array[i];
            array[i] = array[min];
            array[min] = mid;
        }
    }

}
 