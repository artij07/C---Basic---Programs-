#include<stdio.h>
int main(){
    int a;
    printf("Enter any number\n");
    scanf("%d",&a);
    if(a % 2 == 0){
        printf("The entered number is even\n");
    } else {
        printf("The entered number is odd\n");
    }
}