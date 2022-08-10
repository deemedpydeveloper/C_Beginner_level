# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main()
{
    int time_in_second, time_in_hours, time_in_minutes, time_in_seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &time_in_second);

    time_in_hours = time_in_second / 3600;
    time_in_minutes = (time_in_second % 3600) / 60;
    time_in_seconds = (time_in_second % 3600) % 60;

    if (time_in_hours < 10)
        printf("0");
    printf("%d:", time_in_hours);

    if (time_in_minutes < 10)
        printf("0");
    printf("%d:", time_in_minutes);

    if (time_in_seconds < 10)
        print("0");
    printf("%d:\n", time_in_seconds);

    return 0;
}
