// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_game_manager.h:48
struct dota_default_strings_t {
	string_t m_item_tpscroll;  // +0x0
	string_t m_item_dust;  // +0x8
	string_t m_item_gem;  // +0x10
	string_t m_item_ward_sentry;  // +0x18
	string_t m_item_ward_observer;  // +0x20
	string_t m_item_courier;  // +0x28
	string_t m_item_flying_courier;  // +0x30
	dota_default_strings_t();

	// sizeof = 56
};

// src/game/shared/dota/dota_game_manager.h:59
struct HeroData_t {
	int m_nModelCount;  // +0x0

	// sizeof = 4
};

// src/game/shared/dota/dota_game_manager.h:64
class CDOTAGameManager : public CAutoGameSystem, public CGameEventListener, public IAddonListChangeNotify {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct HeroInfo_t : public HeroData_t {
	public:

		// sizeof = 16
	};

	struct LocalizedToScriptNameItem_t {
		wchar_t wcLocalizedName[128];  // +0x0
		short unsigned int iItemIndex;  // +0x200

		// sizeof = 516
	};
	/* tag__fprintf: const_type tag not supported! */;

	class NetworkVar_m_StableHeroAvailable {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_CurrentHeroAvailable {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_CulledHeroes {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	CUtlSymbolTableLarge m_AbilityNameTable;  // +0xa8
	CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)> m_AbilitiesDict;  // +0x100
	CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)> m_AbilitiesDataDict;  // +0x128

	bool m_bCustomGame;  // +0x1c0
	bool m_bEventGame;  // +0x1c1
	char m_szAddOnGame[128];  // +0x1c2
	char m_szAddOnMap[128];  // +0x242

	CUtlSymbolTableLarge m_AddOnAbilityNameTable;  // +0x2f0
	CUtlMap<CUtlSymbolLarge, KeyValues*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)> m_AddOnAbilitiesDict;  // +0x348
	CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&)> m_AddOnAbilitiesDataDict;  // +0x370

	int m_nHighestHeroID;  // +0x4b8

	typedef CUtlMap<unsigned int, KeyValues*, short unsigned int, bool (*)(unsigned int const&, unsigned int const&)> MapRegionNumberToKeyValues_t;

	MapRegionNumberToKeyValues_t m_mapRegionToKeyValues;  // +0x508
	int m_nNumLoadingPlayers;  // +0x5a8
	int m_iDefeatedParticle;  // +0x5ac
	typedef CAutoGameSystem BaseClass;
	typedef CDOTAGameManager ThisClass;
	CDOTAGameManager(CDOTAGameManager &);
	CDOTAGameManager(CDOTAGameManager &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTAGameManager *);

	void NetworkStateChanged();
	void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	void NetworkStateChangedLog(const char *, const char *);
	CDOTAGameManager();
	virtual bool Init();
	virtual void Shutdown();
	virtual void OnAddonListChanged();
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	KeyValues * GetHeroesKeyValues();
	KeyValues * GetUnitsKeyValues();
	KeyValues * GetAbilitiesKeyValues();
	KeyValues * GetMatchGroupsKeyValues();
	KeyValues * GetEmoticonsKeyValues();
	KeyValues * GetPortraitsLightPreselectsKV();
	KeyValues * GetAnimationStatuesKeyValues();
	KeyValues * GetRegionKeyValues();
	KeyValues * GetKeyValuesForRegion(uint32);
	KeyValues * GetDivisionKeyValues();
	KeyValues * GetAddonInfoKeyValues();
	bool IsRegionEnabled(KeyValues *, uint32, bool, bool);
	bool IsSupportedLobbyGameMode(DOTA_GameMode);
	KeyValues * GetHeroDataByHeroID(int);
	const HeroData_t * GetHeroDataStructByHeroID(int);
	KeyValues * GetHeroDataByModelName(const char *);
	const char * GetHeroNameByID(int);
	const char * GetHeroNameForUnitName(const char *);
	void GetUnitNameForHeroName(const char *, char *, int);
	const char * GetHeroUnitNameByID(int);
	void ResetEnabledHeroes(int);
	void ResetLowViolenceHeroes();
	KeyValues * GetHeroDataByName(const char *);
	ScriptVariant_t GetHeroDataByName_Script(const char *);
	int GetHeroIDByName(const char *);
	KeyValues * GetFirstHero();
	KeyValues * GetNextHero(KeyValues *);
	int GetHighestHeroID();
	bool GetHeroRowColumnInLegacySelection(KeyValues *, int *, int *);
	int GetHeroGroupIndex(KeyValues *);
	bool IsHeroAvailableByHeroID(int, int);
	bool IsHeroAvailableByName(int, const char *);
	void SetHeroAvailableByHeroID(int, bool);
	bool IsHeroCulledByHeroID(int);
	const dota_default_strings_t & DefaultStrings();
	int GetUnitTableIndex(const char *);
	const char * GetUnitTableNameByIndex(int);
	KeyValues * GetUnitDataByModelName(const char *);
	KeyValues * GetDataForHeroOrUnit(const char *);
	KeyValues * GetAbilityByName(const char *);
	short unsigned int GetAbilityIndex(const char *);
	short unsigned int GetAbilityIndexFromID(int);
	int GetAbilityIDFromIndex(short unsigned int);
	short unsigned int GetInvalidAbilityIndex();
	KeyValues * GetAbilityByIndex(short unsigned int);
	DOTAAbilityData_t * GetAbilityDataByIndex(short unsigned int);
	DOTAAbilityData_t * GetAbilityDataByID(int);
	DOTAAbilityData_t * GetAbilityDataByItemID(int);
	DOTAAbilityData_t * GetAbilityDataByName(const char *);
	bool IsValidAbilityIndex(short unsigned int);
	int GetNumAbilityData();
	KeyValues * GetItemDataByItemID(int);
	void SearchShopItems(const char *, CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > &);
	void SearchShopItems(const wchar_t *, CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> > &);
	KeyValues * GetTutorialTipDataByName(const char *);
	KeyValues * GetTutorialLessonDataByName(const char *);
	KeyValues * GetTutorialLessonKeys();
	void InitAddOnGame(int);
	void ShutdownAddOnGame();
	bool InitAddOnDirectory(const char *, const char *, bool);
	const char * GetAddOnGame();
	const char * GetAddOnMap();
	bool IsCustomGame();
	bool IsEventGame();
	bool IsAddOnGame();
	void Playtesting_UpdateAddOnKeyValues();
	bool SetupAddOnGameKeyValues();
	HKeySymbol GetKvSymbol(DOTAKeyValuesSymbol_t);
	bool IsAddonPlayable(const char *);
	void LoadCustomHeroList();
	void LoadCustomHeroes();
	void ApplyAbilitiesOverride(KeyValues *);
	void DestroyGameKeyValues();
	void ReloadGameKeyValues();
	void LevelShutdown();
	void ServerShutdown();
	void ReloadPortraitData();
	const char * GetPortraitBackgroundMaterialByModel(const char *);
	void PrintHighestFreeIDs();
	bool ReloadTutorialFiles();
	bool LoadTutorial(const char *);
	int GetCountryCount();
	const char * GetCountryName(int);
	const char * GetCountryCode(int);
	const char * LookupCountryCode(const char *);
	const char * GetCountryName(const char *);
	KeyValues * GetSurveyQuestionData();
	KeyValues * GetSurveyQuestionDataBySurveyID(uint8);
	void GetEnabledSurveyQuestionIDs(CUtlVector<int, CUtlMemory<int, int> > &);
	virtual void FireGameEvent(IGameEvent *);

private:

	bool LoadKeyValuesFiles();
	void DestroyKeyValuesFiles();
	bool SetupGameKeyValues(bool);
	void VerifyHeroIDs();
	void VerifyUniqueAbilityIDs();
	void VerifyUniqueItemAbilitySpecials();
	void SetupItemSymbolsAndDictionary();
	void SetupCustomItemSymbolsAndDictionary();
	void SetupItemCombines(CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&));
	bool SetupSingleItemCombine(CUtlMap<CUtlSymbolLarge, DOTAAbilityData_t*, short unsigned int, bool (*)(const CUtlSymbolLarge&, const CUtlSymbolLarge&), int, const CUtlMap<DOTAAbilityData_t*, bool, short unsigned int, bool (*)(DOTAAbilityData_t* const&, DOTAAbilityData_t* const&);
	void UnserializeHeroData(HeroData_t &, KeyValues *);
	void LoadHeroWhitelist();
	void LoadCountryCodes();
	void LoadSurveyQuestionData();
	void DestroyAddOnGameKeyValues();
	int GetCurrentMode();
	void InitDefaultStrings();
	void InitSearchableItems();
	void AddCountries(KeyValues *);
	virtual ~CDOTAGameManager();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[40] Schema_DynamicBinding
	// vtable[0] Init
	// vtable[2] Shutdown
	// vtable[41] OnAddonListChanged
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// vtable[42] FireGameEvent
	// sizeof = 1944
};
