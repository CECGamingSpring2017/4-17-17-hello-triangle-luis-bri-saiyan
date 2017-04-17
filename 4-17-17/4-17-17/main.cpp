/* CSCI 261 A02: Triangles
* Author: XXXX (_INSERT_YOUR_NAME_HERE_)
*
* Add more complete description here...
*/

#include <iostream>   // For cin, cout, etc.
using namespace std;  // For standard namespace 
#include <ctime>
#include <math.h>
int main() {

	srand(time(NULL));

	int num = rand() % 20 - 10;
	int num2 = rand() % 20 - 10;

	double x;
	double x2;
	double y;
	double y2;
	double sl;
	double sl2;
	double sl3;
	double perimeter;
	double s;
	double area;

	do {
		// PART I: INSERT YOUR CODE BELOW HERE

		cout << "x = " << num << " y = " << num2 << endl;
		cout << "give me a x" << endl;
		cin >> x;
		cout << "give me a y" << endl;
		cin >> y;
		cout << "give me some other x" << endl;
		cin >> x2;
		cout << "give me some other y" << endl;
		cin >> y2;

		// PART I INSERT YOUR CODE ABOVE HERE
		// PART II: INSERT YOUR CODE BELOW HERE

		sl = sqrt((x2 - x)*(x2 - x) + (y2 - y)*(y2 - y));
		sl2 = sqrt((x - num)*(x - num) + (y - num2)*(y - num2));
		sl3 = sqrt((num - x2)*(num - x2) + (num2 - y2)*(num2 - y2));

		perimeter = sl + sl2 + sl3;

		s = (sl + sl2 + sl3) / 2;

		area = sqrt(s*(s - sl)*(s - sl2)*(s - sl3));

		// PART II INSERT YOUR CODE ABOVE HERE
		// PART III INSERT YOUR CODE BELOW HERE

		cout << "Side Lengths Are: " << sl << " , " << sl2 << " , " << sl3 << endl;
		cout << endl;
		cout << "Perimeter Is: " << perimeter << endl;
		cout << endl;
		cout << "Area Is: " << area << endl;
		cout << endl;


		// PART III INSERT YOUR CODE ABOVE HERE

		// signals the operating system that our program ended OK.
	} while (1);
}