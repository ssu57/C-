//구조체
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
	strcpy(s.name, "원수민");
	s.grade = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %.2f\n", s.grade);
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

	printf("학번을 입력하시오: ");
	scanf_s("%d", &s.number);

	printf("이름을 입력하시오: ");
	scanf_s("%s", &s.name);

	printf("학점을 입력하시오(실수): ");
	scanf_s("%lf", &s.grade);

	printf("\n학번:% d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %.2f\n", s.grade);
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

	printf("왼쪽 상단의 좌표를 입력하시오: ");
	scanf_s("%d %d", &r.p1.x,&r.p1.y);

	printf("오른쪽 상단의 좌표를 입력하시오: ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.x - r.p1.x;

	area = w * h;
	peri = 2 * w + 2 * h;
	printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);
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

	if (p1 == p2)//컴파일 오류
		printf("p1와 p2이 같습니다.");
	if((p1.x==p2.x)&&(p1.y==p2.y))//올바른 비교
		printf("p1와 p2이 같습니다.");
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
		printf("학번을 입력하시오: ");
		scanf_s("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf_s("%s", list[i].name);
		printf("학점을 입력하시오(실수): ");
		scanf_s("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++)
		printf("학번: %d, 이름: %s,  학점: %f\n", list[i].number, list[i].name, list[i].grade);
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
	struct student s = { 1,"홍길동",4.3 };
	struct student* p;

	p = &s;

	printf("학번: %d, 이름: %s,  학점: %f\n", s.number, s.name, s.grade);
	printf("학번: %d, 이름: %s,  학점: %f\n", (*p).number, (*p).name, (*p).grade);
	printf("학번: %d, 이름: %s,  학점: %f\n", p->number, p->name, p->grade);
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
	struct student s = { 1,"홍길동",4.3 };
	struct student* p;

	p = &s;

	printf("학번: %d, 이름: %s,  학점: %f\n", s.number, s.name, s.grade);
	printf("학번: %d, 이름: %s,  학점: %f\n", (*p).number, (*p).name, (*p).grade);
	printf("학번: %d, 이름: %s,  학점: %f\n", p->number, p->name, p->grade);
	return 0;
}