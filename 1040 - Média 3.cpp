#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double n1, n2, n3, n4, exame, nota;
    
    cin >> n1 >> n2 >> n3 >> n4;
    
    nota = (n1*2+n2*3+n3*4+n4)/10;
    cout << fixed;
    cout << setprecision(1) << "Media: " << nota <<endl;
    
    if (nota >= 7.0){
        cout << "Aluno aprovado." << endl;
    }
    else if (nota >= 5.0)
    {
        cout << "Aluno em exame." << endl;
        cin >> exame;
       
        cout <<setprecision(1) <<"Nota do exame: " <<exame <<endl;
        if (exame+nota/2.0 > 5.0){
            cout <<"Aluno aprovado." << endl;
        }
        else {
            cout << "Aluno reprovado." << endl;
        }
        
        cout << setprecision(1) <<"Media final: " <<(exame + nota )/2.0 <<endl;
    }
    else {
        cout << "Aluno reprovado." << endl;
    }
    return 0;
}
