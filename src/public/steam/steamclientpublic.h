// Reconstructed from DWARF by pahole; not original source.

// src/public/steam/steamclientpublic.h:530
class CSteamID {
	union SteamID_t {
		uint64 m_unAll64Bits;  // +0x0
	};

private:

	CSteamID();
	CSteamID(uint32, EUniverse, EAccountType);
	CSteamID(uint32, unsigned int, EUniverse, EAccountType);
	CSteamID(uint64);
	CSteamID(uint64_t);
	void Set(uint32, EUniverse, EAccountType);
	void InstancedSet(uint32, uint32, EUniverse, EAccountType);
	void FullSet(uint64, EUniverse, EAccountType);
	void SetFromUint64(uint64);
	void Clear();
	uint64 ConvertToUint64();
	uint64 GetStaticAccountKey();
	void CreateBlankAnonLogon(EUniverse);
	void CreateBlankAnonUserLogon(EUniverse);
	bool BBlankAnonAccount();
	bool BGameServerAccount();
	bool BPersistentGameServerAccount();
	bool BAnonGameServerAccount();
	bool BContentServerAccount();
	bool BClanAccount();
	bool BChatAccount();
	bool IsLobby();
	bool BIndividualAccount();
	bool BAnonAccount();
	bool BAnonUserAccount();
	bool BConsoleUserAccount();
	void SetAccountID(uint32);
	void SetAccountInstance(uint32);
	void ClearIndividualInstance();
	bool HasNoIndividualInstance();
	AccountID_t GetAccountID();
	uint32 GetUnAccountInstance();
	EAccountType GetEAccountType();
	EUniverse GetEUniverse();
	void SetEUniverse(EUniverse);
	bool IsValid();
	CSteamID(const char *, EUniverse);
	const char * Render();
	const char * Render(uint64);
	void SetFromString(const char *, EUniverse);
	bool SetFromStringStrict(const char *, EUniverse);
	bool SetFromSteam2String(const char *, EUniverse);
	bool operator==(const CSteamID &);
	bool operator!=(const CSteamID &);
	bool operator<(const CSteamID &);
	bool operator>(const CSteamID &);
	bool BValidExternalSteamID();
	CSteamID(uint32);
	CSteamID(int32);

	// sizeof = 8
};
