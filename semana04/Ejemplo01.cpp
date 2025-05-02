#include<iostream>
using namespace std;

int main(){
  // Declaración de variables
  double precioProd;
  double bono;
  double MBruto;
  double MBono;
  double MTotal;
  double dcto;
  double MDcto;
  int cantProd;
  char genero;
  int op;
  string nombre;

  // Mostrar menu principal
  cout << "======= MENU PRINICPAL ========\n";
  cout << "1.- Procesar\n";
  cout << "2.- Salir\n";
  cout << "Escriba una opcion --> ";
  cin >> op;

  switch(op){
    case 1: // En caso se seleccione la opcion 1
      cout << "Escriba el nombre del cliente : ";
      cin >> nombre;
      cout << "Ingrese la cantidad de productos: ";
      cin >> cantProd;
      cout << "Ingrese el precio del producto: ";
      cin >> precioProd;

      if(cantProd > 0 && precioProd > 0){
        cout << "Escriba la letra del genero (F o M): ";
        cin >> genero;

        switch(genero){
          case 'F':
            bono = 0.2;
            dcto = cantProd <= 10 ? 0.3 : 0.4;
            break;
          case 'f':
            bono = 0.2;
            dcto = cantProd <= 10 ? 0.3 : 0.4;
            break;
          case 'M':
            bono = 0.18;
            dcto = cantProd <= 10 ? 0.2 : 0.5; 
            break;
          case 'm':
            bono = 0.18;
            dcto = cantProd <= 10 ? 0.2 : 0.5;
            break;
          default:
            cout << "ERROR: Valor ingresado no valido\n";
            break;
        }

        // Hacemos los calculos correspondientes 
        MBruto = cantProd * precioProd;
        MBono = MBruto * bono;
        MDcto = MBruto * dcto;
        MTotal = MBruto - MBono - MDcto;

        cout << "Monto bruto = " << MBruto << "\n";
        cout << "Monto bono = " << MBono << "\n";
        cout << "Monto descuento = " << MDcto << "\n";
        cout << "Monto Total = " << MTotal << "\n";

      }else{
        cout << "ERROR: Valores ingresados no validos\n";
      }
      break;
    case 2: // En caso se seleccione la opcion 2
      cout << "Gracias...Vuelva pronto\n";
      break;
    default:// En caso se seleccione Otra Opcion
      cout << "ERROR: Opcion ingresada no es valida\n";
      break;
  }
  return 0;
}
