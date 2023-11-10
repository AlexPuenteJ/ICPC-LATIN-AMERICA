#include<bits/stdc++.h>
using namespace std;

int f(int t){
    bitset<10>visited;
     
    while(t!=0){
        if(visited[t%10])return 0;
        visited[t%10]=1;
        t/=10;    
    }
    
    return 1;
}

int main(){
     
    int c[5001];
    c[0]=0;
    
    for(int i=1;i<=5000;i++)
        c[i]=c[i-1]+f(i);
    
    int a,b;
    while(cin>>a>>b){
        cout<<c[b]-c[a-1]<<"\n";
    }
    
    return 0;
}