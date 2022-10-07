#include <stdio.h>
#include "Add1.h"
#include "Add2.c"

int main()
{
    printf("Fun with header: %d\n", addWithHeader(5, 4));
    printf("Fun without header: %d", addWithoutHeader(5, 4));
    return 0;
}