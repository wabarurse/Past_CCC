#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<vector<int>>);
vector<vector<int>> rotateMatrix(vector<vector<int>>);
bool isRowIncreasing(vector<int>);

//main
int main ()
{
    int numPlants;
    cin >> numPlants;
    vector<vector<int>> digitsMatrix;

    for(int i = 0; i < numPlants; i++) {
        int data;
        cin >> data;
        vector<int> digits;
        while(data != 0) {
            digits.push_back(data % 10);
            data /= 10;
            reverse(digits.begin(), digits.end());
        }
        digitsMatrix.push_back(digits);
        digits.clear();
    }

    print(digitsMatrix);
    digitsMatrix = rotateMatrix(digitsMatrix);
    print(digitsMatrix);

}

//functions
void print(vector<vector<int>> vec)
{
    for(int i = 0; i < vec.size(); ++i)
    {
        for(int j = 0; j < vec.size(); ++j)
            cout << vec[i][j] << " ";

        cout << '\n';
    }
}

vector<vector<int>> rotateMatrix(vector<vector<int>> vec)
{
    vector<vector<int>> rotated;
    vector<int> col;

    for(int i = 0; i < vec.size(); i++) {
        for(int j = vec.size() - 1; j >= 0; j--) {
            col.push_back(vec[j][i]);
        }
        rotated.push_back(col);
        col.clear();
    }
    return rotated;
}

bool isRowIncreasing(vector<int> vec)
{
    int previous = vec[0];

    for(int i = 1; i < vec.size(); i++) {
        if(previous > vec[i]) return false;
        else previous = vec[i];
    }
    return true;
}