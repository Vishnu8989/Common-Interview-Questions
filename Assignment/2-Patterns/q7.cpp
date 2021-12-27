#include <stdio.h>
#include <iostream>
using namespace std;
void pattern(int a)
{
    if (a > 1)
    {
        for (int i = 1; i < a; i++)
        {
            cout << i << " ";
        }
        cout << '\n';
        pattern(a - 1);
        pattern(a - 1);
    }
}
void pattern2(int a)
{
    if (a > 1)
    {
        pattern2(a - 1);
        for (int i = 1; i < a; i++)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
}
int main(int argc, char const *argv[])
{
    // pattern2(5);
    pattern(5);
    return 0;
}
