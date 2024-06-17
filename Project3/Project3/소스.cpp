#include<stdio.h>

int even(int n)
{
	if (n % 2 == 0)
		return 1;
	return 0;
}

int absolute(int n)
{
	if (n < 0)
		return -n;
	return n;
}

int sign(int n)
{
	if (n > 0)
		return 1;
	else if (n < 0)
		return -1;
	else
		return 0;
}

int main(void)
{
	
}

/*
int get_integer(void)
{
	int n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);
	return n;
}

int is_prime(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main(void)
{
	int n = get_integer();

	if (is_prime(n) == 1)
		printf("%d는 소수 입니다.\n", n);
	else
		printf("%d는 소수가 아닙니다.\n", n);
	return 0;
}


int factorial(int n)
{
	int i, result = 1;

	for (i = 1; i <= n; i++)
	{
		result *= i;
	}

	return result;
}

int main(void)
{
	int n;
	printf("알고 싶은 팩토리얼의 값은?");
	scanf_s("%d", &n);
	printf("%d!의 값은 %d입니다.", n, factorial(n));
	return 0;
}
*/