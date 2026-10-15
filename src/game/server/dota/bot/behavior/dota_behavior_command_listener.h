// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_command_listener.h:7
class CDOTABehaviorCommandListener : public Action<CDOTA_BaseNPC> {
public:

	CDOTABehaviorCommandListener(CDOTABehaviorCommandListener &);
	CDOTABehaviorCommandListener(const CDOTABehaviorCommandListener &);
	CDOTABehaviorCommandListener();
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandMoveTo(CDOTA_BaseNPC *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandMoveToDirection(CDOTA_BaseNPC *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandMoveToAggressive(CDOTA_BaseNPC *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandPatrol(CDOTA_BaseNPC *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandApproach(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCommandAttack(CDOTA_BaseNPC *, CBaseEntity *, bool);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCastAbilityNoTarget(CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCastAbilityOnPosition(CDOTA_BaseNPC *, CDOTABaseAbility *, const Vector &);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnCastAbilityOnTarget(CDOTA_BaseNPC *, CDOTABaseAbility *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnDropItem(CDOTA_BaseNPC *, const Vector &, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnGiveItem(CDOTA_BaseNPC *, CBaseEntity *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnPickupItem(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnPickupRune(CDOTA_BaseNPC *, CBaseEntity *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnStop(CDOTA_BaseNPC *);
	virtual const char * GetName();
	virtual ~CDOTABehaviorCommandListener();

	// vtable[110] OnCommandMoveTo
	// vtable[111] OnCommandMoveToDirection
	// vtable[112] OnCommandMoveToAggressive
	// vtable[113] OnCommandPatrol
	// vtable[98] OnCommandApproach
	// vtable[114] OnCommandAttack
	// vtable[115] OnCastAbilityNoTarget
	// vtable[116] OnCastAbilityOnPosition
	// vtable[117] OnCastAbilityOnTarget
	// vtable[118] OnDropItem
	// vtable[119] OnGiveItem
	// vtable[120] OnPickupItem
	// vtable[121] OnPickupRune
	// vtable[122] OnStop
	// vtable[62] GetName
	// sizeof = 104
};
