#include <stdio.h>

int main() {
	int a[5]= {5, 7, 2, 1, 23};
	int b=0;

	printf("cac phan tu so chan trong mang:\n");
	for (int i = 0; i < 5; i++) {
		if (a[i] % 2 == 0) {
			printf("%d", a[i]);
			b= 1;
		}
	}
	if (!b) {
		printf("mang khong chua so chan. \n");
	}
	return 0;
}
