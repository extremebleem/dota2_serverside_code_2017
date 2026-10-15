// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/intvector3d.h:20
class IntVector3D {
	int x;  // +0x0
	int y;  // +0x4
	int z;  // +0x8
	IntVector3D();
	IntVector3D(int, int, int);
	IntVector3D(int);
	IntVector3D(Vector, float);
	void Zero();
	void Init(int, int, int);
	Vector ToVector();
	int & operator[](int);
	int operator[](int);
	IntVector3D operator+();
	IntVector3D operator-();
	IntVector3D & operator*=(const IntVector3D &);
	IntVector3D & operator/=(const IntVector3D &);
	IntVector3D & operator+=(const IntVector3D &);
	IntVector3D & operator-=(const IntVector3D &);
	IntVector3D & operator*=(int);
	IntVector3D & operator/=(int);
	IntVector3D & operator%=(const IntVector3D &);
	IntVector3D & operator%=(int);
	IntVector3D & operator&=(const IntVector3D &);
	IntVector3D & operator&=(int);
	IntVector3D & operator|=(const IntVector3D &);
	IntVector3D & operator|=(int);
	IntVector3D & operator^=(const IntVector3D &);
	IntVector3D & operator^=(int);
	IntVector3D & operator<<=(const IntVector3D &);
	IntVector3D & operator<<=(int);
	IntVector3D & operator>>=(const IntVector3D &);
	IntVector3D & operator>>=(int);
	IntVector3D operator*(const IntVector3D &);
	IntVector3D operator/(const IntVector3D &);
	IntVector3D operator+(const IntVector3D &);
	IntVector3D operator-(const IntVector3D &);
	IntVector3D operator*(int);
	IntVector3D operator/(int);
	IntVector3D operator%(const IntVector3D &);
	IntVector3D operator%(int);
	IntVector3D operator&(const IntVector3D &);
	IntVector3D operator&(int);
	IntVector3D operator|(const IntVector3D &);
	IntVector3D operator|(int);
	IntVector3D operator^(const IntVector3D &);
	IntVector3D operator^(int);
	IntVector3D operator<<(const IntVector3D &);
	IntVector3D operator<<(int);
	IntVector3D operator>>(const IntVector3D &);
	IntVector3D operator>>(int);
	bool operator==(const IntVector3D &);
	bool operator!=(const IntVector3D &);
	bool StrictlyGreater(const IntVector3D &);
	bool StrictlyGreaterOrEqual(const IntVector3D &);
	bool StrictlyLess(const IntVector3D &);
	bool StrictlyLessOrEqual(const IntVector3D &);
	bool AnyGreater(const IntVector3D &);
	bool AnyGreaterOrEqual(const IntVector3D &);
	bool AnyLess(const IntVector3D &);
	bool AnyLessOrEqual(const IntVector3D &);
	int Dot(const IntVector3D &);
	IntVector3D Cross(const IntVector3D &);
	int LengthSqr();

	// sizeof = 12
};
