// Reconstructed from DWARF by pahole; not original source.

// src/game/server/basemultiplayerplayer.h:26
class CBaseMultiplayerPlayer : public CAI_ExpresserHost<CBasePlayer> {
	enum {
		CHAT_IGNORE_NONE = 0,
		CHAT_IGNORE_ALL = 0x1,
		CHAT_IGNORE_TEAM = 0x2,
	};

public:

private:

	int m_iIgnoreGlobalChat;  // +0x1190
	float m_flAreaCaptureScoreAccumulator;  // +0x1194
	float m_flCapPointScoreRate;  // +0x1198
protected:

	int m_iCurrentConcept;  // +0x119c
private:

	float m_flConnectionTime;  // +0x11a8
	float m_flLastForcedChangeTeamTime;  // +0x11ac
	int m_iBalanceScore;  // +0x11b0

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
	CBaseMultiplayerPlayer(CBaseMultiplayerPlayer &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CBaseMultiplayerPlayer();
	virtual ~CBaseMultiplayerPlayer();
	virtual void SetOrResetInitialState(const CEntityKeyValues *);

protected:

	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Connect();
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual bool SpeakIfAllowed(AIConcept_t, SpeechPriorityType, const char *, char *, size_t, IRecipientFilter *);
	void SpeakConcept(AI_Response &, int);
	virtual bool SpeakConceptIfAllowed(int, const char *, char *, size_t, IRecipientFilter *);
	virtual bool CanHearAndReadChatFrom(CBasePlayer *);
	virtual bool CanSpeak();
	virtual bool ClientCommand(const CCommand &);
	virtual bool CanSpeakVoiceCommand();
	virtual bool ShouldShowVoiceSubtitleToEnemy();
	virtual void NoteSpokeVoiceCommand(const char *);
	virtual void OnAchievementEarned(int);
	virtual CAI_Expresser * GetExpresser();
	virtual CMultiplayer_Expresser * GetMultiplayerExpresser();
	void SetLastForcedChangeTeamTimeToNow();
	float GetLastForcedChangeTeamTime();
	void SetTeamBalanceScore(int);
	int GetTeamBalanceScore();
	virtual int CalculateTeamBalanceScore();
	void AwardAchievement(int);
	int GetPerLifeCounterKV(const char *);
	void SetPerLifeCounterKV(const char *, int);
	void ResetPerLifeCounters();
	KeyValues * GetPerLifeCounterKeys();
	void EscortScoringThink();
	void StartScoringEscortPoints(float);
	void StopScoringEscortPoints();
	float GetConnectionTime();
	bool GetSteamID(CSteamID *);
	uint64 GetSteamIDAsUInt64();
	virtual CAI_Expresser * CreateExpresser();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[374] SetOrResetInitialState
	// vtable[6] Precache
	// vtable[5] Connect
	// vtable[159] ModifyOrAppendCriteria
	// vtable[549] SpeakIfAllowed
	// vtable[550] SpeakConceptIfAllowed
	// vtable[494] CanHearAndReadChatFrom
	// vtable[495] CanSpeak
	// vtable[431] ClientCommand
	// vtable[551] CanSpeakVoiceCommand
	// vtable[552] ShouldShowVoiceSubtitleToEnemy
	// vtable[553] NoteSpokeVoiceCommand
	// vtable[554] OnAchievementEarned
	// vtable[522] GetExpresser
	// vtable[555] GetMultiplayerExpresser
	// vtable[556] CalculateTeamBalanceScore
	// vtable[557] CreateExpresser
	// sizeof = 4544
};
