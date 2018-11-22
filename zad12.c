#include <stdio.h>

int
main()
{
	int number, number_of_100, number_of_50, residue, residue2;

	scanf("%d", &number);
	number_of_100 = number / 100;

	for (; number_of_100 >= 0; number_of_100--) {
		residue = number - number_of_100 * 100;

		for (number_of_50 = residue / 50; number_of_50 >= 0; number_of_50--)
			if ((residue2 = residue - number_of_50 * 50) % 20 == 0)
				printf("%d PLN = %d*100 + %d*50 + %d*20\n", number, number_of_100, number_of_50, residue2 / 20);
	}

	return (0);
}
