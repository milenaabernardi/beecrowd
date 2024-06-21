#include <iostream>
using namespace std;

int main (){
    for (int I = 1; I <= 9; I += 2){
        for (int J = 7 + (I - 1); J >= 5 + (I - 1); --J){
            cout << "I=" << I << " J=" << J << endl;
        }
    }
    return 0;
}
