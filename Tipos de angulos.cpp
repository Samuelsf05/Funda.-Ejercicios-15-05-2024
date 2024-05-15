//Se hará un programa que 
#include <iostream>

 using namespace std;
 int main(){
    float angulo = 0.00; //Se declara la variable para el valor del ángulo.

// se le dice al usuario que se hara y se le pide el ángulo.
    cout << "Le diremos si su angulo es agudo, obtuso o recto. \n";
    cout << "Ingrese el valor de su angulo en grados: \n";
    cin >> angulo;

// se establecen los casos donde se le diga que tipo de ángulo es al usuario, segun que se menor igual o mayor a 90.
    if(angulo<90){
        cout << "Su angulo es agudo. \n"; 
    }
    else if(angulo == 90){
        cout << "Su angulo es recto. \n";
    } 
    else {
        cout << "Su angulo es obtuso. \n";
    }

    return 0;
 }