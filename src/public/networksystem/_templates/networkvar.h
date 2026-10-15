// Reconstructed from DWARF by pahole; not original source.

// src/public/networksystem/networkvar.h:371
class CNetworkVarBase<int, CEntityIdentity::NetworkVar_m_nameStringableIndex> {
	int m_Value;  // +0x0
	CNetworkVarBase();
	CNetworkVarBase(int);
	const int & operator=(const CNetworkVarBase<int, CEntityIdentity::NetworkVar_m_nameStringableIndex> &);
	const int & SetDirect(const int &);
	const int & Set(const int &);
	int & GetForModify();
	const int & operator++();
	int operator--();
	int operator++(int);
	int operator--(int);
	const int & operator int const&();
	const int & Get();
	const int * operator->();
	bool operator==(const CNetworkVarBase<int, CEntityIdentity::NetworkVar_m_nameStringableIndex> &);
	bool operator!=(const CNetworkVarBase<int, CEntityIdentity::NetworkVar_m_nameStringableIndex> &);
	void NetworkStateChanged(int32, ChangeAccessorFieldPathIndex_t);

	// sizeof = 4
};

// src/public/networksystem/networkvar.h:371
class CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> {
	CNetworkVarBase(CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *);
	CNetworkVarBase(CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *, CStrongHandle<InfoForResourceTypeCModel>);
	const CStrongHandle<InfoForResourceTypeCModel> & operator=(CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *, const CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> &);
	const CStrongHandle<InfoForResourceTypeCModel> & SetDirect(CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *, const CStrongHandle<InfoForResourceTypeCModel> &);
	const CStrongHandle<InfoForResourceTypeCModel> & Set(CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *, const CStrongHandle<InfoForResourceTypeCModel> &);
	CStrongHandle<InfoForResourceTypeCModel> & GetForModify(CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *);
	const CStrongHandle<InfoForResourceTypeCModel> & operator++(CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *);
	CStrongHandle<InfoForResourceTypeCModel> operator--(CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *);
	CStrongHandle<InfoForResourceTypeCModel> operator++(CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *, int);
	CStrongHandle<InfoForResourceTypeCModel> operator--(CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *, int);
	const CStrongHandle<InfoForResourceTypeCModel> & operator const CStrongHandle<InfoForResourceTypeCModel>&(const CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *);
	const CStrongHandle<InfoForResourceTypeCModel> & Get(const CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *);
	const CStrongHandle<InfoForResourceTypeCModel> * operator->(const CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *);
	bool operator==(const CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *, const CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> &);
	bool operator!=(const CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *, const CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> &);
	void NetworkStateChanged(CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> *, int32, ChangeAccessorFieldPathIndex_t);

	// sizeof = 8
};

// src/public/networksystem/networkvar.h:371
class CNetworkVarBase<float, IntervalTimer::NetworkVar_m_timestamp> {
	float m_Value;  // +0x0
	CNetworkVarBase();
	CNetworkVarBase(float);
	const float & operator=(const CNetworkVarBase<float, IntervalTimer::NetworkVar_m_timestamp> &);
	const float & SetDirect(const float &);
	const float & Set(const float &);
	float & GetForModify();
	const float & operator++();
	float operator--();
	float operator++(int);
	float operator--(int);
	const float & operator float const&();
	const float & Get();
	const float * operator->();
	bool operator==(const CNetworkVarBase<float, IntervalTimer::NetworkVar_m_timestamp> &);
	bool operator!=(const CNetworkVarBase<float, IntervalTimer::NetworkVar_m_timestamp> &);
	void NetworkStateChanged(int32, ChangeAccessorFieldPathIndex_t);
	bool operator><float>(const float &);
	const float & operator=<float>(const float &);

	// sizeof = 4
};

// src/public/networksystem/networkvar.h:565
class CSchemaTypeOf<CNetworkVarBase<int, CDevtestHierarchy::NetworkVar_m_nTestMode> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/networksystem/networkvar.h:565
class CSchemaTypeOf<CNetworkVarBase<CUtlStringToken, CDevtestHierarchy::NetworkVar_m_attachName> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/networksystem/networkvar.h:565
class CSchemaTypeOf<CNetworkVarBase<int, CDevtestHierarchy::NetworkVar_m_nDynamicResetCount> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/networksystem/networkvar.h:568
class CNetworkColorBase<Color, CLightComponent::NetworkVar_m_Color> : public CNetworkVarBase<Color, CLightComponent::NetworkVar_m_Color> {
public:

	CNetworkColorBase();
	CNetworkColorBase(uint8, uint8, uint8);
	CNetworkColorBase(uint8, uint8, uint8, uint8);
	CNetworkColorBase(const Color &);
	void Init(uint8, uint8, uint8);
	void Init(uint8, uint8, uint8, uint8);
	const Color & operator=(const Color &);
	const Color & operator=(const CNetworkColorBase<Color, CLightComponent::NetworkVar_m_Color> &);
	uint8 r();
	uint8 g();
	uint8 b();
	uint8 a();
	void SetRed(uint8);
	void SetGreen(uint8);
	void SetBlue(uint8);
	void SetAlpha(uint8);
	void SetColor(int, int, int, int);
	void SetComponent(int, uint8);
	bool operator==(const CNetworkColorBase<Color, CLightComponent::NetworkVar_m_Color> &);
	bool operator!=(const CNetworkColorBase<Color, CLightComponent::NetworkVar_m_Color> &);

protected:

	void SetVal(uint8 &, const uint8 &);

	// sizeof = 4
};

// src/public/networksystem/networkvar.h:568
class CNetworkColorBase<Color, fogparams_t::NetworkVar_colorPrimary> : public CNetworkVarBase<Color, fogparams_t::NetworkVar_colorPrimary> {
public:

	CNetworkColorBase();
	CNetworkColorBase(uint8, uint8, uint8);
	CNetworkColorBase(uint8, uint8, uint8, uint8);
	CNetworkColorBase(const Color &);
	void Init(uint8, uint8, uint8);
	void Init(uint8, uint8, uint8, uint8);
	const Color & operator=(const Color &);
	const Color & operator=(const CNetworkColorBase<Color, fogparams_t::NetworkVar_colorPrimary> &);
	uint8 r();
	uint8 g();
	uint8 b();
	uint8 a();
	void SetRed(uint8);
	void SetGreen(uint8);
	void SetBlue(uint8);
	void SetAlpha(uint8);
	void SetColor(int, int, int, int);
	void SetComponent(int, uint8);
	bool operator==(const CNetworkColorBase<Color, fogparams_t::NetworkVar_colorPrimary> &);
	bool operator!=(const CNetworkColorBase<Color, fogparams_t::NetworkVar_colorPrimary> &);

protected:

	void SetVal(uint8 &, const uint8 &);

	// sizeof = 4
};

// src/public/networksystem/networkvar.h:568
class CNetworkColorBase<Color, fogparams_t::NetworkVar_colorSecondary> : public CNetworkVarBase<Color, fogparams_t::NetworkVar_colorSecondary> {
public:

	CNetworkColorBase();
	CNetworkColorBase(uint8, uint8, uint8);
	CNetworkColorBase(uint8, uint8, uint8, uint8);
	CNetworkColorBase(const Color &);
	void Init(uint8, uint8, uint8);
	void Init(uint8, uint8, uint8, uint8);
	const Color & operator=(const Color &);
	const Color & operator=(const CNetworkColorBase<Color, fogparams_t::NetworkVar_colorSecondary> &);
	uint8 r();
	uint8 g();
	uint8 b();
	uint8 a();
	void SetRed(uint8);
	void SetGreen(uint8);
	void SetBlue(uint8);
	void SetAlpha(uint8);
	void SetColor(int, int, int, int);
	void SetComponent(int, uint8);
	bool operator==(const CNetworkColorBase<Color, fogparams_t::NetworkVar_colorSecondary> &);
	bool operator!=(const CNetworkColorBase<Color, fogparams_t::NetworkVar_colorSecondary> &);

protected:

	void SetVal(uint8 &, const uint8 &);

	// sizeof = 4
};

// src/public/networksystem/networkvar.h:665
class CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vecMins> : public CNetworkVarBase<Vector, CCollisionProperty::NetworkVar_m_vecMins> {
public:

	CNetworkVectorBase();
	CNetworkVectorBase(float, float, float);
	CNetworkVectorBase(const Vector &);
	void Init(float, float, float);
	const Vector & operator=(const Vector &);
	const Vector & operator=(const CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vecMins> &);
	float GetX();
	float GetY();
	float GetZ();
	float operator[](int);
	void SetX(float);
	void SetY(float);
	void SetZ(float);
	void Set(int, float);
	bool operator==(const Vector &);
	bool operator!=(const Vector &);
	const Vector operator+(const Vector &);
	const Vector operator-(const Vector &);
	const Vector operator*(const Vector &);
	const Vector & operator*=(float);
	const Vector operator*(float);
	const Vector operator/(const Vector &);

private:

	void DetectChange(float &, float);

	// sizeof = 12
};

// src/public/networksystem/networkvar.h:665
class CNetworkVectorBase<Vector, CDOTA_TempTree::NetworkVar_m_vecTreeCircleCenter> : public CNetworkVarBase<Vector, CDOTA_TempTree::NetworkVar_m_vecTreeCircleCenter> {
public:

	CNetworkVectorBase();
	CNetworkVectorBase(float, float, float);
	CNetworkVectorBase(const Vector &);
	void Init(float, float, float);
	const Vector & operator=(const Vector &);
	const Vector & operator=(const CNetworkVectorBase<Vector, CDOTA_TempTree::NetworkVar_m_vecTreeCircleCenter> &);
	float GetX();
	float GetY();
	float GetZ();
	float operator[](int);
	void SetX(float);
	void SetY(float);
	void SetZ(float);
	void Set(int, float);
	bool operator==(const Vector &);
	bool operator!=(const Vector &);
	const Vector operator+(const Vector &);
	const Vector operator-(const Vector &);
	const Vector operator*(const Vector &);
	const Vector & operator*=(float);
	const Vector operator*(float);
	const Vector operator/(const Vector &);

private:

	void DetectChange(float &, float);

	// sizeof = 12
};

// src/public/networksystem/networkvar.h:665
class CNetworkVectorBase<Vector, CDevtestHierarchy::NetworkVar_m_vDynamicAttachOffset> : public CNetworkVarBase<Vector, CDevtestHierarchy::NetworkVar_m_vDynamicAttachOffset> {
public:

	CNetworkVectorBase();
	CNetworkVectorBase(float, float, float);
	CNetworkVectorBase(const Vector &);
	void Init(float, float, float);
	const Vector & operator=(const Vector &);
	const Vector & operator=(const CNetworkVectorBase<Vector, CDevtestHierarchy::NetworkVar_m_vDynamicAttachOffset> &);
	float GetX();
	float GetY();
	float GetZ();
	float operator[](int);
	void SetX(float);
	void SetY(float);
	void SetZ(float);
	void Set(int, float);
	bool operator==(const Vector &);
	bool operator!=(const Vector &);
	const Vector operator+(const Vector &);
	const Vector operator-(const Vector &);
	const Vector operator*(const Vector &);
	const Vector & operator*=(float);
	const Vector operator*(float);
	const Vector operator/(const Vector &);

private:

	void DetectChange(float &, float);

	// sizeof = 12
};

// src/public/networksystem/networkvar.h:863
class CNetworkHandleBase<CBaseEntity, CBaseEntity::NetworkVar_m_hOwnerEntity> : public CNetworkVarBase<CEntityHandle, CBaseEntity::NetworkVar_m_hOwnerEntity> {
public:

	CNetworkHandleBase();
	const CBaseEntity * operator=(const CBaseEntity *);
	const CBaseEntity & operator=(const CNetworkHandleBase<CBaseEntity, CBaseEntity::NetworkVar_m_hOwnerEntity> &);
	bool operator!();
	CBaseEntity * operator CBaseEntity*();
	const CBaseEntity * Set(const CBaseEntity *);
	CBaseEntity * Get();
	CBaseEntity * operator->();
	bool operator==(const CBaseEntity *);
	bool operator!=(const CBaseEntity *);
	int GetEntryIndex();
	int GetSerialNumber();

	// sizeof = 4
};

// src/public/networksystem/networkvar.h:863
class CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hUseEntity> : public CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hUseEntity> {
public:

	CNetworkHandleBase();
	const CBaseEntity * operator=(const CBaseEntity *);
	const CBaseEntity & operator=(const CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hUseEntity> &);
	bool operator!();
	CBaseEntity * operator CBaseEntity*();
	const CBaseEntity * Set(const CBaseEntity *);
	CBaseEntity * Get();
	CBaseEntity * operator->();
	bool operator==(const CBaseEntity *);
	bool operator!=(const CBaseEntity *);
	int GetEntryIndex();
	int GetSerialNumber();

	// sizeof = 4
};

// src/public/networksystem/networkvar.h:863
class CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hVehicle> : public CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hVehicle> {
public:

	CNetworkHandleBase();
	const CBaseEntity * operator=(const CBaseEntity *);
	const CBaseEntity & operator=(const CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hVehicle> &);
	bool operator!();
	CBaseEntity * operator CBaseEntity*();
	const CBaseEntity * Set(const CBaseEntity *);
	CBaseEntity * Get();
	CBaseEntity * operator->();
	bool operator==(const CBaseEntity *);
	bool operator!=(const CBaseEntity *);
	int GetEntryIndex();
	int GetSerialNumber();

	// sizeof = 4
};

// src/public/networksystem/networkvar.h:949
class CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> : public CUtlMemoryFixed<CDOTA_PlayerChallengeInfo, 24ul> {
public:

	CNetworkUtlVector_MemoryType(int, int);
	CNetworkUtlVector_MemoryType(CDOTA_PlayerChallengeInfo *, int);
	CNetworkUtlVector_MemoryType(const CDOTA_PlayerChallengeInfo *, int);
	~CNetworkUtlVector_MemoryType();

	// sizeof = 1920
};

// src/public/networksystem/networkvar.h:949
class CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> : public CUtlMemoryFixed<CSpeechBubbleInfo, 4ul> {
public:

	CNetworkUtlVector_MemoryType(int, int);
	CNetworkUtlVector_MemoryType(CSpeechBubbleInfo *, int);
	CNetworkUtlVector_MemoryType(const CSpeechBubbleInfo *, int);
	~CNetworkUtlVector_MemoryType();

	// sizeof = 1184
};

// src/public/networksystem/networkvar.h:958
class CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> : public CUtlMemory<DataTeamPlayer_t, int> {
public:

	CNetworkUtlVector_MemoryType(int, int);
	CNetworkUtlVector_MemoryType(DataTeamPlayer_t *, int);
	CNetworkUtlVector_MemoryType(const DataTeamPlayer_t *, int);
	~CNetworkUtlVector_MemoryType();

	// sizeof = 16
};

// src/public/networksystem/networkvar.h:1055
class CNetworkStringBase<260, CDOTA_CombatLogQueryProgress::NetworkVar_m_szRankIdentifier> {
private:

	char m_Value[260];  // +0x0
	const char * operator char const*();
	const char * Get();
	char * GetForModify();
	int Count();
	void Clear();
	void Set(const char *);

protected:

	void NetworkStateChanged();

	// sizeof = 260
};

// src/public/networksystem/networkvar.h:1055
class CNetworkStringBase<512, CPointClientUIWorldTextPanel::NetworkVar_m_messageText> {
private:

	char m_Value[512];  // +0x0
	const char * operator char const*();
	const char * Get();
	char * GetForModify();
	int Count();
	void Clear();
	void Set(const char *);

protected:

	void NetworkStateChanged();

	// sizeof = 512
};

// src/public/networksystem/networkvar.h:1055
class CNetworkStringBase<260, CColorCorrection::NetworkVar_m_netlookupFilename> {
private:

	char m_Value[260];  // +0x0
	const char * operator char const*();
	const char * Get();
	char * GetForModify();
	int Count();
	void Clear();
	void Set(const char *);

protected:

	void NetworkStateChanged();

	// sizeof = 260
};

// src/public/networksystem/networkvar.h:1128
class CNetworkArrayBase<CHandle<CBaseEntity>, 17, CDOTA_UnitInventory::NetworkVar_m_hItems> {
	CNetworkArrayBase(CNetworkArrayBase<CHandle<CBaseEntity>, 17, CDOTA_UnitInventory::NetworkVar_m_hItems> *);
	const CHandle<CBaseEntity> & operator[](const CNetworkArrayBase<CHandle<CBaseEntity>, 17, CDOTA_UnitInventory::NetworkVar_m_hItems> *, int);
	const CHandle<CBaseEntity> & Get(const CNetworkArrayBase<CHandle<CBaseEntity>, 17, CDOTA_UnitInventory::NetworkVar_m_hItems> *, int);
	CHandle<CBaseEntity> & GetForModify(CNetworkArrayBase<CHandle<CBaseEntity>, 17, CDOTA_UnitInventory::NetworkVar_m_hItems> *, int);
	void Set(CNetworkArrayBase<CHandle<CBaseEntity>, 17, CDOTA_UnitInventory::NetworkVar_m_hItems> *, int, const CHandle<CBaseEntity> &);
	const CHandle<CBaseEntity> * Base(const CNetworkArrayBase<CHandle<CBaseEntity>, 17, CDOTA_UnitInventory::NetworkVar_m_hItems> *);
	int Count(const CNetworkArrayBase<CHandle<CBaseEntity>, 17, CDOTA_UnitInventory::NetworkVar_m_hItems> *);

private:

	CNetworkArrayBase(CNetworkArrayBase<CHandle<CBaseEntity>, 17, CDOTA_UnitInventory::NetworkVar_m_hItems> *, const CNetworkArrayBase<CHandle<CBaseEntity>, 17, CDOTA_UnitInventory::NetworkVar_m_hItems> &);

	// sizeof = 68
};

// src/public/networksystem/networkvar.h:1128
class CNetworkArrayBase<int, 4, PlayerResourcePlayerTeamData_t::NetworkVar_m_nSuggestedHeroes> {
	int m_Value[4];  // +0x0
	CNetworkArrayBase();
	const int & operator[](int);
	const int & Get(int);
	int & GetForModify(int);
	void Set(int, const int &);
	const int * Base();
	int Count();

private:

	CNetworkArrayBase(const CNetworkArrayBase<int, 4, PlayerResourcePlayerTeamData_t::NetworkVar_m_nSuggestedHeroes> &);

	// sizeof = 16
};

// src/public/networksystem/networkvar.h:1128
class CNetworkArrayBase<long long unsigned int, 256, CDOTA_DataNonSpectator::NetworkVar_m_bWorldTreeState> {
	long long unsigned int m_Value[256];  // +0x0
	CNetworkArrayBase();
	const long long unsigned int & operator[](int);
	const long long unsigned int & Get(int);
	long long unsigned int & GetForModify(int);
	void Set(int, const long long unsigned int &);
	const long long unsigned int * Base();
	int Count();

private:

	CNetworkArrayBase(const CNetworkArrayBase<long long unsigned int, 256, CDOTA_DataNonSpectator::NetworkVar_m_bWorldTreeState> &);

	// sizeof = 2048
};

// src/public/networksystem/networkvar.h:1234
class CNetworkUtlVectorBase<int, CDOTABaseGameMode::NetworkVar_m_nCustomXPRequiredToReachNextLevel, -1> {
	typedef CUtlVector<int, CNetworkUtlVector_MemoryType<int, -1> > VectorType_t;

protected:

	VectorType_t m_Vector;  // +0x0
	CNetworkUtlVectorBase();
	bool IsValidIndex(int);
	const int & operator[](int);
	const int & Element(int);
	const int & Get(int);
	int & GetForModify(int);
	void Set(int, const int &);
	int AddToHead(const int &);
	int AddToHead();
	int AddToTail(const int &);
	int AddToTail();
	void Remove(int);
	bool FindAndRemove(const int &);
	const int * Base();
	int Count();
	VectorType_t & GetForModify();
	const VectorType_t & Get();
	/* tag__fprintf: const_type tag not supported! */;
	void SetCount(int);
	void Purge();
	void RemoveAll();
	void EnsureCapacity(int);
	CNetworkUtlVectorBase<int, CDOTABaseGameMode::NetworkVar_m_nCustomXPRequiredToReachNextLevel, -1> & operator=(const CNetworkUtlVectorBase<int, CDOTABaseGameMode::NetworkVar_m_nCustomXPRequiredToReachNextLevel, -1> &);

private:

	CNetworkUtlVectorBase(const CNetworkUtlVectorBase<int, CDOTABaseGameMode::NetworkVar_m_nCustomXPRequiredToReachNextLevel, -1> &);
	~CNetworkUtlVectorBase();

	// sizeof = 24
};

// src/public/networksystem/networkvar.h:1234
class CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1> {
	typedef CUtlVector<CUtlSymbolLarge, CNetworkUtlVector_MemoryType<CUtlSymbolLarge, -1> > VectorType_t;

protected:

	VectorType_t m_Vector;  // +0x0
	CNetworkUtlVectorBase();
	bool IsValidIndex(int);
	const CUtlSymbolLarge & operator[](int);
	const CUtlSymbolLarge & Element(int);
	const CUtlSymbolLarge & Get(int);
	CUtlSymbolLarge & GetForModify(int);
	void Set(int, const CUtlSymbolLarge &);
	int AddToHead(const CUtlSymbolLarge &);
	int AddToHead();
	int AddToTail(const CUtlSymbolLarge &);
	int AddToTail();
	void Remove(int);
	bool FindAndRemove(const CUtlSymbolLarge &);
	const CUtlSymbolLarge * Base();
	int Count();
	VectorType_t & GetForModify();
	const VectorType_t & Get();
	/* tag__fprintf: const_type tag not supported! */;
	void SetCount(int);
	void Purge();
	void RemoveAll();
	void EnsureCapacity(int);
	CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1> & operator=(const CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1> &);

private:

	CNetworkUtlVectorBase(const CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1> &);
	~CNetworkUtlVectorBase();

	// sizeof = 24
};

// src/public/networksystem/networkvar.h:1234
class CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> {
	typedef CUtlVector<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1> > VectorType_t;

protected:

	VectorType_t m_Vector;  // +0x0
	CNetworkUtlVectorBase(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *);
	bool IsValidIndex(const CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, int);
	const CHandle<CBaseVRHandAttachment> & operator[](const CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, int);
	const CHandle<CBaseVRHandAttachment> & Element(const CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, int);
	const CHandle<CBaseVRHandAttachment> & Get(const CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, int);
	CHandle<CBaseVRHandAttachment> & GetForModify(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, int);
	void Set(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, int, const CHandle<CBaseVRHandAttachment> &);
	int AddToHead(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, const CHandle<CBaseVRHandAttachment> &);
	int AddToHead(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *);
	int AddToTail(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, const CHandle<CBaseVRHandAttachment> &);
	int AddToTail(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *);
	void Remove(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, int);
	bool FindAndRemove(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, const CHandle<CBaseVRHandAttachment> &);
	const CHandle<CBaseVRHandAttachment> * Base(const CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *);
	int Count(const CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *);
	VectorType_t & GetForModify(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *);
	const VectorType_t & Get(const CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *);
	/* tag__fprintf: const_type tag not supported! */;
	void SetCount(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, int);
	void Purge(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *);
	void RemoveAll(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *);
	void EnsureCapacity(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, int);
	CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> & operator=(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, const CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> &);

private:

	CNetworkUtlVectorBase(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, const CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> &);
	~CNetworkUtlVectorBase(CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> *, int);

	// sizeof = 24
};

// src/public/networksystem/networkvar.h:1489
class CUtlVectorEmbeddedNetworkVar_Vector<DataTeamPlayer_t, -1> {
	typedef CUtlVector<DataTeamPlayer_t, CNetworkUtlVector_MemoryType<DataTeamPlayer_t, -1> > VectorType_t;

	VectorType_t m_Vector;  // +0x0
	CUtlVectorEmbeddedNetworkVar_Vector();
	using ::m_Vector;
	~CUtlVectorEmbeddedNetworkVar_Vector();

	// sizeof = 24
};

// src/public/networksystem/networkvar.h:1489
class CUtlVectorEmbeddedNetworkVar_Vector<PlayerResourcePlayerTeamData_t, -1> {
	typedef CUtlVector<PlayerResourcePlayerTeamData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1> > VectorType_t;

	VectorType_t m_Vector;  // +0x0
	CUtlVectorEmbeddedNetworkVar_Vector();
	using ::m_Vector;
	~CUtlVectorEmbeddedNetworkVar_Vector();

	// sizeof = 24
};

// src/public/networksystem/networkvar.h:1489
class CUtlVectorEmbeddedNetworkVar_Vector<PlayerResourcePlayerData_t, -1> {
	typedef CUtlVector<PlayerResourcePlayerData_t, CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1> > VectorType_t;

	VectorType_t m_Vector;  // +0x0
	CUtlVectorEmbeddedNetworkVar_Vector();
	using ::m_Vector;
	~CUtlVectorEmbeddedNetworkVar_Vector();

	// sizeof = 24
};

// src/public/networksystem/networkvar.h:1497
class CUtlVectorEmbeddedNetworkVar_ChainingHelper<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1, false> : public CUtlVectorEmbeddedNetworkVar_Vector<DataTeamPlayer_t, -1> {
public:

	CUtlVectorEmbeddedNetworkVar_ChainingHelper(CUtlVectorEmbeddedNetworkVar_ChainingHelper<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1, false, const CUtlDelegate<void(const CNetworkVarChainer&)> &);
	~CUtlVectorEmbeddedNetworkVar_ChainingHelper(CUtlVectorEmbeddedNetworkVar_ChainingHelper<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1, false, int);

	// sizeof = 24
};

// src/public/networksystem/networkvar.h:1497
class CUtlVectorEmbeddedNetworkVar_ChainingHelper<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, -1, false> : public CUtlVectorEmbeddedNetworkVar_Vector<PlayerResourcePlayerTeamData_t, -1> {
public:

	CUtlVectorEmbeddedNetworkVar_ChainingHelper(CUtlVectorEmbeddedNetworkVar_ChainingHelper<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerT, const CUtlDelegate<void(const CNetworkVarChainer&)> &);
	~CUtlVectorEmbeddedNetworkVar_ChainingHelper(CUtlVectorEmbeddedNetworkVar_ChainingHelper<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerT, int);

	// sizeof = 24
};

// src/public/networksystem/networkvar.h:1497
class CUtlVectorEmbeddedNetworkVar_ChainingHelper<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData, -1, false> : public CUtlVectorEmbeddedNetworkVar_Vector<PlayerResourcePlayerData_t, -1> {
public:

	CUtlVectorEmbeddedNetworkVar_ChainingHelper(CUtlVectorEmbeddedNetworkVar_ChainingHelper<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,, const CUtlDelegate<void(const CNetworkVarChainer&)> &);
	~CUtlVectorEmbeddedNetworkVar_ChainingHelper(CUtlVectorEmbeddedNetworkVar_ChainingHelper<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,, int);

	// sizeof = 24
};

// src/public/networksystem/networkvar.h:1539
class CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1> : public CUtlVectorEmbeddedNetworkVar_ChainingHelper<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1, false> {
public:

protected:

	CUtlDelegate<void()> * m_pArraySizeChangedDelegate;  // +0x38
	bool m_bIsNetworkVarExcluded;  // +0x40
	bool m_bResolved;  // +0x41
	CUtlVectorEmbeddedNetworkVar();
	~CUtlVectorEmbeddedNetworkVar();
	bool IsValidIndex(int);
	const DataTeamPlayer_t & operator[](int);
	DataTeamPlayer_t & operator[](int);
	const DataTeamPlayer_t & Element(int);
	DataTeamPlayer_t & Element(int);
	const DataTeamPlayer_t & Get(int);
	DataTeamPlayer_t & GetForModify(int);
	void Set(int, const DataTeamPlayer_t &);
	int AddToTail();
	int AddToTail(const DataTeamPlayer_t &);
	int AddMultipleToTail(int);
	void Remove(int);
	void RemoveMultiple(int, int);
	void Purge();
	int Count();
	const DataTeamPlayer_t * Base();
	DataTeamPlayer_t * Base();
	void SetCount(int);
	void EnsureCapacity(int);
	void Resolve();
	void InstallSizeChangeCallback(CUtlDelegate<void()> &);

private:

	CUtlVectorEmbeddedNetworkVar(const CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1> &);
	void OnChainPropagationChange(const CNetworkVarChainer &);
	void OnSizeChanged();
	void ReassignPathIds();
	void AssignPathIdToElement(int);
	void NetworkStateChanged();

	// sizeof = 72
};

// src/public/networksystem/networkvar.h:1539
class CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, -1> : public CUtlVectorEmbeddedNetworkVar_ChainingHelper<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, -1, false> {
public:

protected:

	CUtlDelegate<void()> * m_pArraySizeChangedDelegate;  // +0x38
	bool m_bIsNetworkVarExcluded;  // +0x40
	bool m_bResolved;  // +0x41
	CUtlVectorEmbeddedNetworkVar();
	~CUtlVectorEmbeddedNetworkVar();
	bool IsValidIndex(const CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, , int);
	const PlayerResourcePlayerTeamData_t & operator[](const CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, , int);
	PlayerResourcePlayerTeamData_t & operator[](int);
	const PlayerResourcePlayerTeamData_t & Element(const CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, , int);
	PlayerResourcePlayerTeamData_t & Element(int);
	const PlayerResourcePlayerTeamData_t & Get(const CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, , int);
	PlayerResourcePlayerTeamData_t & GetForModify(int);
	void Set(int, const PlayerResourcePlayerTeamData_t &);
	int AddToTail();
	int AddToTail(const PlayerResourcePlayerTeamData_t &);
	int AddMultipleToTail(int);
	void Remove(int);
	void RemoveMultiple(int, int);
	void Purge();
	int Count(const CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, );
	const PlayerResourcePlayerTeamData_t * Base(const CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, );
	PlayerResourcePlayerTeamData_t * Base();
	void SetCount(int);
	void EnsureCapacity(int);
	void Resolve();
	void InstallSizeChangeCallback(CUtlDelegate<void()> &);

private:

	CUtlVectorEmbeddedNetworkVar(const CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerTeamData, );
	void OnChainPropagationChange(const CNetworkVarChainer &);
	void OnSizeChanged();
	void ReassignPathIds();
	void AssignPathIdToElement(int);
	void NetworkStateChanged();

	// sizeof = 72
};

// src/public/networksystem/networkvar.h:1539
class CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData, -1> : public CUtlVectorEmbeddedNetworkVar_ChainingHelper<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData, -1, false> {
public:

protected:

	CUtlDelegate<void()> * m_pArraySizeChangedDelegate;  // +0x38
	bool m_bIsNetworkVarExcluded;  // +0x40
	bool m_bResolved;  // +0x41
	CUtlVectorEmbeddedNetworkVar();
	~CUtlVectorEmbeddedNetworkVar();
	bool IsValidIndex(int);
	const PlayerResourcePlayerData_t & operator[](int);
	PlayerResourcePlayerData_t & operator[](int);
	const PlayerResourcePlayerData_t & Element(int);
	PlayerResourcePlayerData_t & Element(int);
	const PlayerResourcePlayerData_t & Get(int);
	PlayerResourcePlayerData_t & GetForModify(int);
	void Set(int, const PlayerResourcePlayerData_t &);
	int AddToTail();
	int AddToTail(const PlayerResourcePlayerData_t &);
	int AddMultipleToTail(int);
	void Remove(int);
	void RemoveMultiple(int, int);
	void Purge();
	int Count();
	const PlayerResourcePlayerData_t * Base();
	PlayerResourcePlayerData_t * Base();
	void SetCount(int);
	void EnsureCapacity(int);
	void Resolve();
	void InstallSizeChangeCallback(CUtlDelegate<void()> &);

private:

	CUtlVectorEmbeddedNetworkVar(const CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData, -1> &);
	void OnChainPropagationChange(const CNetworkVarChainer &);
	void OnSizeChanged();
	void ReassignPathIds();
	void AssignPathIdToElement(int);
	void NetworkStateChanged();

	// sizeof = 72
};

// CNetworkVarBase: 1302 more instantiations (full list in INDEX.tsv)
//   CNetworkVarBase<HSequence, CNetworkedSequenceOperation::NetworkVar_m_hSequence>
//   CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_lifeState>
//   CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_iTeamNum>
//   CNetworkVarBase<unsigned int, CBaseEntity::NetworkVar_m_fFlags>
//   CNetworkVarBase<CEntityHandle, CBaseEntity::NetworkVar_m_hOwnerEntity>
//   CNetworkVarBase<unsigned int, CBaseEntity::NetworkVar_m_fEffects>
//   CNetworkVarBase<float, CBaseEntity::NetworkVar_m_flFriction>
//   CNetworkVarBase<Vector, CCollisionProperty::NetworkVar_m_vecMins>
//   CNetworkVarBase<Vector, CCollisionProperty::NetworkVar_m_vecMaxs>
//   CNetworkVarBase<unsigned char, CCollisionProperty::NetworkVar_m_usSolidFlags>
//   CNetworkVarBase<SolidType_t, CCollisionProperty::NetworkVar_m_nSolidType>
//   CNetworkVarBase<SurroundingBoundsType_t, CCollisionProperty::NetworkVar_m_nSurroundType>
//   CNetworkVarBase<float, CBaseModelEntity::NetworkVar_m_flFadeScale>
//   CNetworkVarBase<unsigned int, CEconItemView::NetworkVar_m_iEntityLevel>
//   CNetworkVarBase<itemid_t, CEconItemView::NetworkVar_m_iItemID>
//   CNetworkVarBase<unsigned int, CEconItemView::NetworkVar_m_iAccountID>
//   CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bWearingSuit>
//   CNetworkVarBase<Vector, HandInfo_t::NetworkVar_m_vPosition>
//   CNetworkVarBase<QAngle, HandInfo_t::NetworkVar_m_Angles>
//   CNetworkVarBase<Vector, HandInfo_t::NetworkVar_m_vFilteredPosition>
//   CNetworkVarBase<QAngle, HandInfo_t::NetworkVar_m_FilteredAngles>
//   CNetworkVarBase<Vector, HandInfo_t::NetworkVar_m_vFilteredVelocity>
//   CNetworkVarBase<Quaternion, HandInfo_t::NetworkVar_m_FilteredAngularVel>
//   CNetworkVarBase<float, HandInfo_t::NetworkVar_m_flTriggerAnalogValue>
//   CNetworkVarBase<float, HandInfo_t::NetworkVar_m_flGripAnalogValue>
//   CNetworkVarBase<float, HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueX>
//   CNetworkVarBase<float, HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueY>
//   CNetworkVarBase<bool, CPointHMDAnchor::NetworkVar_m_bDisabled>
//   CNetworkVarBase<float, CPointHMDAnchor::NetworkVar_m_flEnableTime>
//   CNetworkVarBase<int, CPointHMDAnchor::NetworkVar_m_nPlayerIndex>
//   CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hUseEntity>
//   CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hVehicle>
//   CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hObserverTarget>
//   CNetworkVarBase<CHandle<CBaseEntity>, CBaseViewModel::NetworkVar_m_hOwner>
//   CNetworkVarBase<int, CBaseCombatWeapon::NetworkVar_m_iPrimaryAmmoType>
//   CNetworkVarBase<int, CBaseCombatWeapon::NetworkVar_m_iSecondaryAmmoType>
//   CNetworkVarBase<int, CDOTA_UnitInventory::NetworkVar_m_iParity>
//   CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_UnitInventory::NetworkVar_m_hInventoryParent>
//   CNetworkVarBase<bool, CDOTA_UnitInventory::NetworkVar_m_bStashEnabled>
//   CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_UnitInventory::NetworkVar_m_hTransientCastItem>
//   CNetworkVarBase<int, CDOTA_NeutralSpawner::NetworkVar_m_Type>
//   CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flManaThinkRegen>
//   CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsMoving>
//   CNetworkVarBase<long long unsigned int, CDOTA_BaseNPC::NetworkVar_m_nUnitState64>
//   CNetworkVarBase<CUtlSymbolLarge, CDOTA_BaseNPC::NetworkVar_m_iszUnitName>
//   CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsWaitingToSpawn>
//   CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsIllusion>
//   CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bShouldDoFlyHeightVisual>
//   CNetworkVarBase<float, CDOTA_Unit_Roquelaire::NetworkVar_m_flFlyHeight>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_nSelectedHeroID>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iKills>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iAssists>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iDeaths>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iStreak>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iLevel>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iRespawnSeconds>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iLastBuybackTime>
//   CNetworkVarBase<CHandle<CBaseEntity>, PlayerResourcePlayerTeamData_t::NetworkVar_m_hSelectedHero>
//   CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bAFK>
//   CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bVoiceChatBanned>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iTimedRewardDrops>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iTimedRewardDropOrigins>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iTimedRewardCrates>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iTimedRewardEvents>
//   CNetworkVarBase<short unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_unCompendiumLevel>
//   CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bCanRepick>
//   CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bHasRandomed>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_nRandomedHeroID>
//   CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bBattleBonusActive>
//   CNetworkVarBase<short unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleBonusRate>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iCustomBuybackCost>
//   CNetworkVarBase<Color, PlayerResourcePlayerTeamData_t::NetworkVar_m_CustomPlayerColor>
//   CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bQualifiesForPAContractReward>
//   CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bHasPredictedVictory>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_UnitShareMasks>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iTeamSlot>
//   CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iEventPoints>
//   CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iEventPremiumPoints>
//   CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iEventWagerTokensRemaining>
//   CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iEventWagerTokensMax>
//   CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iEventEffectsMask>
//   CNetworkVarBase<short unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iEventRanks>
//   CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bIsEventOwned>
//   CNetworkVarBase<CHandle<CBaseEntity>, PlayerResourcePlayerTeamData_t::NetworkVar_m_hCourier>
//   CNetworkVarBase<unsigned char, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleCupWinStreak>
//   CNetworkVarBase<long long unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleCupWinDate>
//   CNetworkVarBase<short unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleCupSkillLevel>
//   CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleCupTeamID>
//   CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleCupTournamentID>
//   CNetworkVarBase<unsigned char, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleCupDivision>
//   CNetworkVarBase<float, PlayerResourcePlayerTeamData_t::NetworkVar_m_flTeamFightParticipation>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iFirstBloodClaimed>
//   CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iFirstBloodGiven>
//   CNetworkVarBase<bool, PlayerResourcePlayerData_t::NetworkVar_m_bIsValid>
//   CNetworkVarBase<CUtlSymbolLarge, PlayerResourcePlayerData_t::NetworkVar_m_iszPlayerName>
//   CNetworkVarBase<int, PlayerResourcePlayerData_t::NetworkVar_m_iPlayerTeam>
//   CNetworkVarBase<bool, PlayerResourcePlayerData_t::NetworkVar_m_bFullyJoinedServer>
//   CNetworkVarBase<bool, PlayerResourcePlayerData_t::NetworkVar_m_bFakeClient>
//   CNetworkVarBase<bool, PlayerResourcePlayerData_t::NetworkVar_m_bIsBroadcaster>
//   CNetworkVarBase<unsigned int, PlayerResourcePlayerData_t::NetworkVar_m_iBroadcasterChannel>
//   CNetworkVarBase<unsigned int, PlayerResourcePlayerData_t::NetworkVar_m_iBroadcasterChannelSlot>
//   CNetworkVarBase<bool, PlayerResourcePlayerData_t::NetworkVar_m_bIsBroadcasterChannelCameraman>
//   CNetworkVarBase<int, PlayerResourcePlayerData_t::NetworkVar_m_iConnectionState>
//   CNetworkVarBase<long long unsigned int, PlayerResourcePlayerData_t::NetworkVar_m_iPlayerSteamID>
//   CNetworkVarBase<DOTATeam_t, PlayerResourcePlayerData_t::NetworkVar_m_eCoachTeam>
//   CNetworkVarBase<CUtlSymbolLarge, PlayerResourceBroadcasterData_t::NetworkVar_m_iszBroadcasterChannelDescription>
//   CNetworkVarBase<CUtlSymbolLarge, PlayerResourceBroadcasterData_t::NetworkVar_m_iszBroadcasterChannelCountryCode>
//   CNetworkVarBase<CUtlSymbolLarge, PlayerResourceBroadcasterData_t::NetworkVar_m_iszBroadcasterChannelLanguageCode>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iReliableGold>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iUnreliableGold>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iStartingPosition>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iTotalEarnedGold>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iTotalEarnedXP>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iSharedGold>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iHeroKillGold>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iCreepKillGold>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iIncomeGold>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iNetWorth>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iDenyCount>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iLastHitCount>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iLastHitStreak>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iLastHitMultikill>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iNearbyCreepDeathCount>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iClaimedDenyCount>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iClaimedMissCount>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iMissCount>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_nPossibleHeroSelection>
//   CNetworkVarBase<short unsigned int, DataTeamPlayer_t::NetworkVar_m_iMetaLevel>
//   CNetworkVarBase<short unsigned int, DataTeamPlayer_t::NetworkVar_m_iMetaExperience>
//   CNetworkVarBase<short unsigned int, DataTeamPlayer_t::NetworkVar_m_iMetaExperienceAwarded>
//   CNetworkVarBase<float, DataTeamPlayer_t::NetworkVar_m_flBuybackCooldownTime>
//   CNetworkVarBase<float, DataTeamPlayer_t::NetworkVar_m_flBuybackGoldLimitTime>
//   CNetworkVarBase<float, DataTeamPlayer_t::NetworkVar_m_flBuybackCostTime>
//   CNetworkVarBase<float, DataTeamPlayer_t::NetworkVar_m_flCustomBuybackCooldown>
//   CNetworkVarBase<float, DataTeamPlayer_t::NetworkVar_m_fStuns>
//   CNetworkVarBase<float, DataTeamPlayer_t::NetworkVar_m_fHealing>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iTowerKills>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iRoshanKills>
//   CNetworkVarBase<CHandle<CBaseEntity>, DataTeamPlayer_t::NetworkVar_m_hCameraTarget>
//   CNetworkVarBase<CHandle<CBaseEntity>, DataTeamPlayer_t::NetworkVar_m_hOverrideSelectionEntity>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iObserverWardsPlaced>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iSentryWardsPlaced>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iCreepsStacked>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iCampsStacked>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iRunePickups>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iGoldSpentOnSupport>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iHeroDamage>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iWardsPurchased>
//   CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iWardsDestroyed>
//   CNetworkVarBase<CEntityHandle, CDOTA_DataSpectator::NetworkVar_m_hPowerupRune>
//   CNetworkVarBase<CEntityHandle, CDOTA_DataSpectator::NetworkVar_m_hBountyRune_1>
//   CNetworkVarBase<CEntityHandle, CDOTA_DataSpectator::NetworkVar_m_hBountyRune_2>
//   CNetworkVarBase<CEntityHandle, CDOTA_DataSpectator::NetworkVar_m_hBountyRune_3>
//   CNetworkVarBase<CEntityHandle, CDOTA_DataSpectator::NetworkVar_m_hBountyRune_4>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>, CDOTA_BaseNPC_Building::NetworkVar_m_nFXInd
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>, CDOTA_BaseNPC_Building::NetworkVar_m_nFXInd
//   CNetworkVarBase<QAngle, CDOTA_BaseNPC_Building::NetworkVar_m_angInitialAngles>
//   CNetworkVarBase<HSequence, CDOTA_BaseNPC_Building::NetworkVar_m_hHeroStatueSequence>
//   CNetworkVarBase<float, CDOTA_BaseNPC_Building::NetworkVar_m_fHeroStatueCycle>
//   CNetworkVarBase<int, CDOTA_BaseNPC_Building::NetworkVar_m_iHeroStatueStatusEffectIndex>
//   CNetworkVarBase<bool, CDOTA_BaseNPC_Building::NetworkVar_m_bHeroStatue>
//   CNetworkVarBase<bool, CDOTA_BaseNPC_Building::NetworkVar_m_bBattleCup>
//   CNetworkVarBase<int, CDOTA_BaseNPC_Building::NetworkVar_m_iHeroStatueOwnerPlayerID>
//   CNetworkVarBase<Color, CDOTA_BaseNPC_Building::NetworkVar_m_ParticleTintColor>
//   CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_BaseNPC_Tower::NetworkVar_m_hTowerAttackTarget>
//   CNetworkVarBase<bool, CDOTA_Unit_Courier::NetworkVar_m_bFlyingCourier>
//   CNetworkVarBase<unsigned int, CDOTA_PlayerResource::NetworkVar_m_nEventIDAssociatedWithEventData>
//   CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID>
//   CNetworkVarBase<bool, CDOTA_BaseNPC_Hero::NetworkVar_m_bReincarnating>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iPlayerID>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nType>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nQuestID>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nQuestChallengeID>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nTier>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nParam0>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nParam1>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nSlotID>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nProgress>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nCompletionThreshold>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nPlayerID>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nQueryIndex>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nEventID>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nSequenceID>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nCompleted>
//   CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nRank>
//   CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nType>
//   CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nTier>
//   CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nSlotID>
//   CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nProgress>
//   CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nCompletionThreshold>
//   CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nPlayerID>
//   CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nQueryIndex>
//   CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nEventID>
//   CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nSequenceID>
//   CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nRequiredHero>
//   CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nCompleted>
//   CNetworkVarBase<int, CDOTA_CombatLogQueryProgress::NetworkVar_m_nPlayerID>
//   CNetworkVarBase<int, CDOTA_CombatLogQueryProgress::NetworkVar_m_nQueryID>
//   CNetworkVarBase<int, CDOTA_CombatLogQueryProgress::NetworkVar_m_nQueryRank>
//   CNetworkVarBase<int, CDOTA_CombatLogQueryProgress::NetworkVar_m_nMultiQueryID>
//   CNetworkVarBase<float, CIngameEvent_FM2015::NetworkVar_m_flWagerTimer>
//   CNetworkVarBase<float, CIngameEvent_FM2015::NetworkVar_m_flWagerEndTime>
//   CNetworkVarBase<float, CIngameEvent_FM2015::NetworkVar_m_flBonusWagerRate>
//   CNetworkVarBase<float, CIngameEvent_WM2016::NetworkVar_m_flWagerTimer>
//   CNetworkVarBase<float, CIngameEvent_WM2016::NetworkVar_m_flWagerEndTime>
//   CNetworkVarBase<Vector, CDOTA_TempTree::NetworkVar_m_vecTreeCircleCenter>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bPermanent>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bStackable>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bRecipe>
//   CNetworkVarBase<int, CDOTA_Item::NetworkVar_m_iSharability>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bDroppable>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bPurchasable>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bSellable>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bRequiresCharges>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bKillable>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bAlertable>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bCastOnPickup>
//   CNetworkVarBase<CHandle<CDOTA_Item>, CDOTA_Item_Physical::NetworkVar_m_hItem>
//   CNetworkVarBase<bool, CBaseClientUIEntity::NetworkVar_m_bEnabled>
//   CNetworkVarBase<CUtlSymbolLarge, CBaseClientUIEntity::NetworkVar_m_DialogXMLName>
//   CNetworkVarBase<CUtlSymbolLarge, CBaseClientUIEntity::NetworkVar_m_PanelClassName>
//   CNetworkVarBase<bool, CPointClientUIWorldPanel::NetworkVar_m_bIgnoreInput>
//   CNetworkVarBase<bool, CPointClientUIWorldPanel::NetworkVar_m_bFollowPlayerAcrossTeleport>
//   CNetworkVarBase<float, CPointClientUIWorldPanel::NetworkVar_m_flWidth>
//   CNetworkVarBase<float, CPointClientUIWorldPanel::NetworkVar_m_flHeight>
//   CNetworkVarBase<float, CPointClientUIWorldPanel::NetworkVar_m_flDPI>
//   CNetworkVarBase<float, CPointClientUIWorldPanel::NetworkVar_m_flInteractDistance>
//   CNetworkVarBase<float, CPointClientUIWorldPanel::NetworkVar_m_flDepthOffset>
//   CNetworkVarBase<unsigned int, CPointClientUIWorldPanel::NetworkVar_m_unOwnerContext>
//   CNetworkVarBase<unsigned int, CPointClientUIWorldPanel::NetworkVar_m_unHorizontalAlign>
//   CNetworkVarBase<unsigned int, CPointClientUIWorldPanel::NetworkVar_m_unVerticalAlign>
//   CNetworkVarBase<unsigned int, CPointClientUIWorldPanel::NetworkVar_m_unOrientation>
//   CNetworkVarBase<bool, CPointClientUIWorldPanel::NetworkVar_m_bAllowInteractionFromAllSceneWorlds>
//   CNetworkVarBase<bool, CPointClientUIWorldPanel::NetworkVar_m_bOpaque>
//   CNetworkVarBase<bool, CPointClientUIWorldPanel::NetworkVar_m_bNoDepth>
//   CNetworkVarBase<bool, CPointClientUIWorldPanel::NetworkVar_m_bRenderBackface>
//   CNetworkVarBase<CEntityHandle, CPropVRHand::NetworkVar_m_hActiveHandAttachment>
//   CNetworkVarBase<unsigned char, CCollisionProperty::NetworkVar_m_CollisionGroup>
//   CNetworkVarBase<CHandle<CBaseEntity>, CPointClientUIDialog::NetworkVar_m_hActivator>
//   CNetworkVarBase<int, CBreakableProp::NetworkVar_m_iPhysicsMode>
//   CNetworkVarBase<int, CDevtestHierarchy::NetworkVar_m_nTestMode>
//   CNetworkVarBase<CUtlStringToken, CDevtestHierarchy::NetworkVar_m_attachName>
//   CNetworkVarBase<Vector, CDevtestHierarchy::NetworkVar_m_vDynamicAttachOffset>
//   CNetworkVarBase<int, CDevtestHierarchy::NetworkVar_m_nDynamicResetCount>
//   CNetworkVarBase<bool, CDevtestHierarchy::NetworkVar_m_bChildIsDynamic>
//   CNetworkVarBase<bool, CDevtestHierarchy::NetworkVar_m_bCreateChildSideChild>
//   CNetworkVarBase<CUtlStringToken, CDevtestHierarchy::NetworkVar_m_alternateAttachName>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CDevtestHierarchy::NetworkVar_m_hClientSideChildModel>
//   CNetworkVarBase<float, CDevtestHierarchy::NetworkVar_m_flEntityStartTime>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CPlasma::NetworkVar_m_nPlasmaModelIndex>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CPlasma::NetworkVar_m_nPlasmaModelIndex2>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CPlasma::NetworkVar_m_nGlowModelIndex>
//   CNetworkVarBase<CEntityHandle, CGameSceneNodeHandle::NetworkVar_m_hOwner>
//   CNetworkVarBase<CUtlStringToken, CGameSceneNodeHandle::NetworkVar_m_name>
//   CNetworkVarBase<CUtlStringToken, CGameSceneNode::NetworkVar_m_name>
//   CNetworkVarBase<bool, CCollisionProperty::NetworkVar_m_bHitboxEnabled>
//   CNetworkVarBase<Color, CLightComponent::NetworkVar_m_Color>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flBrightness>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flBrightnessMult>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flRange>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flFalloff>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flAttenuation0>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flAttenuation1>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flAttenuation2>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flTheta>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flPhi>
//   CNetworkVarBase<CUtlStringToken, CLightComponent::NetworkVar_m_lightCookie>
//   CNetworkVarBase<int, CLightComponent::NetworkVar_m_nCascades>
//   CNetworkVarBase<bool, CLightComponent::NetworkVar_m_bCastShadows>
//   CNetworkVarBase<int, CLightComponent::NetworkVar_m_nShadowWidth>
//   CNetworkVarBase<int, CLightComponent::NetworkVar_m_nShadowHeight>
//   CNetworkVarBase<bool, CLightComponent::NetworkVar_m_bRenderDiffuse>
//   CNetworkVarBase<bool, CLightComponent::NetworkVar_m_bRenderSpecular>
//   CNetworkVarBase<int, CLightComponent::NetworkVar_m_nStyle>
//   CNetworkVarBase<CUtlString, CLightComponent::NetworkVar_m_Pattern>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flFadeMinDist>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flFadeMaxDist>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flShadowFadeMinDist>
//   CNetworkVarBase<float, CLightComponent::NetworkVar_m_flShadowFadeMaxDist>
//   CNetworkVarBase<bool, CLightComponent::NetworkVar_m_bEnabled>
//   CNetworkVarBase<bool, CLightComponent::NetworkVar_m_bFlicker>
//   CNetworkVarBase<QAngle, CGameSceneNode::NetworkVar_m_angRotation>
//   CNetworkVarBase<float, CGameSceneNode::NetworkVar_m_flScale>
//   CNetworkVarBase<CUtlStringToken, CGameSceneNode::NetworkVar_m_hierarchyAttachName>
//   CNetworkVarBase<signed char, CModelState::NetworkVar_m_nIdealMotionType>
//   CNetworkVarBase<DamageOptions_t, CBaseEntity::NetworkVar_m_takedamage>
//   CNetworkVarBase<MoveType_t, CBaseEntity::NetworkVar_m_MoveType>
//   CNetworkVarBase<float, CBaseEntity::NetworkVar_m_flAnimTime>
//   CNetworkVarBase<float, CBaseEntity::NetworkVar_m_flSimulationTime>
//   CNetworkVarBase<unsigned int, CBaseEntity::NetworkVar_m_spawnflags>
//   CNetworkVarBase<int, CBaseEntity::NetworkVar_m_nNextThinkTick>
//   CNetworkVarBase<Vector, CBaseEntity::NetworkVar_m_vecAbsVelocity>
//   CNetworkVarBase<CEntityHandle, CBaseEntity::NetworkVar_m_hEffectEntity>
//   CNetworkVarBase<bool, CBaseEntity::NetworkVar_m_bSimulatedEveryTick>
//   CNetworkVarBase<bool, CBaseEntity::NetworkVar_m_bAnimatedEveryTick>
//   CNetworkVarBase<Vector, CBaseFlex::NetworkVar_m_viewtarget>
//   CNetworkVarBase<Vector, fogparams_t::NetworkVar_dirPrimary>
//   CNetworkVarBase<Color, fogparams_t::NetworkVar_colorPrimary>
//   CNetworkVarBase<Color, fogparams_t::NetworkVar_colorSecondary>
//   CNetworkVarBase<Color, fogparams_t::NetworkVar_colorPrimaryLerpTo>
//   CNetworkVarBase<Color, fogparams_t::NetworkVar_colorSecondaryLerpTo>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_start>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_end>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_farz>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_maxdensity>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_exponent>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_HDRColorScale>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_skyboxFogFactor>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_skyboxFogFactorLerpTo>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_startLerpTo>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_endLerpTo>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_maxdensityLerpTo>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_lerptime>
//   CNetworkVarBase<float, fogparams_t::NetworkVar_duration>
//   CNetworkVarBase<bool, fogparams_t::NetworkVar_enable>
//   CNetworkVarBase<bool, fogparams_t::NetworkVar_blend>
//   CNetworkVarBase<bool, fogparams_t::NetworkVar_m_bNoReflectionFog>
//   CNetworkVarBase<Vector, CEffectData::NetworkVar_m_vOrigin>
//   CNetworkVarBase<Vector, CEffectData::NetworkVar_m_vStart>
//   CNetworkVarBase<Vector, CEffectData::NetworkVar_m_vNormal>
//   CNetworkVarBase<QAngle, CEffectData::NetworkVar_m_vAngles>
//   CNetworkVarBase<CEntityHandle, CEffectData::NetworkVar_m_hEntity>
//   CNetworkVarBase<CEntityHandle, CEffectData::NetworkVar_m_hOtherEntity>
//   CNetworkVarBase<float, CEffectData::NetworkVar_m_flScale>
//   CNetworkVarBase<float, CEffectData::NetworkVar_m_flMagnitude>
//   CNetworkVarBase<float, CEffectData::NetworkVar_m_flRadius>
//   CNetworkVarBase<CUtlStringToken, CEffectData::NetworkVar_m_nSurfaceProp>
//   CNetworkVarBase<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>, CEffectData::NetworkVar_m_nEffectIndex>
//   CNetworkVarBase<unsigned int, CEffectData::NetworkVar_m_nDamageType>
//   CNetworkVarBase<short unsigned int, CEffectData::NetworkVar_m_nMaterial>
//   CNetworkVarBase<short unsigned int, CEffectData::NetworkVar_m_nHitBox>
//   CNetworkVarBase<unsigned char, CEffectData::NetworkVar_m_nColor>
//   CNetworkVarBase<unsigned char, CEffectData::NetworkVar_m_fFlags>
//   CNetworkVarBase<signed char, CEffectData::NetworkVar_m_nAttachmentIndex>
//   CNetworkVarBase<CUtlStringToken, CEffectData::NetworkVar_m_nAttachmentName>
//   CNetworkVarBase<short unsigned int, CEffectData::NetworkVar_m_iEffectName>
//   CNetworkVarBase<CEntityHandle, CEnvClock::NetworkVar_m_hHourHand>
//   CNetworkVarBase<CEntityHandle, CEnvClock::NetworkVar_m_hMinuteHand>
//   CNetworkVarBase<CEntityHandle, CEnvClock::NetworkVar_m_hSecondHand>
//   CNetworkVarBase<float, CEnvClock::NetworkVar_m_flStartGameTime>
//   CNetworkVarBase<float, CEnvClock::NetworkVar_m_flStartClockSeconds>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CEnvCombinedLightProbeVolume::NetworkVar_m_hCubemapTextu
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CEnvCombinedLightProbeVolume::NetworkVar_m_hLightProbeTe
//   CNetworkVarBase<Vector, CEnvCombinedLightProbeVolume::NetworkVar_m_vBoxMins>
//   CNetworkVarBase<Vector, CEnvCombinedLightProbeVolume::NetworkVar_m_vBoxMaxs>
//   CNetworkVarBase<CUtlSymbolLarge, CEnvCombinedLightProbeVolume::NetworkVar_m_LightGroups>
//   CNetworkVarBase<bool, CEnvCombinedLightProbeVolume::NetworkVar_m_bStatic>
//   CNetworkVarBase<int, CEnvCombinedLightProbeVolume::NetworkVar_m_nHandshake>
//   CNetworkVarBase<bool, CEnvCombinedLightProbeVolume::NetworkVar_m_bStartDisabled>
//   CNetworkVarBase<bool, CEnvCombinedLightProbeVolume::NetworkVar_m_bEnabled>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CEnvCubemap::NetworkVar_m_hCubemapTexture>
//   CNetworkVarBase<float, CEnvCubemap::NetworkVar_m_flInfluenceRadius>
//   CNetworkVarBase<Vector, CEnvCubemap::NetworkVar_m_vBoxProjectMins>
//   CNetworkVarBase<Vector, CEnvCubemap::NetworkVar_m_vBoxProjectMaxs>
//   CNetworkVarBase<CUtlSymbolLarge, CEnvCubemap::NetworkVar_m_LightGroups>
//   CNetworkVarBase<bool, CEnvCubemap::NetworkVar_m_bStatic>
//   CNetworkVarBase<int, CEnvCubemap::NetworkVar_m_nHandshake>
//   CNetworkVarBase<bool, CEnvCubemap::NetworkVar_m_bStartDisabled>
//   CNetworkVarBase<bool, CEnvCubemap::NetworkVar_m_bEnabled>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CEnvLightProbeVolume::NetworkVar_m_hLightProbeTexture>
//   CNetworkVarBase<Vector, CEnvLightProbeVolume::NetworkVar_m_vBoxMins>
//   CNetworkVarBase<Vector, CEnvLightProbeVolume::NetworkVar_m_vBoxMaxs>
//   CNetworkVarBase<CUtlSymbolLarge, CEnvLightProbeVolume::NetworkVar_m_LightGroups>
//   CNetworkVarBase<bool, CEnvLightProbeVolume::NetworkVar_m_bStatic>
//   CNetworkVarBase<int, CEnvLightProbeVolume::NetworkVar_m_nHandshake>
//   CNetworkVarBase<bool, CEnvLightProbeVolume::NetworkVar_m_bStartDisabled>
//   CNetworkVarBase<bool, CEnvLightProbeVolume::NetworkVar_m_bEnabled>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CEnvSky::NetworkVar_m_hSkyMaterial>
//   CNetworkVarBase<bool, CEnvSky::NetworkVar_m_bStartDisabled>
//   CNetworkVarBase<Color, CEnvSky::NetworkVar_m_vTintColor>
//   CNetworkVarBase<int, CEnvSky::NetworkVar_m_nFogType>
//   CNetworkVarBase<float, CEnvSky::NetworkVar_m_flFogMinStart>
//   CNetworkVarBase<float, CEnvSky::NetworkVar_m_flFogMinEnd>
//   CNetworkVarBase<float, CEnvSky::NetworkVar_m_flFogMaxStart>
//   CNetworkVarBase<float, CEnvSky::NetworkVar_m_flFogMaxEnd>
//   CNetworkVarBase<bool, CEnvSky::NetworkVar_m_bEnabled>
//   CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flAutoExposureMin>
//   CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flAutoExposureMax>
//   CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flTonemapPercentTarget>
//   CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flTonemapPercentBrightPixels>
//   CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flTonemapMinAvgLum>
//   CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flRate>
//   CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flAccelerateExposureDown>
//   CNetworkVarBase<CUtlSymbolLarge, CInfoWorldLayer::NetworkVar_m_worldName>
//   CNetworkVarBase<CUtlSymbolLarge, CInfoWorldLayer::NetworkVar_m_layerName>
//   CNetworkVarBase<bool, CInfoWorldLayer::NetworkVar_m_bWorldLayerVisible>
//   CNetworkVarBase<bool, CInfoWorldLayer::NetworkVar_m_bEntitiesSpawned>
//   CNetworkVarBase<float, CPointCamera::NetworkVar_m_FOV>
//   CNetworkVarBase<float, CPointCamera::NetworkVar_m_Resolution>
//   CNetworkVarBase<bool, CPointCamera::NetworkVar_m_bFogEnable>
//   CNetworkVarBase<Color, CPointCamera::NetworkVar_m_FogColor>
//   CNetworkVarBase<float, CPointCamera::NetworkVar_m_flFogStart>
//   CNetworkVarBase<float, CPointCamera::NetworkVar_m_flFogEnd>
//   CNetworkVarBase<float, CPointCamera::NetworkVar_m_flFogMaxDensity>
//   CNetworkVarBase<bool, CPointCamera::NetworkVar_m_bActive>
//   CNetworkVarBase<bool, CPointCamera::NetworkVar_m_bUseScreenAspectRatio>
//   CNetworkVarBase<float, CPointCamera::NetworkVar_m_flAspectRatio>
//   CNetworkVarBase<bool, CPointCamera::NetworkVar_m_bNoSky>
//   CNetworkVarBase<float, CPointCamera::NetworkVar_m_fBrightness>
//   CNetworkVarBase<float, CPointCamera::NetworkVar_m_flZFar>
//   CNetworkVarBase<float, CPointCamera::NetworkVar_m_flZNear>
//   CNetworkVarBase<float, CPointCamera::NetworkVar_m_flOverrideShadowFarZ>
//   CNetworkVarBase<long long unsigned int, VPhysicsCollisionAttribute_t::NetworkVar_m_nInteractsAs>
//   CNetworkVarBase<long long unsigned int, VPhysicsCollisionAttribute_t::NetworkVar_m_nInteractsWith>
//   CNetworkVarBase<long long unsigned int, VPhysicsCollisionAttribute_t::NetworkVar_m_nInteractsExclude>
//   CNetworkVarBase<unsigned int, VPhysicsCollisionAttribute_t::NetworkVar_m_nEntityId>
//   CNetworkVarBase<short unsigned int, VPhysicsCollisionAttribute_t::NetworkVar_m_nHierarchyId>
//   CNetworkVarBase<unsigned char, VPhysicsCollisionAttribute_t::NetworkVar_m_nCollisionGroup>
//   CNetworkVarBase<unsigned char, VPhysicsCollisionAttribute_t::NetworkVar_m_nCollisionFunctionMask>
//   CNetworkVarBase<unsigned char, CCollisionProperty::NetworkVar_m_triggerBloat>
//   CNetworkVarBase<Vector, CCollisionProperty::NetworkVar_m_vecSpecifiedSurroundingMins>
//   CNetworkVarBase<Vector, CCollisionProperty::NetworkVar_m_vecSpecifiedSurroundingMaxs>
//   CNetworkVarBase<Vector, CCollisionProperty::NetworkVar_m_vCapsuleCenter1>
//   CNetworkVarBase<Vector, CCollisionProperty::NetworkVar_m_vCapsuleCenter2>
//   CNetworkVarBase<float, CCollisionProperty::NetworkVar_m_flCapsuleRadius>
//   CNetworkVarBase<int, CGlowProperty::NetworkVar_m_iGlowType>
//   CNetworkVarBase<int, CGlowProperty::NetworkVar_m_nGlowRange>
//   CNetworkVarBase<int, CGlowProperty::NetworkVar_m_nGlowRangeMin>
//   CNetworkVarBase<Color, CGlowProperty::NetworkVar_m_glowColorOverride>
//   CNetworkVarBase<bool, CGlowProperty::NetworkVar_m_bFlashing>
//   CNetworkVarBase<CEntityHandle, fogplayerparams_t::NetworkVar_m_hCtrl>
//   CNetworkVarBase<short int, sky3dparams_t::NetworkVar_scale>
//   CNetworkVarBase<Vector, sky3dparams_t::NetworkVar_origin>
//   CNetworkVarBase<unsigned char, sky3dparams_t::NetworkVar_area>
//   CNetworkVarBase<bool, sky3dparams_t::NetworkVar_bClip3DSkyBoxNearToWorldFar>
//   CNetworkVarBase<float, sky3dparams_t::NetworkVar_flClip3DSkyBoxNearToWorldFarOffset>
//   CNetworkVarBase<int, audioparams_t::NetworkVar_soundscapeIndex>
//   CNetworkVarBase<unsigned char, audioparams_t::NetworkVar_localBits>
//   CNetworkVarBase<int, audioparams_t::NetworkVar_soundscapeEntityListIndex>
//   CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flAutoExposureMin>
//   CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flAutoExposureMax>
//   CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flTonemapPercentTarget>
//   CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flTonemapPercentBrightPixels>
//   CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flTonemapMinAvgLum>
//   CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flRate>
//   CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flAccelerateExposureDown>
//   CNetworkVarBase<unsigned int, CBaseViewModel::NetworkVar_m_nViewModelIndex>
//   CNetworkVarBase<unsigned int, CBaseViewModel::NetworkVar_m_nAnimationParity>
//   CNetworkVarBase<HSequence, CBaseViewModel::NetworkVar_m_hLayerSequence>
//   CNetworkVarBase<unsigned int, CBaseViewModel::NetworkVar_m_nLayer>
//   CNetworkVarBase<float, CBaseViewModel::NetworkVar_m_flAnimationStartTime>
//   CNetworkVarBase<CEntityHandle, CBaseViewModel::NetworkVar_m_hWeapon>
//   CNetworkVarBase<CEntityHandle, CBaseCombatWeapon::NetworkVar_m_hOwner>
//   CNetworkVarBase<unsigned int, CBaseCombatWeapon::NetworkVar_m_nViewModelIndex>
//   CNetworkVarBase<float, CBaseCombatWeapon::NetworkVar_m_flNextPrimaryAttack>
//   CNetworkVarBase<float, CBaseCombatWeapon::NetworkVar_m_flNextSecondaryAttack>
//   CNetworkVarBase<int, CBaseCombatWeapon::NetworkVar_m_nQueuedAttack>
//   CNetworkVarBase<float, CBaseCombatWeapon::NetworkVar_m_flTimeAttackQueued>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CBaseCombatWeapon::NetworkVar_m_iViewModelIndex>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CBaseCombatWeapon::NetworkVar_m_iWorldModelIndex>
//   CNetworkVarBase<WeaponState_t, CBaseCombatWeapon::NetworkVar_m_iState>
//   CNetworkVarBase<int, CBaseCombatWeapon::NetworkVar_m_iClip1>
//   CNetworkVarBase<int, CBaseCombatWeapon::NetworkVar_m_iClip2>
//   CNetworkVarBase<bool, CBaseCombatWeapon::NetworkVar_m_bOnlyPump>
//   CNetworkVarBase<float, CBaseCombatWeapon::NetworkVar_m_flTimeWeaponIdle>
//   CNetworkVarBase<bool, CBaseCombatWeapon::NetworkVar_m_bInReload>
//   CNetworkVarBase<float, CBeam::NetworkVar_m_flFrameRate>
//   CNetworkVarBase<float, CBeam::NetworkVar_m_flHDRColorScale>
//   CNetworkVarBase<unsigned char, CBeam::NetworkVar_m_nNumBeamEnts>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CBeam::NetworkVar_m_hBaseMaterial>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CBeam::NetworkVar_m_nHaloIndex>
//   CNetworkVarBase<BeamType_t, CBeam::NetworkVar_m_nBeamType>
//   CNetworkVarBase<unsigned int, CBeam::NetworkVar_m_nBeamFlags>
//   CNetworkVarBase<float, CBeam::NetworkVar_m_fWidth>
//   CNetworkVarBase<float, CBeam::NetworkVar_m_fEndWidth>
//   CNetworkVarBase<float, CBeam::NetworkVar_m_fFadeLength>
//   CNetworkVarBase<float, CBeam::NetworkVar_m_fHaloScale>
//   CNetworkVarBase<float, CBeam::NetworkVar_m_fAmplitude>
//   CNetworkVarBase<float, CBeam::NetworkVar_m_fStartFrame>
//   CNetworkVarBase<float, CBeam::NetworkVar_m_fSpeed>
//   CNetworkVarBase<float, CBeam::NetworkVar_m_flFrame>
//   CNetworkVarBase<BeamClipStyle_t, CBeam::NetworkVar_m_nClipStyle>
//   CNetworkVarBase<bool, CBeam::NetworkVar_m_bTurnedOff>
//   CNetworkVarBase<Vector, CBeam::NetworkVar_m_vecEndPos>
//   CNetworkVarBase<float, CEnvDetailController::NetworkVar_m_flFadeStartDist>
//   CNetworkVarBase<float, CEnvDetailController::NetworkVar_m_flFadeEndDist>
//   CNetworkVarBase<float, CEnvWindShared::NetworkVar_m_flStartTime>
//   CNetworkVarBase<unsigned int, CEnvWindShared::NetworkVar_m_iWindSeed>
//   CNetworkVarBase<short unsigned int, CEnvWindShared::NetworkVar_m_iMinWind>
//   CNetworkVarBase<short unsigned int, CEnvWindShared::NetworkVar_m_iMaxWind>
//   CNetworkVarBase<int, CEnvWindShared::NetworkVar_m_windRadius>
//   CNetworkVarBase<short unsigned int, CEnvWindShared::NetworkVar_m_iMinGust>
//   CNetworkVarBase<short unsigned int, CEnvWindShared::NetworkVar_m_iMaxGust>
//   CNetworkVarBase<float, CEnvWindShared::NetworkVar_m_flMinGustDelay>
//   CNetworkVarBase<float, CEnvWindShared::NetworkVar_m_flMaxGustDelay>
//   CNetworkVarBase<float, CEnvWindShared::NetworkVar_m_flGustDuration>
//   CNetworkVarBase<short unsigned int, CEnvWindShared::NetworkVar_m_iGustDirChange>
//   CNetworkVarBase<Vector, CEnvWindShared::NetworkVar_m_location>
//   CNetworkVarBase<short unsigned int, CEnvWindShared::NetworkVar_m_iInitialWindDir>
//   CNetworkVarBase<float, CEnvWindShared::NetworkVar_m_flInitialWindSpeed>
//   CNetworkVarBase<Vector, CFuncLadder::NetworkVar_m_vecLadderDir>
//   CNetworkVarBase<Vector, CFuncLadder::NetworkVar_m_vecPlayerMountPositionTop>
//   CNetworkVarBase<Vector, CFuncLadder::NetworkVar_m_vecPlayerMountPositionBottom>
//   CNetworkVarBase<float, CFuncLadder::NetworkVar_m_flAutoRideSpeed>
//   CNetworkVarBase<bool, CFuncLadder::NetworkVar_m_bFakeLadder>
//   CNetworkVarBase<bool, CPoseController::NetworkVar_m_bPoseValueParity>
//   CNetworkVarBase<float, CPoseController::NetworkVar_m_fPoseValue>
//   CNetworkVarBase<float, CPoseController::NetworkVar_m_fInterpolationTime>
//   CNetworkVarBase<bool, CPoseController::NetworkVar_m_bInterpolationWrap>
//   CNetworkVarBase<float, CPoseController::NetworkVar_m_fCycleFrequency>
//   CNetworkVarBase<PoseController_FModType_t, CPoseController::NetworkVar_m_nFModType>
//   CNetworkVarBase<float, CPoseController::NetworkVar_m_fFModTimeOffset>
//   CNetworkVarBase<float, CPoseController::NetworkVar_m_fFModRate>
//   CNetworkVarBase<float, CPoseController::NetworkVar_m_fFModAmplitude>
//   CNetworkVarBase<float, CNetworkedSequenceOperation::NetworkVar_m_flPrevCycle>
//   CNetworkVarBase<float, CNetworkedSequenceOperation::NetworkVar_m_flCycle>
//   CNetworkVarBase<CNetworkedQuantizedFloat, CNetworkedSequenceOperation::NetworkVar_m_flWeight>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CSprite::NetworkVar_m_hSpriteMaterial>
//   CNetworkVarBase<CEntityHandle, CSprite::NetworkVar_m_hAttachedToEntity>
//   CNetworkVarBase<int, CSprite::NetworkVar_m_nAttachment>
//   CNetworkVarBase<float, CSprite::NetworkVar_m_flSpriteFramerate>
//   CNetworkVarBase<float, CSprite::NetworkVar_m_flFrame>
//   CNetworkVarBase<unsigned int, CSprite::NetworkVar_m_nBrightness>
//   CNetworkVarBase<float, CSprite::NetworkVar_m_flBrightnessTime>
//   CNetworkVarBase<float, CSprite::NetworkVar_m_flSpriteScale>
//   CNetworkVarBase<float, CSprite::NetworkVar_m_flScaleTime>
//   CNetworkVarBase<bool, CSprite::NetworkVar_m_bWorldSpaceScale>
//   CNetworkVarBase<float, CSprite::NetworkVar_m_flGlowProxySize>
//   CNetworkVarBase<float, CSprite::NetworkVar_m_flHDRColorScale>
//   CNetworkVarBase<int, CAnimationLayer::NetworkVar_m_nOrder>
//   CNetworkVarBase<CNetworkedQuantizedFloat, CAnimationLayer::NetworkVar_m_flPlaybackRate>
//   CNetworkVarBase<bool, CAnimationLayer::NetworkVar_m_bLooping>
//   CNetworkVarBase<int, CAnimationLayer::NetworkVar_m_nNewSequenceParity>
//   CNetworkVarBase<CNetworkedQuantizedFloat, CBaseAnimatingController::NetworkVar_m_flPlaybackRate>
//   CNetworkVarBase<bool, CBaseAnimatingController::NetworkVar_m_bClientSideAnimation>
//   CNetworkVarBase<int, CBaseAnimatingController::NetworkVar_m_nNewSequenceParity>
//   CNetworkVarBase<int, CBaseAnimatingController::NetworkVar_m_nResetEventsParity>
//   CNetworkVarBase<int, CBaseEntity::NetworkVar_m_iHealth>
//   CNetworkVarBase<int, CBaseEntity::NetworkVar_m_iMaxHealth>
//   CNetworkVarBase<MoveCollide_t, CBaseEntity::NetworkVar_m_MoveCollide>
//   CNetworkVarBase<float, CBaseEntity::NetworkVar_m_flCreateTime>
//   CNetworkVarBase<bool, CBaseEntity::NetworkVar_m_bClientSideRagdoll>
//   CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_ubInterpolationFrame>
//   CNetworkVarBase<Vector, CBaseEntity::NetworkVar_m_vecBaseVelocity>
//   CNetworkVarBase<CEntityHandle, CBaseEntity::NetworkVar_m_hGroundEntity>
//   CNetworkVarBase<float, CBaseEntity::NetworkVar_m_flElasticity>
//   CNetworkVarBase<gender_t, CBaseEntity::NetworkVar_m_Gender>
//   CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_nWaterLevel>
//   CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_nMinCPULevel>
//   CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_nMaxCPULevel>
//   CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_nMinGPULevel>
//   CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_nMaxGPULevel>
//   CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_iTextureFrameIndex>
//   CNetworkVarBase<float, CBaseEntity::NetworkVar_m_flNavIgnoreUntilTime>
//   CNetworkVarBase<RenderMode_t, CBaseModelEntity::NetworkVar_m_nRenderMode>
//   CNetworkVarBase<RenderFx_t, CBaseModelEntity::NetworkVar_m_nRenderFX>
//   CNetworkVarBase<Color, CBaseModelEntity::NetworkVar_m_clrRender>
//   CNetworkVarBase<CUtlStringToken, CBaseModelEntity::NetworkVar_m_LightGroup>
//   CNetworkVarBase<float, CBaseModelEntity::NetworkVar_m_flGlowBackfaceMult>
//   CNetworkVarBase<float, CBaseModelEntity::NetworkVar_m_fadeMinDist>
//   CNetworkVarBase<float, CBaseModelEntity::NetworkVar_m_fadeMaxDist>
//   CNetworkVarBase<Vector, CBaseAnimating::NetworkVar_m_vecForce>
//   CNetworkVarBase<int, CBaseAnimating::NetworkVar_m_nForceBone>
//   CNetworkVarBase<unsigned char, CBaseAnimating::NetworkVar_m_nMuzzleFlashParity>
//   CNetworkVarBase<bool, CBaseFlex::NetworkVar_m_blinktoggle>
//   CNetworkVarBase<float, CBaseCombatCharacter::NetworkVar_m_flNextAttack>
//   CNetworkVarBase<float, CBaseCombatCharacter::NetworkVar_m_flFieldOfView>
//   CNetworkVarBase<CEntityHandle, CBaseCombatCharacter::NetworkVar_m_hActiveWeapon>
//   CNetworkVarBase<float, CColorCorrection::NetworkVar_m_flFadeInDuration>
//   CNetworkVarBase<float, CColorCorrection::NetworkVar_m_flFadeOutDuration>
//   CNetworkVarBase<float, CColorCorrection::NetworkVar_m_flMaxWeight>
//   CNetworkVarBase<bool, CColorCorrection::NetworkVar_m_bEnabled>
//   CNetworkVarBase<bool, CColorCorrection::NetworkVar_m_bMaster>
//   CNetworkVarBase<bool, CColorCorrection::NetworkVar_m_bClientSide>
//   CNetworkVarBase<bool, CColorCorrection::NetworkVar_m_bExclusive>
//   CNetworkVarBase<float, CColorCorrection::NetworkVar_m_MinFalloff>
//   CNetworkVarBase<float, CColorCorrection::NetworkVar_m_MaxFalloff>
//   CNetworkVarBase<float, CColorCorrection::NetworkVar_m_flCurWeight>
//   CNetworkVarBase<bool, CBreakableProp::NetworkVar_m_noGhostCollision>
//   CNetworkVarBase<float, CBreakableProp::NetworkVar_m_flClothScale>
//   CNetworkVarBase<DoorState_t, CBasePropDoor::NetworkVar_m_eDoorState>
//   CNetworkVarBase<bool, CBasePropDoor::NetworkVar_m_bLocked>
//   CNetworkVarBase<bool, CBasePropDoor::NetworkVar_m_isRescueDoor>
//   CNetworkVarBase<CEntityHandle, CBasePropDoor::NetworkVar_m_hMaster>
//   CNetworkVarBase<CEntityHandle, CBaseButton::NetworkVar_m_glowEntity>
//   CNetworkVarBase<bool, CBaseButton::NetworkVar_m_usable>
//   CNetworkVarBase<CUtlSymbolLarge, CBaseButton::NetworkVar_m_szDisplayText>
//   CNetworkVarBase<CUtlSymbolLarge, CButtonTimed::NetworkVar_m_sUseString>
//   CNetworkVarBase<CUtlSymbolLarge, CButtonTimed::NetworkVar_m_sUseSubString>
//   CNetworkVarBase<bool, CBaseDoor::NetworkVar_m_bIsUsable>
//   CNetworkVarBase<bool, CDynamicProp::NetworkVar_m_bUseHitboxesForRenderBox>
//   CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flStartTime>
//   CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flFadeInStart>
//   CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flFadeInLength>
//   CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flFadeOutModelStart>
//   CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flFadeOutModelLength>
//   CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flFadeOutStart>
//   CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flFadeOutLength>
//   CNetworkVarBase<EntityDisolveType_t, CEntityDissolve::NetworkVar_m_nDissolveType>
//   CNetworkVarBase<Vector, CEntityDissolve::NetworkVar_m_vDissolverOrigin>
//   CNetworkVarBase<unsigned int, CEntityDissolve::NetworkVar_m_nMagnitude>
//   CNetworkVarBase<CEntityHandle, CEntityFlame::NetworkVar_m_hEntAttached>
//   CNetworkVarBase<bool, CEntityFlame::NetworkVar_m_bCheapEffect>
//   CNetworkVarBase<bool, CEnvDOFController::NetworkVar_m_bDOFEnabled>
//   CNetworkVarBase<float, CEnvDOFController::NetworkVar_m_flNearBlurDepth>
//   CNetworkVarBase<float, CEnvDOFController::NetworkVar_m_flNearFocusDepth>
//   CNetworkVarBase<float, CEnvDOFController::NetworkVar_m_flFarFocusDepth>
//   CNetworkVarBase<float, CEnvDOFController::NetworkVar_m_flFarBlurDepth>
//   CNetworkVarBase<float, CEnvDOFController::NetworkVar_m_flNearBlurRadius>
//   CNetworkVarBase<float, CEnvDOFController::NetworkVar_m_flFarBlurRadius>
//   CNetworkVarBase<CEntityHandle, CEnvProjectedTexture::NetworkVar_m_hTargetEntity>
//   CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bState>
//   CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bAlwaysUpdate>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flLightFOV>
//   CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bEnableShadows>
//   CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bSimpleProjection>
//   CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bLightOnlyTarget>
//   CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bLightWorld>
//   CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bCameraSpace>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flBrightnessScale>
//   CNetworkVarBase<Color, CEnvProjectedTexture::NetworkVar_m_LightColor>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flIntensity>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flLinearAttenuation>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flQuadraticAttenuation>
//   CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bVolumetric>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flNoiseStrength>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flFlashlightTime>
//   CNetworkVarBase<unsigned int, CEnvProjectedTexture::NetworkVar_m_nNumPlanes>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flPlaneOffset>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flVolumetricIntensity>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flColorTransitionTime>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flAmbient>
//   CNetworkVarBase<int, CEnvProjectedTexture::NetworkVar_m_nSpotlightTextureFrame>
//   CNetworkVarBase<unsigned int, CEnvProjectedTexture::NetworkVar_m_nShadowQuality>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flNearZ>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flFarZ>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flProjectionSize>
//   CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flRotation>
//   CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bFlipHorizontal>
//   CNetworkVarBase<float, CBaseFire::NetworkVar_m_flScale>
//   CNetworkVarBase<float, CBaseFire::NetworkVar_m_flStartScale>
//   CNetworkVarBase<float, CBaseFire::NetworkVar_m_flScaleTime>
//   CNetworkVarBase<unsigned int, CBaseFire::NetworkVar_m_nFlags>
//   CNetworkVarBase<int, CFireSmoke::NetworkVar_m_nFlameModelIndex>
//   CNetworkVarBase<int, CFireSmoke::NetworkVar_m_nFlameFromAboveModelIndex>
//   CNetworkVarBase<float, CFish::NetworkVar_m_x>
//   CNetworkVarBase<float, CFish::NetworkVar_m_y>
//   CNetworkVarBase<float, CFish::NetworkVar_m_z>
//   CNetworkVarBase<float, CFish::NetworkVar_m_angle>
//   CNetworkVarBase<Vector, CFish::NetworkVar_m_poolOrigin>
//   CNetworkVarBase<float, CFish::NetworkVar_m_waterLevel>
//   CNetworkVarBase<int, CGenericFlexCycler::NetworkVar_m_nTestMode>
//   CNetworkVarBase<float, CFuncAreaPortalWindow::NetworkVar_m_flFadeStartDist>
//   CNetworkVarBase<float, CFuncAreaPortalWindow::NetworkVar_m_flFadeDist>
//   CNetworkVarBase<float, CFuncAreaPortalWindow::NetworkVar_m_flTranslucencyLimit>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CFuncAreaPortalWindow::NetworkVar_m_iBackgroundModelIndex>
//   CNetworkVarBase<float, CFuncDistanceOccluder::NetworkVar_m_flFadeStartDist>
//   CNetworkVarBase<float, CFuncDistanceOccluder::NetworkVar_m_flFadeEndDist>
//   CNetworkVarBase<float, CFuncDistanceOccluder::NetworkVar_m_flTranslucencyLimit>
//   CNetworkVarBase<CHandle<CBaseEntity>, CFuncDistanceOccluder::NetworkVar_m_hAttachedOccluder>
//   CNetworkVarBase<bool, CParticleSystem::NetworkVar_m_bActive>
//   CNetworkVarBase<int, CParticleSystem::NetworkVar_m_nStopType>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>, CParticleSystem::NetworkVar_m_iEffectIndex>
//   CNetworkVarBase<float, CParticleSystem::NetworkVar_m_flStartTime>
//   CNetworkVarBase<long long unsigned int, CModelState::NetworkVar_m_MeshGroupMask>
//   CNetworkVarBase<bool, CSkeletonInstance::NetworkVar_m_bIsRenderingEnabled>
//   CNetworkVarBase<bool, CSkeletonInstance::NetworkVar_m_bIsAnimationEnabled>
//   CNetworkVarBase<CUtlStringToken, CSkeletonInstance::NetworkVar_m_materialGroup>
//   CNetworkVarBase<unsigned char, CSkeletonInstance::NetworkVar_m_nHitboxSet>
//   CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fLocalContrastStrength>
//   CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fLocalContrastEdgeStrength>
//   CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fVignetteStart>
//   CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fVignetteEnd>
//   CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fVignetteBlurStrength>
//   CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fFadeToBlackStrength>
//   CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fGrainStrength>
//   CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fTopVignetteStrength>
//   CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fFadeTime>
//   CNetworkVarBase<bool, CPostProcessController::NetworkVar_m_bMaster>
//   CNetworkVarBase<unsigned int, CPlayerLocalData::NetworkVar_m_iHideHUD>
//   CNetworkVarBase<float, CPlayerLocalData::NetworkVar_m_flFOVRate>
//   CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bDucked>
//   CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bDucking>
//   CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bInDuckJump>
//   CNetworkVarBase<unsigned int, CPlayerLocalData::NetworkVar_m_nDuckTimeMsecs>
//   CNetworkVarBase<unsigned int, CPlayerLocalData::NetworkVar_m_nDuckJumpTimeMsecs>
//   CNetworkVarBase<unsigned int, CPlayerLocalData::NetworkVar_m_nJumpTimeMsecs>
//   CNetworkVarBase<float, CPlayerLocalData::NetworkVar_m_flFallVelocity>
//   CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bDrawViewmodel>
//   CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bPoisoned>
//   CNetworkVarBase<float, CPlayerLocalData::NetworkVar_m_flStepSize>
//   CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bAllowAutoMovement>
//   CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bSlowMovement>
//   CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bAutoAimTarget>
//   CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hPostProcessCtrl>
//   CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hColorCorrectionCtrl>
//   CNetworkVarBase<bool, CBasePlayer::NetworkVar_m_fOnTarget>
//   CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hHeldEntity>
//   CNetworkVarBase<int, CBasePlayer::NetworkVar_m_iBonusProgress>
//   CNetworkVarBase<int, CBasePlayer::NetworkVar_m_iBonusChallenge>
//   CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flDeathTime>
//   CNetworkVarBase<unsigned char, CBasePlayer::NetworkVar_m_iObserverMode>
//   CNetworkVarBase<unsigned int, CBasePlayer::NetworkVar_m_iFOV>
//   CNetworkVarBase<unsigned int, CBasePlayer::NetworkVar_m_iDefaultFOV>
//   CNetworkVarBase<unsigned int, CBasePlayer::NetworkVar_m_iFOVStart>
//   CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flFOVTime>
//   CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hZoomOwner>
//   CNetworkVarBase<CHandle<CBaseEntity>, CBasePlayer::NetworkVar_m_hTonemapController>
//   CNetworkVarBase<int, CBasePlayer::NetworkVar_m_ArmorValue>
//   CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hPropHMDAvatar>
//   CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hPointHMDAnchor>
//   CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flMaxspeed>
//   CNetworkVarBase<CUtlStringToken, CBasePlayer::NetworkVar_m_ladderSurfaceProps>
//   CNetworkVarBase<Vector, CBasePlayer::NetworkVar_m_vecLadderNormal>
//   CNetworkVarBase<unsigned int, CBasePlayer::NetworkVar_m_nTickBase>
//   CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hLastWeapon>
//   CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hViewEntity>
//   CNetworkVarBase<CEntityHandle, CBasePlayer::NetworkVar_m_hConstraintEntity>
//   CNetworkVarBase<Vector, CBasePlayer::NetworkVar_m_vecConstraintCenter>
//   CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flConstraintRadius>
//   CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flConstraintWidth>
//   CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flConstraintSpeedFactor>
//   CNetworkVarBase<bool, CBasePlayer::NetworkVar_m_bConstraintPastRadius>
//   CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flLaggedMovementValue>
//   CNetworkVarBase<int, CBasePlayer::NetworkVar_m_currentSCLPacked>
//   CNetworkVarBase<long long unsigned int, CBasePlayer::NetworkVar_m_nUnHoldableButtons>
//   CNetworkVarBase<float, CRagdollProp::NetworkVar_m_flBlendWeight>
//   CNetworkVarBase<bool, CPhysicsProp::NetworkVar_m_bAwake>
//   CNetworkVarBase<short unsigned int, CRopeKeyframe::NetworkVar_m_RopeFlags>
//   CNetworkVarBase<short int, CRopeKeyframe::NetworkVar_m_Slack>
//   CNetworkVarBase<float, CRopeKeyframe::NetworkVar_m_Width>
//   CNetworkVarBase<float, CRopeKeyframe::NetworkVar_m_TextureScale>
//   CNetworkVarBase<unsigned char, CRopeKeyframe::NetworkVar_m_nSegments>
//   CNetworkVarBase<bool, CRopeKeyframe::NetworkVar_m_bConstrainBetweenEndpoints>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CRopeKeyframe::NetworkVar_m_iRopeMaterialModelIndex>
//   CNetworkVarBase<unsigned char, CRopeKeyframe::NetworkVar_m_Subdiv>
//   CNetworkVarBase<unsigned char, CRopeKeyframe::NetworkVar_m_nChangeCount>
//   CNetworkVarBase<short int, CRopeKeyframe::NetworkVar_m_RopeLength>
//   CNetworkVarBase<unsigned char, CRopeKeyframe::NetworkVar_m_fLockedPoints>
//   CNetworkVarBase<float, CRopeKeyframe::NetworkVar_m_flScrollSpeed>
//   CNetworkVarBase<CEntityHandle, CRopeKeyframe::NetworkVar_m_hStartPoint>
//   CNetworkVarBase<CEntityHandle, CRopeKeyframe::NetworkVar_m_hEndPoint>
//   CNetworkVarBase<short int, CRopeKeyframe::NetworkVar_m_iStartAttachment>
//   CNetworkVarBase<short int, CRopeKeyframe::NetworkVar_m_iEndAttachment>
//   CNetworkVarBase<CUtlStringToken, CSkyCamera::NetworkVar_m_skyboxSlotToken>
//   CNetworkVarBase<float, CSpotlightEnd::NetworkVar_m_flLightScale>
//   CNetworkVarBase<float, CSpotlightEnd::NetworkVar_m_Radius>
//   CNetworkVarBase<int, CTeam::NetworkVar_m_iScore>
//   CNetworkVarBase<int, CTeam::NetworkVar_m_iRoundsWon>
//   CNetworkVarBase<float, CountdownTimer::NetworkVar_m_duration>
//   CNetworkVarBase<float, CountdownTimer::NetworkVar_m_timestamp>
//   CNetworkVarBase<bool, CBaseTrigger::NetworkVar_m_bClientSidePredicted>
//   CNetworkVarBase<CEntityHandle, CPropVehicleDriveable::NetworkVar_m_hPlayer>
//   CNetworkVarBase<int, CPropVehicleDriveable::NetworkVar_m_nSpeed>
//   CNetworkVarBase<short int, CPropVehicleDriveable::NetworkVar_m_nRPM>
//   CNetworkVarBase<float, CPropVehicleDriveable::NetworkVar_m_flThrottle>
//   CNetworkVarBase<int, CPropVehicleDriveable::NetworkVar_m_nBoostTimeLeft>
//   CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_bHasBoost>
//   CNetworkVarBase<Vector, CPropVehicleDriveable::NetworkVar_m_vecEyeExitEndpoint>
//   CNetworkVarBase<Vector, CPropVehicleDriveable::NetworkVar_m_vecGunCrosshair>
//   CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_bUnableToFire>
//   CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_bHasGun>
//   CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_nScannerDisabledWeapons>
//   CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_nScannerDisabledVehicle>
//   CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_bEnterAnimOn>
//   CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_bExitAnimOn>
//   CNetworkVarBase<float, CVGuiScreen::NetworkVar_m_flWidth>
//   CNetworkVarBase<float, CVGuiScreen::NetworkVar_m_flHeight>
//   CNetworkVarBase<int, CVGuiScreen::NetworkVar_m_nAttachmentIndex>
//   CNetworkVarBase<int, CVGuiScreen::NetworkVar_m_nPanelName>
//   CNetworkVarBase<unsigned int, CVGuiScreen::NetworkVar_m_fScreenFlags>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CVGuiScreen::NetworkVar_m_nOverlayMaterial>
//   CNetworkVarBase<CEntityHandle, CVGuiScreen::NetworkVar_m_hPlayerOwner>
//   CNetworkVarBase<CEntityHandle, CDOTAPlayer::NetworkVar_m_hAssignedHero>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nGameState>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bGamePaused>
//   CNetworkVarBase<int, CTimeline::NetworkVar_m_nBucketCount>
//   CNetworkVarBase<float, CTimeline::NetworkVar_m_flInterval>
//   CNetworkVarBase<float, CTimeline::NetworkVar_m_flFinalValue>
//   CNetworkVarBase<TimelineCompression_t, CTimeline::NetworkVar_m_nCompressionType>
//   CNetworkVarBase<bool, CTimeline::NetworkVar_m_bStopped>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_fGameTime>
//   CNetworkVarBase<CEntityHandle, CBaseVRHandAttachment::NetworkVar_m_hAttachedHand>
//   CNetworkVarBase<bool, CBaseVRHandAttachment::NetworkVar_m_bIsAttached>
//   CNetworkVarBase<float, CFuncConveyor::NetworkVar_m_flConveyorSpeed>
//   CNetworkVarBase<bool, CColorCorrectionVolume::NetworkVar_m_bEnabled>
//   CNetworkVarBase<float, CColorCorrectionVolume::NetworkVar_m_MaxWeight>
//   CNetworkVarBase<float, CColorCorrectionVolume::NetworkVar_m_FadeDuration>
//   CNetworkVarBase<float, CColorCorrectionVolume::NetworkVar_m_Weight>
//   CNetworkVarBase<CUtlSymbolLarge, CPointCommentaryNode::NetworkVar_m_iszCommentaryFile>
//   CNetworkVarBase<CEntityHandle, CPointCommentaryNode::NetworkVar_m_hViewPosition>
//   CNetworkVarBase<bool, CPointCommentaryNode::NetworkVar_m_bActive>
//   CNetworkVarBase<float, CPointCommentaryNode::NetworkVar_m_flStartTime>
//   CNetworkVarBase<CUtlSymbolLarge, CPointCommentaryNode::NetworkVar_m_iszSpeakers>
//   CNetworkVarBase<unsigned int, CPointCommentaryNode::NetworkVar_m_iNodeNumber>
//   CNetworkVarBase<int, CPointCommentaryNode::NetworkVar_m_iNodeNumberMax>
//   CNetworkVarBase<unsigned char, CDynamicLight::NetworkVar_m_Flags>
//   CNetworkVarBase<unsigned char, CDynamicLight::NetworkVar_m_LightStyle>
//   CNetworkVarBase<float, CDynamicLight::NetworkVar_m_Radius>
//   CNetworkVarBase<int, CDynamicLight::NetworkVar_m_Exponent>
//   CNetworkVarBase<float, CDynamicLight::NetworkVar_m_InnerAngle>
//   CNetworkVarBase<float, CDynamicLight::NetworkVar_m_OuterAngle>
//   CNetworkVarBase<float, CDynamicLight::NetworkVar_m_SpotRadius>
//   CNetworkVarBase<PrecipitationType_t, CPrecipitation::NetworkVar_m_nPrecipType>
//   CNetworkVarBase<float, CPrecipitation::NetworkVar_m_minSpeed>
//   CNetworkVarBase<float, CPrecipitation::NetworkVar_m_maxSpeed>
//   CNetworkVarBase<float, CEnvScreenOverlay::NetworkVar_m_flStartTime>
//   CNetworkVarBase<int, CEnvScreenOverlay::NetworkVar_m_iDesiredOverlay>
//   CNetworkVarBase<bool, CEnvScreenOverlay::NetworkVar_m_bIsActive>
//   CNetworkVarBase<float, CEnvScreenEffect::NetworkVar_m_flDuration>
//   CNetworkVarBase<ScreenEffectType_t, CEnvScreenEffect::NetworkVar_m_nType>
//   CNetworkVarBase<Color, CEnvFade::NetworkVar_m_fadeColor>
//   CNetworkVarBase<int, CVoteController::NetworkVar_m_activeIssueIndex>
//   CNetworkVarBase<int, CVoteController::NetworkVar_m_onlyTeamToVote>
//   CNetworkVarBase<int, CVoteController::NetworkVar_m_votesYes>
//   CNetworkVarBase<int, CVoteController::NetworkVar_m_votesNo>
//   CNetworkVarBase<int, CVoteController::NetworkVar_m_potentialVotes>
//   CNetworkVarBase<CEntityHandle, CSpeechBubbleInfo::NetworkVar_m_hNPC>
//   CNetworkVarBase<float, CSpeechBubbleInfo::NetworkVar_m_flDuration>
//   CNetworkVarBase<unsigned int, CSpeechBubbleInfo::NetworkVar_m_unOffsetX>
//   CNetworkVarBase<unsigned int, CSpeechBubbleInfo::NetworkVar_m_unOffsetY>
//   CNetworkVarBase<short unsigned int, CSpeechBubbleInfo::NetworkVar_m_unCount>
//   CNetworkVarBase<Color, CFunc_Dust::NetworkVar_m_Color>
//   CNetworkVarBase<unsigned int, CFunc_Dust::NetworkVar_m_SpawnRate>
//   CNetworkVarBase<unsigned int, CFunc_Dust::NetworkVar_m_SpeedMax>
//   CNetworkVarBase<float, CFunc_Dust::NetworkVar_m_flSizeMin>
//   CNetworkVarBase<float, CFunc_Dust::NetworkVar_m_flSizeMax>
//   CNetworkVarBase<unsigned int, CFunc_Dust::NetworkVar_m_DistMax>
//   CNetworkVarBase<unsigned int, CFunc_Dust::NetworkVar_m_LifetimeMin>
//   CNetworkVarBase<unsigned int, CFunc_Dust::NetworkVar_m_LifetimeMax>
//   CNetworkVarBase<float, CFunc_Dust::NetworkVar_m_FallSpeed>
//   CNetworkVarBase<unsigned int, CFunc_Dust::NetworkVar_m_DustFlags>
//   CNetworkVarBase<unsigned int, CFunc_LOD::NetworkVar_m_nDisappearMinDist>
//   CNetworkVarBase<unsigned int, CFunc_LOD::NetworkVar_m_nDisappearMaxDist>
//   CNetworkVarBase<CUtlString, CFuncMonitor::NetworkVar_m_targetCamera>
//   CNetworkVarBase<int, CFuncMonitor::NetworkVar_m_nResolutionEnum>
//   CNetworkVarBase<bool, CFuncMonitor::NetworkVar_m_bRenderShadows>
//   CNetworkVarBase<bool, CFuncMonitor::NetworkVar_m_bUseUniqueColorTarget>
//   CNetworkVarBase<CUtlString, CFuncMonitor::NetworkVar_m_brushModelName>
//   CNetworkVarBase<CHandle<CBaseEntity>, CFuncMonitor::NetworkVar_m_hTargetCamera>
//   CNetworkVarBase<bool, CFuncMonitor::NetworkVar_m_bEnabled>
//   CNetworkVarBase<bool, CDotaSubquestBase::NetworkVar_m_bHidden>
//   CNetworkVarBase<bool, CDotaSubquestBase::NetworkVar_m_bCompleted>
//   CNetworkVarBase<bool, CDotaSubquestBase::NetworkVar_m_bShowProgressBar>
//   CNetworkVarBase<int, CDotaSubquestBase::NetworkVar_m_nProgressBarHueShift>
//   CNetworkVarBase<int, CDotaSubquestBase::NetworkVar_m_nTextReplaceValueVersion>
//   CNetworkVarBase<int, CDotaQuest::NetworkVar_m_nQuestType>
//   CNetworkVarBase<bool, CDotaQuest::NetworkVar_m_bHidden>
//   CNetworkVarBase<bool, CDotaQuest::NetworkVar_m_bCompleted>
//   CNetworkVarBase<bool, CDotaQuest::NetworkVar_m_bWinIfCompleted>
//   CNetworkVarBase<bool, CDotaQuest::NetworkVar_m_bLoseIfCompleted>
//   CNetworkVarBase<int, CDotaQuest::NetworkVar_m_nTextReplaceValueVersion>
//   CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nTutorialState>
//   CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nTaskProgress>
//   CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nTaskSteps>
//   CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nTaskSecondsRemianing>
//   CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nUIState>
//   CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nShopState>
//   CNetworkVarBase<Vector, CDotaTutorialNetworker::NetworkVar_m_TargetLocation>
//   CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nLocationID>
//   CNetworkVarBase<float, CBaseGrenade::NetworkVar_m_DmgRadius>
//   CNetworkVarBase<float, CBaseGrenade::NetworkVar_m_flDamage>
//   CNetworkVarBase<unsigned int, CInfoOverlayAccessor::NetworkVar_m_iOverlayID>
//   CNetworkVarBase<unsigned int, CLightGlow::NetworkVar_m_nHorizontalSize>
//   CNetworkVarBase<unsigned int, CLightGlow::NetworkVar_m_nVerticalSize>
//   CNetworkVarBase<unsigned int, CLightGlow::NetworkVar_m_nMinDist>
//   CNetworkVarBase<unsigned int, CLightGlow::NetworkVar_m_nMaxDist>
//   CNetworkVarBase<unsigned int, CLightGlow::NetworkVar_m_nOuterMaxDist>
//   CNetworkVarBase<float, CLightGlow::NetworkVar_m_flGlowProxySize>
//   CNetworkVarBase<float, CLightGlow::NetworkVar_m_flHDRColorScale>
//   CNetworkVarBase<int, CMaterialModifyControl::NetworkVar_m_iFrameStart>
//   CNetworkVarBase<int, CMaterialModifyControl::NetworkVar_m_iFrameEnd>
//   CNetworkVarBase<bool, CMaterialModifyControl::NetworkVar_m_bWrap>
//   CNetworkVarBase<float, CMaterialModifyControl::NetworkVar_m_flFramerate>
//   CNetworkVarBase<bool, CMaterialModifyControl::NetworkVar_m_bNewAnimCommandsSemaphore>
//   CNetworkVarBase<float, CMaterialModifyControl::NetworkVar_m_flFloatLerpStartValue>
//   CNetworkVarBase<float, CMaterialModifyControl::NetworkVar_m_flFloatLerpEndValue>
//   CNetworkVarBase<float, CMaterialModifyControl::NetworkVar_m_flFloatLerpTransitionTime>
//   CNetworkVarBase<MaterialModifyMode_t, CMaterialModifyControl::NetworkVar_m_nModifyMode>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iGameMode>
//   CNetworkVarBase<unsigned int, CRagdollPropAttached::NetworkVar_m_boneIndexAttached>
//   CNetworkVarBase<unsigned int, CRagdollPropAttached::NetworkVar_m_ragdollAttachedObjectIndex>
//   CNetworkVarBase<Vector, CRagdollPropAttached::NetworkVar_m_attachmentPointBoneSpace>
//   CNetworkVarBase<Vector, CRagdollPropAttached::NetworkVar_m_attachmentPointRagdollSpace>
//   CNetworkVarBase<bool, CPointWorldText::NetworkVar_m_bEnabled>
//   CNetworkVarBase<bool, CPointWorldText::NetworkVar_m_bFullbright>
//   CNetworkVarBase<float, CPointWorldText::NetworkVar_m_flWorldUnitsPerPx>
//   CNetworkVarBase<float, CPointWorldText::NetworkVar_m_flFontSize>
//   CNetworkVarBase<float, CPointWorldText::NetworkVar_m_flDepthOffset>
//   CNetworkVarBase<Color, CPointWorldText::NetworkVar_m_Color>
//   CNetworkVarBase<PointWorldTextJustifyHorizontal_t, CPointWorldText::NetworkVar_m_nJustifyHorizontal>
//   CNetworkVarBase<PointWorldTextJustifyVertical_t, CPointWorldText::NetworkVar_m_nJustifyVertical>
//   CNetworkVarBase<PointWorldTextReorientMode_t, CPointWorldText::NetworkVar_m_nReorientMode>
//   CNetworkVarBase<bool, CPointValueRemapper::NetworkVar_m_bDisabled>
//   CNetworkVarBase<bool, CPointValueRemapper::NetworkVar_m_bUpdateOnClient>
//   CNetworkVarBase<ValueRemapperInputType_t, CPointValueRemapper::NetworkVar_m_nInputType>
//   CNetworkVarBase<CEntityHandle, CPointValueRemapper::NetworkVar_m_hRemapLineStart>
//   CNetworkVarBase<CEntityHandle, CPointValueRemapper::NetworkVar_m_hRemapLineEnd>
//   CNetworkVarBase<float, CPointValueRemapper::NetworkVar_m_flMaximumChangePerSecond>
//   CNetworkVarBase<float, CPointValueRemapper::NetworkVar_m_flDisengageDistance>
//   CNetworkVarBase<float, CPointValueRemapper::NetworkVar_m_flEngageDistance>
//   CNetworkVarBase<bool, CPointValueRemapper::NetworkVar_m_bRequiresUseKey>
//   CNetworkVarBase<ValueRemapperOutputType_t, CPointValueRemapper::NetworkVar_m_nOutputType>
//   CNetworkVarBase<ValueRemapperHapticsType_t, CPointValueRemapper::NetworkVar_m_nHapticsType>
//   CNetworkVarBase<ValueRemapperMomentumType_t, CPointValueRemapper::NetworkVar_m_nMomentumType>
//   CNetworkVarBase<float, CPointValueRemapper::NetworkVar_m_flMomentumModifier>
//   CNetworkVarBase<float, CPointValueRemapper::NetworkVar_m_flSnapValue>
//   CNetworkVarBase<ValueRemapperRatchetType_t, CPointValueRemapper::NetworkVar_m_nRatchetType>
//   CNetworkVarBase<float, CPointValueRemapper::NetworkVar_m_flInputOffset>
//   CNetworkVarBase<bool, CPropVRTrackedObject::NetworkVar_m_bIsTracking>
//   CNetworkVarBase<Vector, CPropVRTrackedObject::NetworkVar_m_vTrackedPosition>
//   CNetworkVarBase<QAngle, CPropVRTrackedObject::NetworkVar_m_qTrackedAngles>
//   CNetworkVarBase<Vector, CPropVRTrackedObject::NetworkVar_m_vPhysicallyConstrainedPosition>
//   CNetworkVarBase<QAngle, CPropVRTrackedObject::NetworkVar_m_qPhysicallyConstrainedAngles>
//   CNetworkVarBase<bool, CPropVRTrackedObject::NetworkVar_m_bClientIsAuthoritativeForTransform>
//   CNetworkVarBase<bool, CPropVRTrackedObject::NetworkVar_m_bIsInContact>
//   CNetworkVarBase<CEntityHandle, CPropHMDAvatar::NetworkVar_m_hCloseCaption>
//   CNetworkVarBase<CEntityHandle, CPropVRHand::NetworkVar_m_hHMDAvatar>
//   CNetworkVarBase<bool, CPropVRHand::NetworkVar_m_bInitialized>
//   CNetworkVarBase<bool, CPropVRHand::NetworkVar_m_bIsInView>
//   CNetworkVarBase<int, CPropVRHand::NetworkVar_m_nHandID>
//   CNetworkVarBase<float, CPropVRHand::NetworkVar_m_flTriggerAnalogValue>
//   CNetworkVarBase<float, CPropVRHand::NetworkVar_m_flGripAnalogValue>
//   CNetworkVarBase<float, CPropVRHand::NetworkVar_m_flTrackpadOrJoystickAnalogValueX>
//   CNetworkVarBase<float, CPropVRHand::NetworkVar_m_flTrackpadOrJoystickAnalogValueY>
//   CNetworkVarBase<bool, CPropVRHand::NetworkVar_m_bCanPerformUse>
//   CNetworkVarBase<eLiteralHandType, CPropVRHand::NetworkVar_m_LiteralHandType>
//   CNetworkVarBase<CEntityHandle, CHandUseControllerShared::NetworkVar_m_hHeldObject>
//   CNetworkVarBase<bool, CHandUseControllerShared::NetworkVar_m_bHeldObjectPhysicsInContact>
//   CNetworkVarBase<QAngle, CHandUseControllerShared::NetworkVar_m_CarryTargetToHandSpaceAngle>
//   CNetworkVarBase<Vector, CHandUseControllerShared::NetworkVar_m_CarryTargetToHandSpaceOrigin>
//   CNetworkVarBase<Vector, CHandUseControllerShared::NetworkVar_m_vecHoldPositionObjectLocal>
//   CNetworkVarBase<bool, CWorldUIInteractController::NetworkVar_m_bHasActivePanel>
//   CNetworkVarBase<CHandle<CPropZipline>, CPropZipline::NetworkVar_m_hPrevZipline>
//   CNetworkVarBase<CHandle<CPropZipline>, CPropZipline::NetworkVar_m_hNextZipline>
//   CNetworkVarBase<unsigned int, CPhysBoxMultiplayer::NetworkVar_m_iPhysicsMode>
//   CNetworkVarBase<float, CPhysBoxMultiplayer::NetworkVar_m_fMass>
//   CNetworkVarBase<signed char, CRagdollManager::NetworkVar_m_iCurrentMaxRagdollCount>
//   CNetworkVarBase<bool, CSceneEntity::NetworkVar_m_bIsPlayingBack>
//   CNetworkVarBase<bool, CSceneEntity::NetworkVar_m_bPaused>
//   CNetworkVarBase<bool, CSceneEntity::NetworkVar_m_bMultiplayer>
//   CNetworkVarBase<float, CSceneEntity::NetworkVar_m_flForceClientTime>
//   CNetworkVarBase<short unsigned int, CSceneEntity::NetworkVar_m_nSceneStringIndex>
//   CNetworkVarBase<Vector, CShadowControl::NetworkVar_m_shadowDirection>
//   CNetworkVarBase<Color, CShadowControl::NetworkVar_m_shadowColor>
//   CNetworkVarBase<float, CShadowControl::NetworkVar_m_flShadowMaxDist>
//   CNetworkVarBase<bool, CShadowControl::NetworkVar_m_bDisableShadows>
//   CNetworkVarBase<bool, CShadowControl::NetworkVar_m_bEnableLocalLightShadows>
//   CNetworkVarBase<bool, CParticlePerformanceMonitor::NetworkVar_m_bDisplayPerf>
//   CNetworkVarBase<bool, CParticlePerformanceMonitor::NetworkVar_m_bMeasurePerf>
//   CNetworkVarBase<Vector, CSun::NetworkVar_m_vDirection>
//   CNetworkVarBase<Color, CSun::NetworkVar_m_clrOverlay>
//   CNetworkVarBase<bool, CSun::NetworkVar_m_bOn>
//   CNetworkVarBase<unsigned int, CSun::NetworkVar_m_nSize>
//   CNetworkVarBase<int, CSun::NetworkVar_m_nOverlaySize>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CSun::NetworkVar_m_nMaterial>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CSun::NetworkVar_m_nOverlayMaterial>
//   CNetworkVarBase<float, CSun::NetworkVar_m_flHDRColorScale>
//   CNetworkVarBase<CEntityHandle, CHandleTest::NetworkVar_m_Handle>
//   CNetworkVarBase<bool, CHandleTest::NetworkVar_m_bSendHandle>
//   CNetworkVarBase<CStrongHandle<InfoForResourceTypeCPostProcessingResource>, CPostProcessingVolume::NetworkVar_m_hPostSett
//   CNetworkVarBase<float, CPostProcessingVolume::NetworkVar_m_flFadeTime>
//   CNetworkVarBase<bool, CPostProcessingVolume::NetworkVar_m_bMaster>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iCurrentLevel>
//   CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flMana>
//   CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flMaxMana>
//   CNetworkVarBase<long long unsigned int, CDOTA_BaseNPC::NetworkVar_m_iIsControllableByPlayer64>
//   CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iPrimaryAttribute>
//   CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bHidden>
//   CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bActivated>
//   CNetworkVarBase<int, CDOTABaseAbility::NetworkVar_m_iDirtyButtons>
//   CNetworkVarBase<int, CDOTABaseAbility::NetworkVar_m_iLevel>
//   CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bToggleState>
//   CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bInAbilityPhase>
//   CNetworkVarBase<float, CDOTABaseAbility::NetworkVar_m_fCooldown>
//   CNetworkVarBase<int, CDOTABaseAbility::NetworkVar_m_iCastRange>
//   CNetworkVarBase<float, CDOTABaseAbility::NetworkVar_m_flCooldownLength>
//   CNetworkVarBase<int, CDOTABaseAbility::NetworkVar_m_iManaCost>
//   CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bAutoCastState>
//   CNetworkVarBase<float, CDOTABaseAbility::NetworkVar_m_flChannelStartTime>
//   CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bInIndefiniteCooldown>
//   CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bFrozenCooldown>
//   CNetworkVarBase<float, CDOTABaseAbility::NetworkVar_m_flOverrideCastPoint>
//   CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bStolen>
//   CNetworkVarBase<int, CDOTA_Item::NetworkVar_m_iInitialCharges>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bCanBeUsedOutOfInventory>
//   CNetworkVarBase<float, CDOTA_Item::NetworkVar_m_flPurchaseTime>
//   CNetworkVarBase<int, CDOTA_Item::NetworkVar_m_iCurrentCharges>
//   CNetworkVarBase<int, CDOTA_Item::NetworkVar_m_iSecondaryCharges>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bCombineLocked>
//   CNetworkVarBase<int, CDOTA_Item::NetworkVar_m_iPlayerOwnerID>
//   CNetworkVarBase<item_definition_index_t, CEconItemView::NetworkVar_m_iItemDefinitionIndex>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_nHealthBarOffsetOverride>
//   CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsAncient>
//   CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsSummoned>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iMoveSpeed>
//   CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flMagicalResistanceValue>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iAttackCapabilities>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iSpecialAbility>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_nPlayerOwnerID>
//   CNetworkVarBase<DOTA_SHOP_TYPE, CDOTA_BaseNPC::NetworkVar_m_iCurShop>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_NetworkActivity>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bUseUniversalShopMode>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bIsNightstalkerNight>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bIsTemporaryNight>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nGameWinner>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iNetTimeOfDay>
//   CNetworkVarBase<int, CDOTABaseGameMode::NetworkVar_m_nCustomGameForceHeroSelectionId>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bAlwaysShowPlayerInventory>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bGoldSoundDisabled>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bRecommendedItemsDisabled>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bStickyItemDisabled>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bStashPurchasingDisabled>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bFogOfWarDisabled>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bUseUnseenFOW>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bUseCustomBuybackCost>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bUseCustomBuybackCooldown>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bBuybackEnabled>
//   CNetworkVarBase<float, CDOTABaseGameMode::NetworkVar_m_flCameraDistanceOverride>
//   CNetworkVarBase<CHandle<CDOTA_BaseNPC>, CDOTABaseGameMode::NetworkVar_m_hOverrideSelectionEntity>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bTopBarTeamValuesOverride>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bTopBarTeamValuesVisible>
//   CNetworkVarBase<int, CDOTABaseGameMode::NetworkVar_m_nTeamGoodGuysTopBarValue>
//   CNetworkVarBase<int, CDOTABaseGameMode::NetworkVar_m_nTeamBadGuysTopBarValue>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bAlwaysShowPlayerNames>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bUseCustomHeroLevels>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bTowerBackdoorProtectionEnabled>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bBotThinkingEnabled>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bAnnouncerDisabled>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bKillingSpreeAnnouncerDisabled>
//   CNetworkVarBase<float, CDOTABaseGameMode::NetworkVar_m_flFixedRespawnTime>
//   CNetworkVarBase<unsigned int, CDOTABaseGameMode::NetworkVar_m_nHUDVisibilityBits>
//   CNetworkVarBase<float, CDOTABaseGameMode::NetworkVar_m_flMinimumAttackSpeed>
//   CNetworkVarBase<float, CDOTABaseGameMode::NetworkVar_m_flMaximumAttackSpeed>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bIsDaynightCycleDisabled>
//   CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bAreWeatherEffectsDisabled>
//   CNetworkVarBase<CEntityHandle, CDOTA_Ability_Brewmaster_PrimalSplit::NetworkVar_m_hPrimary>
//   CNetworkVarBase<CEntityHandle, CDOTA_Ability_Brewmaster_PrimalSplit::NetworkVar_m_hSecondary>
//   CNetworkVarBase<CEntityHandle, CDOTA_Ability_Brewmaster_PrimalSplit::NetworkVar_m_hTertiary>
//   CNetworkVarBase<int, CDOTATeam::NetworkVar_m_iHeroKills>
//   CNetworkVarBase<int, CDOTATeam::NetworkVar_m_iTowerKills>
//   CNetworkVarBase<int, CDOTATeam::NetworkVar_m_iBarracksKills>
//   CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsPhantom>
//   CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bHasUpgradeableAbilities>
//   CNetworkVarBase<long long int, CDOTA_BaseNPC::NetworkVar_m_nTotalDamageTaken>
//   CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iAbilityPoints>
//   CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iCurrentXP>
//   CNetworkVarBase<float, CDOTAPlayer::NetworkVar_m_flAspectRatio>
//   CNetworkVarBase<ShopItemViewMode_t, CDOTAPlayer::NetworkVar_m_iShopViewMode>
//   CNetworkVarBase<bool, CDOTAPlayer::NetworkVar_m_bInShowCaseMode>
//   CNetworkVarBase<float, CDOTAPlayer::NetworkVar_m_flCameraZoomAmount>
//   CNetworkVarBase<bool, CDOTAPlayer::NetworkVar_m_bUsingAssistedCameraOperator>
//   CNetworkVarBase<bool, CDOTAPlayer::NetworkVar_m_bUsingCameraMan>
//   CNetworkVarBase<CEntityHandle, CDOTAPlayer::NetworkVar_m_hKillCamUnit>
//   CNetworkVarBase<int, CDOTA_ItemStockInfo::NetworkVar_iTeamNumber>
//   CNetworkVarBase<short unsigned int, CDOTA_ItemStockInfo::NetworkVar_usItemIndex>
//   CNetworkVarBase<float, CDOTA_ItemStockInfo::NetworkVar_fStockDuration>
//   CNetworkVarBase<float, CDOTA_ItemStockInfo::NetworkVar_fStockTime>
//   CNetworkVarBase<int, CDOTA_ItemStockInfo::NetworkVar_iStockCount>
//   CNetworkVarBase<int, CDOTA_ItemStockInfo::NetworkVar_iMaxCount>
//   CNetworkVarBase<float, CDOTA_ItemStockInfo::NetworkVar_fInitialStockDuration>
//   CNetworkVarBase<int, CDOTA_ItemStockInfo::NetworkVar_iPlayerNumber>
//   CNetworkVarBase<int, CHeroStatueLiked::NetworkVar_m_iPlayerIDLiker>
//   CNetworkVarBase<int, CHeroStatueLiked::NetworkVar_m_iPlayerIDLiked>
//   CNetworkVarBase<short unsigned int, DOTA_AssassinMinigameNetworkState::NetworkVar_nAssassinState>
//   CNetworkVarBase<short unsigned int, DOTA_AssassinMinigameNetworkState::NetworkVar_nVictimHeroID>
//   CNetworkVarBase<int, CDOTA_AbilityDraftAbilityState::NetworkVar_m_unAbilityIndex>
//   CNetworkVarBase<int, CDOTA_AbilityDraftAbilityState::NetworkVar_m_unPlayerID>
//   CNetworkVarBase<int, CDOTA_AbilityDraftAbilityState::NetworkVar_m_unAbilityPlayerSlot>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iMiscHeroPickCounter>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hEndGameCinematicEntity>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hOverlayHealthBarUnit>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nOverlayHealthBarType>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bIsInCinematicMode>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bFreeCourierMode>
//   CNetworkVarBase<unsigned int, CDOTAGamerules::NetworkVar_m_unFanfareGoodGuys>
//   CNetworkVarBase<unsigned int, CDOTAGamerules::NetworkVar_m_unFanfareBadGuys>
//   CNetworkVarBase<DOTA_HeroPickState, CDOTAGamerules::NetworkVar_m_nHeroPickState>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flStateTransitionTime>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flOverride_dota_hero_selection_time>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flOverride_dota_pregame_time>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flOverride_dota_postgame_time>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flOverride_dota_strategy_time>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flOverride_dota_team_showcase_duration>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flOverride_dota_rune_spawn_time>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hGameModeEntity>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flHeroPickStateTransitionTime>
//   CNetworkVarBase<long long unsigned int, CDOTAGamerules::NetworkVar_m_iPlayerIDsInControl>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bSameHeroSelectionEnabled>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bUseCustomHeroXPValue>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bUseBaseGoldBountyOnHeroes>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bHideKillMessageHeaders>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flHeroMinimapIconScale>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flCreepMinimapIconScale>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flRuneMinimapIconScale>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flCustomGameEndDelay>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flCustomGameSetupAutoLaunchDelay>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flCustomGameSetupTimeout>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flCustomVictoryMessageDuration>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bCustomGameSetupAutoLaunchEnabled>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bCustomGameTeamSelectionLocked>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iCMModePickBanOrder>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iCDModePickBanOrder>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iPauseTeam>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nGGTeam>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flGGEndsAtTime>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bWhiteListEnabled>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nLastHitUIMode>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bHUDTimerTutorialMode>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bHeroRespawnEnabled>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bIsRandomingEnabled>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iActiveTeam>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iStartingTeam>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iPenaltyLevelRadiant>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iPenaltyLevelDire>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bTier3TowerDestroyed>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nSeriesType>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nRadiantSeriesWins>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nDireSeriesWins>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flPreGameStartTime>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flGameStartTime>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flGameEndTime>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flGameLoadTime>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nCustomGameDifficulty>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_fGoodGlyphCooldown>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_fBadGlyphCooldown>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_fGoodRadarCooldown>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_fBadRadarCooldown>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nRiverType>
//   CNetworkVarBase<long long unsigned int, CDOTAGamerules::NetworkVar_m_unMatchID64>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bMatchSignoutComplete>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hSideShop1>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hSideShop2>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hSecretShop1>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hSecretShop2>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hAnnouncerGood>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hAnnouncerBad>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hAnnouncerSpectator>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hAnnouncerGood_KillingSpree>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hAnnouncerBad_KillingSpree>
//   CNetworkVarBase<CEntityHandle, CDOTAGamerules::NetworkVar_m_hAnnouncerSpectator_KillingSpree>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nLoadedPlayers>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nExpectedPlayers>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iMinimapDebugGridState>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iFoWFrameNumber>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bIsStableMode>
//   CNetworkVarBase<ERoshanSpawnPhase, CDOTAGamerules::NetworkVar_m_nRoshanRespawnPhase>
//   CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flRoshanRespawnPhaseEndTime>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nAbilityDraftPlayerTracker>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nAbilityDraftRoundNumber>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nAbilityDraftAdvanceSteps>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nAbilityDraftPhase>
//   CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nAllDraftPhase>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bAllDraftRadiantFirst>
//   CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bAllowOverrideVPK>
//   CNetworkVarBase<unsigned int, CDOTAGamerules::NetworkVar_m_lobbyType>
//   CNetworkVarBase<unsigned int, CDOTAGamerules::NetworkVar_m_lobbyLeagueID>
//   CNetworkVarBase<int, CDOTA_DisplacementVisibility::NetworkVar_m_HiddenDisplacement>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bPurchasedWhileDead>
//   CNetworkVarBase<int, TempViewerInfo_t::NetworkVar_m_nGridX>
//   CNetworkVarBase<int, TempViewerInfo_t::NetworkVar_m_nGridY>
//   CNetworkVarBase<int, TempViewerInfo_t::NetworkVar_m_nRadius>
//   CNetworkVarBase<signed char, TempViewerInfo_t::NetworkVar_m_nViewerType>
//   CNetworkVarBase<bool, TempViewerInfo_t::NetworkVar_m_bObstructedVision>
//   CNetworkVarBase<bool, TempViewerInfo_t::NetworkVar_m_bValid>
//   CNetworkVarBase<unsigned int, CDOTAFogOfWarTempViewers::NetworkVar_m_FoWTempViewerVersion>
//   CNetworkVarBase<int, CDOTASpecGraphPlayerData::NetworkVar_m_nCreatedByPlayerID>
//   CNetworkVarBase<unsigned int, CDOTATeam::NetworkVar_m_unTournamentTeamID>
//   CNetworkVarBase<DOTA_SHOP_TYPE, CDOTA_BaseNPC_Shop::NetworkVar_m_ShopType>
//   CNetworkVarBase<int, CDOTA_Item_EmptyBottle::NetworkVar_m_iStoredRuneType>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iHighPriorityScore>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bCombinable>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bDisassemblable>
//   CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bItemEnabled>
//   CNetworkVarBase<float, CDOTA_Item::NetworkVar_m_flEnableTime>
//   CNetworkVarBase<float, CDOTA_Item::NetworkVar_m_flAssembledTime>
//   CNetworkVarBase<int, CDOTA_Item_Rune::NetworkVar_m_iRuneType>
//   CNetworkVarBase<float, CDOTA_Item_RuneSpawner_Powerup::NetworkVar_m_flLastSpawnTime>
//   CNetworkVarBase<float, CDOTA_Item_RuneSpawner_Bounty::NetworkVar_m_flLastSpawnTime>
//   CNetworkVarBase<bool, CDOTA_Hero_Recorder::NetworkVar_m_bStartRecording>
//   CNetworkVarBase<CEntityHandle, CDOTA_Hero_Recorder::NetworkVar_m_hHero>
//   CNetworkVarBase<CEntityHandle, CDOTA_Hero_Recorder::NetworkVar_m_hPlayer>
//   CNetworkVarBase<float, CDOTAHoldoutNetworker::NetworkVar_m_flPrepTimeLeft>
//   CNetworkVarBase<int, CDOTAHoldoutNetworker::NetworkVar_m_nWaveEnemyCount>
//   CNetworkVarBase<int, CDOTAHoldoutNetworker::NetworkVar_m_nCurrentEnemyCount>
//   CNetworkVarBase<int, CDOTAHoldoutNetworker::NetworkVar_m_nNumberOfRounds>
//   CNetworkVarBase<int, CDOTAHoldoutNetworker::NetworkVar_m_nRoundNumber>
//   CNetworkVarBase<bool, CDOTAHoldoutNetworker::NetworkVar_m_bIsHeroRespawnEnabled>
//   CNetworkVarBase<int, CDOTAHoldoutNetworker::NetworkVar_m_nGoldBagsExpired>
//   CNetworkVarBase<unsigned int, InGamePredictionData_t::NetworkVar_m_nID>
//   CNetworkVarBase<unsigned int, InGamePredictionData_t::NetworkVar_m_nValue>
//   CNetworkVarBase<unsigned int, InGamePredictionData_t::NetworkVar_m_nRawValue>
//   CNetworkVarBase<unsigned char, InGamePredictionData_t::NetworkVar_m_nValueState>
//   CNetworkVarBase<bool, InGamePredictionData_t::NetworkVar_m_bValueIsMask>
//   CNetworkVarBase<bool, CDOTAInGamePredictionState::NetworkVar_m_bVotingClosed>
//   CNetworkVarBase<bool, CDOTAInGamePredictionState::NetworkVar_m_bAllPredictionsFinished>
//   CNetworkVarBase<unsigned int, CDOTAInGamePredictionState::NetworkVar_m_nLeagueID>
//   CNetworkVarBase<CEntityHandle, CDOTA_ModifierManager::NetworkVar_m_hModifierParent>
//   CNetworkVarBase<short int, ClientQuickBuyItemState::NetworkVar_nItemType>
//   CNetworkVarBase<bool, ClientQuickBuyItemState::NetworkVar_bPurchasable>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iDayTimeVisionRange>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iNightTimeVisionRange>
//   CNetworkVarBase<Vector, CDOTAPlayer::NetworkVar_m_vecStartingPosition>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iSpectatorClickBehavior>
//   CNetworkVarBase<CEntityHandle, CDOTAPlayer::NetworkVar_m_hSpectatorQueryUnit>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iStatsPanel>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iShopPanel>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iStatsDropdownCategory>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iStatsDropdownSort>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_nPlayerAssistFlags>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iMusicStatus>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_nServerOrderSequenceNumber>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_nCachedCoachedTeam>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iTotalEarnedGold>
//   CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iTotalEarnedXP>
//   CNetworkVarBase<bool, CDOTA_SimpleObstruction::NetworkVar_m_bEnabled>
//   CNetworkVarBase<bool, CDOTA_SimpleObstruction::NetworkVar_m_bBlockFoW>
//   CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsNeutralUnitType>
//   CNetworkVarBase<float, CDOTASpectatorGraphManager::NetworkVar_m_flTotalEarnedGoldStartTime>
//   CNetworkVarBase<float, CDOTASpectatorGraphManager::NetworkVar_m_flTotalEarnedGoldEndTime>
//   CNetworkVarBase<int, CDOTASpectatorGraphManager::NetworkVar_m_nGoldGraphVersion>
//   CNetworkVarBase<Vector, CDOTACameraBounds::NetworkVar_m_vecBoundsMin>
//   CNetworkVarBase<Vector, CDOTACameraBounds::NetworkVar_m_vecBoundsMax>
//   CNetworkVarBase<long long unsigned int, CDOTATeam::NetworkVar_m_ulTeamLogo>
//   CNetworkVarBase<long long unsigned int, CDOTATeam::NetworkVar_m_ulTeamBaseLogo>
//   CNetworkVarBase<long long unsigned int, CDOTATeam::NetworkVar_m_ulTeamBannerLogo>
//   CNetworkVarBase<bool, CDOTATeam::NetworkVar_m_bTeamComplete>
//   CNetworkVarBase<bool, CDOTATeam::NetworkVar_m_bTeamIsHomeTeam>
//   CNetworkVarBase<Color, CDOTATeam::NetworkVar_m_CustomHealthbarColor>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iBKBChargesUsed>
//   CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flStrength>
//   CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flAgility>
//   CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flIntellect>
//   CNetworkVarBase<CHandle<CDOTA_BaseNPC_Hero>, CDOTA_BaseNPC_Hero::NetworkVar_m_hReplicatingOtherHeroModel>
//   CNetworkVarBase<Color, CEnvDeferredLight::NetworkVar_m_LightColor>
//   CNetworkVarBase<float, CEnvDeferredLight::NetworkVar_m_flIntensity>
//   CNetworkVarBase<float, CEnvDeferredLight::NetworkVar_m_flLightSize>
//   CNetworkVarBase<float, CEnvDeferredLight::NetworkVar_m_flSpotFoV>
//   CNetworkVarBase<QAngle, CEnvDeferredLight::NetworkVar_m_vLightDirection>
//   CNetworkVarBase<float, CEnvDeferredLight::NetworkVar_m_flStartFalloff>
//   CNetworkVarBase<float, CEnvDeferredLight::NetworkVar_m_flDistanceFalloff>
//   CNetworkVarBase<unsigned int, CEnvDeferredLight::NetworkVar_m_nFlags>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iBotDebugData>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_NetworkSequenceIndex>
//   CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flStartSequenceCycle>
//   CNetworkVarBase<CourierState_t, CDOTA_Unit_Courier::NetworkVar_m_nCourierState>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_anglediff>
//   CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bSelectionRingVisible>
//   CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flHealthThinkRegen>
//   CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bCanBeDominated>
//   CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flTauntCooldown>
//   CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flPhysicalArmorValue>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iTaggedAsVisibleByTeam>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iUnitNameIndex>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iDamageMin>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iDamageMax>
//   CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iDamageBonus>
//   CNetworkVarBase<unsigned char, CDOTA_BaseNPC::NetworkVar_m_nUnitLabelIndex>
//   CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bStolenScepter>
//   CNetworkVarBase<Color, CDOTA_BaseNPC::NetworkVar_m_CustomHealthLabelColor>
//   CNetworkVarBase<bool, CInfoPlayerStartDota::NetworkVar_m_bDisabled>
//   CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flStrengthTotal>
//   CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flAgilityTotal>
//   CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flIntellectTotal>
//   CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iRecentDamage>
//   CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flRespawnTime>
//   CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flRespawnTimePenalty>
//   CNetworkVarBase<bool, CDOTA_BaseNPC_Hero::NetworkVar_m_bCustomKillEffect>
//   CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flSpawnedAt>
//   CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_BaseNPC_Hero::NetworkVar_m_hEconConsumableAbility>
//   CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_Ability_Morphling_Hybrid::NetworkVar_m_hImage>
//   CNetworkVarBase<CEntityHandle, CDOTA_Ability_Pudge_Dismember::NetworkVar_m_hVictim>
//   CNetworkVarBase<CEntityHandle, CDOTA_Unit_Hero_Tiny::NetworkVar_m_hIllusionOwner>
//   CNetworkVarBase<CEntityHandle, CDOTA_Ability_VengefulSpirit_Nether_Swap::NetworkVar_m_hScepterIllusion>
//   CNetworkVarBase<bool, CEconItemView::NetworkVar_m_bInitialized>
//   CNetworkVarBase<float, CDOTA_Unit_Courier::NetworkVar_m_flRespawnTime>
//   CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_Unit_Courier::NetworkVar_m_hCourierStateEntity>
//   CNetworkVarBase<unsigned int, CDOTA_Unit_Hero_PhantomAssassin::NetworkVar_m_nArcanaLevel>
//   CNetworkVarBase<int, CDOTA_NPC_WitchDoctor_Ward::NetworkVar_m_nTargetType>
//   CNetworkVarBase<int, CDOTA_Unit_LoopingSound::NetworkVar_m_nLoopingSoundParity>
//   CNetworkVarBase<float, CDOTA_Unit_TargetDummy::NetworkVar_m_flDamageTaken>
//   CNetworkVarBase<float, CDOTA_Unit_TargetDummy::NetworkVar_m_flLastHit>
//   CNetworkVarBase<float, CDOTA_Unit_TargetDummy::NetworkVar_m_flStartDamageTime>
//   CNetworkVarBase<float, CDOTA_Unit_TargetDummy::NetworkVar_m_flLastDamageTime>
//   CNetworkVarBase<int, CDOTA_Ability_Brewmaster_DrunkenBrawler::NetworkVar_m_iBrawlActive>
//   CNetworkVarBase<int, CDOTA_Ability_Invoker_InvokedBase::NetworkVar_m_nQuasLevel>
//   CNetworkVarBase<int, CDOTA_Ability_Invoker_InvokedBase::NetworkVar_m_nWexLevel>
//   CNetworkVarBase<int, CDOTA_Ability_Invoker_InvokedBase::NetworkVar_m_nExortLevel>
//   CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_Ability_LoneDruid_SpiritBear::NetworkVar_m_hBear>
//   CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_Ability_ArcWarden_TempestDouble::NetworkVar_m_hDoubles>
//   CNetworkVarBase<int, CDOTA_Unit_Hero_Meepo::NetworkVar_m_nWhichMeepo>
//   CNetworkVarBase<int, CDOTA_Ability_Meepo_DividedWeStand::NetworkVar_m_nWhichDividedWeStand>
//   CNetworkVarBase<int, CDOTA_Ability_Meepo_DividedWeStand::NetworkVar_m_nNumDividedWeStand>
//   CNetworkVarBase<CEntityHandle, CDOTA_Ability_Meepo_DividedWeStand::NetworkVar_m_entPrimeDividedWeStand>
//   CNetworkVarBase<CEntityHandle, CDOTA_Ability_Meepo_DividedWeStand::NetworkVar_m_entNextDividedWeStand>
//   CNetworkVarBase<unsigned int, CDOTA_Unit_Hero_MonkeyKing::NetworkVar_m_nTreeDisguise>
//   CNetworkVarBase<unsigned int, CDOTA_Unit_Hero_MonkeyKing::NetworkVar_m_nPerchedTree>
//   CNetworkVarBase<float, CDOTA_Ability_Rubick_SpellSteal::NetworkVar_m_fStolenCastPoint>
//   CNetworkVarBase<unsigned int, CDOTA_Unit_Hero_Terrorblade::NetworkVar_m_nArcanaColor>
//   CNetworkVarBase<int, CDOTA_Item_PowerTreads::NetworkVar_m_iStat>
//   CNetworkVarBase<int, CDOTA_Item_RiverPainter::NetworkVar_m_iRiverPaintColor>
//   CNetworkVarBase<int, CEconItemView::NetworkVar_m_iEntityQuality>
//   CNetworkVarBase<unsigned int, CEconItemView::NetworkVar_m_iInventoryPosition>
//   CNetworkVarBase<int, CAttributeManager::NetworkVar_m_iReapplyProvisionParity>
//   CNetworkVarBase<CHandle<CBaseEntity>, CAttributeManager::NetworkVar_m_hOuter>
//   CNetworkVarBase<attributeprovidertypes_t, CAttributeManager::NetworkVar_m_ProviderType>
//   CNetworkVarBase<bool, CDOTAWearableItem::NetworkVar_m_bOwnerModelChanged>
//   CNetworkVarBase<bool, CDOTAWearableItem::NetworkVar_m_bIsGeneratingEconItem>
//   CNetworkVarBase<short unsigned int, CEconItemAttribute::NetworkVar_m_iAttributeDefinitionIndex>
//   CNetworkVarBase<float, CEconItemAttribute::NetworkVar_m_flValue>
//   CNetworkVarBase<style_index_t, CEconItemView::NetworkVar_m_nOverrideStyle>
//   CNetworkVarBase<unsigned char, NextBotCombatCharacter::NetworkVar_m_nLod>

// CSchemaTypeOf: 1438 more instantiations (full list in INDEX.tsv)
//   CSchemaTypeOf<CNetworkVarBase<bool, CDevtestHierarchy::NetworkVar_m_bChildIsDynamic> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDevtestHierarchy::NetworkVar_m_bCreateChildSideChild> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlStringToken, CDevtestHierarchy::NetworkVar_m_alternateAttachName> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CDevtestHierarchy::NetworkVar_m_hClientSideChild
//   CSchemaTypeOf<CNetworkVarBase<float, CDevtestHierarchy::NetworkVar_m_flEntityStartTime> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CPlasma::NetworkVar_m_nPlasmaModelIndex> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CPlasma::NetworkVar_m_nPlasmaModelIndex2> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CPlasma::NetworkVar_m_nGlowModelIndex> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBaseClientUIEntity::NetworkVar_m_bEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CBaseClientUIEntity::NetworkVar_m_DialogXMLName> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CBaseClientUIEntity::NetworkVar_m_PanelClassName> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointClientUIWorldPanel::NetworkVar_m_bIgnoreInput> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointClientUIWorldPanel::NetworkVar_m_bFollowPlayerAcrossTeleport> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointClientUIWorldPanel::NetworkVar_m_flWidth> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointClientUIWorldPanel::NetworkVar_m_flHeight> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointClientUIWorldPanel::NetworkVar_m_flDPI> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointClientUIWorldPanel::NetworkVar_m_flInteractDistance> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointClientUIWorldPanel::NetworkVar_m_flDepthOffset> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CPointClientUIWorldPanel::NetworkVar_m_unOwnerContext> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CPointClientUIWorldPanel::NetworkVar_m_unHorizontalAlign> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CPointClientUIWorldPanel::NetworkVar_m_unVerticalAlign> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CPointClientUIWorldPanel::NetworkVar_m_unOrientation> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointClientUIWorldPanel::NetworkVar_m_bAllowInteractionFromAllSceneWorlds> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointClientUIWorldPanel::NetworkVar_m_bOpaque> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointClientUIWorldPanel::NetworkVar_m_bNoDepth> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointClientUIWorldPanel::NetworkVar_m_bRenderBackface> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CPointClientUIDialog::NetworkVar_m_hActivator> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvClock::NetworkVar_m_flStartGameTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvClock::NetworkVar_m_flStartClockSeconds> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CEnvCombinedLightProbeVolume::NetworkVar_m
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CEnvCombinedLightProbeVolume::NetworkVar_m
//   CSchemaTypeOf<CNetworkVarBase<Vector, CEnvCombinedLightProbeVolume::NetworkVar_m_vBoxMins> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, CEnvCombinedLightProbeVolume::NetworkVar_m_vBoxMaxs> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CEnvCombinedLightProbeVolume::NetworkVar_m_LightGroups> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvCombinedLightProbeVolume::NetworkVar_m_bStatic> >
//   CSchemaTypeOf<CNetworkVarBase<int, CEnvCombinedLightProbeVolume::NetworkVar_m_nHandshake> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvCombinedLightProbeVolume::NetworkVar_m_bStartDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvCombinedLightProbeVolume::NetworkVar_m_bEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CEnvCubemap::NetworkVar_m_hCubemapTexture>
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvCubemap::NetworkVar_m_flInfluenceRadius> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, CEnvCubemap::NetworkVar_m_vBoxProjectMins> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, CEnvCubemap::NetworkVar_m_vBoxProjectMaxs> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CEnvCubemap::NetworkVar_m_LightGroups> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvCubemap::NetworkVar_m_bStatic> >
//   CSchemaTypeOf<CNetworkVarBase<int, CEnvCubemap::NetworkVar_m_nHandshake> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvCubemap::NetworkVar_m_bStartDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvCubemap::NetworkVar_m_bEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeCTextureBase>, CEnvLightProbeVolume::NetworkVar_m_hLightP
//   CSchemaTypeOf<CNetworkVarBase<Vector, CEnvLightProbeVolume::NetworkVar_m_vBoxMins> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, CEnvLightProbeVolume::NetworkVar_m_vBoxMaxs> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CEnvLightProbeVolume::NetworkVar_m_LightGroups> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvLightProbeVolume::NetworkVar_m_bStatic> >
//   CSchemaTypeOf<CNetworkVarBase<int, CEnvLightProbeVolume::NetworkVar_m_nHandshake> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvLightProbeVolume::NetworkVar_m_bStartDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvLightProbeVolume::NetworkVar_m_bEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CEnvSky::NetworkVar_m_hSkyMaterial> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvSky::NetworkVar_m_bStartDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<int, CEnvSky::NetworkVar_m_nFogType> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvSky::NetworkVar_m_flFogMinStart> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvSky::NetworkVar_m_flFogMinEnd> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvSky::NetworkVar_m_flFogMaxStart> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvSky::NetworkVar_m_flFogMaxEnd> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvSky::NetworkVar_m_bEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flAutoExposureMin> >
//   CSchemaTypeOf<CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flAutoExposureMax> >
//   CSchemaTypeOf<CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flTonemapPercentTarget> >
//   CSchemaTypeOf<CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flTonemapPercentBrightPixels> >
//   CSchemaTypeOf<CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flTonemapMinAvgLum> >
//   CSchemaTypeOf<CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flRate> >
//   CSchemaTypeOf<CNetworkVarBase<float, CTonemapController2::NetworkVar_m_flAccelerateExposureDown> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CInfoWorldLayer::NetworkVar_m_worldName> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CInfoWorldLayer::NetworkVar_m_layerName> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CInfoWorldLayer::NetworkVar_m_bWorldLayerVisible> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CInfoWorldLayer::NetworkVar_m_bEntitiesSpawned> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointCamera::NetworkVar_m_FOV> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointCamera::NetworkVar_m_Resolution> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointCamera::NetworkVar_m_bFogEnable> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointCamera::NetworkVar_m_flFogStart> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointCamera::NetworkVar_m_flFogEnd> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointCamera::NetworkVar_m_flFogMaxDensity> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointCamera::NetworkVar_m_bActive> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointCamera::NetworkVar_m_bUseScreenAspectRatio> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointCamera::NetworkVar_m_flAspectRatio> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointCamera::NetworkVar_m_bNoSky> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointCamera::NetworkVar_m_fBrightness> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointCamera::NetworkVar_m_flZFar> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointCamera::NetworkVar_m_flZNear> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointCamera::NetworkVar_m_flOverrideShadowFarZ> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBaseCombatWeapon::NetworkVar_m_nViewModelIndex> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseCombatWeapon::NetworkVar_m_flNextPrimaryAttack> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseCombatWeapon::NetworkVar_m_flNextSecondaryAttack> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBaseCombatWeapon::NetworkVar_m_nQueuedAttack> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseCombatWeapon::NetworkVar_m_flTimeAttackQueued> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CBaseCombatWeapon::NetworkVar_m_iViewModelIndex>
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CBaseCombatWeapon::NetworkVar_m_iWorldModelIndex
//   CSchemaTypeOf<CNetworkVarBase<WeaponState_t, CBaseCombatWeapon::NetworkVar_m_iState> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBaseCombatWeapon::NetworkVar_m_iPrimaryAmmoType> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBaseCombatWeapon::NetworkVar_m_iSecondaryAmmoType> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBaseCombatWeapon::NetworkVar_m_iClip1> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBaseCombatWeapon::NetworkVar_m_iClip2> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBaseCombatWeapon::NetworkVar_m_bOnlyPump> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseCombatWeapon::NetworkVar_m_flTimeWeaponIdle> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBaseCombatWeapon::NetworkVar_m_bInReload> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBaseViewModel::NetworkVar_m_nViewModelIndex> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBaseViewModel::NetworkVar_m_nAnimationParity> >
//   CSchemaTypeOf<CNetworkVarBase<HSequence, CBaseViewModel::NetworkVar_m_hLayerSequence> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBaseViewModel::NetworkVar_m_nLayer> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseViewModel::NetworkVar_m_flAnimationStartTime> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CBaseViewModel::NetworkVar_m_hOwner> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBeam::NetworkVar_m_flFrameRate> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBeam::NetworkVar_m_flHDRColorScale> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CBeam::NetworkVar_m_nNumBeamEnts> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CBeam::NetworkVar_m_hBaseMaterial> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CBeam::NetworkVar_m_nHaloIndex> >
//   CSchemaTypeOf<CNetworkVarBase<BeamType_t, CBeam::NetworkVar_m_nBeamType> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBeam::NetworkVar_m_nBeamFlags> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBeam::NetworkVar_m_fWidth> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBeam::NetworkVar_m_fEndWidth> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBeam::NetworkVar_m_fFadeLength> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBeam::NetworkVar_m_fHaloScale> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBeam::NetworkVar_m_fAmplitude> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBeam::NetworkVar_m_fStartFrame> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBeam::NetworkVar_m_fSpeed> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBeam::NetworkVar_m_flFrame> >
//   CSchemaTypeOf<CNetworkVarBase<BeamClipStyle_t, CBeam::NetworkVar_m_nClipStyle> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBeam::NetworkVar_m_bTurnedOff> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, VPhysicsCollisionAttribute_t::NetworkVar_m_nInteractsAs> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, VPhysicsCollisionAttribute_t::NetworkVar_m_nInteractsWith> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, VPhysicsCollisionAttribute_t::NetworkVar_m_nInteractsExclude> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, VPhysicsCollisionAttribute_t::NetworkVar_m_nEntityId> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, VPhysicsCollisionAttribute_t::NetworkVar_m_nHierarchyId> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, VPhysicsCollisionAttribute_t::NetworkVar_m_nCollisionGroup> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, VPhysicsCollisionAttribute_t::NetworkVar_m_nCollisionFunctionMask> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CCollisionProperty::NetworkVar_m_usSolidFlags> >
//   CSchemaTypeOf<CNetworkVarBase<SolidType_t, CCollisionProperty::NetworkVar_m_nSolidType> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CCollisionProperty::NetworkVar_m_triggerBloat> >
//   CSchemaTypeOf<CNetworkVarBase<SurroundingBoundsType_t, CCollisionProperty::NetworkVar_m_nSurroundType> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CCollisionProperty::NetworkVar_m_CollisionGroup> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CCollisionProperty::NetworkVar_m_bHitboxEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<float, CCollisionProperty::NetworkVar_m_flCapsuleRadius> >
//   CSchemaTypeOf<CNetworkVarBase<CEntityHandle, CEffectData::NetworkVar_m_hEntity> >
//   CSchemaTypeOf<CNetworkVarBase<CEntityHandle, CEffectData::NetworkVar_m_hOtherEntity> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEffectData::NetworkVar_m_flScale> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEffectData::NetworkVar_m_flMagnitude> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEffectData::NetworkVar_m_flRadius> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlStringToken, CEffectData::NetworkVar_m_nSurfaceProp> >
//   CSchemaTypeOf<CNetworkVarBase<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>, CEffectData::NetworkVar_m_nEffe
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CEffectData::NetworkVar_m_nDamageType> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CEffectData::NetworkVar_m_nMaterial> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CEffectData::NetworkVar_m_nHitBox> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CEffectData::NetworkVar_m_nColor> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CEffectData::NetworkVar_m_fFlags> >
//   CSchemaTypeOf<CNetworkVarBase<signed char, CEffectData::NetworkVar_m_nAttachmentIndex> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlStringToken, CEffectData::NetworkVar_m_nAttachmentName> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CEffectData::NetworkVar_m_iEffectName> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDetailController::NetworkVar_m_flFadeStartDist> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDetailController::NetworkVar_m_flFadeEndDist> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvWindShared::NetworkVar_m_flStartTime> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CEnvWindShared::NetworkVar_m_iWindSeed> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CEnvWindShared::NetworkVar_m_iMinWind> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CEnvWindShared::NetworkVar_m_iMaxWind> >
//   CSchemaTypeOf<CNetworkVarBase<int, CEnvWindShared::NetworkVar_m_windRadius> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CEnvWindShared::NetworkVar_m_iMinGust> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CEnvWindShared::NetworkVar_m_iMaxGust> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvWindShared::NetworkVar_m_flMinGustDelay> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvWindShared::NetworkVar_m_flMaxGustDelay> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvWindShared::NetworkVar_m_flGustDuration> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CEnvWindShared::NetworkVar_m_iGustDirChange> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CEnvWindShared::NetworkVar_m_iInitialWindDir> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvWindShared::NetworkVar_m_flInitialWindSpeed> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFuncLadder::NetworkVar_m_flAutoRideSpeed> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CFuncLadder::NetworkVar_m_bFakeLadder> >
//   CSchemaTypeOf<CNetworkVarBase<int, CGlowProperty::NetworkVar_m_iGlowType> >
//   CSchemaTypeOf<CNetworkVarBase<int, CGlowProperty::NetworkVar_m_nGlowRange> >
//   CSchemaTypeOf<CNetworkVarBase<int, CGlowProperty::NetworkVar_m_nGlowRangeMin> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CGlowProperty::NetworkVar_m_bFlashing> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_start> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_end> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_farz> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_maxdensity> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_exponent> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_HDRColorScale> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_skyboxFogFactor> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_skyboxFogFactorLerpTo> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_startLerpTo> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_endLerpTo> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_maxdensityLerpTo> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_lerptime> >
//   CSchemaTypeOf<CNetworkVarBase<float, fogparams_t::NetworkVar_duration> >
//   CSchemaTypeOf<CNetworkVarBase<bool, fogparams_t::NetworkVar_enable> >
//   CSchemaTypeOf<CNetworkVarBase<bool, fogparams_t::NetworkVar_blend> >
//   CSchemaTypeOf<CNetworkVarBase<bool, fogparams_t::NetworkVar_m_bNoReflectionFog> >
//   CSchemaTypeOf<CNetworkVarBase<short int, sky3dparams_t::NetworkVar_scale> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, sky3dparams_t::NetworkVar_area> >
//   CSchemaTypeOf<CNetworkVarBase<bool, sky3dparams_t::NetworkVar_bClip3DSkyBoxNearToWorldFar> >
//   CSchemaTypeOf<CNetworkVarBase<float, sky3dparams_t::NetworkVar_flClip3DSkyBoxNearToWorldFarOffset> >
//   CSchemaTypeOf<CNetworkVarBase<int, audioparams_t::NetworkVar_soundscapeIndex> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, audioparams_t::NetworkVar_localBits> >
//   CSchemaTypeOf<CNetworkVarBase<int, audioparams_t::NetworkVar_soundscapeEntityListIndex> >
//   CSchemaTypeOf<CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flAutoExposureMin> >
//   CSchemaTypeOf<CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flAutoExposureMax> >
//   CSchemaTypeOf<CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flTonemapPercentTarget> >
//   CSchemaTypeOf<CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flTonemapPercentBrightPixels> >
//   CSchemaTypeOf<CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flTonemapMinAvgLum> >
//   CSchemaTypeOf<CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flRate> >
//   CSchemaTypeOf<CNetworkVarBase<float, TonemapParameters_t::NetworkVar_m_flAccelerateExposureDown> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPoseController::NetworkVar_m_bPoseValueParity> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPoseController::NetworkVar_m_fPoseValue> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPoseController::NetworkVar_m_fInterpolationTime> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPoseController::NetworkVar_m_bInterpolationWrap> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPoseController::NetworkVar_m_fCycleFrequency> >
//   CSchemaTypeOf<CNetworkVarBase<PoseController_FModType_t, CPoseController::NetworkVar_m_nFModType> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPoseController::NetworkVar_m_fFModTimeOffset> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPoseController::NetworkVar_m_fFModRate> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPoseController::NetworkVar_m_fFModAmplitude> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CSprite::NetworkVar_m_hSpriteMaterial> >
//   CSchemaTypeOf<CNetworkVarBase<int, CSprite::NetworkVar_m_nAttachment> >
//   CSchemaTypeOf<CNetworkVarBase<float, CSprite::NetworkVar_m_flSpriteFramerate> >
//   CSchemaTypeOf<CNetworkVarBase<float, CSprite::NetworkVar_m_flFrame> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CSprite::NetworkVar_m_nBrightness> >
//   CSchemaTypeOf<CNetworkVarBase<float, CSprite::NetworkVar_m_flBrightnessTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CSprite::NetworkVar_m_flSpriteScale> >
//   CSchemaTypeOf<CNetworkVarBase<float, CSprite::NetworkVar_m_flScaleTime> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CSprite::NetworkVar_m_bWorldSpaceScale> >
//   CSchemaTypeOf<CNetworkVarBase<float, CSprite::NetworkVar_m_flGlowProxySize> >
//   CSchemaTypeOf<CNetworkVarBase<float, CSprite::NetworkVar_m_flHDRColorScale> >
//   CSchemaTypeOf<CNetworkVarBase<int, CAnimationLayer::NetworkVar_m_nOrder> >
//   CSchemaTypeOf<CNetworkVarBase<CNetworkedQuantizedFloat, CAnimationLayer::NetworkVar_m_flPlaybackRate> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CAnimationLayer::NetworkVar_m_bLooping> >
//   CSchemaTypeOf<CNetworkVarBase<int, CAnimationLayer::NetworkVar_m_nNewSequenceParity> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBaseAnimating::NetworkVar_m_nForceBone> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CBaseAnimating::NetworkVar_m_nMuzzleFlashParity> >
//   CSchemaTypeOf<CNetworkVarBase<CNetworkedQuantizedFloat, CBaseAnimatingController::NetworkVar_m_flPlaybackRate> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBaseAnimatingController::NetworkVar_m_bClientSideAnimation> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBaseAnimatingController::NetworkVar_m_nNewSequenceParity> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBaseAnimatingController::NetworkVar_m_nResetEventsParity> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseCombatCharacter::NetworkVar_m_flNextAttack> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseCombatCharacter::NetworkVar_m_flFieldOfView> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBaseEntity::NetworkVar_m_iHealth> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBaseEntity::NetworkVar_m_iMaxHealth> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_lifeState> >
//   CSchemaTypeOf<CNetworkVarBase<DamageOptions_t, CBaseEntity::NetworkVar_m_takedamage> >
//   CSchemaTypeOf<CNetworkVarBase<MoveCollide_t, CBaseEntity::NetworkVar_m_MoveCollide> >
//   CSchemaTypeOf<CNetworkVarBase<MoveType_t, CBaseEntity::NetworkVar_m_MoveType> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseEntity::NetworkVar_m_flAnimTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseEntity::NetworkVar_m_flSimulationTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseEntity::NetworkVar_m_flCreateTime> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBaseEntity::NetworkVar_m_bClientSideRagdoll> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_ubInterpolationFrame> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_iTeamNum> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBaseEntity::NetworkVar_m_spawnflags> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBaseEntity::NetworkVar_m_nNextThinkTick> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBaseEntity::NetworkVar_m_fFlags> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBaseEntity::NetworkVar_m_fEffects> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseEntity::NetworkVar_m_flFriction> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseEntity::NetworkVar_m_flElasticity> >
//   CSchemaTypeOf<CNetworkVarBase<gender_t, CBaseEntity::NetworkVar_m_Gender> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_nWaterLevel> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBaseEntity::NetworkVar_m_bSimulatedEveryTick> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBaseEntity::NetworkVar_m_bAnimatedEveryTick> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_nMinCPULevel> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_nMaxCPULevel> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_nMinGPULevel> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_nMaxGPULevel> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CBaseEntity::NetworkVar_m_iTextureFrameIndex> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseEntity::NetworkVar_m_flNavIgnoreUntilTime> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBaseFlex::NetworkVar_m_blinktoggle> >
//   CSchemaTypeOf<CNetworkVarBase<RenderMode_t, CBaseModelEntity::NetworkVar_m_nRenderMode> >
//   CSchemaTypeOf<CNetworkVarBase<RenderFx_t, CBaseModelEntity::NetworkVar_m_nRenderFX> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlStringToken, CBaseModelEntity::NetworkVar_m_LightGroup> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseModelEntity::NetworkVar_m_flGlowBackfaceMult> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseModelEntity::NetworkVar_m_fadeMinDist> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseModelEntity::NetworkVar_m_fadeMaxDist> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseModelEntity::NetworkVar_m_flFadeScale> >
//   CSchemaTypeOf<CNetworkVarBase<DoorState_t, CBasePropDoor::NetworkVar_m_eDoorState> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBasePropDoor::NetworkVar_m_bLocked> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBasePropDoor::NetworkVar_m_isRescueDoor> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBreakableProp::NetworkVar_m_iPhysicsMode> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBreakableProp::NetworkVar_m_noGhostCollision> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBreakableProp::NetworkVar_m_flClothScale> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBaseButton::NetworkVar_m_usable> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CBaseButton::NetworkVar_m_szDisplayText> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CButtonTimed::NetworkVar_m_sUseString> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CButtonTimed::NetworkVar_m_sUseSubString> >
//   CSchemaTypeOf<CNetworkVarBase<float, CColorCorrection::NetworkVar_m_flFadeInDuration> >
//   CSchemaTypeOf<CNetworkVarBase<float, CColorCorrection::NetworkVar_m_flFadeOutDuration> >
//   CSchemaTypeOf<CNetworkVarBase<float, CColorCorrection::NetworkVar_m_flMaxWeight> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CColorCorrection::NetworkVar_m_bEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CColorCorrection::NetworkVar_m_bMaster> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CColorCorrection::NetworkVar_m_bClientSide> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CColorCorrection::NetworkVar_m_bExclusive> >
//   CSchemaTypeOf<CNetworkVarBase<float, CColorCorrection::NetworkVar_m_MinFalloff> >
//   CSchemaTypeOf<CNetworkVarBase<float, CColorCorrection::NetworkVar_m_MaxFalloff> >
//   CSchemaTypeOf<CNetworkVarBase<float, CColorCorrection::NetworkVar_m_flCurWeight> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBaseDoor::NetworkVar_m_bIsUsable> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDynamicProp::NetworkVar_m_bUseHitboxesForRenderBox> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flStartTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flFadeInStart> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flFadeInLength> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flFadeOutModelStart> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flFadeOutModelLength> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flFadeOutStart> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEntityDissolve::NetworkVar_m_flFadeOutLength> >
//   CSchemaTypeOf<CNetworkVarBase<EntityDisolveType_t, CEntityDissolve::NetworkVar_m_nDissolveType> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CEntityDissolve::NetworkVar_m_nMagnitude> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEntityFlame::NetworkVar_m_bCheapEffect> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvDOFController::NetworkVar_m_bDOFEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDOFController::NetworkVar_m_flNearBlurDepth> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDOFController::NetworkVar_m_flNearFocusDepth> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDOFController::NetworkVar_m_flFarFocusDepth> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDOFController::NetworkVar_m_flFarBlurDepth> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDOFController::NetworkVar_m_flNearBlurRadius> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDOFController::NetworkVar_m_flFarBlurRadius> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bState> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bAlwaysUpdate> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flLightFOV> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bEnableShadows> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bSimpleProjection> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bLightOnlyTarget> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bLightWorld> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bCameraSpace> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flBrightnessScale> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flIntensity> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flLinearAttenuation> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flQuadraticAttenuation> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bVolumetric> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flNoiseStrength> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flFlashlightTime> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CEnvProjectedTexture::NetworkVar_m_nNumPlanes> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flPlaneOffset> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flVolumetricIntensity> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flColorTransitionTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flAmbient> >
//   CSchemaTypeOf<CNetworkVarBase<int, CEnvProjectedTexture::NetworkVar_m_nSpotlightTextureFrame> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CEnvProjectedTexture::NetworkVar_m_nShadowQuality> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flNearZ> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flFarZ> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flProjectionSize> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvProjectedTexture::NetworkVar_m_flRotation> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvProjectedTexture::NetworkVar_m_bFlipHorizontal> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseFire::NetworkVar_m_flScale> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseFire::NetworkVar_m_flStartScale> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBaseFire::NetworkVar_m_flScaleTime> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBaseFire::NetworkVar_m_nFlags> >
//   CSchemaTypeOf<CNetworkVarBase<int, CFireSmoke::NetworkVar_m_nFlameModelIndex> >
//   CSchemaTypeOf<CNetworkVarBase<int, CFireSmoke::NetworkVar_m_nFlameFromAboveModelIndex> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFish::NetworkVar_m_x> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFish::NetworkVar_m_y> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFish::NetworkVar_m_z> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFish::NetworkVar_m_angle> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFish::NetworkVar_m_waterLevel> >
//   CSchemaTypeOf<CNetworkVarBase<int, CGenericFlexCycler::NetworkVar_m_nTestMode> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFuncAreaPortalWindow::NetworkVar_m_flFadeStartDist> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFuncAreaPortalWindow::NetworkVar_m_flFadeDist> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFuncAreaPortalWindow::NetworkVar_m_flTranslucencyLimit> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CFuncAreaPortalWindow::NetworkVar_m_iBackgroundM
//   CSchemaTypeOf<CNetworkVarBase<float, CFuncDistanceOccluder::NetworkVar_m_flFadeStartDist> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFuncDistanceOccluder::NetworkVar_m_flFadeEndDist> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFuncDistanceOccluder::NetworkVar_m_flTranslucencyLimit> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CFuncDistanceOccluder::NetworkVar_m_hAttachedOccluder> >
//   CSchemaTypeOf<CNetworkVarBase<CEntityHandle, CGameSceneNodeHandle::NetworkVar_m_hOwner> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlStringToken, CGameSceneNodeHandle::NetworkVar_m_name> >
//   CSchemaTypeOf<CNetworkVarBase<float, CGameSceneNode::NetworkVar_m_flScale> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlStringToken, CGameSceneNode::NetworkVar_m_name> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlStringToken, CGameSceneNode::NetworkVar_m_hierarchyAttachName> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CParticleSystem::NetworkVar_m_bActive> >
//   CSchemaTypeOf<CNetworkVarBase<int, CParticleSystem::NetworkVar_m_nStopType> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>, CParticleSystem::NetworkVar_m
//   CSchemaTypeOf<CNetworkVarBase<float, CParticleSystem::NetworkVar_m_flStartTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CRagdollProp::NetworkVar_m_flBlendWeight> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBasePlayer::NetworkVar_m_fOnTarget> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBasePlayer::NetworkVar_m_iBonusProgress> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBasePlayer::NetworkVar_m_iBonusChallenge> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flDeathTime> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CBasePlayer::NetworkVar_m_iObserverMode> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBasePlayer::NetworkVar_m_iFOV> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBasePlayer::NetworkVar_m_iDefaultFOV> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBasePlayer::NetworkVar_m_iFOVStart> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flFOVTime> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CBasePlayer::NetworkVar_m_hTonemapController> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBasePlayer::NetworkVar_m_ArmorValue> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flMaxspeed> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlStringToken, CBasePlayer::NetworkVar_m_ladderSurfaceProps> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CBasePlayer::NetworkVar_m_nTickBase> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flConstraintRadius> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flConstraintWidth> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flConstraintSpeedFactor> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBasePlayer::NetworkVar_m_bConstraintPastRadius> >
//   CSchemaTypeOf<CNetworkVarBase<float, CBasePlayer::NetworkVar_m_flLaggedMovementValue> >
//   CSchemaTypeOf<CNetworkVarBase<int, CBasePlayer::NetworkVar_m_currentSCLPacked> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, CBasePlayer::NetworkVar_m_nUnHoldableButtons> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CPlayerLocalData::NetworkVar_m_iHideHUD> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPlayerLocalData::NetworkVar_m_flFOVRate> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bDucked> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bDucking> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bInDuckJump> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CPlayerLocalData::NetworkVar_m_nDuckTimeMsecs> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CPlayerLocalData::NetworkVar_m_nDuckJumpTimeMsecs> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CPlayerLocalData::NetworkVar_m_nJumpTimeMsecs> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPlayerLocalData::NetworkVar_m_flFallVelocity> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bDrawViewmodel> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bWearingSuit> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bPoisoned> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPlayerLocalData::NetworkVar_m_flStepSize> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bAllowAutoMovement> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bSlowMovement> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPlayerLocalData::NetworkVar_m_bAutoAimTarget> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fLocalContrastStrength> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fLocalContrastEdgeStrength> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fVignetteStart> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fVignetteEnd> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fVignetteBlurStrength> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fFadeToBlackStrength> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fGrainStrength> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fTopVignetteStrength> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPostProcessController::NetworkVar_m_fFadeTime> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPostProcessController::NetworkVar_m_bMaster> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPhysicsProp::NetworkVar_m_bAwake> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CRopeKeyframe::NetworkVar_m_RopeFlags> >
//   CSchemaTypeOf<CNetworkVarBase<short int, CRopeKeyframe::NetworkVar_m_Slack> >
//   CSchemaTypeOf<CNetworkVarBase<float, CRopeKeyframe::NetworkVar_m_Width> >
//   CSchemaTypeOf<CNetworkVarBase<float, CRopeKeyframe::NetworkVar_m_TextureScale> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CRopeKeyframe::NetworkVar_m_nSegments> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CRopeKeyframe::NetworkVar_m_bConstrainBetweenEndpoints> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CRopeKeyframe::NetworkVar_m_iRopeMaterialMod
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CRopeKeyframe::NetworkVar_m_Subdiv> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CRopeKeyframe::NetworkVar_m_nChangeCount> >
//   CSchemaTypeOf<CNetworkVarBase<short int, CRopeKeyframe::NetworkVar_m_RopeLength> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CRopeKeyframe::NetworkVar_m_fLockedPoints> >
//   CSchemaTypeOf<CNetworkVarBase<float, CRopeKeyframe::NetworkVar_m_flScrollSpeed> >
//   CSchemaTypeOf<CNetworkVarBase<short int, CRopeKeyframe::NetworkVar_m_iStartAttachment> >
//   CSchemaTypeOf<CNetworkVarBase<short int, CRopeKeyframe::NetworkVar_m_iEndAttachment> >
//   CSchemaTypeOf<CNetworkVarBase<HSequence, CNetworkedSequenceOperation::NetworkVar_m_hSequence> >
//   CSchemaTypeOf<CNetworkVarBase<float, CNetworkedSequenceOperation::NetworkVar_m_flPrevCycle> >
//   CSchemaTypeOf<CNetworkVarBase<float, CNetworkedSequenceOperation::NetworkVar_m_flCycle> >
//   CSchemaTypeOf<CNetworkVarBase<CNetworkedQuantizedFloat, CNetworkedSequenceOperation::NetworkVar_m_flWeight> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>, CModelState::NetworkVar_m_hModel> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, CModelState::NetworkVar_m_MeshGroupMask> >
//   CSchemaTypeOf<CNetworkVarBase<signed char, CModelState::NetworkVar_m_nIdealMotionType> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CSkeletonInstance::NetworkVar_m_bIsRenderingEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CSkeletonInstance::NetworkVar_m_bIsAnimationEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlStringToken, CSkeletonInstance::NetworkVar_m_materialGroup> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CSkeletonInstance::NetworkVar_m_nHitboxSet> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlStringToken, CSkyCamera::NetworkVar_m_skyboxSlotToken> >
//   CSchemaTypeOf<CNetworkVarBase<float, CSpotlightEnd::NetworkVar_m_flLightScale> >
//   CSchemaTypeOf<CNetworkVarBase<float, CSpotlightEnd::NetworkVar_m_Radius> >
//   CSchemaTypeOf<CNetworkVarBase<int, CTeam::NetworkVar_m_iScore> >
//   CSchemaTypeOf<CNetworkVarBase<int, CTeam::NetworkVar_m_iRoundsWon> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBaseTrigger::NetworkVar_m_bClientSidePredicted> >
//   CSchemaTypeOf<CNetworkVarBase<float, IntervalTimer::NetworkVar_m_timestamp> >
//   CSchemaTypeOf<CNetworkVarBase<float, CountdownTimer::NetworkVar_m_duration> >
//   CSchemaTypeOf<CNetworkVarBase<float, CountdownTimer::NetworkVar_m_timestamp> >
//   CSchemaTypeOf<CNetworkVarBase<int, CPropVehicleDriveable::NetworkVar_m_nSpeed> >
//   CSchemaTypeOf<CNetworkVarBase<short int, CPropVehicleDriveable::NetworkVar_m_nRPM> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPropVehicleDriveable::NetworkVar_m_flThrottle> >
//   CSchemaTypeOf<CNetworkVarBase<int, CPropVehicleDriveable::NetworkVar_m_nBoostTimeLeft> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_bHasBoost> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_bUnableToFire> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_bHasGun> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_nScannerDisabledWeapons> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_nScannerDisabledVehicle> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_bEnterAnimOn> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVehicleDriveable::NetworkVar_m_bExitAnimOn> >
//   CSchemaTypeOf<CNetworkVarBase<float, CVGuiScreen::NetworkVar_m_flWidth> >
//   CSchemaTypeOf<CNetworkVarBase<float, CVGuiScreen::NetworkVar_m_flHeight> >
//   CSchemaTypeOf<CNetworkVarBase<int, CVGuiScreen::NetworkVar_m_nAttachmentIndex> >
//   CSchemaTypeOf<CNetworkVarBase<int, CVGuiScreen::NetworkVar_m_nPanelName> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CVGuiScreen::NetworkVar_m_fScreenFlags> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CVGuiScreen::NetworkVar_m_nOverlayMaterial> 
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flBrightness> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flBrightnessMult> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flRange> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flFalloff> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flAttenuation0> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flAttenuation1> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flAttenuation2> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flTheta> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flPhi> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlStringToken, CLightComponent::NetworkVar_m_lightCookie> >
//   CSchemaTypeOf<CNetworkVarBase<int, CLightComponent::NetworkVar_m_nCascades> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CLightComponent::NetworkVar_m_bCastShadows> >
//   CSchemaTypeOf<CNetworkVarBase<int, CLightComponent::NetworkVar_m_nShadowWidth> >
//   CSchemaTypeOf<CNetworkVarBase<int, CLightComponent::NetworkVar_m_nShadowHeight> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CLightComponent::NetworkVar_m_bRenderDiffuse> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CLightComponent::NetworkVar_m_bRenderSpecular> >
//   CSchemaTypeOf<CNetworkVarBase<int, CLightComponent::NetworkVar_m_nStyle> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlString, CLightComponent::NetworkVar_m_Pattern> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flFadeMinDist> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flFadeMaxDist> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flShadowFadeMinDist> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightComponent::NetworkVar_m_flShadowFadeMaxDist> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CLightComponent::NetworkVar_m_bEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CLightComponent::NetworkVar_m_bFlicker> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, HandInfo_t::NetworkVar_m_vPosition> >
//   CSchemaTypeOf<CNetworkVarBase<QAngle, HandInfo_t::NetworkVar_m_Angles> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, HandInfo_t::NetworkVar_m_vFilteredPosition> >
//   CSchemaTypeOf<CNetworkVarBase<QAngle, HandInfo_t::NetworkVar_m_FilteredAngles> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, HandInfo_t::NetworkVar_m_vFilteredVelocity> >
//   CSchemaTypeOf<CNetworkVarBase<Quaternion, HandInfo_t::NetworkVar_m_FilteredAngularVel> >
//   CSchemaTypeOf<CNetworkVarBase<float, HandInfo_t::NetworkVar_m_flTriggerAnalogValue> >
//   CSchemaTypeOf<CNetworkVarBase<float, HandInfo_t::NetworkVar_m_flGripAnalogValue> >
//   CSchemaTypeOf<CNetworkVarBase<float, HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueX> >
//   CSchemaTypeOf<CNetworkVarBase<float, HandInfo_t::NetworkVar_m_flTrackpadOrJoystickAnalogValueY> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CBaseVRHandAttachment::NetworkVar_m_bIsAttached> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFuncConveyor::NetworkVar_m_flConveyorSpeed> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CColorCorrectionVolume::NetworkVar_m_bEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<float, CColorCorrectionVolume::NetworkVar_m_MaxWeight> >
//   CSchemaTypeOf<CNetworkVarBase<float, CColorCorrectionVolume::NetworkVar_m_FadeDuration> >
//   CSchemaTypeOf<CNetworkVarBase<float, CColorCorrectionVolume::NetworkVar_m_Weight> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CPointCommentaryNode::NetworkVar_m_iszCommentaryFile> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointCommentaryNode::NetworkVar_m_bActive> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointCommentaryNode::NetworkVar_m_flStartTime> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CPointCommentaryNode::NetworkVar_m_iszSpeakers> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CPointCommentaryNode::NetworkVar_m_iNodeNumber> >
//   CSchemaTypeOf<CNetworkVarBase<int, CPointCommentaryNode::NetworkVar_m_iNodeNumberMax> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CDynamicLight::NetworkVar_m_Flags> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CDynamicLight::NetworkVar_m_LightStyle> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDynamicLight::NetworkVar_m_Radius> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDynamicLight::NetworkVar_m_Exponent> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDynamicLight::NetworkVar_m_InnerAngle> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDynamicLight::NetworkVar_m_OuterAngle> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDynamicLight::NetworkVar_m_SpotRadius> >
//   CSchemaTypeOf<CNetworkVarBase<PrecipitationType_t, CPrecipitation::NetworkVar_m_nPrecipType> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPrecipitation::NetworkVar_m_minSpeed> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPrecipitation::NetworkVar_m_maxSpeed> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvScreenOverlay::NetworkVar_m_flStartTime> >
//   CSchemaTypeOf<CNetworkVarBase<int, CEnvScreenOverlay::NetworkVar_m_iDesiredOverlay> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEnvScreenOverlay::NetworkVar_m_bIsActive> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvScreenEffect::NetworkVar_m_flDuration> >
//   CSchemaTypeOf<CNetworkVarBase<ScreenEffectType_t, CEnvScreenEffect::NetworkVar_m_nType> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CFunc_Dust::NetworkVar_m_SpawnRate> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CFunc_Dust::NetworkVar_m_SpeedMax> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFunc_Dust::NetworkVar_m_flSizeMin> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFunc_Dust::NetworkVar_m_flSizeMax> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CFunc_Dust::NetworkVar_m_DistMax> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CFunc_Dust::NetworkVar_m_LifetimeMin> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CFunc_Dust::NetworkVar_m_LifetimeMax> >
//   CSchemaTypeOf<CNetworkVarBase<float, CFunc_Dust::NetworkVar_m_FallSpeed> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CFunc_Dust::NetworkVar_m_DustFlags> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CFunc_LOD::NetworkVar_m_nDisappearMinDist> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CFunc_LOD::NetworkVar_m_nDisappearMaxDist> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlString, CFuncMonitor::NetworkVar_m_targetCamera> >
//   CSchemaTypeOf<CNetworkVarBase<int, CFuncMonitor::NetworkVar_m_nResolutionEnum> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CFuncMonitor::NetworkVar_m_bRenderShadows> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CFuncMonitor::NetworkVar_m_bUseUniqueColorTarget> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlString, CFuncMonitor::NetworkVar_m_brushModelName> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CFuncMonitor::NetworkVar_m_hTargetCamera> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CFuncMonitor::NetworkVar_m_bEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CInfoOverlayAccessor::NetworkVar_m_iOverlayID> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CLightGlow::NetworkVar_m_nHorizontalSize> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CLightGlow::NetworkVar_m_nVerticalSize> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CLightGlow::NetworkVar_m_nMinDist> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CLightGlow::NetworkVar_m_nMaxDist> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CLightGlow::NetworkVar_m_nOuterMaxDist> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightGlow::NetworkVar_m_flGlowProxySize> >
//   CSchemaTypeOf<CNetworkVarBase<float, CLightGlow::NetworkVar_m_flHDRColorScale> >
//   CSchemaTypeOf<CNetworkVarBase<int, CMaterialModifyControl::NetworkVar_m_iFrameStart> >
//   CSchemaTypeOf<CNetworkVarBase<int, CMaterialModifyControl::NetworkVar_m_iFrameEnd> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CMaterialModifyControl::NetworkVar_m_bWrap> >
//   CSchemaTypeOf<CNetworkVarBase<float, CMaterialModifyControl::NetworkVar_m_flFramerate> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CMaterialModifyControl::NetworkVar_m_bNewAnimCommandsSemaphore> >
//   CSchemaTypeOf<CNetworkVarBase<float, CMaterialModifyControl::NetworkVar_m_flFloatLerpStartValue> >
//   CSchemaTypeOf<CNetworkVarBase<float, CMaterialModifyControl::NetworkVar_m_flFloatLerpEndValue> >
//   CSchemaTypeOf<CNetworkVarBase<float, CMaterialModifyControl::NetworkVar_m_flFloatLerpTransitionTime> >
//   CSchemaTypeOf<CNetworkVarBase<MaterialModifyMode_t, CMaterialModifyControl::NetworkVar_m_nModifyMode> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CRagdollPropAttached::NetworkVar_m_boneIndexAttached> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CRagdollPropAttached::NetworkVar_m_ragdollAttachedObjectIndex> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointHMDAnchor::NetworkVar_m_bDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointHMDAnchor::NetworkVar_m_flEnableTime> >
//   CSchemaTypeOf<CNetworkVarBase<int, CPointHMDAnchor::NetworkVar_m_nPlayerIndex> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointValueRemapper::NetworkVar_m_bDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointValueRemapper::NetworkVar_m_bUpdateOnClient> >
//   CSchemaTypeOf<CNetworkVarBase<ValueRemapperInputType_t, CPointValueRemapper::NetworkVar_m_nInputType> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointValueRemapper::NetworkVar_m_flMaximumChangePerSecond> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointValueRemapper::NetworkVar_m_flDisengageDistance> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointValueRemapper::NetworkVar_m_flEngageDistance> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointValueRemapper::NetworkVar_m_bRequiresUseKey> >
//   CSchemaTypeOf<CNetworkVarBase<ValueRemapperOutputType_t, CPointValueRemapper::NetworkVar_m_nOutputType> >
//   CSchemaTypeOf<CNetworkVarBase<ValueRemapperHapticsType_t, CPointValueRemapper::NetworkVar_m_nHapticsType> >
//   CSchemaTypeOf<CNetworkVarBase<ValueRemapperMomentumType_t, CPointValueRemapper::NetworkVar_m_nMomentumType> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointValueRemapper::NetworkVar_m_flMomentumModifier> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointValueRemapper::NetworkVar_m_flSnapValue> >
//   CSchemaTypeOf<CNetworkVarBase<ValueRemapperRatchetType_t, CPointValueRemapper::NetworkVar_m_nRatchetType> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointValueRemapper::NetworkVar_m_flInputOffset> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointWorldText::NetworkVar_m_bEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPointWorldText::NetworkVar_m_bFullbright> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointWorldText::NetworkVar_m_flWorldUnitsPerPx> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointWorldText::NetworkVar_m_flFontSize> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPointWorldText::NetworkVar_m_flDepthOffset> >
//   CSchemaTypeOf<CNetworkVarBase<Color, CPointWorldText::NetworkVar_m_Color> >
//   CSchemaTypeOf<CNetworkVarBase<PointWorldTextJustifyHorizontal_t, CPointWorldText::NetworkVar_m_nJustifyHorizontal> >
//   CSchemaTypeOf<CNetworkVarBase<PointWorldTextJustifyVertical_t, CPointWorldText::NetworkVar_m_nJustifyVertical> >
//   CSchemaTypeOf<CNetworkVarBase<PointWorldTextReorientMode_t, CPointWorldText::NetworkVar_m_nReorientMode> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVRHand::NetworkVar_m_bInitialized> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVRHand::NetworkVar_m_bIsInView> >
//   CSchemaTypeOf<CNetworkVarBase<int, CPropVRHand::NetworkVar_m_nHandID> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPropVRHand::NetworkVar_m_flTriggerAnalogValue> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPropVRHand::NetworkVar_m_flGripAnalogValue> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPropVRHand::NetworkVar_m_flTrackpadOrJoystickAnalogValueX> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPropVRHand::NetworkVar_m_flTrackpadOrJoystickAnalogValueY> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVRHand::NetworkVar_m_bCanPerformUse> >
//   CSchemaTypeOf<CNetworkVarBase<eLiteralHandType, CPropVRHand::NetworkVar_m_LiteralHandType> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVRTrackedObject::NetworkVar_m_bIsTracking> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, CPropVRTrackedObject::NetworkVar_m_vTrackedPosition> >
//   CSchemaTypeOf<CNetworkVarBase<QAngle, CPropVRTrackedObject::NetworkVar_m_qTrackedAngles> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, CPropVRTrackedObject::NetworkVar_m_vPhysicallyConstrainedPosition> >
//   CSchemaTypeOf<CNetworkVarBase<QAngle, CPropVRTrackedObject::NetworkVar_m_qPhysicallyConstrainedAngles> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVRTrackedObject::NetworkVar_m_bClientIsAuthoritativeForTransform> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPropVRTrackedObject::NetworkVar_m_bIsInContact> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CPropZipline>, CPropZipline::NetworkVar_m_hPrevZipline> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CPropZipline>, CPropZipline::NetworkVar_m_hNextZipline> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CPhysBoxMultiplayer::NetworkVar_m_iPhysicsMode> >
//   CSchemaTypeOf<CNetworkVarBase<float, CPhysBoxMultiplayer::NetworkVar_m_fMass> >
//   CSchemaTypeOf<CNetworkVarBase<signed char, CRagdollManager::NetworkVar_m_iCurrentMaxRagdollCount> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CSceneEntity::NetworkVar_m_bIsPlayingBack> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CSceneEntity::NetworkVar_m_bPaused> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CSceneEntity::NetworkVar_m_bMultiplayer> >
//   CSchemaTypeOf<CNetworkVarBase<float, CSceneEntity::NetworkVar_m_flForceClientTime> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CSceneEntity::NetworkVar_m_nSceneStringIndex> >
//   CSchemaTypeOf<CNetworkVarBase<float, CShadowControl::NetworkVar_m_flShadowMaxDist> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CShadowControl::NetworkVar_m_bDisableShadows> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CShadowControl::NetworkVar_m_bEnableLocalLightShadows> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CParticlePerformanceMonitor::NetworkVar_m_bDisplayPerf> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CParticlePerformanceMonitor::NetworkVar_m_bMeasurePerf> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CSun::NetworkVar_m_bOn> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CSun::NetworkVar_m_nSize> >
//   CSchemaTypeOf<CNetworkVarBase<int, CSun::NetworkVar_m_nOverlaySize> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CSun::NetworkVar_m_nMaterial> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CSun::NetworkVar_m_nOverlayMaterial> >
//   CSchemaTypeOf<CNetworkVarBase<float, CSun::NetworkVar_m_flHDRColorScale> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CHandleTest::NetworkVar_m_bSendHandle> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeCPostProcessingResource>, CPostProcessingVolume::NetworkV
//   CSchemaTypeOf<CNetworkVarBase<float, CPostProcessingVolume::NetworkVar_m_flFadeTime> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CPostProcessingVolume::NetworkVar_m_bMaster> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bHidden> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bActivated> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTABaseAbility::NetworkVar_m_iDirtyButtons> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTABaseAbility::NetworkVar_m_iLevel> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bToggleState> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bInAbilityPhase> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTABaseAbility::NetworkVar_m_fCooldown> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTABaseAbility::NetworkVar_m_iCastRange> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTABaseAbility::NetworkVar_m_flCooldownLength> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTABaseAbility::NetworkVar_m_iManaCost> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bAutoCastState> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTABaseAbility::NetworkVar_m_flChannelStartTime> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bInIndefiniteCooldown> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bFrozenCooldown> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTABaseAbility::NetworkVar_m_flOverrideCastPoint> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseAbility::NetworkVar_m_bStolen> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTABaseGameMode::NetworkVar_m_nCustomGameForceHeroSelectionId> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bAlwaysShowPlayerInventory> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bGoldSoundDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bRecommendedItemsDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bStickyItemDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bStashPurchasingDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bFogOfWarDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bUseUnseenFOW> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bUseCustomBuybackCost> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bUseCustomBuybackCooldown> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bBuybackEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTABaseGameMode::NetworkVar_m_flCameraDistanceOverride> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CDOTA_BaseNPC>, CDOTABaseGameMode::NetworkVar_m_hOverrideSelectionEntity> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bTopBarTeamValuesOverride> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bTopBarTeamValuesVisible> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTABaseGameMode::NetworkVar_m_nTeamGoodGuysTopBarValue> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTABaseGameMode::NetworkVar_m_nTeamBadGuysTopBarValue> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bAlwaysShowPlayerNames> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bUseCustomHeroLevels> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bTowerBackdoorProtectionEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bBotThinkingEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bAnnouncerDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bKillingSpreeAnnouncerDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTABaseGameMode::NetworkVar_m_flFixedRespawnTime> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTABaseGameMode::NetworkVar_m_nHUDVisibilityBits> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTABaseGameMode::NetworkVar_m_flMinimumAttackSpeed> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTABaseGameMode::NetworkVar_m_flMaximumAttackSpeed> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bIsDaynightCycleDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTABaseGameMode::NetworkVar_m_bAreWeatherEffectsDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<int, TempViewerInfo_t::NetworkVar_m_nGridX> >
//   CSchemaTypeOf<CNetworkVarBase<int, TempViewerInfo_t::NetworkVar_m_nGridY> >
//   CSchemaTypeOf<CNetworkVarBase<int, TempViewerInfo_t::NetworkVar_m_nRadius> >
//   CSchemaTypeOf<CNetworkVarBase<signed char, TempViewerInfo_t::NetworkVar_m_nViewerType> >
//   CSchemaTypeOf<CNetworkVarBase<bool, TempViewerInfo_t::NetworkVar_m_bObstructedVision> >
//   CSchemaTypeOf<CNetworkVarBase<bool, TempViewerInfo_t::NetworkVar_m_bValid> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTAFogOfWarTempViewers::NetworkVar_m_FoWTempViewerVersion> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_ItemStockInfo::NetworkVar_iTeamNumber> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CDOTA_ItemStockInfo::NetworkVar_usItemIndex> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_ItemStockInfo::NetworkVar_fStockDuration> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_ItemStockInfo::NetworkVar_fStockTime> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_ItemStockInfo::NetworkVar_iStockCount> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_ItemStockInfo::NetworkVar_iMaxCount> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_ItemStockInfo::NetworkVar_fInitialStockDuration> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_ItemStockInfo::NetworkVar_iPlayerNumber> >
//   CSchemaTypeOf<CNetworkVarBase<int, CHeroStatueLiked::NetworkVar_m_iPlayerIDLiker> >
//   CSchemaTypeOf<CNetworkVarBase<int, CHeroStatueLiked::NetworkVar_m_iPlayerIDLiked> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, DOTA_AssassinMinigameNetworkState::NetworkVar_nAssassinState> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, DOTA_AssassinMinigameNetworkState::NetworkVar_nVictimHeroID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_AbilityDraftAbilityState::NetworkVar_m_unAbilityIndex> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_AbilityDraftAbilityState::NetworkVar_m_unPlayerID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_AbilityDraftAbilityState::NetworkVar_m_unAbilityPlayerSlot> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iMiscHeroPickCounter> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nOverlayHealthBarType> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bIsInCinematicMode> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bFreeCourierMode> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTAGamerules::NetworkVar_m_unFanfareGoodGuys> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTAGamerules::NetworkVar_m_unFanfareBadGuys> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nGameState> >
//   CSchemaTypeOf<CNetworkVarBase<DOTA_HeroPickState, CDOTAGamerules::NetworkVar_m_nHeroPickState> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flStateTransitionTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flOverride_dota_hero_selection_time> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flOverride_dota_pregame_time> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flOverride_dota_postgame_time> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flOverride_dota_strategy_time> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flOverride_dota_team_showcase_duration> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flOverride_dota_rune_spawn_time> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iGameMode> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flHeroPickStateTransitionTime> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, CDOTAGamerules::NetworkVar_m_iPlayerIDsInControl> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bSameHeroSelectionEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bUseCustomHeroXPValue> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bUseBaseGoldBountyOnHeroes> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bUseUniversalShopMode> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bHideKillMessageHeaders> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flHeroMinimapIconScale> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flCreepMinimapIconScale> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flRuneMinimapIconScale> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flCustomGameEndDelay> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flCustomGameSetupAutoLaunchDelay> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flCustomGameSetupTimeout> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flCustomVictoryMessageDuration> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bCustomGameSetupAutoLaunchEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bCustomGameTeamSelectionLocked> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iCMModePickBanOrder> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iCDModePickBanOrder> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iPauseTeam> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nGGTeam> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flGGEndsAtTime> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bWhiteListEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nLastHitUIMode> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bHUDTimerTutorialMode> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bHeroRespawnEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bIsRandomingEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iActiveTeam> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iStartingTeam> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iPenaltyLevelRadiant> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iPenaltyLevelDire> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bTier3TowerDestroyed> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nSeriesType> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nRadiantSeriesWins> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nDireSeriesWins> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flPreGameStartTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flGameStartTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flGameEndTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flGameLoadTime> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nCustomGameDifficulty> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_fGoodGlyphCooldown> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_fBadGlyphCooldown> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_fGoodRadarCooldown> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_fBadRadarCooldown> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bIsNightstalkerNight> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bIsTemporaryNight> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nRiverType> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nGameWinner> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, CDOTAGamerules::NetworkVar_m_unMatchID64> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bMatchSignoutComplete> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_fGameTime> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iNetTimeOfDay> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nLoadedPlayers> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nExpectedPlayers> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iMinimapDebugGridState> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_iFoWFrameNumber> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bIsStableMode> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bGamePaused> >
//   CSchemaTypeOf<CNetworkVarBase<ERoshanSpawnPhase, CDOTAGamerules::NetworkVar_m_nRoshanRespawnPhase> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAGamerules::NetworkVar_m_flRoshanRespawnPhaseEndTime> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nAbilityDraftPlayerTracker> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nAbilityDraftRoundNumber> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nAbilityDraftAdvanceSteps> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nAbilityDraftPhase> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAGamerules::NetworkVar_m_nAllDraftPhase> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bAllDraftRadiantFirst> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAGamerules::NetworkVar_m_bAllowOverrideVPK> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTAGamerules::NetworkVar_m_lobbyType> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTAGamerules::NetworkVar_m_lobbyLeagueID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_DisplacementVisibility::NetworkVar_m_HiddenDisplacement> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Hero_Recorder::NetworkVar_m_bStartRecording> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAHoldoutNetworker::NetworkVar_m_flPrepTimeLeft> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAHoldoutNetworker::NetworkVar_m_nWaveEnemyCount> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAHoldoutNetworker::NetworkVar_m_nCurrentEnemyCount> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAHoldoutNetworker::NetworkVar_m_nNumberOfRounds> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAHoldoutNetworker::NetworkVar_m_nRoundNumber> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAHoldoutNetworker::NetworkVar_m_bIsHeroRespawnEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAHoldoutNetworker::NetworkVar_m_nGoldBagsExpired> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, InGamePredictionData_t::NetworkVar_m_nID> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, InGamePredictionData_t::NetworkVar_m_nValue> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, InGamePredictionData_t::NetworkVar_m_nRawValue> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, InGamePredictionData_t::NetworkVar_m_nValueState> >
//   CSchemaTypeOf<CNetworkVarBase<bool, InGamePredictionData_t::NetworkVar_m_bValueIsMask> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAInGamePredictionState::NetworkVar_m_bVotingClosed> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAInGamePredictionState::NetworkVar_m_bAllPredictionsFinished> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTAInGamePredictionState::NetworkVar_m_nLeagueID> >
//   CSchemaTypeOf<CNetworkVarBase<float, CIngameEvent_FM2015::NetworkVar_m_flWagerTimer> >
//   CSchemaTypeOf<CNetworkVarBase<float, CIngameEvent_FM2015::NetworkVar_m_flWagerEndTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CIngameEvent_FM2015::NetworkVar_m_flBonusWagerRate> >
//   CSchemaTypeOf<CNetworkVarBase<float, CIngameEvent_WM2016::NetworkVar_m_flWagerTimer> >
//   CSchemaTypeOf<CNetworkVarBase<float, CIngameEvent_WM2016::NetworkVar_m_flWagerEndTime> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nType> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nQuestID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nQuestChallengeID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nTier> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nParam0> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nParam1> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nSlotID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nProgress> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nCompletionThreshold> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nPlayerID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nQueryIndex> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nEventID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nSequenceID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nCompleted> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_PlayerChallengeInfo::NetworkVar_nRank> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nType> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nTier> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nSlotID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nProgress> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nCompletionThreshold> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nPlayerID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nQueryIndex> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nEventID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nSequenceID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nRequiredHero> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASubChallengeInfo::NetworkVar_nCompleted> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_CombatLogQueryProgress::NetworkVar_m_nPlayerID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_CombatLogQueryProgress::NetworkVar_m_nQueryID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_CombatLogQueryProgress::NetworkVar_m_nQueryRank> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_CombatLogQueryProgress::NetworkVar_m_nMultiQueryID> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bCombinable> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bPermanent> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bStackable> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bRecipe> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Item::NetworkVar_m_iSharability> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bDroppable> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bPurchasable> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bSellable> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bRequiresCharges> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bKillable> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bDisassemblable> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bAlertable> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Item::NetworkVar_m_iInitialCharges> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bCastOnPickup> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bCanBeUsedOutOfInventory> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bItemEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_Item::NetworkVar_m_flEnableTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_Item::NetworkVar_m_flPurchaseTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_Item::NetworkVar_m_flAssembledTime> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Item::NetworkVar_m_iCurrentCharges> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Item::NetworkVar_m_iSecondaryCharges> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bCombineLocked> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Item::NetworkVar_m_iPlayerOwnerID> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Item::NetworkVar_m_bPurchasedWhileDead> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CDOTA_Item>, CDOTA_Item_Physical::NetworkVar_m_hItem> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Item_Rune::NetworkVar_m_iRuneType> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_Item_RuneSpawner_Powerup::NetworkVar_m_flLastSpawnTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_Item_RuneSpawner_Bounty::NetworkVar_m_flLastSpawnTime> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, CDOTAPlayer::NetworkVar_m_vecStartingPosition> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iSpectatorClickBehavior> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAPlayer::NetworkVar_m_flAspectRatio> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iStatsPanel> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iShopPanel> >
//   CSchemaTypeOf<CNetworkVarBase<ShopItemViewMode_t, CDOTAPlayer::NetworkVar_m_iShopViewMode> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iStatsDropdownCategory> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iStatsDropdownSort> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAPlayer::NetworkVar_m_bInShowCaseMode> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTAPlayer::NetworkVar_m_flCameraZoomAmount> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iHighPriorityScore> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAPlayer::NetworkVar_m_bUsingAssistedCameraOperator> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAPlayer::NetworkVar_m_bUsingCameraMan> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_nPlayerAssistFlags> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iMusicStatus> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iPlayerID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_nServerOrderSequenceNumber> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_nCachedCoachedTeam> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iTotalEarnedGold> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTAPlayer::NetworkVar_m_iTotalEarnedXP> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTA_PlayerResource::NetworkVar_m_nEventIDAssociatedWithEventData> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_nSelectedHeroID> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iKills> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iAssists> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iDeaths> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iStreak> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iLevel> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iRespawnSeconds> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iLastBuybackTime> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, PlayerResourcePlayerTeamData_t::NetworkVar_m_hSelectedHero> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bAFK> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bVoiceChatBanned> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iTimedRewardDrops> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iTimedRewardDropOrigins> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iTimedRewardCrates> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iTimedRewardEvents> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_unCompendiumLevel> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bCanRepick> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bHasRandomed> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_nRandomedHeroID> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bBattleBonusActive> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleBonusRate> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iCustomBuybackCost> >
//   CSchemaTypeOf<CNetworkVarBase<Color, PlayerResourcePlayerTeamData_t::NetworkVar_m_CustomPlayerColor> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bQualifiesForPAContractReward> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bHasPredictedVictory> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_UnitShareMasks> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iTeamSlot> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iEventPoints> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iEventPremiumPoints> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iEventWagerTokensRemaining> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iEventWagerTokensMax> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iEventEffectsMask> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iEventRanks> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerTeamData_t::NetworkVar_m_bIsEventOwned> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, PlayerResourcePlayerTeamData_t::NetworkVar_m_hCourier> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleCupWinStreak> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleCupWinDate> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleCupSkillLevel> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleCupTeamID> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleCupTournamentID> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, PlayerResourcePlayerTeamData_t::NetworkVar_m_iBattleCupDivision> >
//   CSchemaTypeOf<CNetworkVarBase<float, PlayerResourcePlayerTeamData_t::NetworkVar_m_flTeamFightParticipation> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iFirstBloodClaimed> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerTeamData_t::NetworkVar_m_iFirstBloodGiven> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerData_t::NetworkVar_m_bIsValid> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, PlayerResourcePlayerData_t::NetworkVar_m_iszPlayerName> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerData_t::NetworkVar_m_iPlayerTeam> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerData_t::NetworkVar_m_bFullyJoinedServer> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerData_t::NetworkVar_m_bFakeClient> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerData_t::NetworkVar_m_bIsBroadcaster> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, PlayerResourcePlayerData_t::NetworkVar_m_iBroadcasterChannel> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, PlayerResourcePlayerData_t::NetworkVar_m_iBroadcasterChannelSlot> >
//   CSchemaTypeOf<CNetworkVarBase<bool, PlayerResourcePlayerData_t::NetworkVar_m_bIsBroadcasterChannelCameraman> >
//   CSchemaTypeOf<CNetworkVarBase<int, PlayerResourcePlayerData_t::NetworkVar_m_iConnectionState> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, PlayerResourcePlayerData_t::NetworkVar_m_iPlayerSteamID> >
//   CSchemaTypeOf<CNetworkVarBase<DOTATeam_t, PlayerResourcePlayerData_t::NetworkVar_m_eCoachTeam> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, PlayerResourceBroadcasterData_t::NetworkVar_m_iszBroadcasterChannelDescri
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, PlayerResourceBroadcasterData_t::NetworkVar_m_iszBroadcasterChannelCountr
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, PlayerResourceBroadcasterData_t::NetworkVar_m_iszBroadcasterChannelLangua
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iReliableGold> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iUnreliableGold> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iStartingPosition> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iTotalEarnedGold> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iTotalEarnedXP> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iSharedGold> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iHeroKillGold> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iCreepKillGold> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iIncomeGold> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iNetWorth> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iDenyCount> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iLastHitCount> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iLastHitStreak> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iLastHitMultikill> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iNearbyCreepDeathCount> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iClaimedDenyCount> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iClaimedMissCount> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iMissCount> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_nPossibleHeroSelection> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, DataTeamPlayer_t::NetworkVar_m_iMetaLevel> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, DataTeamPlayer_t::NetworkVar_m_iMetaExperience> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, DataTeamPlayer_t::NetworkVar_m_iMetaExperienceAwarded> >
//   CSchemaTypeOf<CNetworkVarBase<float, DataTeamPlayer_t::NetworkVar_m_flBuybackCooldownTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, DataTeamPlayer_t::NetworkVar_m_flBuybackGoldLimitTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, DataTeamPlayer_t::NetworkVar_m_flBuybackCostTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, DataTeamPlayer_t::NetworkVar_m_flCustomBuybackCooldown> >
//   CSchemaTypeOf<CNetworkVarBase<float, DataTeamPlayer_t::NetworkVar_m_fStuns> >
//   CSchemaTypeOf<CNetworkVarBase<float, DataTeamPlayer_t::NetworkVar_m_fHealing> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iTowerKills> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iRoshanKills> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, DataTeamPlayer_t::NetworkVar_m_hCameraTarget> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, DataTeamPlayer_t::NetworkVar_m_hOverrideSelectionEntity> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iObserverWardsPlaced> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iSentryWardsPlaced> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iCreepsStacked> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iCampsStacked> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iRunePickups> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iGoldSpentOnSupport> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iHeroDamage> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iWardsPurchased> >
//   CSchemaTypeOf<CNetworkVarBase<int, DataTeamPlayer_t::NetworkVar_m_iWardsDestroyed> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDotaSubquestBase::NetworkVar_m_bHidden> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDotaSubquestBase::NetworkVar_m_bCompleted> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDotaSubquestBase::NetworkVar_m_bShowProgressBar> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDotaSubquestBase::NetworkVar_m_nProgressBarHueShift> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDotaSubquestBase::NetworkVar_m_nTextReplaceValueVersion> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDotaQuest::NetworkVar_m_nQuestType> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDotaQuest::NetworkVar_m_bHidden> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDotaQuest::NetworkVar_m_bCompleted> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDotaQuest::NetworkVar_m_bWinIfCompleted> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDotaQuest::NetworkVar_m_bLoseIfCompleted> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDotaQuest::NetworkVar_m_nTextReplaceValueVersion> >
//   CSchemaTypeOf<CNetworkVarBase<short int, ClientQuickBuyItemState::NetworkVar_nItemType> >
//   CSchemaTypeOf<CNetworkVarBase<bool, ClientQuickBuyItemState::NetworkVar_bPurchasable> >
//   CSchemaTypeOf<CNetworkVarBase<float, CSpeechBubbleInfo::NetworkVar_m_flDuration> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CSpeechBubbleInfo::NetworkVar_m_unOffsetX> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CSpeechBubbleInfo::NetworkVar_m_unOffsetY> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CSpeechBubbleInfo::NetworkVar_m_unCount> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_SimpleObstruction::NetworkVar_m_bEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_SimpleObstruction::NetworkVar_m_bBlockFoW> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASpecGraphPlayerData::NetworkVar_m_nCreatedByPlayerID> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTASpectatorGraphManager::NetworkVar_m_flTotalEarnedGoldStartTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTASpectatorGraphManager::NetworkVar_m_flTotalEarnedGoldEndTime> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTASpectatorGraphManager::NetworkVar_m_nGoldGraphVersion> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, CDOTACameraBounds::NetworkVar_m_vecBoundsMin> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, CDOTACameraBounds::NetworkVar_m_vecBoundsMax> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTATeam::NetworkVar_m_iHeroKills> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTATeam::NetworkVar_m_iTowerKills> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTATeam::NetworkVar_m_iBarracksKills> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTATeam::NetworkVar_m_unTournamentTeamID> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, CDOTATeam::NetworkVar_m_ulTeamLogo> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, CDOTATeam::NetworkVar_m_ulTeamBaseLogo> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, CDOTATeam::NetworkVar_m_ulTeamBannerLogo> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTATeam::NetworkVar_m_bTeamComplete> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTATeam::NetworkVar_m_bTeamIsHomeTeam> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nTutorialState> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nTaskProgress> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nTaskSteps> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nTaskSecondsRemianing> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nUIState> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nShopState> >
//   CSchemaTypeOf<CNetworkVarBase<Vector, CDotaTutorialNetworker::NetworkVar_m_TargetLocation> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDotaTutorialNetworker::NetworkVar_m_nLocationID> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_UnitInventory::NetworkVar_m_iParity> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_UnitInventory::NetworkVar_m_hInventoryParent> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_UnitInventory::NetworkVar_m_bStashEnabled> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_UnitInventory::NetworkVar_m_hTransientCastItem> >
//   CSchemaTypeOf<CNetworkVarBase<Color, CEnvDeferredLight::NetworkVar_m_LightColor> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDeferredLight::NetworkVar_m_flIntensity> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDeferredLight::NetworkVar_m_flLightSize> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDeferredLight::NetworkVar_m_flSpotFoV> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDeferredLight::NetworkVar_m_flStartFalloff> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEnvDeferredLight::NetworkVar_m_flDistanceFalloff> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CEnvDeferredLight::NetworkVar_m_nFlags> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bSelectionRingVisible> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iCurrentLevel> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flMana> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flMaxMana> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flManaThinkRegen> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flHealthThinkRegen> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_nHealthBarOffsetOverride> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsPhantom> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsAncient> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsNeutralUnitType> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsSummoned> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bCanBeDominated> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bHasUpgradeableAbilities> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iBKBChargesUsed> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iBotDebugData> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsMoving> >
//   CSchemaTypeOf<CNetworkVarBase<long long int, CDOTA_BaseNPC::NetworkVar_m_nTotalDamageTaken> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iMoveSpeed> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flTauntCooldown> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iDayTimeVisionRange> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iNightTimeVisionRange> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flPhysicalArmorValue> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flMagicalResistanceValue> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iAttackCapabilities> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iSpecialAbility> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_nPlayerOwnerID> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, CDOTA_BaseNPC::NetworkVar_m_nUnitState64> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iTaggedAsVisibleByTeam> >
//   CSchemaTypeOf<CNetworkVarBase<long long unsigned int, CDOTA_BaseNPC::NetworkVar_m_iIsControllableByPlayer64> >
//   CSchemaTypeOf<CNetworkVarBase<CUtlSymbolLarge, CDOTA_BaseNPC::NetworkVar_m_iszUnitName> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iUnitNameIndex> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iDamageMin> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iDamageMax> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_iDamageBonus> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsWaitingToSpawn> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bIsIllusion> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, CDOTA_BaseNPC::NetworkVar_m_nUnitLabelIndex> >
//   CSchemaTypeOf<CNetworkVarBase<DOTA_SHOP_TYPE, CDOTA_BaseNPC::NetworkVar_m_iCurShop> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bStolenScepter> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_anglediff> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_NetworkActivity> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC::NetworkVar_m_NetworkSequenceIndex> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC::NetworkVar_m_bShouldDoFlyHeightVisual> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC::NetworkVar_m_flStartSequenceCycle> >
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>, CDOTA_BaseNPC_Building::Netwo
//   CSchemaTypeOf<CNetworkVarBase<CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>, CDOTA_BaseNPC_Building::Netwo
//   CSchemaTypeOf<CNetworkVarBase<QAngle, CDOTA_BaseNPC_Building::NetworkVar_m_angInitialAngles> >
//   CSchemaTypeOf<CNetworkVarBase<HSequence, CDOTA_BaseNPC_Building::NetworkVar_m_hHeroStatueSequence> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC_Building::NetworkVar_m_fHeroStatueCycle> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC_Building::NetworkVar_m_iHeroStatueStatusEffectIndex> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC_Building::NetworkVar_m_bHeroStatue> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC_Building::NetworkVar_m_bBattleCup> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC_Building::NetworkVar_m_iHeroStatueOwnerPlayerID> >
//   CSchemaTypeOf<CNetworkVarBase<Color, CDOTA_BaseNPC_Building::NetworkVar_m_ParticleTintColor> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_BaseNPC_Tower::NetworkVar_m_hTowerAttackTarget> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_Unit_Roquelaire::NetworkVar_m_flFlyHeight> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CInfoPlayerStartDota::NetworkVar_m_bDisabled> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flStrength> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flAgility> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flIntellect> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flStrengthTotal> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flAgilityTotal> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flIntellectTotal> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iRecentDamage> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iPrimaryAttribute> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iAbilityPoints> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iCurrentXP> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flRespawnTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flRespawnTimePenalty> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_BaseNPC_Hero::NetworkVar_m_iPlayerID> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CDOTA_BaseNPC_Hero>, CDOTA_BaseNPC_Hero::NetworkVar_m_hReplicatingOtherHeroModel> 
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC_Hero::NetworkVar_m_bReincarnating> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_BaseNPC_Hero::NetworkVar_m_bCustomKillEffect> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_BaseNPC_Hero::NetworkVar_m_flSpawnedAt> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_BaseNPC_Hero::NetworkVar_m_hEconConsumableAbility> >
//   CSchemaTypeOf<CNetworkVarBase<DOTA_SHOP_TYPE, CDOTA_BaseNPC_Shop::NetworkVar_m_ShopType> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_NeutralSpawner::NetworkVar_m_Type> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_Ability_Morphling_Hybrid::NetworkVar_m_hImage> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTA_Unit_Courier::NetworkVar_m_bFlyingCourier> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_Unit_Courier::NetworkVar_m_flRespawnTime> >
//   CSchemaTypeOf<CNetworkVarBase<CourierState_t, CDOTA_Unit_Courier::NetworkVar_m_nCourierState> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_Unit_Courier::NetworkVar_m_hCourierStateEntity> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTA_Unit_Hero_PhantomAssassin::NetworkVar_m_nArcanaLevel> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_NPC_WitchDoctor_Ward::NetworkVar_m_nTargetType> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Unit_LoopingSound::NetworkVar_m_nLoopingSoundParity> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_Unit_TargetDummy::NetworkVar_m_flDamageTaken> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_Unit_TargetDummy::NetworkVar_m_flLastHit> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_Unit_TargetDummy::NetworkVar_m_flStartDamageTime> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_Unit_TargetDummy::NetworkVar_m_flLastDamageTime> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Ability_Brewmaster_DrunkenBrawler::NetworkVar_m_iBrawlActive> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Ability_Invoker_InvokedBase::NetworkVar_m_nQuasLevel> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Ability_Invoker_InvokedBase::NetworkVar_m_nWexLevel> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Ability_Invoker_InvokedBase::NetworkVar_m_nExortLevel> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_Ability_LoneDruid_SpiritBear::NetworkVar_m_hBear> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CDOTA_Ability_ArcWarden_TempestDouble::NetworkVar_m_hDoubles> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Unit_Hero_Meepo::NetworkVar_m_nWhichMeepo> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Ability_Meepo_DividedWeStand::NetworkVar_m_nWhichDividedWeStand> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Ability_Meepo_DividedWeStand::NetworkVar_m_nNumDividedWeStand> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTA_Unit_Hero_MonkeyKing::NetworkVar_m_nTreeDisguise> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTA_Unit_Hero_MonkeyKing::NetworkVar_m_nPerchedTree> >
//   CSchemaTypeOf<CNetworkVarBase<float, CDOTA_Ability_Rubick_SpellSteal::NetworkVar_m_fStolenCastPoint> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CDOTA_Unit_Hero_Terrorblade::NetworkVar_m_nArcanaColor> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Item_PowerTreads::NetworkVar_m_iStat> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Item_EmptyBottle::NetworkVar_m_iStoredRuneType> >
//   CSchemaTypeOf<CNetworkVarBase<int, CDOTA_Item_RiverPainter::NetworkVar_m_iRiverPaintColor> >
//   CSchemaTypeOf<CNetworkVarBase<int, CAttributeManager::NetworkVar_m_iReapplyProvisionParity> >
//   CSchemaTypeOf<CNetworkVarBase<CHandle<CBaseEntity>, CAttributeManager::NetworkVar_m_hOuter> >
//   CSchemaTypeOf<CNetworkVarBase<attributeprovidertypes_t, CAttributeManager::NetworkVar_m_ProviderType> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAWearableItem::NetworkVar_m_bOwnerModelChanged> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CDOTAWearableItem::NetworkVar_m_bIsGeneratingEconItem> >
//   CSchemaTypeOf<CNetworkVarBase<short unsigned int, CEconItemAttribute::NetworkVar_m_iAttributeDefinitionIndex> >
//   CSchemaTypeOf<CNetworkVarBase<float, CEconItemAttribute::NetworkVar_m_flValue> >
//   CSchemaTypeOf<CNetworkVarBase<item_definition_index_t, CEconItemView::NetworkVar_m_iItemDefinitionIndex> >
//   CSchemaTypeOf<CNetworkVarBase<int, CEconItemView::NetworkVar_m_iEntityQuality> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CEconItemView::NetworkVar_m_iEntityLevel> >
//   CSchemaTypeOf<CNetworkVarBase<itemid_t, CEconItemView::NetworkVar_m_iItemID> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CEconItemView::NetworkVar_m_iAccountID> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned int, CEconItemView::NetworkVar_m_iInventoryPosition> >
//   CSchemaTypeOf<CNetworkVarBase<bool, CEconItemView::NetworkVar_m_bInitialized> >
//   CSchemaTypeOf<CNetworkVarBase<style_index_t, CEconItemView::NetworkVar_m_nOverrideStyle> >
//   CSchemaTypeOf<CNetworkVarBase<unsigned char, NextBotCombatCharacter::NetworkVar_m_nLod> >
//   CSchemaTypeOf<CNetworkVarBase<int, CEntityIdentity::NetworkVar_m_nameStringableIndex> >
//   CSchemaTypeOf<CNetworkColorBase<Color, CEnvSky::NetworkVar_m_vTintColor> >
//   CSchemaTypeOf<CNetworkColorBase<Color, CPointCamera::NetworkVar_m_FogColor> >
//   CSchemaTypeOf<CNetworkColorBase<Color, CGlowProperty::NetworkVar_m_glowColorOverride> >
//   CSchemaTypeOf<CNetworkColorBase<Color, fogparams_t::NetworkVar_colorPrimary> >
//   CSchemaTypeOf<CNetworkColorBase<Color, fogparams_t::NetworkVar_colorSecondary> >
//   CSchemaTypeOf<CNetworkColorBase<Color, fogparams_t::NetworkVar_colorPrimaryLerpTo> >
//   CSchemaTypeOf<CNetworkColorBase<Color, fogparams_t::NetworkVar_colorSecondaryLerpTo> >
//   CSchemaTypeOf<CNetworkColorBase<Color, CBaseModelEntity::NetworkVar_m_clrRender> >
//   CSchemaTypeOf<CNetworkColorBase<Color, CEnvProjectedTexture::NetworkVar_m_LightColor> >
//   CSchemaTypeOf<CNetworkColorBase<Color, CLightComponent::NetworkVar_m_Color> >
//   CSchemaTypeOf<CNetworkColorBase<Color, CEnvFade::NetworkVar_m_fadeColor> >
//   CSchemaTypeOf<CNetworkColorBase<Color, CFunc_Dust::NetworkVar_m_Color> >
//   CSchemaTypeOf<CNetworkColorBase<Color, CShadowControl::NetworkVar_m_shadowColor> >
//   CSchemaTypeOf<CNetworkColorBase<Color, CSun::NetworkVar_m_clrOverlay> >
//   CSchemaTypeOf<CNetworkColorBase<Color, CDOTATeam::NetworkVar_m_CustomHealthbarColor> >
//   CSchemaTypeOf<CNetworkColorBase<Color, CDOTA_BaseNPC::NetworkVar_m_CustomHealthLabelColor> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CDevtestHierarchy::NetworkVar_m_vDynamicAttachOffset> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CBeam::NetworkVar_m_vecEndPos> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vecMins> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vecMaxs> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vecSpecifiedSurroundingMins> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vecSpecifiedSurroundingMaxs> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vCapsuleCenter1> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vCapsuleCenter2> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CEffectData::NetworkVar_m_vOrigin> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CEffectData::NetworkVar_m_vStart> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CEffectData::NetworkVar_m_vNormal> >
//   CSchemaTypeOf<CNetworkVectorBase<QAngle, CEffectData::NetworkVar_m_vAngles> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CEnvWindShared::NetworkVar_m_location> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CFuncLadder::NetworkVar_m_vecLadderDir> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CFuncLadder::NetworkVar_m_vecPlayerMountPositionTop> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CFuncLadder::NetworkVar_m_vecPlayerMountPositionBottom> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, fogparams_t::NetworkVar_dirPrimary> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, sky3dparams_t::NetworkVar_origin> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CBaseAnimating::NetworkVar_m_vecForce> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CBaseEntity::NetworkVar_m_vecAbsVelocity> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CBaseEntity::NetworkVar_m_vecBaseVelocity> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CBaseFlex::NetworkVar_m_viewtarget> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CEntityDissolve::NetworkVar_m_vDissolverOrigin> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CFish::NetworkVar_m_poolOrigin> >
//   CSchemaTypeOf<CNetworkVectorBase<QAngle, CGameSceneNode::NetworkVar_m_angRotation> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CBasePlayer::NetworkVar_m_vecLadderNormal> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CBasePlayer::NetworkVar_m_vecConstraintCenter> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CPropVehicleDriveable::NetworkVar_m_vecEyeExitEndpoint> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CPropVehicleDriveable::NetworkVar_m_vecGunCrosshair> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CRagdollPropAttached::NetworkVar_m_attachmentPointBoneSpace> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CRagdollPropAttached::NetworkVar_m_attachmentPointRagdollSpace> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CShadowControl::NetworkVar_m_shadowDirection> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CSun::NetworkVar_m_vDirection> >
//   CSchemaTypeOf<CNetworkVectorBase<Vector, CDOTA_TempTree::NetworkVar_m_vecTreeCircleCenter> >
//   CSchemaTypeOf<CNetworkVectorBase<QAngle, CEnvDeferredLight::NetworkVar_m_vLightDirection> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CEnvClock::NetworkVar_m_hHourHand> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CEnvClock::NetworkVar_m_hMinuteHand> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CEnvClock::NetworkVar_m_hSecondHand> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseCombatCharacter, CBaseCombatWeapon::NetworkVar_m_hOwner> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseCombatWeapon, CBaseViewModel::NetworkVar_m_hWeapon> >
//   CSchemaTypeOf<CNetworkHandleBase<CFogController, fogplayerparams_t::NetworkVar_m_hCtrl> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CSprite::NetworkVar_m_hAttachedToEntity> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseCombatWeapon, CBaseCombatCharacter::NetworkVar_m_hActiveWeapon> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CBaseEntity::NetworkVar_m_hEffectEntity> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CBaseEntity::NetworkVar_m_hOwnerEntity> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CBaseEntity::NetworkVar_m_hGroundEntity> >
//   CSchemaTypeOf<CNetworkHandleBase<CBasePropDoor, CBasePropDoor::NetworkVar_m_hMaster> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseModelEntity, CBaseButton::NetworkVar_m_glowEntity> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CEntityFlame::NetworkVar_m_hEntAttached> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CEnvProjectedTexture::NetworkVar_m_hTargetEntity> >
//   CSchemaTypeOf<CNetworkHandleBase<CPostProcessController, CBasePlayer::NetworkVar_m_hPostProcessCtrl> >
//   CSchemaTypeOf<CNetworkHandleBase<CColorCorrection, CBasePlayer::NetworkVar_m_hColorCorrectionCtrl> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hUseEntity> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hHeldEntity> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hVehicle> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hObserverTarget> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hZoomOwner> >
//   CSchemaTypeOf<CNetworkHandleBase<CPropHMDAvatar, CBasePlayer::NetworkVar_m_hPropHMDAvatar> >
//   CSchemaTypeOf<CNetworkHandleBase<CPointHMDAnchor, CBasePlayer::NetworkVar_m_hPointHMDAnchor> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseCombatWeapon, CBasePlayer::NetworkVar_m_hLastWeapon> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hViewEntity> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hConstraintEntity> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CRopeKeyframe::NetworkVar_m_hStartPoint> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CRopeKeyframe::NetworkVar_m_hEndPoint> >
//   CSchemaTypeOf<CNetworkHandleBase<CBasePlayer, CPropVehicleDriveable::NetworkVar_m_hPlayer> >
//   CSchemaTypeOf<CNetworkHandleBase<CBasePlayer, CVGuiScreen::NetworkVar_m_hPlayerOwner> >
//   CSchemaTypeOf<CNetworkHandleBase<CPropVRHand, CBaseVRHandAttachment::NetworkVar_m_hAttachedHand> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CPointCommentaryNode::NetworkVar_m_hViewPosition> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CPointValueRemapper::NetworkVar_m_hRemapLineStart> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CPointValueRemapper::NetworkVar_m_hRemapLineEnd> >
//   CSchemaTypeOf<CNetworkHandleBase<CPointWorldText, CPropHMDAvatar::NetworkVar_m_hCloseCaption> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseVRHandAttachment, CPropVRHand::NetworkVar_m_hActiveHandAttachment> >
//   CSchemaTypeOf<CNetworkHandleBase<CPropHMDAvatar, CPropVRHand::NetworkVar_m_hHMDAvatar> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CHandleTest::NetworkVar_m_Handle> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTA_Ability_Brewmaster_PrimalSplit::NetworkVar_m_hPrimary> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTA_Ability_Brewmaster_PrimalSplit::NetworkVar_m_hSecondary> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTA_Ability_Brewmaster_PrimalSplit::NetworkVar_m_hTertiary> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTA_DataSpectator::NetworkVar_m_hPowerupRune> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTA_DataSpectator::NetworkVar_m_hBountyRune_1> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTA_DataSpectator::NetworkVar_m_hBountyRune_2> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTA_DataSpectator::NetworkVar_m_hBountyRune_3> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTA_DataSpectator::NetworkVar_m_hBountyRune_4> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hEndGameCinematicEntity> >
//   CSchemaTypeOf<CNetworkHandleBase<CDOTA_BaseNPC, CDOTAGamerules::NetworkVar_m_hOverlayHealthBarUnit> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hGameModeEntity> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hSideShop1> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hSideShop2> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hSecretShop1> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hSecretShop2> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hAnnouncerGood> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hAnnouncerBad> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hAnnouncerSpectator> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hAnnouncerGood_KillingSpree> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hAnnouncerBad_KillingSpree> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hAnnouncerSpectator_KillingSpree> >
//   CSchemaTypeOf<CNetworkHandleBase<CDOTA_BaseNPC, CDOTA_Hero_Recorder::NetworkVar_m_hHero> >
//   CSchemaTypeOf<CNetworkHandleBase<CDOTAPlayer, CDOTA_Hero_Recorder::NetworkVar_m_hPlayer> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAPlayer::NetworkVar_m_hSpectatorQueryUnit> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAPlayer::NetworkVar_m_hKillCamUnit> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTAPlayer::NetworkVar_m_hAssignedHero> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CSpeechBubbleInfo::NetworkVar_m_hNPC> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTA_Ability_Pudge_Dismember::NetworkVar_m_hVictim> >
//   CSchemaTypeOf<CNetworkHandleBase<CDOTA_BaseNPC, CDOTA_Unit_Hero_Tiny::NetworkVar_m_hIllusionOwner> >
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTA_Ability_VengefulSpirit_Nether_Swap::NetworkVar_m_hScepterIllusion> >
//   CSchemaTypeOf<CNetworkHandleBase<CDOTA_Ability_Meepo_DividedWeStand, CDOTA_Ability_Meepo_DividedWeStand::NetworkVar_m_en
//   CSchemaTypeOf<CNetworkHandleBase<CDOTA_Ability_Meepo_DividedWeStand, CDOTA_Ability_Meepo_DividedWeStand::NetworkVar_m_en
//   CSchemaTypeOf<CNetworkHandleBase<CBaseEntity, CDOTA_ModifierManager::NetworkVar_m_hModifierParent> >
//   CSchemaTypeOf<CNetworkStringBase<512, CPointClientUIWorldTextPanel::NetworkVar_m_messageText> >
//   CSchemaTypeOf<CNetworkStringBase<260, CColorCorrection::NetworkVar_m_netlookupFilename> >
//   CSchemaTypeOf<CNetworkStringBase<260, CEnvProjectedTexture::NetworkVar_m_SpotlightTextureName> >
//   CSchemaTypeOf<CNetworkStringBase<260, CParticleSystem::NetworkVar_m_szSnapshotFileName> >
//   CSchemaTypeOf<CNetworkStringBase<18, CBasePlayer::NetworkVar_m_szLastPlaceName> >
//   CSchemaTypeOf<CNetworkStringBase<129, CTeam::NetworkVar_m_szTeamname> >
//   CSchemaTypeOf<CNetworkStringBase<260, CColorCorrectionVolume::NetworkVar_m_lookupFilename> >
//   CSchemaTypeOf<CNetworkStringBase<255, CMaterialModifyControl::NetworkVar_m_szMaterialName> >
//   CSchemaTypeOf<CNetworkStringBase<255, CMaterialModifyControl::NetworkVar_m_szMaterialVar> >
//   CSchemaTypeOf<CNetworkStringBase<255, CMaterialModifyControl::NetworkVar_m_szMaterialVarValue> >
//   CSchemaTypeOf<CNetworkStringBase<512, CPointWorldText::NetworkVar_m_messageText> >
//   CSchemaTypeOf<CNetworkStringBase<64, CPointWorldText::NetworkVar_m_FontName> >
//   CSchemaTypeOf<CNetworkStringBase<256, CDOTAGamerules::NetworkVar_m_CustomVictoryMessage> >
//   CSchemaTypeOf<CNetworkStringBase<256, CDOTAGamerules::NetworkVar_m_lobbyGameName> >
//   CSchemaTypeOf<CNetworkStringBase<260, CDOTA_CombatLogQueryProgress::NetworkVar_m_szRankIdentifier> >
//   CSchemaTypeOf<CNetworkStringBase<64, CDOTAPlayer::NetworkVar_m_szShopString> >
//   CSchemaTypeOf<CNetworkStringBase<256, CDotaSubquestBase::NetworkVar_m_pszSubquestText> >
//   CSchemaTypeOf<CNetworkStringBase<64, CDotaSubquestBase::NetworkVar_m_pszTextReplaceString> >
//   CSchemaTypeOf<CNetworkStringBase<256, CDotaQuest::NetworkVar_m_pszQuestTitle> >
//   CSchemaTypeOf<CNetworkStringBase<256, CDotaQuest::NetworkVar_m_pszQuestText> >
//   CSchemaTypeOf<CNetworkStringBase<256, CDotaQuest::NetworkVar_m_pszGameEndText> >
//   CSchemaTypeOf<CNetworkStringBase<64, CDotaQuest::NetworkVar_m_pszTextReplaceString> >
//   CSchemaTypeOf<CNetworkStringBase<256, CSpeechBubbleInfo::NetworkVar_m_LocalizationStr> >
//   CSchemaTypeOf<CNetworkStringBase<33, CDOTATeam::NetworkVar_m_szTag> >
//   CSchemaTypeOf<CNetworkStringBase<256, CDotaTutorialNetworker::NetworkVar_m_GuideStr> >
//   CSchemaTypeOf<CNetworkStringBase<256, CDotaTutorialNetworker::NetworkVar_m_QuickBuyStr> >
//   CSchemaTypeOf<CNetworkStringBase<260, CEnvDeferredLight::NetworkVar_m_ProjectedTextureName> >
//   CSchemaTypeOf<CNetworkStringBase<256, CDOTA_BaseNPC::NetworkVar_m_CustomHealthLabel> >
//   CSchemaTypeOf<CNetworkStringBase<32, CDOTA_BaseNPC_Building::NetworkVar_m_HeroStatueInscription> >
//   CSchemaTypeOf<CNetworkStringBase<256, CDOTA_Unit_LoopingSound::NetworkVar_m_pszNetworkedSoundLoop> >
//   CSchemaTypeOf<CNetworkStringBase<256, CDOTA_Ability_Rubick_SpellSteal::NetworkVar_m_ActivityModifier> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CBaseEntity>, 10, CBeam::NetworkVar_m_hAttachEntity> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned char, 10, CBeam::NetworkVar_m_nAttachIndex> >
//   CSchemaTypeOf<CNetworkArrayBase<Vector, 8, audioparams_t::NetworkVar_localSound> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CBaseEntity>, 4, CPoseController::NetworkVar_m_hProps> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned char, 4, CPoseController::NetworkVar_m_chPoseIndex> >
//   CSchemaTypeOf<CNetworkArrayBase<float, 24, CBaseAnimatingController::NetworkVar_m_flPoseParameter> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned int, 32, CBaseCombatCharacter::NetworkVar_m_iAmmo> >
//   CSchemaTypeOf<CNetworkArrayBase<Vector, 4, CParticleSystem::NetworkVar_m_vServerControlPoints> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned char, 4, CParticleSystem::NetworkVar_m_iServerControlPointAssignments> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CBaseEntity>, 64, CParticleSystem::NetworkVar_m_hControlPointEnts> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned char, 64, CParticleSystem::NetworkVar_m_iControlPointParents> >
//   CSchemaTypeOf<CNetworkArrayBase<Vector, 32, CRagdollProp::NetworkVar_m_ragPos> >
//   CSchemaTypeOf<CNetworkArrayBase<QAngle, 32, CRagdollProp::NetworkVar_m_ragAngles> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CBaseViewModel>, 2, CBasePlayer::NetworkVar_m_hViewModel> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned int, 66, CPlayerResource::NetworkVar_m_iPing> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 66, CPlayerResource::NetworkVar_m_iScore> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 66, CPlayerResource::NetworkVar_m_iDeaths> >
//   CSchemaTypeOf<CNetworkArrayBase<bool, 66, CPlayerResource::NetworkVar_m_bConnected> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 66, CPlayerResource::NetworkVar_m_iTeam> >
//   CSchemaTypeOf<CNetworkArrayBase<bool, 66, CPlayerResource::NetworkVar_m_bAlive> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned int, 66, CPlayerResource::NetworkVar_m_iHealth> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned char, 32, CPlayerLocalData::NetworkVar_m_chAreaBits> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned char, 24, CPlayerLocalData::NetworkVar_m_chAreaPortalBits> >
//   CSchemaTypeOf<CNetworkArrayBase<CUtlSymbolLarge, 10, CEnvScreenOverlay::NetworkVar_m_iszOverlayNames> >
//   CSchemaTypeOf<CNetworkArrayBase<float, 10, CEnvScreenOverlay::NetworkVar_m_flOverlayTimes> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 2, CPropHMDAvatar::NetworkVar_m_hLiteralControllerSlots> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 2, CPropHMDAvatar::NetworkVar_m_hLogicalControllerSlots> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CPropVRHand>, 4, CPropHMDAvatar::NetworkVar_m_hVRControllers> >
//   CSchemaTypeOf<CNetworkArrayBase<long long unsigned int, 256, CDOTA_DataNonSpectator::NetworkVar_m_bWorldTreeState> >
//   CSchemaTypeOf<CNetworkArrayBase<Vector2D, 2, CDOTA_DataNonSpectator::NetworkVar_m_vDesiredWardPlacement> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 5, CDOTA_DataNonSpectator::NetworkVar_m_nEnemyStartingPosition> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 24, CDOTA_DataSpectator::NetworkVar_m_iNetWorth> >
//   CSchemaTypeOf<CNetworkArrayBase<bool, 128, CDOTAGameManager::NetworkVar_m_StableHeroAvailable> >
//   CSchemaTypeOf<CNetworkArrayBase<bool, 128, CDOTAGameManager::NetworkVar_m_CurrentHeroAvailable> >
//   CSchemaTypeOf<CNetworkArrayBase<bool, 128, CDOTAGameManager::NetworkVar_m_CulledHeroes> >
//   CSchemaTypeOf<CNetworkArrayBase<long long unsigned int, 4, CDOTAGamerules::NetworkVar_m_bItemWhiteList> >
//   CSchemaTypeOf<CNetworkArrayBase<float, 2, CDOTAGamerules::NetworkVar_m_fExtraTimeRemaining> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 2, CDOTAGamerules::NetworkVar_m_iCaptainPlayerIDs> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 10, CDOTAGamerules::NetworkVar_m_BannedHeroes> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 10, CDOTAGamerules::NetworkVar_m_SelectedHeroes> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 2, CDOTAGamerules::NetworkVar_m_iCustomGameScore> >
//   CSchemaTypeOf<CNetworkArrayBase<float, 14, CDOTAGamerules::NetworkVar_m_flGlyphCooldowns> >
//   CSchemaTypeOf<CNetworkArrayBase<float, 14, CDOTAGamerules::NetworkVar_m_flRadarCooldowns> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CBaseEntity>, 14, CDOTAGamerules::NetworkVar_m_hTeamFountains> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CBaseEntity>, 14, CDOTAGamerules::NetworkVar_m_hTeamForts> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CBaseEntity>, 14, CDOTAGamerules::NetworkVar_m_hTeamShops> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned char, 18, CDOTAGamerules::NetworkVar_m_BotDebugPushLane> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned char, 18, CDOTAGamerules::NetworkVar_m_BotDebugDefendLane> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned char, 6, CDOTAGamerules::NetworkVar_m_BotDebugFarmLane> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned char, 8, CDOTAGamerules::NetworkVar_m_BotDebugRoam> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CBaseEntity>, 2, CDOTAGamerules::NetworkVar_m_hBotDebugRoamTarget> >
//   CSchemaTypeOf<CNetworkArrayBase<unsigned char, 2, CDOTAGamerules::NetworkVar_m_BotDebugRoshan> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 12, CDOTAGamerules::NetworkVar_m_nAbilityDraftHeroesChosen> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 2, CDOTAGamerules::NetworkVar_m_nARDMHeroesRemaining> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 14, CDOTAGamerules::NetworkVar_m_CustomGameTeamMaxPlayers> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 24, CIngameEvent_FM2015::NetworkVar_m_CompendiumCoinWager> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 24, CIngameEvent_FM2015::NetworkVar_m_CompendiumCoinWagerResults> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 10, CIngameEvent_WM2016::NetworkVar_m_CompendiumCoinWager> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 10, CIngameEvent_WM2016::NetworkVar_m_CompendiumCoinWagerResults> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 10, CIngameEvent_WM2016::NetworkVar_m_CompendiumTippedPlayers> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeEventID> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeSequenceID> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeCoinReward> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeCoinSplash> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengePointReward> >
//   CSchemaTypeOf<CNetworkArrayBase<bool, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeCompleted> >
//   CSchemaTypeOf<CNetworkArrayBase<bool, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeFailed> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeProgress> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_QueryIDForProgress> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 100, CIngameEvent_Base::NetworkVar_m_ProgressForQueryID> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 100, CIngameEvent_Base::NetworkVar_m_GoalForQueryID> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 10, CIngameEvent_Base::NetworkVar_m_PlayerQuestRankPreviouslyCompleted> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 10, CIngameEvent_Base::NetworkVar_m_PlayerQuestRankCompleted> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 2, CDOTAPlayer::NetworkVar_m_iCursor> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 9, CDOTAPlayer::NetworkVar_m_quickBuyItems> >
//   CSchemaTypeOf<CNetworkArrayBase<bool, 9, CDOTAPlayer::NetworkVar_m_quickBuyIsPurchasable> >
//   CSchemaTypeOf<CNetworkArrayBase<float, 3, CDOTAPlayer::NetworkVar_m_flMusicOperatorVals> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 4, CDOTAPlayer::NetworkVar_m_iMusicOperatorVals> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 4, PlayerResourcePlayerTeamData_t::NetworkVar_m_nSuggestedHeroes> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 2, CDotaSubquestBase::NetworkVar_m_pnTextReplaceValuesCDotaSubquestBase> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CDotaSubquestBase>, 8, CDotaQuest::NetworkVar_m_hSubquests> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 4, CDotaQuest::NetworkVar_m_pnTextReplaceValuesCDotaQuest> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 64, CDOTASpecGraphPlayerData::NetworkVar_m_rgGoldPerMinute> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 64, CDOTASpecGraphPlayerData::NetworkVar_m_rgXPPerMinute> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CDOTASpecGraphPlayerData>, 24, CDOTASpectatorGraphManager::NetworkVar_m_rgPlayer
//   CSchemaTypeOf<CNetworkArrayBase<int, 64, CDOTASpectatorGraphManager::NetworkVar_m_rgRadiantTotalEarnedGold> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 64, CDOTASpectatorGraphManager::NetworkVar_m_rgDireTotalEarnedGold> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 64, CDOTASpectatorGraphManager::NetworkVar_m_rgRadiantTotalEarnedXP> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 64, CDOTASpectatorGraphManager::NetworkVar_m_rgDireTotalEarnedXP> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 64, CDOTASpectatorGraphManager::NetworkVar_m_rgRadiantNetWorth> >
//   CSchemaTypeOf<CNetworkArrayBase<int, 64, CDOTASpectatorGraphManager::NetworkVar_m_rgDireNetWorth> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CBaseEntity>, 17, CDOTA_UnitInventory::NetworkVar_m_hItems> >
//   CSchemaTypeOf<CNetworkArrayBase<CHandle<CBaseEntity>, 24, CDOTA_BaseNPC::NetworkVar_m_hAbilities> >
//   CSchemaTypeOf<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1> >
//   CSchemaTypeOf<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>, CBaseCombatCharacter::NetworkVar_m_hMyWeapons, -1> >
//   CSchemaTypeOf<CNetworkUtlVectorBase<CHandle<CEconWearable>, CBaseCombatCharacter::NetworkVar_m_hMyWearables, -1> >
//   CSchemaTypeOf<CNetworkUtlVectorBase<float, CBaseFlex::NetworkVar_m_flexWeight, -1> >
//   CSchemaTypeOf<CNetworkUtlVectorBase<CHandle<CBasePlayer>, CTeam::NetworkVar_m_aPlayers, -1> >
//   CSchemaTypeOf<CNetworkUtlVectorBase<CHandle<CBaseEntity>, CPointValueRemapper::NetworkVar_m_hOutputEntities, -1> >
//   CSchemaTypeOf<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1> >
//   CSchemaTypeOf<CNetworkUtlVectorBase<CHandle<CBaseFlex>, CSceneEntity::NetworkVar_m_hActorList, -1> >
//   CSchemaTypeOf<CNetworkUtlVectorBase<int, CDOTABaseGameMode::NetworkVar_m_nCustomXPRequiredToReachNextLevel, -1> >
//   CSchemaTypeOf<CNetworkUtlVectorBase<int, CHeroesPerPlayer::NetworkVar_m_vecHeroIDs, -1> >
//   CSchemaTypeOf<CNetworkUtlVectorBase<CHandle<CIngameEvent_Base>, CDOTAGamerules::NetworkVar_m_vecIngameEvents, -1> >
//   CSchemaTypeOf<CNetworkUtlVectorBase<AABB_t, CDOTAGamerules::NetworkVar_m_NeutralSpawnBoxes, -1> >
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<CAnimationLayer, CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay, -
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<DataTeamPlayer_t, CDOTA_DataNonSpectator::NetworkVar_m_vecDataTeam, -1> >
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t, CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo, -1> 
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID, 
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID, -1> 
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1> >
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState, CDOTAGamerules::NetworkVar_m_AbilityDraftAbil
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked, CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked, -1> >
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<InGamePredictionData_t, CDOTAInGamePredictionState::NetworkVar_m_vecPredictio
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo, CIngameEvent_WM2016::NetworkVar_m_SubChallenges, -1> >
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChalleng
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress, CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs,
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerTeamData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerT
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<PlayerResourcePlayerData_t, CDOTA_PlayerResource::NetworkVar_m_vecPlayerData,
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t, CDOTA_PlayerResource::NetworkVar_m_vecBrodca
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo, CSpeechBubbleManager::NetworkVar_m_SpeechBubbles, 4> >
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo, CDotaTutorialNetworker::NetworkVar_m_SpeechBubbles, 4> >
//   CSchemaTypeOf<CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1> >

// CNetworkColorBase: 13 more instantiations (full list in INDEX.tsv)
//   CNetworkColorBase<Color, fogparams_t::NetworkVar_colorPrimaryLerpTo>
//   CNetworkColorBase<Color, fogparams_t::NetworkVar_colorSecondaryLerpTo>
//   CNetworkColorBase<Color, CEnvSky::NetworkVar_m_vTintColor>
//   CNetworkColorBase<Color, CPointCamera::NetworkVar_m_FogColor>
//   CNetworkColorBase<Color, CGlowProperty::NetworkVar_m_glowColorOverride>
//   CNetworkColorBase<Color, CBaseModelEntity::NetworkVar_m_clrRender>
//   CNetworkColorBase<Color, CEnvProjectedTexture::NetworkVar_m_LightColor>
//   CNetworkColorBase<Color, CEnvFade::NetworkVar_m_fadeColor>
//   CNetworkColorBase<Color, CFunc_Dust::NetworkVar_m_Color>
//   CNetworkColorBase<Color, CShadowControl::NetworkVar_m_shadowColor>
//   CNetworkColorBase<Color, CSun::NetworkVar_m_clrOverlay>
//   CNetworkColorBase<Color, CDOTATeam::NetworkVar_m_CustomHealthbarColor>
//   CNetworkColorBase<Color, CDOTA_BaseNPC::NetworkVar_m_CustomHealthLabelColor>

// CNetworkVectorBase: 32 more instantiations (full list in INDEX.tsv)
//   CNetworkVectorBase<Vector, CBaseEntity::NetworkVar_m_vecAbsVelocity>
//   CNetworkVectorBase<Vector, CBaseFlex::NetworkVar_m_viewtarget>
//   CNetworkVectorBase<Vector, fogparams_t::NetworkVar_dirPrimary>
//   CNetworkVectorBase<Vector, CEffectData::NetworkVar_m_vOrigin>
//   CNetworkVectorBase<Vector, CEffectData::NetworkVar_m_vStart>
//   CNetworkVectorBase<Vector, CEffectData::NetworkVar_m_vNormal>
//   CNetworkVectorBase<QAngle, CEffectData::NetworkVar_m_vAngles>
//   CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vecMaxs>
//   CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vecSpecifiedSurroundingMins>
//   CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vecSpecifiedSurroundingMaxs>
//   CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vCapsuleCenter1>
//   CNetworkVectorBase<Vector, CCollisionProperty::NetworkVar_m_vCapsuleCenter2>
//   CNetworkVectorBase<Vector, sky3dparams_t::NetworkVar_origin>
//   CNetworkVectorBase<Vector, CBeam::NetworkVar_m_vecEndPos>
//   CNetworkVectorBase<Vector, CEnvWindShared::NetworkVar_m_location>
//   CNetworkVectorBase<Vector, CFuncLadder::NetworkVar_m_vecLadderDir>
//   CNetworkVectorBase<Vector, CFuncLadder::NetworkVar_m_vecPlayerMountPositionTop>
//   CNetworkVectorBase<Vector, CFuncLadder::NetworkVar_m_vecPlayerMountPositionBottom>
//   CNetworkVectorBase<Vector, CBaseEntity::NetworkVar_m_vecBaseVelocity>
//   CNetworkVectorBase<Vector, CBaseAnimating::NetworkVar_m_vecForce>
//   CNetworkVectorBase<Vector, CEntityDissolve::NetworkVar_m_vDissolverOrigin>
//   CNetworkVectorBase<Vector, CFish::NetworkVar_m_poolOrigin>
//   CNetworkVectorBase<QAngle, CGameSceneNode::NetworkVar_m_angRotation>
//   CNetworkVectorBase<Vector, CBasePlayer::NetworkVar_m_vecLadderNormal>
//   CNetworkVectorBase<Vector, CBasePlayer::NetworkVar_m_vecConstraintCenter>
//   CNetworkVectorBase<Vector, CPropVehicleDriveable::NetworkVar_m_vecEyeExitEndpoint>
//   CNetworkVectorBase<Vector, CPropVehicleDriveable::NetworkVar_m_vecGunCrosshair>
//   CNetworkVectorBase<Vector, CRagdollPropAttached::NetworkVar_m_attachmentPointBoneSpace>
//   CNetworkVectorBase<Vector, CRagdollPropAttached::NetworkVar_m_attachmentPointRagdollSpace>
//   CNetworkVectorBase<Vector, CShadowControl::NetworkVar_m_shadowDirection>
//   CNetworkVectorBase<Vector, CSun::NetworkVar_m_vDirection>
//   CNetworkVectorBase<QAngle, CEnvDeferredLight::NetworkVar_m_vLightDirection>

// CNetworkHandleBase: 70 more instantiations (full list in INDEX.tsv)
//   CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hObserverTarget>
//   CNetworkHandleBase<CBaseEntity, CDOTA_DataSpectator::NetworkVar_m_hPowerupRune>
//   CNetworkHandleBase<CBaseEntity, CDOTA_DataSpectator::NetworkVar_m_hBountyRune_1>
//   CNetworkHandleBase<CBaseEntity, CDOTA_DataSpectator::NetworkVar_m_hBountyRune_2>
//   CNetworkHandleBase<CBaseEntity, CDOTA_DataSpectator::NetworkVar_m_hBountyRune_3>
//   CNetworkHandleBase<CBaseEntity, CDOTA_DataSpectator::NetworkVar_m_hBountyRune_4>
//   CNetworkHandleBase<CBaseVRHandAttachment, CPropVRHand::NetworkVar_m_hActiveHandAttachment>
//   CNetworkHandleBase<CBaseEntity, CBaseEntity::NetworkVar_m_hEffectEntity>
//   CNetworkHandleBase<CBaseEntity, CEnvClock::NetworkVar_m_hHourHand>
//   CNetworkHandleBase<CBaseEntity, CEnvClock::NetworkVar_m_hMinuteHand>
//   CNetworkHandleBase<CBaseEntity, CEnvClock::NetworkVar_m_hSecondHand>
//   CNetworkHandleBase<CFogController, fogplayerparams_t::NetworkVar_m_hCtrl>
//   CNetworkHandleBase<CBaseCombatWeapon, CBaseViewModel::NetworkVar_m_hWeapon>
//   CNetworkHandleBase<CBaseCombatCharacter, CBaseCombatWeapon::NetworkVar_m_hOwner>
//   CNetworkHandleBase<CBaseEntity, CSprite::NetworkVar_m_hAttachedToEntity>
//   CNetworkHandleBase<CBaseEntity, CBaseEntity::NetworkVar_m_hGroundEntity>
//   CNetworkHandleBase<CBaseCombatWeapon, CBaseCombatCharacter::NetworkVar_m_hActiveWeapon>
//   CNetworkHandleBase<CBasePropDoor, CBasePropDoor::NetworkVar_m_hMaster>
//   CNetworkHandleBase<CBaseModelEntity, CBaseButton::NetworkVar_m_glowEntity>
//   CNetworkHandleBase<CBaseEntity, CEntityFlame::NetworkVar_m_hEntAttached>
//   CNetworkHandleBase<CBaseEntity, CEnvProjectedTexture::NetworkVar_m_hTargetEntity>
//   CNetworkHandleBase<CPostProcessController, CBasePlayer::NetworkVar_m_hPostProcessCtrl>
//   CNetworkHandleBase<CColorCorrection, CBasePlayer::NetworkVar_m_hColorCorrectionCtrl>
//   CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hHeldEntity>
//   CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hZoomOwner>
//   CNetworkHandleBase<CPropHMDAvatar, CBasePlayer::NetworkVar_m_hPropHMDAvatar>
//   CNetworkHandleBase<CPointHMDAnchor, CBasePlayer::NetworkVar_m_hPointHMDAnchor>
//   CNetworkHandleBase<CBaseCombatWeapon, CBasePlayer::NetworkVar_m_hLastWeapon>
//   CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hViewEntity>
//   CNetworkHandleBase<CBaseEntity, CBasePlayer::NetworkVar_m_hConstraintEntity>
//   CNetworkHandleBase<CBaseEntity, CRopeKeyframe::NetworkVar_m_hStartPoint>
//   CNetworkHandleBase<CBaseEntity, CRopeKeyframe::NetworkVar_m_hEndPoint>
//   CNetworkHandleBase<CBasePlayer, CPropVehicleDriveable::NetworkVar_m_hPlayer>
//   CNetworkHandleBase<CBasePlayer, CVGuiScreen::NetworkVar_m_hPlayerOwner>
//   CNetworkHandleBase<CBaseEntity, CDOTAPlayer::NetworkVar_m_hAssignedHero>
//   CNetworkHandleBase<CPropVRHand, CBaseVRHandAttachment::NetworkVar_m_hAttachedHand>
//   CNetworkHandleBase<CBaseEntity, CPointCommentaryNode::NetworkVar_m_hViewPosition>
//   CNetworkHandleBase<CBaseEntity, CSpeechBubbleInfo::NetworkVar_m_hNPC>
//   CNetworkHandleBase<CBaseEntity, CPointValueRemapper::NetworkVar_m_hRemapLineStart>
//   CNetworkHandleBase<CBaseEntity, CPointValueRemapper::NetworkVar_m_hRemapLineEnd>
//   CNetworkHandleBase<CPointWorldText, CPropHMDAvatar::NetworkVar_m_hCloseCaption>
//   CNetworkHandleBase<CPropHMDAvatar, CPropVRHand::NetworkVar_m_hHMDAvatar>
//   CNetworkHandleBase<CBaseEntity, CHandUseControllerShared::NetworkVar_m_hHeldObject>
//   CNetworkHandleBase<CBaseEntity, CHandleTest::NetworkVar_m_Handle>
//   CNetworkHandleBase<CBaseEntity, CDOTA_Ability_Brewmaster_PrimalSplit::NetworkVar_m_hPrimary>
//   CNetworkHandleBase<CBaseEntity, CDOTA_Ability_Brewmaster_PrimalSplit::NetworkVar_m_hSecondary>
//   CNetworkHandleBase<CBaseEntity, CDOTA_Ability_Brewmaster_PrimalSplit::NetworkVar_m_hTertiary>
//   CNetworkHandleBase<CBaseEntity, CDOTAPlayer::NetworkVar_m_hKillCamUnit>
//   CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hEndGameCinematicEntity>
//   CNetworkHandleBase<CDOTA_BaseNPC, CDOTAGamerules::NetworkVar_m_hOverlayHealthBarUnit>
//   CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hGameModeEntity>
//   CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hSideShop1>
//   CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hSideShop2>
//   CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hSecretShop1>
//   CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hSecretShop2>
//   CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hAnnouncerGood>
//   CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hAnnouncerBad>
//   CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hAnnouncerSpectator>
//   CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hAnnouncerGood_KillingSpree>
//   CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hAnnouncerBad_KillingSpree>
//   CNetworkHandleBase<CBaseEntity, CDOTAGamerules::NetworkVar_m_hAnnouncerSpectator_KillingSpree>
//   CNetworkHandleBase<CDOTA_BaseNPC, CDOTA_Hero_Recorder::NetworkVar_m_hHero>
//   CNetworkHandleBase<CDOTAPlayer, CDOTA_Hero_Recorder::NetworkVar_m_hPlayer>
//   CNetworkHandleBase<CBaseEntity, CDOTA_ModifierManager::NetworkVar_m_hModifierParent>
//   CNetworkHandleBase<CBaseEntity, CDOTAPlayer::NetworkVar_m_hSpectatorQueryUnit>
//   CNetworkHandleBase<CBaseEntity, CDOTA_Ability_Pudge_Dismember::NetworkVar_m_hVictim>
//   CNetworkHandleBase<CDOTA_BaseNPC, CDOTA_Unit_Hero_Tiny::NetworkVar_m_hIllusionOwner>
//   CNetworkHandleBase<CBaseEntity, CDOTA_Ability_VengefulSpirit_Nether_Swap::NetworkVar_m_hScepterIllusion>
//   CNetworkHandleBase<CDOTA_Ability_Meepo_DividedWeStand, CDOTA_Ability_Meepo_DividedWeStand::NetworkVar_m_entPrimeDividedW
//   CNetworkHandleBase<CDOTA_Ability_Meepo_DividedWeStand, CDOTA_Ability_Meepo_DividedWeStand::NetworkVar_m_entNextDividedWe

// CNetworkUtlVector_MemoryType: 24 more instantiations (full list in INDEX.tsv)
//   CNetworkUtlVector_MemoryType<PlayerResourcePlayerTeamData_t, -1>
//   CNetworkUtlVector_MemoryType<PlayerResourcePlayerData_t, -1>
//   CNetworkUtlVector_MemoryType<PlayerResourceBroadcasterData_t, -1>
//   CNetworkUtlVector_MemoryType<CDOTA_CombatLogQueryProgress, -1>
//   CNetworkUtlVector_MemoryType<CDOTASubChallengeInfo, -1>
//   CNetworkUtlVector_MemoryType<int, -1>
//   CNetworkUtlVector_MemoryType<CUtlSymbolLarge, -1>
//   CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1>
//   CNetworkUtlVector_MemoryType<float, -1>
//   CNetworkUtlVector_MemoryType<CAnimationLayer, -1>
//   CNetworkUtlVector_MemoryType<CHandle<CBaseCombatWeapon>, -1>
//   CNetworkUtlVector_MemoryType<CHandle<CEconWearable>, -1>
//   CNetworkUtlVector_MemoryType<CHandle<CBasePlayer>, -1>
//   CNetworkUtlVector_MemoryType<CHandle<CBaseEntity>, -1>
//   CNetworkUtlVector_MemoryType<CHandle<CBaseFlex>, -1>
//   CNetworkUtlVector_MemoryType<CHeroesPerPlayer, -1>
//   CNetworkUtlVector_MemoryType<CDOTA_ItemStockInfo, -1>
//   CNetworkUtlVector_MemoryType<CDOTA_AbilityDraftAbilityState, -1>
//   CNetworkUtlVector_MemoryType<CHeroStatueLiked, -1>
//   CNetworkUtlVector_MemoryType<CHandle<CIngameEvent_Base>, -1>
//   CNetworkUtlVector_MemoryType<AABB_t, -1>
//   CNetworkUtlVector_MemoryType<TempViewerInfo_t, -1>
//   CNetworkUtlVector_MemoryType<InGamePredictionData_t, -1>
//   CNetworkUtlVector_MemoryType<CEconItemAttribute, -1>

// CNetworkStringBase: 28 more instantiations (full list in INDEX.tsv)
//   CNetworkStringBase<260, CEnvProjectedTexture::NetworkVar_m_SpotlightTextureName>
//   CNetworkStringBase<260, CParticleSystem::NetworkVar_m_szSnapshotFileName>
//   CNetworkStringBase<18, CBasePlayer::NetworkVar_m_szLastPlaceName>
//   CNetworkStringBase<129, CTeam::NetworkVar_m_szTeamname>
//   CNetworkStringBase<260, CColorCorrectionVolume::NetworkVar_m_lookupFilename>
//   CNetworkStringBase<256, CSpeechBubbleInfo::NetworkVar_m_LocalizationStr>
//   CNetworkStringBase<255, CMaterialModifyControl::NetworkVar_m_szMaterialName>
//   CNetworkStringBase<255, CMaterialModifyControl::NetworkVar_m_szMaterialVar>
//   CNetworkStringBase<255, CMaterialModifyControl::NetworkVar_m_szMaterialVarValue>
//   CNetworkStringBase<512, CPointWorldText::NetworkVar_m_messageText>
//   CNetworkStringBase<64, CPointWorldText::NetworkVar_m_FontName>
//   CNetworkStringBase<64, CDOTAPlayer::NetworkVar_m_szShopString>
//   CNetworkStringBase<256, CDOTAGamerules::NetworkVar_m_CustomVictoryMessage>
//   CNetworkStringBase<256, CDOTAGamerules::NetworkVar_m_lobbyGameName>
//   CNetworkStringBase<33, CDOTATeam::NetworkVar_m_szTag>
//   CNetworkStringBase<256, CDotaSubquestBase::NetworkVar_m_pszSubquestText>
//   CNetworkStringBase<64, CDotaSubquestBase::NetworkVar_m_pszTextReplaceString>
//   CNetworkStringBase<256, CDotaQuest::NetworkVar_m_pszQuestTitle>
//   CNetworkStringBase<256, CDotaQuest::NetworkVar_m_pszQuestText>
//   CNetworkStringBase<256, CDotaQuest::NetworkVar_m_pszGameEndText>
//   CNetworkStringBase<64, CDotaQuest::NetworkVar_m_pszTextReplaceString>
//   CNetworkStringBase<256, CDotaTutorialNetworker::NetworkVar_m_GuideStr>
//   CNetworkStringBase<256, CDotaTutorialNetworker::NetworkVar_m_QuickBuyStr>
//   CNetworkStringBase<260, CEnvDeferredLight::NetworkVar_m_ProjectedTextureName>
//   CNetworkStringBase<256, CDOTA_BaseNPC::NetworkVar_m_CustomHealthLabel>
//   CNetworkStringBase<32, CDOTA_BaseNPC_Building::NetworkVar_m_HeroStatueInscription>
//   CNetworkStringBase<256, CDOTA_Unit_LoopingSound::NetworkVar_m_pszNetworkedSoundLoop>
//   CNetworkStringBase<256, CDOTA_Ability_Rubick_SpellSteal::NetworkVar_m_ActivityModifier>

// CNetworkArrayBase: 92 more instantiations (full list in INDEX.tsv)
//   CNetworkArrayBase<Vector2D, 2, CDOTA_DataNonSpectator::NetworkVar_m_vDesiredWardPlacement>
//   CNetworkArrayBase<int, 5, CDOTA_DataNonSpectator::NetworkVar_m_nEnemyStartingPosition>
//   CNetworkArrayBase<int, 24, CDOTA_DataSpectator::NetworkVar_m_iNetWorth>
//   CNetworkArrayBase<unsigned int, 66, CPlayerResource::NetworkVar_m_iPing>
//   CNetworkArrayBase<int, 66, CPlayerResource::NetworkVar_m_iScore>
//   CNetworkArrayBase<int, 66, CPlayerResource::NetworkVar_m_iDeaths>
//   CNetworkArrayBase<bool, 66, CPlayerResource::NetworkVar_m_bConnected>
//   CNetworkArrayBase<int, 66, CPlayerResource::NetworkVar_m_iTeam>
//   CNetworkArrayBase<bool, 66, CPlayerResource::NetworkVar_m_bAlive>
//   CNetworkArrayBase<unsigned int, 66, CPlayerResource::NetworkVar_m_iHealth>
//   CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeEventID>
//   CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeSequenceID>
//   CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeCoinReward>
//   CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeCoinSplash>
//   CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengePointReward>
//   CNetworkArrayBase<bool, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeCompleted>
//   CNetworkArrayBase<bool, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeFailed>
//   CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeProgress>
//   CNetworkArrayBase<int, 24, CIngameEvent_Base::NetworkVar_m_QueryIDForProgress>
//   CNetworkArrayBase<int, 100, CIngameEvent_Base::NetworkVar_m_ProgressForQueryID>
//   CNetworkArrayBase<int, 100, CIngameEvent_Base::NetworkVar_m_GoalForQueryID>
//   CNetworkArrayBase<int, 10, CIngameEvent_Base::NetworkVar_m_PlayerQuestRankPreviouslyCompleted>
//   CNetworkArrayBase<int, 10, CIngameEvent_Base::NetworkVar_m_PlayerQuestRankCompleted>
//   CNetworkArrayBase<int, 24, CIngameEvent_FM2015::NetworkVar_m_CompendiumCoinWager>
//   CNetworkArrayBase<int, 24, CIngameEvent_FM2015::NetworkVar_m_CompendiumCoinWagerResults>
//   CNetworkArrayBase<int, 10, CIngameEvent_WM2016::NetworkVar_m_CompendiumCoinWager>
//   CNetworkArrayBase<int, 10, CIngameEvent_WM2016::NetworkVar_m_CompendiumCoinWagerResults>
//   CNetworkArrayBase<int, 10, CIngameEvent_WM2016::NetworkVar_m_CompendiumTippedPlayers>
//   CNetworkArrayBase<Vector, 8, audioparams_t::NetworkVar_localSound>
//   CNetworkArrayBase<CHandle<CBaseEntity>, 10, CBeam::NetworkVar_m_hAttachEntity>
//   CNetworkArrayBase<unsigned char, 10, CBeam::NetworkVar_m_nAttachIndex>
//   CNetworkArrayBase<CHandle<CBaseEntity>, 4, CPoseController::NetworkVar_m_hProps>
//   CNetworkArrayBase<unsigned char, 4, CPoseController::NetworkVar_m_chPoseIndex>
//   CNetworkArrayBase<float, 24, CBaseAnimatingController::NetworkVar_m_flPoseParameter>
//   CNetworkArrayBase<unsigned int, 32, CBaseCombatCharacter::NetworkVar_m_iAmmo>
//   CNetworkArrayBase<Vector, 4, CParticleSystem::NetworkVar_m_vServerControlPoints>
//   CNetworkArrayBase<unsigned char, 4, CParticleSystem::NetworkVar_m_iServerControlPointAssignments>
//   CNetworkArrayBase<CHandle<CBaseEntity>, 64, CParticleSystem::NetworkVar_m_hControlPointEnts>
//   CNetworkArrayBase<unsigned char, 64, CParticleSystem::NetworkVar_m_iControlPointParents>
//   CNetworkArrayBase<unsigned char, 32, CPlayerLocalData::NetworkVar_m_chAreaBits>
//   CNetworkArrayBase<unsigned char, 24, CPlayerLocalData::NetworkVar_m_chAreaPortalBits>
//   CNetworkArrayBase<CHandle<CBaseViewModel>, 2, CBasePlayer::NetworkVar_m_hViewModel>
//   CNetworkArrayBase<Vector, 32, CRagdollProp::NetworkVar_m_ragPos>
//   CNetworkArrayBase<QAngle, 32, CRagdollProp::NetworkVar_m_ragAngles>
//   CNetworkArrayBase<float, 64, CTimeline::NetworkVar_m_flValues>
//   CNetworkArrayBase<int, 64, CTimeline::NetworkVar_m_nValueCounts>
//   CNetworkArrayBase<CUtlSymbolLarge, 10, CEnvScreenOverlay::NetworkVar_m_iszOverlayNames>
//   CNetworkArrayBase<float, 10, CEnvScreenOverlay::NetworkVar_m_flOverlayTimes>
//   CNetworkArrayBase<int, 2, CDotaSubquestBase::NetworkVar_m_pnTextReplaceValuesCDotaSubquestBase>
//   CNetworkArrayBase<CHandle<CDotaSubquestBase>, 8, CDotaQuest::NetworkVar_m_hSubquests>
//   CNetworkArrayBase<int, 4, CDotaQuest::NetworkVar_m_pnTextReplaceValuesCDotaQuest>
//   CNetworkArrayBase<int, 2, CPropHMDAvatar::NetworkVar_m_hLiteralControllerSlots>
//   CNetworkArrayBase<int, 2, CPropHMDAvatar::NetworkVar_m_hLogicalControllerSlots>
//   CNetworkArrayBase<CHandle<CPropVRHand>, 4, CPropHMDAvatar::NetworkVar_m_hVRControllers>
//   CNetworkArrayBase<CHandle<CBaseEntity>, 24, CDOTA_BaseNPC::NetworkVar_m_hAbilities>
//   CNetworkArrayBase<bool, 128, CDOTAGameManager::NetworkVar_m_StableHeroAvailable>
//   CNetworkArrayBase<bool, 128, CDOTAGameManager::NetworkVar_m_CurrentHeroAvailable>
//   CNetworkArrayBase<bool, 128, CDOTAGameManager::NetworkVar_m_CulledHeroes>
//   CNetworkArrayBase<long long unsigned int, 4, CDOTAGamerules::NetworkVar_m_bItemWhiteList>
//   CNetworkArrayBase<float, 2, CDOTAGamerules::NetworkVar_m_fExtraTimeRemaining>
//   CNetworkArrayBase<int, 2, CDOTAGamerules::NetworkVar_m_iCaptainPlayerIDs>
//   CNetworkArrayBase<int, 10, CDOTAGamerules::NetworkVar_m_BannedHeroes>
//   CNetworkArrayBase<int, 10, CDOTAGamerules::NetworkVar_m_SelectedHeroes>
//   CNetworkArrayBase<int, 2, CDOTAGamerules::NetworkVar_m_iCustomGameScore>
//   CNetworkArrayBase<float, 14, CDOTAGamerules::NetworkVar_m_flGlyphCooldowns>
//   CNetworkArrayBase<float, 14, CDOTAGamerules::NetworkVar_m_flRadarCooldowns>
//   CNetworkArrayBase<CHandle<CBaseEntity>, 14, CDOTAGamerules::NetworkVar_m_hTeamFountains>
//   CNetworkArrayBase<CHandle<CBaseEntity>, 14, CDOTAGamerules::NetworkVar_m_hTeamForts>
//   CNetworkArrayBase<CHandle<CBaseEntity>, 14, CDOTAGamerules::NetworkVar_m_hTeamShops>
//   CNetworkArrayBase<unsigned char, 18, CDOTAGamerules::NetworkVar_m_BotDebugPushLane>
//   CNetworkArrayBase<unsigned char, 18, CDOTAGamerules::NetworkVar_m_BotDebugDefendLane>
//   CNetworkArrayBase<unsigned char, 6, CDOTAGamerules::NetworkVar_m_BotDebugFarmLane>
//   CNetworkArrayBase<unsigned char, 8, CDOTAGamerules::NetworkVar_m_BotDebugRoam>
//   CNetworkArrayBase<CHandle<CBaseEntity>, 2, CDOTAGamerules::NetworkVar_m_hBotDebugRoamTarget>
//   CNetworkArrayBase<unsigned char, 2, CDOTAGamerules::NetworkVar_m_BotDebugRoshan>
//   CNetworkArrayBase<int, 12, CDOTAGamerules::NetworkVar_m_nAbilityDraftHeroesChosen>
//   CNetworkArrayBase<int, 2, CDOTAGamerules::NetworkVar_m_nARDMHeroesRemaining>
//   CNetworkArrayBase<int, 14, CDOTAGamerules::NetworkVar_m_CustomGameTeamMaxPlayers>
//   CNetworkArrayBase<int, 64, CDOTASpecGraphPlayerData::NetworkVar_m_rgGoldPerMinute>
//   CNetworkArrayBase<int, 64, CDOTASpecGraphPlayerData::NetworkVar_m_rgXPPerMinute>
//   CNetworkArrayBase<int, 2, CDOTAPlayer::NetworkVar_m_iCursor>
//   CNetworkArrayBase<int, 9, CDOTAPlayer::NetworkVar_m_quickBuyItems>
//   CNetworkArrayBase<bool, 9, CDOTAPlayer::NetworkVar_m_quickBuyIsPurchasable>
//   CNetworkArrayBase<float, 3, CDOTAPlayer::NetworkVar_m_flMusicOperatorVals>
//   CNetworkArrayBase<int, 4, CDOTAPlayer::NetworkVar_m_iMusicOperatorVals>
//   CNetworkArrayBase<CHandle<CDOTASpecGraphPlayerData>, 24, CDOTASpectatorGraphManager::NetworkVar_m_rgPlayerGraphData>
//   CNetworkArrayBase<int, 64, CDOTASpectatorGraphManager::NetworkVar_m_rgRadiantTotalEarnedGold>
//   CNetworkArrayBase<int, 64, CDOTASpectatorGraphManager::NetworkVar_m_rgDireTotalEarnedGold>
//   CNetworkArrayBase<int, 64, CDOTASpectatorGraphManager::NetworkVar_m_rgRadiantTotalEarnedXP>
//   CNetworkArrayBase<int, 64, CDOTASpectatorGraphManager::NetworkVar_m_rgDireTotalEarnedXP>
//   CNetworkArrayBase<int, 64, CDOTASpectatorGraphManager::NetworkVar_m_rgRadiantNetWorth>
//   CNetworkArrayBase<int, 64, CDOTASpectatorGraphManager::NetworkVar_m_rgDireNetWorth>

// CNetworkUtlVectorBase: 13 more instantiations (full list in INDEX.tsv)
//   CNetworkUtlVectorBase<float, CBaseFlex::NetworkVar_m_flexWeight, -1>
//   CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>, CBaseCombatCharacter::NetworkVar_m_hMyWeapons, -1>
//   CNetworkUtlVectorBase<CHandle<CEconWearable>, CBaseCombatCharacter::NetworkVar_m_hMyWearables, -1>
//   CNetworkUtlVectorBase<CHandle<CBasePlayer>, CTeam::NetworkVar_m_aPlayers, -1>
//   CNetworkUtlVectorBase<float, CBaseFlex::NetworkVar_m_flexWeight, -1>
//   CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>, CBaseCombatCharacter::NetworkVar_m_hMyWeapons, -1>
//   CNetworkUtlVectorBase<CHandle<CEconWearable>, CBaseCombatCharacter::NetworkVar_m_hMyWearables, -1>
//   CNetworkUtlVectorBase<CHandle<CBaseEntity>, CPointValueRemapper::NetworkVar_m_hOutputEntities, -1>
//   CNetworkUtlVectorBase<CHandle<CBaseFlex>, CSceneEntity::NetworkVar_m_hActorList, -1>
//   CNetworkUtlVectorBase<int, CHeroesPerPlayer::NetworkVar_m_vecHeroIDs, -1>
//   CNetworkUtlVectorBase<CHandle<CIngameEvent_Base>, CDOTAGamerules::NetworkVar_m_vecIngameEvents, -1>
//   CNetworkUtlVectorBase<AABB_t, CDOTAGamerules::NetworkVar_m_NeutralSpawnBoxes, -1>
//   CNetworkUtlVectorBase<AABB_t, CDOTAGamerules::NetworkVar_m_NeutralSpawnBoxes, -1>

// CUtlVectorEmbeddedNetworkVar_Vector: 24 more instantiations (full list in INDEX.tsv)
//   CUtlVectorEmbeddedNetworkVar_Vector<PlayerResourceBroadcasterData_t, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CDOTA_PlayerChallengeInfo, 24>
//   CUtlVectorEmbeddedNetworkVar_Vector<CDOTA_CombatLogQueryProgress, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CDOTASubChallengeInfo, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CAnimationLayer, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CAnimationLayer, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CSpeechBubbleInfo, 4>
//   CUtlVectorEmbeddedNetworkVar_Vector<DataTeamPlayer_t, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CHeroesPerPlayer, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CDOTA_ItemStockInfo, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CDOTA_AbilityDraftAbilityState, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CHeroStatueLiked, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<TempViewerInfo_t, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CSpeechBubbleInfo, 4>
//   CUtlVectorEmbeddedNetworkVar_Vector<InGamePredictionData_t, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CDOTA_AbilityDraftAbilityState, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<DataTeamPlayer_t, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<PlayerResourcePlayerTeamData_t, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<PlayerResourcePlayerData_t, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<PlayerResourceBroadcasterData_t, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CDOTA_PlayerChallengeInfo, 24>
//   CUtlVectorEmbeddedNetworkVar_Vector<CDOTA_CombatLogQueryProgress, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CDOTASubChallengeInfo, -1>
//   CUtlVectorEmbeddedNetworkVar_Vector<CEconItemAttribute, -1>

// CUtlVectorEmbeddedNetworkVar_ChainingHelper: 15 more instantiations (full list in INDEX.tsv)
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<PlayerResourceBroadcasterData_t, CDOTA_PlayerResource::NetworkVar_m_vecBrodc
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChallen
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<CDOTA_CombatLogQueryProgress, CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<CDOTASubChallengeInfo, CIngameEvent_WM2016::NetworkVar_m_SubChallenges, -1, 
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<CAnimationLayer, CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay, 
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<CSpeechBubbleInfo, CDotaTutorialNetworker::NetworkVar_m_SpeechBubbles, 4, fa
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<TempViewerInfo_t, CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo, -1,
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<CSpeechBubbleInfo, CSpeechBubbleManager::NetworkVar_m_SpeechBubbles, 4, fals
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<InGamePredictionData_t, CDOTAInGamePredictionState::NetworkVar_m_vecPredicti
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1, false>
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID,
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID, -1,
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1, true
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<CDOTA_AbilityDraftAbilityState, CDOTAGamerules::NetworkVar_m_AbilityDraftAbi
//   CUtlVectorEmbeddedNetworkVar_ChainingHelper<CHeroStatueLiked, CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked, -1, true>

// CUtlVectorEmbeddedNetworkVar: 15 more instantiations (full list in INDEX.tsv)
//   CUtlVectorEmbeddedNetworkVar<PlayerResourceBroadcasterData_t, CDOTA_PlayerResource::NetworkVar_m_vecBrodcasterData, -1>
//   CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo, 24>
//   CUtlVectorEmbeddedNetworkVar<CDOTA_CombatLogQueryProgress, CIngameEvent_Base::NetworkVar_m_PlayerQueryIDs, -1>
//   CUtlVectorEmbeddedNetworkVar<CDOTASubChallengeInfo, CIngameEvent_WM2016::NetworkVar_m_SubChallenges, -1>
//   CUtlVectorEmbeddedNetworkVar<CAnimationLayer, CBaseAnimatingOverlayController::NetworkVar_m_AnimOverlay, -1>
//   CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo, CDotaTutorialNetworker::NetworkVar_m_SpeechBubbles, 4>
//   CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecAvailableHerosPerPlayerID, -1>
//   CUtlVectorEmbeddedNetworkVar<CHeroesPerPlayer, CDOTAGamerules::NetworkVar_m_vecLockedHerosByPlayerID, -1>
//   CUtlVectorEmbeddedNetworkVar<CDOTA_ItemStockInfo, CDOTAGamerules::NetworkVar_m_vecItemStockInfo, -1>
//   CUtlVectorEmbeddedNetworkVar<CDOTA_AbilityDraftAbilityState, CDOTAGamerules::NetworkVar_m_AbilityDraftAbilities, -1>
//   CUtlVectorEmbeddedNetworkVar<CHeroStatueLiked, CDOTAGamerules::NetworkVar_m_vecHeroStatueLiked, -1>
//   CUtlVectorEmbeddedNetworkVar<TempViewerInfo_t, CDOTAFogOfWarTempViewers::NetworkVar_m_TempViewerInfo, -1>
//   CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo, CSpeechBubbleManager::NetworkVar_m_SpeechBubbles, 4>
//   CUtlVectorEmbeddedNetworkVar<InGamePredictionData_t, CDOTAInGamePredictionState::NetworkVar_m_vecPredictions, -1>
//   CUtlVectorEmbeddedNetworkVar<CEconItemAttribute, CAttributeList::NetworkVar_m_Attributes, -1>
