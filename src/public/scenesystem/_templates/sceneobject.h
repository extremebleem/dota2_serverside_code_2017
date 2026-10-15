// Reconstructed from DWARF by pahole; not original source.

// src/public/scenesystem/sceneobject.h:157
struct CSceneObjectStateOverideEntry<const CSceneSystemStencilState*> {
	int m_nMatchValue;  // +0x4
	const CSceneSystemStencilState * m_overrideValue;  // +0x8
	CSceneObjectStateOverideEntry();

	// sizeof = 16
};

// src/public/scenesystem/sceneobject.h:157
struct CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > {
	int m_nMatchValue;  // +0x4
	CSceneObjectStateOverideEntry(CSceneObjectStateOverideEntry<CStrongHandleCopyable<InfoForResourceTypeIMaterial2> > *);

	// sizeof = 16
};

// src/public/scenesystem/sceneobject.h:1956
struct DefaultStateOverrideValue_t<const CSceneSystemStencilState*, CSceneObjectStateOverideEntry<const CSceneSystemStencilState*> > {
	const CSceneSystemStencilState * Get();

	// sizeof = 1
};

// src/public/scenesystem/sceneobject.h:2070
class ISceneObjectDescBase<CHeightMapSceneObject> : public ISceneObjectDesc {
public:

	ISceneObjectDescBase(ISceneObjectDescBase<CHeightMapSceneObject> &);
	ISceneObjectDescBase(const ISceneObjectDescBase<CHeightMapSceneObject> &);
	ISceneObjectDescBase();

protected:

	virtual void DeleteNonPooledObject(CSceneObject *);

	// vtable[4] DeleteNonPooledObject
	// sizeof = 8
};

// src/public/scenesystem/sceneobject.h:2601
class CSceneObjectAutoPtrBase<CGlowHelperSceneObject> {
private:

	CSceneObjectAutoPtrBase(CGlowHelperSceneObject *);
	CSceneObjectAutoPtrBase(const CSceneObjectAutoPtrBase<CGlowHelperSceneObject> &);
	void Attach(CGlowHelperSceneObject *);
	CGlowHelperSceneObject * Detach();
	bool operator bool();
	bool IsValid();
	CGlowHelperSceneObject * Get();
	CGlowHelperSceneObject * operator->();
	CGlowHelperSceneObject & operator*();
	CGlowHelperSceneObject * operator CGlowHelperSceneObject*();
	CSceneObjectAutoPtrBase<CGlowHelperSceneObject> & operator=(CGlowHelperSceneObject *);
	CSceneObjectAutoPtrBase<CGlowHelperSceneObject> & operator=(const CSceneObjectAutoPtrBase<CGlowHelperSceneObject> &);
	void Delete();
	~CSceneObjectAutoPtrBase();

	// sizeof = 8
};
