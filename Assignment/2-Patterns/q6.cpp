#include <iostream>
using namespace std;
/*
Enter a : 5

1
2*3
4*5*6
7*8*9*10
11*12*13*14*15
*/
void pattern1(int a)
{
    a++;
    int temp = 1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << temp++;
            if (j != i - 1)
            {
                cout << "*";
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