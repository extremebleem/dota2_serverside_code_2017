// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/precache_shared.cpp:103
class CPrecacheGameSystem : public CAutoGameSystem, public CUtlSlot {
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

	typedef CAutoGameSystem BaseClass;

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CPrecacheGameSystem *);
	CPrecacheGameSystem();
	virtual ~CPrecacheGameSystem();
	virtual void GameDeactivate(const EventGameDeactivate_t &);
	void PrecacheResourceFolder(const char *, const char *, const char *, IEntityResourceManifest *, bool);

private:

	void GenerateFolderContentsList(const char *, const char *, const char *, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > *, bool);

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[11] GameDeactivate
	// sizeof = 184
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// PrecacheMaterial  (line 16, @0x0000000002353af0, libserver.so)  // inlines: GetCurrentEntityResourceManifest
// calls: V_GetFileExtension, Warning
// callers: CPrecipitation::Precache, CEnvLaser::Precache, PrecacheMaterial
// strings: "precache_shared.cpp PrecacheMaterial:: path '%s' missing extension!\n"
void __fastcall PrecacheMaterial(const char *pMaterialName, IEntityResourceManifest *pResourceManifest)
{
  IEntityResourceManifest *m_pCurrentManifest; // rbx

  m_pCurrentManifest = pResourceManifest;
  if ( pResourceManifest == 0 )
  {
    m_pCurrentManifest = g_pEntitySystem->m_pCurrentManifest;
    if ( V_GetFileExtension(pMaterialName) != 0 )
      goto LABEL_3;
LABEL_5:
    Warning("precache_shared.cpp PrecacheMaterial:: path '%s' missing extension!\n", pMaterialName);
    goto LABEL_3;
  }
  if ( V_GetFileExtension(pMaterialName) == 0 )
    goto LABEL_5;
LABEL_3:
  (**m_pCurrentManifest)(m_pCurrentManifest, pMaterialName);
}


// PrecacheMaterial  (line 39, @0x0000000002353b60, libserver.so)
// calls: PrecacheMaterial
// callers: CCommentaryViewPosition::Precache, CTestEffect::Precache, CEntityDissolve::Precache, CEnvProjectedTexture::Precache, CEnvBeam::Precache, CEnvScreenOverlay::Precache, CEnvScreenEffect::Precache, CFunc_Dust::Precache, CFuncShatterglass::Precache, CPointSpotlight::Precache, CRopeKeyframe::Precache, CSprite::Precache (21 total)
void __fastcall PrecacheMaterial(const char *pMaterialName, const CEntityPrecacheContext *pContext)
{
  PrecacheMaterial(pMaterialName, pContext->m_pManifest);
}


// GetMaterialIndex  (line 48, @0x0000000002353b70, libserver.so)  // inlines: CWeakHandle, FindOrRegisterResourceByName<1952542070ull>, FromUntypedHandleUnchecked, InitUntypedUnchecked, StaticInvalidHandle
// callers: CBeam::BeamInit, CEnvBeam::Spawn, CShatterGlassShard::GenerateProceduralShatterGlassShardModel, CPointSpotlight::Spawn, CSun::Spawn, CVGuiScreen::SetOverlayMaterial, CPlasma::Spawn
HMaterial __fastcall GetMaterialIndex(_QWORD *a1, const char *pMaterialName)
{
  if ( pMaterialName != 0 )
  {
    *a1 = (*(*g_pResourceSystem + 256LL))(g_pResourceSystem, pMaterialName, 1952542070, 1);
    return a1;
  }
  else
  {
    *a1 = 0;
    return a1;
  }
}


// GetMaterialNameFromIndex  (line 58, @0x0000000002353bd0, libserver.so)  // inlines: ResourceGetName, String, V_strncpy<int>, operator==
// calls: _V_strncpy
// callers: CSprite::SetMaterialByIndex
__int64 __fastcall GetMaterialNameFromIndex(HMaterial nIndex, char *pOutName, __int64 nMaxBufSize)
{
  const char **v4; // rax
  const char *v5; // rsi

  if ( nIndex.m_pBinding->m_pData == 0 )
    return 0;
  v4 = *(nIndex.m_pBinding->m_pData + 1);
  v5 = "";
  if ( v4 != 0 && *v4 != 0 )
    v5 = *v4;
  _V_strncpy(pOutName, v5, nMaxBufSize);
  return 1;
}


// PrecacheParticleSystem  (line 70, @0x0000000002353c20, libserver.so)  // inlines: GetCurrentEntityResourceManifest
// calls: V_GetFileExtension, Warning
// callers: CBaseEntity::PrecacheModelComponents, PrecacheParticleSystem, CPropZipline::Precache, CDOTAGamerules::PrecacheResourcesFromKeys
// strings: "Attempted to find unknown particle system \"%s\"\n"
void __fastcall PrecacheParticleSystem(const char *pParticleSystemName, IEntityResourceManifest *pResourceManifest)
{
  IEntityResourceManifest *m_pCurrentManifest; // rbx

  m_pCurrentManifest = pResourceManifest;
  if ( pResourceManifest != 0 )
  {
    if ( V_GetFileExtension(pParticleSystemName) != 0 )
    {
LABEL_3:
      (**m_pCurrentManifest)(m_pCurrentManifest, pParticleSystemName);
      return;
    }
  }
  else
  {
    m_pCurrentManifest = g_pEntitySystem->m_pCurrentManifest;
    if ( V_GetFileExtension(pParticleSystemName) != 0 )
      goto LABEL_3;
  }
  if ( V_GetFileExtension(pParticleSystemName) != 0 )
    goto LABEL_3;
  Warning("Attempted to find unknown particle system \"%s\"\n", pParticleSystemName);
}


// PrecacheParticleSystem  (line 95, @0x0000000002353ca0, libserver.so)
// calls: PrecacheParticleSystem
// callers: CParticleSystem::Precache, CBaseCombatWeapon::Precache, CBeam::Precache, CFire::Precache, CDOTA_ActionRunner::PrecacheAction_AttachEffect, CDOTA_ActionRunner::PrecacheAction_FireEffect, CDOTA_Item_GreaterClarity::Precache, CDOTA_Item_Physical::PrecacheContainedItem, CDOTA_Item_Rune::Precache, CDOTA_Modifier_DataDriven::Precache, CDOTA_BaseNPC::Precache, CDOTA_BaseNPC_Building::Precache (38 total)
void __fastcall PrecacheParticleSystem(const char *pParticleSystemName, const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem(pParticleSystemName, pContext->m_pManifest);
}


// CPrecacheGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 105, @0x00000000023708a0, libserver.so)
void __fastcall CPrecacheGameSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CPrecacheGameSystem *const this)
{
  ;
}


// CPrecacheGameSystem::DoesGameSystemReallocate  (line 105, @0x00000000023708b0, libserver.so)
// globals: CPrecacheGameSystem::sm_Factory
bool __fastcall CPrecacheGameSystem::DoesGameSystemReallocate(const CPrecacheGameSystem *const this)
{
  return (*(CPrecacheGameSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CPrecacheGameSystem::sm_Factory);
}


// CPrecacheGameSystem::SetGameSystemGlobalPtrs  (line 105, @0x00000000023708d0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CPrecacheGameSystem::sm_Factory
void __fastcall CPrecacheGameSystem::SetGameSystemGlobalPtrs(CPrecacheGameSystem *const this, void *pValue)
{
  if ( CPrecacheGameSystem::sm_Factory != 0 )
    (*(CPrecacheGameSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CPrecacheGameSystem::sm_Factory, pValue);
}


// CPrecacheGameSystem::~CPrecacheGameSystem  (line 112, @0x0000000002375170, libserver.so)  // inlines: CAutoLockT, Lock, Purge, RemoveAll, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator(), ~CAutoGameSystem, ~CAutoLockT, ~CUtlMemory, ~CUtlSlot, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorMT
// calls: CUtlSymbolTable::~CUtlSymbolTable, ThreadGetCurrentId, ThreadInterlockedExchange64, IGameSystem::~IGameSystem, CThreadFastMutex::Lock(ulong long,uint), CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >*, int>::Purge, CUtlMemory<CUtlSignaller_Base*, int>::Purge
void __fastcall CPrecacheGameSystem::~CPrecacheGameSystem(CPrecacheGameSystem *const this)
{
  CUtlSymbolTable *p_m_SymbolTable; // rdi
  __int64 v3; // rdi
  bool v4; // zf
  signed __int64 CurrentId; // rsi
  __int64 i; // rbx
  CUtlSignaller_Base *v7; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v9; // rdi

  p_m_SymbolTable = &this->m_precachedResourceFolders.m_SymbolTable;
  *&p_m_SymbolTable[-2].m_StringPools.m_Size = off_40968F0;
  CUtlSymbolTable::~CUtlSymbolTable(p_m_SymbolTable);
  v4 = (this->m_precachedResourceFolders.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_precachedResourceFolders.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *,int>::Purge(&this->m_precachedResourceFolders.m_Vector.m_Memory);
    if ( (this->m_precachedResourceFolders.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *,int>::Purge(&this->m_precachedResourceFolders.m_Vector.m_Memory);
  }
  CurrentId = ThreadGetCurrentId(v3);
  if ( CurrentId != this->m_ConnectedSignallers.m_ownerID
    && _InterlockedCompareExchange64(
         &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
         CurrentId,
         0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(
      &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
      CurrentId,
      0);
  }
  else
  {
    ++this->m_ConnectedSignallers.m_depth;
  }
  for ( i = 0; this->m_ConnectedSignallers.m_Size > i; ++i )
  {
    v7 = this->m_ConnectedSignallers.m_Memory.m_pMemory[i];
    pfn = v7->m_SlotDeletionDelegate.m_Closure.m_pFunction.__pfn;
    v9 = (v7->m_SlotDeletionDelegate.m_Closure.m_pthis + v7->m_SlotDeletionDelegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v9 - 1);
    (pfn)(v9, &this->CUtlSlot);
  }
  if ( --this->m_ConnectedSignallers.m_depth == 0 )
    ThreadInterlockedExchange64(&this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>, 0);
  v4 = (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ConnectedSignallers.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
    if ( (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CPrecacheGameSystem::~CPrecacheGameSystem  (line 112, @0x0000000002375300, libserver.so)  // inlines: CAutoLockT, Lock, Purge, RemoveAll, ThreadInterlockedAssignIf64, ThreadPause, TryLockInline, Unlock, operator(), ~CAutoGameSystem, ~CAutoLockT, ~CPrecacheGameSystem, ~CUtlMemory, ~CUtlSlot, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorMT
// calls: CUtlSymbolTable::~CUtlSymbolTable, ThreadGetCurrentId, ThreadInterlockedExchange64, IGameSystem::~IGameSystem, operator delete, CThreadFastMutex::Lock(ulong long,uint), CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >*, int>::Purge, CUtlMemory<CUtlSignaller_Base*, int>::Purge
void __fastcall CPrecacheGameSystem::~CPrecacheGameSystem(CPrecacheGameSystem *const this)
{
  CUtlSymbolTable *p_m_SymbolTable; // rdi
  __int64 v3; // rdi
  bool v4; // zf
  signed __int64 CurrentId; // rsi
  __int64 i; // rbx
  CUtlSignaller_Base *v7; // rax
  void (*pfn)(detail::GenericClass *); // rdx
  _QWORD *v9; // rdi

  p_m_SymbolTable = &this->m_precachedResourceFolders.m_SymbolTable;
  *&p_m_SymbolTable[-2].m_StringPools.m_Size = off_40968F0;
  CUtlSymbolTable::~CUtlSymbolTable(p_m_SymbolTable);
  v4 = (this->m_precachedResourceFolders.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_precachedResourceFolders.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *,int>::Purge(&this->m_precachedResourceFolders.m_Vector.m_Memory);
    if ( (this->m_precachedResourceFolders.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *,int>::Purge(&this->m_precachedResourceFolders.m_Vector.m_Memory);
  }
  CurrentId = ThreadGetCurrentId(v3);
  if ( CurrentId != this->m_ConnectedSignallers.m_ownerID
    && _InterlockedCompareExchange64(
         &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
         CurrentId,
         0) != 0 )
  {
    _mm_pause();
    CThreadFastMutex::Lock(
      &this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>,
      CurrentId,
      0);
  }
  else
  {
    ++this->m_ConnectedSignallers.m_depth;
  }
  for ( i = 0; this->m_ConnectedSignallers.m_Size > i; ++i )
  {
    v7 = this->m_ConnectedSignallers.m_Memory.m_pMemory[i];
    pfn = v7->m_SlotDeletionDelegate.m_Closure.m_pFunction.__pfn;
    v9 = (v7->m_SlotDeletionDelegate.m_Closure.m_pthis + v7->m_SlotDeletionDelegate.m_Closure.m_pFunction.__delta);
    if ( (pfn & 1) != 0 )
      pfn = *(pfn + *v9 - 1);
    (pfn)(v9, &this->CUtlSlot);
  }
  if ( --this->m_ConnectedSignallers.m_depth == 0 )
    ThreadInterlockedExchange64(&this->m_ConnectedSignallers.CCopyableLock<CThreadFastMutex,(CopiedLockState_t)1u>, 0);
  v4 = (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ConnectedSignallers.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
    if ( (this->m_ConnectedSignallers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlSignaller_Base *,int>::Purge(&this->m_ConnectedSignallers.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CPrecacheGameSystem::GameDeactivate  (line 116, @0x0000000002374680, libserver.so)  // inlines: Clear, Destruct<CUtlString>, Element, Next, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, operator delete, CUtlSymbolTable::RemoveAll, CUtlMemory<CUtlString, int>::Purge
void __fastcall CPrecacheGameSystem::GameDeactivate(
        CPrecacheGameSystem *const this,
        const EventGameDeactivate_t *const msg)
{
  unsigned __int16 v3; // r13
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *v4; // r15
  int m_Size; // ebx
  __int64 i; // r12
  CUtlString *v7; // rdi
  bool v8; // zf

  v3 = 0;
  if ( this->m_precachedResourceFolders.m_Vector.m_Size != 0 )
  {
    do
    {
      v4 = this->m_precachedResourceFolders.m_Vector.m_Memory.m_pMemory[v3];
      if ( v4 != 0 )
      {
        m_Size = v4->m_Size;
        for ( i = 8LL * v4->m_Size - 8; --m_Size >= 0; i -= 8 )
        {
          v7 = (v4->m_Memory.m_pMemory + i);
          if ( v7->m_pString != 0 )
            CUtlString::FreeMemoryBlock(v7);
        }
        v8 = (v4->m_Memory.m_nGrowSize & 0xC0000000) == 0;
        v4->m_Size = 0;
        if ( v8 )
        {
          CUtlMemory<CUtlString,int>::Purge(&v4->m_Memory);
          if ( (v4->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CUtlString,int>::Purge(&v4->m_Memory);
        }
        operator delete(v4);
      }
      ++v3;
    }
    while ( v3 < this->m_precachedResourceFolders.m_Vector.m_Size && v3 != 0xFFFF );
  }
  this->m_precachedResourceFolders.m_Vector.m_Size = 0;
  CUtlSymbolTable::RemoveAll(&this->m_precachedResourceFolders.m_SymbolTable);
}


// CPrecacheGameSystem::PrecacheResourceFolder  (line 127, @0x00000000023801d0, libserver.so)  // inlines: AddMultipleToTail, AddToTail, CUtlMemory, CUtlString, CUtlVectorBase, CopyConstruct<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >*>, Element, EnsureCount, Find, GrowMemory, GrowVector, Insert, InsertMultipleBefore, operator const UtlSymId_t, operator[], ~CUtlString
// calls: CUtlString::Set, CUtlString::Append, CUtlString::Get, CUtlSymbolTable::Find, CUtlString::FreeMemoryBlock, operator new, CPrecacheGameSystem::GenerateFolderContentsList, CUtlSymbolTable::AddString, CUtlMemory<CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >*, int>::Grow, _Unwind_Resume
// callers: PrecacheParticleFolderAndSystems, PrecacheModelFolder
void __fastcall CPrecacheGameSystem::PrecacheResourceFolder(
        CPrecacheGameSystem *const this,
        const char *pResourceDirectory,
        const char *pCompiledExtension,
        const char *pResourceExtension,
        IEntityResourceManifest *pManifest,
        bool bRecursive)
{
  const char *v9; // rax
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *v10; // rbx
  __int64 i; // r14
  void (__fastcall *v12)(IEntityResourceManifest *, const char *); // r15
  const char *v13; // rax
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *v14; // rax
  const char *v15; // rax
  __int64 m_Size; // r15
  int m_nAllocationCount; // eax
  int v18; // eax
  CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > **v19; // rax
  int pCompiledExtensionb; // [rsp+10h] [rbp-70h]
  unsigned __int16 v25; // [rsp+20h] [rbp-60h]
  unsigned __int16 v26; // [rsp+30h] [rbp-50h]
  CUtlString key; // [rsp+40h] [rbp-40h] BYREF

  key.m_pString = 0;
  CUtlString::Set(&key, pResourceDirectory);
  CUtlString::Append(&key, pResourceExtension);
  v9 = CUtlString::Get(&key);
  CUtlSymbolTable::Find(&this->m_precachedResourceFolders.m_SymbolTable, v9);
  if ( v25 == 0xFFFF )
  {
    v14 = operator new(0x18u);
    v14->m_Size = 0;
    v14->m_Memory.m_pMemory = 0;
    v14->m_Memory.m_nAllocationCount = 0;
    v10 = v14;
    v14->m_Memory.m_nGrowSize = 0;
    CPrecacheGameSystem::GenerateFolderContentsList(
      this,
      pResourceDirectory,
      pCompiledExtension,
      pResourceExtension,
      v14,
      bRecursive);
    v15 = CUtlString::Get(&key);
    CUtlSymbolTable::AddString(&this->m_precachedResourceFolders.m_SymbolTable, v15);
    m_Size = this->m_precachedResourceFolders.m_Vector.m_Size;
    if ( m_Size <= v26 )
    {
      if ( m_Size == v26 )
      {
        v18 = this->m_precachedResourceFolders.m_Vector.m_Size;
        if ( m_Size == this->m_precachedResourceFolders.m_Vector.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *,int>::Grow(
            &this->m_precachedResourceFolders.m_Vector.m_Memory,
            1);
          v18 = this->m_precachedResourceFolders.m_Vector.m_Size;
        }
        this->m_precachedResourceFolders.m_Vector.m_Size = v18 + 1;
        v19 = &this->m_precachedResourceFolders.m_Vector.m_Memory.m_pMemory[m_Size];
        if ( v19 != 0 )
          *v19 = v10;
      }
      else
      {
        pCompiledExtensionb = v26 + 1;
        if ( m_Size < pCompiledExtensionb )
        {
          m_nAllocationCount = this->m_precachedResourceFolders.m_Vector.m_Memory.m_nAllocationCount;
          if ( pCompiledExtensionb > m_nAllocationCount )
            CUtlMemory<CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *,int>::Grow(
              &this->m_precachedResourceFolders.m_Vector.m_Memory,
              pCompiledExtensionb - m_nAllocationCount);
          this->m_precachedResourceFolders.m_Vector.m_Size = pCompiledExtensionb;
        }
        this->m_precachedResourceFolders.m_Vector.m_Memory.m_pMemory[v26] = v10;
      }
    }
  }
  else
  {
    v10 = this->m_precachedResourceFolders.m_Vector.m_Memory.m_pMemory[v25];
  }
  for ( i = 0; v10->m_Size > i; ++i )
  {
    v12 = **pManifest;
    v13 = CUtlString::Get(&v10->m_Memory.m_pMemory[i]);
    v12(pManifest, v13);
  }
  if ( key.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&key);
}


// CPrecacheGameSystem::GenerateFolderContentsList  (line 153, @0x000000000237ea20, libserver.so)  // inlines: AddToTail, Append, CUtlString, CopyConstruct<CUtlString>, Element, FileFindHandle_t, GrowMemory, V_SetExtension<long unsigned int>, V_strcpy_safe<260ul>, operator[], ~CUtlString, ~FileFindHandle_t
// calls: CUtlString::Set, CUtlString::FixSlashes, CUtlString::Append, CUtlString::Get, V_stricmp_fast, V_GetFileExtension, _V_strncpy, _V_SetExtension, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume, __stack_chk_fail
// callers: CPrecacheGameSystem::PrecacheResourceFolder
// strings: "/*"
void __fastcall CPrecacheGameSystem::GenerateFolderContentsList(
        CPrecacheGameSystem *const this,
        const char *pResourceDirectory,
        const char *pCompiledExtension,
        const char *pResourceExtension,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pFolderContents,
        bool bRecursive)
{
  __int64 (__fastcall *v7)(IFileSystem *, const char *, char *, FileFindHandle_t *); // rbx
  const char *v8; // rax
  const char *i; // rbx
  __int64 FileExtension; // rax
  __int64 m_Size; // rbx
  int v12; // eax
  CUtlString *v13; // rbx
  const char *v14; // rax
  const char *v15; // rax
  __int16 v21[8]; // [rsp+50h] [rbp-190h] BYREF
  __int16 v22[8]; // [rsp+60h] [rbp-180h] BYREF
  CUtlString strWildCard; // [rsp+70h] [rbp-170h] BYREF
  CUtlString strPath; // [rsp+80h] [rbp-160h] BYREF
  FileFindHandle_t hFile; // [rsp+90h] [rbp-150h] BYREF
  char pFixedResourceFile[264]; // [rsp+A0h] [rbp-140h] BYREF
  unsigned __int64 v27; // [rsp+1A8h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  strWildCard.m_pString = 0;
  CUtlString::Set(&strWildCard, pResourceDirectory);
  CUtlString::FixSlashes(&strWildCard, 47);
  CUtlString::Append(&strWildCard, "/*");
  hFile.m_pFileSystem = 0;
  hFile.m_nFindDataIndex = 0;
  v7 = *(g_pFullFileSystem->_vptr_IAppSystem + 41);
  v8 = CUtlString::Get(&strWildCard);
  for ( i = v7(g_pFullFileSystem, v8, "GAME", &hFile);
        i != 0;
        i = (*(g_pFullFileSystem->_vptr_IAppSystem + 38))(g_pFullFileSystem, &hFile) )
  {
    if ( (*(g_pFullFileSystem->_vptr_IAppSystem + 39))(g_pFullFileSystem, &hFile) != 0 )
    {
      if ( *i == 46 )
        continue;
      if ( V_stricmp_fast(i, "..") == 0 )
        continue;
      if ( !bRecursive )
        continue;
      strPath.m_pString = 0;
      CUtlString::Set(&strPath, pResourceDirectory);
      v21[0] = 47;
      CUtlString::Append(&strPath, v21);
      CUtlString::Append(&strPath, i);
      v15 = CUtlString::Get(&strPath);
      CPrecacheGameSystem::GenerateFolderContentsList(
        this,
        v15,
        pCompiledExtension,
        pResourceExtension,
        pFolderContents,
        1);
      if ( strPath.m_pString == 0 )
        continue;
    }
    else
    {
      FileExtension = V_GetFileExtension(i);
      if ( FileExtension == 0 || V_stricmp_fast(FileExtension, pCompiledExtension) != 0 )
        continue;
      _V_strncpy(pFixedResourceFile, i, 260);
      _V_SetExtension(pFixedResourceFile, pResourceExtension, 260);
      strPath.m_pString = 0;
      CUtlString::Set(&strPath, pResourceDirectory);
      v22[0] = 47;
      CUtlString::Append(&strPath, v22);
      CUtlString::Append(&strPath, pFixedResourceFile);
      m_Size = pFolderContents->m_Size;
      v12 = pFolderContents->m_Size;
      if ( m_Size == pFolderContents->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&pFolderContents->m_Memory, 1);
        v12 = pFolderContents->m_Size;
      }
      pFolderContents->m_Size = v12 + 1;
      v13 = &pFolderContents->m_Memory.m_pMemory[m_Size];
      if ( v13 != 0 )
      {
        v13->m_pString = 0;
        v14 = CUtlString::Get(&strPath);
        CUtlString::Set(v13, v14);
      }
      if ( strPath.m_pString == 0 )
        continue;
    }
    CUtlString::FreeMemoryBlock(&strPath);
  }
  (*(g_pFullFileSystem->_vptr_IAppSystem + 40))(g_pFullFileSystem, &hFile);
  if ( hFile.m_pFileSystem != 0 )
    (*(hFile.m_pFileSystem->_vptr_IAppSystem + 40))(hFile.m_pFileSystem, &hFile);
  hFile.m_pFileSystem = 0;
  hFile.m_nFindDataIndex = 0;
  if ( strWildCard.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&strWildCard);
}


// CPrecacheGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 204, @0x0000000002353cb0, libserver.so)
void __cdecl CPrecacheGameSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// PrecacheParticleFolderAndSystems  (line 208, @0x000000000236e850, libserver.so)
// calls: CPrecacheGameSystem::PrecacheResourceFolder
// callers: CDOTAGamerules::PrecacheResourcesFromKeys, CDOTA_Tutorial::SpawnGroupPrecache
// strings: "vpcf_c"
// globals: g_pPrecacheGameSystem
void __fastcall PrecacheParticleFolderAndSystems(
        const char *pParticleSystemDirectory,
        IEntityResourceManifest *pManifest)
{
  CPrecacheGameSystem::PrecacheResourceFolder(
    g_pPrecacheGameSystem,
    pParticleSystemDirectory,
    "vpcf_c",
    ".vpcf",
    pManifest,
    1);
}


// PrecacheParticleFolderAndSystems  (line 216, @0x000000000236e880, libserver.so)  // inlines: PrecacheParticleFolderAndSystems
// calls: CPrecacheGameSystem::PrecacheResourceFolder
// callers: CDOTA_Ability_Throw_Snowball::Precache, CDOTA_Ability_Throw_Coal::Precache, CDOTA_Ability_ShootFirework::Precache, CDOTA_Item_Tombstone::Precache, CDOTA_BaseNPC::Precache, CDOTA_Unit_Nian::Precache, CEconItemDefinition::Precache
// strings: "vpcf_c"
// globals: g_pPrecacheGameSystem
void __fastcall PrecacheParticleFolderAndSystems(
        const char *pParticleSystemDirectory,
        const CEntityPrecacheContext *pContext)
{
  CPrecacheGameSystem::PrecacheResourceFolder(
    g_pPrecacheGameSystem,
    pParticleSystemDirectory,
    "vpcf_c",
    ".vpcf",
    pContext->m_pManifest,
    1);
}


// PrecacheModelFolder  (line 221, @0x000000000236e8b0, libserver.so)
// calls: CPrecacheGameSystem::PrecacheResourceFolder
// callers: CDOTAGamerules::PrecacheResourcesFromKeys
// strings: "vmdl_c"
// globals: g_pPrecacheGameSystem
void __fastcall PrecacheModelFolder(const char *pModelFolder, IEntityResourceManifest *pManifest)
{
  CPrecacheGameSystem::PrecacheResourceFolder(g_pPrecacheGameSystem, pModelFolder, "vmdl_c", ".vmdl", pManifest, 1);
}


// PrecacheParticleSnapshot  (line 226, @0x0000000002353cc0, libserver.so)
void __fastcall PrecacheParticleSnapshot(const char *pParticleSnapshotFile)
{
  (*(*g_pParticleSystemMgr + 112LL))(g_pParticleSystemMgr, pParticleSnapshotFile);
}


// PrecacheGameSoundsFile  (line 233, @0x0000000002353ce0, libserver.so)
// calls: SoundSystemPreloadSounds
// callers: PrecacheGameSoundsFile, CDOTAGamerules::PrecacheResourcesFromKeys
void __fastcall PrecacheGameSoundsFile(const char *pSoundFile, IEntityResourceManifest *pManifest, bool bPreload)
{
  (**pManifest)(pManifest, pSoundFile);
  if ( bPreload )
    SoundSystemPreloadSounds();
}


// PrecacheGameSoundsFile  (line 242, @0x0000000002353d20, libserver.so)
// calls: PrecacheGameSoundsFile
// callers: CDOTA_BaseNPC::LoadVoiceFile, CDOTA_BaseNPC::Precache
void __fastcall PrecacheGameSoundsFile(const char *pSoundFile, const CEntityPrecacheContext *pContext, bool bPreload)
{
  PrecacheGameSoundsFile(pSoundFile, pContext->m_pManifest, bPreload);
}


// GetParticleSystemIndex  (line 250, @0x0000000002353d40, libserver.so)  // inlines: CWeakHandle, FindExistingResourceByName, FindExistingResourceByName<1717792886ull>, FromUntypedHandleUnchecked, InitUntypedUnchecked, StaticInvalidHandle
// calls: V_GetFileExtension, Warning
// callers: UTIL_ParticleTracer, CParticleSystem::Activate, DispatchParticleEffect, DispatchParticleEffectLink, StopParticleEffect, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, CDOTA_BaseNPC_Building::OverrideDestructionEffect, CDOTA_BaseNPC_Building::Spawn
// strings: "Attempted to find unknown particle system \"%s\"\n"
HParticleSystemDefinition __fastcall GetParticleSystemIndex(__int64 *a1, const char *pParticleSystemName)
{
  IResourceSystem *v4; // r13
  int v5; // eax
  __int64 v6; // rdx

  if ( pParticleSystemName == 0 )
    goto LABEL_7;
  if ( V_GetFileExtension(pParticleSystemName) == 0 )
  {
    Warning("Attempted to find unknown particle system \"%s\"\n", pParticleSystemName);
LABEL_7:
    *a1 = 0;
    return a1;
  }
  v4 = g_pResourceSystem;
  v5 = (*(*g_pResourceSystem + 448LL))(g_pResourceSystem, pParticleSystemName);
  v6 = 0;
  if ( v5 != 0 )
    v6 = (*(*v4 + 256LL))(v4, pParticleSystemName, 1717792886, 0);
  *a1 = v6;
  return a1;
}


// GetParticleSystemNameFromIndex  (line 268, @0x0000000002353de0, libserver.so)  // inlines: ResourceGetName, String, V_strncpy<int>, operator==
// calls: _V_strncpy
__int64 __fastcall GetParticleSystemNameFromIndex(
        HParticleSystemDefinition hParticleSystem,
        char *pOutBuffer,
        __int64 nMaxBufSize)
{
  const char **v4; // rax
  const char *v5; // rsi

  if ( hParticleSystem.m_pBinding->m_pData == 0 )
    return 0;
  v4 = *(hParticleSystem.m_pBinding->m_pData + 1);
  v5 = "";
  if ( v4 != 0 && *v4 != 0 )
    v5 = *v4;
  _V_strncpy(pOutBuffer, v5, nMaxBufSize);
  return 1;
}


// PrecacheEffect  (line 281, @0x0000000002353e30, libserver.so)
// callers: CBaseCombatWeapon::Precache, CC_Player_TestDispatchEffect, UTIL_BloodSprayPrecache, CBlood::Precache, CEnvSplash::Precache, CSource2Server::GameCreateNetworkStringTables, CFourWheelVehiclePhysics::Precache, CGameRules::BuildGameSessionManifest, CRopeKeyframe::PrecacheShakeRopes
void __fastcall PrecacheEffect(const char *pEffectName, IEntityResourceManifest *pResourceManifest)
{
  (*(g_pStringTableEffectDispatch->_vptr_INetworkStringTable + 8))(
    g_pStringTableEffectDispatch,
    1,
    pEffectName,
    0xFFFFFFFFLL,
    0);
}


// PrecacheEffect  (line 293, @0x0000000002353e60, libserver.so)  // inlines: PrecacheEffect
void __fastcall PrecacheEffect(const char *pEffectName, const CEntityPrecacheContext *pContext)
{
  (*(g_pStringTableEffectDispatch->_vptr_INetworkStringTable + 8))(
    g_pStringTableEffectDispatch,
    1,
    pEffectName,
    0xFFFFFFFFLL,
    0);
}


// GetEffectIndex  (line 302, @0x0000000002353e90, libserver.so)
// calls: DevWarning(char const*,...)
// callers: DispatchEffect
// strings: "Server: Missing precache for effect \"%s\"!\n"
int __fastcall GetEffectIndex(const char *pEffectName)
{
  int result; // eax

  result = 0;
  if ( pEffectName != 0 )
  {
    result = (*(g_pStringTableEffectDispatch->_vptr_INetworkStringTable + 12))(
               g_pStringTableEffectDispatch,
               pEffectName);
    if ( result == 0xFFFF )
    {
      DevWarning("Server: Missing precache for effect \"%s\"!\n", pEffectName);
      return 0;
    }
  }
  return result;
}


// GetEffectNameFromIndex  (line 320, @0x0000000002353ef0, libserver.so)
const char *__fastcall GetEffectNameFromIndex(int nEffectIndex)
{
  if ( (*(g_pStringTableEffectDispatch->_vptr_INetworkStringTable + 4))(g_pStringTableEffectDispatch) > nEffectIndex )
    return (*(g_pStringTableEffectDispatch->_vptr_INetworkStringTable + 9))(
             g_pStringTableEffectDispatch,
             nEffectIndex,
             0);
  else
    return "error";
}


