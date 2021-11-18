#include <iostream>
using namespace std;
/*
Enter a : 5
 *       *
  *     *
   *   *
    * *
     *
    * *
   *   *
  *     *
 *       *
*/
void pattern1(int a)

{
    for (int i = 1; i < 2 * a; i++)
    {
        for (int j = 0; j < 2 * a; j++)
        {
            if (j == (2 * a) - i || j == i)
            {
                cout << "*";
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