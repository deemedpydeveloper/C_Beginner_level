# include <stdio.h>

int main()
{
    int day, month, year, leap_year;

    // Assuming initially year is not a leap year.
    leap_year = 0;

    // Reading Inputs from Console.
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Check if the give year is leap year.
    if (month == 2)
        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
            leap_year = 1;
    day += 1;

    // If not a leap year, check the day and month.
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        // for either of above months.
        if (day <= 31)
            // if (day == 31)
            //month += 1;
            //day = 1;
            // else if (day < 31)
            // day += 1
            break;
    case 4:
    case 6:
    case 9:
    case 11:
        // for either of above months.
        if (day <= 30)
            // if (day == 30)
            //month += 1;
            //day = 1;
            // else if (day < 30)
            // day += 1
            break;
    case 2:
        if ((day <= 29) && (leap_year == 1))
            //if (day == 29)
            // month += 1
            // day = 1
            //else if (day < 29)
            // day += 1

            break;
        else if (day <= 28)
            break;
    // above repeated operations can be used in default block.
    default:
        month += 1;
        day = 1;
        if (month > 12)
            month = 1;
            year += 1;
    }

    printf("%d/%d/%d\n", day, month, year);
    return 0;
}
