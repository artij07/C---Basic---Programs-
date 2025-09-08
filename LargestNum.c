#include<stdio.h>
int main(){
    int a , b;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter a number\n");
    scanf("%d",&b);
    if(a>b){
        printf("a is greater than b\n");
        if(b>a){
            printf("b is greater than a\n");
        }
        } else {
            printf(" a and b are equal\n");
        }
        return 0;
    }
