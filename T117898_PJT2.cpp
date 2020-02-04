#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long long S, I, R = 0, K;
    int n;
    double beta, gamma;
    cin >> S >> I >> n >> beta >> gamma;
    K = S + I;
    for (int i = 1; i <= n; i++) {
        unsigned long long dR = ceil(gamma * I);
        unsigned long long dI = ceil(beta * S * I);
        if (dI >= S) {
            I += S - dR;
            S = 0;
            R += dR;
        } else {
            R += dR;
            I += dI - dR;
            S = K - R - I;
        }
    }

    cout << S << " " << I << " " << R << endl;

    return 0;
}