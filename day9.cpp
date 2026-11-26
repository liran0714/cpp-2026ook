#include<iostream>
using namespace std ;
int main(){
    int a[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    int max=0;
    int e=0,f=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]>max){
                max=a[i][j];
                e=i;f=j;
            }
        }
    }cout<<max<<" "<<"["<<e<<"]"<<"["<<f<<"]"<<endl;
  
    return 0;
}
