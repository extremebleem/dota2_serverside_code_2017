// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/recipientfilter.h:23
class CRecipientFilter : public IRecipientFilter {
public:

private:

	bool m_bInitMessage;  // +0xc

	bool m_bUsingPredictionRules;  // +0x130
	bool m_bIgnorePredictionCull;  // +0x131
	CRecipientFilter(const CRecipientFilter &);

	CRecipientFilter();
	virtual ~CRecipientFilter();
	virtual NetChannelBufType_t GetNetworkBufType();
	virtual int GetRecipientCount();
	virtual CEntityIndex GetRecipientIndex(int);
	virtual bool IsInitMessage();
	void CopyFrom(const CRecipientFilter &);
	void Reset();
	void MakeInitMessage();
	void MakeReliable();
	void AddAllPlayers();
	void AddRecipientsByPVS(const Vector &);
	void RemoveRecipientsByPVS(const Vector &);
	void AddRecipientsByPAS(const Vector &);
	void AddRecipient(const CEntityInstance *);
	void AddRecipientByPlayerIndex(CEntityIndex);
	void AddRecipientsByTeamNumber(int);
	void RemoveAllRecipients();
	void RemoveRecipient(const CEntityInstance *);
	void RemoveRecipientByPlayerIndex(CEntityIndex);
	void AddRecipientsByTeam(CTeam *);
	void RemoveRecipientsByTeam(CTeam *);
	void RemoveRecipientsByTeamNumber(int);
	void RemoveRecipientsNotOnTeam(CTeam *);
	void RemoveRecipientsByInEyeState(const CEntityInstance *);
	void UsePredictionRules();
	bool IsUsingPredictionRules();
	bool IgnorePredictionCull();
	void SetIgnorePredictionCull(bool);
	void AddPlayersFromBitMask(CBitVec<64> &);
	void RemovePlayersFromBitMask(CBitVec<64> &);
	void RemoveSplitScreenPlayers();
	CRecipientFilter & operator=(const CRecipientFilter &);

	// vtable[0] Schema_DynamicBinding
	// vtable[3] GetNetworkBufType
	// vtable[5] GetRecipientCount
	// vtable[6] GetRecipientIndex
	// vtable[4] IsInitMessage
	// sizeof = 312
};

// src/game/shared/recipientfilter.h:85
class CSingleUserRecipientFilter : public CRecipientFilter {
public:

	CSingleUserRecipientFilter(CEntityInstance *);
	virtual ~CSingleUserRecipientFilter();

	// sizeof = 312
};

// src/game/shared/recipientfilter.h:97
class CTeamRecipientFilter : public CRecipientFilter {
public:

	CTeamRecipientFilter(CTeamRecipientFilter &);
	CTeamRecipientFilter(const CTeamRecipientFilter &);
	CTeamRecipientFilter(int, bool);
	virtual ~CTeamRecipientFilter();

	// sizeof = 312
};

// src/game/shared/recipientfilter.h:106
class CBroadcastRecipientFilter : public CRecipientFilter {
public:

	CBroadcastRecipientFilter(CBroadcastRecipientFilter &);
	CBroadcastRecipientFilter(const CBroadcastRecipientFilter &);
	CBroadcastRecipientFilter();
	virtual ~CBroadcastRecipientFilter();

	// sizeof = 312
};

// src/game/shared/recipientfilter.h:118
class CReliableBroadcastRecipientFilter : public CBroadcastRecipientFilter {
public:

	CReliableBroadcastRecipientFilter();
	virtual ~CReliableBroadcastRecipientFilter();

	// sizeof = 312
};

// src/game/shared/recipientfilter.h:130
class CPASFilter : public CRecipientFilter {
public:

	CPASFilter(CPASFilter &);
	CPASFilter(const CPASFilter &);
	CPASFilter();
	CPASFilter(const Vector &);
	virtual ~CPASFilter();

	// sizeof = 312
};

// src/game/shared/recipientfilter.h:149
class CPASAttenuationFilter : public CPASFilter {
public:

	CPASAttenuationFilter();
	CPASAttenuationFilter(CBaseEntity *, soundlevel_t);
	CPASAttenuationFilter(CBaseEntity *, float);
	CPASAttenuationFilter(const Vector &, soundlevel_t);
	CPASAttenuationFilter(const Vector &, float);
	CPASAttenuationFilter(CBaseEntity *, const char *);
	CPASAttenuationFilter(const Vector &, const char *);
	void Filter(const Vector &, float);
	virtual ~CPASAttenuationFilter();

	// sizeof = 312
};

// src/game/shared/recipientfilter.h:231
class CPVSFilter : public CRecipientFilter {
public:

	CPVSFilter(const Vector &);
	virtual ~CPVSFilter();

	// sizeof = 312
};

// src/game/shared/recipientfilter.h:243
class CSingleUserPlusObserversFilter : public CRecipientFilter {
public:

	CSingleUserPlusObserversFilter(CSingleUserPlusObserversFilter &);
	CSingleUserPlusObserversFilter(const CSingleUserPlusObserversFilter &);
	CSingleUserPlusObserversFilter(CBasePlayer *, bool);
	virtual ~CSingleUserPlusObserversFilter();

	// sizeof = 312
};
