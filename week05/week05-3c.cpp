/// week05-3c.cpp 三合一的Part1/Part2 Input/Output
///Part3: stringsteam斷字 Part4: 反過來 algorithm
/// CPE 這次的第2題 UVA 483 Word Scramble 把字弄反
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line;
    while( getline(cin, line) ){
        stringstream ss(line);
        string word;
        ss >> word;
        reverse( word.begin(), word.end() );
        cout << word;
        while (ss >> word){
            reverse( word.begin(), word.end() );
            cout << " "<< word;
        }
        cout << endl;
    }
}
