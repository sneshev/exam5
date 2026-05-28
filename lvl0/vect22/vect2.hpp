#pragma once

#include <iostream>

class vect2 {
	private:
		int _x;
		int _y;

	public:
		vect2();
		vect2(int x);
		vect2(int x, int y);
		vect2(const vect2& other);

		vect2 operator - ();
		vect2 operator + ();

		vect2& operator = (const vect2& other);
		vect2& operator += (const vect2& other);
		vect2& operator -= (const vect2& other);
		vect2& operator *= (const vect2& other);

		vect2& operator ++ ();
		vect2& operator -- ();
		vect2 operator ++ (int);
		vect2 operator -- (int);

		bool operator == (const vect2& other) const;
		bool operator != (const vect2& other) const;

		int& operator [] (int index);
		const int& operator [] (int index) const;


		friend std::ostream& operator << (std::ostream& s, const vect2& v);
		
		friend vect2 operator + (const vect2& v1, const vect2& v2);
		friend vect2 operator - (const vect2& v1, const vect2& v2);
		friend vect2 operator * (const vect2& v1, const vect2& v2);
};
