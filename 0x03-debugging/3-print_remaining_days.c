#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
	    if (month >= 2 && day >= 60)
	    {
		    printf("Day of the year: %d\n", day);
		    printf("Remaining days: %d\n", 366 - day);
	    }
	    else if (month >= 2 && day < 60)
		    printf("Invalid date: %02d/%02d/%04d ! It's a leap year\n", month, day, year);
	    if (month == 1 && day >= 1 && day <= 31)
	    {
		    printf("Day of the year: %d\n", day);
		    printf("Remaining days: %d\n", 366 - day);
	    }
	    else
		    printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else
    {
	    if (month == 1 && day >= 1 && day <= 31)
	    {
		     printf("Day of the year: %d\n", day);
		     printf("Remaining days: %d\n", 365 - day);
	    }
	    else 
		    printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	    if (month >= 2 && day >= 59)
	    {
		    printf("Day of the year: %d\n", day);
		    printf("Remaining days: %d\n", 365 - day);
	    }
	    else if (month == 2 && day >= 29)
		    printf("Invalid date: %02d/%02d/%04d ! Not a leap year\n", month, day - 31, year);
    }
}
