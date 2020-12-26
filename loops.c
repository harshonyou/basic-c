#include <stdio.h>

int forloop(int n){
    int i;
    for(i=0; i<=10; i++)
        printf("%d*%d = %d\n", n, i, n*i);
    return 0;
}

int whileloop(int n){
    printf("\nn = %d\n", n);
    int sum = 0;
    while(n>0)
        sum+=n--;
    printf("sum of n = %d\n", sum);
    return 0;
}

int dowhileloop(){
    int inp;
    do{
        printf("\nEnter the number which \ncauses Arithmatic Exception \nelse I will not stop : ");
        scanf("%d", &inp);
    } while(inp != 0);
    return 0;
}

int main(){
    forloop(10);
    whileloop(10);
    dowhileloop();
    // break can be use to stop the execution of the loop block and terminate it
    // where as continue can use to stop the execution of the loop block and re start the loop from the start of the block
}