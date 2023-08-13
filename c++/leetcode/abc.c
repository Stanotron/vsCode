#include <stdio.h>
#include <stdarg.h>

void func(int, ...);

int main()
{
    func(2, 3, 5, 7, 11, 13);
    return 0;
}

void func(int n, ...)
{
    int number;
    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; i++)
    {
        number = va_arg(args, int);
        printf("%d ", number);
    }

    va_end(args);
}