#pragma once

#include <iostream>

class vect2 {
	private:
		int _x;
		int _y;

	public:
		vect2();
		vect2(int x, int y);
		vect2(const vect2& other);
		~vect2();

		vect2& operator = (const vect2& other);

		vect2& operator += (const vect2& other);
		vect2& operator -= (const vect2& other);
		vect2& operator *= (const vect2& other);

		vect2& operator = (int i);

		vect2& operator += (int i);
		vect2& operator -= (int i);
		vect2& operator *= (int i);

		vect2 operator + (const vect2& other) const;
		vect2 operator - (const vect2& other) const;
		vect2 operator * (const vect2& other) const;

		vect2 operator + (int i) const;
		vect2 operator - (int i) const;
		vect2 operator * (int i) const;

		bool operator != (const vect2& other) const;
		bool operator == (const vect2& other) const;

		vect2 operator + () const;
		vect2 operator - () const;


		vect2& operator ++ ();
		vect2& operator -- ();

		vect2 operator ++ (int);
		vect2 operator -- (int);

		friend std::ostream& operator << (std::ostream& s, const vect2& v);
		
		int& operator [] (int i);
		const int& operator [] (int i) const;
};


vect2 operator + (int i, const vect2& v);
vect2 operator - (int i, const vect2& v);
vect2 operator * (int i, const vect2& v);