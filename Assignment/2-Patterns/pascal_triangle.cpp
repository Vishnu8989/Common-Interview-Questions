#include <iostream>
#include <cstring>
using namespace std;
/*
Enter a : 5
                                1
                        1               1
                1               2               1
        1               3               3               1
1               4               6               4               1*/
void pattern1(int a)
{
    int d[a][(2 * a) - 1];
    memset(d, 0, sizeof(d));
    d[0][a - 1] = 1;
    for (int i = 1; i < a; i++)
    {
        for (int j = 0; j < (2 * a) - 1; j++)
        {
            if (j == 0)
            {
                d[i][j] = d[i - 1][j + 1];
            }
            else if (j == (2 * a) - 2)
            {
                d[i][j] = d[i - 1][j - 1];
            }
            else
            {
                d[i][j] = d[i - 1][j + 1] + d[i - 1][j - 1];
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < (2 * a) - 1; j++)
        {
            if (d[i][j])
            {
                cout << d[i][j] << '\t';
            }
            else
            {
                cout << '\t';
            }
        }
        cout << '\n';
    }
}
int main()
{
    system("cls");
    int a;
    cout << "\nEnter a : ";
    cin >> a;
    pattern1(a);
}