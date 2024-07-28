#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    string s; cin >> s;

    int cntL = 0;
    int cntM = 0;
    int cntMinL = 0;
    int cntLinM = 0;
    int ans = 0;

    for (int i = 0; i < s.length(); i++) {
        if(s[i] == 'L') cntL++;
        else if(s[i] == 'M') cntM++;
    }

    //cout << cntL << " " << cntM << '\n';

    // # of not L books in L section
    for (int i = 0; i < cntL; i++) {
        if(s[i] != 'L') ans++;
        if(s[i] == 'M') cntMinL++;
    }

    // # of not M in M section
    for (int i = cntL; i < cntL + cntM; i++) {
        if(s[i] != 'M') ans++;
        if(s[i] == 'L') cntLinM++;
    }

    //cout << ans << '\n';
    //cout << cntLinM << " " << cntMinL << '\n';

    if(cntLinM < cntMinL) ans -= cntLinM;
    else if(cntLinM > cntMinL) ans -= cntMinL;
    else ans -= cntLinM;

    cout << ans;

}