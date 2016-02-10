// 1008: divide num1 by num2

/** Issue
소수점 9자리로 표현하기
cout << fixed
cout.precision()
**/

#include <iostream>
using namespace std;

double divide(double num1, double num2){
	return num1/num2;
}

int main(){
	double num1, num2;
	num1 = 0;
	num2 = 0;

	cin >> num1 >> num2;

	
	if(num2!=0){
		cout << fixed;
		cout.precision(9);
		cout << divide(num1,num2) << endl;
	}

	return 0;

}
