#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // Definición de variables
    int op;
    float dolar = 3.68;
    float euro=4.17;
    float libra=4.88;
    float monto,total;

    do{ // Menu principal
        cout << "\n\n";
        cout << "------ CONVERSIONES ------\n";
        cout << "1.- Cambio de Dolar\n";
        cout << "2.- Cambio de Euros\n";
        cout << "3.- Cambio de Libras\n";
        cout << "4.- Salir\n";
        cout << "\n";

        do { // Validamos la opcion ingresada
            cout << "Ingrese opcion: ";
            cin >> op;

            if(op<1 || op>4)
                cout << "ERROR, ingrese un valor de 1 a 4\n";
        }while(op<1 || op>4);

        switch(op){
            case 1: // Dolar 
                do{
                    cout << "Monto ($): ";
                    cin >> monto;

                    if(monto<=0)
                        cout << "ERROR: El monto debe ser mayor a cero\n";
                }while(monto <=0);

                total = monto * dolar; 
                cout << "TOTAL = " << total << "\n";

            break;

            case 2:// Circunferencia
                do{
                    cout << "Monto (€): ";
                    cin >> monto;

                    if(monto<=0)
                        cout << "ERROR: El monto debe ser mayor a cero\n";
                }while(monto <=0);

                total = monto * euro; 
                cout << "TOTAL = " << total << "\n";

            break;

            case 3: // Rectangulo 
                do{
                    cout << "Monto (Libras): ";
                    cin >> monto;

                    if(monto<=0)
                        cout << "ERROR: El monto debe ser mayor a cero\n";
                }while(monto <=0);

                total = monto * libra; 
                cout << "TOTAL = " << total << "\n";
            break;
            case 4: // Salimos del menu
                cout << "Gracias... Vuelva pronto\n";
            break;
        }
    }while(op!=4);
    return 0;
}
