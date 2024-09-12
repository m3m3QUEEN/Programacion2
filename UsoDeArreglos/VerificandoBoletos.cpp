#include <iostream>
using namespace std;

int main() {
    int cantidadDigitos;
    int sumaV = 0;
    int sumaF = 0;
    int sumaT = 0;

     cout << "Ingrese la cantidad de digitos de su boleto: " << endl;
    cin >> cantidadDigitos;

    int digitos[cantidadDigitos]; // Declarar el array después de leer el tamaño

    cout << "Ingrese los numeros de su boleto: " << endl;
    for (int i = 0; i < cantidadDigitos; i++) {
        cin >> digitos[i];
    }

     // Sumar la primera mitad
    for (int i = 0; i < cantidadDigitos / 2; i++) {
         sumaV += digitos[i];
    }

    // Sumar la segunda mitad
    for (int i = cantidadDigitos / 2; i < cantidadDigitos; i++) {
         sumaF += digitos[i];
    }

    sumaT = sumaV + sumaF;

     // Comprobar si la cantidad de dígitos es par y si las sumas son iguales
    if (cantidadDigitos % 2 == 0 && sumaV == sumaF) {
        cout << sumaV << " " << 1 << endl;
     } 
     else {
        cout << sumaT << " " << 0 << endl;
     }

     return 0;
    }