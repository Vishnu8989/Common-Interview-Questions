#include<iostream>
#include <vector>
using namespace std;
int gcd(int A, int B)
{
    if (B == 0)
        return A;
    return gcd(B, A % B);
}
int main(){
    int a;
    int *d = new int[a];
    cout<<"\nEnter Number of Elements : ";
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cout<<i<<" : ";
        cin>>d[i];
    }
    int fgcd = d[0];
    for(int i = 1; i < a; i++){
        fgcd = gcd(fgcd,d[i]);
    }
    cout<<"GCD of all numbers is : "<<fgcd<<endl;
    return 0;
}