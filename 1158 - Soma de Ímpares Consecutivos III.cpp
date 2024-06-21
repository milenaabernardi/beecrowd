#include <iostream>
using namespace std;
 
int main (){
    int n, x, y;
    
    cin >> n;
    for (int i=0; i<n; i++){
        cin>>x;
        cin>>y;
        int j = 0;
        int k = 0;
        while(k<y){
            if(x%2!=0){
                k++;
                j = j + x;
            }
            x++;
        }
        cout<<j<<endl;
    }
    return 0;
}
