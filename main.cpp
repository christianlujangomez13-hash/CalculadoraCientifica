#include <iostream>
#include <stdexcept>
#include <cmath>
#include <cstdlib>
using namespace std;

double suma(double a, double b)
{
    return a + b;
}

double resta(double a, double b)
{
    return a - b;
}

double multiplicacion(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    if (b == 0)
        throw invalid_argument("Division por cero no permitida");
    return a / b;
}

int factorial(int n) {
    if (n < 0)
        throw invalid_argument("Factorial de numero negativo no definido.");
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

double potencia(double base, int exponente){
    return pow(base, exponente);
}

double raiz(double x){
    if (x < 0)
        throw invalid_argument("Raiz de numero negativo no permitida.");
    return sqrt(x);
}

void pausar() {
    cin.ignore();
    cout << "\nPresiona ENTER para continuar...";
    cin.get();
}

void salir() {
    cout << "\nSaliendo del programa...\n";
}

int main() {
    int opcion;
    double n1, n2;

    do {
        system("cls");
        cout << "========== CALCULADORA MULTIFUNCION ==========\n";
        cout << "1. Suma\n";
        cout << "2. Resta\n";
        cout << "3. Multiplicacion\n";
        cout << "4. Division\n";
        cout << "5. Factorial\n";
        cout << "6. Potencia\n";
        cout << "7. Raiz cuadrada\n";
        cout << "8. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        try {
            switch (opcion)
            {
            case 1:
                cout << "Ingresa numero uno: ";
                cin >> n1;
                cout << "Ingresa numero dos: ";
                cin >> n2;
                cout << "Resultado: " << suma(n1, n2) << endl;
                pausar();
                break;

            case 2:
                cout << "Ingresa numero uno: ";
                cin >> n1;
                cout << "Ingresa numero dos: ";
                cin >> n2;
                cout << "Resultado: " << resta(n1, n2) << endl;
                pausar();
                break;

            case 3:
                cout << "Ingresa numero uno: ";
                cin >> n1;
                cout << "Ingresa numero dos: ";
                cin >> n2;
                cout << "Resultado: " << multiplicacion(n1, n2) << endl;
                pausar();
                break;

            case 4:
                cout << "Ingresa numero uno: ";
                cin >> n1;
                cout << "Ingresa numero dos: ";
                cin >> n2;
                cout << "Resultado: " << division(n1, n2) << endl;
                pausar();
                break;

            case 5:
                cout << "Ingresa un numero: ";
                cin >> n1;
                cout << "Resultado: " << factorial((int)n1) << endl;
                pausar();
                break;

            case 6:
                cout << "Ingresa base: ";
                cin >> n1;
                cout << "Ingresa exponente: ";
                cin >> n2;
                cout << "Resultado: " << potencia(n1, (int)n2) << endl;
                pausar();
                break;

            case 7:
                cout << "Ingresa un numero: ";
                cin >> n1;
                cout << "Resultado: " << raiz(n1) << endl;
                pausar();
                break;

            case 8:
                salir();
                break;

            default:
                cout << "Opcion no valida.\n";
                pausar();
            }
        }
        catch (const exception &e) {
            cout << "Error: " << e.what() << endl;
            pausar();
        }

    } while (opcion != 8);

    return 0;
}
