#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N; cin >> N;
    vector<int> streams;
    for (int i = 0; i < N; i++) {
        int stream; cin >> stream;
        streams.push_back(stream);
    }
    int x = 0;
    while(x != 77) {
        cin >> x;
        if(x == 99) {
            int n, p; cin >> n >> p;
            int rightFork = streams[n - 1] - (streams[n - 1] * p / 100);
            streams[n - 1] = streams[n - 1] * p / 100;
            streams.insert(streams.begin() + n, rightFork);
        } else if(x == 88) {
            int n; cin >> n;
            streams[n - 1] += streams[n];
            streams.erase(streams.begin() + n);
        }
    }

    for(auto s : streams) {
        cout << s << " ";
    }

}
