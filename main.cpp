#include<iostream>
#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>


typedef void(*DFunc)(int*);

void  DispResult(int* s) {
	
}

void setTimeout(DFunc d, int second) {
	Sleep(second * 1000);
	d(&second);
}

int main() {
	int dice;
	int n;

	printf("サイコロを振るので、出目が半(奇数)か丁(偶数)かを当ててください\n");

	srand((unsigned int)time(NULL));
	dice = rand() % 6 + 1;

	printf("半(奇数)か丁(偶数)か予想してください\n");
	printf("半(奇数)だと思うなら1、丁(偶数)だと思うなら2を入力してください:");
	scanf_s("%d", &n);

	setTimeout(DispResult, 3);

	if ((dice == 1 && n == 1) || (dice == 2 && n == 2) || (dice == 3 && n == 1) || (dice == 4 && n == 2) || (dice == 5 && n == 1) || (dice == 6 && n == 2)) {
		printf("正解:");
		printf("出目は%d\n", dice);
	}
	else {
		printf("不正解:");
		printf("出目は%d\n", dice);
	}
	return 0;
}