#include <iostream> 
using namespace std; 
#define max 61 
int main (){ 
    int n; 
  
    while(cin >> n){ 
       int m, p = 0, e[max] = {0}, d[max] = {0}; 
       char l; 
  
       for(int i = 0; i<n; i++){ 
          cin >> m >> l; 
          if(l == 'D') d[m]++; 
          if(l == 'E') e[m]++; 
       } 
  
       for(int i = 0; i<max; i++){ 
          p += min(d[i], e[i]); 
       } 
  
       cout << p <<endl; 
  
    } 
  
    return 0; 
 }
