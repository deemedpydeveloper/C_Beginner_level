# include <stdio.h>

int main()
{
    int secondsLeft, hours, hoursLeft, minutes, seconds;
    printf("Enter the seconds left: ");
    scanf("%d", secondsLeft);

    hours = secondsLeft / 3600;
    hoursleft = seconds % 3600;
    minutes = hoursLeft / 60;
    seconds = hoursLeft % 60;

    printf("The Remaining time in H:M:S format is: %d:%d:%d\n",hours, minutes, seconds);

    return 0;
}
