#include <iostream>
#include <cmath>
using namespace std;
int ternario(int a, int b, int c);

int main(){
	int a,b,c;
	cin >>a>>b>>c;
	cout<<ternario(a,b,c);
}

int ternario(int a, int b, int c){
    return c > a ? 2 * a : 3 * b;
}


