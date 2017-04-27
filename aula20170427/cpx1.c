#include <stdio.h>
#include <stdlib.h>
#include <complex.h>

int main ()
{
    double complex A, B, Z;
    double rA, rB, iA, iB;
    printf("BFF entre com real A:");
    scanf("%lf", &rA);
    printf("BFF entre com imag A:");
    scanf("%lf", &iA);
    printf("BFF entre com real B:");
    scanf("%lf", &rB);
    printf("BFF entre com imag B:");
    scanf("%lf", &iB);
    A= rA + I*iA;
    B= rB + I*iB;
    Z= A+B;
    printf("A soma e %lf + I*%lf\n", creal(Z), cimag(Z));
    printf("ou igual %lf < %lf rad\n", cabs(Z), carg(Z));

    return EXIT_SUCCESS;
}

