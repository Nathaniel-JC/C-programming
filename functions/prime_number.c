#include <stdio.h>

int prime(int a);

int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);
    prime(a);
    return 0;
}

int prime(int a)
{
    int i, flag = 0;
    if (a == 0 || a == 1)
    {
        flag = 1;
    }
    else
    {
        for (i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("The number %d is a prime number.", a);
    }
    else
    {
        printf("The number %d is not a prime number.", a);
    }
}