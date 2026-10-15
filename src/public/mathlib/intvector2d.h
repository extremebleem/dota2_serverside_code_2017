// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/intvector2d.h:19
class IntVector2D {
	int x;  // +0x0
	int y;  // +0x4
	IntVector2D();
	IntVector2D(int, int);
	IntVector2D(int);
	IntVector2D(Vector2D, float);
	void Init(int, int);
	void Zero();
	Vector2D ToVector2D();
	IntVector2D operator+(const IntVector2D &);
	IntVector2D operator-(const IntVector2D &);
	IntVector2D operator-();
	IntVector2D operator*(int);
	IntVector2D operator*(const IntVector2D &);
	IntVector2D operator/(int);
	IntVector2D operator/(const IntVector2D &);
	IntVector2D operator%(int);
	IntVector2D operator%(const IntVector2D &);
	IntVector2D & operator+=(const IntVector2D &);
	IntVector2D & operator-=(const IntVector2D &);
	IntVector2D & operator*=(int);
	IntVector2D & operator*=(const IntVector2D &);
	IntVector2D & operator/=(int);
	IntVector2D & operator%=(int);
	IntVector2D & operator%=(const IntVector2D &);
	bool operator==(const IntVector2D &);
	bool operator!=(const IntVector2D &);
	const int & operator[](int);
	int & operator[](int);
	int Dot(const IntVector2D &);
	int LengthSqr();
	bool StrictlyGreater(const IntVector2D &);
	bool StrictlyGreaterOrEqual(const IntVector2D &);
	bool StrictlyLess(const IntVector2D &);
	bool StrictlyLessOrEqual(const IntVector2D &);
	bool AnyGreater(const IntVector2D &);
	bool AnyGreaterOrEqual(const IntVector2D &);
	bool AnyLess(const IntVector2D &);
	bool AnyLessOrEqual(const IntVector2D &);

	// sizeof = 8
};
