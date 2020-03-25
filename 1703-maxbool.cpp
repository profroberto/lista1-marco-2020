#include <iostream>
#include <cmath>
using namespace std;
int maxbool(int a, int b);
int maxbool2(int a, int b);

int main(){
	int a,b,c;
	cin >>a>>b;
	cout<<maxbool(a,b);
}

int maxbool(int a, int b){
    return (bool)(a / b) * a + (bool)(b / a) * b;
}

int maxbool2(int a, int b){
    return a > b ? a : b;
}

