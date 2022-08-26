#include <stdio.h>


int add(int a, int b)
{
    for (int i = 0 ; i < b; i++)
    {
        a += i;
    }
    return a;
}

int main()
{
    printf("Hello World!\n");
    getchar();
    return 0;
}
