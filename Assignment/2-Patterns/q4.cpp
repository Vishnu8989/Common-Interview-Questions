#include <iostream>
using namespace std;
/*
Enter a : 4
11112
32222
33334
54444
*/
void pattern1(int a)

{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j <= a; j++)
        {
            if (!(i % 2))
            {
                if (j == 0)
                {
                    cout << i + 1;
                }
                else
                {
                    cout << i;
                }
            }
            else
            {
                if (j == a)
                {
                    cout << i + 1;
                }
                else
                {
                    cout << i;
                }
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