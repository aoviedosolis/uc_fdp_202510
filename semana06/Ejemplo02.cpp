#include<iostream>
using namespace std;

int main(){
    // Definición de variables
    int op, opc;
    float mdp,mrt,msd=0;

    do{ // Menu principal
        cout << "------ MENU CAJERO ------\n";
        cout << "1.- Procesar\n";
        cout << "2.- Salir\n";


        do { // Validamos la opcion ingresada
            cout << "Ingrese opcion: ";
            cin >> op;

            if(op<1 || op>2)
                cout << "ERROR, ingrese el valor 1 o 2\n";
        }while(op<1 || op>2);

        switch(op){
            case 1: // Mostramos el submenu cajero
                do{
                    cout << "\n\n";
                    cout << "------ SUBMENU CAJERO ------\n";
                    cout << "1.- Depositar\n";
                    cout << "2.- Retirar\n";
                    cout << "3.- Ver saldo\n";
                    cout << "4.- Salir\n";
                    cout << "\n";
           
                    do { // Validamos el valor de la variable OPC
                        cout << "Ingrese opcion: ";
                        cin >> opc;

                        if(opc<1 || opc>4)
                            cout << "ERROR, ingrese un valor de 1 a 4\n";
                    }while(opc<1 || opc>4);
                
                    switch(opc){
                        case 1: // Procesamos un deposito
                            do{// Validamos el monto a depositar
                                cout << "Ingrese monto a depositar : ";
                                cin >> mdp;

                                if(mdp <=0)
                                    cout << "ERROR: Ingrese un monto valido\n";
                            }while(mdp <= 0);

                            msd += mdp;// Realizamos el deposito

                            break;

                        case 2:// Procesamos un retiro
                            do { 
                                cout << "Ingrese el monto a retirar: ";
                                cin >> mrt;

                                if(mrt <= 0) // Validamos que el monto sea mayor a cero
                                    cout << "ERROR: Ingrese un monto valido\n";
                                
                                if(mrt>msd) // Validamos que exista saldo disponible
                                    cout << "El monto a retirar tiene que ser menor o igual al saldo disponible\n";

                            }while(mrt <=0 || mrt>msd);

                            msd -= mrt; // Realizamos el retiro

                        break;

                        case 3: // Mostramos el saldo
                            cout << "Saldo disponible = " << msd << "\n";
                        break;
                        case 4: // Salimos del submenu
                            cout << "Gracias... Volviendo al menu principal\n";
                        break;
                    }
                }while(opc != 4);
                
                break;
                
              case 2:
                cout << "Gracias... Vuelva pronto\n";
                break;
        }
    }while(op!=2);

    return 0;
}
