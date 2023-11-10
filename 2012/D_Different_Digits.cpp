#include<bits/stdc++.h>
using namespace std;

int f(int t){ //devuelve 1 si todos los dígitos de t son diferentes
    bitset<10>visited;
     
    while(t!=0){//verifico dígito por dígito si hay repetidos
        if(visited[t%10])return 0;//si visited[t%10] es > 0 hay repetidos y termina la funcion
        visited[t%10]=1;
        t/=10;    
    }
    
    return 1;//si nunca encontró repetidos, entonces no hay repetidos en el número
}

int main(){
     
    int c[5001];
    c[0]=0;
    
    for(int i=1;i<=5000;i++)
        c[i]=c[i-1]+f(i);  //es una suma de prefijos 
    
    int a,b;
    while(cin>>a>>b){//mientras siga recibiendo entrada de datos
        cout<<c[b]-c[a-1]<<"\n";//es importante el salto de línea
    }
    
    return 0;
}
