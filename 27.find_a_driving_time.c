# include <stdio.h>

int main()
{
    int speed = 40, distance = 100;

    int time_in_hours;
    time_in_hours = distance / speed;

    int remaining_distance;
    remaining_distance = distance % speed;

    float speed_in_kmpm;
    speed_in_kmpm = (float)speed / 60;

    float remaining_time_in_minutes;
    remaining_time_in_minutes =  remaining_distance / speed_in_kmpm;

    printf("The Total time taken to travel from A to B is: %d hours and %.2f minutes\n", time_in_hours, remaining_time_in_minutes);

    return 0;
}
