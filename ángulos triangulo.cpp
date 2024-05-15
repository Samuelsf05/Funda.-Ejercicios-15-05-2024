#include <iostream>

 using namespace std;
 int main(){
    // se declaran las variablesnecesearias para el calculo de los angulos.
    float angulo1 = 0.00, angulo2 = 0.00, angulo = 180, resultado = 0;

    cout <<"Calculo del tercer angulo de un triangulo \n";
    cout << "Ingrese el valor de su primer angulo. \n";
    cin >> angulo1;

    cout << "Ingerse el valor de su segundo angulo. \n";
    cin >> angulo2;
// comprobación de que se ingresen datos que no hagan que el progama de datos erroneos para un triangulo.
    if((angulo<0 || angulo2<0) || (angulo1 > 180 || angulo2 > 180)){
        cout << "Uno de los angulos ingresados tiene un valor invalido. \n";
        
    }
    else {
        resultado = angulo - (angulo1 + angulo2);
        cout << "Su tercer angulo seria: " << resultado;
    }

    return 0;
 }