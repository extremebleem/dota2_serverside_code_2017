// Reconstructed from DWARF by pahole; not original source.

// src/public/networksystem/networkquantizedtypes.h:19
class CNetworkedQuantizedFloat {
private:

	float32 m_Value;  // +0x0
	uint16 m_nEncoder;  // +0x4
	bool m_bUnflattened;  // +0x6
	CNetworkedQuantizedFloat();
	CNetworkedQuantizedFloat(float);
	CNetworkedQuantizedFloat(const CNetworkedQuantizedFloat &);
	CNetworkedQuantizedFloat(const char *, CUtlStringToken, int, int, float, float);
	CQuantizedFloatEncoder * GetEncoder();
	const CQuantizedFloatEncoder * GetEncoder();
	void SetUnflattened(bool);
	bool IsUnflattened();
	const float & QuantizeInPlace();
	bool EncodeFloat(float, bf_write &);
	float DecodeFloat(bf_read &);
	const float & Set(const float &);
	const float & operator=(const CNetworkedQuantizedFloat &);
	const float & operator++();
	float operator--();
	float operator++(int);
	float operator--(int);
	const float & operator float const&();
	const float & Get();
	int NumBits();
	float MinValue();
	float MaxValue();
	const char * GetFieldName();
	bool TestInit(const char *, CUtlStringToken, int, int, float, float);
	bool IsIdenticalWithinTolerance(const CNetworkedQuantizedFloat &);

	// sizeof = 8
};

// src/public/networksystem/networkquantizedtypes.h:238
class INetworkStateChangedRouter {
	int ()() * * _vptr.INetworkStateChangedRouter;  // +0x0
	INetworkStateChangedRouter & operator=(INetworkStateChangedRouter &);
	INetworkStateChangedRouter & operator=(const INetworkStateChangedRouter &);
	INetworkStateChangedRouter(INetworkStateChangedRouter &);
	INetworkStateChangedRouter(const INetworkStateChangedRouter &);
	INetworkStateChangedRouter();
	virtual void NetworkStateChanged(void *, int32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *);

	// vtable[0] NetworkStateChanged
	// vtable[1] NetworkStateChangedLog
	// sizeof = 8
};

// src/public/networksystem/networkquantizedtypes.h:441
class CNetworkVectorChangeCallbackInitFuncRegistry {
private:

	static CNetworkVectorChangeCallbackInitFuncRegistry * sm_pHead;
	CUtlDelegate<void(NetworkSerializationMode_t)> m_delegate;  // +0x8
	CNetworkVectorChangeCallbackInitFuncRegistry(CUtlDelegate<void(NetworkSerializationMode_t)>);
	void ExecuteNetworkInitFuncs(NetworkSerializationMode_t);

	// sizeof = 32
};
