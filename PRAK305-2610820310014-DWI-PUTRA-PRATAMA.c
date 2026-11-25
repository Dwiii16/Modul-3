#include <stdio.h>

int main() 
{
    int seconds;
    int days, hours, minutes;

    scanf("%d", &seconds);

    days = seconds / 86400;
    seconds = seconds % 86400;

    hours = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    seconds = seconds % 60;

    if (days > 0) {
        printf("%d hari %02d:%02d:%02d\n", days, hours, minutes, seconds);
    } 
    else {
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    }

    return 0;
}