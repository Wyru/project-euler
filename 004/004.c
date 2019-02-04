#include <stdio.h>
#include <math.h>
#include <string.h>

void reverseStr(char str[])
{
	int n = strlen(str);
	char aux;
	for (int i = 0; i < n / 2; i++)
	{
		aux = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = aux;
	}
}

int checkPlaindrome(int num)
{
	char str[15];
	sprintf(str, "%d", num);
	char str2[15] = "";
	strncpy(str2, str, strlen(str));
	reverseStr(str2);

	if (strcmp(str, str2) == 0)
		return 1;
	return 0;
}

int main()
{
	int i, j;
	int num, largest;
	largest = 0;

	for (i = 100; i <= 999; i++)
	{
		for (j = 100; j <= 999; j++)
		{
			num = i * j;
			if (checkPlaindrome(num) == 1 && num > largest)
			{
				largest = num;
			}
		}
	}

	printf("%d\n", largest);

	return 0;
}