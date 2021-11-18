#include <iostream>
using namespace std;
/*
Enter a : 4
Enter S : 3

3
44
555
6666
6666
555
44
3
*/
void pattern1(int a, int s)

{
    for (int i = 0; i <= 2 * a; i++)
    {
        for (int j = 0; j <= 2 * a; j++)
        {
            if (j <= (2 * a) - i && j < i)
            {
                if (i <= a)
                {
                    cout << i + s - 1;
                }
                else
                {
                    cout << (2 * a) - i + s;
                }
            }
            else
            {
                cout << ' ';
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
    cout << "Enter S : ";
    int s;
    cin >> s;
    pattern1(a, s);
}