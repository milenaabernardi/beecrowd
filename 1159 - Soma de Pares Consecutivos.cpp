#include <iostream>
using namespace std;
 
int main (){
    int x, soma=0;
    
    while (true){
        cin >> x;
        if (x == 0)
        break;
        
        soma = 0;
        
        if (x%2 == 0)
        soma += x;
            else soma += ++x;
            
        for (int i=0; i<4; i++){
            x += 2;
            soma += x;
        }
        cout << soma << endl;
    }
 
    return 0;
}
