#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char arr[10001];

int main() {
    int N; cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int cnt = 0;

    for (int i = 0; i < N; i++) {
        char a; cin >> a;
        if(a == arr[i]) cnt++;
    }

    cout << cnt;

}