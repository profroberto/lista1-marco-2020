#include <iostream>
#include <cmath>
using namespace std;
int par(int x);

int main(){
	int a;
	cin >>a;
	cout<<par(a);
}

int par(int x){
	return x % 2 == 0 ? 1 : -1;
}

