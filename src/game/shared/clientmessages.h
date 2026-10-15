// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/clientmessages.h:30
class IClientMessageDelegateHook {
	int ()() * * _vptr.IClientMessageDelegateHook;  // +0x0
	IClientMessageDelegateHook(IClientMessageDelegateHook &);
	IClientMessageDelegateHook(const IClientMessageDelegateHook &);
	~IClientMessageDelegateHook();
	IClientMessageDelegateHook();
	virtual void Release();
	virtual void SetDestructionAllowed();

	// vtable[0] Release
	// vtable[1] SetDestructionAllowed
	// sizeof = 8
};

// src/game/shared/clientmessages.h:78
class CClientMessageContainer : public CUtlVector<IClientMessageDelegateHook*, CUtlMemory<IClientMessageDelegateHook*, int> > {
public:

private:

	bool m_bReleased;  // +0x18
	CClientMessageContainer();
	~CClientMessageContainer();
	void SetReleased(bool);

	// sizeof = 32
};
