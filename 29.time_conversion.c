# include <stdio.h>
# include <stdlib.h>

int main()
{
    int totalSeconds, hours, minutes, seconds;

    printf("Enter the total seconds need to be converted: ");

    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;

    minutes = (totalSeconds - hours * 3600) / 60;

    seconds = (totalSeconds - hours * 3600) % 60;

    printf("The Remaining time in H:M:S format is: %dH:%dM:%dS", hours, minutes, seconds);

    return 0;
}
