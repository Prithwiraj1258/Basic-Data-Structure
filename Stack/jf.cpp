#include<bits/stdc++.h>
using namespace std;
bool vis[4]={false};
int main()
{
    vector<int>v(4);
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    int  cnt=0.0;
    for(int i=0;i<4-1;i++){
        for(int j=i+1;j<4;j++){
            if(v[i]==v[j]&&vis[i]==false && vis[j]==false)
             cnt++;
             vis[i]=true;
             vis[j]=true;
        }
        }
     cout<<cnt;

    return 0;
}
