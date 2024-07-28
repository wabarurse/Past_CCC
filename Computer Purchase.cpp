    #include <iostream>
    #include <unordered_map>
    #include <stack>
    #include <vector>
    #include <algorithm>
    #include <cmath>

    using namespace std;

    int main() {
        int n; cin >> n;
        vector<pair<int, string>> comps;
        for (int i = 0; i < n; i++) {
            string name; cin >> name;

            int val = 0;
            int v; cin >> v;
            val += 2*v;
            cin >> v;
            val += 3*v;
            cin >> v;
            val += v;

            comps.push_back(make_pair(-1 * val, name));
        }

        sort(comps.begin(), comps.end());
        if(n >= 2) {
            cout << comps[0].second << '\n' << comps[1].second;
        } else if(n == 1) {
            cout << comps[0].second;
        }

    }