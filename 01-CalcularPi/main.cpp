#include <iostream>
using namespace std;

int main() {
    double sum = 0;
    int signo = 1;
    double PrecisionRequerida = 1e-6;

    double term = 1.0;
    int termCount = 0;

    while (abs(term) >= PrecisionRequerida) {
        sum += term;
        signo *= -1;
        termCount++;
        term = signo / (2.0 * termCount + 1);
    }
    double calcularPi = 4 * sum;
    cout.precision(6);
    cout << "El valor aproximado de Pi es: " << fixed << calcularPi << endl;

    return 0;
}
