#include <stdio.h>

int main()
{
	int month, year, day;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%4d", &month, &day, &year);
	printf("You entered the date: %.4d/%.2d/%.2d", year, month, day);

	return 0;
}
