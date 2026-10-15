// Reconstructed from DWARF by pahole; not original source.

// src/public/steam/steam_api.h:263
class CCallbackImpl<12> : protected CCallbackBase {
protected:

	CCallbackImpl(const CCallbackImpl<12> &);
	CCallbackImpl();
	~CCallbackImpl();
	void SetGameserverFlag();
	virtual void Run(void *);
	virtual void Run(void *, bool, SteamAPICall_t);
	virtual int GetCallbackSizeBytes();

	// vtable[0] Run
	// vtable[1] Run
	// vtable[2] GetCallbackSizeBytes
	// sizeof = 16
};

// src/public/steam/steam_api.h:263
class CCallbackImpl<140> : protected CCallbackBase {
protected:

	CCallbackImpl(const CCallbackImpl<140> &);
	CCallbackImpl();
	~CCallbackImpl();
	void SetGameserverFlag();
	virtual void Run(void *);
	virtual void Run(void *, bool, SteamAPICall_t);
	virtual int GetCallbackSizeBytes();

	// vtable[0] Run
	// vtable[1] Run
	// vtable[2] GetCallbackSizeBytes
	// sizeof = 16
};

// src/public/steam/steam_api.h:263
class CCallbackImpl<8> : protected CCallbackBase {
protected:

	CCallbackImpl(const CCallbackImpl<8> &);
	CCallbackImpl();
	~CCallbackImpl();
	void SetGameserverFlag();
	virtual void Run(void *);
	virtual void Run(void *, bool, SteamAPICall_t);
	virtual int GetCallbackSizeBytes();

	// vtable[0] Run
	// vtable[1] Run
	// vtable[2] GetCallbackSizeBytes
	// sizeof = 16
};

// src/public/steam/steam_api.h:281
class CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t> : CCallbackBase {
private:

	SteamAPICall_t m_hAPICall;  // +0x10
	typedef struct {
		void (*__pfn)(CSteamWorksGameStatsUploader *, GameStatsSessionIssued_t *, bool);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} func_t;

	func_t m_Func;  // +0x20
	void CCallResult(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t> *, const CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t> &);
	void CCallResult(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t> *);
	void ~CCallResult(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t> *, int);
	void Set(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t> *, SteamAPICall_t, CSteamWorksGameStatsUploader *, func_t);
	bool IsActive(const CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t> *);
	void Cancel(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t> *);
	void SetGameserverFlag(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t> *);
	virtual void Run(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t> *, void *);
	virtual void Run(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t> *, void *, bool, SteamAPICall_t);
	virtual int GetCallbackSizeBytes(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t> *);

// vtable[0] Run
// vtable[1] Run
// vtable[2] GetCallbackSizeBytes
};

// src/public/steam/steam_api.h:281
class CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t> : CCallbackBase {
private:

	SteamAPICall_t m_hAPICall;  // +0x10
	typedef struct {
		void (*__pfn)(CSteamWorksGameStatsUploader *, GameStatsSessionClosed_t *, bool);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} func_t;

	func_t m_Func;  // +0x20
	void CCallResult(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t> *, const CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t> &);
	void CCallResult(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t> *);
	void ~CCallResult(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t> *, int);
	void Set(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t> *, SteamAPICall_t, CSteamWorksGameStatsUploader *, func_t);
	bool IsActive(const CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t> *);
	void Cancel(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t> *);
	void SetGameserverFlag(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t> *);
	virtual void Run(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t> *, void *);
	virtual void Run(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t> *, void *, bool, SteamAPICall_t);
	virtual int GetCallbackSizeBytes(CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t> *);

// vtable[0] Run
// vtable[1] Run
// vtable[2] GetCallbackSizeBytes
};

// src/public/steam/steam_api.h:281
class CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t> : CCallbackBase {
private:

	SteamAPICall_t m_hAPICall;  // +0x10
	typedef struct {
		void (*__pfn)(CPlayerStatState *, GSStatsReceived_t *, bool);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} func_t;

	func_t m_Func;  // +0x20
	void CCallResult(CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t> *, const CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t> &);
	void CCallResult(CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t> *);
	void ~CCallResult(CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t> *, int);
	void Set(CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t> *, SteamAPICall_t, CPlayerStatState *, func_t);
	bool IsActive(const CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t> *);
	void Cancel(CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t> *);
	void SetGameserverFlag(CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t> *);
	virtual void Run(CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t> *, void *);
	virtual void Run(CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t> *, void *, bool, SteamAPICall_t);
	virtual int GetCallbackSizeBytes(CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t> *);

// vtable[0] Run
// vtable[1] Run
// vtable[2] GetCallbackSizeBytes
};

// src/public/steam/steam_api.h:312
class CCallback<CPlayerAchievementState, GSStatsReceived_t, false> : public CCallbackImpl<12> {
public:

protected:

	typedef struct {
		void (*__pfn)(CPlayerAchievementState *, GSStatsReceived_t *);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} func_t;

	func_t m_Func;  // +0x18
	void ~CCallback(CCallback<CPlayerAchievementState, GSStatsReceived_t, false> *, int);
	void CCallback(CCallback<CPlayerAchievementState, GSStatsReceived_t, false> *, CCallback<CPlayerAchievementState, GSStatsReceived_t, false> &);
	void CCallback(CCallback<CPlayerAchievementState, GSStatsReceived_t, false> *, const CCallback<CPlayerAchievementState, GSStatsReceived_t, false> &);
	void CCallback(CCallback<CPlayerAchievementState, GSStatsReceived_t, false> *, CPlayerAchievementState *, func_t);
	void Register(CCallback<CPlayerAchievementState, GSStatsReceived_t, false> *, CPlayerAchievementState *, func_t);
	void Unregister(CCallback<CPlayerAchievementState, GSStatsReceived_t, false> *);
	virtual void Run(CCallback<CPlayerAchievementState, GSStatsReceived_t, false> *, void *);

// vtable[0] Run
};

// src/public/steam/steam_api.h:312
class CCallback<CPlayerAchievementState, GSStatsStored_t, false> : public CCallbackImpl<12> {
public:

protected:

	typedef struct {
		void (*__pfn)(CPlayerAchievementState *, GSStatsStored_t *);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} func_t;

	func_t m_Func;  // +0x18
	void ~CCallback(CCallback<CPlayerAchievementState, GSStatsStored_t, false> *, int);
	void CCallback(CCallback<CPlayerAchievementState, GSStatsStored_t, false> *, CCallback<CPlayerAchievementState, GSStatsStored_t, false> &);
	void CCallback(CCallback<CPlayerAchievementState, GSStatsStored_t, false> *, const CCallback<CPlayerAchievementState, GSStatsStored_t, false> &);
	void CCallback(CCallback<CPlayerAchievementState, GSStatsStored_t, false> *, CPlayerAchievementState *, func_t);
	void Register(CCallback<CPlayerAchievementState, GSStatsStored_t, false> *, CPlayerAchievementState *, func_t);
	void Unregister(CCallback<CPlayerAchievementState, GSStatsStored_t, false> *);
	virtual void Run(CCallback<CPlayerAchievementState, GSStatsStored_t, false> *, void *);

// vtable[0] Run
};

// src/public/steam/steam_api.h:312
class CCallback<CDOTAGamerules, GSClientKick_t, true> : public CCallbackImpl<12> {
public:

protected:

	typedef struct {
		void (*__pfn)(CDOTAGamerules *, GSClientKick_t *);  // +0x0
		long int __delta;  // +0x8

		// sizeof = 16
	} func_t;

	func_t m_Func;  // +0x18
	void CCallback(CCallback<CDOTAGamerules, GSClientKick_t, true> *, CCallback<CDOTAGamerules, GSClientKick_t, true> &);
	void CCallback(CCallback<CDOTAGamerules, GSClientKick_t, true> *, const CCallback<CDOTAGamerules, GSClientKick_t, true> &);
	void ~CCallback(CCallback<CDOTAGamerules, GSClientKick_t, true> *, int);
	void CCallback(CCallback<CDOTAGamerules, GSClientKick_t, true> *, CDOTAGamerules *, func_t);
	void Register(CCallback<CDOTAGamerules, GSClientKick_t, true> *, CDOTAGamerules *, func_t);
	void Unregister(CCallback<CDOTAGamerules, GSClientKick_t, true> *);
	virtual void Run(CCallback<CDOTAGamerules, GSClientKick_t, true> *, void *);

// vtable[0] Run
};

// CCallbackImpl: 3 more instantiations (full list in INDEX.tsv)
//   CCallbackImpl<16>
//   CCallbackImpl<1>
//   CCallbackImpl<4>

// CCallResult: 5 more instantiations (full list in INDEX.tsv)
//   CCallResult<CDotaStatManager::CPlayerStatState, GSStatsStored_t>
//   CCallResult<CScriptHTTPRequest, HTTPRequestCompleted_t>
//   CCallResult<CDOTA_TeamCommander, SteamUGCQueryCompleted_t>
//   CCallResult<CJobCallResult<SteamUGCQueryCompleted_t>, SteamUGCQueryCompleted_t>
//   CCallResult<CGCUpdateItemSchema, HTTPRequestCompleted_t>

// CCallback: 10 more instantiations (full list in INDEX.tsv)
//   CCallback<CDOTAGamerules, GSClientDeny_t, true>
//   CCallback<CDOTA_OGS, GSClientKick_t, true>
//   CCallback<CDOTA_OGS, GSClientDeny_t, true>
//   CCallback<CDotaStatManager::CPlayerStatState, GSStatsUnloaded_t, true>
//   CCallback<CInstallUGCJob, DownloadItemResult_t, true>
//   CCallback<CGCClientSystem, SteamServersConnected_t, true>
//   CCallback<GCSDK::CGCClient, GCMessageAvailable_t, false>
//   CCallback<GCSDK::CGCClient, SteamServersDisconnected_t, false>
//   CCallback<GCSDK::CGCClient, SteamServerConnectFailure_t, false>
//   CCallback<GCSDK::CGCClient, SteamServersConnected_t, false>
