#include <stdio.h>
#include <math.h>

int main() {
    float num1,num2;
    char operator;
    float result;
    printf("Enter two values: ");
    scanf("%f %f",&num1,&num2);

    printf("Enter your operator: ");
    scanf(" %c",&operator);

    switch(operator){
       case '+':
       result=num1+num2;
       printf("Result=%.2f",result);
       break;
       case '-':
        result=num1-num2;
       printf("Result=%.2f",result);
       break;
       case '*':
        result=num1*num2;
       printf("Result=%.2f",result);
       break;
       case '/':
        result=num1/num2;
       printf("Result=%.2f",result);
       break;
       case '%':
        result=fmod(num1,num2);
       printf("Remainder=%.2f",result);
       break;
       default:
       printf("Inalid operator!");
    }



    return 0;
}