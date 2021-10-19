#include <iostream>
using namespace std;
static int counter = 0;
void harshadNumber(int a)
{
    int b = a;
    int sum = 0;
    while (b > 0)
    {
        sum = sum + b % 10;
        b = b / 10;
    }
    if (a % sum == 0)
    {
        counter++;
        cout << a << " is a Harshad number" << endl;
    }
}
int main()
{
    int a;
    cout << "Enter number of harshad numbers you want to see : ";
    cin >> a;
    int i = 10;
    while (a > counter)
    {
        harshadNumber(i);
        i++;
    }
}