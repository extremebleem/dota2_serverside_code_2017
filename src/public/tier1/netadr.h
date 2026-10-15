// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/netadr.h:28
struct netadr_t {
	netadrtype_t type;  // +0x0
	unsigned char ip[4];  // +0x4
	short unsigned int port;  // +0x8
	netadr_t();
	netadr_t(uint, uint16);
	netadr_t(const char *);
	void Clear();
	void SetType(netadrtype_t);
	void SetPort(short unsigned int);
	bool SetFromSockadr(const sockaddr *);
	void SetIP(uint8, uint8, uint8, uint8);
	void SetIP(uint);
	void SetIPAndPort(uint, short unsigned int);
	bool SetFromString(const char *, bool);
	bool CompareAdr(const netadr_t &, bool);
	bool CompareClassBAdr(const netadr_t &);
	bool CompareClassCAdr(const netadr_t &);
	netadrtype_t GetType();
	short unsigned int GetPort();
	const char * ToString(bool);
	void ToString(char *, uint32, bool);
	void ToSockadr(sockaddr *);
	unsigned int GetIPHostByteOrder();
	unsigned int GetIPNetworkByteOrder();
	bool IsLocalhost();
	bool IsLoopback();
	bool IsReservedAdr();
	bool IsValid();
	bool IsBaseAdrValid();
	void SetFromSocket(int);
	bool Unserialize(bf_read &);
	bool Serialize(bf_write &);
	bool operator==(const netadr_t &);
	bool operator!=(const netadr_t &);
	bool operator<(const netadr_t &);

	// sizeof = 12
};
