/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    float valor1, valor2, valor3;

    // Receber os três valores
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);

    // Encontrar o maior valor usando a função fmax()
    float maior_valor = fmax(valor1, fmax(valor2, valor3));

    // Imprimir o resultado
    printf("O maior valor é: %.2f\n", maior_valor);

    return 0;
}

