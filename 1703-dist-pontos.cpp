#include <iostream>
#include <cmath>
using namespace std;
float distance(int x1, int y1, int x2, int y2);

int main(){
	int a,b,c,d;
	cin >>a>>b>>c>>d;
	cout<<distance(a,b,c,d);
}

float distance(int x1, int y1, int x2, int y2){
	return sqrt(pow(x2-x1,2) + pow(y2-y1,2));
}

