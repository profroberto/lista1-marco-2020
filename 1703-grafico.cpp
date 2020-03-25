#include <iostream>
#include <cmath>
using namespace std;
int graph(int x);

int main(){
	int a,b,c;
	cin >>a;
	cout<<graph(a);
}

int graph(int x){
    return pow((x-1),2);
}
