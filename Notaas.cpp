//se hará un programa para calcular las notas de un estudiante y se aproba o no el periodo.
#include <iostream>

 using namespace std;
 int main(){
    //Se declaran todas las variables necesarias para guardar cada nota y el nombre del alumno.
    float nota1=0.00, nota2=0.00, parcial=0.00, parcial2=0.00, notaLabo=0.00, notaProyecto=0.00, notaF=0.00;
    string nombre;

//se le idica al alumno que se hara y se le pide ingresar su nombre.
    cout << "Se calculara segun sus notas si usted paso o dejo la materia. \n";
    cout << "Primero ponga su nombre por favor.  \n";
    cin >> nombre;
//se empieza a pedir ingresar cada nota de las evaluaciones.
    cout << "Ponga las notas que obtuvo en sus dos cortos. \n";
    cin >> nota1 >> nota2;

    cout << "Ponga la nota de sus dos parciales. \n";
    cin >> parcial >> parcial2;

    cout << "Ponga su nota en el Laboratorio. \n";
    cin >> notaLabo;

    cout << "Su nota de su proyecto. \n";
    cin >> notaProyecto;

//Se puso un caso donde se pierdan las notas si estan son negativas o mayores de 10 (notas que no son posibles tener).
    if((nota1<0 || nota2<0 || parcial<0 || parcial2<0 || notaLabo<0 || notaProyecto<0) || (nota1>10 || nota2>10 || parcial<0 || parcial2>10 || notaLabo>10 || notaProyecto>10)){

        cout << "Ingrese una nota real";
    }
// si son notas posibles se empieza un caso donde se calcula el promedio segun porcentajes de cada evaluación ya dados.
    else{
        notaF=(nota1 * 0.10) + (nota2 * 0.10) + (parcial * 0.15) + (parcial2 * 0.20) + (notaLabo * 0.20) + (notaProyecto * 0.25);

//luego se expresan los casos segun el resultado del promedio, definiendo en que condición se le dira al usuario que aprobo la materia o la reprobo.
        if(notaF<6.00){
            cout << "Su nota final es: " << notaF << " usted reprobo la materia. \n";
        }
        else if(notaF==6.00){
            cout << "Su nota final es: " << notaF << " usted paso raspado. \n";
        }
        else if(notaF>6.00){
            cout << "Felicidades usted aprobo la materia!!!!, nota: " << notaF;
        }
    }
 }