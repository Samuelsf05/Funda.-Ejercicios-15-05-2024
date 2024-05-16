//Se realizara un programa que resuelva una ecuación de segundo grado utilizando la formula cuadratica, en base a las datos de a, b y c que se le pidiran al usuario.
#include <iostream>
#include <math.h>

 using namespace std;
 int main(){
    float a=0.00, b=0.00, c=0.00, resultado1=0.00, resultado2=0.00, raiz=0.00, radicando=0.00;

    cout << "Se calculara el conjunto solucion de una ecuacion de segundo grado segun sus datos de a, b y c (esto dentro de las respuestas reales). \n";
    cout << "Por favor ingrese los datos de a, b y c de su ecuacion (tenga en cuenta que no se puede dividir entre 0). \n";
    cin >> a >> b >> c;

    if (a==0 || b==0){
        cout << "Este programa solo calculara respuestas entre los reales, no poner valores que fuerzen la respuesta en los complejos(a=0, b=0). \n";
    }
    else{
        radicando = pow(b,2)-4*a*c;
        if(radicando<0){
            cout << "Este programa solo puede resolver ecuaciones con respuesta en los reales, los datos de su ecucaión raices imaginarias. \n";
        }
        else{
            raiz= sqrt(radicando);
            resultado1=(-b+raiz)/(2*a);
            resultado2=(-b-raiz)/(2*a);

            cout << "Los resultados de sus raices son, x1= " << resultado1 << " y x2= " << resultado2 << "\n";
        }
    }

    return 0;
 }