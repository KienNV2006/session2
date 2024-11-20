#include <stdio.h>
int main(){
	const float PI=3.14;
	float radius;
	printf("Nhap ban kinh hinh tron:");
	scanf("%f", &radius);
	float C=2*radius*PI;
	float S=PI*radius*radius;
	printf("Chu vi cua hinh tron co ban kinh %f la: %.2f\n", radius, C);
	printf("Dien tich cua hinh tron co ban kinh %f la: %.2f\n", radius, S);
	return 0;
}