// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_neutral_home.h:9
class CDOTABehaviorNeutralHome : public Action<CDOTA_BaseNPC>, IDOTABehaviorMoveTo {
public:

private:

	bool m_bHomePositionSet;  // +0x168
	CDOTABehaviorNeutralHome(CDOTABehaviorNeutralHome &);
	CDOTABehaviorNeutralHome(const CDOTABehaviorNeutralHome &);
	CDOTABehaviorNeutralHome();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> OnSuspend(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnContact(CDOTA_BaseNPC *, CBaseEntity *, CGameTrace *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnDominated(CDOTA_BaseNPC *);
	virtual const char * GetName();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();
	virtual ~CDOTABehaviorNeutralHome();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[67] OnEnd
	// vtable[68] OnSuspend
	// vtable[69] OnResume
	// vtable[73] OnContact
	// vtable[125] OnDominated
	// vtable[62] GetName
	// vtable[130] GetTargetPosition
	// vtable[131] DoesTargetMove
	// sizeof = 368
};
