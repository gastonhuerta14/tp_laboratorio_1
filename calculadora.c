
float sumar(float numeroUno,float numeroDos)
{
    float resultado=0;
    resultado=numeroUno+numeroDos;
    return resultado;
}

float restar(float numeroUno, float numeroDos)
{
    float resultado=0;
    resultado=numeroUno-numeroDos;
    return resultado;
}

float multiplicar(float numeroUno, float numeroDos)
{
    float resultado=0;
    resultado=numeroUno*numeroDos;
    return resultado;
}


float division(float numeroUno,float numeroDos)
{
    float resultado=0;
    resultado=numeroUno/numeroDos;
    return resultado;
}

float factorial(float numero)
{
    float resultado=0;
    if(numero==1)
    return 1;
    resultado=numero*(factorial(numero-1));
    return resultado;
}
