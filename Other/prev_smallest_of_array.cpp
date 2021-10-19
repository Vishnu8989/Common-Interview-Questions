#include <iostream>
using namespace std;
void fun(int d[], int ret[], int a) // input array , returning array , size of both arrays
{
    int smallest = d[0];
    for (int i = 1; i < a; i++)
    {
        if (d[i] < smallest)
        {
            smallest = d[i];
            ret[i] = -1;
        }
        else
        {
            ret[i] = d[i - 1];
            if (ret[i] > ret[i - 1] && ret[i - 1] != -1)
            {
                ret[i] = ret[i - 1];
            }
        }
    }
}
void arr_print(int d[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << d[i] << "\t";
    }
}
void solve()
{
    int a;
    // cout << "\nEnter size of array : ";
    cin >> a;
    int *d = (int *)malloc(a * sizeof(int));
    for (int i = 0; i < a; i++)
    {
        // printf("Arr[%d] :  ", i);
        cin >> d[i];
    }
    int *res = (int *)malloc(a * sizeof(int));
    res[0] = -1;
    fun(d, res, a);
    cout << "\nGiven Array  : ";
    arr_print(d, a);
    cout << "\nOutput Array : ";
    arr_print(res, a);
}
int main()
{
    int a;
    cin >> a;
    int i = 0;
    system("g++ Array_test_case.cpp -o test_case && test_case.exe > arr_test_case.txt");
    while (a > 0)
    {
        i++;
        cout << "\n\nCase " << i << "";
        solve();
        a--;
    }
}
