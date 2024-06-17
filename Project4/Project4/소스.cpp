#include<stdio.h>
#include<math.h>

int menu(void)
{
	int sel;

	printf("1. 팩토리얼\n");
	printf("2. 싸인\n");
	printf("3. 로그(base 10)\n");
	printf("4. 제곱근\n");
	printf("5. 순열(nPr)\n");
	printf("6. 조합(nCr)\n");
	printf("7. 종료\n");
	printf("선택해주세요\n");
	scanf_s("%d", &sel);

	return sel;
}

int factorial(void)
{
	int n,sum;

	printf("정수를 입력하시오. ");
	scanf_s("%d", &n);
	sum = 1;

	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}

int sin1(void)
{
	int n, sum;

	printf("각도를 입력하시오. ");
	scanf_s("%d", &n);
	sum = sin(n);
	return sum;
}

int log1(void)
{
	int n, sum;

	printf("정수를 입력하시오. ");
	scanf_s("%d", &n);
	sum = log(n);
	return sum;
}

int sqrt1(void)
{
	int n, sum;

	printf("정수를 입력하시오. ");
	scanf_s("%d", &n);
	sum = sqrt(n);
	return sum;
}

int P1(void)
{
	int n, r, sum;

	printf("두개의 정수를 입력하시오. ");
	scanf_s("%d %d", &n,&r);
	
	sum = 1;

	for (int i = 1; i <= n; i++)
		sum *= i;
	for (int i = 1; i <= r; i++)
		sum /= i;
	return sum;
}

int C1(void)
{
	int n, r, sum;

	printf("두개의 정수를 입력하시오. ");
	scanf_s("%d %d", &n, &r);

	sum = 1;

	for (int i = n-r; i <= n; i++)
		sum *= i;
	for (int i = 1; i <= r; i++)
		sum /= i;
	return sum;
}

int main(void)
{

	while (1)
	{
		int i = menu();

		if (i == 1)
			factorial();
		else if (i == 1)
			sin1();
		else if (i == 1)
			log1();
		else if (i == 1)
			sqrt1();
		else if (i == 1)
			P1();
		else if (i == 1)
			C1();
		else if (i == 1)
			break;
		else
			printf("잘못 입력했습니다.");
	}
}