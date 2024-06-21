#include <iostream>
using namespace std;

int main (){
    int num=0, i=1, auxn=0, pst=0;

    do {
        cin >> num;
        if (num>=auxn){
            auxn=num;
            pst=i;
        }
        i++;
     
   }
   while (i<=100);

   cout << auxn << endl;
   cout << pst << endl;

   return 0;
}
