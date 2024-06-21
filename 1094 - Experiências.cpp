#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    int q;
    char t;
    int total = 0;
    int coelho = 0;
    int sapo = 0;
    int rato = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> q >> t;
        
        total += q;
        
        if(t == 'C') coelho += q;
        if(t == 'S') sapo += q;
        if(t == 'R') rato += q;
    }
    
    cout << "Total: " << total << " cobaias\n";
    cout << "Total de coelhos: " << coelho << "\n";
    cout << "Total de ratos: " << rato << "\n";
    cout << "Total de sapos: " << sapo << "\n";
    
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (static_cast<float>(coelho) / total) * 100.00 << " %\n";
    cout << "Percentual de ratos: " << (static_cast<float>(rato) / total) * 100.00 << " %\n";
    cout << "Percentual de sapos: " << (static_cast<float>(sapo) / total) * 100.00 << " %\n";
    
    return 0;
}
