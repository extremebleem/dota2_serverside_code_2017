// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_sockets.h:89
class TItemSocket<CProtoItemSocket_Autograph> : public IItemSocket {
public:

	static ESocketType m_eSocketType;
protected:

	TItemSocket(TItemSocket<CProtoItemSocket_Autograph> &);
	TItemSocket(const TItemSocket<CProtoItemSocket_Autograph> &);
	TItemSocket();
	virtual IItemSocket * CopyItemSocket();
	virtual void ParseFromString(const string &);
	virtual void ConvertToString(string *);
	virtual void ParseFromByteStream(const string &);
	virtual void ConvertToByteStream(string *);
	virtual void GetImage(CUtlConstString &, CUtlConstString &);
	virtual ESocketType GetRequiredType();
	virtual void SetRequiredType(ESocketType);
	virtual uint32 GetRequiredHeroID();
	virtual void SetRequiredHeroID(uint32);
	virtual int GetRequiredItemLoadoutSlot();
	virtual void SetRequiredItemLoadoutSlot(int);
	virtual bool IsTradable();
	virtual void SetTradable(bool);
	virtual ESocketType GetSocketType();
	virtual bool IsEmpty();
	virtual item_definition_index_t GetGemDefIndex();
	virtual void SetGemDefIndex(item_definition_index_t);
	virtual void GetItemType(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetName(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetDescription(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetString(CUtlConstStringBase<wchar_t> &, const char *, CLocalizationProvider *);
	virtual uint32 GetFieldUInt32(const char *);
	virtual EEconItemQuality GetQuality();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool HasUnremovableGem();
	virtual ~TItemSocket();

	// vtable[2] CopyItemSocket
	// vtable[3] ParseFromString
	// vtable[4] ConvertToString
	// vtable[5] ParseFromByteStream
	// vtable[6] ConvertToByteStream
	// vtable[10] GetImage
	// vtable[12] GetRequiredType
	// vtable[13] SetRequiredType
	// vtable[14] GetRequiredHeroID
	// vtable[15] SetRequiredHeroID
	// vtable[16] GetRequiredItemLoadoutSlot
	// vtable[17] SetRequiredItemLoadoutSlot
	// vtable[18] IsTradable
	// vtable[19] SetTradable
	// vtable[20] GetSocketType
	// vtable[11] IsEmpty
	// vtable[21] GetGemDefIndex
	// vtable[22] SetGemDefIndex
	// vtable[9] GetItemType
	// vtable[7] GetName
	// vtable[8] GetDescription
	// vtable[28] GetString
	// vtable[24] GetFieldUInt32
	// vtable[25] GetQuality
	// vtable[26] Precache
	// vtable[27] HasUnremovableGem
	// sizeof = 56
};

// src/game/shared/econ/econ_item_sockets.h:89
class TItemSocket<CProtoItemSocket_AssetModifier> : public IItemSocket {
public:

	static ESocketType m_eSocketType;
protected:

	TItemSocket(TItemSocket<CProtoItemSocket_AssetModifier> &);
	TItemSocket(const TItemSocket<CProtoItemSocket_AssetModifier> &);
	TItemSocket();
	virtual IItemSocket * CopyItemSocket();
	virtual void ParseFromString(const string &);
	virtual void ConvertToString(string *);
	virtual void ParseFromByteStream(const string &);
	virtual void ConvertToByteStream(string *);
	virtual void GetImage(CUtlConstString &, CUtlConstString &);
	virtual ESocketType GetRequiredType();
	virtual void SetRequiredType(ESocketType);
	virtual uint32 GetRequiredHeroID();
	virtual void SetRequiredHeroID(uint32);
	virtual int GetRequiredItemLoadoutSlot();
	virtual void SetRequiredItemLoadoutSlot(int);
	virtual bool IsTradable();
	virtual void SetTradable(bool);
	virtual ESocketType GetSocketType();
	virtual bool IsEmpty();
	virtual item_definition_index_t GetGemDefIndex();
	virtual void SetGemDefIndex(item_definition_index_t);
	virtual void GetItemType(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetName(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetDescription(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetString(CUtlConstStringBase<wchar_t> &, const char *, CLocalizationProvider *);
	virtual uint32 GetFieldUInt32(const char *);
	virtual EEconItemQuality GetQuality();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool HasUnremovableGem();
	virtual ~TItemSocket();

	// vtable[2] CopyItemSocket
	// vtable[3] ParseFromString
	// vtable[4] ConvertToString
	// vtable[5] ParseFromByteStream
	// vtable[6] ConvertToByteStream
	// vtable[10] GetImage
	// vtable[12] GetRequiredType
	// vtable[13] SetRequiredType
	// vtable[14] GetRequiredHeroID
	// vtable[15] SetRequiredHeroID
	// vtable[16] GetRequiredItemLoadoutSlot
	// vtable[17] SetRequiredItemLoadoutSlot
	// vtable[18] IsTradable
	// vtable[19] SetTradable
	// vtable[20] GetSocketType
	// vtable[11] IsEmpty
	// vtable[21] GetGemDefIndex
	// vtable[22] SetGemDefIndex
	// vtable[9] GetItemType
	// vtable[7] GetName
	// vtable[8] GetDescription
	// vtable[28] GetString
	// vtable[24] GetFieldUInt32
	// vtable[25] GetQuality
	// vtable[26] Precache
	// vtable[27] HasUnremovableGem
	// sizeof = 48
};

// src/game/shared/econ/econ_item_sockets.h:89
class TItemSocket<CProtoItemSocket_Spectator> : public IItemSocket {
public:

	static ESocketType m_eSocketType;
protected:

	TItemSocket(TItemSocket<CProtoItemSocket_Spectator> &);
	TItemSocket(const TItemSocket<CProtoItemSocket_Spectator> &);
	TItemSocket();
	virtual IItemSocket * CopyItemSocket();
	virtual void ParseFromString(const string &);
	virtual void ConvertToString(string *);
	virtual void ParseFromByteStream(const string &);
	virtual void ConvertToByteStream(string *);
	virtual void GetImage(CUtlConstString &, CUtlConstString &);
	virtual ESocketType GetRequiredType();
	virtual void SetRequiredType(ESocketType);
	virtual uint32 GetRequiredHeroID();
	virtual void SetRequiredHeroID(uint32);
	virtual int GetRequiredItemLoadoutSlot();
	virtual void SetRequiredItemLoadoutSlot(int);
	virtual bool IsTradable();
	virtual void SetTradable(bool);
	virtual ESocketType GetSocketType();
	virtual bool IsEmpty();
	virtual item_definition_index_t GetGemDefIndex();
	virtual void SetGemDefIndex(item_definition_index_t);
	virtual void GetItemType(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetName(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetDescription(CUtlConstStringBase<wchar_t> &, CLocalizationProvider *);
	virtual void GetString(CUtlConstStringBase<wchar_t> &, const char *, CLocalizationProvider *);
	virtual uint32 GetFieldUInt32(const char *);
	virtual EEconItemQuality GetQuality();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool HasUnremovableGem();
	virtual ~TItemSocket();

	// vtable[2] CopyItemSocket
	// vtable[3] ParseFromString
	// vtable[4] ConvertToString
	// vtable[5] ParseFromByteStream
	// vtable[6] ConvertToByteStream
	// vtable[10] GetImage
	// vtable[12] GetRequiredType
	// vtable[13] SetRequiredType
	// vtable[14] GetRequiredHeroID
	// vtable[15] SetRequiredHeroID
	// vtable[16] GetRequiredItemLoadoutSlot
	// vtable[17] SetRequiredItemLoadoutSlot
	// vtable[18] IsTradable
	// vtable[19] SetTradable
	// vtable[20] GetSocketType
	// vtable[11] IsEmpty
	// vtable[21] GetGemDefIndex
	// vtable[22] SetGemDefIndex
	// vtable[9] GetItemType
	// vtable[7] GetName
	// vtable[8] GetDescription
	// vtable[28] GetString
	// vtable[24] GetFieldUInt32
	// vtable[25] GetQuality
	// vtable[26] Precache
	// vtable[27] HasUnremovableGem
	// sizeof = 56
};

// src/game/shared/econ/econ_item_sockets.h:655
class TSocketIterator<CItemSocket_Color> : public CSocketIterator {
public:

	TSocketIterator(TSocketIterator<CItemSocket_Color> &);
	TSocketIterator(const TSocketIterator<CItemSocket_Color> &);
	TSocketIterator(uint32);
	CItemSocket_Color * GetSocket(int);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	virtual ~TSocketIterator();

	// vtable[7] OnIterateAttributeValue
	// sizeof = 184
};

// src/game/shared/econ/econ_item_sockets.h:655
class TSocketIterator<CItemSocket_Strange> : public CSocketIterator {
public:

	TSocketIterator(TSocketIterator<CItemSocket_Strange> &);
	TSocketIterator(const TSocketIterator<CItemSocket_Strange> &);
	TSocketIterator(uint32);
	CItemSocket_Strange * GetSocket(int);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	virtual ~TSocketIterator();

	// vtable[7] OnIterateAttributeValue
	// sizeof = 184
};

// src/game/shared/econ/econ_item_sockets.h:655
class TSocketIterator<CItemSocket_Spectator> : public CSocketIterator {
public:

	TSocketIterator(TSocketIterator<CItemSocket_Spectator> &);
	TSocketIterator(const TSocketIterator<CItemSocket_Spectator> &);
	TSocketIterator(uint32);
	CItemSocket_Spectator * GetSocket(int);
	virtual bool OnIterateAttributeValue(const CEconItemAttributeDefinition *, const CAttribute_Socket &);
	virtual ~TSocketIterator();

	// vtable[7] OnIterateAttributeValue
	// sizeof = 184
};

// TItemSocket: 4 more instantiations (full list in INDEX.tsv)
//   TItemSocket<CProtoItemSocket_Strange>
//   TItemSocket<CProtoItemSocket_Color>
//   TItemSocket<CProtoItemSocket_Effect>
//   TItemSocket<CProtoItemSocket_Empty>

// TSocketIterator: 2 more instantiations (full list in INDEX.tsv)
//   TSocketIterator<CItemSocket_Effect>
//   TSocketIterator<CItemSocket_AssetModifier>
