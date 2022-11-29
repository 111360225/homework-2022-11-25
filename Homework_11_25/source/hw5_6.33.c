#include<stdlib.h>
#include<stdio.h>

void main(void)
{
	int roll[32] = { 16,96,40,28,13,71,25,02,64,15,26,48,91,
  06,76,43,68,97,42,38,07,12,23,45,56,78,89,90,10,52,63,74 };
	int answer;
	int times = 32;
	int temp2 = times/2;
	int temp4 = 32;
	int temp, temp3;

	for (int k = 0; k < 32; k++)
	{
		printf(" %d ", roll[k]);
	}

	printf("\n");
	printf("叫块璶琩高计:");
	scanf("%d", &answer);

	for (int i = 0; i < 31; i++)
	{
		for (int j = 0; j < 31; j++)
		{
			if (roll[j + 1] < roll[j])
			{
				temp = roll[j];
				roll[j] = roll[j + 1];
				roll[j + 1] = temp;
			}
		}
	}

	for (int k = 0; k < 32; k++)
	{
		printf(" %d ", roll[k]);
	}

	printf("\n");

	do
	{
		temp2 = temp2 - 1;
		if (roll[temp2] > answer)
		{
			times = times / 2;
			temp3 = times;
			temp2 = temp2 + 1 -( temp3 / 2);
		}
		else if (roll[temp2] < answer)
		{
			times = times /2;
			temp3 = times;
			temp2 = temp2 +1 +( temp3 /2);
		}
		else if (roll[temp2] = answer)
		{
			printf("氮计材%d 计%d\n", temp2+1, roll[temp2]);
			system("pause");
			return 0;
		}
	} while (times >= 1);


	printf("-1");
}