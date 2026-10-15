// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_chase.h:6
class CDOTABehaviorChase : public Action<CDOTA_BaseNPC>, public IDOTABehaviorMoveTo {
public:

protected:

	EHANDLE m_hChaseEntity;  // +0x150
	bool m_bTargetMoves;  // +0x154

	float m_flFollowDistance[2];  // +0x158
	float m_flForwardDistance;  // +0x160
	float m_flRightDistance;  // +0x164
	CDOTABehaviorChase();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual const char * GetName();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();
	void RecalculateOffset();
	virtual ~CDOTABehaviorChase();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[69] OnResume
	// vtable[62] GetName
	// vtable[130] GetTargetPosition
	// vtable[131] DoesTargetMove
	// sizeof = 384
};
