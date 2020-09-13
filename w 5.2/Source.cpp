#include<stdio.h>
void butterfly(int n) {
	for (int i = 1; i <= 2 * n - 1; i++)
	{
		for (int j = 1; j <= 2 * n - 1; j++)
		{
			if (i + j <= 2 * n && i >= j || i + j >= 2 * n && i <= j)
			{
				printf("* ");
			}
			else
				printf("  ");
		}
		printf("\n");
	}
}


int main() {
	int m;
	scanf_s("%d", &m);
	butterfly(m);
	return 0;
}