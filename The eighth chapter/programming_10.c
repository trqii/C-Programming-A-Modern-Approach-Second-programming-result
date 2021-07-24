#include<stdio.h>
#include<math.h>

int main()
{
	int leave[8] = { 480, 583, 679, 767, 840, 945, 1140, 1305 };
	int arrive[8] = { 616, 712, 811, 900, 968, 1075, 1280, 1438 };
	int hours, minutes;
	int time;
	int i;
	int min = 1440, m;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);

	time = hours * 60 + minutes;

	for(i = 0; i < 8; i++)
	{
		if(abs(leave[i] - time) < min)
		{ 
			min = abs(leave[i] - time);
			m = i;
		}
	}

	if(leave[m] / 60 > 12)
	{		
			printf("CLosest departure time is %d:%.2d p.m.", leave[m] / 60 - 12, leave[m] % 60);
			printf(", arriving at %d:%.2d p.m.", arrive[m] / 60 - 12, arrive[m] % 60);		
	}
	else
	{
		if (arrive[m] / 60 > 12)
		{
			printf("CLosest departure time is %d:%.2d a.m.", leave[m] / 60, leave[m] % 60);
			printf(", arriving at %d:%.2d p.m.", arrive[m] / 60 - 12, arrive[m] % 60);
		}
		else 
		{
			printf("CLosest departure time is %d:%.2d a.m.", leave[m] / 60, leave[m] % 60);
			printf(", arriving at %d:%.2d a.m.", arrive[m] / 60, arrive[m] % 60);
		}

	}

	return 0;
}