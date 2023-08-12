// 15/15

//
// Created by wabar on 2023-08-12.
//
#include <iostream>

using namespace std;

bool isEven(int);

int main() {
    int *start = new int[2];
    int *finish = new int[2];
    int battery;

    for(int i = 0; i < 2; i++) {
        cin >> *(start + i);
    }

    for(int i = 0; i < 2; i++) {
        cin >> *(finish + i);
    }

    cin >> battery;

    int minBatteryUsage = abs((*(finish) - *(start))) + abs((*(finish + 1) - *(start + 1)));

    if(battery < minBatteryUsage) cout << "N";
    else if(battery == minBatteryUsage) cout << "Y";
    else {
        if(isEven(battery) ^ isEven(minBatteryUsage)) cout << "N";
        else cout << "Y";
    }


}

bool isEven(int num) {
    if(num % 2 == 0) return true;
    return false;
}