#include <iostream>
using namespace std;
int num[27]; //存储各个字母的出现次数
int Max = 0, Min = 300;  //存储出现次数最多和最少的字母的数量

bool isPrime(int x)  //质数判断函数
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
        num[word[i] - 'a']++;  //将出现的各个字母按次数加到数组里
    }
    for (int i = 0; i < 26; i++)
    {
        if (num[i] >= 1 && num[i] > Max) //  >=1是为了当字母至少出现过一次，才能被判断为最大或最小值
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
