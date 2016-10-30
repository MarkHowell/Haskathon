#include <iostream>
/*

class range {
private:
	// Choose your way to store the information on a range.	// Note that you need to be able to store an empty range
	// (a range with no min nor max).
	double min;
	double max;
public:
	// Interface for the class. You need to properly implement
	// the following methods
	// Constructor: create an empty range
	// (carefully choose the representation for an empty range)
	range();
	// Constructor: range of a given size centered around 0
	range(double size);
	// Constructor from a given min and max (note that the range passed could be empty)
	range(double inputMin, double inputMax);
	// Copy constructor
	range(const range &a);
	// Test if the range is empty
	// (depends on how you define an empty range)
	bool is_empty() const;
	// Get the min of the range
	double get_min() const;
	// Get the max of the range
	double get_max() const;
	// Assignment operator
	range& operator=(const range &rhs);
	// Normalized union of ranges (normalization fills
	// a possible gap in the range)
	range operator+(const range &rhs) const;
	// Normalized intersection of ranges (normalization fills
	// a possible gap in the range)
	range operator&(const range &rhs) const;
};

range::range()
{
	min = NAN;
	max = NAN;
}

range::range(double size)
{
	min = size / -2.0;
	max = size / 2.0;
}

range::range(double inputMin, double inputMax)
{
	min = inputMin;
	max = inputMax;
}

range::range(const range &a)
{
	min = a.get_min();
	max = a.get_max();
}

bool range::is_empty() const
{
	if (min == NAN || max == NAN)
		return false;
	else
		return true;
}

double range::get_min() const
{
	return min;
}

double range::get_max() const
{
	return max;
}


range & range::operator=(const range & rhs)
{
	return range(rhs.min, rhs.max);
}

range range::operator+(const range & rhs) const
{
	double currentMin = 0;
	double currentMax = 0;
	if (this->min < rhs.min)
		currentMin = this->min;
	else
		currentMin = rhs.min;
	if (this->max > rhs.max)
		currentMax = this->max;
	else
		currentMax = rhs.max;
	return range(currentMin, currentMax);
}

range range::operator&(const range & rhs) const
{
	double unionMin = 0;
	double unionMax = 0;
	if (this->min > rhs.min)
		unionMin = this->min;
	else
		unionMin = rhs.min;
	if (this->max < rhs.max)
		unionMax = this->max;
	else
		unionMax = rhs.max;
	if (unionMax - unionMin > 0)
		return range(unionMin, unionMax);
	else
		return range();
}

class nd_box {
private:
	int dim = 0;
	range* dims = nullptr;
public:
	// Create an empty box
	nd_box();
	// Copy constructor
	nd_box(const nd_box &a);
	// Constructor for 1D ranges
	nd_box(const range &a);
	// Constructor for rectangles
	nd_box(const range &a, const range &b);
	// Constructor for 3D rectangular boxes
	nd_box(const range &a, const range &b, const range &c);
	// Constructor for 4D boxes
	nd_box(const range &a, const range &b, const range &c,
		const range &d);
	// Destructor, should free the ranges you've allocated
	~nd_box();
	bool is_empty() const;
	// Get the dimension of the range
	int get_dim() const;
	// Assignment operator
	nd_box& operator=(const nd_box &rhs);
	// Normalized union of boxes
	nd_box operator+(const nd_box &rhs) const;
	// Normalized intersection of boxes
	nd_box operator&(const nd_box &rhs) const;
	// Returns reference to i-th range
	const range& operator[](int i) const;
	// Returns reference to i-th range
	range& operator[](int i);
};nd_box::nd_box()
{
}

nd_box::nd_box(const nd_box & a)
{
}

nd_box::nd_box(const range & a)
{
	new range[];
	dim = 1;
}
*/
