// 15/15
#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    cin >> total;

    string day1;
    string day2;

    cin >> day1;
    cin >> day2;

    //cout << day1 << endl;
    //cout << day2 << endl;

    int counter = 0;

    for(int i = 0; i < total; i++) {
        if((day1.at(i) == 'C') && (day1.at(i) == day2.at(i))) counter++;
    }

    cout << counter << endl;

}