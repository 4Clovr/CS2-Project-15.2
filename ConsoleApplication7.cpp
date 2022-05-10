#include <iostream>
#include <unordered_map>
#include <fstream>
using namespace std;

//Write a program that counts how often each word occurs in a text file. Use an unordered_map<string, int>.

int main() 
{
    ifstream file;
    file.open("text.txt");

    unordered_map<string, int> mappy;

    string word;
    int count = 1;
    while (file >> word)
    {
        int temp = 1;
        if (mappy[word])
        {
            mappy[word]++;
        }
        else
        {
            mappy[word] = count;
        }
    }

    file.close();

    cout << "Word\tCount" << endl;
    cout << "----\t----" << endl;

    //print all words and their count
    for (auto p = mappy.begin(); p != mappy.end(); p++)
    {
        cout << p->first << "\t" << p->second << endl;
    }

    return 0;
}