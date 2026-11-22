#include<iostream>
using namespace std ;
int main (){
    int n,q;
    cin>>n>>q;
   for(int i=0;i<q;i++){
       long long p;
       cin>>p;
   int l=n;
    while(l>1){
        long long mid=1LL<<(l-1);
        if(p==mid)break;
        if(p>mid)p=2*mid-p;
        l--;
    }cout<<l<<endl;}
    return 0;
}
