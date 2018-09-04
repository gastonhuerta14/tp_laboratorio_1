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
    printf("\n Ingrese el valor de A\n", A);
    scanf("%f", &A);
    printf("Ingrese el valor de B\n", B);
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
                resultadoDos = factorial(B);
                printf("\nFactorial Uno: %.2f" , resultadoUno);
                printf("\nFactorial Dos: %.2f" , resultadoDos);
                break;
            }
            case 6 : {
                break;
            }
            default : {
                printf("\nError eleccion invalida\n");
            }
    }
            }while(operacion!=6);

}
