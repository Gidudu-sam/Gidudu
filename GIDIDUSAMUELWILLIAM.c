#include <stdio.h>

int main() {

    int balance = 50000;
    int transaction;

    printf("Welcome to Mobile Money\n");
    printf("Your current balance is UGX %d\n", balance);

    while (balance > 0) {
        
        printf("\nEnter transaction amount (UGX) or 0 to exit: ");
        scanf("%d", &transaction);

        
        if (transaction == 0) {
            printf("Transaction cancelled. Exiting...\n");
            break;
        }

        
        if (transaction < 0) {
            printf("Invalid transaction amount. Please enter a positive amount.\n");
            continue;
        }

        
        if (transaction > balance) {
            printf("Insufficient balance! You only have UGX %d remaining.\n", balance);
            continue;
        }

        
        balance -= transaction;
        printf("Transaction successful! New balance: UGX %d\n", balance);

        
        if (balance == 0) {
            printf("Your balance is now zero. Exiting...\n");
            break;
        }
    }

    return 0;
}