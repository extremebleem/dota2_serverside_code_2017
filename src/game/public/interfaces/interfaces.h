// Reconstructed from DWARF by pahole; not original source.

// src/game/public/interfaces/interfaces.h:719
class CPostConnectCallback {
	int ()() * * _vptr.CPostConnectCallback;  // +0x0
private:

	static CPostConnectCallback * s_pFirstCallback;
	static int s_nInstallOrder;
	int m_nPriority;  // +0x10
	int m_nInstallOrder;  // +0x14
	CPostConnectCallback(CPostConnectCallback &);
	CPostConnectCallback(const CPostConnectCallback &);
	CPostConnectCallback(int);
	virtual PostConnectCallbackRetVal_t OnConnect();

	// vtable[0] OnConnect
	// sizeof = 24
};
