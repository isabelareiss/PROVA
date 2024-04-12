/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite os comprimentos dos três lados do triângulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("Equilátero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("Isósceles\n");
    } else {
        printf("Escaleno\n");
    }

    return 0;
}

