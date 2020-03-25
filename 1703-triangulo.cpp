#include <iostream>
#include <cmath>
using namespace std;
bool triangle(int a, int b, int c);

int main(){
	int a,b,c;
	cin >>a>>b>>c;
	cout<<triangle(a,b,c);
}

bool triangle(int a, int b, int c){
	int x,y,z;
    x = (a+b) > c;
    y = (b+c) > a;
    z = (a+c) > b;
	return (x && y && z);
}