#include "Segment.h"
#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

Segment::Segment(double x1, double y1, double x2, double y2) {
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

double Segment::GetLength() const {
	double dx = x2 - x1;
	double dy = y2 - y1;
	return sqrt(dx * dx + dy * dy);
}
		
double Segment::GetAngleWithOY() const {
	double length = GetLength();
	if (length == 0)
	return 0;

	double dy = y2 - y1;
	double angleRadians = acos(dy / length);
	double angleDegrees = angleRadians * 180.0 / numbers::pi;
	return angleDegrees;
}

			double Segment::GetX1() const { return x1; }
			double Segment::GetY1() const { return y1; }
			double Segment::GetX2() const { return x2; }
			double Segment::GetY2() const { return y2; }
