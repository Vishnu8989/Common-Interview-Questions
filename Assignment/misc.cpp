#include <iostream>
#include <math.h>
static int count = 0;
using namespace std;
int gcd(int a, int b)
{
    count++;
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int num1 = 15, num2 = 10;
    cin >> num1 >> num2;
    int a = num1 > num2 ? num1 : num2;
    int b = num1 < num2 ? num1 : num2;
    int ans = a;
    while (1)
    {
        ans = gcd(a,b);

    }
}
