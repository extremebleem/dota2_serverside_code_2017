// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_npc_datadriven.cpp:81
class CDOTA_NPC_DataDriven : public CDOTA_BaseNPC_Additive {
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
	CDOTA_NPC_DataDriven(CDOTA_NPC_DataDriven &);
	CDOTA_NPC_DataDriven(CDOTA_NPC_DataDriven &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_NPC_DataDriven();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_NPC_DataDriven();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// sizeof = 4504
};

// src/game/shared/dota/dota_npc_datadriven.cpp:93
class C_CDOTA_NPC_DataDriven_MapInstall {
	C_CDOTA_NPC_DataDriven_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// dota_test_npc  (line 29, @0x00000000025e1c40, libserver.so)  // inlines: Arg, GetUnitsKeyValues, IsAddOnGame, SetValue, ToDOTAPlayer, VectorAdd, operator+, operator[]
// calls: UTIL_GetCommandClient, CDOTAGamerules::IsCheatMode, ConVarRef::ConVarRef, DOTA_ServerHasEntitySpace, DOTAGameManager, KeyValues::FindKey, KeyValues::GetName, DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::SetControllableByPlayer, FindClearSpaceForUnit, Msg, CDOTA_PlayerResource::SetUnitShareMaskForPlayer
// strings: "dota_bot_mode", "Not enough edict slots remaining to create entity!\n", "No squad specified\n", "Couldn't find unit by that name!"
void __fastcall dota_test_npc(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // rbx
  const char *v5; // r13
  _BOOL4 v6; // r12d
  int v7; // r12d
  CDOTAGameManager *v8; // rax
  KeyValues *m_pkvAddOnUnits; // rdi
  KeyValues *Key; // rax
  const char *Name; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // r12
  bool v14; // zf
  int (**vptr_IHandleEntity)(...); // rax
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  Vector vOrigin; // [rsp+0h] [rbp-40h]
  Vector vOrigina; // [rsp+0h] [rbp-40h]
  ConVarRef dota_bot_mode; // [rsp+10h] [rbp-30h] BYREF

  CommandClient = UTIL_GetCommandClient();
  v4 = CommandClient;
  if ( CommandClient != 0
    && (*(CommandClient->_vptr_IHandleEntity + 140))(CommandClient) != 0
    && CDOTAGamerules::IsCheatMode() )
  {
    v5 = "";
    if ( args->m_nArgc > 1 )
      v5 = args->m_ppArgv[1];
    if ( *v5 != 0 )
    {
      v6 = v4->m_iTeamNum.m_Value == 2;
      ConVarRef::ConVarRef(&dota_bot_mode, "dota_bot_mode");
      v7 = v6 + 2;
      (*(dota_bot_mode.m_pConVar->_vptr_IConVar + 2))(dota_bot_mode.m_pConVar, 1);
      if ( DOTA_ServerHasEntitySpace() )
      {
        v8 = DOTAGameManager();
        if ( v8->m_bCustomGame || v8->m_bEventGame )
          m_pkvAddOnUnits = v8->m_pkvAddOnUnits;
        else
          m_pkvAddOnUnits = v8->m_pkvUnits;
        Key = KeyValues::FindKey(m_pkvAddOnUnits, v5, 0);
        if ( Key != 0 )
        {
          Name = KeyValues::GetName(Key);
          v12 = DOTA_Character_ScriptSpawn_Synchronous(Name, vOrigin, v7, v4, 0, 0);
          v13 = v12;
          if ( v12 != 0 )
          {
            v14 = v12->m_iIsControllableByPlayer64.m_Value == 0;
            vOrigina.y = *&v4[1].m_pLink + 0.0;
            vptr_IHandleEntity = v4->_vptr_IHandleEntity;
            vOrigina.z = *(&v4[1].m_pLink + 1) + 10.0;
            vOrigina.x = *(&v4[1].m_pfnMoveDone.__delta + 1) + 0.0;
            if ( v14 )
            {
              v16 = vptr_IHandleEntity[393](v4);
              CDOTA_BaseNPC::SetControllableByPlayer(v13, v16, 0);
            }
            else
            {
              v17 = vptr_IHandleEntity[393](v4);
              v18 = (*(v13->_vptr_IHandleEntity + 414))(v13);
              CDOTA_PlayerResource::SetUnitShareMaskForPlayer(g_pDOTAPlayerResource, v18, v17, 3, 1);
            }
            FindClearSpaceForUnit(v13, vOrigina, 1);
          }
        }
        else
        {
          Msg("Couldn't find unit by that name!");
        }
      }
      else
      {
        Msg("Not enough edict slots remaining to create entity!\n");
      }
    }
    else
    {
      Msg("No squad specified\n");
    }
  }
}


// CDOTA_NPC_DataDriven::~CDOTA_NPC_DataDriven  (line 81, @0x000000000262f060, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_NPC_DataDriven::~CDOTA_NPC_DataDriven(CDOTA_NPC_DataDriven *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_NPC_DataDriven::~CDOTA_NPC_DataDriven  (line 81, @0x000000000262f0b0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_NPC_DataDriven
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_NPC_DataDriven::~CDOTA_NPC_DataDriven(CDOTA_NPC_DataDriven *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_NPC_DataDriven::Schema_DynamicBinding  (line 83, @0x0000000002628b90, libserver.so)
// globals: CDOTA_NPC_DataDriven::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_DataDriven::Schema_DynamicBinding(
        const CDOTA_NPC_DataDriven *const this)
{
  return CDOTA_NPC_DataDriven::s_pSchemaBinding;
}


// CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 83, @0x0000000002628bc0, libserver.so)
// globals: CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_NPC_DataDriven::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::DestructInstance  (line 83, @0x0000000002628bd0, libserver.so)  // inlines: Destruct<CDOTA_NPC_DataDriven>
void __fastcall CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_NPC_DataDriven::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::FreeInstance  (line 83, @0x0000000002628bf0, libserver.so)
void __fastcall CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_NPC_DataDriven::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::CanAllocate  (line 83, @0x0000000002628c10, libserver.so)
bool __fastcall CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_NPC_DataDriven::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 83, @0x0000000002628c20, libserver.so)
// globals: CDOTA_NPC_DataDriven::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_NPC_DataDriven::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_DataDriven::s_pSchemaBinding;
}


// CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::AllocateInstance  (line 83, @0x000000000262ed40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_NPC_DataDriven::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::ConstructInstance  (line 83, @0x000000000262f010, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_NPC_DataDriven, Construct<CDOTA_NPC_DataDriven>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_NPC_DataDriven::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_4167DD0;
    *(p + 236) = &off_4168D30;
    *(p + 257) = &off_4169060;
  }
  return p;
}


// CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 83, @0x0000000002635a10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_DataDriven::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 83, @0x0000000002635a60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_DataDriven::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_NPC_DataDriven::GetEntityClassInternal  (line 83, @0x0000000002646870, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_05.cpp
// strings: "npc_dota_datadriven", "CDOTA_NPC_DataDriven"
// globals: `guard variable for'CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass, CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass, __dso_handle, CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_NPC_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_DataDrivenClassInfo, CDOTA_NPC_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_DataDrivenClassInfo
CEntityClass *__cdecl CDOTA_NPC_DataDriven::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass);
    CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass._vptr_CEntityClass = off_4167D50;
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass);
    __cxa_atexit(
      CDOTA_NPC_DataDriven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_NPC_DataDrivenClass != 0 )
    return &CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass;
  if ( `guard variable for'CDOTA_NPC_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_DataDrivenClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_DataDrivenClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_NPC_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_DataDrivenClassInfo,
      "CDOTA_NPC_DataDriven",
      "npc_dota_datadriven",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_DataDrivenClassInfo);
  }
  CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass.m_pClassInfo = &CDOTA_NPC_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_DataDrivenClassInfo;
  CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass.m_pBaseClassInfo = CDOTA_NPC_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_DataDrivenClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_NPC_DataDrivenClass = &CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass;
  CDOTA_NPC_DataDriven::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_DataDrivenClassInfo.m_pClass = &CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass;
  CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_NPC_DataDrivenClass->m_pComponentOverrides = 0;
  return &CDOTA_NPC_DataDriven::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_DataDrivenClass;
}


// CDOTA_NPC_DataDriven::YouForgotToImplementOrDeclareServerClass  (line 93, @0x00000000025e0230, libserver.so)
int __fastcall CDOTA_NPC_DataDriven::YouForgotToImplementOrDeclareServerClass(CDOTA_NPC_DataDriven *const this)
{
  return 0;
}


// CDOTA_NPC_DataDriven::GetServerClass  (line 93, @0x00000000025e7dc0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_NPC_DataDriven::GetServerClass(CDOTA_NPC_DataDriven *const this)
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


// CDOTA_NPC_DataDriven::CDOTA_NPC_DataDriven  (line 100, @0x00000000025f8cb0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
void __fastcall CDOTA_NPC_DataDriven::CDOTA_NPC_DataDriven(CDOTA_NPC_DataDriven *const this)
{
  CDOTA_BaseNPC::CDOTA_BaseNPC(this);
  this->_vptr_IHandleEntity = &off_4167DD0;
  this->_vptr_INextBotEventResponder = &off_4168D30;
  this->_vptr_CObstructionObject = &off_4169060;
}


// CDOTA_NPC_DataDriven::Spawn  (line 104, @0x00000000025e1b60, libserver.so)
// calls: CDOTA_BaseNPC::Spawn, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::UpgradeAbility
void __fastcall CDOTA_NPC_DataDriven::Spawn(CDOTA_NPC_DataDriven *const this, const CEntityKeyValues *pKeyValues)
{
  int v3; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax

  v3 = 0;
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  do
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(this, v3) != 0 )
    {
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v3);
      CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
    }
    ++v3;
  }
  while ( v3 != 24 );
}


