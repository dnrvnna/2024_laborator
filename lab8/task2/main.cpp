#include <iostream>

using namespace std;

string vowels = "AEIOUYaeiouy";
string consonants = "QWRTPSDFGHJKLZXVBNMqwrtpsdfghjklzxvbnm";

void duplicate_consonants(string &s)
{
    for(int i = 0; i < s.length(); )
        if(consonants.find(s[i]) != string::npos)
        {
            s.insert(i + 1, 1, s[i]);
            i += 2;
        }
        else i++;
}

void delete_vowels(string &s)
{
    for(int i = 0; i < s.length(); )
        if(vowels.find(s[i]) != string::npos)
            s.erase(i, 1);
        else i++;
}

int count_vowels(string s)
{
    int counter = 0;
    for (int i = 0; i < s.length();i++)
        if (vowels.find(s[i]) != -1) counter++;
    return counter;
}

void sort_alphabet_obratniy_poriadok(string &s, int n)
{
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(s[i] < s[j])
                swap(s[i], s[j]);
}


int main()
{
    string s;
    cin >> s;

    if(count_vowels(s) >= 3)
    {
        sort_alphabet_obratniy_poriadok(s, s.length());
    }
    else
    {
        delete_vowels(s);
        duplicate_consonants(s);
    }

    cout << s;
    return 0;
}