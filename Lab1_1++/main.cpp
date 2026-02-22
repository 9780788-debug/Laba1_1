#include "Segment.h"
#include <iostream>

using namespace std;

int main()
{
    Segment s(0, 0, 3, 4);


	cout << "Start point: (" << s.GetX1() << ", " << s.GetY1() << ")" << endl;
	cout << "End point: (" << s.GetX2() << ", " << s.GetY2() << ")" << endl;
    cout << "Length: " << s.GetLength() << endl;
    cout << "Angle: " << s.GetAngleWithOY() << endl;
    
    return 0;
}
