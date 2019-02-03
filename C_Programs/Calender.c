#include <stdio.h>

#define TRUE 1
#define FALSE 0

int get_year(void)
{
	int year = 2018;
	printf("Enter a year: ");
	scanf("%i", &year);
	
	if( year<=0 )
	{
		printf("\n\n\n");
		return FALSE;
	}
	
	printf("\n\nCalendar of year %i\n",year);
	return year;
}

int get_day_code(int year)
{
	int day_code;
	day_code=( (year-1) + ( (year-1)/4 ) )%7;
	return day_code;
}

int get_leap_year(int year)
{
	if ( year%4 == 0)
		return TRUE;
	else
		return FALSE;
}

void print_calendar(int year, int day_code, int leap_year) 
{
	int days_in_month;		
	int day;		
	int month;	

	for (month = 1; month <= 12; month++)
	{
		switch (month)
		{
		case 1:
			printf("\n\n\nJanuary");
			days_in_month = 31;
			break;
		case 2:
			printf("\n\n\nFebruary");
			days_in_month = leap_year ? 29 : 28;
			break;
		case 3:
			printf("\n\n\nMarch");
			days_in_month = 31;
			break;
		case 4:
			printf("\n\n\nApril");
			days_in_month = 30;
			break;
		case 5:
			printf("\n\n\nMay");
			days_in_month = 31;
			break;
		case 6:
			printf("\n\n\nJune");
			days_in_month = 30;
			break;
		case 7:
			printf("\n\n\nJuly");
			days_in_month = 31;
			break;
		case 8:
			printf("\n\n\nAugust");
			days_in_month = 31;
			break;
		case 9:
			printf("\n\n\nSeptember");
			days_in_month = 30;
			break;
		case 10:
			printf("\n\n\nOctober");
			days_in_month = 31;
			break;
		case 11:
			printf("\n\n\nNovember");
			days_in_month = 30;
			break;
		case 12:
			printf("\n\n\nDecember");
			days_in_month = 31;
			break;
		}

		printf("\n\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");

		for (day = 1; day <= day_code; day++)
			printf("\t");
		
		for (day = 1; day <= days_in_month; day++)
		{
			printf("%2d\t", day);
			if ((day + day_code) % 7 == 0) 
				printf("\n");
		}
		day_code = (day_code + days_in_month) % 7;
	}
}

int main()
{
	int year, day_code, leap_year;

	year = get_year();
	
	if( year!=FALSE )
	{
		day_code = get_day_code(year);
		leap_year = get_leap_year(year);
		print_calendar(year, day_code, leap_year);
	}
	
	printf("\n\n");
	return 0;
}
