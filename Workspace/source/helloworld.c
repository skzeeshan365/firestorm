#include <stdio.h>
#include "other.h"
#include "test.c"

int main()
{
    printf("Fun with header: %d\n", checkfor(5, 4));
    printf("Fun without header: %d", checkfor2(5, 4));
    return 0;
}