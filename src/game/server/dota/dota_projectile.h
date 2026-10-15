// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_projectile.h:24
class CDOTA_TrackingProjectileInfo {
	int m_iMoveSpeed;  // +0x0
	EHANDLE m_hTarget;  // +0x10
	EHANDLE m_hVisionEntity;  // +0x2c
	EHANDLE m_hSourceEntity;  // +0x30
	bool m_bDodgeable;  // +0x34
	bool m_bIsAttack;  // +0x35
	bool m_bIsEvaded;  // +0x36

	float m_flExpireTime;  // +0x38
	float m_flMaxImpactTime;  // +0x3c
	CDOTA_TrackingProjectileInfo();

	// sizeof = 72
};

// src/game/server/dota/dota_projectile.h:55
class CDOTA_LinearProjectileInfo {
	float m_fRadius;  // +0x30
	float m_fRadiusDelta;  // +0x34
	float m_fDistance;  // +0x38
	int m_iUnitTargetTeam;  // +0x3c
	int m_iUnitTargetType;  // +0x40
	int m_iUnitTargetFlags;  // +0x44
	int m_iHandle;  // +0x48
	bool m_bMarkedForDeletion;  // +0x4c
	bool m_bFrontalCone;  // +0x4d
	bool m_bCheckStartPosition;  // +0x4e
	bool m_bVisibleToEnemies;  // +0x4f
	int m_iVisionTeamNumber;  // +0x50
	bool m_bSentToClients;  // +0x54
	bool m_bIgnoreSource;  // +0x55

	float m_fExpireTime;  // +0x58
	float m_fMaxSpeed;  // +0x5c
	EHANDLE m_hSource;  // +0x60
	EHANDLE m_hVisionEntity;  // +0x64

	CDOTA_LinearProjectileInfo();
	~CDOTA_LinearProjectileInfo();

	// sizeof = 144
};

// src/game/server/dota/dota_projectile.h:92
struct sTrackingProjectileCreateInfo {
	const char * pszEffectName;  // +0x0
	int iMoveSpeed;  // +0x18
	EHANDLE hSource;  // +0x1c
	EHANDLE hTarget;  // +0x20
	int iSourceAttachment;  // +0x30
	bool bProvidesVision;  // +0x34

	int iVisionTeamNumber;  // +0x38
	int iVisionRadius;  // +0x3c
	bool bDrawsOnMinimap;  // +0x40
	bool bDodgeable;  // +0x41
	bool bIsAttack;  // +0x42
	bool bVisibleToEnemies;  // +0x43
	bool bReplaceExisting;  // +0x44
	bool bServerOnly;  // +0x45

	float flExpireTime;  // +0x4c
	float flMaxImpactTime;  // +0x50

	sTrackingProjectileCreateInfo();

	// sizeof = 96
};

// src/game/server/dota/dota_projectile.h:149
struct sLinearProjectileCreateInfo {
	const char * pszEffectName;  // +0x0
	float fDistance;  // +0x34
	float fStartRadius;  // +0x38
	float fEndRadius;  // +0x3c
	bool bHasFrontalCone;  // +0x40
	bool bCheckStartPosition;  // +0x41

	EHANDLE hSource;  // +0x44
	int iUnitTargetTeam;  // +0x48
	int iUnitTargetType;  // +0x4c
	int iUnitTargetFlags;  // +0x50
	bool bProvidesVision;  // +0x54

	int iVisionTeamNumber;  // +0x58
	int iVisionRadius;  // +0x5c
	bool bDrawsOnMinimap;  // +0x60
	bool bVisibleToEnemies;  // +0x61
	bool bIgnoreSource;  // +0x62
	bool bStickyFoWReveal;  // +0x63
	float fExpireTime;  // +0x64
	float fMaxSpeed;  // +0x68

	sLinearProjectileCreateInfo();

	// sizeof = 120
};

// src/game/server/dota/dota_projectile.h:214
class CDOTA_ProjectileManager : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_iLinearProjectileRunningIndex;  // +0x48
	typedef CAutoGameSystem BaseClass;
	CDOTA_ProjectileManager(CDOTA_ProjectileManager &);
	CDOTA_ProjectileManager(const CDOTA_ProjectileManager &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDOTA_ProjectileManager *);
	CDOTA_ProjectileManager();
	virtual void GameInit(const EventGameInit_t &);
	virtual void FrameUpdatePostEntityThink(const EventServerPostEntityThink_t &);
	void CreateTrackingProjectile(const sTrackingProjectileCreateInfo &);
	void CreateTrackingProjectileFiltered(const sTrackingProjectileCreateInfo &);
	void ProjectileDodge(EHANDLE, bool);
	void RemoveTrackingProjectileFromAbility(CDOTABaseAbility *);
	int CreateLinearProjectile(const sLinearProjectileCreateInfo &);
	void DestroyLinearProjectile(int);
	void GetLinearProjectileLocation(int, Vector *);
	void GetLinearProjectileVelocity(int, Vector *);
	void GetLinearProjectileAcceleration(int, Vector *);
	float GetLinearProjectileRadius(int);
	EHANDLE GetLinearProjectileVisionEntity(int);
	void UpdateLinearProjectileSpeed(int, float);
	void UpdateLinearProjectileDirection(int, const Vector &, float);
	void UpdateLinearProjectileDestruction(int, bool);
	int GetNumLinearProjectiles();
	CDOTA_LinearProjectileInfo * GetLinearProjectileByIndex(int);
	void ClearHitList(int);
	void ResetRadiusValues(int, float, float);
	CDOTA_LinearProjectileInfo * GetLinearProjectileByHandle(int);
	void ChangeTrackingProjectileSpeed(CDOTABaseAbility *, int);
	void GetTrackingProjectilesWithAvoidance(CUtlVector<CDOTA_TrackingProjectileInfo*, CUtlMemory<CDOTA_TrackingProjectileInfo*, int> > &);
	void GetTrackingProjectilesOnTarget(EHANDLE, CUtlVector<CDOTA_TrackingProjectileInfo*, CUtlMemory<CDOTA_TrackingProjectileInfo*, int> > &);
	bool IsValidProjectile(int);
	void Script_CreateTrackingProjectile(HSCRIPT);
	int Script_CreateLinearProjectile(HSCRIPT);
	void Script_ProjectileDodge(HSCRIPT);
	Vector Script_GetLinearProjectileVelocity(int);

private:

	int GetTrackingProjectileIndexByAbility(CDOTABaseAbility *);
	void FinishTrackingProjectile(int);
	void InternalDestroyLinearProjectile(int);
	virtual ~CDOTA_ProjectileManager();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[25] FrameUpdatePostEntityThink
	// sizeof = 80
};
