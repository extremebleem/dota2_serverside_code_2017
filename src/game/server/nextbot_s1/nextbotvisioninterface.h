// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotvisioninterface.h:25
class IVision : public INextBotComponent {
	enum FieldOfViewCheckType {
		USE_FOV = 0,
		DISREGARD_FOV = 0x1,
	};

public:

private:

	float m_FOV;  // +0x38
	float m_cosHalfFOV;  // +0x3c
	float m_lastVisionUpdateTimestamp;  // +0x5c
	class IForEachKnownEntity {
		// sizeof = 0
	};
	IVision(const IVision &);

	IVision(INextBot *);
	virtual ~IVision();
	virtual void Reset();
	virtual void Update();
	virtual const char * GetName();
	virtual bool ForEachKnownEntity(IForEachKnownEntity &);
	virtual void CollectKnownEntities(CUtlVector<CKnownEntity, CUtlMemory<CKnownEntity, int> > *);
	virtual const CKnownEntity * GetPrimaryKnownThreat(bool);
	virtual float GetTimeSinceVisible(int);
	virtual const CKnownEntity * GetClosestKnown(int);
	virtual int GetKnownCount(int, bool, float);
	virtual const CKnownEntity * GetClosestKnown(const INextBotEntityFilter &);
	virtual const CKnownEntity * GetKnown(const CBaseEntity *);
	virtual void AddKnownEntity(CBaseEntity *);
	virtual void ForgetEntity(CBaseEntity *);
	virtual void ForgetAllKnownEntities();
	virtual void CollectPotentiallyVisibleEntities(CUtlVector<CBaseEntity*, CUtlMemory<CBaseEntity*, int> > *);
	virtual float GetMaxVisionRange();
	virtual float GetMinRecognizeTime();
	virtual bool IsAbleToSee(CBaseEntity *, FieldOfViewCheckType, Vector *);
	virtual bool IsAbleToSee(const Vector &, FieldOfViewCheckType);
	virtual bool IsVisibleEntityNoticed(CBaseEntity *);
	virtual bool IsIgnored(const CBaseEntity *);
	virtual bool IsInFieldOfView(const Vector &);
	virtual bool IsInFieldOfView(const CBaseEntity *);
	virtual float GetDefaultFieldOfView();
	virtual float GetFieldOfView();
	virtual void SetFieldOfView(float);
	virtual bool IsLineOfSightClear(const Vector &);
	virtual bool IsLineOfSightClearToEntity(const CBaseEntity *, Vector *);
	virtual bool IsLookingAt(const Vector &, float);
	virtual bool IsLookingAt(const CBaseCombatCharacter *, float);
	void UpdateKnownEntities();
	bool IsAwareOf(const CKnownEntity &);

	// vtable[0] Schema_DynamicBinding
	// vtable[62] Reset
	// vtable[63] Update
	// vtable[65] GetName
	// vtable[66] ForEachKnownEntity
	// vtable[67] CollectKnownEntities
	// vtable[68] GetPrimaryKnownThreat
	// vtable[69] GetTimeSinceVisible
	// vtable[70] GetClosestKnown
	// vtable[71] GetKnownCount
	// vtable[72] GetClosestKnown
	// vtable[73] GetKnown
	// vtable[74] AddKnownEntity
	// vtable[75] ForgetEntity
	// vtable[76] ForgetAllKnownEntities
	// vtable[77] CollectPotentiallyVisibleEntities
	// vtable[78] GetMaxVisionRange
	// vtable[79] GetMinRecognizeTime
	// vtable[80] IsAbleToSee
	// vtable[81] IsAbleToSee
	// vtable[82] IsVisibleEntityNoticed
	// vtable[83] IsIgnored
	// vtable[84] IsInFieldOfView
	// vtable[85] IsInFieldOfView
	// vtable[86] GetDefaultFieldOfView
	// vtable[87] GetFieldOfView
	// vtable[88] SetFieldOfView
	// vtable[89] IsLineOfSightClear
	// vtable[90] IsLineOfSightClearToEntity
	// vtable[91] IsLookingAt
	// vtable[92] IsLookingAt
	// sizeof = 608
};
