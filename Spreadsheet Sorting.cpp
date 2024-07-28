#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int col;

bool comp(const vector<int>& a, const vector<int>& b){
    return a[col-1] < b[col-1];
}

int main() {
    int R, C; cin >> R >> C;
    vector<vector<int>> vec(R, vector<int>(C, 0));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int n; cin >> n;
            vec[i][j] = n;
        }
    }

    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> col;
        stable_sort(vec.begin(), vec.end(), comp);
    }


    for(auto& v : vec) {
        for(auto i : v) {
            cout << i << " ";
        }
        cout << '\n';
    }

}