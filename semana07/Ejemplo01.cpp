#include<iostream>
using namespace std;

int main(){
  double cantidad,precio,dscto,mbruto,mdscto,mfinal;
  int contClientes = 0;
  double sumaMF = 0;
  int opcion;

  do{
    cout << "\n\t==== FRUTERIA ====\n";
    cout << "1.- Vender\n";
    cout << "2.- Reporte de cantidad de clientes\n";
    cout << "3.- Reporte total de venta\n";
    cout << "4.- Salir\n";

    do{
      cout << "Escriba la opcion: ";
      cin >> opcion;

      if(opcion<1 || opcion>4)
        cout<< "ERROR: Opcion ingresada no valida\n";
    }while(opcion<1 || opcion>4);

    switch(opcion){
      case 1:
        do{
          cout << "Escriba la cantidad: ";
          cin >> cantidad;

          cout << "Escriba el precio: ";
          cin >> precio;

          if(cantidad <=0 || precio <=0 ){
            cout << "ERROR: La cantidad y el precio deben ser mayores a cero\n";
          }
        }while(cantidad <=0 || precio <=0 );

        if (cantidad > 0 && cantidad <=2) // 1,2
          dscto = 0;
        else if (cantidad <=5) // 3,4,5
          dscto = 0.1;
        else if (cantidad <=10) // 6,7,8,9,10
          dscto = 0.15;
        else // 10,11,12,.....
          dscto = 0.2;

        mbruto = precio * cantidad;
        mdscto = mbruto * dscto;
        mfinal = mbruto - mdscto;

        cout << "Monto bruto = " << mbruto << "\n";
        cout << "Monto dscto = " << mdscto << "\n";
        cout << "Monto final = " << mfinal << "\n";

        // Actualizamos el contador
        contClientes ++; //contClientes = contClientes + 1;
        // Actualizamos el acumulador
        sumaMF += mfinal; // sumaMF = sumaMF + mfinal;
        break;
      case 2:
        cout << "Total de clientes atendidos = " << contClientes << "\n";
        break;
      case 3:
        cout << "Venta total del dia = " << sumaMF << "\n";
        break;
      case 4:
        cout << "Gracias por su visita...\n";
        break;
    }

  }while(opcion!=4);

  return 0;
}
