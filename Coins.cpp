#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <cmath>
#include <utility>
#include <string>

using namespace std;

int main(){

    int A,B,C,X = 0;
    cin >> A >> B >> C >> X;

    if(!(X % 50 == 0)){
        std::cout << 0 << std::endl;
        return 0;
    }

    int total = 0;

    for(int i = 0; i <= A; i++){
        for(int j = 0; j <= B; j++){
            for(int k = 0; k <= C; k++){
                if(X == 500 * i + 100 * j + 50 * k){
                    total++;
                }
            }
        }
    }
    

    cout << total;


}