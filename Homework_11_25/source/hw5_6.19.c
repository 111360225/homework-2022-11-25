#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(void)
{
	srand(time(0));
	int dice[13] = {0};

	int num1,num2,num3;

	for (int i = 0; i < 36000; i++)
	{
		num1 = (rand() % 6)+1;
		num2 = (rand() % 6)+1;
		num3 = num1 + num2;
		dice[num3]++;
	}

	printf("�I���`�X�{����:\n");
	for (int j = 2; j <= 12; j++)
	{
		printf("%d:%d\t", j, dice[j]);
	}
	printf("\n");
	system("pause");
	return 0;
}