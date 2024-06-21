#include <iostream>
using namespace std;

int main (){
    int i, num, contador=0;
    
    for (i=1;i<=5;i++){
        cin >> num;
        if(num%2==0){
          contador++;
        }
    }
    cout << contador <<" valores pares" <<endl;
    
    return 0;
}
