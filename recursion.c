#include <stdio.h>

int factorial(int n){
    if (n<=0)
        return 1;
    return n * factorial(n-1);
}

int main(){
    int num, fact;
    printf("Enter number to find factorial: ");
    scanf(" %d", &num);
    fact = factorial(num);
    printf("Factorial: %d", fact);
    return 0;
}