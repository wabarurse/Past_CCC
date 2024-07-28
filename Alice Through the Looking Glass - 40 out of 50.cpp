#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int arr[10001];

int main() {
    int N; cin >> N;

    // crystal grids 0,1 0,2 0,3 1,2
    // unknown grids 1,1 1,3 2,2

    for (int i = 0; i < N; i++) {
        int m, x, y; cin >> m >> x >> y;
        int bSize = (int) pow(5,m)/5;
        //cout << bSize << '\n';
        int baseX = x / bSize;
        int baseY = y / bSize;

        //cout << "x: " << x << " " << "y: " << y << "-";

        if(baseX == 1 && baseY == 1 || baseX == 1 && baseY == 3 || baseX == 2 && baseY == 2) { // unknown
            int modX = x % bSize;
            int modY = y % bSize;
            if(modX == 1 && modY == 0 || modX == 2 && modY == 0 || modX == 3 && modY == 0 || modX == 2 && modY == 1) {
                cout << "crystal" << '\n';
            } else {
                cout << "empty" << '\n';
            }
        } else if(baseX == 1 && baseY == 0 || baseX == 2 && baseY == 0 || baseX == 3 && baseY == 0 || baseX == 2 && baseY == 1) {
            cout << "crystal" << '\n';
        } else {
            cout << "empty" << '\n';
        }

    }
}