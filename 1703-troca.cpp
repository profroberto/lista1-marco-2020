#include <iostream>
using namespace std;
void troca(int &a, int &b){
    int aux;
    if (a > b){
        aux = a;
        a = b;
        b = aux;
    }
}
int main(){
    int a,b;
    cin >>a>>b;
    troca(a,b);
    cout<<a<<" "<<b;
}
