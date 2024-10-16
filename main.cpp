#include<iostream>
#include<Windows.h>

int main() {
	SetConsoleOutputCP(65001);
	char str[] = "おなかすいた";
	printf("%s", str);
	return 0;

}