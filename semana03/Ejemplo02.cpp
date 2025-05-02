#include <iostream>
using namespace std;

int main(){
  // Definimos las variables
  double cant, precUnit, montoBruto, descUnit, descTotal, montoNeto;
  // Leemos los valores de cantidad y precUnit
  cout << "Ingrese la cantidad: ";
  cin >> cant;
  
  cout << "Ingrese el Precio Unitario: ";
  cin >> precUnit;

  if(cant > 0 && precUnit > 0){
      // Parte verdadera
      montoBruto = cant * precUnit;

      if(cant <= 2){
        // Parte verdadera
        descUnit = 0;
      }else{ // Parte falsa
        if(cant <= 5){
          // parte verdadera
          descUnit = 0.1;
        }else{ // Parte falsa
          if(cant <=10){
            // Parte verdadera
            descUnit = 0.15;
          }else{ // Parte falsa
            descUnit = 0.2;
          }
      }
      descTotal = cant * descUnit;
      montoNeto = montoBruto - descTotal;
      cout << "El monto neto es:" << montoNeto << "\n";
    }
  }else{ // Parte falsa
    cout << "La cantidad y el precio unitario deben ser mayor a cero\n";
  }
  return 0;
}
