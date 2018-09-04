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
    printf("\n\nIngrese primer valor: ", A);
    scanf("%f", &A);
    printf("\nIngrese segundo valor: ", B);
    scanf("%f", &B);
    printf("\nIngrese la operación que desea realizar:\n 1) Sumar\n 2) Restar\n 3) Multiplicar\n 4) Dividir\n 5) Factorial\n 6) Salir\n", operacion);
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
                if(!(A==0 || B==0))
                    {
                        resultadoUno = division(A,B);
                        printf("\nDivision: %.2f", resultadoUno);
                    }else
                    {
                        printf("\nNo se puede dividir ningun numero que sea igual a 0");
                    }

                break;
            }
            case 5 : {
                resultadoUno = factorial(A);
                printf("\nFactorial del primer numero es: %.2f" , resultadoUno);
                resultadoDos = factorial(B);
                printf("\nFactorial del segundo numero es: %.2f" , resultadoDos);
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
