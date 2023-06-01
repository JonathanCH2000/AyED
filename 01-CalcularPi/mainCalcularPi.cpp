#include <iostream>
using namespace std;

int main() {
    double sumas = 0;
    int signo = 1;
    
    for (int i = 0; i < 1000000; i++) {
        double termino = signo / (2.0 * i + 1);
        sumas += termino;
        signo *= -1;
    }
    double valorPi = 4*sumas;
    cout.precision(6); 
    cout << "el valor de Pi es: " <<fixed <<valorPi<<endl;

    return 0;
}
