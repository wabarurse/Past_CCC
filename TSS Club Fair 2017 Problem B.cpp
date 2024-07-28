#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main() {
    int N, Q; cin >> N >> Q;
    vector<double> dist;

    for (int i = 0; i < N; i++) {
        int x, y; cin >> x >> y;
        dist.push_back(sqrt(pow(x, 2) + pow(y, 2)));
    }

    sort(dist.begin(), dist.end());

//    for(auto d : dist) {
//        cout << d << '\n';
//    }

    for (int i = 0; i < Q; i++) {
        //int ans = 0;
        int scenario; cin >> scenario;

        cout << upper_bound(dist.begin(), dist.end(), scenario) - dist.begin() << '\n';

    }

}