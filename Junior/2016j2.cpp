#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main()
{
    vector<vector<int>> square;

    for(int i = 0; i < 4; i++) {
        string numbers; getline(cin, numbers);

        char *number = strtok(&numbers[0], " ");

        vector<int> row;

        while (number != nullptr) {
            row.push_back(atoi(number));
            number = strtok(nullptr, " ");
        }
        square.push_back(row);
    }

    for (int i = 0; i < square.size(); i++) {
        for (int j = 0; j < square[i].size(); j++) {
            cout << square[i][j] << " ";
        }    
        cout << endl;
    }

}