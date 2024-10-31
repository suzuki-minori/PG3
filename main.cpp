#include<iostream>
#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include<functional>



void  DispResult(int* s,int*key) {
	
	int dice = rand() % 6;

	if (dice == *key) {
		if (dice == 0)
			printf("正解:");
			printf("出目は%d\n", dice);
	}else {
		if (dice == 1)
			printf("不正解:");
			printf("出目は%d\n", dice);
		}
}

void setTimeout(std::function<void(int*,int*)>p, int second,int key) {
	
	for (int i = 0; i < second; i++) {
		Sleep(1000);
		printf("%d...\n", second - i);
	}
	p(&second, &key);
}

int main() {
	
	int key;

	printf("サイコロを振るので、出目が半(奇数)か丁(偶数)かを当ててください\n");

	srand(static_cast<unsigned int>(time(NULL)));
	
	printf("半(奇数)か丁(偶数)か予想してください\n");
	printf("半(奇数)だと思うなら0、丁(偶数)だと思うなら1を入力してください:");
	scanf_s("%d", &key);

	std::function<void(int*, int*)>p = [](int* s, int* key) {DispResult(s, key); };



	setTimeout(p,3,key);

	return 0;
}