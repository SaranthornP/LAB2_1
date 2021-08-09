#include<stdio.h>
int main() {
	int a;
	scanf_s("%d",&a);
	printf("Factoring Result : ");
	while (a != 1) {
		for (int i = 2;; i++) {
			if (a % i == 0) {
				printf("%d", i);
				a = a / i;
				break;
			}
		}
		if (a != 1) {
			printf(" x ");
		}
	}
	return 0;
}