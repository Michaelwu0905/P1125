#include <iostream>
using namespace std;
int num[27];
int Max = 0, Min = 300;

bool isPrime(int x)
{
    if (x == 0 || x == 1)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{
    string word;
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        num[word[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (num[i] >= 1 && num[i] > Max)
            Max = num[i];
        if (num[i] >= 1 && num[i] < Min)
            Min = num[i];
    }
    if (isPrime(Max - Min))
    {
        cout << "Lucky Word" << endl
             << Max - Min << endl;
    }
    else
    {
        cout << "No Answer" << endl
             << 0 << endl;
    }
}