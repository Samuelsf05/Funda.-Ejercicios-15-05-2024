/*Se hara el sistema de compra de entradas de un estadio donde se puede seleccionar el sector de asientos para la entrada y
el calculo de su valor monetario segun el numero de entradas que se desee comprar.*/
#include <iostream>

 using namespace std;
 int main(){
    /* se declaran las tres variables, una para la opcion del sector de la entrada,
    otra para el numero de voletos, y el guardar el resultado de multiplicar el numero de voletos por su valor.*/
    int opcion=0, numerovoletos=0, resultado=0;
    
    //se le muestra al usuario las opciones y precio de cada sector, definiendo tambien la entrada del valor de la opcion elegida.
    cout << "Bienvenido al sistema de compra de entradas para el estadio XYZ, por favor seleccione un sector: \n";
    cout << "1. Sol general: $3. \n";
    cout << "2. Sol preferencial: $5. \n";
    cout << "3. Sombra: $8. \n";
    cout << "4. Tribuna: $15. \n";
    cout << "5. Platea: $20. \n";
    cin >> opcion;

//se declara un switch para definir en cada caso de sector el calculo del presion final de cada compra de entradas.
    switch(opcion){
//Se le indica al usuario que digite el numero de entradas a comprar, y se filtra con un if para evitar el ingreso de cantidades negativas.
        case 1:
        cout << "Cuantas entradas quisiera comprar: \n";
        cin >> numerovoletos;
        if(numerovoletos<0){
            cout << "digite una catidad valida por favor. \n";
            return 0;
        }else{ 
            //se define la operacion que se tiene que hacer en cada caso y que guarde el resultado.
        resultado = numerovoletos*3;}
        break;

        case 2:
        cout << "Cuantas entradas quisiera comprar: \n";
        cin >> numerovoletos;
        if(numerovoletos<0){
            cout << "digite una catidad valida por favor. \n";
            return 0;
        }else{ 
        resultado = numerovoletos*5;}
        break;

        case 3:
        cout << "Cuantas entradas quisiera comprar: \n";
        cin >> numerovoletos;
       if(numerovoletos<0){
            cout << "digite una catidad valida por favor. \n";
            return 0;
        }else{ 
        resultado = numerovoletos*8;}
        break;

        case 4:
        cout << "Cuantas entradas quisiera comprar: \n";
        cin >> numerovoletos;
        if(numerovoletos<0){
            cout << "digite una catidad valida por favor. \n";
            return 0;
        }else{ 
        resultado = numerovoletos*15;}
        break;

        case 5:
        cout << "Cuantas entradas quisiera comprar: \n";
        cin >> numerovoletos;
        if(numerovoletos<0){
            cout << "digite una catidad valida por favor. \n";
            return 0;
        }else{ 
        resultado = numerovoletos*20;}
        break;

        default:
        cout << "Seleccione un sector valido de entradas. \n";
    }
 
 /*Con el valor pedido antes del numero de entradas y el valor guardado del resultado del calculo de su precio
 se le muestra al usuario el mensaje de cuantas entradas comprara y el valor que tendra la compra.*/
    cout << "El costo de sus " << numerovoletos << " entradas sera de $" << resultado << ". \n";
    
    return 0;

 }