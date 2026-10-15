
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Modifier_Lua::~CDOTA_Modifier_Lua  (line 35, @0x000000000264f6a0, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<modifierfunction, int>::Purge
void __fastcall CDOTA_Modifier_Lua::~CDOTA_Modifier_Lua(CDOTA_Modifier_Lua *const this)
{
  bool v2; // zf
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v5; // rdi
  CUtlVectorBase<modifierfunction,CUtlMemory<modifierfunction,int> >::CAllocator *p_m_Memory; // rbx

  this->_vptr_CDOTA_Buff = &off_412C0D0;
  v2 = (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LinkedFunctions.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_LinkedFunctions.m_Memory;
    CUtlMemory<modifierfunction,int>::Purge(&this->m_LinkedFunctions.m_Memory);
    if ( (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<modifierfunction,int>::Purge(p_m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_mapPropertyFnStrings.m_SymbolTable);
  m_Size = this->m_mapPropertyFnStrings.m_Vector.m_Size;
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v5 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory + i);
    if ( v5->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v5);
  }
  v2 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapPropertyFnStrings.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
    if ( (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
  }
  if ( this->m_szTextureName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szTextureName);
  if ( this->m_szHeroEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szHeroEffectName);
  if ( this->m_szStatusEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szStatusEffectName);
  if ( this->m_szEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szEffectName);
  if ( this->m_szModifierAura.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szModifierAura);
  if ( this->m_szScriptFile.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szScriptFile);
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lua::~CDOTA_Modifier_Lua  (line 35, @0x0000000002653470, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CDOTA_Modifier_Lua, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<modifierfunction, int>::Purge
void __fastcall CDOTA_Modifier_Lua::~CDOTA_Modifier_Lua(CDOTA_Modifier_Lua *const this)
{
  bool v2; // zf
  int m_Size; // ebx
  __int64 i; // r13
  CUtlString *v5; // rdi
  CUtlVectorBase<modifierfunction,CUtlMemory<modifierfunction,int> >::CAllocator *p_m_Memory; // rbx

  this->_vptr_CDOTA_Buff = &off_412C0D0;
  v2 = (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LinkedFunctions.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_LinkedFunctions.m_Memory;
    CUtlMemory<modifierfunction,int>::Purge(&this->m_LinkedFunctions.m_Memory);
    if ( (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<modifierfunction,int>::Purge(p_m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_mapPropertyFnStrings.m_SymbolTable);
  m_Size = this->m_mapPropertyFnStrings.m_Vector.m_Size;
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v5 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory + i);
    if ( v5->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v5);
  }
  v2 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapPropertyFnStrings.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
    if ( (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
  }
  if ( this->m_szTextureName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szTextureName);
  if ( this->m_szHeroEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szHeroEffectName);
  if ( this->m_szStatusEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szStatusEffectName);
  if ( this->m_szEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szEffectName);
  if ( this->m_szModifierAura.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szModifierAura);
  if ( this->m_szScriptFile.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szScriptFile);
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lua::Schema_DynamicBinding  (line 38, @0x0000000002624910, libserver.so)
// globals: CDOTA_Modifier_Lua::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Modifier_Lua::Schema_DynamicBinding(
        const CDOTA_Modifier_Lua *const this)
{
  return CDOTA_Modifier_Lua::s_pSchemaBinding;
}


// CDOTA_Modifier_Lua::FindRequiresMatchingName  (line 46, @0x0000000002624920, libserver.so)
bool __fastcall CDOTA_Modifier_Lua::FindRequiresMatchingName(CDOTA_Modifier_Lua *const this)
{
  return 1;
}


// CDOTA_Modifier_Lua::Script_OnIntervalThink  (line 89, @0x0000000002624930, libserver.so)
void __fastcall CDOTA_Modifier_Lua::Script_OnIntervalThink(CDOTA_Modifier_Lua *const this)
{
  ;
}


// CDOTA_Modifier_Lua::Script_OnDestroy  (line 92, @0x0000000002624940, libserver.so)
void __fastcall CDOTA_Modifier_Lua::Script_OnDestroy(CDOTA_Modifier_Lua *const this)
{
  ;
}


// CDOTA_Modifier_Lua::Script_OnRemoved  (line 93, @0x0000000002624950, libserver.so)
void __fastcall CDOTA_Modifier_Lua::Script_OnRemoved(CDOTA_Modifier_Lua *const this)
{
  ;
}


// CDOTA_Modifier_Lua::Script_OnStackCountChanged  (line 94, @0x0000000002624960, libserver.so)
void __fastcall CDOTA_Modifier_Lua::Script_OnStackCountChanged(CDOTA_Modifier_Lua *const this, int iStackCount)
{
  ;
}


// CDOTA_Modifier_Lua::Script_IsDebuff  (line 96, @0x0000000002635b70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetTeamNumber, IndexToIdentity, IsDebuff, IsValid, LookupEntity, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Modifier_Lua::Script_IsDebuff(CDOTA_Modifier_Lua *const this)
{
  uint32 m_Index; // edx
  bool result; // al
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx

  m_Index = this->m_hParent.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hParent.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hParent.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
        return HIBYTE(v4->m_pInstance[7].m_CScriptComponent) != this->m_iTeam;
    }
  }
  return result;
}


// CDOTA_Modifier_Lua::Script_IsHidden  (line 97, @0x0000000002624970, libserver.so)
bool __fastcall CDOTA_Modifier_Lua::Script_IsHidden(CDOTA_Modifier_Lua *const this)
{
  return 0;
}


// CDOTA_Modifier_Lua::Script_IsPurgable  (line 98, @0x0000000002624980, libserver.so)  // inlines: IsPurgable
bool __fastcall CDOTA_Modifier_Lua::Script_IsPurgable(CDOTA_Modifier_Lua *const this)
{
  return (*(this->_vptr_CDOTA_Buff + 23))(this) ^ 1;
}


// CDOTA_Modifier_Lua::Script_IsPurgeException  (line 99, @0x00000000026249a0, libserver.so)
bool __fastcall CDOTA_Modifier_Lua::Script_IsPurgeException(CDOTA_Modifier_Lua *const this)
{
  return 0;
}


// CDOTA_Modifier_Lua::Script_IsStunDebuff  (line 100, @0x00000000026249b0, libserver.so)
bool __fastcall CDOTA_Modifier_Lua::Script_IsStunDebuff(CDOTA_Modifier_Lua *const this)
{
  return 0;
}


// CDOTA_Modifier_Lua::Script_IsAura  (line 101, @0x00000000026249c0, libserver.so)  // inlines: IsAura
bool __fastcall CDOTA_Modifier_Lua::Script_IsAura(CDOTA_Modifier_Lua *const this)
{
  return *(&this->CDOTA_Buff + 138) & 1;
}


// CDOTA_Modifier_Lua::Script_AllowIllusionDuplicate  (line 102, @0x00000000026249d0, libserver.so)
bool __fastcall CDOTA_Modifier_Lua::Script_AllowIllusionDuplicate(CDOTA_Modifier_Lua *const this)
{
  return 0;
}


// CDOTA_Modifier_Lua::Script_RemoveOnDeath  (line 103, @0x00000000026249e0, libserver.so)
bool __fastcall CDOTA_Modifier_Lua::Script_RemoveOnDeath(CDOTA_Modifier_Lua *const this)
{
  return 1;
}


// CDOTA_Modifier_Lua::Script_IsAuraActiveOnDeath  (line 104, @0x00000000026249f0, libserver.so)
bool __fastcall CDOTA_Modifier_Lua::Script_IsAuraActiveOnDeath(CDOTA_Modifier_Lua *const this)
{
  return 0;
}


// CDOTA_Modifier_Lua::Script_DestroyOnExpire  (line 105, @0x0000000002624a00, libserver.so)
bool __fastcall CDOTA_Modifier_Lua::Script_DestroyOnExpire(CDOTA_Modifier_Lua *const this)
{
  return 1;
}


// CDOTA_Modifier_Lua::Script_IsPermanent  (line 106, @0x00000000026343d0, libserver.so)  // inlines: IsPermanent
bool __fastcall CDOTA_Modifier_Lua::Script_IsPermanent(CDOTA_Modifier_Lua *const this)
{
  return ((*(this->_vptr_CDOTA_Buff + 7))(this) & 1) != 0 || (*(this->_vptr_CDOTA_Buff + 35))(this);
}


// CDOTA_Modifier_Lua::Script_GetModifierAura  (line 108, @0x0000000002624a10, libserver.so)  // inlines: GetModifierAura, String, ToCStr
const char *__fastcall CDOTA_Modifier_Lua::Script_GetModifierAura(CDOTA_Modifier_Lua *const this)
{
  const char *result; // rax

  result = "";
  if ( this->CDOTA_Buff::m_szModifierAura.u.m_Id != 0 )
    return this->CDOTA_Buff::m_szModifierAura.u.m_pAsString;
  return result;
}


// CDOTA_Modifier_Lua::Script_GetEffectName  (line 109, @0x0000000002624a30, libserver.so)
const char *__fastcall CDOTA_Modifier_Lua::Script_GetEffectName(CDOTA_Modifier_Lua *const this)
{
  return 0;
}


// CDOTA_Modifier_Lua::Script_GetEffectAttachType  (line 110, @0x0000000002624a40, libserver.so)
int __fastcall CDOTA_Modifier_Lua::Script_GetEffectAttachType(CDOTA_Modifier_Lua *const this)
{
  return 1;
}


// CDOTA_Modifier_Lua::Script_GetTexture  (line 111, @0x0000000002624a50, libserver.so)
const char *__fastcall CDOTA_Modifier_Lua::Script_GetTexture(CDOTA_Modifier_Lua *const this)
{
  return "";
}


// CDOTA_Modifier_Lua::Script_GetAttributes  (line 112, @0x0000000002624a60, libserver.so)
int __fastcall CDOTA_Modifier_Lua::Script_GetAttributes(CDOTA_Modifier_Lua *const this)
{
  return this->m_iAttributes;
}


// CDOTA_Modifier_Lua::Script_GetPriority  (line 113, @0x0000000002624a70, libserver.so)
int __fastcall CDOTA_Modifier_Lua::Script_GetPriority(CDOTA_Modifier_Lua *const this)
{
  return 1;
}


// CDOTA_Modifier_Lua::Script_GetStatusEffectName  (line 115, @0x0000000002624a80, libserver.so)
const char *__fastcall CDOTA_Modifier_Lua::Script_GetStatusEffectName(CDOTA_Modifier_Lua *const this)
{
  return 0;
}


// CDOTA_Modifier_Lua::Script_StatusEffectPriority  (line 116, @0x0000000002624a90, libserver.so)
int __fastcall CDOTA_Modifier_Lua::Script_StatusEffectPriority(CDOTA_Modifier_Lua *const this)
{
  return -1;
}


// CDOTA_Modifier_Lua::Script_GetHeroEffectName  (line 117, @0x0000000002624aa0, libserver.so)
const char *__fastcall CDOTA_Modifier_Lua::Script_GetHeroEffectName(CDOTA_Modifier_Lua *const this)
{
  return 0;
}


// CDOTA_Modifier_Lua::Script_HeroEffectPriority  (line 118, @0x0000000002624ab0, libserver.so)
int __fastcall CDOTA_Modifier_Lua::Script_HeroEffectPriority(CDOTA_Modifier_Lua *const this)
{
  return -1;
}


// CDOTA_Modifier_Lua::Script_GetAuraDuration  (line 120, @0x0000000002624ac0, libserver.so)
float __fastcall CDOTA_Modifier_Lua::Script_GetAuraDuration(CDOTA_Modifier_Lua *const this)
{
  return 0.5;
}


// CDOTA_Modifier_Lua::Script_GetAuraSearchTeam  (line 121, @0x0000000002624ad0, libserver.so)  // inlines: GetAuraSearchTeam
int __fastcall CDOTA_Modifier_Lua::Script_GetAuraSearchTeam(CDOTA_Modifier_Lua *const this)
{
  return this->m_iAuraSearchTeam;
}


// CDOTA_Modifier_Lua::Script_GetAuraSearchType  (line 122, @0x0000000002624ae0, libserver.so)  // inlines: GetAuraSearchType
int __fastcall CDOTA_Modifier_Lua::Script_GetAuraSearchType(CDOTA_Modifier_Lua *const this)
{
  return this->m_iAuraSearchType;
}


// CDOTA_Modifier_Lua::Script_GetAuraSearchFlags  (line 123, @0x0000000002624af0, libserver.so)
int __fastcall CDOTA_Modifier_Lua::Script_GetAuraSearchFlags(CDOTA_Modifier_Lua *const this)
{
  return this->m_iAuraSearchFlags;
}


// CDOTA_Modifier_Lua::Script_GetAuraRadius  (line 124, @0x0000000002624b00, libserver.so)
int __fastcall CDOTA_Modifier_Lua::Script_GetAuraRadius(CDOTA_Modifier_Lua *const this)
{
  return this->m_iAuraRadius;
}


// CDOTA_Modifier_Lua::Script_GetAuraEntityReject  (line 125, @0x000000000262fec0, libserver.so)  // inlines: HScriptToEntity<CBaseEntity>, ToEnt
// calls: GetScriptDesc<CEntityInstance>
bool __fastcall CDOTA_Modifier_Lua::Script_GetAuraEntityReject(CDOTA_Modifier_Lua *const this, HSCRIPT hEntity)
{
  void (__fastcall *v3)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax

  if ( hEntity != 0 )
  {
    v3 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v3(g_pScriptVM, hEntity, Script);
  }
  return 0;
}


// CDOTA_Modifier_Lua_Horizontal_Motion::~CDOTA_Modifier_Lua_Horizontal_Motion  (line 341, @0x0000000002653100, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CDOTA_Modifier_Lua, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<modifierfunction, int>::Purge
void __fastcall CDOTA_Modifier_Lua_Horizontal_Motion::~CDOTA_Modifier_Lua_Horizontal_Motion(
        CDOTA_Modifier_Lua_Horizontal_Motion *const this)
{
  bool v2; // zf
  int m_Size; // ebx
  __int64 i; // r13
  CUtlString *v5; // rdi
  CUtlVectorBase<modifierfunction,CUtlMemory<modifierfunction,int> >::CAllocator *p_m_Memory; // rbx

  this->_vptr_CHorizontalMotionController = &off_412C6A0;
  v2 = (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LinkedFunctions.m_Size = 0;
  this->_vptr_CDOTA_Buff = &off_412C0D0;
  if ( v2 )
  {
    p_m_Memory = &this->m_LinkedFunctions.m_Memory;
    CUtlMemory<modifierfunction,int>::Purge(&this->m_LinkedFunctions.m_Memory);
    if ( (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<modifierfunction,int>::Purge(p_m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_mapPropertyFnStrings.m_SymbolTable);
  m_Size = this->m_mapPropertyFnStrings.m_Vector.m_Size;
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v5 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory + i);
    if ( v5->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v5);
  }
  v2 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapPropertyFnStrings.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
    if ( (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
  }
  if ( this->m_szTextureName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szTextureName);
  if ( this->m_szHeroEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szHeroEffectName);
  if ( this->m_szStatusEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szStatusEffectName);
  if ( this->m_szEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szEffectName);
  if ( this->CDOTA_Modifier_Lua::m_szModifierAura.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->CDOTA_Modifier_Lua::m_szModifierAura);
  if ( this->m_szScriptFile.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szScriptFile);
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lua_Horizontal_Motion::~CDOTA_Modifier_Lua_Horizontal_Motion  (line 341, @0x00000000026537d0, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CDOTA_Modifier_Lua, ~CDOTA_Modifier_Lua_Horizontal_Motion, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<modifierfunction, int>::Purge
void __fastcall CDOTA_Modifier_Lua_Horizontal_Motion::~CDOTA_Modifier_Lua_Horizontal_Motion(
        CDOTA_Modifier_Lua_Horizontal_Motion *const this)
{
  bool v2; // zf
  int m_Size; // ebx
  __int64 i; // r13
  CUtlString *v5; // rdi
  CUtlVectorBase<modifierfunction,CUtlMemory<modifierfunction,int> >::CAllocator *p_m_Memory; // rbx

  this->_vptr_CHorizontalMotionController = &off_412C6A0;
  v2 = (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LinkedFunctions.m_Size = 0;
  this->_vptr_CDOTA_Buff = &off_412C0D0;
  if ( v2 )
  {
    p_m_Memory = &this->m_LinkedFunctions.m_Memory;
    CUtlMemory<modifierfunction,int>::Purge(&this->m_LinkedFunctions.m_Memory);
    if ( (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<modifierfunction,int>::Purge(p_m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_mapPropertyFnStrings.m_SymbolTable);
  m_Size = this->m_mapPropertyFnStrings.m_Vector.m_Size;
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v5 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory + i);
    if ( v5->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v5);
  }
  v2 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapPropertyFnStrings.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
    if ( (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
  }
  if ( this->m_szTextureName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szTextureName);
  if ( this->m_szHeroEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szHeroEffectName);
  if ( this->m_szStatusEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szStatusEffectName);
  if ( this->m_szEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szEffectName);
  if ( this->CDOTA_Modifier_Lua::m_szModifierAura.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->CDOTA_Modifier_Lua::m_szModifierAura);
  if ( this->m_szScriptFile.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szScriptFile);
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lua_Horizontal_Motion::Schema_DynamicBinding  (line 344, @0x0000000002624b10, libserver.so)
// globals: CDOTA_Modifier_Lua_Horizontal_Motion::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Modifier_Lua_Horizontal_Motion::Schema_DynamicBinding(
        const CDOTA_Modifier_Lua_Horizontal_Motion *const this)
{
  return CDOTA_Modifier_Lua_Horizontal_Motion::s_pSchemaBinding;
}


// CDOTA_Modifier_Lua_Horizontal_Motion::GetHorizontalMotionController  (line 354, @0x0000000002624b30, libserver.so)
CHorizontalMotionController *__fastcall CDOTA_Modifier_Lua_Horizontal_Motion::GetHorizontalMotionController(
        CDOTA_Modifier_Lua_Horizontal_Motion *const this)
{
  return &this->CHorizontalMotionController;
}


// CDOTA_Modifier_Lua_Horizontal_Motion::IsHorizontalMotionValidToApply  (line 359, @0x0000000002624b40, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Lua_Horizontal_Motion::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Lua_Horizontal_Motion *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Lua_Horizontal_Motion::IsMotionController  (line 360, @0x0000000002624b70, libserver.so)
bool __fastcall CDOTA_Modifier_Lua_Horizontal_Motion::IsMotionController(
        CDOTA_Modifier_Lua_Horizontal_Motion *const this)
{
  return 1;
}


// CDOTA_Modifier_Lua_Horizontal_Motion::Script_SetPriority  (line 362, @0x0000000002624b80, libserver.so)  // inlines: SetPriority
void __fastcall CDOTA_Modifier_Lua_Horizontal_Motion::Script_SetPriority(
        CDOTA_Modifier_Lua_Horizontal_Motion *const this,
        int nMotionPriority)
{
  this->m_nPriority = nMotionPriority;
}


// CDOTA_Modifier_Lua_Horizontal_Motion::Script_GetPriority  (line 363, @0x0000000002624b90, libserver.so)
int __fastcall CDOTA_Modifier_Lua_Horizontal_Motion::Script_GetPriority(
        CDOTA_Modifier_Lua_Horizontal_Motion *const this)
{
  return this->m_nPriority;
}


// CDOTA_Modifier_Lua_Horizontal_Motion::Script_ApplyHorizontalMotionController  (line 364, @0x0000000002635d50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTALocomotor::ApplyHorizontalMotionController
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Modifier_Lua_Horizontal_Motion::Script_ApplyHorizontalMotionController(
        CDOTA_Modifier_Lua_Horizontal_Motion *const this)
{
  CHorizontalMotionController *v2; // rbx
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v5; // rsi
  unsigned __int16 v6; // cx
  CEntityIdentity *v7; // rax
  __int64 v8; // rcx
  CEntityIdentity *v9; // rax
  CDOTALocomotor *v10; // rax

  v2 = &this->CHorizontalMotionController;
  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  v5 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v6 = this->m_hParent.m_Index;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = v6 & 0x1FF;
      v5 = (8 * v8);
      v9 = &v7[v8];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  v10 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance, v5);
  return CDOTALocomotor::ApplyHorizontalMotionController(v10, v2, 0);
}


// CDOTA_Modifier_Lua_Horizontal_Motion::Script_UpdateHorizontalMotion  (line 366, @0x0000000002624ba0, libserver.so)
void __fastcall CDOTA_Modifier_Lua_Horizontal_Motion::Script_UpdateHorizontalMotion(
        CDOTA_Modifier_Lua_Horizontal_Motion *const this,
        HSCRIPT me,
        double a3,
        float dt)
{
  ;
}


// CDOTA_Modifier_Lua_Horizontal_Motion::Script_OnHorizontalMotionInterrupted  (line 367, @0x0000000002624bb0, libserver.so)
void __fastcall CDOTA_Modifier_Lua_Horizontal_Motion::Script_OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Lua_Horizontal_Motion *const this)
{
  ;
}


// CDOTA_Modifier_Lua_Vertical_Motion::~CDOTA_Modifier_Lua_Vertical_Motion  (line 381, @0x0000000002652f50, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CDOTA_Modifier_Lua, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<modifierfunction, int>::Purge
void __fastcall CDOTA_Modifier_Lua_Vertical_Motion::~CDOTA_Modifier_Lua_Vertical_Motion(
        CDOTA_Modifier_Lua_Vertical_Motion *const this)
{
  bool v2; // zf
  int m_Size; // ebx
  __int64 i; // r13
  CUtlString *v5; // rdi
  CUtlVectorBase<modifierfunction,CUtlMemory<modifierfunction,int> >::CAllocator *p_m_Memory; // rbx

  this->_vptr_CVerticalMotionController = &off_412C9E0;
  v2 = (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LinkedFunctions.m_Size = 0;
  this->_vptr_CDOTA_Buff = &off_412C0D0;
  if ( v2 )
  {
    p_m_Memory = &this->m_LinkedFunctions.m_Memory;
    CUtlMemory<modifierfunction,int>::Purge(&this->m_LinkedFunctions.m_Memory);
    if ( (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<modifierfunction,int>::Purge(p_m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_mapPropertyFnStrings.m_SymbolTable);
  m_Size = this->m_mapPropertyFnStrings.m_Vector.m_Size;
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v5 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory + i);
    if ( v5->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v5);
  }
  v2 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapPropertyFnStrings.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
    if ( (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
  }
  if ( this->m_szTextureName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szTextureName);
  if ( this->m_szHeroEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szHeroEffectName);
  if ( this->m_szStatusEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szStatusEffectName);
  if ( this->m_szEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szEffectName);
  if ( this->CDOTA_Modifier_Lua::m_szModifierAura.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->CDOTA_Modifier_Lua::m_szModifierAura);
  if ( this->m_szScriptFile.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szScriptFile);
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lua_Vertical_Motion::~CDOTA_Modifier_Lua_Vertical_Motion  (line 381, @0x0000000002653620, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CDOTA_Modifier_Lua, ~CDOTA_Modifier_Lua_Vertical_Motion, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<modifierfunction, int>::Purge
void __fastcall CDOTA_Modifier_Lua_Vertical_Motion::~CDOTA_Modifier_Lua_Vertical_Motion(
        CDOTA_Modifier_Lua_Vertical_Motion *const this)
{
  bool v2; // zf
  int m_Size; // ebx
  __int64 i; // r13
  CUtlString *v5; // rdi
  CUtlVectorBase<modifierfunction,CUtlMemory<modifierfunction,int> >::CAllocator *p_m_Memory; // rbx

  this->_vptr_CVerticalMotionController = &off_412C9E0;
  v2 = (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LinkedFunctions.m_Size = 0;
  this->_vptr_CDOTA_Buff = &off_412C0D0;
  if ( v2 )
  {
    p_m_Memory = &this->m_LinkedFunctions.m_Memory;
    CUtlMemory<modifierfunction,int>::Purge(&this->m_LinkedFunctions.m_Memory);
    if ( (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<modifierfunction,int>::Purge(p_m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_mapPropertyFnStrings.m_SymbolTable);
  m_Size = this->m_mapPropertyFnStrings.m_Vector.m_Size;
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v5 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory + i);
    if ( v5->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v5);
  }
  v2 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapPropertyFnStrings.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
    if ( (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
  }
  if ( this->m_szTextureName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szTextureName);
  if ( this->m_szHeroEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szHeroEffectName);
  if ( this->m_szStatusEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szStatusEffectName);
  if ( this->m_szEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szEffectName);
  if ( this->CDOTA_Modifier_Lua::m_szModifierAura.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->CDOTA_Modifier_Lua::m_szModifierAura);
  if ( this->m_szScriptFile.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szScriptFile);
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lua_Vertical_Motion::Schema_DynamicBinding  (line 384, @0x0000000002624bc0, libserver.so)
// globals: CDOTA_Modifier_Lua_Vertical_Motion::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Modifier_Lua_Vertical_Motion::Schema_DynamicBinding(
        const CDOTA_Modifier_Lua_Vertical_Motion *const this)
{
  return CDOTA_Modifier_Lua_Vertical_Motion::s_pSchemaBinding;
}


// CDOTA_Modifier_Lua_Vertical_Motion::GetVerticalMotionController  (line 394, @0x0000000002624be0, libserver.so)
CVerticalMotionController *__fastcall CDOTA_Modifier_Lua_Vertical_Motion::GetVerticalMotionController(
        CDOTA_Modifier_Lua_Vertical_Motion *const this)
{
  return &this->CVerticalMotionController;
}


// CDOTA_Modifier_Lua_Vertical_Motion::IsVerticalMotionValidToApply  (line 399, @0x0000000002624bf0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Lua_Vertical_Motion::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Lua_Vertical_Motion *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Lua_Vertical_Motion::Script_SetPriority  (line 402, @0x0000000002624c20, libserver.so)  // inlines: SetPriority
void __fastcall CDOTA_Modifier_Lua_Vertical_Motion::Script_SetPriority(
        CDOTA_Modifier_Lua_Vertical_Motion *const this,
        int nMotionPriority)
{
  this->m_nPriority = nMotionPriority;
}


// CDOTA_Modifier_Lua_Vertical_Motion::Script_GetPriority  (line 403, @0x0000000002624c30, libserver.so)
int __fastcall CDOTA_Modifier_Lua_Vertical_Motion::Script_GetPriority(CDOTA_Modifier_Lua_Vertical_Motion *const this)
{
  return this->m_nPriority;
}


// CDOTA_Modifier_Lua_Vertical_Motion::Script_ApplyVerticalMotionController  (line 404, @0x0000000002635dd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTALocomotor::ApplyVerticalMotionController
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Modifier_Lua_Vertical_Motion::Script_ApplyVerticalMotionController(
        CDOTA_Modifier_Lua_Vertical_Motion *const this)
{
  CVerticalMotionController *v2; // rbx
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v5; // rsi
  unsigned __int16 v6; // cx
  CEntityIdentity *v7; // rax
  __int64 v8; // rcx
  CEntityIdentity *v9; // rax
  CDOTALocomotor *v10; // rax

  v2 = &this->CVerticalMotionController;
  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  v5 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v6 = this->m_hParent.m_Index;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = v6 & 0x1FF;
      v5 = (8 * v8);
      v9 = &v7[v8];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  v10 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance, v5);
  return CDOTALocomotor::ApplyVerticalMotionController(v10, v2, 0);
}


// CDOTA_Modifier_Lua_Vertical_Motion::Script_UpdateVerticalMotion  (line 407, @0x0000000002624c40, libserver.so)
void __fastcall CDOTA_Modifier_Lua_Vertical_Motion::Script_UpdateVerticalMotion(
        CDOTA_Modifier_Lua_Vertical_Motion *const this,
        HSCRIPT me,
        double a3,
        float dt)
{
  ;
}


// CDOTA_Modifier_Lua_Vertical_Motion::Script_OnVerticalMotionInterrupted  (line 408, @0x0000000002624c50, libserver.so)
void __fastcall CDOTA_Modifier_Lua_Vertical_Motion::Script_OnVerticalMotionInterrupted(
        CDOTA_Modifier_Lua_Vertical_Motion *const this)
{
  ;
}


// CDOTA_Modifier_Lua_Motion_Both::~CDOTA_Modifier_Lua_Motion_Both  (line 422, @0x00000000026532b0, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CDOTA_Modifier_Lua, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<modifierfunction, int>::Purge
void __fastcall CDOTA_Modifier_Lua_Motion_Both::~CDOTA_Modifier_Lua_Motion_Both(
        CDOTA_Modifier_Lua_Motion_Both *const this)
{
  bool v2; // zf
  int m_Size; // ebx
  __int64 i; // r13
  CUtlString *v5; // rdi
  CUtlVectorBase<modifierfunction,CUtlMemory<modifierfunction,int> >::CAllocator *p_m_Memory; // rbx

  this->_vptr_CVerticalMotionController = &off_412CD38;
  v2 = (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LinkedFunctions.m_Size = 0;
  this->_vptr_CHorizontalMotionController = &off_412CD70;
  this->_vptr_CDOTA_Buff = &off_412C0D0;
  if ( v2 )
  {
    p_m_Memory = &this->m_LinkedFunctions.m_Memory;
    CUtlMemory<modifierfunction,int>::Purge(&this->m_LinkedFunctions.m_Memory);
    if ( (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<modifierfunction,int>::Purge(p_m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_mapPropertyFnStrings.m_SymbolTable);
  m_Size = this->m_mapPropertyFnStrings.m_Vector.m_Size;
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v5 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory + i);
    if ( v5->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v5);
  }
  v2 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapPropertyFnStrings.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
    if ( (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
  }
  if ( this->m_szTextureName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szTextureName);
  if ( this->m_szHeroEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szHeroEffectName);
  if ( this->m_szStatusEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szStatusEffectName);
  if ( this->m_szEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szEffectName);
  if ( this->CDOTA_Modifier_Lua::m_szModifierAura.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->CDOTA_Modifier_Lua::m_szModifierAura);
  if ( this->m_szScriptFile.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szScriptFile);
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lua_Motion_Both::~CDOTA_Modifier_Lua_Motion_Both  (line 422, @0x0000000002653980, libserver.so)  // inlines: Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~CDOTA_Modifier_Lua, ~CDOTA_Modifier_Lua_Motion_Both, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlString::FreeMemoryBlock, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<modifierfunction, int>::Purge
void __fastcall CDOTA_Modifier_Lua_Motion_Both::~CDOTA_Modifier_Lua_Motion_Both(
        CDOTA_Modifier_Lua_Motion_Both *const this)
{
  bool v2; // zf
  int m_Size; // ebx
  __int64 i; // r13
  CUtlString *v5; // rdi
  CUtlVectorBase<modifierfunction,CUtlMemory<modifierfunction,int> >::CAllocator *p_m_Memory; // rbx

  this->_vptr_CVerticalMotionController = &off_412CD38;
  v2 = (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LinkedFunctions.m_Size = 0;
  this->_vptr_CHorizontalMotionController = &off_412CD70;
  this->_vptr_CDOTA_Buff = &off_412C0D0;
  if ( v2 )
  {
    p_m_Memory = &this->m_LinkedFunctions.m_Memory;
    CUtlMemory<modifierfunction,int>::Purge(&this->m_LinkedFunctions.m_Memory);
    if ( (this->m_LinkedFunctions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<modifierfunction,int>::Purge(p_m_Memory);
  }
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_mapPropertyFnStrings.m_SymbolTable);
  m_Size = this->m_mapPropertyFnStrings.m_Vector.m_Size;
  for ( i = 8LL * m_Size - 8; --m_Size >= 0; i -= 8 )
  {
    v5 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_pMemory + i);
    if ( v5->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v5);
  }
  v2 = (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_mapPropertyFnStrings.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
    if ( (this->m_mapPropertyFnStrings.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlString,int>::Purge(&this->m_mapPropertyFnStrings.m_Vector.m_Memory);
  }
  if ( this->m_szTextureName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szTextureName);
  if ( this->m_szHeroEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szHeroEffectName);
  if ( this->m_szStatusEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szStatusEffectName);
  if ( this->m_szEffectName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szEffectName);
  if ( this->CDOTA_Modifier_Lua::m_szModifierAura.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->CDOTA_Modifier_Lua::m_szModifierAura);
  if ( this->m_szScriptFile.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szScriptFile);
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lua_Motion_Both::Schema_DynamicBinding  (line 425, @0x0000000002624c60, libserver.so)
// globals: CDOTA_Modifier_Lua_Motion_Both::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Modifier_Lua_Motion_Both::Schema_DynamicBinding(
        const CDOTA_Modifier_Lua_Motion_Both *const this)
{
  return CDOTA_Modifier_Lua_Motion_Both::s_pSchemaBinding;
}


// CDOTA_Modifier_Lua_Motion_Both::GetHorizontalMotionController  (line 436, @0x0000000002624c90, libserver.so)
CHorizontalMotionController *__fastcall CDOTA_Modifier_Lua_Motion_Both::GetHorizontalMotionController(
        CDOTA_Modifier_Lua_Motion_Both *const this)
{
  return &this->CHorizontalMotionController;
}


// CDOTA_Modifier_Lua_Motion_Both::GetVerticalMotionController  (line 437, @0x0000000002624ca0, libserver.so)
CVerticalMotionController *__fastcall CDOTA_Modifier_Lua_Motion_Both::GetVerticalMotionController(
        CDOTA_Modifier_Lua_Motion_Both *const this)
{
  return &this->CVerticalMotionController;
}


// CDOTA_Modifier_Lua_Motion_Both::IsHorizontalMotionValidToApply  (line 446, @0x0000000002624cb0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Lua_Motion_Both::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Lua_Motion_Both *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Lua_Motion_Both::IsVerticalMotionValidToApply  (line 447, @0x0000000002624ce0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Lua_Motion_Both::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Lua_Motion_Both *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Lua_Motion_Both::IsMotionController  (line 448, @0x0000000002624d10, libserver.so)
bool __fastcall CDOTA_Modifier_Lua_Motion_Both::IsMotionController(CDOTA_Modifier_Lua_Motion_Both *const this)
{
  return 1;
}


// CDOTA_Modifier_Lua_Motion_Both::Script_SetPriority  (line 451, @0x0000000002624d20, libserver.so)  // inlines: SetPriority
void __fastcall CDOTA_Modifier_Lua_Motion_Both::Script_SetPriority(
        CDOTA_Modifier_Lua_Motion_Both *const this,
        int nMotionPriority)
{
  this->CVerticalMotionController::m_nPriority = nMotionPriority;
}


// CDOTA_Modifier_Lua_Motion_Both::Script_GetPriority  (line 452, @0x0000000002624d30, libserver.so)
int __fastcall CDOTA_Modifier_Lua_Motion_Both::Script_GetPriority(CDOTA_Modifier_Lua_Motion_Both *const this)
{
  return this->CVerticalMotionController::m_nPriority;
}


// CDOTA_Modifier_Lua_Motion_Both::Script_ApplyHorizontalMotionController  (line 454, @0x0000000002635c50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTALocomotor::ApplyHorizontalMotionController
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Modifier_Lua_Motion_Both::Script_ApplyHorizontalMotionController(
        CDOTA_Modifier_Lua_Motion_Both *const this)
{
  CHorizontalMotionController *v2; // rbx
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v5; // rsi
  unsigned __int16 v6; // cx
  CEntityIdentity *v7; // rax
  __int64 v8; // rcx
  CEntityIdentity *v9; // rax
  CDOTALocomotor *v10; // rax

  v2 = &this->CHorizontalMotionController;
  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  v5 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v6 = this->m_hParent.m_Index;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = v6 & 0x1FF;
      v5 = (8 * v8);
      v9 = &v7[v8];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  v10 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance, v5);
  return CDOTALocomotor::ApplyHorizontalMotionController(v10, v2, 0);
}


// CDOTA_Modifier_Lua_Motion_Both::Script_ApplyVerticalMotionController  (line 455, @0x0000000002635cd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTALocomotor::ApplyVerticalMotionController
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Modifier_Lua_Motion_Both::Script_ApplyVerticalMotionController(
        CDOTA_Modifier_Lua_Motion_Both *const this)
{
  CVerticalMotionController *v2; // rbx
  uint32 m_Index; // edx
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v5; // rsi
  unsigned __int16 v6; // cx
  CEntityIdentity *v7; // rax
  __int64 v8; // rcx
  CEntityIdentity *v9; // rax
  CDOTALocomotor *v10; // rax

  v2 = &this->CVerticalMotionController;
  m_Index = this->m_hParent.m_Index;
  m_pInstance = 0;
  v5 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v6 = this->m_hParent.m_Index;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = v6 & 0x1FF;
      v5 = (8 * v8);
      v9 = &v7[v8];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  v10 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance, v5);
  return CDOTALocomotor::ApplyVerticalMotionController(v10, v2, 0);
}


// CDOTA_Modifier_Lua_Motion_Both::Script_UpdateHorizontalMotion  (line 458, @0x0000000002624d40, libserver.so)
void __fastcall CDOTA_Modifier_Lua_Motion_Both::Script_UpdateHorizontalMotion(
        CDOTA_Modifier_Lua_Motion_Both *const this,
        HSCRIPT me,
        double a3,
        float dt)
{
  ;
}


// CDOTA_Modifier_Lua_Motion_Both::Script_OnHorizontalMotionInterrupted  (line 459, @0x0000000002624d50, libserver.so)
void __fastcall CDOTA_Modifier_Lua_Motion_Both::Script_OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Lua_Motion_Both *const this)
{
  ;
}


// CDOTA_Modifier_Lua_Motion_Both::Script_UpdateVerticalMotion  (line 460, @0x0000000002624d60, libserver.so)
void __fastcall CDOTA_Modifier_Lua_Motion_Both::Script_UpdateVerticalMotion(
        CDOTA_Modifier_Lua_Motion_Both *const this,
        HSCRIPT me,
        double a3,
        float dt)
{
  ;
}


// CDOTA_Modifier_Lua_Motion_Both::Script_OnVerticalMotionInterrupted  (line 461, @0x0000000002624d70, libserver.so)
void __fastcall CDOTA_Modifier_Lua_Motion_Both::Script_OnVerticalMotionInterrupted(
        CDOTA_Modifier_Lua_Motion_Both *const this)
{
  ;
}


