#include <iostream>
using namespace std;

int main() {
    const int filas = 2;
    const int columnas = 2;
    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int resultado[filas][columnas];
   
    cout << "Ingresa los valores para la primera matriz:" << endl;
    cout << "Elemento [1][1]: ";
    cin >> matriz1[0][0];
    cout << "Elemento [1][2]: ";
    cin >> matriz1[0][1];
    cout << "Elemento [2][1]: ";
    cin >> matriz1[1][0];
    cout << "Elemento [2][2]: ";
    cin >> matriz1[1][1];


    cout << "Ingresa los valores para la segunda matriz:" << endl;
    cout << "Elemento [1][1]: ";
    cin >> matriz2[0][0];
    cout << "Elemento [1][2]: ";
    cin >> matriz2[0][1];
    cout << "Elemento [2][1]: ";
    cin >> matriz2[1][0];
    cout << "Elemento [2][2]: ";
    cin >> matriz2[1][1];

    int opcion1; 

    cout << "elije la operacion que quieres calcular" << endl;
    cout << "1. suma entre matrices" << endl;
    cout << "2. resta entre matrices" << endl;
    cout << " 3. multiplicacion entre matrices" << endl;
    cout << "4. multiplicacion por un escalar" << endl;
    cout << "5. transponer una matriz" << endl;
    cin >> opcion1;

    switch (opcion1)
    {
    case 1:
   

        for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }


    
    cout << "La matriz resultante de la suma es:" << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << resultado[i][j] << " " << endl;
        }
    }
    break;
    default:
            cout << "Opción no válida." << endl;
            break;

    case 2:
    

        for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    cout << "La matriz resultante de la resta es:" << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << resultado[i][j] << " " << endl;
        }
    }

    break;

    case 3:
    

    resultado[0][0] = matriz1[0][0] * matriz2[0][0] + matriz1[0][1] * matriz2[1][0];
    resultado[0][1] = matriz1[0][0] * matriz2[0][1] + matriz1[0][1] * matriz2[1][1];
    resultado[1][0] = matriz1[1][0] * matriz2[0][0] + matriz1[1][1] * matriz2[1][0];
    resultado[1][1] = matriz1[1][0] * matriz2[0][1] + matriz1[1][1] * matriz2[1][1];


    cout << "La matriz resultante de la multiplicacion es:" << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << resultado[i][j] << " ";
        }
    cout << endl;
    }
    break;


    case 4:
    int escalar;
    int opcion;
   


    cout << "Ingresa el escalar: ";
    cin >> escalar;


    cout << "¿Con cuál matriz quieres multiplicar el escalar?" << endl;
    cout << "1. Matriz 1" << endl;
    cout << "2. Matriz 2" << endl;
    cin >> opcion;


    switch(opcion) {
        case 1:
            for(int i = 0; i < filas; i++) {
                for(int j = 0; j < columnas; j++) {
                    resultado[i][j] = matriz1[i][j] * escalar;
                }
            }
            break;


        case 2:
            for(int i = 0; i < filas; i++) {
                for(int j = 0; j < columnas; j++) {
                    resultado[i][j] = matriz2[i][j] * escalar;
                }
            }
            break;


        default:
            cout << "Opción no válida." << endl;
    }

    cout << "La matriz resultante de la multiplicación es:" << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }



    case 5:

    int opcion3;

    cout << "Elige la matriz que quieres transponer" << endl;
    cout << "1. Matriz 1" << endl;
    cout << "2. Matriz 2" << endl;
    cin >> opcion3; 

    switch (opcion3) {
        case 1:
            cout << "La matriz resultante de la transposición es:" << endl;
            for(int i = 0; i < columnas; i++) {
                for(int j = 0; j < filas; j++) {
                    cout << matriz1[j][i] << " "; 
                }
                cout << endl;
            }
            break;

            

        case 2:
            cout << "La matriz resultante de la transposición es:" << endl;
            for(int i = 0; i < columnas; i++) {
                for(int j = 0; j < filas; j++) {
                    cout << matriz2[j][i] << " "; 
                }
                cout << endl;
            }
            break;

        default:
            cout << "Opción no válida." << endl;
            break;
    }
    }

    return 0;
}
