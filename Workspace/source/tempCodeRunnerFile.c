/* #include <stdio.h>
#include <malloc.h> */

/* typedef struct
{
    int arrSize;
    int array[];
} myArray; */

/* int main()
{
    int size, size1;
    myArray *ptr;

    printf("Enter length of array: ");
    scanf("%d", &size);

    ptr = malloc(sizeof(myArray) + size * sizeof(int));

    for (size_t i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", ptr+i);
    }

    for (size_t i = 0; i < size; i++)
    {
       printf("Element %d: %d\n", i+1, *(ptr+i));
    }
    
    
    free(ptr);
    return 0;
} */

/* int main()
{
    #include <complex.h>
    #ifdef __STDC_NO_COMPLEX__
    printf("Complex arithmetic not supported\n");
    #else
    printf("Complex arithmetic supported\n");

    double complex cx = 1.0 + 3.0*I;
    double complex cy = 1.0 - 4.0*I;
    double complex sum;

    sum = cx + cy;
    printf("Sum: (%.1f%+.1f) + (%.1f%+.1f) = %.1f%+.1f\n", creal(cx), cimag(cx), creal(cy), cimag(cy), creal(sum), cimag(sum));

    sum = cx - cy;
    printf("Difference: (%.1f%+.1f) - (%.1f%+.1f) = %.1f%+.1f\n", creal(cx), cimag(cx), creal(cy), cimag(cy), creal(sum), cimag(sum));

    sum = cx * cy;
    printf("Product: (%.1f%+.1f) X (%.1f%+.1f) = %.1f%+.1f\n", creal(cx), cimag(cx), creal(cy), cimag(cy), creal(sum), cimag(sum));

    sum = cx / cy;
    printf("Division: (%.1f%+.1f) / (%.1f%+.1f) = %.1f%+.1f\n", creal(cx), cimag(cx), creal(cy), cimag(cy), creal(sum), cimag(sum));

    double complex conjugate_CX = conj(cx);
    double complex conjugate_CY = conj(cy);
    printf("Conjugate CX: %.1f%+.1f\nConjugate CY: %.1f%+.1f\n", creal(conjugate_CX), cimag(conjugate_CX), creal(conjugate_CY), cimag(conjugate_CY));
#endif
} */

#include <stdio.h>
#include "binarysystem.h"

int main()
{
    /* int a[100] = {1, 2, 3, [3 ... 9] = 10};

    printf("%d ", a[3]); */
    unsigned int a;
    scanf("%d", (printf("Enter a decimal no: "), &a));

    printf("%lld\n", decToBinary(a));
    a = ~a;
    printf("%d\n", a);
}

