/// week05-3c.cpp �T�X�@��Part1/Part2 Input/Output
///Part3: stringsteam�_�r Part4: �ϹL�� algorithm
/// CPE �o������2�D UVA 483 Word Scramble ��r�ˤ�
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
