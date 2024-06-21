#include <iostream>
#include <math.h>
using namespace std;
 
int main (){
    int A, B, C, area, terreno, lado;
    
    do{
        cin >> A;
        cin >> B;
        cin >> C;
        if(A == 0 || B == 0 || C == 0){
            break;
        }
        area = A*B;
        terreno = (area*100)/C;
        lado = sqrt(terreno);
        cout << lado << endl;      
    } while(A!=0&&B!=0&&C!=0);
    
    return 0;
}
