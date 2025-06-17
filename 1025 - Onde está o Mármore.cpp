#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, Q, caso = 1;

    while (cin >> N >> Q && (N || Q)){
        vector<int> marmores(N);

        for (int i = 0; i < N; ++i)
            cin >> marmores[i];

        sort(marmores.begin(), marmores.end());

        cout << "CASE# " << caso++ << ":\n";

        while (Q--){
            int x;
            cin >> x;

            auto it = lower_bound(marmores.begin(), marmores.end(), x);

            if (it != marmores.end() && *it == x)
                cout << x << " found at " << (it - marmores.begin() + 1) << '\n';
            else
                cout << x << " not found\n";
        }
    }

    return 0;
}