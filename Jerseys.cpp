#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int J, A; cin >> J >> A;
    vector<int> jerseys;
    for (int i = 0; i < J; i++) {
        char c; cin >> c;
        jerseys.push_back(c);
    }
    vector<pair<int, int>> players;
    for (int i = 0; i < J; i++) {
        char c; cin >> c;
        int n; cin >> n;
        players.push_back(make_pair(c, n));
    }

    int ans = 0;
    for (int i = 0; i < A; i++) {
        if(players[i].first >= jerseys[players[i].second - 1] && jerseys[players[i].second - 1] != 0) {
            ans++;
            jerseys[players[i].second - 1] = 0;
        }
    }

    cout << ans;

}