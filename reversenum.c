#include <stdio.h>

int main() {
    int num = 1234;   
    int rev = 0, digit;

    printf("Original number: %d\n", num);

    while (num > 0) {
        digit = num % 10;        
        rev = rev * 10 + digit;  
        num = num / 10;          
        }

    printf("Reversed number: %d\n", rev);

    return 0;
}
