/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero = 42; //variavel inteira
    int *ponteiro;  //variavel do tipo ponteiro
    ponteiro = &numero; 
    
    printf("Valor original de numero: %d\n", numero);
    printf("Endereço de memoria variavel numero: %p\n", &numero);
    printf("Valor apontado pela variavel ponteiro: %d\n", *ponteiro);
    

    return 0;
}
