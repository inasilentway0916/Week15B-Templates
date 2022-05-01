//Name: Kevin Avila
//Date: 05/01/22
//Class: CIS 1202.501

#include<iostream>

using namespace std;

template <class T>											//Required for Templates.

T half(T number)											//Template Function - half.
{
	return round(number) / 2.0;								//Return value halved.		
}

int half(int);												//Function prototype.

int main() 
{
	double a = 7.0;
	float b = 5.0;
	int c = 3;

	cout << half(a) << endl;								//Function Call - half
	cout << half(b) << endl;								//Function Call - half
	cout << half(c) << endl;								//Function Call - half



	system("pause");
	return 0;
}

int half(int number)
{
	double result;											//Hold Result.
	result = static_cast<double>(number) / 2.0;				//Change Int to Double.
	return round(result);									//Return Rounded Value.
}