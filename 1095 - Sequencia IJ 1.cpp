#include <iostream>
using namespace std;

int main (){
    int I, J=60;

    for (I=1; I<=39; I+=3){
        cout << "I=" << I << " J=" << J << endl; 
        J-=5;
    }
    return 0;
}
