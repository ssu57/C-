#include<stdio.h>
void menu(void);
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

void menu(void)
{
    printf("=======================\n");
    printf("0. µ¡¼À\n");
    printf("1. »¬¼À\n");
    printf("2. °ö¼À\n");
    printf("3. ³ª´°¼À\n");
    printf("4. Á¾·á\n");
    printf("=======================\n");
}
int main(void)
{
    int choice, result, x, y;
    int(*pf[4])(int, int) = { add,sub,mul,div };

    while (1)
    {
        menu();
        printf("¸Þ´º¸¦ ¼±ÅÃÇÏ½Ã¿À:");
        scanf_s("%d", &choice);

        if (choice < 0 || choice >= 4)
            break;
        printf("2°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À:");
        scanf_s("%d %d", &x, &y);

        result = pf[choice](x, y);
        printf("¿¬»ê °á°ú = %d\n", result);
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

    printf("¿À´ÃÀÇ °Ý¾ð: %s \n", p);
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
    printf("10+20Àº %d\n", result);

    pf = sub;
    result = pf(10, 20);
    printf("10-20Àº %d\n", result);

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