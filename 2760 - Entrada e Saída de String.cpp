#include <iostream>
#include <cstring>
using namespace std;

int main (){
    char var1[101];
    char var2[101];
    char var3[101];
    int i;

    cin.getline(var1, 101);
    cin.getline(var2, 101);
    cin.getline(var3, 101);

    cout << var1 << var2 << var3 << endl;
    cout << var2 << var3 << var1 << endl;
    cout << var3 << var1 << var2 << endl;

    i = 0;

    while(var1[i] != '\0' && i < 10){
        cout << var1[i];
        i++;
    }

    i = 0;

    while(var2[i] != '\0' && i < 10){
        cout << var2[i];
        i++;
    }

    i = 0;

    while(var3[i] != '\0' && i < 10){
        cout << var3[i];
        i++;
    }

    cout << endl;

    return 0;
}
