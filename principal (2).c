/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float celsius;

    // Receber a temperatura em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Imprimir a temperatura em Fahrenheit diretamente
    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, celsius * (9.0 / 5.0) + 32);

    return 0;
}

