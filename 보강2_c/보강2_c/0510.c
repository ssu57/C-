/*
#include<stdio.h>
int main()
{
	int a;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &a);

	int year = a / 10000;//�⵵
	int day = a % 100;//��
	int month = (a % 10000) / 100;//��

	printf("�⵵: %d\n", year);
	printf("��: %d\n", month);
	printf("��: %d\n", day);
}

int main()
{
	double x, y, result;
	printf("�ΰ��� �Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &x, &y);

	result = x + y;
	printf("\n%lf + %lf = %.2lf\n", x, y, result);

	result = x / y;
	printf("%lf / %lf = %.2lf\n", x, y, result);
}

#include<stdio.h>
int main()
{
	int x = 10 , y = 10;
	printf("x=%d\n", x);	//10
	printf("++x�� ��=%d\n", ++x);	//11
	printf("x=%d\n\n", x);	//11

	printf("y=%d\n", y);	//10
	printf("y++�� ��=%d\n", y++);	//10
	printf("y=%d\n\n", y);	//11
}

#include<stdio.h>
int main()
{
	int x,y;
	printf("���� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &x);
	printf("\n������ �ݾ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &y);

	printf("\n�Ž������� ������ �����ϴ�.\n");
	printf("õ����: %d\n", (y - x)/1000);
	printf("�����: %d\n", ((y - x) % 1000)/100);
	printf("�ʿ���: %d\n", (y - x) % 100);
}
*/
//(x=++)*
//(y=x++)++
#include<stdio.h>
int main()
{
	int x,y;
	printf("���� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &x);
	printf("\n������ �ݾ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &y);

	printf("\n�Ž������� ������ �����ϴ�.\n");
	printf("õ����: %d\n", (y - x)/1000);
	printf("�����: %d\n", ((y - x) % 1000)/100);
	printf("�ʿ���: %d\n", (y - x) % 100);
}