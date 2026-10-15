// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_vote.h:16
struct DotaVoteChoice_t {
	char text[64];  // +0x0
	char callback[32];  // +0x40

	// sizeof = 96
};

// src/game/server/dota/dota_vote.h:22
class CDOTAVoteSystem : public CAutoGameSystem, public CGameEventListener {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	bool m_bCurrentlyVoting;  // +0x1a

	const char * m_pszText;  // +0x20
	int m_nNumChoices;  // +0x28
	int m_nDefaultChoice;  // +0x2c
	float m_fRequiredVoteThreshold;  // +0x30
	bool m_bAllowVoteChanging;  // +0x634
	bool m_bPauseGame;  // +0x635
	bool m_bEndEarlyIfOutcomeIsDetermined;  // +0x636
	bool m_bEndEarlyIfAllHaveVoted;  // +0x637
	float m_fDuration;  // +0x638
	float m_fStartTime;  // +0x63c

	typedef CAutoGameSystem BaseClass;
	CDOTAVoteSystem(const CDOTAVoteSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTAVoteSystem *);
	CDOTAVoteSystem();
	virtual ~CDOTAVoteSystem();
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	virtual void GameInit(const EventGameInit_t &);
	virtual void FireGameEvent(IGameEvent *);
	void StartVote(KeyValues *);
	void Script_StartVote(HSCRIPT);
	void VoteEnded();
	bool ClientMsg_RecordVote(CEntityIndex, const CDOTAClientMsg_RecordVote_t &);

private:

	float GetCurrentTime();
	void CountVotes(const int *, int *);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[25] FrameUpdatePostEntityThink
	// vtable[3] GameInit
	// vtable[40] FireGameEvent
	// sizeof = 1984
};
