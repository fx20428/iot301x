#include <stdio.h>

#define PAYRATE 12.00       // $12 per hours
#define TAX_RATE_300 0.15   // 15%
#define TAX_RATE_450 0.20   // 20%
#define TAX_RATE_REST 0.25  // 25%
#define MAX_WORKING_TIME 40 // hours

int main(void)
{
    unsigned int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    printf("Nhap so gio lam: ");
    scanf("%d", &hours);

    if (hours <= MAX_WORKING_TIME)
    {
        grossPay = hours * PAYRATE;
    }
    else
    {
        grossPay = MAX_WORKING_TIME * PAYRATE;
        double overTimePay = (hours - MAX_WORKING_TIME) * (PAYRATE * 1.5);
        grossPay += overTimePay;
    }

    if (grossPay <= 300)
    {
        taxes = grossPay * TAX_RATE_300;
    }
    else if (grossPay <= 450)
    {
        taxes = 300 * TAX_RATE_300;
        taxes += (grossPay - 300) * TAX_RATE_450;
    }
    else
    {
        taxes = 300 * TAX_RATE_300;
        taxes += 150 * TAX_RATE_450;
        taxes += (grossPay - 450) * TAX_RATE_REST;
    }

    netPay = grossPay - taxes;

    printf("Your gross pay this week is: %.2lf\n", grossPay);
    printf("Your taxes this week is: %.2lf\n", taxes);
    printf("Your net pay this week is: %.2lf\n", netPay);

    return 0;
}