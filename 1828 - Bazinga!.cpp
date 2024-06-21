#include <iostream>
#include <string>
using namespace std;

int main (){
  unsigned short int n, cont = 0;
  string sheldon, raj;

  cin >> n;

  for (unsigned short i = 0; i < n; i++){
    cont++;
    cin >> sheldon >> raj;
    if (sheldon == raj)
        cout << "Caso #" << cont << ": De novo!" << endl;
    else if ((sheldon == "Spock" && raj == "pedra") ||
             (sheldon == "lagarto" && raj == "Spock") ||
             (sheldon == "tesoura" && raj == "lagarto") ||
             (sheldon == "papel" && raj == "Spock") ||
             (sheldon == "tesoura" && raj == "papel") ||
             (sheldon == "papel" && raj == "pedra") ||
             (sheldon == "lagarto" && raj == "papel") ||
             (sheldon == "pedra" && raj == "lagarto") ||
             (sheldon == "Spock" && raj == "tesoura") ||
             (sheldon == "pedra" && raj == "tesoura"))
        cout << "Caso #" << cont << ": Bazinga!" << endl;
    else
        cout << "Caso #" << cont << ": Raj trapaceou!" << endl;
  }
  return 0;
}
