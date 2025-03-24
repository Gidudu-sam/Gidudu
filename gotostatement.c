#include <stdio.h>

int main() {
    int num;
    
    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Decision using goto
    if (num % 2 == 0)
        goto even;
    else
        goto odd;
    
even:
    printf("The number %d is even.\n", num);
    return 0;

odd:
    printf("The number %d is odd.\n", num);
    return 0;
}