#include <iostream>
using namespace std;
int maxthree(int a, int b, int c);

int main(){
	int a,b,c;
	cin >>a>>b>>c;
	cout<<maxthree(a,b,c);
}

int maxthree(int a, int b, int c){
	return max(max(a,b),c);
}