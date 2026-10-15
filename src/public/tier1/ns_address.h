// Reconstructed from DWARF by pahole; not original source.

// src/public/tier1/ns_address.h:33
class CPeerToPeerAddress {
private:

	int m_steamChannel;  // +0x8
	CPeerToPeerAddress();
	void Clear();
	void SetSteamChannel(int);
	int GetSteamChannel();
	const CSteamID & GetSteamID();
	CPeerToPeerAddress(const CSteamID &, int);
	bool Unserialize(bf_read &);
	bool Serialize(bf_write &);
	CPeerToPeerAddress & operator=(const CSteamID &);
	CPeerToPeerAddress & SetFromSteamID(const CSteamID &, int);
	bool IsValid();
	const char * ToString();
	bool CompareAdr(const CPeerToPeerAddress &, bool);
	bool operator==(const CPeerToPeerAddress &);
	PeerToPeerAddressType_t GetAddressType();

	// sizeof = 16
};

// src/public/tier1/ns_address.h:248
struct ns_address {
	ns_address();
	~ns_address();
	void Clear();
	ns_address(const netadr_t &);
	ns_address & operator=(const netadr_t &);
	ns_address(const CPeerToPeerAddress &);
	ns_address & operator=(const CPeerToPeerAddress &);
	ns_address & SetFromSteamID(const CSteamID &, int);
	bool Unserialize(bf_read &);
	bool Serialize(bf_write &);
	bool IsLoopback();
	bool IsLocalhost();
	bool IsNull();
	bool IsValid();
	bool CompareAdr(const ns_address &, bool);
	bool operator==(const ns_address &);
	bool operator!=(const ns_address &);
	NetworkSystemAddressType_t GetAddressType();
	void SetAddrType(NetworkSystemAddressType_t);
	bool SetFromSockadr(const sockaddr *);
	unsigned int GetIP();
	short unsigned int GetPort();
	void SetFromString(const char *);

	// sizeof = 32
} __attribute__((__packed__));

// src/public/tier1/ns_address.h:634
class ns_address_render {
private:

	char m_buf[64];  // +0x0
	ns_address_render(const ns_address &);
	const char * String();

	// sizeof = 64
};
