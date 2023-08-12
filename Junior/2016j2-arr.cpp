// 15/15
#include <iostream>

#define SIZE 4

using namespace std;

int main()
{
    int **arr = new int *[SIZE];
    for(int i = 0; i < SIZE; i++) {
        arr[i] = new int[SIZE];
    }

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cin >> *(*(arr + j) + i);
        }
    }

    int *check = new int[SIZE * 2];
    int index = 0;

    for(int i = 0; i < SIZE; i++) {
        int rowSum = 0;
        for(int j = 0; j < SIZE; j++) {
            rowSum += *(*(arr + j) + i);
        }
        *(check + index++) = rowSum;
    }

    for(int i = 0; i < SIZE; i++) {
        int colSum = 0;
        for(int j = 0; j < SIZE; j++) {
            colSum += *(*(arr + j) + i);
        }
        *(check + index++) = colSum;
    }

    bool ans = true;
    int first = *(check);

    for(int i = 1; i < 8; i++) {
        if(*(check + i) != first) {
            ans = false;
            break;
        }
    }

    if(ans) cout << "magic";
    else cout << "not magic";

}