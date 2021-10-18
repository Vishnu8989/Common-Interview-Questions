#include<iostream>
using namespace std;
int fibb(int a){
    int a1 = 0;
    int a2 = 1;
    int ai;
    for(int i = 3; i <=a;i++){
        ai = a1+a2;
        a1 = a2;
        a2 = ai;
    }
    return ai;

}
int main(){
    int a;
    cout<<"Enter n : ";
    cin>>a;
    cout<<"Fibb("<<a<<") : "<<fibb(a)<<endl;
}