#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1,num2;
    char op;

    printf("Enter a number:");
    scanf("%lf",&num1);

    printf("Enter a number:");
    scanf("%lf",&num2);

    printf("Enter a operator(+,-,*,/):");
    scanf(" %c",&op);

    if (op =='+'){
        printf("Answer = %.2lf",num1+num2);
    }else if (op == '-') {
        printf("Answer = %.2lf",num1-num2);
    }else if (op == '*'){
        printf("Answer = %.2lf",num1*num2);
    }else if (op == '/'){
        if (num2!=0){
            printf("Answer = %.2lf",num1/num2);
        }else{
            printf("Zero Division error!");
        }
        }
     else{
        printf("Invalid operator!");
    }

    return 0;
}
