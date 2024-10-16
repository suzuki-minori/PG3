#include<iostream>
#include<stdio.h>

int wages(int n) {
	if (n <= 1) {
		return (100);
	}
		return(wages(n-1)* 2 - 50);
}


int main() {
	int result;
	int Result;
	for (int n = 1; n <= 15; n++) {
		result = wages(n);
		printf("再帰的な%d時間の給料=%d\n", n, result);
	}
	for (int n = 1; n <= 15; n++) {
		Result = 1072 * n;
		printf("一般的な%d時間の給料=%d\n", n, Result);
	}

	return (0);
}