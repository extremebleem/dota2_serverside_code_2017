// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/bot/behavior/dota_behavior_move_to.h:7
class IDOTABehaviorMoveTo {
	int ()() * * _vptr.IDOTABehaviorMoveTo;  // +0x0
	~IDOTABehaviorMoveTo();
	IDOTABehaviorMoveTo(IDOTABehaviorMoveTo &);
	IDOTABehaviorMoveTo(const IDOTABehaviorMoveTo &);
	IDOTABehaviorMoveTo();
	virtual Vector GetTargetPosition(CDOTA_BaseNPC *);
	virtual bool DoesTargetMove();

	// vtable[0] GetTargetPosition
	// vtable[1] DoesTargetMove
	// sizeof = 8
};

// src/game/server/dota/bot/behavior/dota_behavior_move_to.h:18
class CDOTABehaviorMoveTo {
	int ()() * * _vptr.CDOTABehaviorMoveTo;  // +0x0
private:

	bool m_bSetAnimation;  // +0xd0
	bool m_bUseSwimAnimations;  // +0xd1

	Activity m_nRunActivity;  // +0xd4
	float m_flTargetDist;  // +0xd8
	bool m_bIsDirectional;  // +0xdc
	~CDOTABehaviorMoveTo();
	CDOTABehaviorMoveTo(CDOTABehaviorMoveTo &);
	CDOTABehaviorMoveTo(const CDOTABehaviorMoveTo &);
	CDOTABehaviorMoveTo();
	void OnStart();
	void Update(IDOTABehaviorMoveTo *, CDOTA_BaseNPC *, float);
	void OnResume();
	void OnContact(CDOTA_BaseNPC *, CBaseEntity *);
	bool IsPathEndReached(CDOTA_BaseNPC *);
	bool IsPathCurrentlyExhausted(CDOTA_BaseNPC *);
	bool IsPathValid();
	Vector GetFurthestPathPoint();
	void InvalidatePath();
	void ShouldSetAnimation(bool);
	void ShouldUseSwimAnimations(bool);
	void SetRunActivityTo(Activity);
	bool IsInWater(CDOTA_BaseNPC *);
	virtual const char * GetName();
	void SetTargetDistance(float);
	void SetDirectionalMove(bool);

	// vtable[0] GetName
	// sizeof = 224
};
