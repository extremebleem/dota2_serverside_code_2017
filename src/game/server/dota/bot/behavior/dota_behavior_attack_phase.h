// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_attack_phase.h:7
class CDOTABehaviorAttackPhase : public Action<CDOTA_BaseNPC> {
public:

private:

	EHANDLE m_hTarget;  // +0x64

	bool m_bAttackComplete;  // +0x80

	bool m_bDeny;  // +0xa8
	bool m_bCastAttack;  // +0xa9
	bool m_bTargetTeleported;  // +0xaa

	float m_flBackswingDuration;  // +0xac
	float m_flAnimSpeed;  // +0xb0
	float m_flAttackPortionPriorToTimer;  // +0xb4
	CDOTABehaviorAttackPhase(CDOTABehaviorAttackPhase &);
	CDOTABehaviorAttackPhase(const CDOTABehaviorAttackPhase &);
	CDOTABehaviorAttackPhase(CBaseEntity *, bool, bool);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnUnitTeleported(CDOTA_BaseNPC *, CBaseEntity *, bool);
	virtual const char * GetName();
	virtual ~CDOTABehaviorAttackPhase();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[127] OnUnitTeleported
	// vtable[62] GetName
	// sizeof = 192
};
