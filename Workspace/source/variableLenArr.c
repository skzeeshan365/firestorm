#include <stdio.h>


int main()
{
    int n, result = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int add[n];

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &add[i]);
        result += add[i];
    }
        printf("%d\n", result);
    
}