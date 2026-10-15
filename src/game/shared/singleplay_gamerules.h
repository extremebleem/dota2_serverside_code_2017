// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/singleplay_gamerules.h:28
class CSingleplayRules : public CGameRules, public CMemZeroOnNew {
public:

	CSingleplayRules(const CSingleplayRules &);
	virtual bool IsMultiplayer();
	virtual bool Damage_IsTimeBased(int);
	virtual bool Damage_ShouldGibCorpse(int);
	virtual bool Damage_ShowOnHUD(int);
	virtual bool Damage_NoPhysicsForce(int);
	virtual bool Damage_ShouldNotBleed(int);
	virtual int Damage_GetTimeBased();
	virtual int Damage_GetShouldGibCorpse();
	virtual int Damage_GetShowOnHud();
	virtual int Damage_GetNoPhysicsForce();
	virtual int Damage_GetShouldNotBleed();
	virtual void PostSpawnGroupLoad(const EventPostSpawnGroupLoad_t &);
	virtual void PreSpawnGroupUnload(const EventPreSpawnGroupUnload_t &);
	CSingleplayRules();
	virtual ~CSingleplayRules();
	virtual void Think();
	virtual bool IsAllowedToSpawn(CBaseEntity *);
	virtual bool FAllowFlashlight();
	virtual bool FShouldSwitchWeapon(CBasePlayer *, CBaseCombatWeapon *);
	virtual CBaseCombatWeapon * GetNextBestWeapon(CBaseCombatCharacter *, CBaseCombatWeapon *);
	virtual bool SwitchToNextBestWeapon(CBaseCombatCharacter *, CBaseCombatWeapon *);
	virtual bool IsDeathmatch();
	virtual bool IsCoOp();
	virtual bool ClientConnected(CEntityIndex, const char *, const char *, char *, int);
	virtual void InitHUD(CBasePlayer *);
	virtual void ClientDisconnected(CEntityIndex, ENetworkDisconnectionReason);
	virtual float FlPlayerFallDamage(CBasePlayer *);
	virtual bool AllowDamage(CBaseEntity *, const CTakeDamageInfo &);
	virtual void PlayerSpawn(CBasePlayer *);
	virtual bool FPlayerCanRespawn(CBasePlayer *);
	virtual float FlPlayerSpawnTime(CBasePlayer *);
	virtual bool AllowAutoTargetCrosshair();
	virtual int GetAutoAimMode();
	virtual int IPointsForKill(CBasePlayer *, CBasePlayer *);
	virtual void PlayerKilled(CBasePlayer *, const CTakeDamageInfo &);
	virtual void DeathNotice(CBasePlayer *, const CTakeDamageInfo &);
	virtual int WeaponShouldRespawn(CBaseCombatWeapon *);
	virtual float FlWeaponRespawnTime(CBaseCombatWeapon *);
	virtual float FlWeaponTryRespawn(CBaseCombatWeapon *);
	virtual Vector VecWeaponRespawnSpot(CBaseCombatWeapon *);
	virtual bool CanHaveItem(CBasePlayer *, CItem *);
	virtual void PlayerGotItem(CBasePlayer *, CItem *);
	virtual int ItemShouldRespawn(CItem *);
	virtual float FlItemRespawnTime(CItem *);
	virtual Vector VecItemRespawnSpot(CItem *);
	virtual QAngle VecItemRespawnAngles(CItem *);
	virtual void PlayerGotAmmo(CBaseCombatCharacter *, char *, int);
	virtual float FlHealthChargerRechargeTime();
	virtual int DeadPlayerWeapons(CBasePlayer *);
	virtual int DeadPlayerAmmo(CBasePlayer *);
	virtual bool FAllowNPCs();
	virtual int PlayerRelationship(CBaseEntity *, CBaseEntity *);
	virtual bool PlayerCanHearChat(CBasePlayer *, CBasePlayer *, int);

	// vtable[39] IsMultiplayer
	// vtable[22] Damage_IsTimeBased
	// vtable[23] Damage_ShouldGibCorpse
	// vtable[24] Damage_ShowOnHUD
	// vtable[25] Damage_NoPhysicsForce
	// vtable[26] Damage_ShouldNotBleed
	// vtable[27] Damage_GetTimeBased
	// vtable[28] Damage_GetShouldGibCorpse
	// vtable[29] Damage_GetShowOnHud
	// vtable[30] Damage_GetNoPhysicsForce
	// vtable[31] Damage_GetShouldNotBleed
	// vtable[7] PostSpawnGroupLoad
	// vtable[8] PreSpawnGroupUnload
	// vtable[50] Think
	// vtable[51] IsAllowedToSpawn
	// vtable[57] FAllowFlashlight
	// vtable[58] FShouldSwitchWeapon
	// vtable[33] GetNextBestWeapon
	// vtable[32] SwitchToNextBestWeapon
	// vtable[59] IsDeathmatch
	// vtable[61] IsCoOp
	// vtable[63] ClientConnected
	// vtable[64] InitHUD
	// vtable[65] ClientDisconnected
	// vtable[67] FlPlayerFallDamage
	// vtable[75] AllowDamage
	// vtable[76] PlayerSpawn
	// vtable[78] FPlayerCanRespawn
	// vtable[79] FlPlayerSpawnTime
	// vtable[82] AllowAutoTargetCrosshair
	// vtable[71] GetAutoAimMode
	// vtable[85] IPointsForKill
	// vtable[86] PlayerKilled
	// vtable[87] DeathNotice
	// vtable[92] WeaponShouldRespawn
	// vtable[93] FlWeaponRespawnTime
	// vtable[94] FlWeaponTryRespawn
	// vtable[95] VecWeaponRespawnSpot
	// vtable[96] CanHaveItem
	// vtable[97] PlayerGotItem
	// vtable[98] ItemShouldRespawn
	// vtable[99] FlItemRespawnTime
	// vtable[100] VecItemRespawnSpot
	// vtable[101] VecItemRespawnAngles
	// vtable[104] PlayerGotAmmo
	// vtable[110] FlHealthChargerRechargeTime
	// vtable[112] DeadPlayerWeapons
	// vtable[113] DeadPlayerAmmo
	// vtable[127] FAllowNPCs
	// vtable[114] PlayerRelationship
	// vtable[115] PlayerCanHearChat
	// sizeof = 144
};
