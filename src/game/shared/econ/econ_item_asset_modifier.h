// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item_asset_modifier.h:29
class CAssetModifierCriteria {
	struct CriteriaVal_t {
		int m_nValue;  // +0x4
		CriteriaVal_t();
		CriteriaVal_t(CUtlStringToken, int);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	CAssetModifierCriteria();
	void AddCriteria(CUtlStringToken, int);
	bool GetCriteriaValue(CUtlStringToken, int *);

	// sizeof = 72
};

// src/game/shared/econ/econ_item_asset_modifier.h:29
class CAssetModifierCriteria {
	struct CriteriaVal_t {
		int m_nValue;  // +0x4
		CriteriaVal_t();
		CriteriaVal_t(CUtlStringToken, int);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	CAssetModifierCriteria();
	void AddCriteria(CUtlStringToken, int);
	bool GetCriteriaValue(CUtlStringToken, int *);
	~CAssetModifierCriteria();

	// sizeof = 72
};

// src/game/shared/econ/econ_item_asset_modifier.h:98
class CAssetModifier {
	struct CriteriaBetween_t {
		int m_nMinValue;  // +0x4
		int m_nMaxValue;  // +0x8
		uint32 m_nMask;  // +0xc
		uint32 m_nShift;  // +0x10
		CriteriaBetween_t();
		CriteriaBetween_t(CUtlStringToken, int, int, uint32, uint32);

		// sizeof = 20
	};

	struct CriteriaExpression_t {
		int m_nOpCount;  // +0x0
		const CriteriaBetween_t * GetOps();
		CriteriaBetween_t * GetOps();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CAssetModifier;  // +0x0
private:

	int8 m_nPriority;  // +0x28
	CAssetModifier * CreateInstance(KeyValues *, IEconItemSchema *, bool, int);
	CAssetModifier(KeyValues *, IEconItemSchema *, bool, int);
	virtual ~CAssetModifier();
	virtual void Init(IEconItemSchema *);
	virtual unsigned int GetType();
	virtual const char * GetTypeName();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool Compare(const char *);
	const char * GetAsset();
	const char * GetModifier();
	bool IsActiveForCriteria(const CAssetModifierCriteria *);
	int GetPriority();
	KeyValues * GetKV();
	CAssetModifier();
	CAssetModifier(const CAssetModifier &);
	int ParseExpression(const char *, CriteriaBetween_t *, int);
	bool ParseLiteral(const char * &, int &);
	bool ParseString(const char * &, const char *);
	bool ParseStringLiteral(const char * &, char *, int);

	// vtable[2] Init
	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[5] Precache
	// vtable[6] Compare
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:181
struct CAssetModifierFactory {
	static CUtlStringMap<CAssetModifier* (*)(KeyValues*, IEconItemSchema*, bool, int), CUtlSymbolTable> m_sDictAssetModifierFactories;
	CAssetModifier * CreateInstance(const char *, KeyValues *, IEconItemSchema *, bool, int);
	CAssetModifierFactory();

	// sizeof = 1
};

// src/game/shared/econ/econ_item_asset_modifier.h:208
class CActivityModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CActivityModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	Activity m_Activity;  // +0x2c
	bool m_bAlwaysOn;  // +0x30
	bool m_bPlayAsGesture;  // +0x31
	CActivityModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	void SetActivity(Activity);
	Activity GetActivity();
	const char * GetActivityName();
	const char * GetReplacement();
	bool IsAlwaysOn();
	bool PlayAsGesture();

protected:

	virtual void Init(IEconItemSchema *);
	virtual ~CActivityModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// sizeof = 56
};

// src/game/shared/econ/econ_item_asset_modifier.h:242
class CAnnouncerModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CAnnouncerModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CAnnouncerModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetAnnouncerName();
	const char * GetAnnouncerResource();
	virtual ~CAnnouncerModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:252
class CAnnouncerPreviewModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CAnnouncerPreviewModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CAnnouncerPreviewModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetFileName();
	const char * GetCaption();
	virtual ~CAnnouncerPreviewModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:269
class CHudSkinModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CHudSkinModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	CHudSkinModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetHudSkinName();
	const char * GetHudCycleStyleName();
	HUDCycleStyle_t GetHudCycleStyle();

protected:

	virtual void Init(IEconItemSchema *);
	virtual ~CHudSkinModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:296
class CSkinChangeModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CSkinChangeModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	int m_nSkin;  // +0x2c
	CSkinChangeModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual void Init(IEconItemSchema *);
	virtual bool Compare(const char *);
	int GetSkin();
	virtual ~CSkinChangeModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// vtable[6] Compare
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:322
class CAbilityNameModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CAbilityNameModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CAbilityNameModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetAbilityName();
	virtual ~CAbilityNameModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:331
class CLoadingScreenModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CLoadingScreenModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CLoadingScreenModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetLoadingScreenName();
	virtual ~CLoadingScreenModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:340
class CCursorPackModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CCursorPackModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CCursorPackModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetCursorPackDirectory();
	virtual ~CCursorPackModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:349
class CStrangeControlPointModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CStrangeControlPointModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	int m_nStrangeType;  // +0x2c
	int m_nControlPoint;  // +0x30
	CStrangeControlPointModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual void Init(IEconItemSchema *);
	int GetStrangeType();
	int GetControlPoint();
	virtual ~CStrangeControlPointModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// sizeof = 56
};

// src/game/shared/econ/econ_item_asset_modifier.h:370
class CModelModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CModelModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
	CModelModifier(CModelModifier &);
	CModelModifier(const CModelModifier &);
	CModelModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetClassName();
	const char * GetModelName();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CModelModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[5] Precache
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:382
class CCourierModifier : public CModelModifier {
public:

	static TAssetModifierRegistry<CCourierModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CCourierModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual ~CCourierModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:389
class CCourierFlyingModifier : public CModelModifier {
public:

	static TAssetModifierRegistry<CCourierFlyingModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CCourierFlyingModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual ~CCourierFlyingModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:396
class CHeroModelChangeModifier : public CModelModifier {
public:

	static TAssetModifierRegistry<CHeroModelChangeModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	int m_nSkin;  // +0x2c
	CHeroModelChangeModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual void Init(IEconItemSchema *);
	int GetSkin();
	virtual ~CHeroModelChangeModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:413
class CHexModelModifier : public CModelModifier {
public:

	static TAssetModifierRegistry<CHexModelModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CHexModelModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual ~CHexModelModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:420
class CSoundModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CSoundModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
	CSoundModifier(CSoundModifier &);
	CSoundModifier(const CSoundModifier &);
	CSoundModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetSoundName();
	const char * GetSoundOverride();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CSoundModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[5] Precache
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:432
class CSoundscapeModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CSoundscapeModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CSoundscapeModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetSoundscapeName();
	const char * GetSoundscapeOverride();
	virtual ~CSoundscapeModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:442
class CSpeechModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CSpeechModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CSpeechModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetSpeechConcept();
	const char * GetChatMessage();
	virtual ~CSpeechModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:452
class CIconModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CIconModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	int m_nForceDisplay;  // +0x2c
	CIconModifier(CIconModifier &);
	CIconModifier(const CIconModifier &);
	CIconModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetOriginalIcon();
	const char * GetNewIcon();
	int ForceDisplay();

protected:

	virtual void Init(IEconItemSchema *);
	virtual ~CIconModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:472
class CIconModifier_Hero : public CIconModifier {
public:

	static TAssetModifierRegistry<CIconModifier_Hero> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CIconModifier_Hero(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual ~CIconModifier_Hero();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:479
class CIconModifier_HeroMinimap : public CIconModifier {
public:

	static TAssetModifierRegistry<CIconModifier_HeroMinimap> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CIconModifier_HeroMinimap(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual ~CIconModifier_HeroMinimap();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:486
class CInventoryIconModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CInventoryIconModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	int m_nForceDisplay;  // +0x2c
	CInventoryIconModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetNewIcon();
	int ForceDisplay();

protected:

	virtual void Init(IEconItemSchema *);
	virtual ~CInventoryIconModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:505
class CAbilityIconModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CAbilityIconModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CAbilityIconModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetAbilityName();
	const char * GetNewIcon();
	virtual ~CAbilityIconModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:515
class CEntityModelModifier : public CModelModifier {
public:

	static TAssetModifierRegistry<CEntityModelModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CEntityModelModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetEntityClass();
	const char * GetEntityModel();
	virtual bool Compare(const char *);
	virtual ~CEntityModelModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[6] Compare
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:530
class CEntityScaleModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CEntityScaleModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	float m_flScaleSize;  // +0x2c
	CEntityScaleModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetEntityClass();
	float GetScaleSize();
	virtual bool Compare(const char *);

protected:

	virtual void Init(IEconItemSchema *);
	virtual ~CEntityScaleModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[6] Compare
	// vtable[2] Init
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:554
class CWeatherModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CWeatherModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	int m_iWeatherType;  // +0x2c
	CWeatherModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	int GetWeatherType();

protected:

	virtual void Init(IEconItemSchema *);
	virtual ~CWeatherModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:573
class CWeatherEffectModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CWeatherEffectModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
	CWeatherEffectModifier(CWeatherEffectModifier &);
	CWeatherEffectModifier(const CWeatherEffectModifier &);
	CWeatherEffectModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetEffectName();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CWeatherEffectModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[5] Precache
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:584
class CTerrainParticleEffectModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CTerrainParticleEffectModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
	CTerrainParticleEffectModifier(CTerrainParticleEffectModifier &);
	CTerrainParticleEffectModifier(const CTerrainParticleEffectModifier &);
	CTerrainParticleEffectModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CTerrainParticleEffectModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[5] Precache
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:594
class CNPCMaterialOverrideModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CNPCMaterialOverrideModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
	CNPCMaterialOverrideModifier(CNPCMaterialOverrideModifier &);
	CNPCMaterialOverrideModifier(const CNPCMaterialOverrideModifier &);
	CNPCMaterialOverrideModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CNPCMaterialOverrideModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[5] Precache
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:603
class CWaterMaterialOverrideModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CWaterMaterialOverrideModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
	CWaterMaterialOverrideModifier(CWaterMaterialOverrideModifier &);
	CWaterMaterialOverrideModifier(const CWaterMaterialOverrideModifier &);
	CWaterMaterialOverrideModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CWaterMaterialOverrideModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[5] Precache
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:612
class CMapModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CMapModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CMapModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	void GetBaseMap(CUtlString *);
	void GetOverrideMap(CUtlString *);
	virtual ~CMapModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:623
class CCustomKillEffectModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CCustomKillEffectModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CCustomKillEffectModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetCustomKillEffect();
	virtual ~CCustomKillEffectModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:632
class CBuffModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CBuffModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CBuffModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetBuffName();
	virtual ~CBuffModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:642
class CParticleCreateModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CParticleCreateModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	AttachedParticleSystemIndex_t m_nIndex;  // +0x2c
	bool m_bSpawnInLoadoutOnly:1;  // +0x30:0
	bool m_bSpawnInAlternateLoadoutOnly:1;  // +0x30:1
	bool m_bIsIntroLoadoutEffect:1;  // +0x30:2
	bool m_bIsFakeSystem:1;  // +0x30:3
	bool m_bDestroyImmediately:1;  // +0x30:4
	CParticleCreateModifier(CParticleCreateModifier &);
	CParticleCreateModifier(const CParticleCreateModifier &);
	CParticleCreateModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetEntityClass();
	const char * GetParticleSystemName();
	AttachedParticleSystemIndex_t GetAttachedParticleSystemIndex();
	bool ShouldSpawnInLoadoutOnly();
	bool ShouldSpawnInAlternateLoadoutOnly();
	bool IsIntroLoadoutEffect();
	bool IsFakeSystem();
	bool ShouldDestroyImmediately();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool Compare(const char *);

protected:

	virtual void Init(IEconItemSchema *);
	virtual ~CParticleCreateModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[5] Precache
	// vtable[6] Compare
	// vtable[2] Init
	// sizeof = 56
};

// src/game/shared/econ/econ_item_asset_modifier.h:692
class CParticleModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CParticleModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	AttachedParticleSystemIndex_t m_nIndex;  // +0x2c
	CParticleModifier(CParticleModifier &);
	CParticleModifier(const CParticleModifier &);
	CParticleModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetParticleSystemName();
	const char * GetReplacementName();
	virtual void Precache(const CEntityPrecacheContext *);
	AttachedParticleSystemIndex_t GetAttachedParticleSystemIndex();
	ParticleReplacementType_t GetReplacementType();

protected:

	virtual void Init(IEconItemSchema *);
	virtual ~CParticleModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[5] Precache
	// vtable[2] Init
	// sizeof = 56
};

// src/game/shared/econ/econ_item_asset_modifier.h:713
class CParticleCombined : public CParticleModifier {
public:

	static TAssetModifierRegistry<CParticleCombined> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	int m_nReplaceOrder;  // +0x34
	CParticleCombined(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	int GetReplaceOrder();
	virtual void Init(IEconItemSchema *);
	virtual ~CParticleCombined();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// sizeof = 56
};

// src/game/shared/econ/econ_item_asset_modifier.h:730
class CParticleSnapshotModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CParticleSnapshotModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CParticleSnapshotModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetParticleSnapshotName();
	const char * GetReplacementName();
	virtual ~CParticleSnapshotModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:740
class CParticleControlPointModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CParticleControlPointModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	int m_iCPNumber;  // +0x2c
	CParticleControlPointModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetParticleControlPointName();
	int GetParticleControlPointNumber();
	Vector GetParticleControlPointValue();

protected:

	virtual void Init(IEconItemSchema *);
	virtual ~CParticleControlPointModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// sizeof = 64
};

// src/game/shared/econ/econ_item_asset_modifier.h:764
class CResponseCriteriaModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CResponseCriteriaModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CResponseCriteriaModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetCriteriaValue();
	const char * GetCriteriaName();
	virtual ~CResponseCriteriaModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:774
class CPortraitBackgroundModelModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CPortraitBackgroundModelModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
	CPortraitBackgroundModelModifier(CPortraitBackgroundModelModifier &);
	CPortraitBackgroundModelModifier(const CPortraitBackgroundModelModifier &);
	CPortraitBackgroundModelModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetPortraitBackgroundModel();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CPortraitBackgroundModelModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[5] Precache
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:784
class CPortraitBackgroundCameraModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CPortraitBackgroundCameraModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	CPortraitBackgroundCameraModifier(const CPortraitBackgroundCameraModifier &);
	CPortraitBackgroundCameraModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual ~CPortraitBackgroundCameraModifier();
	const DOTAPortraitCameraInfo_t * GetPortraitBackgroundCameraOverride();

protected:

	virtual void Init(IEconItemSchema *);

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// sizeof = 56
};

// src/game/shared/econ/econ_item_asset_modifier.h:800
class CPortraitBackgroundLightModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CPortraitBackgroundLightModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	CPortraitBackgroundLightModifier(const CPortraitBackgroundLightModifier &);
	CPortraitBackgroundLightModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual ~CPortraitBackgroundLightModifier();
	const DOTAPortraitLightInfo_t * GetPortraitBackgroundLightOverride();

protected:

	virtual void Init(IEconItemSchema *);

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// sizeof = 56
};

// src/game/shared/econ/econ_item_asset_modifier.h:816
class CPortraitBackgroundParticleModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CPortraitBackgroundParticleModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
	CPortraitBackgroundParticleModifier(CPortraitBackgroundParticleModifier &);
	CPortraitBackgroundParticleModifier(const CPortraitBackgroundParticleModifier &);
	CPortraitBackgroundParticleModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetPortraitBackgroundParticle();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CPortraitBackgroundParticleModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[5] Precache
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:826
class CPortraitBackgroundMapModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CPortraitBackgroundMapModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CPortraitBackgroundMapModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	const char * GetPortraitBackgroundMap();
	virtual ~CPortraitBackgroundMapModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:848
class CPetModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CPetModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	int m_nSkin;  // +0x38
	float m_flIngameModelScale;  // +0x3c
	float m_flLoadoutModelScale;  // +0x40
	int m_nCompendiumEventID;  // +0x58
	bool m_bSupportsCoopTeleport;  // +0x5c
	CPetModifier(CPetModifier &);
	CPetModifier(const CPetModifier &);
	CPetModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual void Init(IEconItemSchema *);
	const char * GetPetModel();
	float GetIngameModelScale();
	float GetLoadoutModelScale();
	int GetPetSkin();
	const char * GetPickupItemModel();
	kill_eater_event_t GetStrangeType();
	PetLevelup_Rule_t GetLevelUpRule();
	int GetCompendiumLeagueID();
	bool SupportsCoopTeleport();
	Vector GetOffsetForHero(const char *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CPetModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// vtable[5] Precache
	// sizeof = 96
};

// src/game/shared/econ/econ_item_asset_modifier.h:916
class CHealthBarModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CHealthBarModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	int m_nHealthBarOffset;  // +0x2c
	CHealthBarModifier(CHealthBarModifier &);
	CHealthBarModifier(const CHealthBarModifier &);
	CHealthBarModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	int GetHealthBarOffset();

protected:

	virtual void Init(IEconItemSchema *);
	virtual ~CHealthBarModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:934
class CEntityHealthBarModifier : public CHealthBarModifier {
public:

	static TAssetModifierRegistry<CEntityHealthBarModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
	CEntityHealthBarModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual bool Compare(const char *);
	virtual ~CEntityHealthBarModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[6] Compare
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:945
class CPortraitModifier_Game : public CAssetModifier {
public:

	static TAssetModifierRegistry<CPortraitModifier_Game> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	CPortraitModifier_Game(const CPortraitModifier_Game &);
	CPortraitModifier_Game(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual ~CPortraitModifier_Game();
	virtual void Init(IEconItemSchema *);
	virtual void Precache(const CEntityPrecacheContext *);
	const CDOTAPortraitInfo * GetPortrait();
	virtual bool Compare(const char *);

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[2] Init
	// vtable[5] Precache
	// vtable[6] Compare
	// sizeof = 56
};

// src/game/shared/econ/econ_item_asset_modifier.h:972
class CAdditionalWearableModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CAdditionalWearableModifier> _registry;

	static unsigned int _type;
	static const char * sm_pModifierName;
	CAdditionalWearableModifier(CAdditionalWearableModifier &);
	CAdditionalWearableModifier(const CAdditionalWearableModifier &);
	CAdditionalWearableModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CAdditionalWearableModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[5] Precache
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:981
class CArcanaLevelModifier : public CAssetModifier {
public:

	static TAssetModifierRegistry<CArcanaLevelModifier> _registry;
	static unsigned int _type;
	static const char * sm_pModifierName;
private:

	int m_nLevel;  // +0x2c
	CArcanaLevelModifier(KeyValues *, IEconItemSchema *, bool, int);
	unsigned int StaticType();
	virtual unsigned int GetType();
	const char * StaticTypeName();
	virtual const char * GetTypeName();
	int GetLevel();
	virtual bool Compare(const char *);

protected:

	virtual void Init(IEconItemSchema *);
	virtual ~CArcanaLevelModifier();

	// vtable[3] GetType
	// vtable[4] GetTypeName
	// vtable[6] Compare
	// vtable[2] Init
	// sizeof = 48
};

// src/game/shared/econ/econ_item_asset_modifier.h:1012
class CAssetModifierContainer {
	class CAssetModifierIndex {
	private:

		int32 m_nType;  // +0x0
		CAssetModifierIndex();
		CAssetModifierIndex(int);
		CAssetModifierIndex & operator=(const CAssetModifierIndex &);
		bool operator==(const CAssetModifierIndex &);
		bool operator<(const CAssetModifierIndex &);
		bool LessFunc(const CAssetModifierIndex &, const CAssetModifierIndex &);
		int GetType();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CAssetModifierContainer();
	~CAssetModifierContainer();
	void PurgeAndDeleteElements();
	void AddAssetModifier(const CAssetModifier *);
	void CopyAssetModifier(const CAssetModifier *, const CAssetModifierCriteria *, int);
	void CopyAssetModifiers(const CAssetModifierContainer &, const CAssetModifierCriteria *, int);
	void DumpContents();
	void ForEachModifier(function<void(const CAssetModifier*)>, const CAssetModifierCriteria *);
	bool HasModifiers();
	void Precache(const CEntityPrecacheContext *);
	const CUtlVector<const CEntityModelModifier*, CUtlMemory<const CEntityModelModifier*, int> > * GetAssetModifiers<CEntityModelModifier>();
	const CHeroModelChangeModifier * GetAssetModifier<CHeroModelChangeModifier>(int);
	const CUtlVector<const CHeroModelChangeModifier*, CUtlMemory<const CHeroModelChangeModifier*, int> > * GetAssetModifiers<CHeroModelChangeModifier>();
	const CAdditionalWearableModifier * GetAssetModifier<CAdditionalWearableModifier>(int);
	const CUtlVector<const CAdditionalWearableModifier*, CUtlMemory<const CAdditionalWearableModifier*, int> > * GetAssetModifiers<CAdditionalWearableModifier>();
	const CUtlVector<const CParticleModifier*, CUtlMemory<const CParticleModifier*, int> > * GetAssetModifiers<CParticleModifier>();
	const CParticleSnapshotModifier * GetAssetModifier<CParticleSnapshotModifier>(int);
	const CUtlVector<const CParticleSnapshotModifier*, CUtlMemory<const CParticleSnapshotModifier*, int> > * GetAssetModifiers<CParticleSnapshotModifier>();
	const CUtlVector<const CParticleCreateModifier*, CUtlMemory<const CParticleCreateModifier*, int> > * GetAssetModifiers<CParticleCreateModifier>();

	// sizeof = 40
};

// src/game/shared/econ/econ_item_asset_modifier.h:1012
class CAssetModifierContainer {
	class CAssetModifierIndex {
	private:

		int32 m_nType;  // +0x0
		CAssetModifierIndex();
		CAssetModifierIndex(int);
		CAssetModifierIndex & operator=(const CAssetModifierIndex &);
		bool operator==(const CAssetModifierIndex &);
		bool operator<(const CAssetModifierIndex &);
		bool LessFunc(const CAssetModifierIndex &, const CAssetModifierIndex &);
		int GetType();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CAssetModifierContainer();
	~CAssetModifierContainer();
	void PurgeAndDeleteElements();
	void AddAssetModifier(const CAssetModifier *);
	void CopyAssetModifier(const CAssetModifier *, const CAssetModifierCriteria *, int);
	void CopyAssetModifiers(const CAssetModifierContainer &, const CAssetModifierCriteria *, int);
	void DumpContents();
	void ForEachModifier(function<void(const CAssetModifier*)>, const CAssetModifierCriteria *);
	bool HasModifiers();
	void Precache(const CEntityPrecacheContext *);
	const CUtlVector<const CActivityModifier*, CUtlMemory<const CActivityModifier*, int> > * GetAssetModifiers<CActivityModifier>();
	const CEntityModelModifier * FindAssetModifier<CEntityModelModifier>(const char *);
	const CUtlVector<const CEntityModelModifier*, CUtlMemory<const CEntityModelModifier*, int> > * GetAssetModifiers<CEntityModelModifier>();
	const CSkinChangeModifier * FindAssetModifier<CSkinChangeModifier>(const char *);
	const CUtlVector<const CSkinChangeModifier*, CUtlMemory<const CSkinChangeModifier*, int> > * GetAssetModifiers<CSkinChangeModifier>();
	const CEntityScaleModifier * FindAssetModifier<CEntityScaleModifier>(const char *);
	const CUtlVector<const CEntityScaleModifier*, CUtlMemory<const CEntityScaleModifier*, int> > * GetAssetModifiers<CEntityScaleModifier>();
	const CEntityHealthBarModifier * FindAssetModifier<CEntityHealthBarModifier>(const char *);
	const CUtlVector<const CEntityHealthBarModifier*, CUtlMemory<const CEntityHealthBarModifier*, int> > * GetAssetModifiers<CEntityHealthBarModifier>();
	const CSoundModifier * FindAssetModifier<CSoundModifier>(const char *);
	const CUtlVector<const CSoundModifier*, CUtlMemory<const CSoundModifier*, int> > * GetAssetModifiers<CSoundModifier>();
	const CUtlVector<const CArcanaLevelModifier*, CUtlMemory<const CArcanaLevelModifier*, int> > * GetAssetModifiers<CArcanaLevelModifier>();
	const CParticleModifier * FindAssetModifier<CParticleModifier>(const char *);
	const CUtlVector<const CParticleModifier*, CUtlMemory<const CParticleModifier*, int> > * GetAssetModifiers<CParticleModifier>();
	const CUtlVector<const CParticleCombined*, CUtlMemory<const CParticleCombined*, int> > * GetAssetModifiers<CParticleCombined>();
	const CUtlVector<const CResponseCriteriaModifier*, CUtlMemory<const CResponseCriteriaModifier*, int> > * GetAssetModifiers<CResponseCriteriaModifier>();

	// sizeof = 40
};

// src/game/shared/econ/econ_item_asset_modifier.h:1012
class CAssetModifierContainer {
	class CAssetModifierIndex {
	private:

		int32 m_nType;  // +0x0
		CAssetModifierIndex();
		CAssetModifierIndex(int);
		CAssetModifierIndex & operator=(const CAssetModifierIndex &);
		bool operator==(const CAssetModifierIndex &);
		bool operator<(const CAssetModifierIndex &);
		bool LessFunc(const CAssetModifierIndex &, const CAssetModifierIndex &);
		int GetType();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CAssetModifierContainer();
	~CAssetModifierContainer();
	void PurgeAndDeleteElements();
	void AddAssetModifier(const CAssetModifier *);
	void CopyAssetModifier(const CAssetModifier *, const CAssetModifierCriteria *, int);
	void CopyAssetModifiers(const CAssetModifierContainer &, const CAssetModifierCriteria *, int);
	void DumpContents();
	void ForEachModifier(function<void(const CAssetModifier*)>, const CAssetModifierCriteria *);
	bool HasModifiers();
	void Precache(const CEntityPrecacheContext *);
	const CSoundModifier * FindAssetModifier<CSoundModifier>(const char *);
	const CUtlVector<const CSoundModifier*, CUtlMemory<const CSoundModifier*, int> > * GetAssetModifiers<CSoundModifier>();

	// sizeof = 40
};

// src/game/shared/econ/econ_item_asset_modifier.h:1012
class CAssetModifierContainer {
	class CAssetModifierIndex {
	private:

		int32 m_nType;  // +0x0
		CAssetModifierIndex();
		CAssetModifierIndex(int);
		CAssetModifierIndex & operator=(const CAssetModifierIndex &);
		bool operator==(const CAssetModifierIndex &);
		bool operator<(const CAssetModifierIndex &);
		bool LessFunc(const CAssetModifierIndex &, const CAssetModifierIndex &);
		int GetType();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CAssetModifierContainer();
	~CAssetModifierContainer();
	void PurgeAndDeleteElements();
	void AddAssetModifier(const CAssetModifier *);
	void CopyAssetModifier(const CAssetModifier *, const CAssetModifierCriteria *, int);
	void CopyAssetModifiers(const CAssetModifierContainer &, const CAssetModifierCriteria *, int);
	void DumpContents();
	void ForEachModifier(function<void(const CAssetModifier*)>, const CAssetModifierCriteria *);
	bool HasModifiers();
	void Precache(const CEntityPrecacheContext *);
	const CParticleModifier * FindAssetModifier<CParticleModifier>(const char *);
	const CUtlVector<const CParticleModifier*, CUtlMemory<const CParticleModifier*, int> > * GetAssetModifiers<CParticleModifier>();
	const CUtlVector<const CParticleControlPointModifier*, CUtlMemory<const CParticleControlPointModifier*, int> > * GetAssetModifiers<CParticleControlPointModifier>();
	const CStrangeControlPointModifier * GetAssetModifier<CStrangeControlPointModifier>(int);
	const CUtlVector<const CStrangeControlPointModifier*, CUtlMemory<const CStrangeControlPointModifier*, int> > * GetAssetModifiers<CStrangeControlPointModifier>();
	const CParticleSnapshotModifier * FindAssetModifier<CParticleSnapshotModifier>(const char *);
	const CUtlVector<const CParticleSnapshotModifier*, CUtlMemory<const CParticleSnapshotModifier*, int> > * GetAssetModifiers<CParticleSnapshotModifier>();

	// sizeof = 40
};

// src/game/shared/econ/econ_item_asset_modifier.h:1012
class CAssetModifierContainer {
	class CAssetModifierIndex {
	private:

		int32 m_nType;  // +0x0
		CAssetModifierIndex();
		CAssetModifierIndex(int);
		CAssetModifierIndex & operator=(const CAssetModifierIndex &);
		bool operator==(const CAssetModifierIndex &);
		bool operator<(const CAssetModifierIndex &);
		bool LessFunc(const CAssetModifierIndex &, const CAssetModifierIndex &);
		int GetType();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CAssetModifierContainer();
	~CAssetModifierContainer();
	void PurgeAndDeleteElements();
	void AddAssetModifier(const CAssetModifier *);
	void CopyAssetModifier(const CAssetModifier *, const CAssetModifierCriteria *, int);
	void CopyAssetModifiers(const CAssetModifierContainer &, const CAssetModifierCriteria *, int);
	void DumpContents();
	void ForEachModifier(function<void(const CAssetModifier*)>, const CAssetModifierCriteria *);
	bool HasModifiers();
	void Precache(const CEntityPrecacheContext *);
	const CHeroModelChangeModifier * FindAssetModifier<CHeroModelChangeModifier>(const char *);
	const CUtlVector<const CHeroModelChangeModifier*, CUtlMemory<const CHeroModelChangeModifier*, int> > * GetAssetModifiers<CHeroModelChangeModifier>();
	const CSkinChangeModifier * FindAssetModifier<CSkinChangeModifier>(const char *);
	const CUtlVector<const CSkinChangeModifier*, CUtlMemory<const CSkinChangeModifier*, int> > * GetAssetModifiers<CSkinChangeModifier>();
	const CUtlVector<const CBuffModifier*, CUtlMemory<const CBuffModifier*, int> > * GetAssetModifiers<CBuffModifier>();
	const CPetModifier * GetAssetModifier<CPetModifier>(int);
	const CUtlVector<const CPetModifier*, CUtlMemory<const CPetModifier*, int> > * GetAssetModifiers<CPetModifier>();
	const CHexModelModifier * GetAssetModifier<CHexModelModifier>(int);
	const CUtlVector<const CHexModelModifier*, CUtlMemory<const CHexModelModifier*, int> > * GetAssetModifiers<CHexModelModifier>();
	const CSoundModifier * FindAssetModifier<CSoundModifier>(const char *);
	const CUtlVector<const CSoundModifier*, CUtlMemory<const CSoundModifier*, int> > * GetAssetModifiers<CSoundModifier>();
	const CUtlVector<const CActivityModifier*, CUtlMemory<const CActivityModifier*, int> > * GetAssetModifiers<CActivityModifier>();
	const CAbilityNameModifier * GetAssetModifier<CAbilityNameModifier>(int);
	const CUtlVector<const CAbilityNameModifier*, CUtlMemory<const CAbilityNameModifier*, int> > * GetAssetModifiers<CAbilityNameModifier>();
	const CEntityModelModifier * FindAssetModifier<CEntityModelModifier>(const char *);
	const CUtlVector<const CEntityModelModifier*, CUtlMemory<const CEntityModelModifier*, int> > * GetAssetModifiers<CEntityModelModifier>();

	// sizeof = 40
};

// src/game/shared/econ/econ_item_asset_modifier.h:1012
class CAssetModifierContainer {
	class CAssetModifierIndex {
	private:

		int32 m_nType;  // +0x0
		CAssetModifierIndex();
		CAssetModifierIndex(int);
		CAssetModifierIndex & operator=(const CAssetModifierIndex &);
		bool operator==(const CAssetModifierIndex &);
		bool operator<(const CAssetModifierIndex &);
		bool LessFunc(const CAssetModifierIndex &, const CAssetModifierIndex &);
		int GetType();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CAssetModifierContainer();
	~CAssetModifierContainer();
	void PurgeAndDeleteElements();
	void AddAssetModifier(const CAssetModifier *);
	void CopyAssetModifier(const CAssetModifier *, const CAssetModifierCriteria *, int);
	void CopyAssetModifiers(const CAssetModifierContainer &, const CAssetModifierCriteria *, int);
	void DumpContents();
	void ForEachModifier(function<void(const CAssetModifier*)>, const CAssetModifierCriteria *);
	bool HasModifiers();
	void Precache(const CEntityPrecacheContext *);
	const CCourierFlyingModifier * FindAssetModifier<CCourierFlyingModifier>(const char *);
	const CUtlVector<const CCourierFlyingModifier*, CUtlMemory<const CCourierFlyingModifier*, int> > * GetAssetModifiers<CCourierFlyingModifier>();
	const CCourierModifier * FindAssetModifier<CCourierModifier>(const char *);
	const CUtlVector<const CCourierModifier*, CUtlMemory<const CCourierModifier*, int> > * GetAssetModifiers<CCourierModifier>();
	const CEntityScaleModifier * GetAssetModifier<CEntityScaleModifier>(int);
	const CUtlVector<const CEntityScaleModifier*, CUtlMemory<const CEntityScaleModifier*, int> > * GetAssetModifiers<CEntityScaleModifier>();
	const CEntityModelModifier * FindAssetModifier<CEntityModelModifier>(const char *);
	const CUtlVector<const CEntityModelModifier*, CUtlMemory<const CEntityModelModifier*, int> > * GetAssetModifiers<CEntityModelModifier>();

	// sizeof = 40
};

// src/game/shared/econ/econ_item_asset_modifier.h:1012
class CAssetModifierContainer {
	class CAssetModifierIndex {
	private:

		int32 m_nType;  // +0x0
		CAssetModifierIndex();
		CAssetModifierIndex(int);
		CAssetModifierIndex & operator=(const CAssetModifierIndex &);
		bool operator==(const CAssetModifierIndex &);
		bool operator<(const CAssetModifierIndex &);
		bool LessFunc(const CAssetModifierIndex &, const CAssetModifierIndex &);
		int GetType();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CAssetModifierContainer();
	~CAssetModifierContainer();
	void PurgeAndDeleteElements();
	void AddAssetModifier(const CAssetModifier *);
	void CopyAssetModifier(const CAssetModifier *, const CAssetModifierCriteria *, int);
	void CopyAssetModifiers(const CAssetModifierContainer &, const CAssetModifierCriteria *, int);
	void DumpContents();
	void ForEachModifier(function<void(const CAssetModifier*)>, const CAssetModifierCriteria *);
	bool HasModifiers();
	void Precache(const CEntityPrecacheContext *);

	// sizeof = 40
};

// src/game/shared/econ/econ_item_asset_modifier.h:1012
class CAssetModifierContainer {
	class CAssetModifierIndex {
	private:

		int32 m_nType;  // +0x0
		CAssetModifierIndex();
		CAssetModifierIndex(int);
		CAssetModifierIndex & operator=(const CAssetModifierIndex &);
		bool operator==(const CAssetModifierIndex &);
		bool operator<(const CAssetModifierIndex &);
		bool LessFunc(const CAssetModifierIndex &, const CAssetModifierIndex &);
		int GetType();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CAssetModifierContainer();
	~CAssetModifierContainer();
	void PurgeAndDeleteElements();
	void AddAssetModifier(const CAssetModifier *);
	void CopyAssetModifier(const CAssetModifier *, const CAssetModifierCriteria *, int);
	void CopyAssetModifiers(const CAssetModifierContainer &, const CAssetModifierCriteria *, int);
	void DumpContents();
	void ForEachModifier(function<void(const CAssetModifier*)>, const CAssetModifierCriteria *);
	bool HasModifiers();
	void Precache(const CEntityPrecacheContext *);
	const CCustomKillEffectModifier * GetAssetModifier<CCustomKillEffectModifier>(int);
	const CUtlVector<const CCustomKillEffectModifier*, CUtlMemory<const CCustomKillEffectModifier*, int> > * GetAssetModifiers<CCustomKillEffectModifier>();

	// sizeof = 40
};

// src/game/shared/econ/econ_item_asset_modifier.h:1012
class CAssetModifierContainer {
	class CAssetModifierIndex {
	private:

		int32 m_nType;  // +0x0
		CAssetModifierIndex();
		CAssetModifierIndex(int);
		CAssetModifierIndex & operator=(const CAssetModifierIndex &);
		bool operator==(const CAssetModifierIndex &);
		bool operator<(const CAssetModifierIndex &);
		bool LessFunc(const CAssetModifierIndex &, const CAssetModifierIndex &);
		int GetType();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CAssetModifierContainer();
	~CAssetModifierContainer();
	void PurgeAndDeleteElements();
	void AddAssetModifier(const CAssetModifier *);
	void CopyAssetModifier(const CAssetModifier *, const CAssetModifierCriteria *, int);
	void CopyAssetModifiers(const CAssetModifierContainer &, const CAssetModifierCriteria *, int);
	void DumpContents();
	void ForEachModifier(function<void(const CAssetModifier*)>, const CAssetModifierCriteria *);
	bool HasModifiers();
	void Precache(const CEntityPrecacheContext *);
	const CUtlVector<const CActivityModifier*, CUtlMemory<const CActivityModifier*, int> > * GetAssetModifiers<CActivityModifier>();
	const CSpeechModifier * GetAssetModifier<CSpeechModifier>(int);
	const CUtlVector<const CSpeechModifier*, CUtlMemory<const CSpeechModifier*, int> > * GetAssetModifiers<CSpeechModifier>();
	const CAbilityNameModifier * GetAssetModifier<CAbilityNameModifier>(int);
	const CUtlVector<const CAbilityNameModifier*, CUtlMemory<const CAbilityNameModifier*, int> > * GetAssetModifiers<CAbilityNameModifier>();
	const CCourierModifier * FindAssetModifier<CCourierModifier>(const char *);
	const CUtlVector<const CCourierModifier*, CUtlMemory<const CCourierModifier*, int> > * GetAssetModifiers<CCourierModifier>();
	const CCourierFlyingModifier * FindAssetModifier<CCourierFlyingModifier>(const char *);
	const CUtlVector<const CCourierFlyingModifier*, CUtlMemory<const CCourierFlyingModifier*, int> > * GetAssetModifiers<CCourierFlyingModifier>();
	const CAdditionalWearableModifier * GetAssetModifier<CAdditionalWearableModifier>(int);
	const CUtlVector<const CAdditionalWearableModifier*, CUtlMemory<const CAdditionalWearableModifier*, int> > * GetAssetModifiers<CAdditionalWearableModifier>();

	// sizeof = 40
};

// src/game/shared/econ/econ_item_asset_modifier.h:1012
class CAssetModifierContainer {
	class CAssetModifierIndex {
	private:

		int32 m_nType;  // +0x0
		CAssetModifierIndex();
		CAssetModifierIndex(int);
		CAssetModifierIndex & operator=(const CAssetModifierIndex &);
		bool operator==(const CAssetModifierIndex &);
		bool operator<(const CAssetModifierIndex &);
		bool LessFunc(const CAssetModifierIndex &, const CAssetModifierIndex &);
		int GetType();

		// sizeof = 4
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	CAssetModifierContainer();
	~CAssetModifierContainer();
	void PurgeAndDeleteElements();
	void AddAssetModifier(const CAssetModifier *);
	void CopyAssetModifier(const CAssetModifier *, const CAssetModifierCriteria *, int);
	void CopyAssetModifiers(const CAssetModifierContainer &, const CAssetModifierCriteria *, int);
	void DumpContents();
	void ForEachModifier(function<void(const CAssetModifier*)>, const CAssetModifierCriteria *);
	bool HasModifiers();
	void Precache(const CEntityPrecacheContext *);
	const CEntityModelModifier * FindAssetModifier<CEntityModelModifier>(const char *);
	const CUtlVector<const CEntityModelModifier*, CUtlMemory<const CEntityModelModifier*, int> > * GetAssetModifiers<CEntityModelModifier>();
	const CUtlVector<const CParticleCreateModifier*, CUtlMemory<const CParticleCreateModifier*, int> > * GetAssetModifiers<CParticleCreateModifier>();

	// sizeof = 40
};
