#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAX_REST .25
#define OVERTIME 40

int main()
{
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    printf("Please enter the number of hoursworked this week: ");

    scanf("%d", &hours);

    if(hours <= 40)
        grossPay = hours * PAYRATE;
    else
    {
        grossPay = 40 * PAYRATE;
        double overTimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overTimePay;
    }

    if(grossPay <= 300)
    {
        taxes = grossPay * TAXRATE_300;
    }
    else if(grossPay > 300 && grossPay <= 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_150;
    }
    else
    {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay - 450) * TAX_REST;
    }

    netPay = grossPay - taxes;

    printf("Your gross pay this week is: %.2f\n", grossPay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your net pay this week is: %.2f\n", netPay);
}