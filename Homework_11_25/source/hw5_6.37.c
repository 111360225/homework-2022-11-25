#include<stdio.h>
#include<string.h>

int str[20],num,biggest;
int state = 1;
int time = 0;

void main(void) {
	printf("請輸入數字，輸入0代表輸入結束\n");
	while (state != 0) {
			scanf("%d", &num);
			time++;
			if (num == 0 || time > 19)
			{
				state = 0;
			}
			str[time] = num;
	}
	biggest = 0;
	for (int i = 0; i <= time; i++) {
		if (biggest < str[i])
		{
			biggest = str[i];
		}
	}
	printf("%d為最大值", biggest);
}