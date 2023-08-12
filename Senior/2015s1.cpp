// 15/15
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int numNumbers;
    cin >> numNumbers;

    vector<int> numbers;

    for (int i = 0; i < numNumbers; i++) {
        int input;
        cin >> input;

        if(input == 0 && numbers.size() > 0) numbers.pop_back();
        else numbers.push_back(input);
    }

    int total = 0;
    for (int i = 0; i < numbers.size(); i++) {
        total += numbers[i];
    }

    cout << total;



}