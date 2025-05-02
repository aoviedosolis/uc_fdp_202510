#include<iostream>
using namespace std;

int main(){
    // Definición de variables
    int op;
    int pax = 0;
    float dcto = 0;
    float total = 0;
    float tarifa = 0;
    float tc=0;

    do{ // Menu principal
        cout << "\n\n";
        cout << "------ PAQUETES ------\n";
        cout << "1.- Punta Cana\n";
        cout << "2.- San Andres\n";
        cout << "3.- Cancun\n";
        cout << "4.- Salir\n";
        cout << "\n";

        do { // Validamos la opcion ingresada
            cout << "Ingrese opcion: ";
            cin >> op;

            if(op<1 || op>4)
                cout << "ERROR, ingrese un valor de 1 a 4\n";
        }while(op<1 || op>4);


        switch(op){
            case 1: // Punta Cana
              do{
                cout << "Ingrese cant de PAX: ";
                cin >> pax;

                cout << "Ingrese tipo de cambio: ";
                cin >> tc;

                if(pax<=0 || tc <=0)
                  cout << "ERROR: La cant de pasajeros y el tipo de cambio deben ser mayores a cero\n";
              }while(pax<=0 || tc <=0);
              if(pax > 4)
                dcto = 0.035;
              tarifa = 780;
              total = tc * ((pax * tarifa) - (pax*dcto));
              cout << "TOTAL = " << total << "\n";
            break;

            case 2: // San Andres 
              do{
                cout << "Ingrese cant de PAX: ";
                cin >> pax;

                cout << "Ingrese tipo de cambio: ";
                cin >> tc;

                if(pax<=0 || tc <=0)
                  cout << "ERROR: La cant de pasajeros y el tipo de cambio deben ser mayores a cero\n";
              }while(pax<=0 || tc <=0);
              if(pax > 4)
                dcto = 0.04;
              tarifa = 1350;
              total = (pax * tarifa) - (pax*dcto);
              cout << "TOTAL = " << total << "\n";
            break;

            case 3: // Cancun 
              do{
                cout << "Ingrese cant de PAX: ";
                cin >> pax;

                cout << "Ingrese tipo de cambio: ";
                cin >> tc;

                if(pax<=0 || tc <=0)
                  cout << "ERROR: La cant de pasajeros y el tipo de cambio deben ser mayores a cero\n";
              }while(pax<=0 || tc <=0);
              if(pax > 4)
                dcto = 0.045; 
              tarifa = 2550;
              total = tc * ((pax * tarifa) - (pax*dcto));
              cout << "TOTAL = " << total << "\n";
            break;
            case 4:
              cout << "Gracias por su visita...Vuelva pronto\n";
            break;
        }

        pax = 0;
        dcto = 0;
        total = 0;
        tarifa = 0;
        tc=0;
    }while(op!=4);
    return 0;
}
