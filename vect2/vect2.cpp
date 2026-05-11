#include "vect2.hpp"

vect2::vect2()
	: _x(0), _y(0)
{	}

vect2::vect2(int x, int y)
	: _x(x), _y(y)
{	}

vect2::vect2(const vect2& other)
	: _x(other._x), _y(other._y)
{	}

vect2::~vect2()
{	}


vect2 vect2::operator + (const vect2& other) const { return (vect2((_x + other._x), (_y + other._y))); }
vect2 vect2::operator - (const vect2& other) const { return (vect2((_x - other._x), (_y - other._y))); }
vect2 vect2::operator * (const vect2& other) const { return (vect2((_x * other._x), (_y * other._y))); }

vect2 vect2::operator + (int i) const { return (vect2((_x + i), (_y + i))); }
vect2 vect2::operator - (int i) const { return (vect2((_x - i), (_y - i))); }
vect2 vect2::operator * (int i) const { return (vect2((_x * i), (_y * i))); }


vect2& vect2::operator = (const vect2& other) {
	_x = other._x;
	_y = other._y;
	return *this;
}

vect2& vect2::operator += (const vect2& other) {
	*this = *this + other;
	return *this;
}

vect2& vect2::operator -= (const vect2& other) {
	*this = *this - other;
	return *this;
}

vect2& vect2::operator *= (const vect2& other) {
	*this = *this * other;
	return *this;
}


vect2& vect2::operator = (int i) {
	_x = i;
	_y = i;
	return *this;
}

vect2& vect2::operator += (int i) {
	*this = *this + i;
	return *this;
}

vect2& vect2::operator -= (int i) {
	*this = *this - i;
	return *this;
}

vect2& vect2::operator *= (int i) {
	*this = *this * i;
	return *this;
}

bool vect2::operator==(const vect2& other) const {
	return ((_x == other._x) && (_y == other._y));
}

bool vect2::operator!=(const vect2& other) const {
	return !(*this == other)	;
}

vect2 vect2::operator + () const { return (*this); }
vect2 vect2::operator - () const { return (0 - *this); }


vect2& vect2::operator ++() {
	*this += 1;
	return (*this);
}
vect2& vect2::operator --() {
	*this -= 1;
	return (*this);
}

vect2 vect2::operator ++ (int) {
	*this += 1;
	return (*this - 1);
}

vect2 vect2::operator -- (int) {
	*this -= 1;
	return (*this + 1);
}


std::ostream& operator <<(std::ostream& s, const vect2& v) {
	s << "{" << v._x << ", " << v._y << "}";
	return (s);
};

int& vect2::operator [] (int i) {
	return (i == 0) ? _x : _y;
}

const int& vect2::operator [] (int i) const {
	return (i == 0) ? _x : _y;
}


vect2 operator + (int i, const vect2& v) { return (v + i); }
vect2 operator - (int i, const vect2& v) { return (v - i); }
vect2 operator * (int i, const vect2& v) { return (v * i); }