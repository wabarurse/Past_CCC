#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair <int, int> a, pair <int, int> b) {
    return a.first < b.first;
}

//void print(vector<pair<int, int>> v) {
//    for(auto p : v) {
//        cout << p.first << " " << p.second << '\n';
//    }
//}

int main() {
    int N; cin >> N;

    vector<pair<int, int>> SS;

    for (int i = 0; i < N; i++) {
        int T, X; cin >> T >> X;
        SS.emplace_back(T, X);
    }

    sort(SS.begin(), SS.end(), comp);

    //print(SS);

    vector<float> speeds;
    for (int i = 1; i < N; i++) {
        float speed = float(SS[i].second - SS[i - 1].second) / (SS[i].first - SS[i - 1].first);
        //cout << speed << '\n';
        speeds.push_back(abs(speed));
    }

    float largest = speeds[0];
    for(auto s : speeds) {
        if(s > largest) largest = s;
    }

    cout << largest;

}