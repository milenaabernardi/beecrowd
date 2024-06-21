#include <iostream>
using namespace std;

int main (){
    
    int Cv, Ce, Cs, Fv, Fe, Fs, pc, pf;
  
    while (cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs){
        pc = Cv * 3 + Ce;
        pf = Fv * 3 + Fe;
        if (pc > pf || (pc == pf && Cs > Fs))
            cout << "C" << endl;
        else if (pc < pf || (pc == pf && Cs < Fs))
            cout << "F" << endl;
        else
            cout << "=" << endl;
     }
    return 0;
}
