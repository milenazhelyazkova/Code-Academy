#include <stdio.h>
#include <unistd.h>
void convert(int num)
{
    int i;
    for (i = 1 << 7; i > 0; i >>= 1)
    {
        if (num & i)
        {
            printf("*");
        }
        else
        {
            printf(".");
        }
    }
}
int main()
{
    int num = 128;
    for (int i = 1; i <= 8; i++)
    {
        convert(num);
        num = 128;
        num >>= i;
        printf("\n");
        sleep(1);
    }
}