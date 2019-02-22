#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <cmath>
#include <utility>
#include <string>

using namespace std;

int main(){

    int X, A,B = 0;
    cin >> X >> A >> B;

    X = (X - A) % B;

    cout << X;


}