#include <stdio.h>  
#include <string.h>  

void stringReverse();

char str[50];
int longer,temp;

void main(void)
{
	printf("��J�@��^��r�����A��: \n");
	scanf("%s", str);
	longer = strlen(str);
	stringReverse(longer);
	printf("���G��: \n%s \n", str);
	return 0;
}

void stringReverse(int how_long)
{
	for (int i = 0; i < how_long / 2; i++)
	{
		temp = str[i];
		str[i] = str[longer - (1 + i)];
		str[longer - (1 + i)] = temp;
	}
	return str;
}