#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int N, i, x,find_num, f_num_t;
	int num[9000];
	f_num_t = 0;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		num[i] = scanf("%d", &x);
	}

	scanf("%d", &find_num);

	for (i = 0; i < N; i++)
	{
		if (num[i] == find_num)
			f_num_t++;
	}
	printf("%d",f_num_t);
}