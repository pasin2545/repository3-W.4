#include<stdio.h>

int main() {
	int num, a = -1, b;
	scanf_s("%d", &num);
	if(num>0){
	for (int i = 0; i < num - 2; i++) {
		a = a + 3;
	}
	a = num + a;
	//top
	for (int i = 1; i < num; i++) {
		for (int j = 0; j < i; j++) {
			printf("* ");
		}
		if (a <= 0) {
			a = 0;
		}
		for (int j = 0; j < a; j++) {
			printf(" ");
		}
		a = a - 4;
		for (int j = 0; j < i; j++) {
			printf(" *");
		}
		printf("\n");
	}
	//mid
	b = (2 * num) - 1;
	for (int i = 0; i < b; i++) {
		printf("* ");
	}
	printf("\n");
	//low
	b = 1;
	for (int i = 1; i < num; i++) {
		for (int j = 0; j < num - i; j++) {
			printf("* ");
		}
		for (int j = 0; j < b; j++) {
			printf(" ");
		}
		b = b + 4;
		for (int j = 0; j < num - i; j++) {
			printf(" *");
		}
		printf("\n");
	}
	}
	return 0;
}