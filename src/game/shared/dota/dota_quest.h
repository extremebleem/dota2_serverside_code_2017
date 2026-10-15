// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_quest.h:87
class CDotaSubquestBase : public CBaseEntity {
	class NetworkVar_m_pszSubquestText {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_bHidden {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCompleted {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bShowProgressBar {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nProgressBarHueShift {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_pnTextReplaceValuesCDotaSubquestBase {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_pszTextReplaceString {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_nTextReplaceValueVersion {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	char m_pszSubquestName[256];  // +0x45c
	typedef CDotaSubquestBase ThisClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDotaSubquestBase(CDotaSubquestBase &);
	CDotaSubquestBase(CDotaSubquestBase &);
	CDotaSubquestBase();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual subquest_classes_t GetSubquestClass();
	CDotaSubquestBase * SpawnFromKeyValues(KeyValues *);
	virtual void Spawn(const CEntityKeyValues *);
	void CompleteSubquest();
	void TextReplaceValueChanged(int);
	void ParentQuestChanged();
	void SetTextReplaceValue(int, int);
	void SetTextReplaceString(const char *);
	int GetTextReplaceValue(int);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDotaSubquestBase();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[207] GetSubquestClass
	// vtable[8] Spawn
	// vtable[4] GetScriptDesc
	// sizeof = 1376
};

// src/game/shared/dota/dota_quest.h:147
class CDotaQuest : public CBaseEntity {
	class NetworkVar_m_pszQuestTitle {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_pszQuestText {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_nQuestType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hSubquests {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_bHidden {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCompleted {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bWinIfCompleted {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bLoseIfCompleted {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_pszGameEndText {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_pnTextReplaceValuesCDotaQuest {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_pszTextReplaceString {
		void NetworkStateChanged(void *);

		// sizeof = 1
	};

	class NetworkVar_m_nTextReplaceValueVersion {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	int m_nQuestCompleteFadeAlpha;  // +0x684
	char m_pszQuestName[256];  // +0x688
	typedef CDotaQuest ThisClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDotaQuest(CDotaQuest &);
	CDotaQuest(CDotaQuest &);
	CDotaQuest();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDotaQuest * SpawnFromKeyValues(const char *, KeyValues *);
	CDotaQuest * SpawnFromParms(const char *, int, const char *, const char *);
	virtual void Spawn(const CEntityKeyValues *);
	void TextReplaceValueChanged(int);
	void SubquestCompleted(CDotaSubquestBase *);
	void CompleteQuest();
	void AddSubquest(CDotaSubquestBase *);
	void Script_AddSubquest(HSCRIPT);
	void RemoveSubquest(CDotaSubquestBase *);
	void Script_RemoveSubquest(HSCRIPT);
	CDotaSubquestBase * GetSubquestByName(const char *);
	HSCRIPT Script_GetSubquestByName(const char *);
	CDotaSubquestBase * GetSubquest(int);
	HSCRIPT Script_GetSubquest(int);
	void SetTextReplaceValue(int, int);
	void SetTextReplaceString(const char *);
	int GetTextReplaceValue(int);
	virtual ScriptClassDesc_t * GetScriptDesc();

protected:

	ScriptClassDesc_t * InitScriptDesc();
	ScriptClassDesc_t * GetClassScriptDesc();
	virtual ~CDotaQuest();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[4] GetScriptDesc
	// sizeof = 1928
};

// src/game/shared/dota/dota_quest.h:229
class CDotaSubquestBuyItems : public CDotaSubquestBase {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDotaSubquestBuyItems(CDotaSubquestBuyItems &);
	CDotaSubquestBuyItems(CDotaSubquestBuyItems &);
	CDotaSubquestBuyItems();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual subquest_classes_t GetSubquestClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDotaSubquestBuyItems();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[207] GetSubquestClass
	// vtable[8] Spawn
	// sizeof = 1400
};

// src/game/shared/dota/dota_quest.h:258
class CDotaSubquestEntityDeath : public CDotaSubquestBase {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDotaSubquestEntityDeath(CDotaSubquestEntityDeath &);
	CDotaSubquestEntityDeath(CDotaSubquestEntityDeath &);
	CDotaSubquestEntityDeath();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual subquest_classes_t GetSubquestClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDotaSubquestEntityDeath();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[207] GetSubquestClass
	// vtable[8] Spawn
	// sizeof = 1400
};

// src/game/shared/dota/dota_quest.h:287
class CDotaSubquestTutorialEvent : public CDotaSubquestBase {
public:

private:

	string_t m_sTutorialEvent;  // +0x560
	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDotaSubquestTutorialEvent(CDotaSubquestTutorialEvent &);
	CDotaSubquestTutorialEvent(CDotaSubquestTutorialEvent &);
	CDotaSubquestTutorialEvent();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual subquest_classes_t GetSubquestClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDotaSubquestTutorialEvent();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[207] GetSubquestClass
	// vtable[8] Spawn
	// sizeof = 1384
};

// src/game/shared/dota/dota_quest.h:329
class CDotaSubquestPlayerStat : public CDotaSubquestBase {
public:

private:

	int m_nPlayerStatValue;  // +0x560
	int m_nStartingStatOffset;  // +0x564
	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDotaSubquestPlayerStat(CDotaSubquestPlayerStat &);
	CDotaSubquestPlayerStat(CDotaSubquestPlayerStat &);
	CDotaSubquestPlayerStat();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual subquest_classes_t GetSubquestClass();
	virtual void Spawn(const CEntityKeyValues *);
	void SubquestThink();
	int GetCurrentValue();
	virtual ~CDotaSubquestPlayerStat();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[207] GetSubquestClass
	// vtable[8] Spawn
	// sizeof = 1384
};

// src/game/shared/dota/dota_quest.h:361
class CDotaSubquestAbilityCastCount : public CDotaSubquestBase {
public:

private:

	int m_sAbilityNameSymbol;  // +0x55c
	int m_nTargetCastCount;  // +0x560
	int m_nCurrentCastCount;  // +0x564
	bool m_bRequiresChannelSuccess;  // +0x568
	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDotaSubquestAbilityCastCount(CDotaSubquestAbilityCastCount &);
	CDotaSubquestAbilityCastCount(CDotaSubquestAbilityCastCount &);
	CDotaSubquestAbilityCastCount();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual subquest_classes_t GetSubquestClass();
	virtual void Spawn(const CEntityKeyValues *);
	void AbilityCast();
	virtual ~CDotaSubquestAbilityCastCount();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[207] GetSubquestClass
	// vtable[8] Spawn
	// sizeof = 1392
};

// src/game/shared/dota/dota_quest.h:390
class CDOTA_QuestSystem : public IGameSystem, public CGameEventListener {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef IGameSystem BaseClass;
	CDOTA_QuestSystem();
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_QuestSystem *);
	virtual void GameInit(const EventGameInit_t &);
	virtual void FireGameEvent(IGameEvent *);
	void CompleteQuestByName(const char *);
	void SubquestCompleted(CDotaSubquestBase *);
	virtual ~CDOTA_QuestSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[40] FireGameEvent
	// sizeof = 32
};
