#include <iostream>
using namespace std;
int dictionaryContains(string word)
{
    string dictionary[] = {"hello","upesacm","chapter","flash","man","world","forward","and","go","to","acmw","welcome","acm"};
    int size = sizeof(dictionary)/sizeof(dictionary[0]);
    for (int i = 0; i < size; i++)
        if (dictionary[i].compare(word) == 0)
           return true;
    return false;
}

