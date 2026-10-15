// Reconstructed from DWARF by pahole; not original source.

// src/public/keyframe/keyframe.h:12
class IPositionInterpolator {
	int ()() * * _vptr.IPositionInterpolator;  // +0x0
	IPositionInterpolator(IPositionInterpolator &);
	IPositionInterpolator(const IPositionInterpolator &);
	IPositionInterpolator();
	virtual void Release();
	virtual void GetDetails(const char * *, int *, int *);
	virtual void SetKeyPosition(int, const Vector &);
	virtual void InterpolatePosition(float, Vector &);
	virtual bool ProcessKey(const char *, const char *);

	// vtable[0] Release
	// vtable[1] GetDetails
	// vtable[2] SetKeyPosition
	// vtable[3] InterpolatePosition
	// vtable[4] ProcessKey
	// sizeof = 8
};
