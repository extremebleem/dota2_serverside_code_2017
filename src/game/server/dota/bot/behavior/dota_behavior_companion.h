// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_companion.h:6
class CDOTABehaviorCompanion : public Action<CDOTA_BaseNPC>, public IDOTABehaviorMoveTo {
public:

protected:

	EHANDLE m_goalEntity;  // +0x150
	int m_iRightOffset;  // +0x160
	int m_iForwardOffset;  // +0x164
	CDOTABehaviorCompanion(CDOTABehaviorCompanion &);
	CDOTABehaviorCompanion(const CDOTABehaviorCompanion &);
	CDOTABehaviorCompanion();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual const char * GetName();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();
	void RecalculateOffset();
	virtual ~CDOTABehaviorCompanion();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[69] OnResume
	// vtable[62] GetName
	// vtable[130] GetTargetPosition
	// vtable[131] DoesTargetMove
	// sizeof = 384
};

// src/game/server/dota/bot/behavior/dota_behavior_companion.h:35
class CDOTABehaviorCreatureCompanion : public CDOTABehaviorCompanion {
public:

	CDOTABehaviorCreatureCompanion(CDOTABehaviorCreatureCompanion &);
	CDOTABehaviorCreatureCompanion(const CDOTABehaviorCreatureCompanion &);
	CDOTABehaviorCreatureCompanion();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	void RecalculateOffset(bool);
	virtual ~CDOTABehaviorCreatureCompanion();

	// vtable[65] OnStart
	// vtable[66] Update
	// sizeof = 384
};

// src/game/server/dota/bot/behavior/dota_behavior_companion.h:51
class CDOTABehaviorPet : public CDOTABehaviorCompanion, public CGameEventListener {
public:

private:

	float m_flThreatLevel;  // +0x18c

	bool m_bHasVanished;  // +0x1c0

	float m_flLastInWater;  // +0x23c
	bool m_bReturnToBase;  // +0x24c

	bool m_bIsEmoting;  // +0x2b8

	Activity m_nEmoteActivity;  // +0x2d8
	EHANDLE m_tempGoalEntity;  // +0x2dc
	bool m_bFollowingTempGoal;  // +0x2e0

	int m_event_dota_illusions_created;  // +0x2e4
	CDOTABehaviorPet(CDOTABehaviorPet &);
	CDOTABehaviorPet(const CDOTABehaviorPet &);
	CDOTABehaviorPet();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnAnimationActivityComplete(CDOTA_BaseNPC *, int);
	bool Update_CheckForReturnToBase(CDOTA_BaseNPC *);
	void Update_CheckForLevelup(CDOTA_BaseNPC *);
	bool Update_CheckNeedsToVanish(CDOTA_BaseNPC *);
	void Update_CheckForCoopOpportunities(CDOTA_BaseNPC *);
	void Update_CheckForEmoteOpportunities(CDOTA_BaseNPC *);
	void Update_CoopTeleportReadiness(CDOTA_BaseNPC *);
	void Update_PerformCoopTeleport(CDOTA_BaseNPC *);
	void RecalculateTargetPosition(CDOTA_BaseNPC *, bool);
	void RecalculateThreat(CDOTA_BaseNPC *);
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	void Vanish(CDOTA_BaseNPC *);
	bool Reappear(CDOTA_BaseNPC *);
	void StartEmote(CDOTA_BaseNPC *, Activity, CDOTA_BaseNPC *, bool);
	void UpdateEmoting(CDOTA_BaseNPC *);
	void FinishEmote(CDOTA_BaseNPC *);
	CDOTA_BaseNPC_Hero * GetMyHero(bool);
	void UpdateTempGoalHero(CDOTA_BaseNPC *);
	virtual void FireGameEvent(IGameEvent *);
	virtual ~CDOTABehaviorPet();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[79] OnAnimationActivityComplete
	// vtable[130] GetTargetPosition
	// vtable[132] FireGameEvent
	// sizeof = 744
};
