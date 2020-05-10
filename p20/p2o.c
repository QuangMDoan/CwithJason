#include <stdio.h>

int main()
{
    int minutes_entered = 0.0;
    double years = 0.0;
    double days = 0.0;
    
    printf("Please enter the number of minutes: ");

    scanf("%d", &minutes_entered);

    double minutes_in_year = (60 * 24 * 365);
    years = (minutes_entered/ minutes_in_year);
    days = (minutes_entered / 60.0) / 24.0; 
    printf("minutes converted into a year = %f\n", years);
    printf("minutes converted into a day = %f\n", days);
}