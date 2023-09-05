#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double w, h, area, perimeter;

	printf("사각형의 밑변의 길이를 입력하시오: ");
	scanf("%lf", &w);
	printf("사각형의 높이를 입력하시오: ");
	scanf("%lf", &h);

	area = w * h;
	perimeter = 2*(w + h);

	printf("사각형의 넓이:%lf\n", area);
	printf("사각형의 둘레:%lf\n", perimeter);

	return 0;
}