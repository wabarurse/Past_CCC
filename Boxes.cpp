#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool comp(const vector<int>&a, const vector<int>&b) {
    return a[0] * a[1] * a[2] < b[0] * b[1] * b[2];
}

int main() {
    vector<vector<int>> boxes;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        vector<int> box;
        for (int j = 0; j < 3; j++) {
            int x; cin >> x;
            box.push_back(x);
        }
        sort(box.begin(), box.end());
        boxes.push_back(box);
    }

    sort(boxes.begin(), boxes.end(), comp);

//    for(auto box : boxes) {
//        for(auto b : box) {
//            cout << b << " ";
//        }
//        cout << '\n';
//    }

    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        vector<int> pack;
        for (int j = 0; j < 3; j++) {
            int x; cin >> x;
            pack.push_back(x);
        }

        sort(pack.begin(), pack.end());

//        for(auto p : pack) {
//            cout << p << " ";
//        }

        int ans = -1;
        for(auto box : boxes) {
            if(pack[0] <= box[0] && pack[1] <= box[1] && pack[2] <= box[2]) {
                ans = box[0] * box[1] * box[2];
                break;
            }
        }

        if(ans == -1) cout << "Item does not fit." << '\n';
        else cout << ans << '\n';

    }



}