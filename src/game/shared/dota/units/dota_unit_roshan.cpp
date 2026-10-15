// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_roshan.cpp:387
class C_CDOTA_RoshanSpawner_MapInstall {
	C_CDOTA_RoshanSpawner_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:400
class CDOTA_Unit_Roshan : public CDOTA_BaseNPC_Additive {
public:

private:

	int m_iLastHealthPercent;  // +0x1198
	int m_nFXIndex;  // +0x119c
	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Unit_Roshan(CDOTA_Unit_Roshan &);
	CDOTA_Unit_Roshan(CDOTA_Unit_Roshan &);
	CDOTA_Unit_Roshan();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnDying();
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool IsRoshan();
	virtual int GetDeathXP();
	virtual void UnitThink();
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual int OnTakeDamage_Alive(const CTakeDamageInfo &);
	void UpdateMaxHealth();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual ~CDOTA_Unit_Roshan();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[469] OnDying
	// vtable[8] Spawn
	// vtable[403] IsRoshan
	// vtable[409] GetDeathXP
	// vtable[385] UnitThink
	// vtable[92] Event_Killed
	// vtable[319] OnTakeDamage_Alive
	// vtable[65] ShouldTransmit
	// sizeof = 4536
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:431
class C_CDOTA_Unit_Roshan_MapInstall {
	C_CDOTA_Unit_Roshan_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:688
class CDOTA_Ability_Roshan_SpellBlock : public CDOTABaseAbility {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Ability_Roshan_SpellBlock(CDOTA_Ability_Roshan_SpellBlock &);
	CDOTA_Ability_Roshan_SpellBlock(CDOTA_Ability_Roshan_SpellBlock &);
	CDOTA_Ability_Roshan_SpellBlock();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Roshan_SpellBlock();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:702
class CDOTA_Modifier_Roshan_SpellBlock : public CDOTA_Buff {
public:

	CDOTA_Modifier_Roshan_SpellBlock();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetAbsorbSpell(const CModifierParams &);
	virtual ~CDOTA_Modifier_Roshan_SpellBlock();

	// vtable[65] DeclareFunctions
	// vtable[89] GetAbsorbSpell
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:747
class CDOTA_Ability_Roshan_Bash : public CDOTABaseAbility {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Ability_Roshan_Bash(CDOTA_Ability_Roshan_Bash &);
	CDOTA_Ability_Roshan_Bash(CDOTA_Ability_Roshan_Bash &);
	CDOTA_Ability_Roshan_Bash();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Roshan_Bash();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:761
class CDOTA_Modifier_Roshan_Bash : public CDOTA_Buff {
public:

private:

	int bash_chance;  // +0xba8
	int bonus_damage;  // +0xbac
	float stun_duration;  // +0xbb0
	CDOTA_Modifier_Roshan_Bash();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierProcAttack_BonusDamage_Physical(const CModifierParams &);
	virtual ~CDOTA_Modifier_Roshan_Bash();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierProcAttack_BonusDamage_Physical
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:830
class CDOTA_Ability_Roshan_Slam : public CDOTABaseAbility {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Ability_Roshan_Slam(CDOTA_Ability_Roshan_Slam &);
	CDOTA_Ability_Roshan_Slam(CDOTA_Ability_Roshan_Slam &);
	CDOTA_Ability_Roshan_Slam();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual bool ShouldNeutralCast();
	virtual int GetNeutralCastType();
	virtual ~CDOTA_Ability_Roshan_Slam();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[311] ShouldNeutralCast
	// vtable[312] GetNeutralCastType
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:905
class CDOTA_Modifier_Roshan_Slam : public CDOTA_Buff {
public:

private:

	int slow_amount;  // +0xba8
	CDOTA_Modifier_Roshan_Slam();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Roshan_Slam();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:957
class CDOTA_Ability_Roshan_InherentBuffs : public CDOTABaseAbility {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Ability_Roshan_InherentBuffs(CDOTA_Ability_Roshan_InherentBuffs &);
	CDOTA_Ability_Roshan_InherentBuffs(CDOTA_Ability_Roshan_InherentBuffs &);
	CDOTA_Ability_Roshan_InherentBuffs();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Roshan_InherentBuffs();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:971
class CDOTA_Modifier_Roshan_InherentBuffs : public CDOTA_Buff {
public:

	CDOTA_Modifier_Roshan_InherentBuffs();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierTranslateActivityModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_Roshan_InherentBuffs();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttacked
	// vtable[90] GetModifierPreAttack_BonusDamage
	// vtable[91] GetModifierTranslateActivityModifiers
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:1053
class CDOTA_Ability_Roshan_Devotion : public CDOTABaseAbility {
public:

private:

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CDOTA_Ability_Roshan_Devotion(CDOTA_Ability_Roshan_Devotion &);
	CDOTA_Ability_Roshan_Devotion(CDOTA_Ability_Roshan_Devotion &);
	CDOTA_Ability_Roshan_Devotion();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Roshan_Devotion();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:1067
class CDOTA_Modifier_Roshan_DevotionAura : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Roshan_DevotionAura();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Roshan_DevotionAura();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_roshan.cpp:1106
class CDOTA_Modifier_Roshan_Devotion : public CDOTA_Buff {
public:

	CDOTA_Modifier_Roshan_Devotion();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Roshan_Devotion();

	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPhysicalArmorBonus
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetRoshanSpawner  (line 59, @0x0000000002afabb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CDOTA_RoshanSpawner*, operator CEntityInstance*
// callers: Script_GetRoshanKillTime, CDOTAHeroList::GiveTeamGoldReward, CDOTAGCServerSystem::SendScoreboardUpdate, CDOTA_Modifier_MonkeyKing_Transform::OnCreated
// globals: s_hRoshanSpawner, CEntityHandle::gm_pEntityList
CDOTA_RoshanSpawner *__cdecl GetRoshanSpawner()
{
  CDOTA_RoshanSpawner *result; // rax
  CEntityIdentity *v1; // rcx
  CEntityIdentity *v2; // rcx

  result = 0;
  if ( s_hRoshanSpawner.m_Index + 2 > 1 )
  {
    v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(s_hRoshanSpawner.m_Index) >> 9) & 0x3F];
    if ( v1 != 0 )
    {
      v2 = &v1[s_hRoshanSpawner.m_Index & 0x1FF];
      if ( v2 != 0 && s_hRoshanSpawner.m_Index == v2->m_EHandle.m_Index )
        return v2->m_pInstance;
    }
  }
  return result;
}


// SaveRoshanInformation  (line 65, @0x0000000002afac10, libserver.so)  // inlines: SetBool
// calls: KeyValues::CreateNewKey, KeyValues::SetName, CGameEntitySystem::FindEntityByClassname, KeyValues::SetInt, KeyValues::SetFloat
// callers: PerformDOTASaveGame
// strings: "npc_dota_roshan_spawner", "roshan_alive", "roshan_killtime", "roshan_respawntime", "roshan_kills"
void __fastcall SaveRoshanInformation(KeyValues *pKV)
{
  KeyValues *NewKey; // rbx
  CBaseEntity *EntityByClassname; // rax
  CBaseEntity *v3; // r12
  float v4; // xmm1_4
  float v5; // xmm1_4

  NewKey = KeyValues::CreateNewKey(pKV);
  KeyValues::SetName(NewKey, "Roshan");
  EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "npc_dota_roshan_spawner");
  v3 = EntityByClassname;
  if ( EntityByClassname != 0 )
  {
    KeyValues::SetInt(NewKey, "roshan_alive", LOBYTE(EntityByClassname[1]._vptr_IHandleEntity));
    KeyValues::SetFloat(NewKey, "roshan_killtime", v4);
    KeyValues::SetFloat(NewKey, "roshan_respawntime", v5);
    KeyValues::SetInt(NewKey, "roshan_kills", v3[1].m_iszPrivateVScripts.u.m_Id);
  }
}


// LoadRoshanInformation  (line 82, @0x0000000002afacc0, libserver.so)  // inlines: GetBool, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: KeyValues::FindKey, CGameEntitySystem::FindEntityByClassname, KeyValues::GetInt, KeyValues::GetFloat
// callers: PerformDOTALoadGame
// strings: "npc_dota_roshan_spawner", "roshan_alive", "roshan_killtime", "roshan_respawntime", "roshan_kills", "npc_dota_roshan"
void __fastcall LoadRoshanInformation(KeyValues *pKV)
{
  KeyValues *Key; // r12
  CBaseEntity *EntityByClassname; // rbx
  float v3; // xmm1_4
  float v4; // xmm1_4
  int Int; // eax
  CGameEntitySystem *v6; // rdi
  CBaseEntity *v7; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx

  Key = KeyValues::FindKey(pKV, "Roshan", 0);
  EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, "npc_dota_roshan_spawner");
  if ( EntityByClassname != 0 )
  {
    LOBYTE(EntityByClassname[1]._vptr_IHandleEntity) = KeyValues::GetInt(Key, "roshan_alive", 0) != 0;
    *&EntityByClassname[1].m_pEntity = KeyValues::GetFloat(Key, "roshan_killtime", v3);
    *(&EntityByClassname[1].m_hPrivateScope.m_hScope + 1) = KeyValues::GetFloat(Key, "roshan_respawntime", v4);
    Int = KeyValues::GetInt(Key, "roshan_kills", 0);
    v6 = g_pGameEntitySystem;
    LODWORD(EntityByClassname[1].m_iszPrivateVScripts.u.m_Id) = Int;
    v7 = CGameEntitySystem::FindEntityByClassname(v6, 0, "npc_dota_roshan");
    if ( v7 != 0 && (m_pEntity = v7->m_pEntity) != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v10 = 0x7FFF;
      else
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      WORD2(EntityByClassname[1]._vptr_IHandleEntity) = v10 | WORD2(EntityByClassname[1]._vptr_IHandleEntity) & 0x8000;
      HIDWORD(EntityByClassname[1]._vptr_IHandleEntity) = (v9 << 15)
                                                        | HIDWORD(EntityByClassname[1]._vptr_IHandleEntity) & 0x7FFF;
    }
    else
    {
      HIDWORD(EntityByClassname[1]._vptr_IHandleEntity) = -1;
    }
  }
}


// CDOTA_RoshanSpawner::Spawn  (line 101, @0x0000000002aef970, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, curtime, operator=
// calls: CBaseEntity::ThinkSet, CPointEntity::Spawn
// globals: s_hRoshanSpawner
void __fastcall CDOTA_RoshanSpawner::Spawn(CDOTA_RoshanSpawner *const this, const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // rax
  int v5; // edx
  __int16 v6; // cx
  CGlobalVars *v7; // r13
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  float v9; // xmm0_4

  this->m_bIsRoshanAlive = 0;
  m_pEntity = this->m_pEntity;
  this->m_fRoshanKillTime = 0.0;
  this->m_nSentRoshReclaim = 0;
  this->m_nSentRoshRespawn = 0;
  this->m_fRoshanRespawnDuration = 0.0;
  this->m_bSpawnRequested = 0;
  this->m_iSpawnCount = 0;
  this->m_nFXIndex = -1;
  if ( m_pEntity == 0 )
  {
    s_hRoshanSpawner.m_Index = -1;
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
      goto LABEL_5;
LABEL_13:
    v9 = 0.1;
    goto LABEL_10;
  }
  v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v6 = 0x7FFF;
  else
    v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(s_hRoshanSpawner.m_Index) = v6 | s_hRoshanSpawner.m_Index & 0x8000;
  s_hRoshanSpawner.m_Index = (v5 << 15) | s_hRoshanSpawner.m_Index & 0x7FFF;
  v7 = gpGlobals;
  if ( gpGlobals == 0 )
    goto LABEL_13;
LABEL_5:
  if ( !v7->m_bEnableAssertions && !v7->m_bInSimulation )
  {
    m_pfnWarningFunc = v7->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  v9 = v7->m_flCurrentTime + 0.1;
LABEL_10:
  CBaseEntity::ThinkSet(this, 0x679uLL, v9, 1073299166, 0);
  CPointEntity::Spawn(this, pKeyValues);
}


// CDOTA_RoshanSpawner::GetRoshanSpawnCount  (line 116, @0x0000000002afae10, libserver.so)
// callers: CDOTA_Modifier_MonkeyKing_Transform::OnCreated
int __fastcall CDOTA_RoshanSpawner::GetRoshanSpawnCount(CDOTA_RoshanSpawner *const this)
{
  return this->m_iSpawnCount;
}


// CDOTA_RoshanSpawner::GetRoshanRespawnTimeSeconds  (line 121, @0x0000000002afae20, libserver.so)  // inlines: DOTAGameRules, State_Get, State_IsBefore, State_IsBeforePreGame, State_Order
// callers: CDOTAGCServerSystem::SendScoreboardUpdate
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
float __fastcall CDOTA_RoshanSpawner::GetRoshanRespawnTimeSeconds(CDOTA_RoshanSpawner *const this)
{
  int v1; // ecx
  __int64 v2; // rdx
  float result; // xmm0_4

  if ( this->m_bIsRoshanAlive )
    return 0.0;
  v1 = 0;
  v2 = *&g_pGameRules[6].m_szQuestName[28];
  if ( v2 <= 0xA )
    v1 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v2];
  if ( dword_491AD10 > v1 )
    return 0.0;
  result = 0.0;
  if ( (this->m_fRoshanRespawnDuration - (*&g_pGameRules[18].m_szQuestName[20] - this->m_fRoshanKillTime)) >= 0.0 )
    return this->m_fRoshanRespawnDuration - (*&g_pGameRules[18].m_szQuestName[20] - this->m_fRoshanKillTime);
  return result;
}


// CDOTA_RoshanSpawner::FindAegis  (line 136, @0x0000000002b12c00, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<CBaseEntity*>, Element, FStrEq, Get, GetAbilityName, GetContainedItem, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, _V_strcmp, operator CDOTA_Item*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGameEntitySystem::FindEntityByClassname, __dynamic_cast, UTIL_Remove, CUtlMemory<CBaseEntity*, int>::Purge, CUtlMemory<CBaseEntity*, int>::Grow, CUtlVectorBase<CBaseEntity*, CUtlMemoryFixedGrowable<CBaseEntity*, 128ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_RoshanSpawner::OnRoshanSpawnCompletion, CDOTA_RoshanSpawner::RoshanThink
// strings: "dota_item_drop"
// globals: CEntityHandle::gm_pEntityList
CDOTA_Item *__fastcall CDOTA_RoshanSpawner::FindAegis(CDOTA_RoshanSpawner *const this, bool bRemove)
{
  CBaseEntity *v3; // rbx
  CBaseEntity *EntityByClassname; // rax
  vec_t x; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  char **m_Id; // rax
  char *v9; // rsi
  int m_Size; // eax
  CBaseEntity **v11; // rax
  CBaseEntity *v12; // rax
  CDOTA_Item *m_pInstance; // r13
  __int64 v14; // r14
  int v15; // eax
  CBaseEntity **v16; // rax
  unsigned __int64 v17; // rbx
  uint32 v18; // edx
  int v20; // [rsp+10h] [rbp-460h]
  CUtlVectorFixedGrowable<CBaseEntity*,128ul> entitiesToRemove; // [rsp+20h] [rbp-450h] BYREF
  unsigned __int64 v22; // [rsp+438h] [rbp-38h]

  v3 = 0;
  entitiesToRemove.m_Size = 0;
  v22 = __readfsqword(0x28u);
  entitiesToRemove.m_Memory.m_pMemory = &entitiesToRemove.m_Memory.m_FixedMemory;
  entitiesToRemove.m_Memory.m_nAllocationCount = 128;
  entitiesToRemove.m_Memory.m_nGrowSize = 0x80000000;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v3, "dota_item_drop");
    v3 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    x = EntityByClassname[1].m_vecVelocity.m_Value.x;
    if ( (LODWORD(x) + 2) > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3[1].m_vecVelocity.m_Value.x) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[LOWORD(v3[1].m_vecVelocity.m_Value.x) & 0x1FF];
        if ( v7 != 0 && LODWORD(x) == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
        {
          m_Id = v7->m_pInstance[18].m_iszPrivateVScripts.u.m_Id;
          if ( m_Id != 0 )
          {
            v9 = *m_Id;
            if ( *m_Id != 0 && (v9 == "item_aegis" || strcmp(v9, "item_aegis") == 0) )
            {
              if ( !bRemove )
              {
                m_pInstance = v7->m_pInstance;
                goto LABEL_28;
              }
              m_Size = entitiesToRemove.m_Size;
              v20 = entitiesToRemove.m_Size;
              if ( entitiesToRemove.m_Size == entitiesToRemove.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CBaseEntity *,int>::Grow(&entitiesToRemove.m_Memory, 1);
                m_Size = entitiesToRemove.m_Size;
              }
              entitiesToRemove.m_Size = m_Size + 1;
              v11 = &entitiesToRemove.m_Memory.m_pMemory[v20];
              if ( v11 != 0 )
                *v11 = v3;
            }
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v12 = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v3, "item_aegis");
    v3 = v12;
    if ( v12 == 0 )
      break;
    m_pInstance = __dynamic_cast(v12, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Item, 0);
    if ( m_pInstance != 0 )
    {
      if ( !bRemove )
        goto LABEL_28;
      v14 = entitiesToRemove.m_Size;
      v15 = entitiesToRemove.m_Size;
      if ( entitiesToRemove.m_Size == entitiesToRemove.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CBaseEntity *,int>::Grow(&entitiesToRemove.m_Memory, 1);
        v15 = entitiesToRemove.m_Size;
      }
      entitiesToRemove.m_Size = v15 + 1;
      v16 = &entitiesToRemove.m_Memory.m_pMemory[v14];
      if ( v16 != 0 )
        *v16 = m_pInstance;
    }
  }
  if ( entitiesToRemove.m_Size > 0 )
  {
    v17 = 0;
    do
    {
      UTIL_Remove(entitiesToRemove.m_Memory.m_pMemory[v17 / 8]);
      v17 += 8LL;
    }
    while ( v17 != 8LL * (entitiesToRemove.m_Size - 1) + 8 );
  }
  m_pInstance = 0;
LABEL_28:
  v18 = entitiesToRemove.m_Memory.m_nGrowSize & 0xC0000000;
  if ( entitiesToRemove.m_Memory.m_nAllocationCount < 0
    || entitiesToRemove.m_Memory.m_pMemory == &entitiesToRemove.m_Memory.m_FixedMemory )
  {
    if ( v18 == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(&entitiesToRemove.m_Memory);
  }
  else if ( entitiesToRemove.m_Memory.m_pMemory != 0 && v18 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return m_pInstance;
}


// dota_respawn_roshan  (line 178, @0x0000000002af0320, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetRoshanSpawner, IndexToIdentity, IsValid, LookupEntity, operator CDOTA_RoshanSpawner*, operator CEntityInstance*
// globals: s_hRoshanSpawner, CEntityHandle::gm_pEntityList
void __fastcall dota_respawn_roshan(const CCommandContext *const ctx, const CCommand *const args)
{
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  if ( s_hRoshanSpawner.m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(s_hRoshanSpawner.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[s_hRoshanSpawner.m_Index & 0x1FF];
      if ( v3 != 0 && s_hRoshanSpawner.m_Index == v3->m_EHandle.m_Index && v3->m_pInstance != 0 )
        LODWORD(v3->m_pInstance[16].m_hPrivateScope.m_hScope) = 0;
    }
  }
}


// CDOTA_RoshanSpawner::OnRoshanSpawnCompletion  (line 187, @0x0000000002b12f40, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, entindex, operator=
// calls: CEntityInstance::GetEntityIndex, CreateUnitEvent, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CBaseEntity::GetAbsAngles, RandomFloat, CBaseEntity::SetAbsAngles, CDOTA_RoshanSpawner::FindAegis, CDOTA_BaseNPC::AddItem, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTAGamerules::SetRoshanSpawnPhase
// strings: "item_cheese"
void __fastcall CDOTA_RoshanSpawner::OnRoshanSpawnCompletion(
        CDOTA_RoshanSpawner *const this,
        CDOTA_BaseNPC *pRoshan,
        const CEntityKeyValues *pKeyValues)
{
  CEntityIndex v5; // eax
  CEntityIdentity *m_pEntity; // rax
  int v7; // edx
  __int16 v8; // cx
  double v9; // xmm1_8
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  QAngle ang; // [rsp+0h] [rbp-20h] BYREF
  Vector v13; // 0:xmm0_8.8,8:xmm1_4.4

  if ( pRoshan != 0 )
  {
    v5.m_Data = CEntityInstance::GetEntityIndex(pRoshan).m_Data;
    CreateUnitEvent(v5, 0, 40, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_ROSHAN_SPAWN);
    ++this->m_iSpawnCount;
    (*(pRoshan->_vptr_IHandleEntity + 70))(pRoshan, 4);
    v13 = *CBaseEntity::GetAbsOrigin(this);
    FindClearSpaceForUnit(pRoshan, v13, 1);
    ang = *CBaseEntity::GetAbsAngles(this);
    ang.y = RandomFloat(-15.0, 15.0) + ang.y;
    CBaseEntity::SetAbsAngles(pRoshan, &ang);
    this->m_bIsRoshanAlive = 1;
    this->m_bSpawnRequested = 0;
    m_pEntity = pRoshan->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hRoshan.m_Index) = v8 | this->m_hRoshan.m_Index & 0x8000;
      this->m_hRoshan.m_Index = (v7 << 15) | this->m_hRoshan.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hRoshan.m_Index = -1;
    }
    this->m_nSentRoshReclaim = 0;
    this->m_nSentRoshRespawn = 0;
    CDOTA_RoshanSpawner::FindAegis(this, 1);
    CDOTA_BaseNPC::AddItem(pRoshan, "item_aegis", 1, -1, 0);
    if ( this->m_iSpawnCount > 2 )
      CDOTA_BaseNPC::AddItem(pRoshan, "item_cheese", 1, -1, 0);
    m_nFXIndex = this->m_nFXIndex;
    if ( m_nFXIndex != -1 )
    {
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
      this->m_nFXIndex = -1;
    }
    CDOTAGamerules::SetRoshanSpawnPhase(g_pGameRules, ERoshanSpawnPhase::ROSHAN_SPAWN_PHASE_ALIVE, 0.0, v9);
  }
}


// CDOTA_RoshanSpawner::RoshanThink  (line 234, @0x0000000002b13120, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_SendRoshanPopup_t, CDotaNPCSpawnerContext, CEntitySpawnerContext, CEntitySpawnerContextBase, CNetMessagePB, CReliableBroadcastRecipientFilter, CUserMessagePB, CUtlDelegate, CUtlDelegate<CDOTA_RoshanSpawner, CDOTA_RoshanSpawner>, Convert<CDOTA_RoshanSpawner, void (CDOTA_RoshanSpawner::*)(CDOTA_BaseNPC*, const CEntityKeyValues*), void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void> >, DOTAGameRules, FastDelegate2, FastDelegate2<CDOTA_RoshanSpawner, CDOTA_RoshanSpawner>, FindGameEvent<CDOTAUserMsg_SendRoshanPopup_t>, FindOrCreateGameEvent<CDOTAUserMsg_SendRoshanPopup_t>, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, PostEvent<CDOTAUserMsg_SendRoshanPopup_t>, SendUserMessage<CDOTAUserMsg_SendRoshanPopup_t>, Set, SetBool, SetMementoFrom, State_Get, State_HasGameplayStarted, State_Order, UtlMakeDelegate<CDOTA_RoshanSpawner, CDOTA_RoshanSpawner, CDOTA_BaseNPC*, const CEntityKeyValues*, void>, Vector, bindmemfunc<CDOTA_RoshanSpawner, void (CDOTA_RoshanSpawner::*)(CDOTA_BaseNPC*, const CEntityKeyValues*)>, curtime, operator CEntityInstance*, operator=, operator==<CBaseEntity>, set_gametime, set_has_gametime, set_has_reclaimed, set_reclaimed, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_SendRoshanPopup_t, ~CDotaNPCSpawnerContext, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CNetMessagePB, ~CReliableBroadcastRecipientFilter, ~CTeamRecipientFilter, ~CUserMessagePB
// calls: CDOTAGamerules::SetRoshanSpawnPhase, CDOTA_RoshanSpawner::FindAegis, __dynamic_cast, CDOTA_Item_Aegis::GetReclaimTime, CTeamRecipientFilter::CTeamRecipientFilter, CDOTAUserMsg_SendRoshanPopup::CDOTAUserMsg_SendRoshanPopup, CDOTAUserMsg_SendRoshanPopup::~CDOTAUserMsg_SendRoshanPopup, CRecipientFilter::~CRecipientFilter, RandomInt, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable (29 total)
// strings: "particles/neutral_fx/roshan_timer.vpcf", "npc_dota_roshan"
// globals: DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendRoshanPopup_t>(bool)::s_hEvent, CEntityHandle::gm_pEntityList, CDOTA_RoshanSpawner::OnRoshanSpawnCompletion(CDOTA_BaseNPC *,CEntityKeyValues const*)
void __fastcall CDOTA_RoshanSpawner::RoshanThink(CDOTA_RoshanSpawner *const this)
{
  int v2; // eax
  CDOTAGamerules *v3; // rdi
  __int64 v4; // rdx
  double v5; // xmm0_8
  double v6; // xmm1_8
  CGlobalVars *v7; // r12
  float v8; // xmm0_4
  float m_fRoshanKillTime; // xmm0_4
  CDOTA_Item *Aegis; // rax
  float v11; // xmm1_4
  CDOTA_Item_Aegis *v12; // r13
  float ReclaimTime; // xmm0_4
  float v14; // xmm1_4
  int m_nSentRoshReclaim; // eax
  float v16; // xmm1_4
  int v17; // eax
  bool v18; // r15
  IGameEventSystem *v19; // r15
  uint32 m_Index; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CGameRules *v23; // rax
  float v24; // xmm0_4
  CTeam *GlobalTeam; // rax
  double v26; // xmm1_8
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int v29; // eax
  int v30; // r14d
  CDOTA_ParticleManager *v31; // rax
  float v32; // xmm1_4
  __m128i v33; // xmm0
  int v34; // r14d
  int m_nFXIndex; // r15d
  CDOTA_ParticleManager *v36; // rax
  int v37; // r15d
  CDOTA_ParticleManager *v38; // rax
  int v39; // r14d
  CDOTA_ParticleManager *v40; // rax
  int m_nSentRoshRespawn; // eax
  float v42; // xmm0_4
  float m_fRoshanRespawnDuration; // xmm2_4
  float v44; // xmm1_4
  __int64 v45; // [rsp+10h] [rbp-1E0h]
  float flVariablePart; // [rsp+18h] [rbp-1D8h]
  void (__fastcall *flVariableParta)(IGameEventSystem *, _QWORD, _QWORD, CReliableBroadcastRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+18h] [rbp-1D8h]
  float flVariablePartb; // [rsp+18h] [rbp-1D8h]
  double v49; // [rsp+30h] [rbp-1C0h]
  float v50; // [rsp+38h] [rbp-1B8h]
  _QWORD v51[2]; // [rsp+40h] [rbp-1B0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-1A0h]
  bool bReclaim; // [rsp+58h] [rbp-198h]
  int v54; // [rsp+5Ch] [rbp-194h]
  KeyValues kv; // [rsp+60h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v57; // [rsp+1B8h] [rbp-38h]
  Vector v58; // 0:xmm0_8.8,8:xmm1_4.4

  v57 = __readfsqword(0x28u);
  v2 = 0;
  v3 = g_pGameRules;
  v4 = *&g_pGameRules[6].m_szQuestName[28];
  if ( v4 <= 0xA )
    v2 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v4];
  if ( dword_491AD10 > v2 )
    goto LABEL_25;
  if ( !this->m_bIsRoshanAlive )
  {
    if ( this->m_bSpawnRequested )
    {
      if ( this->m_fRoshanKillTime == 0.0 )
      {
        if ( *&g_pGameRules[20].m_szQuestName[16] != 1 )
          goto LABEL_36;
        goto LABEL_8;
      }
    }
    else
    {
      m_fRoshanKillTime = this->m_fRoshanKillTime;
      if ( m_fRoshanKillTime == 0.0
        || (*&g_pGameRules[18].m_szQuestName[20] - this->m_fRoshanRespawnDuration) > m_fRoshanKillTime )
      {
        this->m_bSpawnRequested = 1;
        KeyValues::KeyValues(&kv, "Unit");
        KeyValues::SetInt(&kv, "UseNeutralCreepBehavior", 1);
        v52 = 0;
        v51[1] = CDOTA_RoshanSpawner::OnRoshanSpawnCompletion;
        CEntityKeyValues::CEntityKeyValues(&filter);
        *&filter.m_Recipients.m_Memory.m_FixedMemory.m_Data[72] = 0;
        *&filter.m_Recipients.m_Memory.m_FixedMemory.m_Data[80] = this;
        *&filter.m_Recipients.m_Memory.m_FixedMemory.m_Data[96] = CDOTA_RoshanSpawner::OnRoshanSpawnCompletion;
        *&filter.m_Recipients.m_Memory.m_FixedMemory.m_Data[104] = 0;
        *&filter.m_Recipients.m_Memory.m_FixedMemory.m_Data[88] = this;
        v58 = *CBaseEntity::GetAbsOrigin(this);
        DOTA_Character_ScriptSpawn("npc_dota_roshan", 0, 0, &kv, &filter, v58);
        CEntityKeyValues::~CEntityKeyValues(&filter);
        KeyValues::~KeyValues(&kv);
        if ( !this->m_bIsRoshanAlive )
          goto LABEL_35;
        goto LABEL_26;
      }
    }
    Aegis = CDOTA_RoshanSpawner::FindAegis(this, 0);
    v11 = 0.0;
    if ( Aegis != 0 )
    {
      v12 = __dynamic_cast(Aegis, &`typeinfo for'CDOTA_Item, &`typeinfo for'CDOTA_Item_Aegis, 0);
      ReclaimTime = CDOTA_Item_Aegis::GetReclaimTime(v12);
      v14 = 0.0;
      flVariablePart = ReclaimTime;
      if ( ReclaimTime <= 0.0 )
        goto LABEL_25;
      if ( g_pGameRules != 0 )
        v14 = *&g_pGameRules[18].m_szQuestName[20];
      m_nSentRoshReclaim = this->m_nSentRoshReclaim;
      v16 = v14 - v12->m_fEquipTime;
      if ( m_nSentRoshReclaim <= 0 )
      {
        if ( v16 > 179.0 )
          goto LABEL_22;
      }
      else if ( m_nSentRoshReclaim != 1 )
      {
        if ( m_nSentRoshReclaim != 2 )
        {
          if ( m_nSentRoshReclaim != 3 )
            goto LABEL_25;
LABEL_21:
          if ( v16 <= 353.0 )
            goto LABEL_25;
          goto LABEL_22;
        }
LABEL_50:
        if ( v16 <= 329.0 )
          goto LABEL_21;
LABEL_22:
        v17 = m_nSentRoshReclaim + 1;
        v18 = 1;
        this->m_nSentRoshReclaim = v17;
        if ( v17 > 2 )
          this->m_nSentRoshRespawn = 1;
        goto LABEL_24;
      }
      if ( v16 > 299.0 )
        goto LABEL_22;
      goto LABEL_50;
    }
    if ( g_pGameRules != 0 )
      v11 = *&g_pGameRules[18].m_szQuestName[20];
    m_nSentRoshRespawn = this->m_nSentRoshRespawn;
    v42 = this->m_fRoshanKillTime;
    m_fRoshanRespawnDuration = this->m_fRoshanRespawnDuration;
    v44 = v11 - v42;
    if ( m_nSentRoshRespawn <= 0 )
    {
      if ( v44 > 299.0 )
        goto LABEL_59;
    }
    else if ( m_nSentRoshRespawn != 1 )
    {
      if ( m_nSentRoshRespawn != 2 )
      {
        if ( m_nSentRoshRespawn != 3 )
          goto LABEL_25;
        goto LABEL_58;
      }
LABEL_62:
      if ( v44 > 539.0 )
        goto LABEL_59;
LABEL_58:
      if ( v44 > 569.0 )
      {
LABEL_59:
        v18 = 0;
        this->m_nSentRoshRespawn = m_nSentRoshRespawn + 1;
        flVariablePart = v42 + m_fRoshanRespawnDuration;
LABEL_24:
        CTeamRecipientFilter::CTeamRecipientFilter(&filter, 1, 0);
        CDOTAUserMsg_SendRoshanPopup::CDOTAUserMsg_SendRoshanPopup(v51);
        bReclaim = v18;
        v51[0] = off_44404B0;
        LODWORD(v52) = v52 | 3;
        v54 = flVariablePart;
        v19 = g_pGameEventSystem;
        flVariableParta = *(*g_pGameEventSystem + 128LL);
        v45 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendRoshanPopup_t>(bool)::s_hEvent;
        (*(*g_pNetworkMessages + 96LL))(
          g_pNetworkMessages,
          IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_SendRoshanPopup_t>(bool)::s_hEvent);
        flVariableParta(v19, 0, 0, &filter, v45, v51, 32);
        v51[0] = &off_4440330;
        CDOTAUserMsg_SendRoshanPopup::~CDOTAUserMsg_SendRoshanPopup(v51);
        filter._vptr_IRecipientFilter = &off_3FF4590;
        CRecipientFilter::~CRecipientFilter(&filter);
      }
LABEL_25:
      if ( !this->m_bIsRoshanAlive )
        goto LABEL_35;
      goto LABEL_26;
    }
    if ( v44 > 479.0 )
      goto LABEL_59;
    goto LABEL_62;
  }
LABEL_26:
  m_Index = this->m_hRoshan.m_Index;
  if ( m_Index + 2 <= 1
    || (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hRoshan.m_Index) >> 9) & 0x3F]) == 0
    || (v22 = &v21[this->m_hRoshan.m_Index & 0x1FF]) == 0
    || m_Index != v22->m_EHandle.m_Index
    || v22->m_pInstance == 0
    || (*(v22->m_pInstance->_vptr_IHandleEntity + 139))(v22->m_pInstance) == 0 )
  {
    v23 = g_pGameRules;
    this->m_bIsRoshanAlive = 0;
    v24 = 0.0;
    this->m_hRoshan.m_Index = -1;
    if ( v23 != 0 )
      v24 = *&v23[18].m_szQuestName[20];
    this->m_fRoshanKillTime = v24;
    this->m_fRoshanRespawnDuration = RandomInt(480, 660);
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filter);
    CRecipientFilter::RemoveRecipientsByTeamNumber(&filter, 2);
    CRecipientFilter::RemoveRecipientsByTeamNumber(&filter, 3);
    GlobalTeam = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&filter, GlobalTeam);
    CDOTAGamerules::SetRoshanSpawnPhase(
      g_pGameRules,
      ERoshanSpawnPhase::ROSHAN_SPAWN_PHASE_BASE_TIMER,
      COERCE_DOUBLE(COERCE_UNSIGNED_INT(this->m_fRoshanKillTime + 480.0)),
      v26);
    if ( this->m_nFXIndex == -1 )
    {
      ParticleManager = GetParticleManager();
      v29 = CDOTA_ParticleManager::CreateParticle(
              ParticleManager,
              "particles/neutral_fx/roshan_timer.vpcf",
              2,
              0,
              &filter,
              0);
      this->m_nFXIndex = v29;
      v30 = v29;
      v31 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v31, v30, 0, 1.256150372066968e24, 0.0);
      v32 = this->m_fRoshanRespawnDuration;
      flVariablePartb = v32 - 480.0;
      *v33.m128i_i32 = ceilf((720.0 - v32) * 0.5);
      v34 = _mm_cvtsi128_si32(v33);
      v50 = ceilf(flVariablePartb / 60.0);
      *&v49 = flVariablePartb;
      m_nFXIndex = this->m_nFXIndex;
      *(&v49 + 1) = 0.5 * flVariablePartb;
      v36 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v36, m_nFXIndex, 10, v49, v50);
      v37 = this->m_nFXIndex;
      *&v49 = this->m_fRoshanRespawnDuration;
      *(&v49 + 1) = *&v49 - 30.0;
      v38 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v38, v37, 12, v49, 0.0);
      HIDWORD(v49) = v34;
      v39 = this->m_nFXIndex;
      LODWORD(v49) = 1139802112;
      v40 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v40, v39, 13, v49, 1.0);
    }
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
LABEL_35:
  v3 = g_pGameRules;
  if ( *&g_pGameRules[20].m_szQuestName[16] != 1 )
  {
LABEL_36:
    v7 = gpGlobals;
    if ( gpGlobals == 0 )
      goto LABEL_10;
    goto LABEL_37;
  }
LABEL_8:
  *&v6 = LODWORD(this->m_fRoshanRespawnDuration);
  *&v5 = LODWORD(this->m_fRoshanKillTime);
  *&v5 = *&v5 + *&v6;
  *&v6 = *&v6 - 480.0;
  if ( *&v6 <= (*&v5 - v3->m_fGameTime.m_Value) )
    goto LABEL_36;
  CDOTAGamerules::SetRoshanSpawnPhase(v3, ERoshanSpawnPhase::ROSHAN_SPAWN_PHASE_VISIBLE_TIMER, v5, v6);
  v7 = gpGlobals;
  if ( gpGlobals == 0 )
  {
LABEL_10:
    v8 = 0.1;
    goto LABEL_39;
  }
LABEL_37:
  if ( !v7->m_bEnableAssertions && !v7->m_bInSimulation )
  {
    m_pfnWarningFunc = v7->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  v8 = v7->m_flCurrentTime + 0.1;
LABEL_39:
  CBaseEntity::ThinkSet(this, 0x679uLL, v8, 1073299166, 0);
}


// CDOTA_RoshanSpawner::YouForgotToImplementOrDeclareServerClass  (line 387, @0x0000000002ae8550, libserver.so)
int __fastcall CDOTA_RoshanSpawner::YouForgotToImplementOrDeclareServerClass(CDOTA_RoshanSpawner *const this)
{
  return 0;
}


// CDOTA_RoshanSpawner::GetServerClass  (line 387, @0x0000000002af2bf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_RoshanSpawner::GetServerClass(CDOTA_RoshanSpawner *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Unit_Roshan::~CDOTA_Unit_Roshan  (line 400, @0x0000000002b306a0, libserver.so)  // inlines: Purge, ~CDOTA_BaseNPC_Additive, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_BaseNPC::~CDOTA_BaseNPC, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Unit_Roshan::~CDOTA_Unit_Roshan(CDOTA_Unit_Roshan *const this)
{
  this->_vptr_IHandleEntity = &off_447C3F0;
  this->_vptr_INextBotEventResponder = &off_447D350;
  this->_vptr_CObstructionObject = &off_447D680;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAttackingHeroes);
  if ( (this->m_hAttackingHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAttackingHeroes.m_Memory);
    if ( (this->m_hAttackingHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAttackingHeroes.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Roshan::~CDOTA_Unit_Roshan  (line 400, @0x0000000002b30b70, libserver.so)  // inlines: Purge, ~CDOTA_BaseNPC_Additive, ~CDOTA_Unit_Roshan, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Unit_Roshan::~CDOTA_Unit_Roshan(CDOTA_Unit_Roshan *const this)
{
  this->_vptr_IHandleEntity = &off_447C3F0;
  this->_vptr_INextBotEventResponder = &off_447D350;
  this->_vptr_CObstructionObject = &off_447D680;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAttackingHeroes);
  if ( (this->m_hAttackingHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAttackingHeroes.m_Memory);
    if ( (this->m_hAttackingHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAttackingHeroes.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Roshan::Schema_DynamicBinding  (line 402, @0x0000000002b16f80, libserver.so)
// globals: CDOTA_Unit_Roshan::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Roshan::Schema_DynamicBinding(const CDOTA_Unit_Roshan *const this)
{
  return CDOTA_Unit_Roshan::s_pSchemaBinding;
}


// CDOTA_Unit_Roshan::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 402, @0x0000000002b16fb0, libserver.so)
// globals: CDOTA_Unit_Roshan::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Roshan::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Roshan::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Roshan::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Roshan::CEntityInstanceEntityClass::DestructInstance  (line 402, @0x0000000002b16fc0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Roshan>
void __fastcall CDOTA_Unit_Roshan::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Roshan::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Roshan::CEntityInstanceEntityClass::FreeInstance  (line 402, @0x0000000002b16fe0, libserver.so)
void __fastcall CDOTA_Unit_Roshan::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Roshan::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Roshan::CEntityInstanceEntityClass::CanAllocate  (line 402, @0x0000000002b17000, libserver.so)
bool __fastcall CDOTA_Unit_Roshan::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Roshan::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Roshan::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 402, @0x0000000002b17010, libserver.so)
// globals: CDOTA_Unit_Roshan::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Roshan::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Roshan::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Roshan::s_pSchemaBinding;
}


// CDOTA_Unit_Roshan::CEntityInstanceEntityClass::AllocateInstance  (line 402, @0x0000000002b19670, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Roshan::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Roshan::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4536);
  memset(v1, 0, 0x11B8u);
  return v1;
}


// CDOTA_Unit_Roshan::CEntityInstanceEntityClass::ConstructInstance  (line 402, @0x0000000002b21140, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_Unit_Roshan, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Unit_Roshan>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_Unit_Roshan::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Roshan::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *(p + 1128) = 0;
    *p = &off_447C3F0;
    *(p + 236) = &off_447D350;
    *(p + 257) = &off_447D680;
    *(p + 565) = 0;
    *(p + 1132) = 0;
    *(p + 1133) = 0;
  }
  return p;
}


// CDOTA_Unit_Roshan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 402, @0x0000000002b22780, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Roshan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Roshan::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Roshan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 402, @0x0000000002b22930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Roshan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Roshan::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Roshan::GetEntityClassInternal  (line 402, @0x0000000002b2eb00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "npc_dota_roshan", "CDOTA_Unit_Roshan"
// globals: `guard variable for'CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass, CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass, __dso_handle, CDOTA_Unit_Roshan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Roshan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoshanClassInfo, CDOTA_Unit_Roshan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoshanClassInfo
CEntityClass *__cdecl CDOTA_Unit_Roshan::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass);
    CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass._vptr_CEntityClass = off_447C370;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass);
    __cxa_atexit(
      CDOTA_Unit_Roshan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_RoshanClass != 0 )
    return &CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass;
  if ( `guard variable for'CDOTA_Unit_Roshan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoshanClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Roshan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoshanClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Roshan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoshanClassInfo,
      "CDOTA_Unit_Roshan",
      "npc_dota_roshan",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Roshan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoshanClassInfo);
  }
  CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass.m_pClassInfo = &CDOTA_Unit_Roshan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoshanClassInfo;
  CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass.m_pBaseClassInfo = CDOTA_Unit_Roshan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoshanClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_RoshanClass = &CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass;
  CDOTA_Unit_Roshan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_RoshanClassInfo.m_pClass = &CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass;
  CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_RoshanClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Roshan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_RoshanClass;
}


// CDOTA_Unit_Roshan::IsRoshan  (line 409, @0x0000000002b17020, libserver.so)
bool __fastcall CDOTA_Unit_Roshan::IsRoshan(const CDOTA_Unit_Roshan *const this)
{
  return 1;
}


// CDOTA_Unit_Roshan::YouForgotToImplementOrDeclareServerClass  (line 431, @0x0000000002ae8560, libserver.so)
int __fastcall CDOTA_Unit_Roshan::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Roshan *const this)
{
  return 0;
}


// CDOTA_Unit_Roshan::GetServerClass  (line 431, @0x0000000002af2770, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Roshan::GetServerClass(CDOTA_Unit_Roshan *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CDOTA_Unit_Roshan::GetDeathXP  (line 442, @0x0000000002aebff0, libserver.so)  // inlines: GetDeathXP
// calls: CDOTAGamerules::GetDOTATime, floorf
int __fastcall CDOTA_Unit_Roshan::GetDeathXP(CDOTA_Unit_Roshan *const this)
{
  int v1; // ebx
  float DOTATime; // xmm0_4

  v1 = this->m_iXPBountyExtra + this->m_iXPBounty;
  DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
  return v1 + 20 * floorf(DOTATime / 60.0);
}


// CDOTA_Unit_Roshan::OnDying  (line 451, @0x0000000002ae8570, libserver.so)
void __fastcall CDOTA_Unit_Roshan::OnDying(CDOTA_Unit_Roshan *const this)
{
  ;
}


// CDOTA_Unit_Roshan::Spawn  (line 464, @0x0000000002afafb0, libserver.so)  // inlines: GetHealthPercent
// calls: CDOTA_BaseNPC::Spawn, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::UpgradeAbility, CDOTA_BaseNPC::SetMana, CBaseEntity::GetHealth, CDOTA_Unit_Roshan::UpdateMaxHealth, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier (15 total)
// strings: "particles/neutral_fx/roshan_spawn.vpcf", "attach_hitloc", "modifier_phased"
void __fastcall CDOTA_Unit_Roshan::Spawn(CDOTA_Unit_Roshan *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v5; // rax
  CDOTA_ParticleManager *v6; // rax
  int v7; // esi
  int v8; // ebx
  float v9; // xmm1_4
  CDOTABaseAbility *AbilityByIndex; // rax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  KeyValues kv; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-18h]

  this->m_iUnitType |= 0x880u;
  v15 = __readfsqword(0x28u);
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/neutral_fx/roshan_spawn.vpcf",
               1,
               this,
               0,
               0);
  v5 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v5, Particle, 1, this, 5, "attach_hitloc", vec3_invalid, 1);
  v6 = GetParticleManager();
  v7 = Particle;
  v8 = 0;
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, v7);
  do
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(this, v8) != 0 )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v8);
      CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
    }
    ++v8;
  }
  while ( v8 != 24 );
  CDOTA_BaseNPC::SetMana(this, 600.0, v9);
  v11 = 100LL * CBaseEntity::GetHealth(this);
  v12 = (*(this->_vptr_IHandleEntity + 156))(this);
  v13 = 1;
  if ( v12 > 0 )
    v13 = v12;
  this->m_iLastHealthPercent = v11 / v13;
  CDOTA_Unit_Roshan::UpdateMaxHealth(this);
  KeyValues::KeyValues(&kv, "modifier_phased");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_phased", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Unit_Roshan::UpdateMaxHealth  (line 500, @0x0000000002afae90, libserver.so)  // inlines: GetFloat, SetBaseMaxHealth
// calls: CBaseEntity::GetHealth, CDOTAGamerules::GetDOTATime, floorf, CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::ModifyHealth
// callers: CDOTA_Modifier_Roshan_InherentBuffs::GetModifierPreAttack_BonusDamage, CDOTA_Unit_Roshan::Spawn
void __fastcall CDOTA_Unit_Roshan::UpdateMaxHealth(CDOTA_Unit_Roshan *const this)
{
  int Health; // r12d
  float DOTATime; // xmm0_4
  float v4; // xmm0_4
  int v5; // eax
  float fHealthPercent; // [rsp+Ch] [rbp-14h]

  Health = CBaseEntity::GetHealth(this);
  fHealthPercent = Health / (*(this->_vptr_IHandleEntity + 156))(this);
  DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
  v4 = (floorf(DOTATime / dota_roshan_upgrade_rate.m_pParent->m_Value.m_fValue) * 460.0) + 5500.0;
  this->m_flBaseMaxHealth = v4;
  CBaseEntity::SetMaxHealth(this, v4);
  v5 = (*(this->_vptr_IHandleEntity + 156))(this);
  CDOTA_BaseNPC::ModifyHealth(this, (v5 * fHealthPercent), 0, 0, 0);
}


// CDOTA_Unit_Roshan::OnTakeDamage_Alive  (line 510, @0x0000000002b13aa0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetAttacker, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetInt, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, entindex, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::OnTakeDamage_Alive, CBaseEntity::GetHealth, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CreateUnitEvent, CRecipientFilter::CRecipientFilter, GetGlobalTeam, CRecipientFilter::AddRecipientsByTeam, Gamerules_EmitSound, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume (15 total)
// strings: "Spectator.RoshanFightToggle"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Unit_Roshan::OnTakeDamage_Alive(CDOTA_Unit_Roshan *const this, const CTakeDamageInfo *const info)
{
  int v4; // r14d
  int v5; // r15d
  __int64 v6; // r13
  int v7; // eax
  __int64 v8; // rcx
  CEntityInstance *v9; // rax
  CEntityIndex v10; // r13d
  CEntityIndex v11; // eax
  uint32 m_Index; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CTeam *GlobalTeam; // rax
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *m_pEntity; // rdx
  __int16 v19; // cx
  uint32 v20; // r15d
  CEntityIdentity *v21; // rdx
  int v22; // eax
  __int16 v23; // cx
  __int64 m_Size; // r15
  int v25; // eax
  CHandle<CBaseEntity> *v26; // rax
  CHandle<CBaseEntity> *v27; // r15
  __int64 v28; // r15
  int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rcx
  CHandle<CBaseEntity> *v32; // rbx
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-180h] BYREF
  CRecipientFilter spectatorFilter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v35; // [rsp+148h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  v4 = CDOTA_BaseNPC::OnTakeDamage_Alive(this, info);
  v5 = this->m_iLastHealthPercent - 24;
  v6 = 100LL * CBaseEntity::GetHealth(this);
  v7 = (*(this->_vptr_IHandleEntity + 156))(this);
  v8 = 1;
  if ( v7 > 0 )
    v8 = v7;
  if ( v5 > (v6 / v8) )
  {
    this->m_iLastHealthPercent -= 25;
    v9 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
    if ( v9 != 0 )
    {
      v10.m_Data = CEntityInstance::GetEntityIndex(v9).m_Data;
      v11.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      CreateUnitEvent(v11, v10, 12, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_ROSHAN_FIGHT);
      if ( dota_music_enable_spectator_mode.m_pParent->m_Value.m_nValue != 0 )
      {
        CRecipientFilter::CRecipientFilter(&spectatorFilter);
        GlobalTeam = GetGlobalTeam(1);
        CRecipientFilter::AddRecipientsByTeam(&spectatorFilter, GlobalTeam);
        Gamerules_EmitSound("Spectator.RoshanFightToggle", &spectatorFilter, 0);
        CRecipientFilter::~CRecipientFilter(&spectatorFilter);
      }
    }
  }
  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[info->m_hAttacker.m_Index & 0x1FF];
      if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
      {
        m_pInstance = v14->m_pInstance;
        if ( v14->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
        {
          src.m_Index = -1;
          m_pEntity = m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v19 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v19 & 0x7FFF;
          }
          v20 = CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                  &this->m_hAttackingHeroes,
                  &src);
          if ( v20 == -1 && (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance) != 0 )
          {
            src.m_Index = v20;
            v21 = m_pInstance->m_pEntity;
            if ( v21 != 0 )
            {
              v22 = (v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1);
              v23 = 0x7FFF;
              if ( v21->m_EHandle.m_Index != -1 )
                v23 = v21->m_EHandle.m_Index & 0x7FFF;
              LOWORD(src.m_Index) = v23 | src.m_Index & 0x8000;
              src.m_Index = (v22 << 15) | src.m_Index & 0x7FFF;
            }
            m_Size = this->m_hAttackingHeroes.m_Size;
            v25 = this->m_hAttackingHeroes.m_Size;
            if ( m_Size == this->m_hAttackingHeroes.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hAttackingHeroes.m_Memory, 1);
              v25 = this->m_hAttackingHeroes.m_Size;
            }
            this->m_hAttackingHeroes.m_Size = v25 + 1;
            v26 = &this->m_hAttackingHeroes.m_Memory.m_pMemory[m_Size];
            if ( v26 != 0 )
              v26->m_Index = src.m_Index;
            src.m_Index = 1;
            v27 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
            if ( memcmp(&v27[1191], &src, 4u) != 0 )
            {
              (*(*&v27->m_Index + 176LL))(v27, 4756, 2, 0xFFFFFFFFLL);
              v27[1191].m_Index = src.m_Index;
            }
            v28 = 100LL * CBaseEntity::GetHealth(this);
            v29 = (*(this->_vptr_IHandleEntity + 156))(this);
            v31 = 1;
            if ( v29 > 0 )
              v31 = v29;
            src.m_Index = v28 / v31;
            v32 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance, v30, v28 % v31);
            if ( memcmp(&v32[1192], &src, 4u) != 0 )
            {
              (*(*&v32->m_Index + 176LL))(v32, 4756, 3, 0xFFFFFFFFLL);
              v32[1192].m_Index = src.m_Index;
            }
          }
        }
      }
    }
  }
  return v4;
}


// CDOTA_Unit_Roshan::UnitThink  (line 551, @0x0000000002b0cab0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsFullyCastable, IsSilenced, IsStunned, IsTrained, IsValid, Length2D, LookupEntity, NetworkStateChanged, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_BaseNPC::FindAbilityByName, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CBaseEntity::GetHealth, memcmp, CDOTA_BaseNPC::UnitThink, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, _Unwind_Resume (13 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Roshan::UnitThink(CDOTA_Unit_Roshan *const this)
{
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v3; // rbx
  const Vector *AbsOrigin; // rax
  int v5; // ebx
  __int64 v6; // r12
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  const CBaseEntity *m_pInstance; // r15
  const Vector *v13; // r14
  const Vector *v14; // rax
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r14
  _DWORD *v20; // r14
  _DWORD *v21; // r14
  __int64 v22; // [rsp+28h] [rbp-168h]
  int v23; // [rsp+3Ch] [rbp-154h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v25; // [rsp+158h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "roshan_slam", 0);
  v3 = AbilityByName;
  if ( AbilityByName != 0 )
  {
    (*(AbilityByName->_vptr_IHandleEntity + 315))(AbilityByName, 0);
    entities.m_Size = 0;
    entities.m_Memory.m_nAllocationCount = 64;
    entities.m_Memory.m_nGrowSize = 0x80000000;
    entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    FindUnitsInRadius(this->m_iTeamNum.m_Value, AbsOrigin, this, 250.0, &entities, 2, 19, 0, 0, 0);
    if ( entities.m_Size > 2
      && (*(v3->_vptr_IHandleEntity + 245))(v3) != 0
      && CDOTABaseAbility::GetEffectiveLevel(v3) >= 0
      && (*(v3->_vptr_IHandleEntity + 245))(v3) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(v3)
      && CDOTABaseAbility::IsOwnersGoldEnough(v3, -1)
      && (this->m_nUnitState64.m_Value & 8) == 0
      && (this->m_nUnitState64.m_Value & 0x20) == 0 )
    {
      (*(v3->_vptr_IHandleEntity + 315))(v3, 1);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
  v5 = this->m_hAttackingHeroes.m_Size - 1;
  v6 = v5;
  if ( v5 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v7 = &this->m_hAttackingHeroes.m_Memory.m_pMemory[v6];
        m_Index = v7->m_Index;
        if ( v7->m_Index + 2 > 1 )
        {
          v9 = v7->m_Index;
          v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
          if ( v10 != 0 )
          {
            v11 = &v10[v9 & 0x1FF];
            if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
            {
              m_pInstance = v11->m_pInstance;
              if ( v11->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
                && (*(m_pInstance->_vptr_IHandleEntity + 413))(v11->m_pInstance) != 0 )
              {
                break;
              }
            }
          }
        }
LABEL_6:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&this->m_hAttackingHeroes, v5);
LABEL_7:
        --v5;
        --v6;
        if ( v5 == -1 )
          goto LABEL_21;
      }
      v13 = CBaseEntity::GetAbsOrigin(this);
      v14 = CBaseEntity::GetAbsOrigin(m_pInstance);
      if ( fsqrt(((v14->x - v13->x) * (v14->x - v13->x)) + ((v14->y - v13->y) * (v14->y - v13->y))) > 800.0 )
      {
        v23 = 100;
        v20 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
        if ( memcmp(v20 + 1192, &v23, 4u) != 0 )
        {
          (*(*v20 + 176LL))(v20, 4756, 3, 0xFFFFFFFFLL);
          v20[1192] = 100;
        }
        v23 = 0;
        v21 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
        if ( memcmp(v21 + 1191, &v23, 4u) != 0 )
        {
          (*(*v21 + 176LL))(v21, 4756, 2, 0xFFFFFFFFLL);
          v21[1191] = 0;
        }
        goto LABEL_6;
      }
      v15 = 100LL * CBaseEntity::GetHealth(this);
      v16 = (*(this->_vptr_IHandleEntity + 156))(this);
      v18 = v16;
      if ( v16 <= 0 )
        v18 = 1;
      v22 = v15 / v18;
      v23 = v15 / v18;
      v19 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance, v17, v15 % v18);
      if ( memcmp((v19 + 4768), &v23, 4u) == 0 )
        goto LABEL_7;
      --v5;
      --v6;
      (*(*v19 + 176LL))(v19, 4756, 3, 0xFFFFFFFFLL);
      *(v19 + 4768) = v22;
    }
    while ( v5 != -1 );
  }
LABEL_21:
  CDOTA_BaseNPC::UnitThink(this);
}


// CDOTA_Unit_Roshan::Event_Killed  (line 593, @0x0000000002b13ec0, libserver.so)  // inlines: FStrEq, Get, GetAbilityName, GetAttacker, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, QAngle, RandomYawVector, Set, SetPlayerOwnerID, State_Get, State_IsBefore, State_IsBeforeGameInProgress, State_Order, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator=<int>, operator[], set_event_team, set_event_type, set_has_event_team, set_has_event_type, set_has_killer_account_id, set_killer_account_id
// calls: __dynamic_cast, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::DropItemOnLocation, CDOTA_UnitInventory::GetItemInSlot, RandomFloat, AngleVectors, memcmp, EconEntity_OnOwnerKillEaterEvent, CRecipientFilter::CRecipientFilter, GetGlobalTeam (24 total)
// strings: "Spectator.RoshanDeath", "tournament_drops"
// globals: INVALID_ITEM_DEF_INDEX, CEntityHandle::gm_pEntityList, DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING
void __fastcall CDOTA_Unit_Roshan::Event_Killed(CDOTA_Unit_Roshan *const this, const CTakeDamageInfo *const info)
{
  int v2; // r12d
  char *v4; // rsi
  _DWORD *v5; // r13
  CEntityInstance *v6; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_UnitInventory *v8; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v11; // r15
  char **m_pAbilityData; // rax
  CEntityInstance *v13; // rax
  __int64 v14; // r13
  int i; // r12d
  CDOTA_BaseNPC_Hero *m_pInstance; // r14
  _DWORD *v17; // r15
  CHandle<CBaseEntity> *v18; // rdx
  uint32 m_Index; // eax
  __int16 v20; // cx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CTeam *GlobalTeam; // rax
  CEntityInstance *v24; // rax
  CEntityInstance *v25; // r12
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  _BOOL4 v29; // edx
  int v30; // eax
  EHANDLE *p_m_hAttacker; // [rsp+18h] [rbp-208h]
  float y; // [rsp+20h] [rbp-200h]
  float z; // [rsp+24h] [rbp-1FCh]
  float s2; // [rsp+28h] [rbp-1F8h]
  double v36; // [rsp+30h] [rbp-1F0h]
  vec_t v37; // [rsp+38h] [rbp-1E8h]
  QAngle angles; // [rsp+40h] [rbp-1E0h] BYREF
  Vector v39; // [rsp+50h] [rbp-1D0h] BYREF
  int v40; // [rsp+60h] [rbp-1C0h]
  int SteamID; // [rsp+68h] [rbp-1B8h]
  int v42; // [rsp+70h] [rbp-1B0h]
  _BOOL4 v43; // [rsp+88h] [rbp-198h]
  CRecipientFilter spectatorFilter; // [rsp+B0h] [rbp-170h] BYREF
  unsigned __int64 v45; // [rsp+1E8h] [rbp-38h]

  v2 = 0;
  p_m_hAttacker = &info->m_hAttacker;
  v45 = __readfsqword(0x28u);
  do
  {
    Inventory = CDOTA_BaseNPC::GetInventory(this);
    ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v2);
    v11 = ItemInSlot;
    if ( ItemInSlot != 0 )
    {
      m_pAbilityData = ItemInSlot->m_pAbilityData;
      if ( m_pAbilityData != 0
        && (v4 = *m_pAbilityData, *m_pAbilityData != 0)
        && (v4 == "item_aegis" || strcmp(v4, "item_aegis") == 0) )
      {
        s2 = vec3_origin.x;
        y = vec3_origin.y;
        z = vec3_origin.z;
        v5 = __dynamic_cast(v11, &`typeinfo for'CDOTA_Item, &`typeinfo for'CDOTA_Item_Aegis, 0);
        if ( v5 != 0 )
        {
          v6 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
          if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
            v5[250] = HIBYTE(v6[7].m_CScriptComponent);
        }
      }
      else
      {
        angles.y = RandomFloat(0.0, 360.0);
        angles.x = 0.0;
        angles.z = 0.0;
        AngleVectors(&angles, &v39, 0, 0);
        s2 = 50.0 * v39.x;
        y = 50.0 * v39.y;
        z = 50.0 * v39.z;
      }
      if ( v11->m_iPlayerOwnerID.m_Value != -1 )
      {
        (*(v11->_vptr_IHandleEntity + 22))(v11, 988, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v11->m_iPlayerOwnerID.m_Value = -1;
      }
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      *(&v36 + 1) = y + AbsOrigin->y;
      v37 = z + AbsOrigin->z;
      *&v36 = s2 + AbsOrigin->x;
      v8 = CDOTA_BaseNPC::GetInventory(this);
      CDOTA_UnitInventory::DropItemOnLocation(v8, v11, v36, v37);
    }
    ++v2;
  }
  while ( v2 != 9 );
  v13 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
  if ( v13 != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
    CDOTAGamerules::AddRoshanKill(g_pGameRules, HIBYTE(v13[7].m_CScriptComponent));
  v14 = 0;
  for ( i = 0; this->m_hAttackingHeroes.m_Size > i; ++i )
  {
    v18 = &this->m_hAttackingHeroes.m_Memory.m_pMemory[v14];
    m_Index = v18->m_Index;
    if ( v18->m_Index + 2 <= 1
      || (v20 = v18->m_Index,
          (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18->m_Index) >> 9) & 0x3F]) == 0)
      || (v22 = &v21[v20 & 0x1FF]) == 0
      || m_Index != v22->m_EHandle.m_Index
      || (m_pInstance = v22->m_pInstance, v22->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC
      || (m_pInstance->m_iUnitType & 1) == 0 )
    {
      m_pInstance = 0;
    }
    if ( (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance) != 0 )
    {
      LODWORD(v39.x) = 2;
      v17 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
      if ( memcmp(v17 + 1191, &v39, 4u) != 0 )
      {
        (*(*v17 + 176LL))(v17, 4756, 2, 0xFFFFFFFFLL);
        v17[1191] = 2;
      }
    }
    ++v14;
    EconEntity_OnOwnerKillEaterEvent(
      m_pInstance,
      0,
      kill_eater_event_t::kKillEaterEventType_RoshanKills,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
  if ( dota_music_enable_spectator_mode.m_pParent->m_Value.m_nValue != 0 )
  {
    CRecipientFilter::CRecipientFilter(&spectatorFilter);
    GlobalTeam = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&spectatorFilter, GlobalTeam);
    Gamerules_EmitSound("Spectator.RoshanDeath", &spectatorFilter, 0);
    CRecipientFilter::~CRecipientFilter(&spectatorFilter);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAttackingHeroes);
  v24 = CEntityHandle::operator CEntityInstance *(p_m_hAttacker);
  v25 = v24;
  if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
  {
    v26 = *&g_pGameRules[6].m_szQuestName[28];
    v27 = 0;
    if ( v26 <= 0xA )
      v27 = DOTAGameRules_Common::State_Order(DOTA_GameState)::STATE_ORDERING[v26];
    if ( dword_491AD14 > v27 )
    {
      CMsgTournamentItemEvent::CMsgTournamentItemEvent(&v39);
      v28 = v40;
      v42 = 10;
      v29 = HIBYTE(v25[7].m_CScriptComponent) == 3;
      LOBYTE(v28) = v40 | 0x84;
      v40 = v28;
      v43 = v29;
      v30 = (*(v25->_vptr_IHandleEntity + 414))(v25);
      SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v30);
      v40 |= 1u;
      TournamentItemEvent(&v39, "tournament_drops");
      CMsgTournamentItemEvent::~CMsgTournamentItemEvent(&v39);
    }
  }
  CDOTA_BaseNPC::Event_Killed(this, info);
}


// CDOTA_Unit_Roshan::ShouldTransmit  (line 673, @0x0000000002ae8770, libserver.so)
// calls: CBaseEntity::ShouldTransmit
int __fastcall CDOTA_Unit_Roshan::ShouldTransmit(CDOTA_Unit_Roshan *const this, const CGameCheckTransmitInfo *pInfo)
{
  return CBaseEntity::ShouldTransmit(this, pInfo);
}


// CDOTA_Ability_Roshan_SpellBlock::~CDOTA_Ability_Roshan_SpellBlock  (line 688, @0x0000000002b1c730, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Roshan_SpellBlock::~CDOTA_Ability_Roshan_SpellBlock(
        CDOTA_Ability_Roshan_SpellBlock *const this)
{
  this->_vptr_IHandleEntity = &off_447D750;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Roshan_SpellBlock::~CDOTA_Ability_Roshan_SpellBlock  (line 688, @0x0000000002b1c750, libserver.so)  // inlines: ~CDOTA_Ability_Roshan_SpellBlock
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Roshan_SpellBlock::~CDOTA_Ability_Roshan_SpellBlock(
        CDOTA_Ability_Roshan_SpellBlock *const this)
{
  this->_vptr_IHandleEntity = &off_447D750;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Roshan_SpellBlock::Schema_DynamicBinding  (line 690, @0x0000000002b17030, libserver.so)
// globals: CDOTA_Ability_Roshan_SpellBlock::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Roshan_SpellBlock::Schema_DynamicBinding(
        const CDOTA_Ability_Roshan_SpellBlock *const this)
{
  return CDOTA_Ability_Roshan_SpellBlock::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 690, @0x0000000002b17040, libserver.so)
// globals: CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::DestructInstance  (line 690, @0x0000000002b17050, libserver.so)  // inlines: Destruct<CDOTA_Ability_Roshan_SpellBlock>
void __fastcall CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::FreeInstance  (line 690, @0x0000000002b17070, libserver.so)
void __fastcall CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::CanAllocate  (line 690, @0x0000000002b17090, libserver.so)
bool __fastcall CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 690, @0x0000000002b170a0, libserver.so)
// globals: CDOTA_Ability_Roshan_SpellBlock::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Roshan_SpellBlock::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::AllocateInstance  (line 690, @0x0000000002b196b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::ConstructInstance  (line 690, @0x0000000002b1b9b0, libserver.so)  // inlines: CDOTA_Ability_Roshan_SpellBlock, Construct<CDOTA_Ability_Roshan_SpellBlock>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_447D750;
  }
  return p;
}


// CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 690, @0x0000000002b22590, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 690, @0x0000000002b225b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal  (line 690, @0x0000000002b2ec50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Roshan_SpellBlock"
// globals: `guard variable for'CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass, CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass, __dso_handle, CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClassInfo, CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClassInfo
CEntityClass *__cdecl CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass);
    CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass._vptr_CEntityClass = off_447D6D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass);
    __cxa_atexit(
      CDOTA_Ability_Roshan_SpellBlock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Roshan_SpellBlockClass != 0 )
    return &CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass;
  if ( `guard variable for'CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClassInfo,
      "CDOTA_Ability_Roshan_SpellBlock",
      "roshan_spell_block",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClassInfo);
  }
  CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass.m_pClassInfo = &CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClassInfo;
  CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass.m_pBaseClassInfo = CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Roshan_SpellBlockClass = &CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass;
  CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClassInfo.m_pClass = &CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass;
  CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Roshan_SpellBlockClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Roshan_SpellBlock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SpellBlockClass;
}


// CDOTA_Ability_Roshan_SpellBlock::GetIntrinsicModifierName  (line 693, @0x0000000002b170b0, libserver.so)
// strings: "modifier_roshan_spell_block"
const char *__fastcall CDOTA_Ability_Roshan_SpellBlock::GetIntrinsicModifierName(
        CDOTA_Ability_Roshan_SpellBlock *const this)
{
  return "modifier_roshan_spell_block";
}


// CDOTA_Modifier_Roshan_SpellBlock::~CDOTA_Modifier_Roshan_SpellBlock  (line 702, @0x0000000002b19e60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Roshan_SpellBlock::~CDOTA_Modifier_Roshan_SpellBlock(
        CDOTA_Modifier_Roshan_SpellBlock *const this)
{
  this->_vptr_CDOTA_Buff = &off_447E210;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Roshan_SpellBlock::~CDOTA_Modifier_Roshan_SpellBlock  (line 702, @0x0000000002b19e80, libserver.so)  // inlines: ~CDOTA_Modifier_Roshan_SpellBlock
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Roshan_SpellBlock::~CDOTA_Modifier_Roshan_SpellBlock(
        CDOTA_Modifier_Roshan_SpellBlock *const this)
{
  this->_vptr_CDOTA_Buff = &off_447E210;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Roshan_SpellBlock::DeclareFunctions  (line 716, @0x0000000002ae8580, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Roshan_SpellBlock::DeclareFunctions(CDOTA_Modifier_Roshan_SpellBlock *const this)
{
  this->m_Functions[93].__pfn = (&stru_10 + 697);
  this->m_Functions[93].__delta = 0;
}


// CDOTA_Modifier_Roshan_SpellBlock::GetAbsorbSpell  (line 723, @0x0000000002ae8d70, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/items_fx/immunity_sphere.vpcf", "attach_hitloc", "DOTA_Item.LinkensSphere.Activate"
ModifierVariant_t __fastcall CDOTA_Modifier_Roshan_SpellBlock::GetAbsorbSpell(
        CDOTA_Modifier_Roshan_SpellBlock *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // r12
  void (__fastcall *v6)(CDOTABaseAbility *); // r13
  CDOTABaseAbility *v7; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  ModifierVariant_t result; // 0:rax.16

  Ability = CDOTA_Buff::GetAbility(this);
  if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 )
  {
    v5 = CDOTA_Buff::GetAbility(this);
    v6 = *(v5->_vptr_IHandleEntity + 241);
    v7 = CDOTA_Buff::GetAbility(this);
    (*(v7->_vptr_IHandleEntity + 242))(v7, 0xFFFFFFFFLL);
    v6(v5);
    Parent = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/items_fx/immunity_sphere.vpcf",
                        2,
                        Parent,
                        0,
                        0);
    v10 = CDOTA_Buff::GetParent(this);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v11, Parent, 0, v10, 5, "attach_hitloc", vec3_invalid, 1);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v12, Parent);
    v13 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v13, "DOTA_Item.LinkensSphere.Activate", 0.0, 0, 0);
    *&result.m_eType = 0x3F80000000000001LL;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Roshan_Bash::~CDOTA_Ability_Roshan_Bash  (line 747, @0x0000000002b1c780, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Roshan_Bash::~CDOTA_Ability_Roshan_Bash(CDOTA_Ability_Roshan_Bash *const this)
{
  this->_vptr_IHandleEntity = &off_447E570;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Roshan_Bash::~CDOTA_Ability_Roshan_Bash  (line 747, @0x0000000002b1c7a0, libserver.so)  // inlines: ~CDOTA_Ability_Roshan_Bash
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Roshan_Bash::~CDOTA_Ability_Roshan_Bash(CDOTA_Ability_Roshan_Bash *const this)
{
  this->_vptr_IHandleEntity = &off_447E570;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Roshan_Bash::Schema_DynamicBinding  (line 749, @0x0000000002b170c0, libserver.so)
// globals: CDOTA_Ability_Roshan_Bash::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Roshan_Bash::Schema_DynamicBinding(
        const CDOTA_Ability_Roshan_Bash *const this)
{
  return CDOTA_Ability_Roshan_Bash::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 749, @0x0000000002b170d0, libserver.so)
// globals: CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::DestructInstance  (line 749, @0x0000000002b170e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Roshan_Bash>
void __fastcall CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::FreeInstance  (line 749, @0x0000000002b17100, libserver.so)
void __fastcall CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::CanAllocate  (line 749, @0x0000000002b17120, libserver.so)
bool __fastcall CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 749, @0x0000000002b17130, libserver.so)
// globals: CDOTA_Ability_Roshan_Bash::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Roshan_Bash::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::AllocateInstance  (line 749, @0x0000000002b196f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::ConstructInstance  (line 749, @0x0000000002b1b9e0, libserver.so)  // inlines: CDOTA_Ability_Roshan_Bash, Construct<CDOTA_Ability_Roshan_Bash>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_447E570;
  }
  return p;
}


// CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 749, @0x0000000002b225e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 749, @0x0000000002b22600, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Roshan_Bash::GetEntityClassInternal  (line 749, @0x0000000002b2eda0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Roshan_Bash"
// globals: `guard variable for'CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass, CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass, __dso_handle, CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Roshan_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_BashClassInfo, CDOTA_Ability_Roshan_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_BashClassInfo
CEntityClass *__cdecl CDOTA_Ability_Roshan_Bash::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass);
    CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass._vptr_CEntityClass = off_447E4F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass);
    __cxa_atexit(
      CDOTA_Ability_Roshan_Bash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Roshan_BashClass != 0 )
    return &CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass;
  if ( `guard variable for'CDOTA_Ability_Roshan_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_BashClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Roshan_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_BashClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Roshan_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_BashClassInfo,
      "CDOTA_Ability_Roshan_Bash",
      "roshan_bash",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Roshan_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_BashClassInfo);
  }
  CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass.m_pClassInfo = &CDOTA_Ability_Roshan_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_BashClassInfo;
  CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass.m_pBaseClassInfo = CDOTA_Ability_Roshan_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_BashClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Roshan_BashClass = &CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass;
  CDOTA_Ability_Roshan_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_BashClassInfo.m_pClass = &CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass;
  CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Roshan_BashClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Roshan_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_BashClass;
}


// CDOTA_Ability_Roshan_Bash::GetIntrinsicModifierName  (line 752, @0x0000000002b17140, libserver.so)
// strings: "modifier_roshan_bash"
const char *__fastcall CDOTA_Ability_Roshan_Bash::GetIntrinsicModifierName(CDOTA_Ability_Roshan_Bash *const this)
{
  return "modifier_roshan_bash";
}


// CDOTA_Modifier_Roshan_Bash::~CDOTA_Modifier_Roshan_Bash  (line 761, @0x0000000002b19e10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Roshan_Bash::~CDOTA_Modifier_Roshan_Bash(CDOTA_Modifier_Roshan_Bash *const this)
{
  this->_vptr_CDOTA_Buff = &off_447F030;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Roshan_Bash::~CDOTA_Modifier_Roshan_Bash  (line 761, @0x0000000002b19e30, libserver.so)  // inlines: ~CDOTA_Modifier_Roshan_Bash
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Roshan_Bash::~CDOTA_Modifier_Roshan_Bash(CDOTA_Modifier_Roshan_Bash *const this)
{
  this->_vptr_CDOTA_Buff = &off_447F030;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Roshan_Bash::IsHidden  (line 766, @0x0000000002b17150, libserver.so)
bool __fastcall CDOTA_Modifier_Roshan_Bash::IsHidden(CDOTA_Modifier_Roshan_Bash *const this)
{
  return 1;
}


// CDOTA_Modifier_Roshan_Bash::OnCreated  (line 785, @0x0000000002b0aa00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bash_chance"
void __fastcall CDOTA_Modifier_Roshan_Bash::OnCreated(CDOTA_Modifier_Roshan_Bash *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bash_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bash_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_damage = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bash_chance = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "stun_duration", -1, 0);
    return;
  }
LABEL_7:
  this->stun_duration = 0.0;
}


// CDOTA_Modifier_Roshan_Bash::DeclareFunctions  (line 794, @0x0000000002ae85a0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Roshan_Bash::DeclareFunctions(CDOTA_Modifier_Roshan_Bash *const this)
{
  this->m_Functions[4].__pfn = (&stru_10 + 697);
  this->m_Functions[4].__delta = 0;
}


// CDOTA_Modifier_Roshan_Bash::GetModifierProcAttack_BonusDamage_Physical  (line 801, @0x0000000002af1750, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, CDOTA_Buff::GetCaster, __stack_chk_fail, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, _Unwind_Resume
// strings: "roshan_bash_stun", "modifier_bashed", "Roshan.Bash"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Roshan_Bash::GetModifierProcAttack_BonusDamage_Physical(
        CDOTA_Modifier_Roshan_Bash *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  bool v5; // al
  unsigned __int64 v6; // rdx
  CDOTA_BaseNPC *Caster; // rax
  __m128i v9; // xmm1
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float v14; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  v5 = RollPseudoRandomPercentage(this->bash_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_BASHER, Parent);
  v6 = 1;
  if ( v5 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    v6 = 1;
    if ( (Caster->m_nUnitState64.m_Value & 0x10000000) == 0 )
    {
      m_Index = params->htarget.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[params->htarget.m_Index & 0x1FF];
          if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
          {
            m_pInstance = v12->m_pInstance;
            if ( v12->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && (m_pInstance->m_iUnitType & 0x193) != 0 )
            {
              KeyValues::KeyValues(&kv, "roshan_bash_stun");
              KeyValues::SetFloat(&kv, "duration", v14);
              Ability = CDOTA_Buff::GetAbility(this);
              v16 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v16, Ability, "modifier_bashed", &kv, 0);
              v17 = CDOTA_Buff::GetParent(this);
              CDOTA_BaseNPC::UnitEmitSound(v17, "Roshan.Bash", 0.0, 0, 0);
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
      *v9.m128i_i32 = this->bonus_damage;
      return ((_mm_cvtsi128_si32(v9) << 32) | 1);
    }
  }
  return v6;
}


// CDOTA_Ability_Roshan_Slam::~CDOTA_Ability_Roshan_Slam  (line 830, @0x0000000002b1c7d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Roshan_Slam::~CDOTA_Ability_Roshan_Slam(CDOTA_Ability_Roshan_Slam *const this)
{
  this->_vptr_IHandleEntity = &off_447F390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Roshan_Slam::~CDOTA_Ability_Roshan_Slam  (line 830, @0x0000000002b1c7f0, libserver.so)  // inlines: ~CDOTA_Ability_Roshan_Slam
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Roshan_Slam::~CDOTA_Ability_Roshan_Slam(CDOTA_Ability_Roshan_Slam *const this)
{
  this->_vptr_IHandleEntity = &off_447F390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Roshan_Slam::Schema_DynamicBinding  (line 832, @0x0000000002b17160, libserver.so)
// globals: CDOTA_Ability_Roshan_Slam::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Roshan_Slam::Schema_DynamicBinding(
        const CDOTA_Ability_Roshan_Slam *const this)
{
  return CDOTA_Ability_Roshan_Slam::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 832, @0x0000000002b17170, libserver.so)
// globals: CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::DestructInstance  (line 832, @0x0000000002b17180, libserver.so)  // inlines: Destruct<CDOTA_Ability_Roshan_Slam>
void __fastcall CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::FreeInstance  (line 832, @0x0000000002b171a0, libserver.so)
void __fastcall CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::CanAllocate  (line 832, @0x0000000002b171c0, libserver.so)
bool __fastcall CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 832, @0x0000000002b171d0, libserver.so)
// globals: CDOTA_Ability_Roshan_Slam::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Roshan_Slam::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::AllocateInstance  (line 832, @0x0000000002b19730, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::ConstructInstance  (line 832, @0x0000000002b1ba10, libserver.so)  // inlines: CDOTA_Ability_Roshan_Slam, Construct<CDOTA_Ability_Roshan_Slam>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_447F390;
  }
  return p;
}


// CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 832, @0x0000000002b22630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 832, @0x0000000002b22650, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Roshan_Slam::GetEntityClassInternal  (line 832, @0x0000000002b2eef0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Roshan_Slam"
// globals: `guard variable for'CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass, CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass, __dso_handle, CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Roshan_Slam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SlamClassInfo, CDOTA_Ability_Roshan_Slam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SlamClassInfo
CEntityClass *__cdecl CDOTA_Ability_Roshan_Slam::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass);
    CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass._vptr_CEntityClass = off_447F310;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass);
    __cxa_atexit(
      CDOTA_Ability_Roshan_Slam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Roshan_SlamClass != 0 )
    return &CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass;
  if ( `guard variable for'CDOTA_Ability_Roshan_Slam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SlamClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Roshan_Slam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SlamClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Roshan_Slam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SlamClassInfo,
      "CDOTA_Ability_Roshan_Slam",
      "roshan_slam",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Roshan_Slam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SlamClassInfo);
  }
  CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass.m_pClassInfo = &CDOTA_Ability_Roshan_Slam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SlamClassInfo;
  CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass.m_pBaseClassInfo = CDOTA_Ability_Roshan_Slam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SlamClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Roshan_SlamClass = &CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass;
  CDOTA_Ability_Roshan_Slam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_SlamClassInfo.m_pClass = &CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass;
  CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Roshan_SlamClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Roshan_Slam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_SlamClass;
}


// CDOTA_Ability_Roshan_Slam::ShouldNeutralCast  (line 838, @0x0000000002b171e0, libserver.so)
bool __fastcall CDOTA_Ability_Roshan_Slam::ShouldNeutralCast(CDOTA_Ability_Roshan_Slam *const this)
{
  return 1;
}


// CDOTA_Ability_Roshan_Slam::GetNeutralCastType  (line 839, @0x0000000002b171f0, libserver.so)
int __fastcall CDOTA_Ability_Roshan_Slam::GetNeutralCastType(CDOTA_Ability_Roshan_Slam *const this)
{
  return 4;
}


// CDOTA_Ability_Roshan_Slam::OnAbilityPhaseStart  (line 847, @0x0000000002ae9cf0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, DOTA_EmitSound
// strings: "Roshan.PreAttack"
bool __fastcall CDOTA_Ability_Roshan_Slam::OnAbilityPhaseStart(CDOTA_Ability_Roshan_Slam *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Roshan.PreAttack", Caster);
  return 1;
}


// CDOTA_Ability_Roshan_Slam::OnSpellStart  (line 858, @0x0000000002b09760, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTAGamerules::GetDOTATime, ceilf, ApplyDamage, KeyValues::~KeyValues (20 total)
// strings: "slow_duration_hero", "slow_duration_unit", "modifier_roshan_slam", "particles/neutral_fx/roshan_slam.vpcf", "Roshan.Slam"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Roshan_Slam::OnSpellStart(CDOTA_Ability_Roshan_Slam *const this)
{
  int LevelSpecialValue; // ebx
  int v3; // r15d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float v15; // xmm1_4
  CDOTA_BaseNPC *v16; // rax
  float DOTATime; // xmm0_4
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // r13
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  float flRadius; // [rsp+20h] [rbp-90h]
  float flDamage; // [rsp+2Ch] [rbp-84h]
  double v29; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration_hero", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration_unit", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  flRadius = LevelSpecialValue;
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &entities, 2, 19, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = &entities.m_Memory.m_pMemory[v8];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 > 1 )
        {
          v11 = v9->m_Index;
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[v11 & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            {
              m_pInstance = v13->m_pInstance;
              if ( v13->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( entities.m_Size <= ++v8 )
          goto LABEL_11;
      }
      KeyValues::KeyValues(&kv, "modifier_roshan_slam");
      KeyValues::SetFloat(&kv, "duration", v15);
      v16 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v16, this, "modifier_roshan_slam", &kv, 0);
      DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
      flDamage = (ceilf(DOTATime / dota_roshan_upgrade_rate.m_pParent->m_Value.m_fValue) * 20.0) + v3;
      v18 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v18, m_pInstance, this, flDamage, 2, 0);
      KeyValues::~KeyValues(&kv);
      ++v8;
    }
    while ( entities.m_Size > v8 );
  }
LABEL_11:
  v19 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v19) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/neutral_fx/roshan_slam.vpcf",
                   2,
                   v19,
                   0,
                   0);
  v21 = CDOTABaseAbility::GetCaster(this);
  v22 = CBaseEntity::GetAbsOrigin(v21);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v23, v19, 0, *&v22->x, v22->z);
  *&v29 = flRadius;
  *(&v29 + 1) = flRadius;
  v24 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v24, v19, 1, v29, flRadius);
  v25 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v25, v19);
  v26 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v26, "Roshan.Slam", 0.0, 0, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Roshan_Slam::~CDOTA_Modifier_Roshan_Slam  (line 905, @0x0000000002b19dc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Roshan_Slam::~CDOTA_Modifier_Roshan_Slam(CDOTA_Modifier_Roshan_Slam *const this)
{
  this->_vptr_CDOTA_Buff = &off_447FE50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Roshan_Slam::~CDOTA_Modifier_Roshan_Slam  (line 905, @0x0000000002b19de0, libserver.so)  // inlines: ~CDOTA_Modifier_Roshan_Slam
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Roshan_Slam::~CDOTA_Modifier_Roshan_Slam(CDOTA_Modifier_Roshan_Slam *const this)
{
  this->_vptr_CDOTA_Buff = &off_447FE50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Roshan_Slam::OnCreated  (line 926, @0x0000000002b09c00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_amount"
void __fastcall CDOTA_Modifier_Roshan_Slam::OnCreated(CDOTA_Modifier_Roshan_Slam *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_amount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_amount", -1, 0);
  else
    this->slow_amount = 0;
}


// CDOTA_Modifier_Roshan_Slam::DeclareFunctions  (line 933, @0x0000000002ae85c0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Roshan_Slam::DeclareFunctions(CDOTA_Modifier_Roshan_Slam *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Roshan_Slam::GetModifierMoveSpeedBonus_Percentage  (line 941, @0x0000000002ae8600, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Roshan_Slam::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Roshan_Slam *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->slow_amount;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Roshan_Slam::GetModifierAttackSpeedBonus_Constant  (line 948, @0x0000000002ae8620, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Roshan_Slam::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Roshan_Slam *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->slow_amount;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Roshan_InherentBuffs::~CDOTA_Ability_Roshan_InherentBuffs  (line 957, @0x0000000002b1c820, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Roshan_InherentBuffs::~CDOTA_Ability_Roshan_InherentBuffs(
        CDOTA_Ability_Roshan_InherentBuffs *const this)
{
  this->_vptr_IHandleEntity = &off_44801D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Roshan_InherentBuffs::~CDOTA_Ability_Roshan_InherentBuffs  (line 957, @0x0000000002b1c840, libserver.so)  // inlines: ~CDOTA_Ability_Roshan_InherentBuffs
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Roshan_InherentBuffs::~CDOTA_Ability_Roshan_InherentBuffs(
        CDOTA_Ability_Roshan_InherentBuffs *const this)
{
  this->_vptr_IHandleEntity = &off_44801D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Roshan_InherentBuffs::Schema_DynamicBinding  (line 959, @0x0000000002b17200, libserver.so)
// globals: CDOTA_Ability_Roshan_InherentBuffs::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Roshan_InherentBuffs::Schema_DynamicBinding(
        const CDOTA_Ability_Roshan_InherentBuffs *const this)
{
  return CDOTA_Ability_Roshan_InherentBuffs::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 959, @0x0000000002b17210, libserver.so)
// globals: CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::DestructInstance  (line 959, @0x0000000002b17220, libserver.so)  // inlines: Destruct<CDOTA_Ability_Roshan_InherentBuffs>
void __fastcall CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::FreeInstance  (line 959, @0x0000000002b17240, libserver.so)
void __fastcall CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::CanAllocate  (line 959, @0x0000000002b17260, libserver.so)
bool __fastcall CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 959, @0x0000000002b17270, libserver.so)
// globals: CDOTA_Ability_Roshan_InherentBuffs::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Roshan_InherentBuffs::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::AllocateInstance  (line 959, @0x0000000002b19770, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::ConstructInstance  (line 959, @0x0000000002b1ba40, libserver.so)  // inlines: CDOTA_Ability_Roshan_InherentBuffs, Construct<CDOTA_Ability_Roshan_InherentBuffs>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44801D0;
  }
  return p;
}


// CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 959, @0x0000000002b22680, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 959, @0x0000000002b226a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal  (line 959, @0x0000000002b2f040, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "roshan_inherent_buffs", "CDOTA_Ability_Roshan_InherentBuffs"
// globals: `guard variable for'CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass, CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass, __dso_handle, CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClassInfo, CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass);
    CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass._vptr_CEntityClass = off_4480150;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass);
    __cxa_atexit(
      CDOTA_Ability_Roshan_InherentBuffs::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Roshan_InherentBuffsClass != 0 )
    return &CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass;
  if ( `guard variable for'CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClassInfo,
      "CDOTA_Ability_Roshan_InherentBuffs",
      "roshan_inherent_buffs",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClassInfo);
  }
  CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass.m_pClassInfo = &CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClassInfo;
  CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass.m_pBaseClassInfo = CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Roshan_InherentBuffsClass = &CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass;
  CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClassInfo.m_pClass = &CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass;
  CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Roshan_InherentBuffsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Roshan_InherentBuffs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_InherentBuffsClass;
}


// CDOTA_Ability_Roshan_InherentBuffs::GetIntrinsicModifierName  (line 962, @0x0000000002b17280, libserver.so)
// strings: "modifier_roshan_inherent_buffs"
const char *__fastcall CDOTA_Ability_Roshan_InherentBuffs::GetIntrinsicModifierName(
        CDOTA_Ability_Roshan_InherentBuffs *const this)
{
  return "modifier_roshan_inherent_buffs";
}


// CDOTA_Modifier_Roshan_InherentBuffs::~CDOTA_Modifier_Roshan_InherentBuffs  (line 971, @0x0000000002b19d70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Roshan_InherentBuffs::~CDOTA_Modifier_Roshan_InherentBuffs(
        CDOTA_Modifier_Roshan_InherentBuffs *const this)
{
  this->_vptr_CDOTA_Buff = &off_4480C90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Roshan_InherentBuffs::~CDOTA_Modifier_Roshan_InherentBuffs  (line 971, @0x0000000002b19d90, libserver.so)  // inlines: ~CDOTA_Modifier_Roshan_InherentBuffs
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Roshan_InherentBuffs::~CDOTA_Modifier_Roshan_InherentBuffs(
        CDOTA_Modifier_Roshan_InherentBuffs *const this)
{
  this->_vptr_CDOTA_Buff = &off_4480C90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Roshan_InherentBuffs::IsHidden  (line 976, @0x0000000002b17290, libserver.so)
bool __fastcall CDOTA_Modifier_Roshan_InherentBuffs::IsHidden(CDOTA_Modifier_Roshan_InherentBuffs *const this)
{
  return 1;
}


// CDOTA_Modifier_Roshan_InherentBuffs::DeclareFunctions  (line 990, @0x0000000002ae8640, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Roshan_InherentBuffs::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Roshan_InherentBuffs::DeclareFunctions(CDOTA_Modifier_Roshan_InherentBuffs *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Roshan_InherentBuffs::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[137].__pfn = (&stru_10 + 697);
  this->m_Functions[137].__delta = 0;
  this->m_Functions[0].__pfn = (&stru_10 + 705);
  this->m_Functions[0].__delta = 0;
  this->m_Functions[155].__pfn = (&stru_10 + 713);
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Roshan_InherentBuffs::GetModifierAttackSpeedBonus_Constant  (line 998, @0x0000000002ae86b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Roshan_InherentBuffs::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Roshan_InherentBuffs *const this,
        const CModifierParams *const params)
{
  return 0x42C8000000000001uLL;
}


// CDOTA_Modifier_Roshan_InherentBuffs::OnAttacked  (line 1005, @0x0000000002af1010, libserver.so)  // inlines: AttackerNPC, CEntityHandle, DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTAPlayer, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Kill, CDOTAPlayer::SetLastOrderTime
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Roshan_InherentBuffs::OnAttacked(
        CDOTA_Modifier_Roshan_InherentBuffs *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rbx
  CDOTA_BaseNPC *Caster; // r13
  CDOTABaseAbility *Ability; // rax
  unsigned __int16 v15; // dx
  int v16; // esi
  int v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTAPlayer *v20; // rbx
  float v21; // xmm1_4
  float v22; // xmm0_4

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->htarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v9 = params->hattacker.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[params->hattacker.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v11->m_pInstance != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
                {
                  if ( LOBYTE(v12[71].m_pEntity) != 0 )
                  {
                    Caster = CDOTA_Buff::GetCaster(this);
                    Ability = CDOTA_Buff::GetAbility(this);
                    CDOTA_BaseNPC::Kill(v12, Ability, Caster, 0.0, 0);
                  }
                  if ( HIDWORD(v12[11].m_pEntity) == -1 )
                  {
                    v15 = 0x7FFF;
                    v16 = 0x7FFF;
                  }
                  else
                  {
                    v15 = WORD2(v12[11].m_pEntity) & 0x7FFF;
                    v16 = v15;
                  }
                  v17 = (HIDWORD(v12[11].m_pEntity) >> 15 << 15) | v15 & 0x7FFF;
                  if ( (v17 + 2) > 1 )
                  {
                    v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9];
                    if ( v18 != 0 )
                    {
                      v19 = &v18[v16 & 0x1FF];
                      if ( v19 != 0 && v17 == v19->m_EHandle.m_Index )
                      {
                        v20 = v19->m_pInstance;
                        if ( v19->m_pInstance != 0 && (*(v20->_vptr_IHandleEntity + 140))(v19->m_pInstance) != 0 )
                        {
                          v22 = 0.0;
                          if ( g_pGameRules != 0 )
                            v22 = *&g_pGameRules[18].m_szQuestName[20];
                          CDOTAPlayer::SetLastOrderTime(v20, v22, v21, 1);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Roshan_InherentBuffs::GetModifierPreAttack_BonusDamage  (line 1031, @0x0000000002afaf50, libserver.so)  // inlines: GetFloat
// calls: CDOTA_Buff::GetParent, CDOTA_Unit_Roshan::UpdateMaxHealth, CDOTAGamerules::GetDOTATime, floorf
ModifierVariant_t __fastcall CDOTA_Modifier_Roshan_InherentBuffs::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Roshan_InherentBuffs *const this,
        const CModifierParams *const params)
{
  CDOTA_Unit_Roshan *Parent; // rax
  float DOTATime; // xmm0_4
  float v4; // xmm0_4
  __int64 v5; // xmm0_8
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_Unit_Roshan::UpdateMaxHealth(Parent);
  DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
  v4 = floorf(DOTATime / dota_roshan_upgrade_rate.m_pParent->m_Value.m_fValue);
  result.m_szVal = 0;
  *&v5 = v4 * 10.0;
  *&result.m_eType = (v5 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Roshan_InherentBuffs::GetModifierTranslateActivityModifiers  (line 1044, @0x0000000002ae86d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Roshan_InherentBuffs::GetModifierTranslateActivityModifiers(
        CDOTA_Modifier_Roshan_InherentBuffs *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "roshan";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Ability_Roshan_Devotion::~CDOTA_Ability_Roshan_Devotion  (line 1053, @0x0000000002b1c870, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Roshan_Devotion::~CDOTA_Ability_Roshan_Devotion(
        CDOTA_Ability_Roshan_Devotion *const this)
{
  this->_vptr_IHandleEntity = &off_4481010;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Roshan_Devotion::~CDOTA_Ability_Roshan_Devotion  (line 1053, @0x0000000002b1c890, libserver.so)  // inlines: ~CDOTA_Ability_Roshan_Devotion
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Roshan_Devotion::~CDOTA_Ability_Roshan_Devotion(
        CDOTA_Ability_Roshan_Devotion *const this)
{
  this->_vptr_IHandleEntity = &off_4481010;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Roshan_Devotion::Schema_DynamicBinding  (line 1055, @0x0000000002b172a0, libserver.so)
// globals: CDOTA_Ability_Roshan_Devotion::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Roshan_Devotion::Schema_DynamicBinding(
        const CDOTA_Ability_Roshan_Devotion *const this)
{
  return CDOTA_Ability_Roshan_Devotion::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1055, @0x0000000002b172b0, libserver.so)
// globals: CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::DestructInstance  (line 1055, @0x0000000002b172c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Roshan_Devotion>
void __fastcall CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::FreeInstance  (line 1055, @0x0000000002b172e0, libserver.so)
void __fastcall CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::CanAllocate  (line 1055, @0x0000000002b17300, libserver.so)
bool __fastcall CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1055, @0x0000000002b17310, libserver.so)
// globals: CDOTA_Ability_Roshan_Devotion::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Roshan_Devotion::s_pSchemaBinding;
}


// CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::AllocateInstance  (line 1055, @0x0000000002b197b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::ConstructInstance  (line 1055, @0x0000000002b1ba70, libserver.so)  // inlines: CDOTA_Ability_Roshan_Devotion, Construct<CDOTA_Ability_Roshan_Devotion>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4481010;
  }
  return p;
}


// CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1055, @0x0000000002b226d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1055, @0x0000000002b226f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal  (line 1055, @0x0000000002b2f190, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Roshan_Devotion"
// globals: `guard variable for'CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass, CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass, __dso_handle, CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Roshan_Devotion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_DevotionClassInfo, CDOTA_Ability_Roshan_Devotion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_DevotionClassInfo
CEntityClass *__cdecl CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass);
    CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass._vptr_CEntityClass = off_4480F90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass);
    __cxa_atexit(
      CDOTA_Ability_Roshan_Devotion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Roshan_DevotionClass != 0 )
    return &CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass;
  if ( `guard variable for'CDOTA_Ability_Roshan_Devotion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_DevotionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Roshan_Devotion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_DevotionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Roshan_Devotion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_DevotionClassInfo,
      "CDOTA_Ability_Roshan_Devotion",
      "roshan_devotion",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Roshan_Devotion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_DevotionClassInfo);
  }
  CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass.m_pClassInfo = &CDOTA_Ability_Roshan_Devotion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_DevotionClassInfo;
  CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass.m_pBaseClassInfo = CDOTA_Ability_Roshan_Devotion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_DevotionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Roshan_DevotionClass = &CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass;
  CDOTA_Ability_Roshan_Devotion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Roshan_DevotionClassInfo.m_pClass = &CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass;
  CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Roshan_DevotionClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Roshan_Devotion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Roshan_DevotionClass;
}


// CDOTA_Ability_Roshan_Devotion::GetIntrinsicModifierName  (line 1058, @0x0000000002b17320, libserver.so)
// strings: "modifier_roshan_devotion_aura"
const char *__fastcall CDOTA_Ability_Roshan_Devotion::GetIntrinsicModifierName(
        CDOTA_Ability_Roshan_Devotion *const this)
{
  return "modifier_roshan_devotion_aura";
}


// CDOTA_Modifier_Roshan_DevotionAura::~CDOTA_Modifier_Roshan_DevotionAura  (line 1067, @0x0000000002b19d20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Roshan_DevotionAura::~CDOTA_Modifier_Roshan_DevotionAura(
        CDOTA_Modifier_Roshan_DevotionAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4481AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Roshan_DevotionAura::~CDOTA_Modifier_Roshan_DevotionAura  (line 1067, @0x0000000002b19d40, libserver.so)  // inlines: ~CDOTA_Modifier_Roshan_DevotionAura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Roshan_DevotionAura::~CDOTA_Modifier_Roshan_DevotionAura(
        CDOTA_Modifier_Roshan_DevotionAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4481AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Roshan_DevotionAura::IsHidden  (line 1072, @0x0000000002b17330, libserver.so)
bool __fastcall CDOTA_Modifier_Roshan_DevotionAura::IsHidden(CDOTA_Modifier_Roshan_DevotionAura *const this)
{
  return 1;
}


// CDOTA_Modifier_Roshan_DevotionAura::IsAura  (line 1076, @0x0000000002b17340, libserver.so)
bool __fastcall CDOTA_Modifier_Roshan_DevotionAura::IsAura(CDOTA_Modifier_Roshan_DevotionAura *const this)
{
  return 1;
}


// CDOTA_Modifier_Roshan_DevotionAura::GetModifierAura  (line 1077, @0x0000000002b17350, libserver.so)
// strings: "modifier_roshan_devotion"
const char *__fastcall CDOTA_Modifier_Roshan_DevotionAura::GetModifierAura(
        CDOTA_Modifier_Roshan_DevotionAura *const this)
{
  return "modifier_roshan_devotion";
}


// CDOTA_Modifier_Roshan_DevotionAura::GetAuraSearchTeam  (line 1078, @0x0000000002b17360, libserver.so)
int __fastcall CDOTA_Modifier_Roshan_DevotionAura::GetAuraSearchTeam(CDOTA_Modifier_Roshan_DevotionAura *const this)
{
  return 1;
}


// CDOTA_Modifier_Roshan_DevotionAura::GetAuraSearchType  (line 1079, @0x0000000002b17370, libserver.so)
int __fastcall CDOTA_Modifier_Roshan_DevotionAura::GetAuraSearchType(CDOTA_Modifier_Roshan_DevotionAura *const this)
{
  return 19;
}


// CDOTA_Modifier_Roshan_DevotionAura::GetAuraSearchFlags  (line 1080, @0x0000000002b17380, libserver.so)
int __fastcall CDOTA_Modifier_Roshan_DevotionAura::GetAuraSearchFlags(CDOTA_Modifier_Roshan_DevotionAura *const this)
{
  return 0;
}


// CDOTA_Modifier_Roshan_DevotionAura::GetAuraRadius  (line 1081, @0x0000000002b17390, libserver.so)
int __fastcall CDOTA_Modifier_Roshan_DevotionAura::GetAuraRadius(CDOTA_Modifier_Roshan_DevotionAura *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Roshan_DevotionAura::OnCreated  (line 1092, @0x0000000002ae86f0, libserver.so)
void __fastcall CDOTA_Modifier_Roshan_DevotionAura::OnCreated(
        CDOTA_Modifier_Roshan_DevotionAura *const this,
        KeyValues *pKV)
{
  this->radius = 0;
}


// CDOTA_Modifier_Roshan_Devotion::~CDOTA_Modifier_Roshan_Devotion  (line 1106, @0x0000000002b19cd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Roshan_Devotion::~CDOTA_Modifier_Roshan_Devotion(
        CDOTA_Modifier_Roshan_Devotion *const this)
{
  this->_vptr_CDOTA_Buff = &off_4481DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Roshan_Devotion::~CDOTA_Modifier_Roshan_Devotion  (line 1106, @0x0000000002b19cf0, libserver.so)  // inlines: ~CDOTA_Modifier_Roshan_Devotion
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Roshan_Devotion::~CDOTA_Modifier_Roshan_Devotion(
        CDOTA_Modifier_Roshan_Devotion *const this)
{
  this->_vptr_CDOTA_Buff = &off_4481DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Roshan_Devotion::DeclareFunctions  (line 1119, @0x0000000002ae8700, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Roshan_Devotion::DeclareFunctions(CDOTA_Modifier_Roshan_Devotion *const this)
{
  this->m_Functions[45].__pfn = (&stru_10 + 697);
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Roshan_Devotion::GetModifierPhysicalArmorBonus  (line 1126, @0x0000000002aec040, libserver.so)  // inlines: GetFloat
// calls: CDOTAGamerules::GetDOTATime, ceilf
ModifierVariant_t __fastcall CDOTA_Modifier_Roshan_Devotion::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Roshan_Devotion *const this,
        const CModifierParams *const params)
{
  float DOTATime; // xmm0_4
  float v3; // xmm0_4
  __int64 v4; // xmm0_8
  ModifierVariant_t result; // 0:rax.16

  DOTATime = CDOTAGamerules::GetDOTATime(g_pGameRules, 0, 0, 0.0);
  v3 = ceilf(DOTATime / dota_roshan_upgrade_rate.m_pParent->m_Value.m_fValue);
  result.m_szVal = 0;
  *&v4 = v3 * 1.1;
  *&result.m_eType = (v4 << 32) | 1;
  return result;
}


