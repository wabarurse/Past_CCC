#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N; cin >> N;
    vector<long long> cows;
    for (int i = 0; i < N; i++) {
        long long c; cin >> c; cows.push_back(c);
    }

    sort(cows.begin(), cows.end());


    long long largestTuition = -1;
    long long tuition = -1;
    for (int i = 0; i < N; i++) {
        if(cows[i] * (N - i) > largestTuition) {
            largestTuition = cows[i] * (N - i);
            tuition = cows[i];
        }
    }

    cout << largestTuition << " " << tuition;
    
}