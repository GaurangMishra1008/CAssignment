#include <stdio.h>

int main() {
    int pieces, discount = 0;
    char ch;
    float payment, total_payment;
    printf("Choose Retailer or Customer.\nC = Customer\nR =  Retailer");
    scanf("%c", &ch);
if (ch=='r')
{
    printf("Enter the number of pieces: ");
    scanf("%d", &pieces);

    if (pieces >= 1 && pieces <= 15) {
        discount = 15;
    } else if (pieces >= 16 && pieces <= 30) {
        discount = 30;
    } else if (pieces >= 31 && pieces <= 50) {
        discount = 50;
    }
        printf("Pieces: %d\n", pieces);
    printf("Discount: %d%%\n\n", discount);

}
else if(ch=='c')
{
    printf("Enter payment: ");
    scanf(" %f", &payment);

    if (payment >= 1000 && payment <= 2000) {
        total_payment = payment - (payment * 0.1);
        discount = 10;
    } else if (payment >= 100 && payment <= 1000) {
        total_payment = payment - (payment * 0.05);
        discount = 5;
    } else if (payment > 2000 && payment <= 3000) {
        total_payment = payment - (payment * 0.15);
        discount = 15;
    } else if (payment > 3000) {
        total_payment = payment - (payment * 0.3);
        discount = 30;
    } else {
        total_payment = payment;
    }

    printf("Payment: %.2f\n", payment);
    printf("Discount: %d%%\n", discount);
    printf("Total payment: %.2f\n", total_payment);

}
    return 0;
}
