#include <stdio.h>

int main()
{
	int dec, tmp, d5, d4, d3, d2, d1;
	printf("Insert a integer between 0 and 32767: ");
	scanf("%d", &dec);

	tmp = dec/8;
	d5 = dec%8;
	d4 = tmp%8;
	tmp = tmp/8;
	d3 = tmp%8;
	tmp = tmp/8;
	d2 = tmp%8;
	tmp = tmp/8;
	d1 = tmp%8;

	printf("%d%d%d%d%d", d5, d4, d3, d2, d1);
	printf("\n%o", dec);



	return 0;
}
