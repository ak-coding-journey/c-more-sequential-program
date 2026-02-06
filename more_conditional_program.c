#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;
    int year, num;

    // Profit or Loss
    printf("Enter cost price: ");
    scanf("%f", &costPrice);
    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    amount = sellingPrice - costPrice;
    if (amount > 0) {
        printf("\nProfit of Rs %.2f\n\n", amount);
    }
    if (amount < 0) {
        printf("\nLoss of Rs %.2f\n\n", -amount);
    }
    if (amount == 0) {
        printf("\nNo profit, no loss\n\n");
    }

    // Leap Year
    printf("Enter any year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("\nLeap Year\n\n");
    }
    else {
        printf("\nNot a leap year\n\n");
    }

    // Divisible by 5
    printf("Enter any integer: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf("\n%d is divisible by 5\n\n", num);
    }
    else {
        printf("\n%d is not divisible by 5\n\n", num);
    }

    return 0;
}
