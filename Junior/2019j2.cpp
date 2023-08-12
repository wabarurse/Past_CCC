// 15/15
#include <iostream>
#include <cstring>

using namespace std;

int main() 
{
    int total;
    cin >> total;

    string arr[total];

    cin.get(); // used to get ready to read a STRING after reading and INTEGER

    for(int i = 0; i < total; i++) {
        string str1;
        getline(cin, str1); // better than cin because it reads whole line instead of the first token
        arr[i] = str1;
        
    }

    for(int i = 0; i < total; i++) {
        string current = arr[i];
        char *token1 = strtok(&current[0], " ");
        char *token2 = strtok(nullptr, " ");

        int repeat = atoi(token1); // converts string number to real number

        for(int i = 0; i < repeat; i++) 
            cout << token2;

        cout << endl;
        
    }


    

    

    



}