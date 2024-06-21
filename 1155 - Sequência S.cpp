#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    float ts=0, i=1;

    do {
        ts=ts+(1/i);
        i++;
    }
    while (i<=100);

    cout << fixed << setprecision(2);
    cout << ts << endl;

    return 0;
}
