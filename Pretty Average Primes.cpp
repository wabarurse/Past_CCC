#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int T; cin >> T;
    vector<string> ans;
    for (int i = 0; i < T; i++) {
        int n; cin >> n;
        for (int j = 2; j < n; j++) {
            if(isPrime(j) && isPrime(2 * n - j)) {
                cout << j << " " << 2 * n - j << '\n';
                break;
            }
        }
    }

}