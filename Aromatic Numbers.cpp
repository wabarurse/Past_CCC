#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int arr[10001];


int main() {
    //int N; cin >> N;
    string s; cin >> s;

    map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;


    int prevRoman;
    for (int i = 0; i < s.length(); i+=2) {
        arr[i / 2] = (s[i] - '0') * roman[s[i + 1]];
        if(prevRoman < roman[s[i + 1]] && i != 0) {
            arr[(i / 2) - 1] *= -1;
        }
        prevRoman = roman[s[i + 1]];
    }

    int ans = 0;
    for(auto a : arr) {
        ans += a;
    }

    cout << ans;

}