#include <iostream>
using namespace std;
int lengthOfLastWord(string s)
{
    int a = s.size();
    if (a == 0)
    {
        return 0;
    }
    int i = a - 1;
    int c = 0;
    while (s[i] == ' ' && i >= 0)
    {
        i--;
    }
    while (s[i] != ' ' && i >= 0)
    {
        c++;
        i--;
    }
    return c;
}
int main()
{
    cout << lengthOfLastWord("bbb a   ");
    return 0;
}