// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_ability_channel.h:7
class CDOTABehaviorAbilityChannel : public Action<CDOTA_BaseNPC> {
public:

private:

	float m_flAbilityChannelDuration;  // +0x80
	EHANDLE m_hAbility;  // +0x84
	EHANDLE m_hTarget;  // +0x88
	bool m_bInterrupted;  // +0x8c
	CDOTABehaviorAbilityChannel(CDOTABehaviorAbilityChannel &);
	CDOTABehaviorAbilityChannel(const CDOTABehaviorAbilityChannel &);
	CDOTABehaviorAbilityChannel(CDOTABaseAbility *, float);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual const char * GetName();
	void OnChannelEnd(CDOTA_BaseNPC *);
	virtual ~CDOTABehaviorAbilityChannel();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[62] GetName
	// sizeof = 144
};
