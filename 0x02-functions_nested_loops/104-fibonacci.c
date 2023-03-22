#include <stdio.h>

int main()
{
	int a = 1, b = 2, c, count = 0;

	printf("%d, %d", a, b);
	count += 2;
	while (count < 98) {
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return 0;
}
