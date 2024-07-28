#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isIncreasing(vector<vector<int>> vec, int N, int M) {
    // check rows
    for (int i = 0; i < N; i++) {
        for (int j = 1; j < M; j++) {
            if(vec[i][j] <= vec[i][j - 1]) {
                //cout << "BAD ROW" << '\n';
                return false;
            }

        }
    }

    // check cols
    for (int i = 0; i < M; i++) {
        for (int j = 1; j < N; j++) {
            if(vec[j][i] <= vec[j - 1][i]) {
                //cout << "BAD COL" << '\n';
                return false;
            }
        }
    }

    return true;
}

int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> vec(N, vector<int> (M, 0));
    //int arr[N][M];
    int smallest = 1;

    for (int i = 0; i < N; i++) {
        int curr = 1;
        for (int j = 0; j < M; j++) {
            int x; cin >> x;
            if(i == 0) {
                if(x == 0) {
                    vec[i][j] = curr;
                    curr++;
                } else {
                    vec[i][j] = x;
                    curr = x + 1;
                }
            } else {
                vec[i][j] = x;
            }
        }
    }




    for (int i = 1; i < N; i++) {
        int curr = 1;
        for (int j = 0; j < M; j++) {
            if(vec[i][j] == 0 && j == 0) {
                vec[i][j] = vec[i - 1][j] + 1;
            } else if(vec[i][j] == 0) {
                vec[i][j] = max(vec[i - 1][j], vec[i][j - 1]) + 1;
            }

        }
    }

//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            cout << vec[i][j] << " ";
//        }
//        cout << '\n';
//    }

    if(isIncreasing(vec, N, M)) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cout << vec[i][j] << " ";
            }
            cout << '\n';
        }
        //cout << "GOOD";
    } else {
        cout << -1;
    }

}