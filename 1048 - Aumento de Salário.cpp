#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double salario, reajuste, novosalario, percentual, reajusteGanho;

    cin >> salario;
    if (salario>=0 && salario<=400.00){
        reajuste=0.15;
    }
    else if (salario>=400.01 && salario<=800.00){
        reajuste=0.12;
    }
    else if (salario>=800.01 && salario<=1200.00){
        reajuste=0.10;
    }
    else if (salario>=1200.01 && salario<=2000.00){
        reajuste=0.07;
    }
    else {
        reajuste=0.04;
    }

    reajusteGanho = salario * reajuste;
    novosalario = salario + reajusteGanho;
    percentual = reajuste * 100;

    cout << "Novo salario: " << fixed << setprecision(2) << novosalario << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << reajusteGanho << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << percentual << " %" << endl;

    return 0;
}
