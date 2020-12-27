#include <stdio.h>

int swapper(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("i: %d\n", *a);
    printf("z: %d\n", *b);
}

int main(){

    int arr[10];

    int i;
    for (i=0; i<10; i++){
        arr[i] = i+1;
    }
    for(i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }
    int z = 1;
    swapper(&i, &z);
    printf("i: %d\n", i);
    printf("z: %d\n", z);
}