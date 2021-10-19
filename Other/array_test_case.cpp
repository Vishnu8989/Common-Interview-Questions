#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int a = rand() % 9+1;
    cout << a << endl;
    for (int i = 0; i < a; i++)
    {
        int b = rand() % 14+5;
        cout << b << endl;
        for (int i = 0; i < b; i++)
        {
            cout << rand() % 100<<" ";
        }
        cout<<endl;
    }
    return 0;
}