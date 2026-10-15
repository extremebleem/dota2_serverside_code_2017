// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotlod.h:18
class CNextbotLodManager {
	enum {
		LOD_LEVELS = 0x3,
	};

	struct SourceInfo_t {
		float m_flUpdateTime;  // +0x18
		int m_nId;  // +0x1c
		SourceInfo_t();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

	class NextBotDistSqPair {
		float m_flDistSq;  // +0x8
		NextBotDistSqPair(NextBotCombatCharacter *, float);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	int ()() * * _vptr.CNextbotLodManager;  // +0x0
protected:

	const NextBotManager & m_rNextbotManager;  // +0x8
	float m_flSourceDecayTime;  // +0x10
	int m_nMaxLodSources;  // +0x14

	CNextbotLodManager(CNextbotLodManager &);
	CNextbotLodManager(const CNextbotLodManager &);
	CNextbotLodManager(NextBotManager &);
	void Init();
	virtual void Update();
	void SetLodLimit(int, int);
	void SetLodRange(int, float);
	virtual int UpdateLodSource(int, const Vector &);
	void UpdateLod(NextBotCombatCharacter &);
	virtual int DebugDisplay();
	virtual void DebugDraw();
	void UpdateLods();
	int GetIndexForSource(int);
	virtual float FindDistSqToClosestLodSource(const NextBotCombatCharacter &);
	float FindDistSqToClosestLodSourceFromPoint(const Vector &);
	void InvalidateSource(int);
	void DebugDrawLodForCharacter(const NextBotCombatCharacter &);
	bool SortCharacterDistSqPair(const NextBotDistSqPair &, const NextBotDistSqPair &);

	// vtable[0] Update
	// vtable[1] UpdateLodSource
	// vtable[2] DebugDisplay
	// vtable[3] DebugDraw
	// vtable[4] FindDistSqToClosestLodSource
	// sizeof = 128
};
