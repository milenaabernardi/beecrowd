#include <iostream>
using namespace std;

int main (){
    string ignora;
    int diaInicio, diaFim, horaInicio, minutoInicio, segundoInicio, horaFim, minutoFim, segundoFim;
    int dias, horas, minutos, segundos;

    cin >> ignora >> diaInicio;
    cin >> horaInicio >> ignora >> minutoInicio >> ignora >> segundoInicio;

    cin >> ignora >> diaFim;
    cin >> horaFim >> ignora >> minutoFim >> ignora >> segundoFim;

    segundos = segundoFim - segundoInicio;
    minutos = minutoFim - minutoInicio;
    horas = horaFim - horaInicio;
    dias = diaFim - diaInicio;

    if (segundos < 0){
        segundos += 60;
        minutos--;
    }
    if (minutos < 0){
        minutos += 60;
        horas--;
    }
    if (horas < 0){
        horas += 24;
        dias--;
    }
    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}
