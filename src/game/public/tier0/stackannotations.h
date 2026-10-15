// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier0/stackannotations.h:41
class IStack_Annotation {
	int ()() * * _vptr.IStack_Annotation;  // +0x0
	IStack_Annotation(const IStack_Annotation &);
	IStack_Annotation(const CCallStackMarkerBase &);
	virtual ~IStack_Annotation();
	virtual void Resolve(IAnnotationPackager *);

	// vtable[2] Resolve
	// sizeof = 8
};

// src/game/public/tier0/stackannotations.h:62
class CStackAnnotation_SimpleString : public IStack_Annotation {
public:

	const char * m_szString;  // +0x8
	CStackAnnotation_SimpleString(const char *, const CCallStackMarkerBase &);
	virtual void Resolve(IAnnotationPackager *);
	virtual ~CStackAnnotation_SimpleString();

	// vtable[2] Resolve
	// sizeof = 16
};
