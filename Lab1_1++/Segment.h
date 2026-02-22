#ifndef SEGMENT_H
#define SEGMENT_H

class Segment 
{
	private:
		double x1, y1, x2, y2;
	public:
		Segment(double x1, double y1, double x2, double y2);
		double GetLength() const;
		double GetAngleWithOY() const;
		double GetX1() const;
		double GetY1() const;
		double GetX2() const;
		double GetY2() const;

};


#endif


