#include <iostream>
using namespace std;
int suma(int entero1, int entero2){
    int resultado=0;
    resultado=(entero1+entero2);
    return resultado;
}

int resta(int entero1, int entero2){
    int resultado=0;
    resultado=(entero1-entero2);
    return resultado;
}

int multiplicacion(int entero1, int entero2){
    int resultado=0;
    resultado=(entero1*entero2);
    return resultado;
}

float division(float entero1, float entero2){
    float resultado=0;
    resultado=(entero1/entero2);
    return resultado;
}

float media(int entero1, int entero2){
    int resultado=0;
    resultado=(entero1+entero2)/2;
    return resultado;
}

int main(){
    float n1=0, n2=0, resultado2=0;
    char eleccion;
    cout<<"Ingrese el primer numero: \n";
    cin>>n1;
    cout<<"Ingrese el segundo numero: \n";
    cin>>n2;
    cout<<"s=suma, r=resta, m=multiplicacion, d=division, a=media.\n";
    cin>>eleccion;
    switch (eleccion)
    {
    case 's':
    resultado2=suma(n1,n2);
    cout<<"El resultado de la suma es: "<<resultado2;
    break;

    case 'r':
    resultado2=resta(n1,n2);
    cout<<"El resultado de la resta es: "<<resultado2;
    break;

    case 'm':
    resultado2=multiplicacion(n1,n2);
    cout<<"El resultado de la multiplicacion es: "<<resultado2;
    break;

    case 'd':
    resultado2=division(n1,n2);
    cout<<"El resultado de la division es: "<<resultado2;
    break;

    case 'a':
    resultado2=media(n1,n2);
    cout<<"El resultado de la media es: "<<resultado2;
    break;
    
    default:
    cout<<"Ingrese una opcion valida. \n";
        break;
    }
    return 0;
}

