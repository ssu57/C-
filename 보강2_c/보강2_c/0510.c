/*
#include<stdio.h>
int main()
{
	int a;
	printf("생일을 입력하시오: ");
	scanf_s("%d", &a);

	int year = a / 10000;//년도
	int day = a % 100;//일
	int month = (a % 10000) / 100;//월

	printf("년도: %d\n", year);
	printf("월: %d\n", month);
	printf("일: %d\n", day);
}

int main()
{
	double x, y, result;
	printf("두개의 실수를 입력하시오: ");
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
	printf("++x의 값=%d\n", ++x);	//11
	printf("x=%d\n\n", x);	//11

	printf("y=%d\n", y);	//10
	printf("y++의 값=%d\n", y++);	//10
	printf("y=%d\n\n", y);	//11
}

#include<stdio.h>
int main()
{
	int x,y;
	printf("물건 값을 입력하시오: ");
	scanf_s("%d", &x);
	printf("\n투입한 금액을 입력하시오: ");
	scanf_s("%d", &y);

	printf("\n거스름돈은 다음과 같습니다.\n");
	printf("천원권: %d\n", (y - x)/1000);
	printf("백원권: %d\n", ((y - x) % 1000)/100);
	printf("십원권: %d\n", (y - x) % 100);
}
*/
//(x=++)*
//(y=x++)++
#include<stdio.h>
int main()
{
	int x,y;
	printf("물건 값을 입력하시오: ");
	scanf_s("%d", &x);
	printf("\n투입한 금액을 입력하시오: ");
	scanf_s("%d", &y);

	printf("\n거스름돈은 다음과 같습니다.\n");
	printf("천원권: %d\n", (y - x)/1000);
	printf("백원권: %d\n", ((y - x) % 1000)/100);
	printf("십원권: %d\n", (y - x) % 100);
}