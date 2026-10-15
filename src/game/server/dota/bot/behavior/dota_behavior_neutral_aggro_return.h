// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_neutral_aggro_return.h:9
class CDOTABehaviorNeutralAggroReturn : public Action<CDOTA_BaseNPC>, IDOTABehaviorMoveTo {
public:

private:

	CDOTABehaviorNeutralAggroReturn(CDOTABehaviorNeutralAggroReturn &);
	CDOTABehaviorNeutralAggroReturn(const CDOTABehaviorNeutralAggroReturn &);
	CDOTABehaviorNeutralAggroReturn(Vector);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnContact(CDOTA_BaseNPC *, CBaseEntity *, CGameTrace *);
	virtual const char * GetName();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();
	virtual ~CDOTABehaviorNeutralAggroReturn();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[69] OnResume
	// vtable[73] OnContact
	// vtable[62] GetName
	// vtable[130] GetTargetPosition
	// vtable[131] DoesTargetMove
	// sizeof = 352
};
