// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/hintsystem.h:28
class CHintSystem {
	struct onresethints_t {
		int iHintID;  // +0x0
		float flTimer;  // +0x4
		bool bOnlyIfClear;  // +0x8

		HintTimerCallback pfnCallback;  // +0x10

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	float m_flLastHintPlayedAt;  // +0x8
	bool m_bShowHints;  // +0xc

	const char * * m_pszHintMessages;  // +0x28
	CHintSystem();
	~CHintSystem();
	void Init(CBasePlayer *, int, const char * *);
	void ResetHints();
	void ResetHintTimers();
	void Update();
	bool HintMessage(int, bool, bool);
	void HintMessage(const char *);
	void RegisterHintTimer(int, float, bool, HintTimerCallback);
	void StartHintTimer(int);
	void StopHintTimer(int);
	void RemoveHintTimer(int);
	bool TimerShouldFire(int);
	void SetShowHints(bool);
	void SetHintPlayed(int);
	bool ShouldShowHints();
	bool HasPlayedHint(int);
	void PlayedAHint();
	void ClearHintHistory();
	bool HintIsCurrentlyVisible();
	void ReAddHintTimerIfNotDisplayed(int, float);

	// sizeof = 88
};
