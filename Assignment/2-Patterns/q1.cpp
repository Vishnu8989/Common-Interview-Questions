#include <iostream>
using namespace std;
//  1       1
//   2     2
//    3   3
//     4 4
//      5
//     4 4
//    3   3
//   2     2
//  1       1
void pattern1(int a)
{
    for (int i = 1; i < 2 * a; i++)
    {
        for (int j = 0; j < 2 * a; j++)
        {
            if (j == (2 * a) - i || j == i)
            {
                i < a ? (cout << i) : cout << (2 * a) - i;
            }
            else
            {
                cout << " ";
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