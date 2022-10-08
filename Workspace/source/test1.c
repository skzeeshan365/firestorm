#include <stdio.h>
#include <stdlib.h>

int count = 0;
void display();

int main()
{
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" %c ", '*');
        }
        printf("\n");
    }
    

    return 0;
}