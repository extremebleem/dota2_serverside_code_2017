// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/soundopgamesystem.h:75
class CSosCopyRecipientFilter : public IRecipientFilter {
	enum {
		FLAG_ACTIVE = 0x1,
		FLAG_RELIABLE = 0x2,
		FLAG_INIT_MESSAGE = 0x4,
	};

public:

private:

	int m_Flags;  // +0x8

	CSosCopyRecipientFilter(CSosCopyRecipientFilter &);
	CSosCopyRecipientFilter(const CSosCopyRecipientFilter &);
	CSosCopyRecipientFilter();
	void Init(const IRecipientFilter &);
	int GetFlagsForFilter(const IRecipientFilter &);
	bool IsEqual(const IRecipientFilter &);
	virtual NetChannelBufType_t GetNetworkBufType();
	bool IsActive();
	virtual int GetRecipientCount();
	virtual CEntityIndex GetRecipientIndex(int);
	virtual bool IsInitMessage();
	virtual bool AddRecipient(CBasePlayer *);
	virtual ~CSosCopyRecipientFilter();

	// vtable[3] GetNetworkBufType
	// vtable[5] GetRecipientCount
	// vtable[6] GetRecipientIndex
	// vtable[4] IsInitMessage
	// vtable[7] AddRecipient
	// sizeof = 40
};

// src/game/shared/soundopgamesystem.h:207
class CSosFilterInfo_t {
	CSosFilterInfo_t();
	~CSosFilterInfo_t();

	// sizeof = 40
};

// src/game/shared/soundopgamesystem.h:213
class CMsgSosStartSoundEvent_t : public CNetMessagePB<208, CMsgSosStartSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true> {
public:

	CMsgSosStartSoundEvent_t(CMsgSosStartSoundEvent_t &);
	CMsgSosStartSoundEvent_t(const CMsgSosStartSoundEvent_t &);
	CMsgSosStartSoundEvent_t();
	virtual ~CMsgSosStartSoundEvent_t();

	// sizeof = 56
};

// src/game/shared/soundopgamesystem.h:214
class CMsgSosStopSoundEvent_t : public CNetMessagePB<209, CMsgSosStopSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true> {
public:

	CMsgSosStopSoundEvent_t(CMsgSosStopSoundEvent_t &);
	CMsgSosStopSoundEvent_t(const CMsgSosStopSoundEvent_t &);
	CMsgSosStopSoundEvent_t();
	virtual ~CMsgSosStopSoundEvent_t();

	// sizeof = 32
};

// src/game/shared/soundopgamesystem.h:215
class CMsgSosStopSoundEventHash_t : public CNetMessagePB<212, CMsgSosStopSoundEventHash, (SignonGroup_t)4u, (NetChannelBufType_t)1, true> {
public:

	CMsgSosStopSoundEventHash_t(CMsgSosStopSoundEventHash_t &);
	CMsgSosStopSoundEventHash_t(const CMsgSosStopSoundEventHash_t &);
	CMsgSosStopSoundEventHash_t();
	virtual ~CMsgSosStopSoundEventHash_t();

	// sizeof = 32
};

// src/game/shared/soundopgamesystem.h:216
class CMsgSosSetSoundEventParams_t : public CNetMessagePB<210, CMsgSosSetSoundEventParams, (SignonGroup_t)4u, (NetChannelBufType_t)1, true> {
public:

	CMsgSosSetSoundEventParams_t(CMsgSosSetSoundEventParams_t &);
	CMsgSosSetSoundEventParams_t(const CMsgSosSetSoundEventParams_t &);
	CMsgSosSetSoundEventParams_t();
	virtual ~CMsgSosSetSoundEventParams_t();

	// sizeof = 40
};

// src/game/shared/soundopgamesystem.h:217
class CMsgSosSetLibraryStackFields_t : public CNetMessagePB<211, CMsgSosSetLibraryStackFields, (SignonGroup_t)4u, (NetChannelBufType_t)1, true> {
public:

	CMsgSosSetLibraryStackFields_t(CMsgSosSetLibraryStackFields_t &);
	CMsgSosSetLibraryStackFields_t(const CMsgSosSetLibraryStackFields_t &);
	CMsgSosSetLibraryStackFields_t();
	virtual ~CMsgSosSetLibraryStackFields_t();

	// sizeof = 40
};

// src/game/shared/soundopgamesystem.h:219
class CSosFilterStartSoundEventInfo_t : public CSosStartSoundEventInfo_t, public CSosFilterInfo_t {
public:

	CSosFilterStartSoundEventInfo_t(CSosFilterStartSoundEventInfo_t &);
	CSosFilterStartSoundEventInfo_t(const CSosFilterStartSoundEventInfo_t &);
	CSosFilterStartSoundEventInfo_t();
	virtual ~CSosFilterStartSoundEventInfo_t();

	// sizeof = 240
};

// src/game/shared/soundopgamesystem.h:220
class CSosFilterStopSoundEventInfo_t : public CSosStopSoundEventInfo_t, public CSosFilterInfo_t {
public:

	CSosFilterStopSoundEventInfo_t(CSosFilterStopSoundEventInfo_t &);
	CSosFilterStopSoundEventInfo_t(const CSosFilterStopSoundEventInfo_t &);
	CSosFilterStopSoundEventInfo_t();
	virtual ~CSosFilterStopSoundEventInfo_t();

	// sizeof = 56
};

// src/game/shared/soundopgamesystem.h:221
class CSosFilterStopSoundEventHashInfo_t : public CSosStopSoundEventHashInfo_t, public CSosFilterInfo_t {
public:

	CSosFilterStopSoundEventHashInfo_t(CSosFilterStopSoundEventHashInfo_t &);
	CSosFilterStopSoundEventHashInfo_t(const CSosFilterStopSoundEventHashInfo_t &);
	CSosFilterStopSoundEventHashInfo_t();
	virtual ~CSosFilterStopSoundEventHashInfo_t();

	// sizeof = 64
};

// src/game/shared/soundopgamesystem.h:222
class CSosFilterSetSoundEventFieldsInfo_t : public CSosSetSoundEventFieldsInfo_t, public CSosFilterInfo_t {
public:

	CSosFilterSetSoundEventFieldsInfo_t(CSosFilterSetSoundEventFieldsInfo_t &);
	CSosFilterSetSoundEventFieldsInfo_t(const CSosFilterSetSoundEventFieldsInfo_t &);
	CSosFilterSetSoundEventFieldsInfo_t();
	virtual ~CSosFilterSetSoundEventFieldsInfo_t();

	// sizeof = 208
};

// src/game/shared/soundopgamesystem.h:223
class CSosFilterSetLibraryStackFieldsInfo_t : public CSosSetLibraryStackFieldsInfo_t, public CSosFilterInfo_t {
public:

	CSosFilterSetLibraryStackFieldsInfo_t(CSosFilterSetLibraryStackFieldsInfo_t &);
	CSosFilterSetLibraryStackFieldsInfo_t(const CSosFilterSetLibraryStackFieldsInfo_t &);
	CSosFilterSetLibraryStackFieldsInfo_t();
	virtual ~CSosFilterSetLibraryStackFieldsInfo_t();

	// sizeof = 208
};

// src/game/shared/soundopgamesystem.h:228
class CSoundOpGameSystem : public CAutoGameSystem, public CUtlSlot {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	class CCommandMemberInitializer_snd_sos_sv_soundevent_start {
	private:

		CCommandMemberInitializer_snd_sos_sv_soundevent_start();
		~CCommandMemberInitializer_snd_sos_sv_soundevent_start();

		// sizeof = 152
	};

	class CCommandMemberInitializer_snd_sos_sv_soundevent_stop_last {
	private:

		CCommandMemberInitializer_snd_sos_sv_soundevent_stop_last();
		~CCommandMemberInitializer_snd_sos_sv_soundevent_stop_last();

		// sizeof = 152
	};

	class CCommandMemberInitializer_snd_sos_sv_test_gender {
	private:

		CCommandMemberInitializer_snd_sos_sv_test_gender();
		~CCommandMemberInitializer_snd_sos_sv_test_gender();

		// sizeof = 152
	};

	class CCommandMemberInitializer_snd_sos_sv_soundevent_pause_last {
	private:

		CCommandMemberInitializer_snd_sos_sv_soundevent_pause_last();
		~CCommandMemberInitializer_snd_sos_sv_soundevent_pause_last();

		// sizeof = 152
	};

	class CCommandMemberInitializer_snd_sos_sv_soundevent_unpause_last {
	private:

		CCommandMemberInitializer_snd_sos_sv_soundevent_unpause_last();
		~CCommandMemberInitializer_snd_sos_sv_soundevent_unpause_last();

		// sizeof = 152
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef CAutoGameSystem BaseClass;
	CSoundOpGameSystem(const CSoundOpGameSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CSoundOpGameSystem *);
	CSoundOpGameSystem();
	virtual ~CSoundOpGameSystem();
	virtual void GameInit(const EventGameInit_t &);
	virtual void GameActivate(const EventGameActivate_t &);
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	bool OnStartSoundEvent(const CMsgSosStartSoundEvent_t &);
	bool OnStopSoundEvent(const CMsgSosStopSoundEvent_t &);
	bool OnStopSoundEventHash(const CMsgSosStopSoundEventHash_t &);
	bool OnSetSoundEventParams(const CMsgSosSetSoundEventParams_t &);
	bool OnSetLibraryStackFields(const CMsgSosSetLibraryStackFields_t &);
	SndOpEventGuid_t StartSoundEvent(const IRecipientFilter &, HSOUNDEVENTHASH, CEntityIndex, SOSRANDSEED, double);
	SndOpEventGuid_t StartSoundEvent(const IRecipientFilter &, const char *, CEntityIndex, SOSRANDSEED, double);
	void StopSoundEvent(const IRecipientFilter &, SndOpEventGuid_t);
	void StopSoundEvent(const IRecipientFilter &, HSOUNDEVENTHASH, CEntityIndex);
	void StopSoundEvent(const IRecipientFilter &, const char *, CEntityIndex);
	void StopSoundEvent(SndOpEventGuid_t &);
	void StopSoundEvent(HSOUNDEVENTHASH, CEntityIndex);
	void StopSoundEvent(const char *, CEntityIndex);
	void PauseSoundEvent(const IRecipientFilter &, SndOpEventGuid_t);
	void PauseSoundEvent(SndOpEventGuid_t &);
	void UnPauseSoundEvent(const IRecipientFilter &, SndOpEventGuid_t);
	void UnPauseSoundEvent(SndOpEventGuid_t &);
	bool SetSoundEventParam(const IRecipientFilter &, SndOpEventGuid_t, cached_soundevent_parameter_t, const CSosFieldData &, int, bool);
	void SetSoundEventParam(const IRecipientFilter &, SndOpEventGuid_t, const char *, const CSosFieldData &, int, bool);
	void SetSoundEventParam(SndOpEventGuid_t, cached_soundevent_parameter_t, const CSosFieldData &, int, bool);
	void SetSoundEventParam(SndOpEventGuid_t, const char *, const CSosFieldData &, int);
	cached_soundevent_parameter_t GetCachedSoundeventParameter(const char *);
	bool HasSoundEventParam(const char *, const char *);
	void SetSoundStartTime(SndOpEventGuid_t, float);
	void SetLibraryStackField(const IRecipientFilter &, const char *, const char *, const char *, const CSosFieldData &, int);
	void SetLibraryStackField(const char *, const char *, const char *, const CSosFieldData &, int);
	SosStringHandle_t GetSosStringHandle(const char *);

private:

	void SetStartMessage(CMsgSosStartSoundEvent_t &, const CSosFilterStartSoundEventInfo_t *);
	void SetStopMessage(CMsgSosStopSoundEvent_t &, const CSosFilterStopSoundEventInfo_t *);
	void SetStopHashMessage(CMsgSosStopSoundEventHash_t &, const CSosFilterStopSoundEventHashInfo_t *);
	void SetParamsMessage(CMsgSosSetSoundEventParams_t &, const CSosFilterSetSoundEventFieldsInfo_t *);
	void SetFieldsMessage(CMsgSosSetLibraryStackFields_t &, const CSosFilterSetLibraryStackFieldsInfo_t *);
	bool GetFieldInfo(HSOSLIBSTACKHASH, HSOSOPFIELDHASH, const CSosFieldData &, int, HSOSOPFIELDHASH *);
	bool GetFieldInfo(HSOSLIBSTACKHASH, const char *, const char *, const CSosFieldData &, int, HSOSOPFIELDHASH *);
	bool GetParamInfo(SndOpEventGuid_t, cached_soundevent_parameter_t, const CSosFieldData &, int, HSOSOPFIELDHASH *);
	SndOpEventGuid_t DoStartSoundEvent(const IRecipientFilter *, SoundEventGuid_t, HSOUNDEVENTHASH, CEntityIndex, SOSRANDSEED, const void *, int, double);
	void DoStopSoundEvent(const IRecipientFilter *, SoundEventGuid_t);
	void DoStopSoundEventHash(const IRecipientFilter *, HSOUNDEVENTHASH, CEntityIndex);
	void DoSetSoundEventParams(const IRecipientFilter *, SoundEventGuid_t, HSOSOPFIELDHASH, const CSosFieldData *, short int, const void *, int);
	void DoSetLibraryStackFields(const IRecipientFilter *, HSOSLIBSTACKHASH, HSOSOPFIELDHASH, const CSosFieldData *, short int, const void *, int);
	void snd_sos_sv_soundevent_start(const CCommandContext &, const CCommand &);
	void snd_sos_sv_soundevent_stop_last(const CCommandContext &, const CCommand &);
	void snd_sos_sv_test_gender(const CCommandContext &, const CCommand &);
	void snd_sos_sv_soundevent_pause_last(const CCommandContext &, const CCommand &);
	void snd_sos_sv_soundevent_unpause_last(const CCommandContext &, const CCommand &);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[8] GameActivate
	// vtable[11] GameDeactivate
	// vtable[25] FrameUpdatePostEntityThink
	// sizeof = 920
};
