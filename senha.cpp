#include <bits/stdc++.h>
using namespace std;
int senha, r1,r2,r3;
bool resp=0;
int main(){
    cin>>senha;
    if(senha >=1111 && senha <=9999){
        r1=senha % 10;
        senha/=10;//'senha = senha / 10;
        r2=senha % 10;
        senha/=10;
        r3=senha % 10;
        resp=r1 * r2 * r3;
    }
    cout<<resp;
}
