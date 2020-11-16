#include <stdio.h>

int main()
{
	int old_hours, old_minutes, new_hours;
	char sufix;
	
	printf("Insert a 24-hour time (hh:mm): ");
	scanf("%2d:%2d", &old_hours, &old_minutes);

	if (old_hours > 12)
	{
		new_hours = old_hours - 12;
		sufix = 'p'; 
	}
	else
       	{
		new_hours = old_hours;
		sufix = 'a';
	}
	if (old_hours == 0) new_hours = 12;

	printf("Time: %02d:%02d%cm", new_hours, old_minutes, sufix);

	return 0;
}
