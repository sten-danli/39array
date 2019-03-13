//39线性查找实现
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int findData = 2;
	int ret = -1;
	int zahl;
	printf("Gib ein Zahl zwischen >0 & <10 ein: ");
	scanf("%d", &zahl);
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == zahl)
			ret = i;
	}
	if (ret == -1)
		printf("Data not find");
	else
		printf("Find Data in Array number [%d].",ret);
	return 0;
}

