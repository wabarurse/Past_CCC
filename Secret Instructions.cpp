#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
    string prevDir;
    while(true) {
        string n; cin >> n;
        if(n == "99999") break;

        int dir = (n[0] - '0') + (n[1] - '0');
        if(dir == 0) cout << prevDir;
        else if(dir % 2 == 0) {
            prevDir = "right";
            cout << prevDir;
        } else {
            prevDir = "left";
            cout << prevDir;
        }

        cout << " " << n.substr(2) << '\n';
    }
}   