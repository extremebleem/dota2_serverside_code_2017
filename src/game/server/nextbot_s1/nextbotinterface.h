// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotinterface.h:34
class INextBot : public INextBotEventResponder {
	enum {
		MAX_NEXTBOT_DEBUG_HISTORY = 0x64,
		MAX_NEXTBOT_DEBUG_LINE_LENGTH = 0x100,
	};

	struct NextBotDebugLineType {
		char data[256];  // +0x4

		// sizeof = 260
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	const CPathFollower * m_pCurrentPath;  // +0x10
	int m_id;  // +0x18
	bool m_bFlaggedForUpdate;  // +0x1c

	int m_tickLastUpdate;  // +0x20
	uint m_debugType;  // +0x24
	int m_debugDisplayLine;  // +0x28

	INextBot & operator=(const INextBot &);
	INextBot(const INextBot &);
	INextBot();
	virtual ~INextBot();
	int GetBotId();
	bool BeginUpdate();
	void EndUpdate();
	virtual void Reset();
	virtual void Update();
	virtual void Upkeep();
	void FlagForUpdate(bool);
	bool IsFlaggedForUpdate();
	int GetTickLastUpdate();
	void SetTickLastUpdate(int);
	virtual bool IsRemovedOnReset();
	virtual CBaseCombatCharacter * GetEntity();
	virtual NextBotCombatCharacter * GetNextBotCombatCharacter();
	virtual CLocomotionBase * GetLocomotionInterface();
	virtual IBody * GetBodyInterface();
	virtual IIntention * GetIntentionInterface();
	virtual IVision * GetVisionInterface();
	virtual bool SetPosition(const Vector &);
	virtual const Vector & GetPosition();
	virtual bool IsEnemy(const CBaseEntity *);
	virtual bool IsFriend(const CBaseEntity *);
	virtual bool IsSelf(const CBaseEntity *);
	virtual bool IsAbleToClimbOnto(const CBaseEntity *);
	virtual bool IsAbleToBreak(const CBaseEntity *);
	virtual bool IsAbleToBlockMovementOf(const INextBot *);
	virtual bool ShouldTouch(const CBaseEntity *);
	virtual bool IsImmobile();
	virtual float GetImmobileDuration();
	virtual void ClearImmobileStatus();
	virtual float GetImmobileSpeedThreshold();
	virtual const CPathFollower * GetCurrentPath();
	virtual void SetCurrentPath(const CPathFollower *);
	virtual void NotifyPathDestruction(const CPathFollower *);
	virtual bool IsRangeLessThan(const CBaseEntity *, float);
	virtual bool IsRangeLessThan(const Vector &, float);
	virtual bool IsRangeGreaterThan(const CBaseEntity *, float);
	virtual bool IsRangeGreaterThan(const Vector &, float);
	virtual float GetRangeTo(const CBaseEntity *);
	virtual float GetRangeTo(const Vector &);
	virtual float GetRangeSquaredTo(CBaseEntity *);
	virtual float GetRangeSquaredTo(const Vector &);
	virtual INextBotEventResponder * FirstContainedResponder();
	virtual INextBotEventResponder * NextContainedResponder(INextBotEventResponder *);
	virtual bool IsDebuggingOverride(unsigned int);
	virtual const char * GetDebugIdentifier();
	virtual bool IsDebugFilterMatch(const char *);
	virtual void DisplayDebugText(const char *);
	void DebugConColorMsg(NextBotDebugType, const Color &, const char *, ...);
	void GetDebugHistory(unsigned int, CUtlVector<const INextBot::NextBotDebugLineType*, CUtlMemory<const INextBot::NextBotDebugLineType*, int> > *);
	bool IsDebugging(unsigned int);
	void RegisterComponent(INextBotComponent *);
	void UpdateImmobileStatus();
	void ResetDebugHistory();

	// vtable[62] Reset
	// vtable[63] Update
	// vtable[64] Upkeep
	// vtable[65] IsRemovedOnReset
	// vtable[66] GetEntity
	// vtable[67] GetNextBotCombatCharacter
	// vtable[68] GetLocomotionInterface
	// vtable[69] GetBodyInterface
	// vtable[70] GetIntentionInterface
	// vtable[71] GetVisionInterface
	// vtable[72] SetPosition
	// vtable[73] GetPosition
	// vtable[74] IsEnemy
	// vtable[75] IsFriend
	// vtable[76] IsSelf
	// vtable[77] IsAbleToClimbOnto
	// vtable[78] IsAbleToBreak
	// vtable[79] IsAbleToBlockMovementOf
	// vtable[80] ShouldTouch
	// vtable[81] IsImmobile
	// vtable[82] GetImmobileDuration
	// vtable[83] ClearImmobileStatus
	// vtable[84] GetImmobileSpeedThreshold
	// vtable[85] GetCurrentPath
	// vtable[86] SetCurrentPath
	// vtable[87] NotifyPathDestruction
	// vtable[88] IsRangeLessThan
	// vtable[89] IsRangeLessThan
	// vtable[90] IsRangeGreaterThan
	// vtable[91] IsRangeGreaterThan
	// vtable[92] GetRangeTo
	// vtable[93] GetRangeTo
	// vtable[94] GetRangeSquaredTo
	// vtable[95] GetRangeSquaredTo
	// vtable[3] FirstContainedResponder
	// vtable[4] NextContainedResponder
	// vtable[96] IsDebuggingOverride
	// vtable[97] GetDebugIdentifier
	// vtable[98] IsDebugFilterMatch
	// vtable[99] DisplayDebugText
	// sizeof = 152
};
