#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, Q; cin >> N >> Q;
    vector<int> stops;

    for (int i = 0; i < N; i++) {
        int s; cin >> s;
        stops.push_back(s);
    }
    sort(stops.begin(), stops.end());

//    for(auto s : stops) {
//        cout << s << " ";
//    }

    for (int i = 0; i < Q; i++) {
        int lo, hi; cin >> lo >> hi;

        cout << upper_bound(stops.begin(), stops.end(), hi) - lower_bound(stops.begin(), stops.end(), lo) << endl;

    }

}