#include<iostream>
using namespace std;

int main(){
  double precioProd, bono, dscto, mbruto,mbono,mtotal,mdscto;
  string nombreProd;
  double suma; // Acumulador 
  int cantProd;
  char genero;
  int opcion;
  // Contadores
  int contFem = 0;
  int contMasc = 0;
  int cont = 0;

  do {
    cout << "1.- Procesar ventas\n";
    cout << "2.- Mostrar reporte\n";
    cout << "3.- Salir\n";

    do{
      cout << "Ingrese opcion: ";
      cin >> opcion;

      if(opcion<1 || opcion>3)
        cout << "Error: Opcion invalida\n";
    }while(opcion<1 || opcion>3);

    switch(opcion){
      case 1:
        cout << "Escriba el nombre del producto: ";
        cin >> nombreProd;

        do{
          cout << "Escriba el precio del producto: ";
          cin >> precioProd;
          
          cout << "Escriba la cantidad del producto: ";
          cin >> cantProd;
          
          if(precioProd <= 0 || cantProd <=0)
            cout << "Precio o cantidad ingresado invalido\n";
        }while(precioProd <=0 || cantProd <=0);

        do{
          cout << "Escriba el genero (M,F): ";
          cin >> genero;
          
          if(genero != 'M' && genero != 'm' && genero != 'F' && genero != 'f')
            cout << "Genero ingresado invalido\n";
        }while(genero != 'M' && genero != 'm' && genero != 'F' && genero != 'f');

        switch(genero){
          case 'F':
          case 'f':
            bono = 0.2;
            dscto = cantProd <=10 ? 0.3 : 0.4;
            contFem++;
            break;
          case 'M':
          case 'm':
            bono = 0.18;
            dscto = cantProd <=10 ? 0.2 : 0.5;
            contMasc++;
            break;
        }

        mbruto = cantProd * precioProd;
        mbono = mbruto * bono;
        mdscto = mbruto * dscto;
        mtotal = mbruto - mbono - mdscto;

        cont++;
        suma += mtotal;

        cout << "Monto bruto = " << mbruto << "\n";
        cout << "Monto bono= " << mbono << "\n";
        cout << "Monto dscto = " << mdscto << "\n";
        cout << "Monto total = " << mtotal << "\n";
        break;
      case 2:
        cout << "Cant de clientes femeninas = " << contFem << "\n";
        cout << "Cant de clientes masculinos= " << contMasc << "\n";
        cout << "Cant de clientes total = " << cont << "\n";
        cout << "Acumulado de ventas totales = " << suma << "\n";
        break;
      case 3:
        cout << "Gracias por su visita...\n";
        break;
    }
  }while(opcion!=3);
  return 0;
}
