#include <stdio.h>

int arithmatic(int a, int b){
    int c;
    c = a+b;
    printf("a+b = %d", c);
    c = a-b;
    printf("\na-b = %d", c);
    c = a*b;
    printf("\na*b = %d", c);
    c = a/b;
    printf("\na/b = %d", c);
    c = a%b;
    printf("\na\%b = %d", c);

    return 0;
}

int incdec(int x){
    int y;
    printf("\nx = %d",x);
    y = x;
    printf("\n++x = %d", ++y);
    y = x;
    printf("\nx++ = %d", y++);
    y = x;
    printf("\n--x = %d", --y);
    y = x;
    printf("\nx-- = %d", y--);

    return 0;
}

int assignment(int x){
    int r;
    printf("\nx = %d", x);
    r = x;
    printf("\nr = x = %d", r);
    r += x;
    printf("\nr += x = %d", r);
    r -= x;
    printf("\nr -= x = %d", r);
    r *= x;
    printf("\nr *= x = %d", r);
    r /= x;
    printf("\nr /= x = %d", r);
    r %= x;
    printf("\nr %= x = %d", r);

    return 0;
}

int relation(int a, int b, int c){
    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
}

int logical(int a, int b, int c){
    int result;
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);
    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);
    result = !(a != b);
    printf("!(a != b) is %d \n", result);
    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}

int sizeoff(){
    int a;
    float b;
    double c;
    char d;
    printf("Size of int = %lu bytes\n",sizeof(a));
    printf("Size of float = %lu bytes\n",sizeof(b));
    printf("Size of double = %lu bytes\n",sizeof(c));
    printf("Size of char = %lu byte\n",sizeof(d));

    return 0;
}

int main(){
    arithmatic(9, 4);
    incdec(10);
    assignment(5);
    relation(5, 5, 10);
    logical(5, 5, 10);
    sizeoff();
}