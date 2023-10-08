#include <iostream>
using namespace std;

int main() {
    int n;

    float sign = 1;
    double sum = 0.0;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        sum += sign / i;
        sign = -sign;
    }

    cout << sum;
}