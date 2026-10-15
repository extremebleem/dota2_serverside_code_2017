// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_ability.h:9
class CDOTABehaviorAbility : public Action<CDOTA_BaseNPC> {
	enum BehaviorAbilityTargetType {
		TARGETING_NOTHING = 0,
		TARGETING_POSITION = 0x1,
		TARGETING_ENTITY = 0x2,
	};

public:

private:

	EHANDLE m_who;  // +0x70
	bool m_bNoTarget;  // +0x74

	int m_nTargetType;  // +0x78
	EHANDLE m_hAbility;  // +0x7c
	CDOTABehaviorAbility(CDOTABehaviorAbility &);
	CDOTABehaviorAbility(const CDOTABehaviorAbility &);
	CDOTABehaviorAbility(CDOTABaseAbility *);
	CDOTABehaviorAbility(CDOTABaseAbility *, const Vector &);
	CDOTABehaviorAbility(CDOTABaseAbility *, CBaseEntity *);
	virtual Action<CDOTA_BaseNPC> * InitialContainedAction(CDOTA_BaseNPC *);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual const char * GetName();
	bool IsTargetingEntity();
	virtual ~CDOTABehaviorAbility();

	// vtable[70] InitialContainedAction
	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[62] GetName
	// sizeof = 128
};
