// 15/15
#include <iostream>
#include <cstring>
#include <climits>

using namespace std;

class Point
{

    public:
    
    Point() {
        xCoor = 0;
        yCoor = 0;
    }

    Point(int x, int y) {
        xCoor = x;
        yCoor = y;
    }

    void setX(int x) { xCoor = x; }
    void setY(int y) { yCoor = y; }

    int getX() { return xCoor; }
    int getY() { return yCoor; }

    private: 

        int xCoor;
        int yCoor;
};

int main() 
{
    int total;
    cin >> total;
    cin.get();

    int tempX;
    int tempY;

    Point *arr[total];

    for(int i = 0; i < total; i++) {
        string current;
        getline(cin, current); // read line

        char *token1 = strtok(&current[0], ",");
        char *token2 = strtok(nullptr, ",");

        int x = atoi(token1);
        int y = atoi(token2);

        Point *aPoint = new Point(x, y);
        arr[i] = aPoint;
    }

    //for(int i = 0; i < total; i++) { cout << arr[i]->getX() + arr[i]->getY() << endl; }

    tempX = INT_MAX;
    tempY = INT_MAX;
    // find smallest x and y values
    for(int i = 0; i < total; i++) {
        if(arr[i]->getX() < tempX) tempX = arr[i]->getX();
        if(arr[i]->getY() < tempY) tempY = arr[i]->getY();
    }

    cout << tempX - 1 << "," << tempY - 1 << endl;

    tempX = INT_MIN;
    tempY = INT_MIN;
    // find largest x and y values
    for(int i = 0; i < total; i++) {
        if(arr[i]->getX() > tempX) tempX = arr[i]->getX();
        if(arr[i]->getY() > tempY) tempY = arr[i]->getY();
    }

    cout << tempX + 1 << "," << tempY + 1 << endl;

}
