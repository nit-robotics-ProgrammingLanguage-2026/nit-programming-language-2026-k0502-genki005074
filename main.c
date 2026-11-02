#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (input != 12 && input >= 10 && input < 15)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
