// Reconstructed from DWARF by pahole; not original source.

// src/public/irecipientfilter.h:18
class IRecipientFilter {
	int ()() * * _vptr.IRecipientFilter;  // +0x0
private:

	IRecipientFilter(const IRecipientFilter &);
	IRecipientFilter();

	virtual ~IRecipientFilter();
	virtual NetChannelBufType_t GetNetworkBufType();
	virtual bool IsInitMessage();
	virtual int GetRecipientCount();
	virtual CEntityIndex GetRecipientIndex(int);
	bool IsReliable();

	// vtable[0] Schema_DynamicBinding
	// vtable[3] GetNetworkBufType
	// vtable[4] IsInitMessage
	// vtable[5] GetRecipientCount
	// vtable[6] GetRecipientIndex
	// sizeof = 8
};
