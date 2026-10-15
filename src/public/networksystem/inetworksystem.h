// Reconstructed from DWARF by pahole; not original source.

// src/public/networksystem/inetworksystem.h:99
struct NetPacket_t {
	double m_flReceivedTime;  // +0x40
	uint8 * m_pPacketData;  // +0x48
	int m_nSourceSocket;  // +0x50
	int m_nPacketSize;  // +0x54
	int m_nWireSize;  // +0x58

	uint64 m_recvUSTimeFirst;  // +0x60
	uint64 m_recvUSTimeLast;  // +0x68
	bool m_bOwnsPacketDataPointer:1;  // +0x70:0
	bool m_bSplitPacket:1;  // +0x70:1
	NetPacket_t();
	void Clear();
	void StartReading(const char *);
	void AllocateAndCopyData(int, const uint8 *);

	// sizeof = 120
};

// src/public/networksystem/inetworksystem.h:179
class IConnectionlessPacketHandler {
	int ()() * * _vptr.IConnectionlessPacketHandler;  // +0x0
	IConnectionlessPacketHandler();
	virtual ~IConnectionlessPacketHandler();
	virtual bool ProcessConnectionlessPacket(const ns_address &, bf_read &);

	// vtable[2] ProcessConnectionlessPacket
	// sizeof = 8
};

// src/public/networksystem/inetworksystem.h:193
class ISteamP2PAllowConnection {
	int ()() * * _vptr.ISteamP2PAllowConnection;  // +0x0
	ISteamP2PAllowConnection();
	virtual ~ISteamP2PAllowConnection();
	virtual bool SteamIDAllowedToP2PConnect(ESteamP2PConnectionOwner, CSteamID);

	// vtable[2] SteamIDAllowedToP2PConnect
	// sizeof = 8
};
