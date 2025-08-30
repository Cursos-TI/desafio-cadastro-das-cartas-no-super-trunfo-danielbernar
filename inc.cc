#include <stdio.h>

int main() {
    /*
    incremento (++)
    pre-incremento ++a
    pos-incremento a++
    decremento (--)
    pre-incremento --a
    pos-incremento a--
     */

     int numero1 = 1, resultado;

     // numero1 = numero1 + 1;
     // numero1 += 1;

     printf ("antes incremento: %d\n", numero1);
     // numero1 = numero1 + 1;
     // numero1 += 1;
     // pos-incremento:
     // resultado = numero1;
     // numero++;
     resultado = numero1++;

     resultado = ++numero1;
     printf ("apos incremento - numero 1: %d - resultado: %d\n", numero1, resultado);


     // numero1 = numero1 - 1;
     // numero1 -= 1;
     numero1--;
     printf ("apos decremento: %d\n", numero1);

     resultado = numero1--;
     printf ("  apos decremento - numero 1: %d - resultado: %d\n", numero1, resultado);

     resultado = --numero1;
     printf (" apos pre-decremento - numero 1: %d - resultado: %d\n", numero1, resultado);
 
}