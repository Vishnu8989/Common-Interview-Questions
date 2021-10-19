#include <iostream>
using namespace std;
int main()
{
    int n = 100;
    cout << n << " divided by 8 = ";
    n = n >> 3;
    cout << n;
    return 0;
}