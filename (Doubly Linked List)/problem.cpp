#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n*4;i+=4){
        for (int j=i;j<=i+3;j++){

        if(j%4==0){
            cout<<"PUM";
            break;
        }
        cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;

}
