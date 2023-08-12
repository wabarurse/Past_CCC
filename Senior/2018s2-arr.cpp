// 15/15
#include <iostream>

using namespace std;

void printArr(int**);
int** rotateMatrix(int**);
bool isRowIncreasing(int*);
bool isColIncreasing(int**, int);

int dimensions;

int main() {
    cin >> dimensions;

    int **sunflowers = new int*[dimensions];
    for (int i = 0; i < dimensions; i++) {
        *(sunflowers + i) = new int[dimensions];
    }

    for(int i = 0; i < dimensions; i++) {

        for(int j = 0; j < dimensions; j++)
            cin >> *(*(sunflowers + j) + i);
    }

    bool isOriginal = true;

    for (int i = 0; i < dimensions; i++) {
        //cout << !isRowIncreasing(*(sunflowers + i)) << '\n';
        if(!isRowIncreasing(*(sunflowers + i)) || !isColIncreasing(sunflowers, i)) isOriginal = false;
    }

    //cout << "VARIABLE" << isOriginal << '\n';

    while(!isOriginal) {
        sunflowers = rotateMatrix(sunflowers);
        for (int i = 0; i < dimensions; i++) {
            if(!isRowIncreasing(*(sunflowers + i)) || !isColIncreasing(sunflowers, i)) isOriginal = false;
            else isOriginal = true;
        }

    }

    printArr(sunflowers);

}

void printArr(int** arr) {
    for (int i = 0; i < dimensions; i++) {
        for (int j = 0; j < dimensions; j++) {
            cout << *(*(arr + j) + i) << " ";
        }
        cout << endl;
    }
}

void print(int* arr) {
    for (int i = 0; i < dimensions; i++) {
        cout << *(arr  + i) << " ";
    }
}

int** rotateMatrix(int **arr) {
    int **rotated = new int*[dimensions];
    for (int i = 0; i < dimensions; i++) {
        *(rotated + i) = new int[dimensions];
    }

    for (int i = 0; i < dimensions; i++) { // i is the column
        int *col = new int[dimensions];
        int colNum = 0;
        for (int j = dimensions - 1; j >= 0; j--) { // j is the row
            *(col + colNum) = *(*(arr + i) + j);
            colNum++;
        }

        for (int j = 0; j < dimensions; j++) { // does *(rotated + i) = col not work???
            *(*(rotated + j) + i) = *(col + j);
        }
    }
    //printArr(rotated);
    return rotated;
}

bool isRowIncreasing(int* row) {
    int previous = row[0];

    for(int i = 1; i < dimensions; i++) {
        if(previous > row[i]) return false;
        else previous = row[i];
    }
    return true;
}

bool isColIncreasing(int** arr, int colNum) {
    for(int i = 1; i < dimensions; i++) {
        if(arr[i][colNum] < arr[i - 1][colNum]) return false;
    }
    return true;
}
