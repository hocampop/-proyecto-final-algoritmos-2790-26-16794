#include <iostream>
using namespace std;

int main() {
    int opcion = 0;

    do {
        cout <<"\n=== Novamarket ===\n";
        cout <<"1. Registrar venta\n";
        cout <<"2. Ver resumen parcial del dia\n";
        cout <<"3. Cerrar caja y salir\n";
        cout <<"seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "registro de venta\n";
        }

        else if (opcion == 2) {
            cout << "Resumen parcial del dia\n";
        }

        else if (opcion == 3) {
            cout << "Cerrando caja...\n";
        }

        else {
            cout << "error: opcion no valida\n";
            }
        } while (opcion != 3);

        return 0;
    }