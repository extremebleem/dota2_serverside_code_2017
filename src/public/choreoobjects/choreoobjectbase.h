// Reconstructed from DWARF by pahole; not original source.

// src/public/choreoobjects/choreoobjectbase.h:11
class CChoreoObjectBase {
	int ()() * * _vptr.CChoreoObjectBase;  // +0x0
	ChoreoObjectHandle_t m_hChoreoObjectHandle;  // +0x8

	static ChoreoObjectHandle_t s_nNextChoreoObjectHandle;
	CChoreoObjectBase(CChoreoObjectBase &);
	CChoreoObjectBase(const CChoreoObjectBase &);
	CChoreoObjectBase & operator=(CChoreoObjectBase &);
	CChoreoObjectBase & operator=(const CChoreoObjectBase &);
	CChoreoObjectBase();
	virtual bool IsChoreoEvent();
	virtual bool IsChoreoChannel();
	virtual bool IsChoreoActor();
	ChoreoObjectHandle_t GetChoreoObjectHandle();

	// vtable[0] IsChoreoEvent
	// vtable[1] IsChoreoChannel
	// vtable[2] IsChoreoActor
	// sizeof = 16
};
