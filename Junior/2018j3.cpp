// 15/15

#include <iostream>

#define SIZE 5

using namespace std;

int main()
{
    // define 1d array
    int *distances = new int[SIZE];
    *(distances + 0) = 0;
    // take in user inpue
    for(int i = 1; i < SIZE; i++) {
        cin >> *(distances + i);
    }

    // defining 2d array
    int **solution = new int*[SIZE];
    for (int i = 0; i < SIZE; i++) {
        solution[i] = new int[SIZE];
    }

    // assigning  values to the 2d array
    int current = 0;
    for(int i = 0; i < SIZE; i++) {
        current -= *(distances + i);
        int total = 0;
        for(int j = 0; j < SIZE; j++) {
            total += *(distances + j);
            *(*(solution + j) + i) = abs(total + current);
        }
    }

    // print 2d array
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cout << *(*(solution + j) + i) << " ";
        }
        cout << '\n';
    }

}
