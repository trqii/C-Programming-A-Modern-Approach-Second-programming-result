#include <stdio.h>
 
int main()
{
    int month, date, year;
	int m, d, y;
    int time;
 
    printf("Enter the date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &date, &year);
   
    time = month * 31 + date + year * 365;
	m = month;
	d = date;
	y = year;

    while(time)
	{
        printf("Enter the date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &date, &year);

		if(month + date + year == 0)
			break;
		if(time > month * 31 + date + year * 365)
		{
			time = month * 31 + date + year * 365;
			m = month;
			d = date;
			y = year;
		}

    }	

    printf("%d/%d/%.2d is the earlier date\n", m, d, y);
 
    return 0;
}

