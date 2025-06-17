#include <iostream>
using namespace std;

int gcd(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

void simplificar(int &numerador, int &denominador){
    int mdc = gcd(numerador, denominador);
    numerador /= mdc;
    denominador /= mdc;
    if (denominador < 0) {
        numerador *= -1;
        denominador *= -1;
    }
}

int main(){
    int n;
    cin >> n;

    while (n--){
        int n1, d1, n2, d2;
        char barra1, barra2, oper;

        cin >> n1 >> barra1 >> d1 >> oper >> n2 >> barra2 >> d2;

        int num_resultado, den_resultado;

        switch (oper){
            case '+':
                num_resultado = (n1 * d2) + (n2 * d1);
                den_resultado = d1 * d2;
                break;
            case '-':
                num_resultado = (n1 * d2) - (n2 * d1);
                den_resultado = d1 * d2;
                break;
            case '*':
                num_resultado = n1 * n2;
                den_resultado = d1 * d2;
                break;
            case '/':
                num_resultado = n1 * d2;
                den_resultado = n2 * d1;
                break;
        }

        int num_simplificado = num_resultado;
        int den_simplificado = den_resultado;
        simplificar(num_simplificado, den_simplificado);

        cout << num_resultado << "/" << den_resultado
             << " = " << num_simplificado << "/" << den_simplificado << endl;
    }

    return 0;
}