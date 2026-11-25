#include<iostream>
#include<iomanip>
using namespace std  ;
int main (){
    int n;
    cin>>n;
    int c=1;
    for(int i=0;i<n;i++){if(i%2==0){
        for(int k=0;k<n;k++){
            cout<<setw(5)<<c;
            c++;
        }
    }else{
        int s=c+n-1;
        for(int k=0;k<n;k++){
            cout<<setw(5)<<s-k;
        }c+=n;
    }cout<<endl;
                         
                        }
    return 0;
}
