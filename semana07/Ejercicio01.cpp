#include <iostream>
using namespace std;

int main() {
  setlocale(LC_CTYPE, "Spanish");
  // Definición de variables
  int op, nota;
  char gen; // Genero M o F
  char estado; // Casado (c) o Soltero (s)
  int cantMasc = 0; // Cant total de hombres
  int cantMascCas = 0; // Cant de hombres casados
  int cantMascSolt = 0; // Cant de hombres solteros
  int cantMascNotaAlta = 0; // Cant de hombres nota mas alta
  int cantMascSoltAp = 0;  // Cant de hombres solteros aprobados
  int cantMascSoltDesap = 0; // Cant de hombres solteros desaprobados
  int cantMascCasAp = 0; // Cant de hombres casados aprobados
  int cantMascCasDesap = 0;  // Cant de hombres casados desaprobados
  int cantFem = 0; // Cant de mujeres
  int cantFemCas = 0; // Cant de mujeres casadas
  int cantFemSolt = 0; // Cant de mujeres solteras
  int cantFemCasApr = 0; // Cant de mujeres casadas aprobadas
  int cantFemCasDesap = 0; // Cant de mujeres casadas desaprobadas
  int cantFemSoltApr = 0; // Cant de mujeres solteras aprobadas
  int cantFemSoltDesap = 0; // Cant de mujeres solteras desaprobadas
  int sumaNotas = 0; // Suma de notas
  int cantPersonas = 0; // Cantidad total de personas

  do {
    // Mostrar el menu
    cout << "\n------------------ MENU ------------------\n";
    cout << "1. Procesar.\n";
    cout << "2. Reportar.\n";
    cout << "3. Salir.\n";
    
    do {
      cout << "Ingrese opcion: \t";
      cin >> op;
      if (op < 1 || op > 3) {
        cout << "\nERROR, debe elegir 1 o 2. Vuelva a ingresar.\n\n";
      }
    } while (op < 1 || op > 3);

    switch (op) {
      case 1: { // PROCESAR: Ingresar, validar, calcular, mostrar
        do {
          cout << "\nIngrese genero: \t";
          cin >> gen;
          if (gen != 'F' && gen != 'f' && gen != 'M' && gen != 'm') {
            cout << "\nERROR, debe ingresar F o M. Vuelva a ingresar.\n\n";
          }
        } while (gen != 'F' && gen != 'f' && gen != 'M' && gen != 'm');

        do {
          cout << "\nIngrese estado civil: \t";
          cin >> estado;
          if (estado != 'C' && estado != 'c' && estado != 'S' && estado != 's') {
            cout << "\nERROR, debe ser C o S. Vuelva a ingresar.\n\n";
          }
        } while (estado != 'C' && estado != 'c' && estado != 'S' && estado != 's');

        do {
          cout << "\nIngrese nota: \t";
          cin >> nota;
          if (nota < 0 || nota > 20) {
            cout << "\nERROR, debe ser entre 0 y 20. Vuelva a ingresar.\n\n";
          }
        } while (nota < 0 || nota > 20);

        sumaNotas = sumaNotas + nota;

        switch (gen) {
          case 'm':
          case 'M': {
            cantMasc++;
            switch (estado) {
              case 'c':
              case 'C': {
                cantMascCas++;
                if (nota > 10) {
                  cantMascCasAp++;
                } else {
                  cantMascCasDesap++;
                }
                break;
              }
              case 's':
              case 'S': {
                cantMascSolt++;
                if (nota > 10) {
                  cantMascSoltAp++;
                } else {
                  cantMascSoltDesap++;
                }
                break;
              }
            }
            if (nota > cantMascNotaAlta) {
              cantMascNotaAlta = nota;
            }
            break;
          }
          case 'f':
          case 'F': {
            cantFem++;
            switch (estado) {
              case 'c':
              case 'C': {
                cantFemCas++;
                if (nota > 10) {
                  cantFemCasApr++;
                } else {
                  cantFemCasDesap++;
                }
                break;
              }
              case 's':
              case 'S': {
                cantFemSolt++;
                if (nota > 10) {
                  cantFemSoltApr++;
                } else {
                  cantFemSoltDesap++;
                }
                break;
              }
            }
            break;
          }
        }
        break;
      }
      case 2: { // REPORTAR
        cout << "\nLa cantidad de hombres es:\t" << cantMasc << "\n";
        cout << "La cantidad de mujeres es:\t" << cantFem << "\n";
        cout << "La cantidad de hombres casados aprobados es:\t" << cantMascCasAp << "\n";
        cout << "La cantidad de mujeres casadas aprobadas es:\t" << cantFemCasApr << "\n";
        cout << "La cantidad de hombres solteros desaprobados es:\t" << cantMascSoltDesap << "\n";
        cout << "La cantidad de mujeres solteras desaprobadas es:\t" << cantFemSoltDesap << "\n";
        cout << "La sumatoria de notas ingresadas es:\t" << sumaNotas << "\n\n";
        break;
      }
      case 3: { // SALIR
        cout << "\nAdios...!. Vuelva pronto.\n\n";
        break;
      }
    }
  }while (op != 3);
  
  return 0;
}