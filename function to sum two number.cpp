#include <iostream >
using namespace std;
int sum(int , int );
int main() {
	int x, y;
	cout << "Enter two number to find the sum \n";
	cin >> x >> y;
	cout << "The sum = " << sum(x, y)<<endl;
	system("pause");
}
int sum(int num1, int num2) {
	if (num1 < 0 && num2 < 0)
	{
		cout << " Error : Arguments are negative. ";
		return num1+num2;
	}
	return num1 + num2;
}  