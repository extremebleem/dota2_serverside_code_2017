// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_sockets.h:45
class CAttribute_Socket {
private:

	CAttribute_Socket();
	~CAttribute_Socket();
	CAttribute_Socket & operator=(const CAttribute_Socket &);
	void ParseFromString(const string &);
	void ConvertToString(string *);
	void ParseFromByteStream(const string &);
	void ConvertToByteStream(string *);
	IItemSocket * ItemSocketFactory(item_definition_index_t);
	void InitEmpty();
	IItemSocket * CopyItemSocket();
	IItemSocket * GetItemSocket();
	void SetItemSocket(IItemSocket *);
	CAttribute_Socket(const CAttribute_Socket &);

	// sizeof = 8
};

// src/game/shared/econ/econ_item_sockets.h:295
class CItemSocket_Empty : public TItemSocket<CProtoItemSocket_Empty> {
public:

	CItemSocket_Empty(CItemSocket_Empty &);
	CItemSocket_Empty(const CItemSocket_Empty &);
	CItemSocket_Empty();
	virtual void GetString(CUtlConstStringBase<wchar_t> &, const char *, CLocalizationProvider *);
	virtual const char * LocKey();
	virtual bool IsEmpty();
	virtual ~CItemSocket_Empty();

	// vtable[28] GetString
	// vtable[23] LocKey
	// vtable[11] IsEmpty
	// sizeof = 40
};

// src/game/shared/econ/econ_item_sockets.h:324
class CItemSocket_Strange : public TItemSocket<CProtoItemSocket_Strange> {
public:

	CItemSocket_Strange(CItemSocket_Strange &);
	CItemSocket_Strange(const CItemSocket_Strange &);
	CItemSocket_Strange();
	virtual void GetString(CUtlConstStringBase<wchar_t> &, const char *, CLocalizationProvider *);
	virtual const char * LocKey();
	uint32 GetStrangeType();
	uint32 GetStrangeValue();
	void SetStrangeValue(uint32);
	virtual ~CItemSocket_Strange();

	// vtable[28] GetString
	// vtable[23] LocKey
	// sizeof = 48
};

// src/game/shared/econ/econ_item_sockets.h:356
class CItemSocket_Spectator : public TItemSocket<CProtoItemSocket_Spectator> {
public:

	CItemSocket_Spectator(CItemSocket_Spectator &);
	CItemSocket_Spectator(const CItemSocket_Spectator &);
	CItemSocket_Spectator();
	virtual void GetItemType(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetString(CUtlConstStringBase<wchar_t> &, const char *, CLocalizationProvider *);
	virtual const char * LocKey();
	uint32 GetGamesViewed();
	uint32 GetCorporationID();
	uint32 GetLeagueID();
	uint32 GetTeamID();
	EItemPartnerType GetPartnerType();
	uint32 GetPartnerID(EItemPartnerType);
	void SetGamesViewed(uint32);
	virtual ~CItemSocket_Spectator();

	// vtable[9] GetItemType
	// vtable[28] GetString
	// vtable[23] LocKey
	// sizeof = 56
};

// src/game/shared/econ/econ_item_sockets.h:421
class CItemSocket_AssetModifier : public TItemSocket<CProtoItemSocket_AssetModifier> {
public:

	CItemSocket_AssetModifier(CItemSocket_AssetModifier &);
	CItemSocket_AssetModifier(const CItemSocket_AssetModifier &);
	CItemSocket_AssetModifier();
	virtual void GetString(CUtlConstStringBase<wchar_t> &, const char *, CLocalizationProvider *);
	virtual const char * LocKey();
	const AssetModifier_t * GetAssetModifier();
	virtual void ParseFromString(const string &);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CItemSocket_AssetModifier();

	// vtable[28] GetString
	// vtable[23] LocKey
	// vtable[3] ParseFromString
	// vtable[26] Precache
	// sizeof = 48
};

// src/game/shared/econ/econ_item_sockets.h:468
class CItemSocket_Effect : public TItemSocket<CProtoItemSocket_Effect> {
public:

	CItemSocket_Effect(CItemSocket_Effect &);
	CItemSocket_Effect(const CItemSocket_Effect &);
	CItemSocket_Effect();
	virtual void GetString(CUtlConstStringBase<wchar_t> &, const char *, CLocalizationProvider *);
	virtual const char * LocKey();
	int GetEffect();
	void SetEffect(uint32);
	const attachedparticlesystem_t * GetAttributeControlledParticleSystem();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CItemSocket_Effect();

	// vtable[28] GetString
	// vtable[23] LocKey
	// vtable[26] Precache
	// sizeof = 48
};

// src/game/shared/econ/econ_item_sockets.h:499
class CItemSocket_Color : public TItemSocket<CProtoItemSocket_Color> {
public:

	CItemSocket_Color(CItemSocket_Color &);
	CItemSocket_Color(const CItemSocket_Color &);
	CItemSocket_Color();
	virtual void GetName(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetDescription(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetString(CUtlConstStringBase<wchar_t> &, const char *, CLocalizationProvider *);
	virtual const char * LocKey();
	Color GetColor();
	virtual ~CItemSocket_Color();

	// vtable[7] GetName
	// vtable[8] GetDescription
	// vtable[28] GetString
	// vtable[23] LocKey
	// sizeof = 56
};

// src/game/shared/econ/econ_item_sockets.h:541
class CItemSocket_Autograph : public TItemSocket<CProtoItemSocket_Autograph> {
public:

	CItemSocket_Autograph(CItemSocket_Autograph &);
	CItemSocket_Autograph(const CItemSocket_Autograph &);
	CItemSocket_Autograph();
	virtual void GetString(CUtlConstStringBase<wchar_t> &, const char *, CLocalizationProvider *);
	virtual const char * LocKey();
	virtual EEconItemQuality GetQuality();
	uint32 GetAutographID();
	uint32 GetAutographScore();
	uint32 GetLanguage();
	virtual ~CItemSocket_Autograph();

	// vtable[28] GetString
	// vtable[23] LocKey
	// vtable[25] GetQuality
	// sizeof = 56
};

// src/game/shared/econ/econ_item_sockets.h:609
class CSocketIterator : public CEconItemSpecificAttributeIterator {
	class CSocketPair {
		const CAttribute_Socket * m_pAttribute;  // +0x0
		const CEconItemAttributeDefinition * m_pAttributeDefinition;  // +0x8
		CSocketPair();

		// sizeof = 16
	};

public:

protected:

	int m_nSocketCount;  // +0xa8
	int m_nGemCount;  // +0xac
	uint32 m_unAttribStorageTypeFlags;  // +0xb0
	CSocketIterator(CSocketIterator &);
	CSocketIterator(const CSocketIterator &);
	CSocketIterator(uint32);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	int GetSocketCount();
	bool HasSockets();
	int GetGemCount();
	bool HasGems();
	IItemSocket * GetSocket(int);
	const CAttribute_Socket * GetSocketAttribute(int);
	const CEconItemAttributeDefinition * GetSocketAttributeDefinition(int);
	IItemSocket * GetSocketByAttributeDef(attrib_definition_index_t);
	virtual ~CSocketIterator();

	// vtable[7] OnIterateAttributeValue
	// sizeof = 184
};
