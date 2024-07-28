#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int arr[10001];

bool isDistinct(int n) {
    int count = 0;
    map<int, int> digits;
    while(n != 0) {
        digits[n % 10] = 0;
        n /= 10;
        count++;
    }

    if(digits.size() == count) return true;
    else return false;
}

int main() {
    int N; cin >> N;

    do {
        N++;
    } while(!isDistinct(N));

    cout << N;
}