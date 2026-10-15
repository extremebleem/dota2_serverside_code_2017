// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/imovehelper.h:53
class IMoveHelper {
	int ()() * * _vptr.IMoveHelper;  // +0x0
protected:

	static IMoveHelper * sm_pSingleton;
	IMoveHelper();
	IMoveHelper * GetSingleton();
	virtual const char * GetName(EntityHandle_t);
	virtual void SetHost(CBaseEntity *);
	virtual void ResetTouchList();
	virtual bool AddToTouched(const CGameTrace &, const Vector &);
	virtual void SetGroundNormal(const Vector &);
	virtual void ProcessImpacts();
	virtual void Con_NPrintf(int, const char *, ...);
	virtual void StartSound(const Vector &, int, const char *, float, soundlevel_t, int, int);
	virtual void StartSound(const Vector &, const char *);
	virtual void PlaybackEventFull(int, int, short unsigned int, float, Vector &, Vector &, float, float, int, int, int, int);
	virtual bool PlayerFallingDamage();
	virtual void PlayerSetAnimation(PLAYER_ANIM);
	virtual bool IsWorldEntity(const CBaseHandle &);
	void SetSingleton();
	virtual ~IMoveHelper();

	// vtable[0] GetName
	// vtable[1] SetHost
	// vtable[2] ResetTouchList
	// vtable[3] AddToTouched
	// vtable[4] SetGroundNormal
	// vtable[5] ProcessImpacts
	// vtable[6] Con_NPrintf
	// vtable[7] StartSound
	// vtable[8] StartSound
	// vtable[9] PlaybackEventFull
	// vtable[10] PlayerFallingDamage
	// vtable[11] PlayerSetAnimation
	// vtable[12] IsWorldEntity
	// sizeof = 8
};
