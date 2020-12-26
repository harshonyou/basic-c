// making classic calculator for classic c language xd
#include <stdio.h>

int calc(){
    char operation;
    double x,y;
    do{
        printf("Enter an operation -> [+, -, *, /] : \n");
        scanf(" %c", &operation);
        if(operation=='0') break;
        printf("Enter two operands: \n");
        scanf("%lf%lf", &x, &y);
        switch (operation){
            case '+':
                printf("%.1lf + %.1lf = %.1lf\n", x, y, x+y);
                break;
            case '-':
                printf("%.1lf - %.1lf = %.1lf\n", x, y, x-y);
                break;
            case '*':
                printf("%.1lf * %.1lf = %.1lf\n", x, y, x*y);
                break;
            case '/':
                printf("%.1lf / %.1lf = %.1lf\n", x, y, x/y);
                break;
            default:
                break;
        }
    }while(operation!='0');
    return 0;
}

int gotojump(){
    int i;
    for(i=1; i<10; i++)
        x: if(i%2==0)
            goto print;
    print:
        printf("\n%d is a prime number.", i);
        i++;
        if(i<10)
            goto x;
    return 0;
}

int main(){
    calc();
    gotojump();
}