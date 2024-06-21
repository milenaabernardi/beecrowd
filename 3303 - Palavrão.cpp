#include <iostream>
#include <string>
using namespace std;

int main (){
    string palavra;

    cin >> palavra;

    if (palavra.length() >=10 && palavra.length() <=20){
        cout << "palavrao" << endl;
    }
    else if (palavra.length() <10){
        cout << "palavrinha" << endl;
    }
    return 0;
}
