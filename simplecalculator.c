#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter a number\n");
    scanf("%d",&b);
    int sum;
    sum = a+b;
    printf("Sum of two number is %d\n",sum);
    int sub;
    sub = a-b;
    printf("Substraction of two numbers is %d\n",sub);
    int mul;
    mul = a*b;
    printf("Multiplication of two numbes is %d\n",mul);
    int div;
    div = a/b;
    printf("Division of two numbers is %d\n",div);
    return 0;
}