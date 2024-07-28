#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int rows[5000000];
int cols[5000000];
int evenRow = 0, oddRow = 0, evenCol = 0, oddCol = 0;

int main() {
    int M, N, K; cin >> M >> N >> K;
    for (int i = 0; i < K; i++) {
        string s;
        int n;
        cin >> s >> n;

        if(s == "R") {
            rows[n - 1]++;
        } else if (s == "C") {
            cols[n - 1]++;
        }

    }
    for(int i = 0; i < M; i++) {
        if(rows[i] % 2 == 0) evenRow++;
        else if(rows[i] % 2 != 0) oddRow++;
    }
    for(int i = 0; i < N; i++) {
        if(cols[i] % 2 == 0) evenCol++;
        else if(cols[i] % 2 != 0) oddCol++;
    }
    //cout << evenRow << "-" << oddRow << "-" << oddCol << "-" << evenCol << '\n';
    cout << evenRow * oddCol + oddRow * evenCol;

}