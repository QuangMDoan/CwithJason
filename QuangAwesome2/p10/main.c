#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutesEntered = 0
    double years = 0.0;
    double days = 0.0
    double minutesInYear

    printf("Please enter the number of minutes: ");

    scanf("%d", &minutesEntered);

    minutesInYear = (60 * 24 *365);

    years = (minutesEntered / MinutesInYear);
    days = (minutesEntered / 60.0 * 24.0);

    printf("%d minutes is approximately %f years and %f days", minutesEntered, years, days);


    return 0;
}
