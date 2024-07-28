#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int arr[10001];

int main() {
    int N, P; cin >> N >> P;
    set<int> gate;

    for (int i = 1; i <= N; i++) {
        gate.insert(i);
    }

    int cnt = 0;
    for (int i = 0; i < P; i++) {
        int p; cin >> p;
        //cout << "p: " << p << '\n';
        auto it = gate.upper_bound(p);

        if(it != gate.begin()) {
            it--;
            gate.erase(it);
            cnt++;
        }
        else {
            break;
        }

    }

    cout << cnt;


}