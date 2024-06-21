#include <iostream>
using namespace std;

int main (){
    int num, aval, soma;
    soma = 0;

    cin >> num;

    for(int i = num; i!=0; i--){
        cin>>aval;
        int j = 1;
        while(j<aval){
            if(aval%j==0){
                soma += j;
            }
            j++;
        }
    
        if(soma==aval){
            cout<<aval<<" eh perfeito"<<endl;
        }else{
            cout<<aval<<" nao eh perfeito"<<endl;
        }
        soma = 0;
        
    }
    
return 0;
}
