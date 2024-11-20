#include <stdio.h>
int main(){
	int a=10;
	int b=5;
	int sum=a+b;
	int sub=a-b;
	int mul=a*b;
	int div=a/b;
	printf("Tong cua %d va %d la: %d\n", a, b, sum);
	printf("Hieu cua %d va %d la; %d\n", a, b, sub);
	printf("Tich cua %d va %d la: %d\n", a, b, mul);
	printf("Thuong cua %d va %d la: %d\n", a, b, div);
	return 0;
}