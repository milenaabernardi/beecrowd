#include <iostream>
using namespace std;

int main (){
    int X, count = 0;
    
    cin >> X;

    while (count < 6){
        if (X % 2 != 0){ 
            cout << X << endl;
            count++;
        }
        X++;
    }

    return 0;
}
