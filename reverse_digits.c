#include <stdio.h>

int main()
{
	int n;
	printf("Insert a number of 3 digits: ");
	scanf("%3d", &n);

	printf("Reversed digits: %d%d%d", n%10, ((n%100)/10), n/100);

	return 0;
}
