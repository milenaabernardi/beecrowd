#include <iostream>
using namespace std;

int main (){
    int c, contador = 0;
    
    cin >> c;
    cin.ignore();
    
    while(contador < c){
        string palavra;
        int pos = 0;
        
        cin >> palavra;
    
        while (palavra[pos++] != '\0');
        
        while (--pos >= 0){
            if (palavra[pos] >= 'a' and palavra[pos] <= 'z'){
                cout << palavra[pos];
            }
        }
        cout << endl;
        contador++;
    }
    return 0;
}
