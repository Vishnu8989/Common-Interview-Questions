#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int a){
    for(int i = 2; i <=sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a;
    cout<<"Enter n : ";
    cin>>a;
    int count = 0;
    int i = 2;
    while (count!=a)
    {
        if(isPrime(i)){
            count++;
        }
        i++;
    }
    i--;
    printf("%d",i);
}