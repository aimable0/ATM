#include <stdio.h>

#define INITIAL_BALANCE 0.00

// Function declarations
void check_balance(double balance);
double deposit(double current_balance, double amount);
double withdraw(double current_balance, double amount);

int main(void) {
    int usr_choice = 0;
    double balance = INITIAL_BALANCE;
    double amount = 0.00;

    printf("\n============ ATM (SIMULATOR) ===========\n\n");

    while (1) {
        // Display menu
        printf("Choose:\n");
        printf("  (1) Deposit Money\n");
        printf("  (2) Check Account Balance\n");
        printf("  (3) Withdraw Money\n");
        printf("  (4) Exit\n\n");

        // Get user choice
        printf("(prompt) Choose action [1-4]: ");
        if (scanf("%d", &usr_choice) != 1) {
            printf("Invalid input. Please enter a number!\n\n");
            // clear invalid buffer
            while (getchar() != '\n');
            continue;
        }

        while (getchar() != '\n'); // clear any leftover input

        // Handle user choice
        switch (usr_choice) {
            case 1: // Deposit
                printf("\n$$ Enter amount to deposit: ");
                scanf("%lf", &amount);

                // clear any leftover input
                while(getchar() != '\n');

                if (amount <= 0) {
                    printf("Invalid amount! Must be greater than 0.\n\n");
                } else {
                    balance = deposit(balance, amount);
                    printf("++ $%.2f deposited successfully!\n\n", amount);
                }
                break;

            case 2: // Check balance
                check_balance(balance);
                break;

            case 3: // Withdraw
                printf("\n$$ Enter amount to withdraw: ");
                scanf("%lf", &amount);

                // clear any leftover input
                while(getchar() != '\n');

                if (amount <= 0) {
                    printf("Invalid amount! Must be greater than 0.\n\n");
                } else if (amount > balance) {
                    printf("Not enough funds! Current balance: $%.2f\n\n", balance);
                } else {
                    balance = withdraw(balance, amount);
                    printf("-- Withdrawal of $%.2f successful.\n\n", amount);
                    check_balance(balance);
                }
                break;

            case 4: // Exit
                printf("\n... Goodbye! Thanks for using ATM Simulator ...\n\n");
                break;

            default:
                printf("Oops! Invalid option. Please choose between 1-4.\n\n");
                break;
        }
    }

    return 0;
}

// Function implementations
void check_balance(double balance) {
    printf("\n$$ Current Balance: $%.2f\n\n", balance);
}

double deposit(double current_balance, double amount) {
    return current_balance + amount;
}

double withdraw(double current_balance, double amount) {
    return current_balance - amount;
}