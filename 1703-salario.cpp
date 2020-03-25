#include <iostream>
#include <cmath>
using namespace std;
float salario(float h, float vh);

int main(){
	float a,b;
	cin >>a>>b;
	cout<<salario(a,b);
}

float salario(float h, float vh){
    float s = (h <= 180) ? h * vh : 180 * vh;
    float b = (h - 180) > 0 ? (h - 180) * vh * 1.5 : 0.0;
    return s + b;
}


