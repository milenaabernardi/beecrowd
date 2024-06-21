#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int quant, s, s1;
    string nome;
    float v1[3]={0}, v2[3]={0};
    
    cin >> quant;
    for (int i=0; i<quant; i++){
        cin >> nome;
        for (int j=0; j<3; j++){
            cin >> s;
            v1[j]=v1[j]+s;
        }
        for (int j=0; j<3; j++){
            cin >> s1;
            v2[j]=v2[j]+s1;
        }
    }
    cout << fixed << setprecision(2) << "Pontos de Saque: " << (v2[0]/v1[0])*100 << " %." << endl;
    cout << fixed << setprecision(2) << "Pontos de Bloqueio: " << (v2[1]/v1[1])*100 << " %." << endl;
    cout << fixed << setprecision(2) << "Pontos de Ataque: " << (v2[2]/v1[2])*100 << " %." <<endl;

    return 0;
}
