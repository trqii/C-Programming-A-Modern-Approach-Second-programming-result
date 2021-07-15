#include <stdio.h>

int main()
{
	int hours, minutes;
	int time;
	char ch;

	printf("Enter a 12-hour time:");
	scanf("%d:%d %c", &hours, &minutes, &ch);

	if (ch == 'a' || ch == 'A') {
		time = hours * 60 + minutes;
	}
	else if (ch == 'p' || ch == 'P') {
		time = hours * 60 + minutes + 720;
	}
	else {
		printf("ERROR.\n");
		return 0;
	}

	if (time < 480) {
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
	}
	else if (time < 583) {
		if ((time - 480) < (583 - time)) printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
		else printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
	}
	else if (time < 679) {
		if ((time - 583) < (679 - time)) printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
		else printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m");
	}
	else if (time < 767) {
		if ((time - 679) < (767 - time)) printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
		else printf("Closest departure time is 12:47 a.m., arriving at 3:00 p.m");
	}
	else if (time < 840) {
		if ((time - 767) < (840 - time)) printf("Closest departure time is 12:47 a.m., arriving at 3:00 p.m.");
		else printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
	}
	else if (time < 945) {
		if ((time - 840) < (945 - time)) printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
		else printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
	}
	else if (time < 1140) {
		if ((time - 945) < (1140 - time)) printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
		else printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
	}
	else {
		if ((time - 1140) < (1305 - time)) printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
		else printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
	}

	return 0;
}



