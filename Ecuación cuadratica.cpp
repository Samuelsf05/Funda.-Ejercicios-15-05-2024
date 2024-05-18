/*Se realizara un programa que resuelva una ecuación de segundo grado utilizando la formula cuadratica, en base a las datos de a, b y c que se le pidiran al usuario.
en este caso se utilizara una segunda libreria (la libreria matematica de c++).*/
#include <iostream>
#include <math.h>

 using namespace std;
 int main(){
//se delcaran todas las variables que se necesitaran para realizar los calculos matematicos.    
    float a=0.00, b=0.00, c=0.00, resultado1=0.00, resultado2=0.00, raiz=0.00, radicando=0.00;

//se le piden los datos de la ecuación al usuario recordandole las limitaciones del programa. Y se hace la entrada de datos
    cout << "Se calculara el conjunto solucion de una ecuacion de segundo grado segun sus datos de a, b y c (esto dentro de las respuestas reales). \n";
    cout << "Por favor ingrese los datos de a, b y c de su ecuacion (tenga en cuenta que no se puede dividir entre 0). \n";
    cin >> a >> b >> c;

//se hace un filtro con if para asegurar que los dos datos principales de a y b que son los que mas problemas podrian causar siendo sero, no lo sean.
    if (a==0 || b==0){
        cout << "Este programa solo calculara respuestas entre los reales, no poner valores que fuerzen la respuesta en los complejos(a=0, b=0). \n";
    }
//si los datos estan bien se procede con las funciones de la nueva libreria: primero realizar la operacion del interior de la raiz con un "pow" para elebar la B al cuadrado
    else{
        radicando = pow(b,2)-4*a*c;
        //se confirma que el resultado no sea negtivo para que la raiz no sea indefinida.
        if(radicando<0){
            cout << "Este programa solo puede resolver ecuaciones con respuesta en los reales, los datos de su ecucaión raices imaginarias. \n";
        }
        /*una vez comprobado se procese con "sqrt" para que el resultado de la operacion anterior finalmente pase por y¿una raiz cuadrada.
        luego realizamos el resto de la operacion con normalidad he imprimimos los resultados para mostrarselos al usuario.*/
        else{
            raiz= sqrt(radicando);
            resultado1=(-b+raiz)/(2*a);
            resultado2=(-b-raiz)/(2*a);

            cout << "Los resultados de sus raices son, x1= " << resultado1 << " y x2= " << resultado2 << "\n";
        }
    }

    return 0;
 }