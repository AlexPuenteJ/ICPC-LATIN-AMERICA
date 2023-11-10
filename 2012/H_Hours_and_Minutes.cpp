#include <bits/stdc++.h>
using namespace std;
int main(){
  
    int n;
    vector<bool> visited(400,0);
    for(int i=0;i<12;i++){//i es la cantidad de horas que ha pasado
        for(int j=0;j<60;j++){//j es la cantidad de minutos de la hora i

            int ang1=30*i+ 6*(j/12);/*La manecilla de la hora en la hora i
            ya avanzo 30*i grados con respecto de la hora 12, y si la manecilla
            del minutero está en el minuto j, la mnecilla de la hora avanzó un
            adicional de 6*(j/12) grados.
            */
            int ang2=6*j;//el minutero cada minuto avanza 360/60=6 grados
            int mini=min(abs(ang1-ang2),360-abs(ang1-ang2));/*Aquí vemos 
            el mínimo de los dos ángulos que se forman entre minutero y hora*/
            visited[mini]=1;    
        }
    }
    
    while(cin>>n){
        if(visited[n])
            cout<<"Y\n";
        else
            cout<<"N\n";
    }
    
    return 0;
}