// Reconstructed from DWARF by pahole; not original source.

// src/common/netmessages.h:143
class CNETMsg_SetConVar_t : public CNetMessagePB<6, CNETMsg_SetConVar, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> {
public:

	CNETMsg_SetConVar_t();
	CNETMsg_SetConVar_t(const char *, const char *);
	void AddToTail(const char *, const char *);
	void ChangeOrAddValue(const char *, const char *);
	virtual ~CNETMsg_SetConVar_t();

	// sizeof = 32
};

// src/common/netmessages.h:173
class CNETMsg_StringCmd_t : public CNetMessagePB<5, CNETMsg_StringCmd, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> {
public:

	CNETMsg_StringCmd_t(const char *);
	virtual ~CNETMsg_StringCmd_t();

	// sizeof = 32
};

// src/common/netmessages.h:179
class CNETMsg_Tick_t : public CNetMessagePB<4, CNETMsg_Tick, (SignonGroup_t)3u, (NetChannelBufType_t)0, false> {
public:

	float FrametimeToFloat(int);
	CNETMsg_Tick_t(int, float, float, float);
	virtual ~CNETMsg_Tick_t();

	// sizeof = 48
};

// src/common/netmessages.h:193
class CNETMsg_SignonState_t : public CNetMessagePB<7, CNETMsg_SignonState, (SignonGroup_t)10u, (NetChannelBufType_t)1, false> {
public:

	CNETMsg_SignonState_t(int, int);
	virtual ~CNETMsg_SignonState_t();

	// sizeof = 80
};

// src/common/netmessages.h:204
class CNETMsg_SpawnGroup_Load_t : public CNetMessagePB<8, CNETMsg_SpawnGroup_Load, (SignonGroup_t)15u, (NetChannelBufType_t)1, false> {
public:

	CNETMsg_SpawnGroup_Load_t();
	void Init(int, const char *, const char *, const char *, const char *, const char *, SpawnGroupHandle_t, const matrix3x4a_t &, uint32, SpawnGroupHandle_t, int, WorldGroupId_t, int);
	void GetVecOffset(matrix3x4a_t &);
	virtual ~CNETMsg_SpawnGroup_Load_t();

	// sizeof = 136
};

// src/common/netmessages.h:254
class CNETMsg_SpawnGroup_ManifestUpdate_t : public CNetMessagePB<9, CNETMsg_SpawnGroup_ManifestUpdate, (SignonGroup_t)15u, (NetChannelBufType_t)1, false> {
public:

	CNETMsg_SpawnGroup_ManifestUpdate_t(SpawnGroupHandle_t);
	virtual ~CNETMsg_SpawnGroup_ManifestUpdate_t();

	// sizeof = 40
};

// src/common/netmessages.h:263
class CNETMsg_SpawnGroup_SetCreationTick_t : public CNetMessagePB<11, CNETMsg_SpawnGroup_SetCreationTick, (SignonGroup_t)15u, (NetChannelBufType_t)1, false> {
public:

	CNETMsg_SpawnGroup_SetCreationTick_t(int, SpawnGroupHandle_t, int);
	virtual ~CNETMsg_SpawnGroup_SetCreationTick_t();

	// sizeof = 40
};

// src/common/netmessages.h:274
class CNETMsg_SpawnGroup_Unload_t : public CNetMessagePB<12, CNETMsg_SpawnGroup_Unload, (SignonGroup_t)15u, (NetChannelBufType_t)1, false> {
public:

	CNETMsg_SpawnGroup_Unload_t(int, SpawnGroupHandle_t, uint32);
	virtual ~CNETMsg_SpawnGroup_Unload_t();

	// sizeof = 40
};

// src/common/netmessages.h:285
class CNETMsg_SpawnGroup_LoadCompleted_t : public CNetMessagePB<13, CNETMsg_SpawnGroup_LoadCompleted, (SignonGroup_t)15u, (NetChannelBufType_t)1, false> {
public:

	CNETMsg_SpawnGroup_LoadCompleted_t(SpawnGroupHandle_t);
	virtual ~CNETMsg_SpawnGroup_LoadCompleted_t();

	// sizeof = 32
};

// src/common/netmessages.h:312
class CCLCMsg_FileCRCCheck_t : public CNetMessagePB<26, CCLCMsg_FileCRCCheck, (SignonGroup_t)10u, (NetChannelBufType_t)1, false> {
public:

	CCLCMsg_FileCRCCheck_t(const char *, const char *, CRC32_t);
	virtual ~CCLCMsg_FileCRCCheck_t();

	// sizeof = 56
};

// src/common/netmessages.h:325
class CCLCMsg_CmdKeyValues_t : public CNetMessagePB<34, CBaseCmdKeyValues<CCLCMsg_CmdKeyValues>, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> {
public:

	CCLCMsg_CmdKeyValues_t(KeyValues *);
	virtual ~CCLCMsg_CmdKeyValues_t();

	// sizeof = 40
};

// src/common/netmessages.h:339
class CSVCMsg_FlattenedSerializerWrapper : public CSVCMsg_FlattenedSerializer {
public:

private:

	CRC32_t m_cachedCRC;  // +0x60
	CSVCMsg_FlattenedSerializerWrapper(CSVCMsg_FlattenedSerializerWrapper &);
	CSVCMsg_FlattenedSerializerWrapper(const CSVCMsg_FlattenedSerializerWrapper &);
	CSVCMsg_FlattenedSerializerWrapper();
	const CRC32_t & GetCRC(bool);
	virtual ~CSVCMsg_FlattenedSerializerWrapper();

	// sizeof = 104
};

// src/common/netmessages.h:465
class CSVCMsg_CmdKeyValues_t : public CNetMessagePB<52, CBaseCmdKeyValues<CSVCMsg_CmdKeyValues>, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> {
public:

	CSVCMsg_CmdKeyValues_t(KeyValues *);
	virtual ~CSVCMsg_CmdKeyValues_t();

	// sizeof = 40
};

// src/common/netmessages.h:478
class CSVCMsg_HLTVStatus_t : public CNetMessagePB<62, CSVCMsg_HLTVStatus, (SignonGroup_t)0u, (NetChannelBufType_t)1, true> {
public:

	CSVCMsg_HLTVStatus_t(CSVCMsg_HLTVStatus_t &);
	CSVCMsg_HLTVStatus_t(const CSVCMsg_HLTVStatus_t &);
	CSVCMsg_HLTVStatus_t();
	virtual ~CSVCMsg_HLTVStatus_t();

	// sizeof = 48
};
