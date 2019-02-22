#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <cmath>
#include <utility>
#include <string>

using namespace std;

int main(){

    int N = 0;
    cin >> N;

    int total = 0;
    int t_total = -1;
    int j = 0;

    vector<vector<int> > A;
    A.assign(2, vector<int>(N, 0));

    if(N == 1){
        for(int i = 0; i < 2; i++){
            cin >> N;
            total += N;
        }
        std::cout << total << std::endl;
        return 0;
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        j = 0;
        total = 0;
        for(j = 0; j < i; j++){
            total += A[0][j];
        }
        for(j = j - 1; j < N; j++){
            total += A[1][j];
        }   
        if(t_total < total){
            t_total = total;
        }
        
           
    }

    std::cout << t_total << std::endl;  




}