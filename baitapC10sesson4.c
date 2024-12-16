#include <stdio.h>

int main() {
	int a, b, c;
	printf("nhập vào ba số nguyên : ");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b) {
		int temp = a;
		a=b;
		b=temp;

	}
	if(b>c) {
		int temp = b;
		b=c;
		c=temp;
	}
	if(a>b) {
		int temp = a;
		a=b;
		b=temp;
	}
	printf("thứ tự các số từ nhỏ đến lớn làlà :%d %d %d\n", a, b, c);
	return 0;

}

