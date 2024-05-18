//Se realizara un programa que indica el tipo de motor segun las opciones referente a cada uno, mostrandole al usuario su opcion.
#include <iostream>

 using namespace std;
 int main(){
  int tipoMotor=0; //se declara la variable que se usara para guardar el valor del tipo de motor y luego decidir el mensaje a mostrar.

//se le pide al usuario que ingrese el numero de su opcion y se establece la entrada del dato.
  cout << "Seleccione una de las opciones para tipos de motor: 0, 1, 2, 3, 4. \n";
  cin>> tipoMotor;

//se establece el switch para definir cada cosa para mostrar que tipo de motor es la opcion seleccionda.
  switch(tipoMotor){

    case 0:
    cout << "No esta establecido un valor para el tipo de bomba. \n";
    break;

    case 1:
    cout << "Es una bomba de agua. \n";
    break;

    case 2:
    cout << "Es una bomba de gasolina. \n";
    break;

    case 3:
    cout << "Es una bomba de hormigon. \n";
    break;

    case 4:
    cout << "Es una bomba de pasta alimenticia. \n";
    break;

    default:
    cout << "No existe un valor valido para este tipo de bomba. \n";
  }

  return 0;
  
 }