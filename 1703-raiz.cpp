#include <iostream>
#include <cmath>
using namespace std;
float root(int a, int b);

int main(){
	int a,b;
	cin >>a>>b;
	cout<<root(a,b);
}

float root(int a, int b){
	return pow(a,1.0/b);
}

