#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

char closestVowel(char c);
bool isVowel(char c);

int main() {
    string s; cin >> s;
    string ans;

    for(auto c : s) {
        ans += c;
        if(!isVowel(c)) {
            ans += closestVowel(c);
            if(c == 'z') ans += 'z';
            else {
                int counter = 1;
                while(isVowel(c + counter)) {
                    counter ++;
                }
                ans += c + counter;
            }
        }
    }

    cout << ans << '\n';

}

char closestVowel(char c) {
    int arr[5] = {abs('a' - c), abs('e' - c), abs('i' - c),
                  abs('o' - c), abs('u' - c)};
    char charArr[5] = {'a', 'e','i','o','u'};

    int smallestGapIdx = 0;
    for (int i = 0; i <= 4; i++) {
        if(arr[i] < arr[smallestGapIdx]) smallestGapIdx = i;
    }

    return charArr[smallestGapIdx];

}

bool isVowel(char c) {
    return !(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
}
