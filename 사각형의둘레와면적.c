#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double w, h, area, perimeter;

	printf("�簢���� �غ��� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &w);
	printf("�簢���� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &h);

	area = w * h;
	perimeter = 2*(w + h);

	printf("�簢���� ����:%lf\n", area);
	printf("�簢���� �ѷ�:%lf\n", perimeter);

	return 0;
}