// negative at first without changing order
// 1,4,-5,6,7,-8  --> -5,-8,1,4,6,7;
#include <iostream>
using namespace std;
int main()
{
    int d[8] = {5, 7, -3, 8, -2, 6 ,-5, 4};
    int a = 8;
    int l = 0, r = 7;
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if (d[i] < 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}