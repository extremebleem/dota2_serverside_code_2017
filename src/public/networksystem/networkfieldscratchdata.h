// Reconstructed from DWARF by pahole; not original source.

// src/public/networksystem/networkfieldscratchdata.h:4
class CNetworkFieldScratchData : public INetworkFieldScratchData {
	enum {
		NETWORKFIELDSCRATCHDATA_COMMITSIZE = 0x1000,
		NETWORKFIELDSCRATCHDATA_ALIGNMENT = 0x10,
	};

public:

private:

	uint32 m_unBufferSize;  // +0x20
	LoggingChannelID_t m_LoggingChannel;  // +0x24
	CNetworkFieldScratchData(const CNetworkFieldScratchData &);
	CNetworkFieldScratchData();
	virtual ~CNetworkFieldScratchData();
	virtual void Init(uint32, LoggingChannelID_t);
	virtual void * Alloc(uint32);
	virtual void Purge();
	virtual LoggingChannelID_t LoggingChannel();

	// vtable[2] Init
	// vtable[3] Alloc
	// vtable[4] Purge
	// vtable[5] LoggingChannel
	// sizeof = 40
};
