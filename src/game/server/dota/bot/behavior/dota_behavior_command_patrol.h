// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_command_patrol.h:7
class CDOTABehaviorCommandPatrol : public CDOTABehaviorCommandListener, IDOTABehaviorMoveTo {
public:

private:

	int m_nCurrentTargetIndex;  // +0x178
	int m_nDirection;  // +0x17c
	CDOTABehaviorCommandPatrol(CDOTABehaviorCommandPatrol &);
	CDOTABehaviorCommandPatrol(const CDOTABehaviorCommandPatrol &);
	CDOTABehaviorCommandPatrol(const Vector &);
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnContact(CDOTA_BaseNPC *, CBaseEntity *, CGameTrace *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnInvalidatePath(CDOTA_BaseNPC *);
	virtual const char * GetName();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();
	virtual ~CDOTABehaviorCommandPatrol();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[69] OnResume
	// vtable[73] OnContact
	// vtable[126] OnInvalidatePath
	// vtable[62] GetName
	// vtable[130] GetTargetPosition
	// vtable[131] DoesTargetMove
	// sizeof = 384
};
