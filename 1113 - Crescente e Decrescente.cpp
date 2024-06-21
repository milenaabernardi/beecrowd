#include <iostream>
using namespace std;

int main (){
    int x, y;

    cin >> x >> y;

    while (x!=y){
        if (x>y){
            cout << "Decrescente" << endl;
        }
        else{
            if (x<y){
                cout << "Crescente" << endl;
            }
        }
        cin >> x >> y;
    }
    return 0;
}
