#include<stdio.h>
void menu(void);
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

void menu(void)
{
    printf("=======================\n");
    printf("0. ����\n");
    printf("1. ����\n");
    printf("2. ����\n");
    printf("3. ������\n");
    printf("4. ����\n");
    printf("=======================\n");
}
int main(void)
{
    int choice, result, x, y;
    int(*pf[4])(int, int) = { add,sub,mul,div };

    while (1)
    {
        menu();
        printf("�޴��� �����Ͻÿ�:");
        scanf_s("%d", &choice);

        if (choice < 0 || choice >= 4)
            break;
        printf("2���� ������ �Է��Ͻÿ�:");
        scanf_s("%d %d", &x, &y);

        result = pf[choice](x, y);
        printf("���� ��� = %d\n", result);
    }
    return 0;
}
int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}


/*
#include <stdio.h>
int main(void)
{
    int i = 100;
    int* p = &i;
    int** q = &p;

    *p = 200;
    printf("i=%d\n", i);

    **q = 300;
    printf("i=%d\n", i);

    return 0;
}

#include <stdio.h>
void set_pointer(char** q);
int main(void)
{
    char* p;
    set_pointer(&p);

    printf("������ �ݾ�: %s \n", p);
    return 0;
}

void set_pointer(char** q)
{
    q="All that glisters is not gold.";
}

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i, n;
    char* fruits[] = {
    "apple",
    "blueberry",
    "orange",
    "melon"
    };
    n = sizeof(fruits) / sizeof(fruits[0]);
    for (i = 0; i < n; i++)
        printf("%s\n", fruits[i]);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

int add(int, int);
int sub(int, int);

int main(void)
{
    int result;
    int (*pf)(int, int);

    pf = add;
    result = pf(10, 20);
    printf("10+20�� %d\n", result);

    pf = sub;
    result = pf(10, 20);
    printf("10-20�� %d\n", result);

    return 0;
}
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
*/