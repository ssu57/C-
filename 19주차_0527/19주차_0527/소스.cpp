//����ü
/*#include<stdio.h>
#include<string.h>
struct student {
	int number;
	char name[10];
	double grade;
};
int main(void)
{
	struct student s;

	s.number = 202325008;
	strcpy(s.name, "������");
	s.grade = 4.3;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %.2f\n", s.grade);
	return 0;
}

#include<stdio.h>
#include<string.h>
struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;

	printf("�й��� �Է��Ͻÿ�: ");
	scanf_s("%d", &s.number);

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf_s("%s", &s.name);

	printf("������ �Է��Ͻÿ�(�Ǽ�): ");
	scanf_s("%lf", &s.grade);

	printf("\n�й�:% d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %.2f\n", s.grade);
	return 0;
}

#include<stdio.h>
struct point {
	int x;
	int y;
};
struct rect {
	struct point p1;
	struct point p2;
};

int main(void)
{
	struct rect r;
	int w, h, area, peri;

	printf("���� ����� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &r.p1.x,&r.p1.y);

	printf("������ ����� ��ǥ�� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.x - r.p1.x;

	area = w * h;
	peri = 2 * w + 2 * h;
	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);
	return 0;
}

#include<stdio.h>
struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1 = {10,20};
	struct point p2 = { 30,40 };

	p2 = p1;

	if (p1 == p2)//������ ����
		printf("p1�� p2�� �����ϴ�.");
	if((p1.x==p2.x)&&(p1.y==p2.y))//�ùٸ� ��
		printf("p1�� p2�� �����ϴ�.");
	return 0;
}

#include<stdio.h>
#include<string.h>
#define SIZE 3
struct student {
	int number;
	char name[10];
	double grade;
};
int main(void)
{
	struct student list[SIZE];
	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("�й��� �Է��Ͻÿ�: ");
		scanf_s("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�: ");
		scanf_s("%s", list[i].name);
		printf("������ �Է��Ͻÿ�(�Ǽ�): ");
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++)
		printf("�й�: %d, �̸�: %s,  ����: %f\n", list[i].number, list[i].name, list[i].grade);
	return 0;
}

#include<stdio.h>
struct student {
	int number;
	char name[20];
	double grade;
};
int main(void)
{
	struct student s = { 1,"ȫ�浿",4.3 };
	struct student* p;

	p = &s;

	printf("�й�: %d, �̸�: %s,  ����: %f\n", s.number, s.name, s.grade);
	printf("�й�: %d, �̸�: %s,  ����: %f\n", (*p).number, (*p).name, (*p).grade);
	printf("�й�: %d, �̸�: %s,  ����: %f\n", p->number, p->name, p->grade);
	return 0;
}
*/


#include<stdio.h>
struct student {
	int number;
	char name[20];
	double grade;
};
int main(void)
{
	struct student s = { 1,"ȫ�浿",4.3 };
	struct student* p;

	p = &s;

	printf("�й�: %d, �̸�: %s,  ����: %f\n", s.number, s.name, s.grade);
	printf("�й�: %d, �̸�: %s,  ����: %f\n", (*p).number, (*p).name, (*p).grade);
	printf("�й�: %d, �̸�: %s,  ����: %f\n", p->number, p->name, p->grade);
	return 0;
}