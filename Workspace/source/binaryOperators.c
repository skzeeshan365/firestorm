/* As we know in 1s complement of binary numbers
we invert all the bits e.g 1010 = 0101
but here I have an int value 10 which in binary is 1010
so theoretically if we apply 1s complement and invert the values of 10 we get 0101 = 5

so by applying ~ negation it should invert and give 0101 = 5,
but its giving -11
 */
#include <stdio.h>
#include "binarysystem.h"

int main()
{
    unsigned int a = 10;

    printf("%lld\n", decToBinary(a)); //1010

    a = ~a;
    printf("%d\n", a); //prints -11
}