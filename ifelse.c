#include <stdio.h>

int IF(){
    printf("Enter a positive number: ");
    int x;
    scanf("%d", &x);
    if(x<0){
        printf("You have entered negative number.\n");
    }
    printf("You have entered a number.\n");
    return 0;
}

int IFELSE(){
    printf("Enter an integer: ");
    int x;
    scanf("%d", &x);
    if(x%2==0){
        printf("%d is an even integer\n", x);
    }else{
        printf("%d is an odd integer\n", x);
    }
}

int IFELSEIFELSE(){
    printf("Enter two integers: \n");
    int x,y;
    scanf("%d%d", &x, &y);
    if (x==y){
        printf("%d is equal to %d\n", x, y);
    }else if(x>y){
        printf("%d is greater than %d\n", x, y);
    }else{
        printf("%d is smaller than %d\n", x, y);
    }
}

int main(){
    IF();
    IFELSE();
    IFELSEIFELSE();
    // nested if can be done with child ifelse condition within parent ifelse
    // ifelse does not need block if the following condition is sinlge line
}