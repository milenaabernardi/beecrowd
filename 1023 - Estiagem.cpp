#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main(){
    int n, cidade = 1;
    bool primeira = true;

    while (cin >> n && n != 0){
        if (!primeira) cout << "\n";
        primeira = false;

        map<int, int> grupos;
        int total_consumo = 0;
        int total_pessoas = 0;

        for (int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;

            int consumo_pessoa = y / x; 
            grupos[consumo_pessoa] += x;

            total_consumo += y;
            total_pessoas += x;
        }

        cout << "Cidade# " << cidade++ << ":\n";

        bool primeiro = true;
        for (auto& g : grupos) {
            if (!primeiro) cout << " ";
            cout << g.second << "-" << g.first;
            primeiro = false;
        }

        double media = (double)total_consumo / total_pessoas;

        media = (int)(media * 100) / 100.0;

        cout << fixed << setprecision(2);
        cout << "\nConsumo medio: " << media << " m3.\n";
    }

    return 0;
}