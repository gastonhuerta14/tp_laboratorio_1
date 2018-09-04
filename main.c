#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

void main()
{

    float A;
    float B;
    int operacion;
    float resultadoUno;
    float resultadoDos;

    do{
    printf("\n Ingrese primer valor\n", A);
    scanf("%f", &A);
    printf("Ingrese segundo valor\n", B);
    scanf("%f", &B);
    printf("Ingrese la operación que desea realizar:\n 1) Sumar\n 2) Restar\n 3) Multiplicar\n 4) Dividir\n 5) Factorial\n 6) Salir\n", operacion);
    scanf("%d", &operacion);

            switch (operacion) {
            case 1 : {

                resultadoUno = sumar(A,B);
                printf("\nSuma: %.2f" , resultadoUno);
                break;
            }
            case 2 : {

                resultadoUno = restar(A,B);
                printf("\nResta: %.2f" , resultadoUno);
                break;
            }
            case 3 : {
                resultadoUno = multiplicar(A,B);
                printf("\nMultiplicacion: %.2f" , resultadoUno);
                break;
            }
            case 4 : {
                resultadoUno = division(A,B);
                printf("\nDivision: %.2f" , 224 , resultadoUno);
                break;
            }
            case 5 : {
                resultadoUno = factorial(A);
                printf("\nFactorial del primer número es: %.2f" , resultadoUno);
                resultadoDos = factorial(B);
                printf("\nFactorial del segundo numero es: %.2f" , resultadoDos);
                break;
            }
            case 6 : {
                break;
            }
            default : {
                printf("\nError elección invalida\n");
            }
    }
            }while(operacion!=6);

}
