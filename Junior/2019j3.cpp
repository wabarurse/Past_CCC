// 7/15
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int *numLines = new int(0);
    cin >> *numLines;

    string *messages = new string[*numLines];
    for(int i = 0; i < *numLines; i++) {
        cin >> messages[i];
    }

    unordered_map<char, int> charCount;

    for(int i = 0; i < *numLines; i++) {
        for(int j = messages[i].length() - 1; j >= 0; j--) {
            char currentChar = messages[i][j];
            //std::cout << "CURRENT: " << currentChar << "\n";

            if(charCount.count(currentChar) == 0) charCount[currentChar] = 1;
            else charCount[currentChar]++;

        }

        for(auto i = charCount.begin(); i != charCount.end(); i++) {
            cout << i->second << " " << i->first << " ";
        }

        charCount.clear();
        cout << "\n";
    }


}