#include <iostream>
using namespace std;

int main (){
    int c;
    
    cin >> c;
    for(int l=0; l<c;l++){ 
        string g;
        int i=0, f1=0, f2=0, f=0;
            cin >> g;
            while(g[i]!='k'){
                if(g[i]=='a'){
                    f1++;
                }
                i++;
            }
            while(g[i]!='\0'){
                if(g[i]=='a'){
                    f2++;
                }
                i++;
            }
            f=f2*f1;
            cout <<"k";
            for(int i=0; i<f; i++){
                cout <<"a";
            }
            cout << endl;
            f=0;
    }
    return 0;   
}
