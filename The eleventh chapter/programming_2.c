
#include<stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
	if (desired_time <= ((8 * 60) + (103 / 2)))
	{
		*departure_time = 8 * 60;
		*arrival_time = 10 * 60 + 16;
	}
	else if (desired_time < ((9 * 60) + 43) + (96 / 2))
	{
		*departure_time = 9 * 60 + 43;
		*arrival_time = 11 * 60 + 52;
	}
	else if (desired_time < ((11 * 60) + 19) + (88 / 2))
	{
		*departure_time = 11 * 60 + 19;
		*arrival_time = 13 * 60 + 31;
	}
	else if (desired_time <= ((12 * 60) + 47) + (73 / 2))
	{
		*departure_time = 12 * 60 + 47;
		*arrival_time = 15 * 60;
	}
	else if (desired_time <= ((14 * 60) + (105 / 2)))
	{
		*departure_time = 14 * 60;
		*arrival_time = 15 * 60 + 8;
	}
	else if (desired_time <= ((15 * 60) + 45) + (195 / 2))
	{
		*departure_time = 15 * 60 + 45;
		*arrival_time = 17 * 60 + 55;
	}
	else if (desired_time <= ((19 * 60) + (165 / 2)))
	{
		*departure_time = 19 * 60;
		*arrival_time = 21 * 60 + 20;
	}
	else
	{
		*departure_time = 21 * 60 + 45;
		*arrival_time = 23 * 60 + 58;
	}
}
int main()
{
	int hour, minute;
	int time;
	int departure_time, arrival_time;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	time = hour * 60 + minute;

	find_closest_flight(time, &departure_time, &arrival_time);
	printf("Closest departure time is ");

	if (departure_time / 60 < 12)
	{
		hour = departure_time / 60;
		minute = departure_time % 60;
		printf("%d:%.2d a.m, arriving at ", hour, minute);
	}
	else
	{
		hour = departure_time / 60 - 12;
		if (hour == 0)
			hour = 12;
		minute = departure_time % 60;
		printf("%d:%.2d p.m, arriving at ", hour, minute);
	}

	if (arrival_time / 60 < 12)
	{
		hour = arrival_time / 60;
		minute = arrival_time % 60;
		printf("%d:%.2d a.m\n", hour, minute);
	}
	else
	{
		hour = arrival_time / 60 - 12;
		if (hour == 0)
			hour = 12;
		minute = arrival_time % 60;
		printf("%d:%.2d p.m\n", hour, minute);
	}

	return 0;
}