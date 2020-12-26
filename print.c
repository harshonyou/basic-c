#include <stdio.h>

int integer(int x){
    printf("\nthis is integer: %d", x);
    return 0;
}

int charachter(char c){
    printf("\nthis is charachter: %c", c);
    return 0;
}

int input(){
    int inp;
    printf("\nEnter the number: ");
    scanf("%d", &inp);
    printf("Inputed int: %d", inp);
    return 0;
}

int floatanddouble(float f, double d){
    printf("\nthis is float: %f", f);
    printf("\nthis is double: %lf", d);
}

int ascii(char c){
    printf("\nthis is ascii value of %c: %d", c, c);
}

int multipleinput(){
    int a, b;
    printf("\nEnter two numbers: \n");
    scanf("%d%d", &a, &b);
    if (a>=b){
        printf("%d is bigger than or equals to %d", a, b);
    } else {
        printf("%d is bigger than or equals to %d", b, a);
    }
    return 0;
}

int main(){
    printf("yes please");
    integer(10);
    charachter('c');
    input();
    floatanddouble(101.1,4.12321341241321);
    ascii('x');
    multipleinput();
    return 0;
}

