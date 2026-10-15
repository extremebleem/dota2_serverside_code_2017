// Reconstructed from DWARF by pahole; not original source.

// src/public/mathlib/ssequaternion.h:330
class FourQuaternions {
	fltx4 x;  // +0x0
	fltx4 y;  // +0x10
	fltx4 z;  // +0x20
	fltx4 w;  // +0x30
private:

	FourQuaternions();
	FourQuaternions(const fltx4 &, const fltx4 &, const fltx4 &, const fltx4 &);
	FourQuaternions(const FourQuaternions &);
	void operator=(const FourQuaternions &);
	FourQuaternions Mul(const FourQuaternions &);
	FourQuaternions Conjugate();
	FourQuaternions ScaleAngle(const fltx4 &);
	FourQuaternions MulAc(const fltx4 &, const FourQuaternions &);
	FourQuaternions ScaleMul(const fltx4 &, const FourQuaternions &);
	FourQuaternions Slerp(const FourQuaternions &, const fltx4 &);
	FourQuaternions SlerpNoAlign(const FourQuaternions &, const fltx4 &);
	void LoadAndSwizzleAligned(const float *, const float *, const float *, const float *);
	void LoadAndSwizzleUnaligned(const float *, const float *, const float *, const float *);
	void LoadAndSwizzleAligned(const QuaternionAligned *, const QuaternionAligned *, const QuaternionAligned *, const QuaternionAligned *);
	void LoadAndSwizzleAligned(const QuaternionAligned *);
	void SwizzleAndStoreAligned(QuaternionAligned *, QuaternionAligned *, QuaternionAligned *, QuaternionAligned *);
	void SwizzleAndStoreUnaligned(QuaternionAligned *, QuaternionAligned *, QuaternionAligned *, QuaternionAligned *);
	void SwizzleAndStoreAligned(QuaternionAligned *);
	void SwizzleAndStoreAlignedMasked(QuaternionAligned *, const fltx4 &);

	// sizeof = 64
};
