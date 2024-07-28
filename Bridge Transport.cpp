#include <iostream>
#include <unordered_map>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;
int arr[100000];

int sum(const int a[], int end) {
    int sum = 0;
    if(end <= 4) {
        for (int i = 0; i < end; i++) {
            sum += a[i];
        }
    } else {
        int start = end - 4;
        for (int i = start; i < end; i++) {
            sum += a[i];
        }
    }
    return sum;
}

int main() {
    int W, N; cin >> W >> N;
    int T = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int ctr = 1;
    while(true) {
        if(sum(arr, ctr) > W)
            break;
        ctr++;
        T++;
    }
    cout << T;

}