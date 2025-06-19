#include <stdio.h>
#include <string.h>

// Function declarations
int login();
void showMenu();
void checkBalance(double balance);
double depositMoney(double balance);
double withdrawMoney(double balance);

int main() {
    double balance = 1000.00;

    printf("Welcome to the ATM!\n");
    printf("Please log in to continue.\n");

    if (login()) {
        int choice;
        do {
            showMenu();
            scanf("%d", &choice);
            switch (choice) {
                case 1:
                    checkBalance(balance);
                    break;
                case 2:
                    balance = depositMoney(balance);
                    break;
                case 3:
                    balance = withdrawMoney(balance);
                    break;
                case 4:
                    printf("Thank you for using the ATM. Goodbye!\n");
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
            }
        } while (choice != 4);
    }

    return 0;
}

int login() {
    char username[25];
    int pin;

    printf("Please enter your username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0'; // Remove newline

    while (strlen(username) == 0) {
        printf("You must enter a username. Try again: ");
        fgets(username, sizeof(username), stdin);
        username[strcspn(username, "\n")] = '\0';
    }

    printf("Please enter your PIN: ");
    scanf("%d", &pin);
    while (pin != 1234) {
        printf("Incorrect PIN. Please try again: ");
        scanf("%d", &pin);
    }

    printf("Login successful! Welcome, %s.\n", username);
    return 1;
}

void showMenu() {
    printf("\n--- ATM Menu ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

void checkBalance(double balance) {
    printf("Your current balance is: $%.2f\n", balance);
}

double depositMoney(double balance) {
    double deposit;
    printf("Enter the amount to deposit: $");
    scanf("%lf", &deposit);
    if (deposit <= 0) {
        printf("Invalid deposit amount.\n");
        return balance;
    }
    balance += deposit;
    printf("Deposit successful! New balance: $%.2f\n", balance);
    return balance;
}

double withdrawMoney(double balance) {
    double withdraw;
    printf("Enter the amount to withdraw: $");
    scanf("%lf", &withdraw);
    if (withdraw <= 0 || withdraw > balance) {
        printf("Invalid withdrawal amount.\n");
        return balance;
    }
    balance -= withdraw;
    printf("Withdrawal successful! New balance: $%.2f\n", balance);
    return balance;
}
