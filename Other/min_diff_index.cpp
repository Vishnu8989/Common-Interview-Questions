#include <iostream>
using namespace std;
int min_index_difference(int *d, int a, int t1, int t2)
{
    int hash[100] = {0};
    int i = 0;
    for (i = 0; i < a; i++)
    {
        hash[d[i]] = hash[d[i]] * 10 + i;
    }
    for (int j = 0; j < 100; j++)
    {
        if (hash[j] != 0)
        {
            cout << j << " : " << hash[j] << endl;
        }
    }
}
void test(){
    int a;
    cin >> a;
    int *d = new int[a];
    for (int i = 0; i < a; i++)
    {
        // cout << "Enter the value of " << i + 1 << " element: ";
        cin >> d[i];
    }
    min_index_difference(d, a, 2, 5);
}
int main()
{
    int a;
    while(a>0){
        test();
        a--;
    }
    return 0;
}