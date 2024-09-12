#include <iostream>
using namespace std;

int main() {
    int cantidadDigitos;
        int sumaV;
            int sumaF;
                int sumaT;

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
                                                                                    sumaF +=
                                                                                                // Comprobar si la cantidad de dígitos es par y si las sumas son iguales
                                                                                                    if (cantidadDigitos % 2 == 0 && sumaV == sumaF) {
                                                                                                            cout << sumaV << " " << 1 << endl;
                                                                                                                } else {
                                                                                                                        cout << sumaT << " " << 0 << endl;
                                                                                                                            }

                                                                                                                                return 0;
                                                                                                                                }

                                                                                                                                ChatGPT dijo:
                                                                                                                                ChatGPT
                                                                                                                                Aquí tienes tu código C++ convertido a LaTeX, con una breve introducción:

                                                                                                                                latex
                                                                                                                                Copiar código
                                                                                                                                \documentclass{article}
                                                                                                                                \usepackage{listings}
                                                                                                                                \usepackage{xcolor}

                                                                                                                                \lstset{
                                                                                                                                    language=C++,
                                                                                                                                        basicstyle=\ttfamily,
                                                                                                                                            keywordstyle=\color{blue},
                                                                                                                                                commentstyle=\color{gray},
                                                                                                                                                    stringstyle=\color{red},
                                                                                                                                                        numbers=left,
                                                                                                                                                            numberstyle=\tiny,
                                                                                                                                                                stepnumber=1,
                                                                                                                                                                    numbersep=10pt,
                                                                                                                                                                        tabsize=4,
                                                                                                                                                                            showspaces=false,
                                                                                                                                                                                showstringspaces=false,
                                                                                                                                                                                    breaklines=true
                                                                                                                                                                                    }

                                                                                                                                                                                    \title{Cálculo de la Suma de Dígitos de un Boleto}
                                                                                                                                                                                    \author{Autor}

                                                                                                                                                                                    \begin{document}

                                                                                                                                                                                    \maketitle

                                                                                                                                                                                    \section{Introducción}
                                                                                                                                                                                    El siguiente código en C++ permite al usuario ingresar una cantidad arbitraria de dígitos de un boleto y luego calcula la suma de la primera y la segunda mitad de estos dígitos. Si la cantidad de dígitos es par y las dos sumas son iguales, el programa imprime la suma de una de las mitades junto con el valor 1. En caso contrario, se imprime la suma total de los dígitos junto con el valor 0.

                                                                                                                                                                                    \section{Código en C++}

                                                                                                                                                                                    \begin{lstlisting}
                                                                                                                                                                                    #include <iostream>
                                                                                                                                                                                    using namespace std;

                                                                                                                                                                                    int main() {
                                                                                                                                                                                        int cantidadDigitos;
                                                                                                                                                                                            int sumaV = 0;  // Inicializar las variables de suma
                                                                                                                                                                                                int sumaF = 0;
                                                                                                                                                                                                    int sumaT = 0;

                                                                                                                                                                                                        cout << "Ingrese la cantidad de digitos de su boleto: " << endl;
                                                                                                                                                                                                            cin >> cantidadDigitos;

                                                                                                                                                                                                                int digitos[cantidadDigitos];  // Declarar el array después de leer el tamaño

                                                                                                                                                                                                                    cout << "Ingrese los numeros de su boleto: " << endl;
                                                                                                                                                                                                                        for (int i = 0; i < cantidadDigitos; i++) {
                                                                                                                                                                                                                                cin >> 

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
                                                                                                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                                                                                                            cout << sumaT << " " << 0 << endl;
                                                                                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                    \end{lstlisting}

                                                                                                                                                                                                                                                                                                                    \end{document}
                                                                                                                                                                                                                                                                                                                    Este documento incluye una breve introducción que explica el propósito del código, seguido por el propio código en formato de listados. Puedes copiarlo y pegarlo directamente en tu proyecto en Overleaf.










                                                                                                                                                                                                                                                                                                                    ChatGPT puede come