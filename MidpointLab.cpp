/* Name: Eva Zolotarev
Program Title: Point to PointLevel Attempted: 2.5
Program Description:
1.The following program should calculate the midpoint of two points while taking note of any
parenthesis or commas that come along with the endpoints.
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	double x1, x2, y1, y2, midpointValueOne, midpointValueTwo; //Variables
	char leftParenthesis, rightParenthesis, middleComma;
	string position;

	cout << "Welcome to the 2D Midpoint Program!!!";

	cout << "\n\nWhat is the first end-point?"; //1st Point Code
	if (!isdigit(cin.peek()) && cin.peek() != '+' && cin.peek() != '-' && cin.peek() != '.') //Setting up responses to: () & ,
	{
		cin >> leftParenthesis;
	}
	cin >> x1 >> ws;
	if (!isdigit(cin.peek()) && cin.peek() != '+' && cin.peek() != '-' && cin.peek() != '.')
	{
		cin >> middleComma;
	}
	cin >> y1 >> ws;
	if (cin.peek() == ')')
	{
		cin >> rightParenthesis;
	}
	cout << "What is the second end-point?"; //2nd Point's Code
	if (!isdigit(cin.peek()) && cin.peek() != '+' && cin.peek() != '-' && cin.peek() != '.')
	{
		cin >> leftParenthesis;
	}
	cin >> x2 >> ws;
	if (!isdigit(cin.peek()) && cin.peek() != '+' && cin.peek() != '-' && cin.peek() != '.')
	{
		cin >> middleComma;
	}
	cin >> y2 >> ws;
	if (cin.peek() == ')')
	{
		cin >> rightParenthesis;
	}

	midpointValueOne = (x1 + x2) / 2;
	midpointValueTwo = (y1 + y2) / 2;
	cout << "\nThe midpoint of the line segment between " << "(" << x1 << ", " << y1 << ")" << " and " << "(" << x2 << ", " << y2 << ")" << " is " << "(" << midpointValueOne << ", " << midpointValueTwo << ")";

	cout << "\n\nThank you for using the TMP!!\n";
	cout << "\n\nEndeavor to have a voracious day!";
	char letter;
	cin >> letter;

	return 0;
}