#include <iostream>
#include <string>
using namespace std;
class dfa
{
    int d[8][2] = {{3, 2}, {4, 2}, {4, 5}, {4, 7}, {4, 6}, {6, 6}, {4, 8}, {4, 2}};

public:
    int next(int i, int a)
    {
        // cout << d[i][a] << endl;
        return d[i - 1][a];
    }
};
int main(int argc, char const *argv[])
{
    dfa A;
    A.next(3, 1);
    cout << "Enter String to check : ";
    string s;
    cin >> s;
    int state = 1;
    cout << "Intital state : 1" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        int alpha;
        if (s[i] == 'a')
        {
            alpha = 0;
        }
        if (s[i] == 'b')
        {
            alpha = 1;
        }
        // cout<<state<<endl;
        state = A.next(state, alpha);
        cout << s[i] << "," << state << endl;
    }
    if (state == 6 || state == 8)
    {
        cout << "String Accepted";
    }
    return 0;
}
