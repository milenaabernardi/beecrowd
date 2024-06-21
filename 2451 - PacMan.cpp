#include <iostream>
using namespace std;

int main (){
    int N;
    
    cin >> N;
    
    char board[100][100];
    
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            cin >> board[i][j];
        }
    }
    
    int maxFood = 0;
    int currentFood = 0;
    
    for (int i = 0; i < N; ++i){
        if (i % 2 == 0){ 
            for (int j = 0; j < N; ++j){
                if (board[i][j] == 'A'){
                    currentFood = 0;
                } else if (board[i][j] == 'o'){
                    currentFood++;
                }
                if (currentFood > maxFood){
                    maxFood = currentFood;
                }
            }
        } else {
            for (int j = N - 1; j >= 0; --j){
                if (board[i][j] == 'A'){
                    currentFood = 0;
                } else if (board[i][j] == 'o'){
                    currentFood++;
                }
                if (currentFood > maxFood){
                    maxFood = currentFood;
                }
            }
        }
    }
    
    cout << maxFood << endl;
    
    return 0;
}
