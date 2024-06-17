/*
#include<stdio.h>
#define SQUARE(x)	((x)*(x))
int main(void)
{
	int x = 2;
	printf("%d\n", SQUARE(x));
	printf("%d\n", SQUARE(3));
	printf("%d\n", SQUARE(1.2));	//실수에도 적용 가능
	printf("%d\n", SQUARE(x+3));
	printf("%d\n", 100/SQUARE(x));
	printf("%d\n", SQUARE(++x));	//논리 오류

	return 0;
}

#include<stdio.h>
#define PRINT(exp) printf(#exp"=%d\n",exp);

int main(void)
{
	int x = 5;
	PRINT(x);
	return 0;
}

#include<stdio.h>
#define ASSERT(exp)	{if(!(exp))\
{printf("가정("#exp")이 소스 파일 %s %d번째 줄에서 실패.\n"\
,_FILE_, _LINE_), exit(1);}}

int main(void)
{
	int sum = 100;

	ASSERT(sum == 0);
	return 0;
}

#include <stdio.h>

#define GET_BIT(w, k) (((w) >> (k)) & 0x01)
#define SET_BIT_ON(w, k) ((w) |= (0x01 << (k)))
#define SET_BIT_OFF(w, k) ((w) &= ~(0x01 << (k)))

int main(void)
{
	int data = 0;
	SET_BIT_ON(data, 2);
	printf("%08X\n", data);
	printf("%d\n", GET_BIT(data, 2));

	SET_BIT_OFF(data, 2);
	printf("%08X\n", data);
	printf("%d\n", GET_BIT(data, 2));
	return 0;
}
*/



#include <stdio.h>

struct product {
	unsigned style : 3;
	unsigned size : 2;
	unsigned color : 1;
};

int main(void)
{
	struct product p1;

	p1.style = 5;
	p1.size = 3;
	p1.color = 1;

	printf("style=%d size=%d color=%d\n", p1.style, p1.size, p1.color);
	printf("sizeof(p1)=%d\n", sizeof(p1));
	printf("p1=%x\n", p1);

	return 0;
}

