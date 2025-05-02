#include <iostream>
using namespace std;

int main(){
  // Declarar variables
  char letra;
  // Leer el valor de letra
  cout << "Escriba una letra: ";
  cin >> letra;
  // Reportamos el tipo de nave
  switch(letra){
    case 'B':
      cout << "Es un buque\n";
      break;
    case 'b':
      cout << "Es un buque\n";
      break;
    case 'F':
      cout << "Es una fragata\n";
      break;
    case 'f':
      cout << "Es una fragata\n";
      break;
    case 'C':
      cout << "Es un crucero\n";
      break;
    case 'c':
      cout << "Es un crucero\n";
      break;
    default:
      cout << "No se encontro tipo de nave\n";
      break;
  }
  return 0;
}
