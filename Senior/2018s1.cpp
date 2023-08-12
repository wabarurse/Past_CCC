// 15/15
#include <iostream>
#include <iomanip>
#include <climits>
#include <algorithm>   


using namespace std;

int main()
{
    int total = 0;
    cin >> total;

    double *houses = new double[total];
    double *neighbourhoods = new double[total - 2];
    double *temp = new double(0);
    double *smallest = new double(INT_MAX);

    for(int i = 0; i < total; i++) { cin >> *(houses + i); }

    // sort array
    sort(houses, houses + total);

    for(int i = 2; i < total; i++) 
        *(neighbourhoods + i - 2) = ((*(houses + i) - *(houses + i - 1)) / 2) + ((*(houses + i - 1) - *(houses + i - 2)) / 2);
    

    for(int i = 0; i < total - 2; i++) 
        if(*(neighbourhoods + i) < *smallest) *smallest = *(neighbourhoods + i); 

    std::cout << std::setprecision(1) << std::fixed;
    std::cout << *smallest;

}