#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b);

int main() {
    int T, N; cin >> T >> N;
    vector<int> times;
    for (int i = 0; i < N; i++) {
        int t; cin >> t;
        times.push_back(t);
    }
    sort(times.begin(), times.end(), comp);


    int tot = 1;
    int ans = 0;
    for (int i = 1; i < N; i++) {
        //cout << abs(times[i] - times[i - 1]) << '\n';
        tot += abs(times[i] - times[i - 1]);
        if(tot > T) {
            ans = i;
            break;
        }
    }

    cout << ans;

}

bool comp(int a, int b) {
    return abs(a) < abs(b);
}
