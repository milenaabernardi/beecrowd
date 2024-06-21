#include <iostream>
using namespace std;

int main (){
    int x,y;
    int n = 1;
    
    cin >> x;
    cin >> y;
     
    for(int i = 1; i <= y; i++){
            if(n == x) {
                 cout << i << "\n";
                 n = 1;
            }
            else{
            cout << i << " ";
            n++;
            }
    }
    return 0;
}
