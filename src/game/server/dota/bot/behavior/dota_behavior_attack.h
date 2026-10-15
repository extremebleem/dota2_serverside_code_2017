// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_attack.h:7
class CDOTABehaviorAttack : public Action<CDOTA_BaseNPC> {
public:

private:

	EHANDLE m_hTarget;  // +0x64

	bool m_bCastAttack;  // +0xa0

	float m_flBackswingTime;  // +0xa4
	float m_flAnimSpeed;  // +0xa8
	CDOTABehaviorAttack(CDOTABehaviorAttack &);
	CDOTABehaviorAttack(const CDOTABehaviorAttack &);
	CDOTABehaviorAttack(CBaseEntity *, CDOTA_AttackRecord *, bool, float, float);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual const char * GetName();
	virtual ~CDOTABehaviorAttack();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[62] GetName
	// sizeof = 176
};
