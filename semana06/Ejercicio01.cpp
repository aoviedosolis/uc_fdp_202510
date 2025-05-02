#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // Definición de variables
    int op;
    float area,base,altura,radio; 

    do{ // Menu principal
        cout << "\n\n";
        cout << "------ AREAS DE FIGURAS ------\n";
        cout << "1.- Area de un triangulo\n";
        cout << "2.- Area de una circunferencia\n";
        cout << "3.- Area de un rectangulo\n";
        cout << "4.- Salir\n";
        cout << "\n";

        do { // Validamos la opcion ingresada
            cout << "Ingrese opcion: ";
            cin >> op;

            if(op<1 || op>4)
                cout << "ERROR, ingrese un valor de 1 a 4\n";
        }while(op<1 || op>4);

        switch(op){
            case 1: // Triangulo 
                do{
                    cout << "Base : ";
                    cin >> base;

                    cout << "Altura : ";
                    cin >> altura;

                    if(base <=0 || altura <=0)
                        cout << "ERROR: La base y la altura deben ser mayores a cero\n";
                }while(base <=0 || altura <=0);

                area = (base * altura ) / 2;// Calculamos el area 
                cout << "AREA = " << area << "\n";

            break;

            case 2:// Circunferencia
                do { 
                    cout << "Radio : ";
                    cin >> radio;

                    if(radio <= 0) // Validamos que el monto sea mayor a cero
                        cout << "ERROR: El valor del radio debe ser mayor a cero\n";

                }while(radio <=0);

                area = 3.14 * pow(radio,2);// Calculamos el area 
                cout << "AREA = " << area << "\n";

            break;

            case 3: // Rectangulo 
                do{
                    cout << "Base : ";
                    cin >> base;

                    cout << "Altura : ";
                    cin >> altura;

                    if(base <=0 || altura <=0)
                        cout << "ERROR: La base y la altura deben ser mayores a cero\n";
                }while(base <=0 || altura <=0);

                area = base * altura;// Calculamos el area 
                cout << "AREA = " << area << "\n";
            break;
            case 4: // Salimos del menu
                cout << "Gracias... Vuelva pronto\n";
            break;
        }
    }while(op!=4);
    return 0;
}
