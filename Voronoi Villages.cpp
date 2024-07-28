#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    int N; cin >> N;
    vector<int> houses;
    for (int i = 0; i < N; i++) {
        int h; cin >> h;
        houses.push_back(h);
    }
    sort(houses.begin(), houses.end());

    vector<double> dist;
    for (int i = 1; i < N; i++) {
        dist.push_back((houses[i] - houses[i - 1]) / 2.0);
    }

//    for(auto h : dist) {
//        cout << "> " << h << " ";
//    }


    double ans = dist[1] + dist[0];
    for (int i = 1; i < N - 1; i++) {
        double d = dist[i] + dist[i - 1];
        //cout << d << '\n';
        if(d < ans) ans = d;
    }

    cout << fixed;
    cout << setprecision(1) << ans;

}