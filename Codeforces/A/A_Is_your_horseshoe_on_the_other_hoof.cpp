#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int m[5], e=3;
    for(int i=0;i<4;i++){
        cin>>m[i];
    }
    sort(m,m+4);
    for(int i=0;i<3;i++){
        if(m[i]!=m[i+1]){
            e--;
        }
    }
    cout<<e;
}