//write include statemetns
#include "rectangle.h"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;

/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	//vector<Rect> rects{ Rect(4,5), Rect(10, 10), Rect(100, 10) };
	vector<Rect> rects {Rect(4,5), Rect(10,10), Rect(100,10)};

	cout << "list of areas : \n";
	for (auto rec : rects) {
		//cout << rec.get_area() << "\n";
		cout << rec;
	}
	
	return 0;
}