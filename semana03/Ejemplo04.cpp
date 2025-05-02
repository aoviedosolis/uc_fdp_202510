#include <iostream>
using namespace std;

int main(){
  // Definimos las variables
  double sueldo;
  // Leemos el valor de sueldo
  cout << "Escriba el sueldo: ";
  cin >> sueldo;

  // Validamos si es un valor mayor a 0
  if(sueldo>0){
    // Verdadero
    if (sueldo == 930 ){
      cout << "Si es sueldo basico\n";
    }else{
      cout << "NO es sueldo basico\n";
    }
  }
  return 0;
}
