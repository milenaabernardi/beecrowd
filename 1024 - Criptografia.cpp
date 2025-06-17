#include <iostream>
#include <string>
using namespace std;

string criptografar(string linha){
    for (char &c : linha){
        if (isalpha(c)){
            c += 3;
        }
    }

    int len = linha.length();
    for (int i = 0; i < len / 2; ++i){
        swap(linha[i], linha[len - 1 - i]);
    }

    for (int i = len / 2; i < len; ++i){
        linha[i] -= 1;
    }

    return linha;
}

int main(){
    int N;
    string linha;

    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; ++i){
        getline(cin, linha);
        cout << criptografar(linha) << endl;
    }

    return 0;
}