// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_idle.h:9
class CDOTABehaviorIdle : public CDOTABehaviorCommandListener {
public:

protected:

	CDOTABehaviorIdle(CDOTABehaviorIdle &);
	CDOTABehaviorIdle(const CDOTABehaviorIdle &);
	CDOTABehaviorIdle();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual void OnEnd(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnAnimationActivityComplete(CDOTA_BaseNPC *, int);
	virtual const char * GetName();
	virtual Activity GetIdleActivity(CDOTA_BaseNPC *);
	virtual void MaintainIdleActivity(CDOTA_BaseNPC *);
	ActionResult<CDOTA_BaseNPC> OnStartInternal(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ~CDOTABehaviorIdle();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[69] OnResume
	// vtable[67] OnEnd
	// vtable[79] OnAnimationActivityComplete
	// vtable[62] GetName
	// vtable[130] GetIdleActivity
	// vtable[131] MaintainIdleActivity
	// sizeof = 128
};

// src/game/server/dota/bot/behavior/dota_behavior_idle.h:33
class CDOTABehaviorTutorialIdle : public CDOTABehaviorIdle {
public:

	CDOTABehaviorTutorialIdle(CDOTABehaviorTutorialIdle &);
	CDOTABehaviorTutorialIdle(const CDOTABehaviorTutorialIdle &);
	CDOTABehaviorTutorialIdle();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual ActionResult<CDOTA_BaseNPC> OnSuspend(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnAnimationActivityComplete(CDOTA_BaseNPC *, int);
	virtual ActionResult<CDOTA_BaseNPC> OnResume(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual Activity GetIdleActivity(CDOTA_BaseNPC *);
	virtual void MaintainIdleActivity(CDOTA_BaseNPC *);
	virtual ~CDOTABehaviorTutorialIdle();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[68] OnSuspend
	// vtable[79] OnAnimationActivityComplete
	// vtable[69] OnResume
	// vtable[130] GetIdleActivity
	// vtable[131] MaintainIdleActivity
	// sizeof = 128
};

// src/game/server/dota/bot/behavior/dota_behavior_idle.h:49
class CDOTABehaviorTutorialVictory : public Action<CDOTA_BaseNPC> {
public:

private:

	CDOTABehaviorTutorialVictory(CDOTABehaviorTutorialVictory &);
	CDOTABehaviorTutorialVictory(const CDOTABehaviorTutorialVictory &);
	CDOTABehaviorTutorialVictory();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual const char * GetName();
	virtual ~CDOTABehaviorTutorialVictory();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[62] GetName
	// sizeof = 152
};

// src/game/server/dota/bot/behavior/dota_behavior_idle.h:65
class CDOTABehaviorRoquelaireIdle : public CDOTABehaviorTutorialIdle {
public:

	CDOTABehaviorRoquelaireIdle(CDOTABehaviorRoquelaireIdle &);
	CDOTABehaviorRoquelaireIdle(const CDOTABehaviorRoquelaireIdle &);
	CDOTABehaviorRoquelaireIdle();
	virtual ActionResult<CDOTA_BaseNPC> OnStart(CDOTA_BaseNPC *, Action<CDOTA_BaseNPC> *);
	virtual ActionResult<CDOTA_BaseNPC> Update(CDOTA_BaseNPC *, float);
	virtual EventDesiredResult<CDOTA_BaseNPC> OnAnimationActivityComplete(CDOTA_BaseNPC *, int);
	virtual Activity GetIdleActivity(CDOTA_BaseNPC *);
	virtual ~CDOTABehaviorRoquelaireIdle();

	// vtable[65] OnStart
	// vtable[66] Update
	// vtable[79] OnAnimationActivityComplete
	// vtable[130] GetIdleActivity
	// sizeof = 128
};
