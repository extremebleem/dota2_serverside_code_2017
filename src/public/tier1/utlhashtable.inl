
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::~CUtlHashtable  (line 185, @0x0000000001f88420, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int>::Purge
void __fastcall CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::~CUtlHashtable(
        CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> > *const this)
{
  CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>::Purge(&this->m_table);
}


// CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::~CUtlHashtable  (line 185, @0x0000000001f88640, libserver.so)  // inlines: MarkInvalid, Purge, RemoveAll, ~CUtlMemory
// calls: CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int>::Purge
// callers: CPhysicsGameSystem::CPhysicsGameSystem
void __fastcall CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::~CUtlHashtable(
        CUtlHashtable<CSkeletonInstance*,IPhysicsJoint*,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>::Purge(&this->m_table);
}


// CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::~CUtlHashtable  (line 185, @0x0000000001f923f0, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge
void __fastcall CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::~CUtlHashtable(
        CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> > *const this)
{
  CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>::Purge(&this->m_table);
}


// CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::~CUtlHashtable  (line 185, @0x00000000022b5b00, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int>::Purge
void __fastcall CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::~CUtlHashtable(
        CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > *const this)
{
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>::Purge(&this->m_table);
}


// CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::~CUtlHashtable  (line 185, @0x00000000023110e0, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int>::Purge
void __fastcall CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::~CUtlHashtable(
        CUtlHashtable<CUtlStringToken,long long int,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long int>,int> > *const this)
{
  CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>::Purge(&this->m_table);
}


// CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::~CUtlHashtable  (line 185, @0x00000000023f7660, libserver.so)  // inlines: MarkInvalid, Purge, RemoveAll, ~CUtlMemory
// calls: CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int>::Purge
// callers: CChangeLevel::ChangeList
void __fastcall CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::~CUtlHashtable(
        CUtlHashtable<CBaseEntity*,int,DefaultHashFunctor<CBaseEntity*>,DefaultEqualFunctor<CBaseEntity*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<CBaseEntity*,int> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>::Purge(&this->m_table);
}


// CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> >::~CUtlHashtable  (line 185, @0x00000000024a4570, libserver.so)  // inlines: MarkInvalid, Purge, RemoveAll, ~CUtlMemory
// calls: CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge
// callers: CChatLanguageAnalyzer::GuessLanguageForText
void __fastcall CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int>>::~CUtlHashtable(
        CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<int,empty_t> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    v3 = &this->m_table.m_pMemory[v2];
    if ( v2 >= 0 )
    {
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,empty_t>,int>::Purge(&this->m_table);
}


// CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::~CUtlHashtable  (line 185, @0x0000000002572760, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int>::Purge
void __fastcall CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::~CUtlHashtable(
        CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>,int> > *const this)
{
  CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>::Purge(&this->m_table);
}


// CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::~CUtlHashtable  (line 185, @0x0000000002572d90, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int>::Purge
// callers: CDOTAGameManager::CDOTAGameManager
void __fastcall CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::~CUtlHashtable(
        CUtlHashtable<short unsigned int,int,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> > *const this)
{
  CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>::Purge(&this->m_table);
}


// CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::~CUtlHashtable  (line 185, @0x0000000002572e20, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int>::Purge
// callers: CDOTAGameManager::CDOTAGameManager
void __fastcall CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::~CUtlHashtable(
        CUtlHashtable<int,short unsigned int,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,short unsigned int>,int> > *const this)
{
  CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>::Purge(&this->m_table);
}


// CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::~CUtlHashtable  (line 185, @0x00000000029775c0, libserver.so)  // inlines: MarkInvalid, Purge, RemoveAll, ~CUtlMemory
// calls: CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int>::Purge
// callers: CDOTA_BaseNPC::CDOTA_BaseNPC
void __fastcall CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>>::~CUtlHashtable(
        CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>::Purge(&this->m_table);
}


// CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::~CUtlHashtable  (line 185, @0x0000000002e5b990, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int>::Purge
// callers: CDOTAInventoryManager::CDOTAInventoryManager
void __fastcall CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::~CUtlHashtable(
        CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> > *const this)
{
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>::Purge(&this->m_table);
}


// CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::~CUtlHashtable  (line 185, @0x0000000002e5ba20, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int>::Purge
// callers: CDOTAInventoryManager::CDOTAInventoryManager
void __fastcall CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::~CUtlHashtable(
        CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> > *const this)
{
  CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>::Purge(&this->m_table);
}


// CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::~CUtlHashtable  (line 185, @0x0000000002f08b90, libserver.so)  // inlines: MarkInvalid, Purge, RemoveAll, ~CUtlMemory
// calls: CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int>::Purge
void __fastcall CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::~CUtlHashtable(
        CUtlHashtable<unsigned int,CNavObstacle*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle*>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>::Purge(&this->m_table);
}


// CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::~CUtlHashtable  (line 185, @0x0000000002f08c00, libserver.so)  // inlines: MarkInvalid, Purge, RemoveAll, ~CUtlMemory
// calls: CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int>::Purge
void __fastcall CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::~CUtlHashtable(
        CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>::Purge(&this->m_table);
}


// CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::~CUtlHashtable  (line 185, @0x0000000002f08ec0, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int>::Purge
// callers: CNavObstructionManager::CNavObstructionManager
void __fastcall CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::~CUtlHashtable(
        CUtlHashtable<int,INavObstacle*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> > *const this)
{
  CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>::Purge(&this->m_table);
}


// CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::~CUtlHashtable  (line 185, @0x00000000031b5060, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int>::Purge
// callers: EvaluateExpression
void __fastcall CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::~CUtlHashtable(
        CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *const this)
{
  CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>::Purge(&this->m_table);
}


// CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::~CUtlHashtable  (line 185, @0x00000000031b8b50, libserver.so)  // inlines: MarkInvalid, Purge, RemoveAll, ~CUtlMemory
// calls: CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge
// callers: CFeModelCombiner::Combine
void __fastcall CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::~CUtlHashtable(
        CUtlHashtable<unsigned int,short unsigned int,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,short unsigned int>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<unsigned int,short unsigned int> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>::Purge(&this->m_table);
}


// CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::~CUtlHashtable  (line 185, @0x000000000322d0e0, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int>::Purge
// callers: GCSDK::CJobMgr::DumpJobWaitAnalysis
void __fastcall CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::~CUtlHashtable(
        CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *const this)
{
  CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>::Purge(&this->m_table);
}


// CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::~CUtlHashtable  (line 185, @0x000000000322d170, libserver.so)  // inlines: Purge, ~CUtlMemory
// calls: CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::RemoveAll, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int>::Purge
// callers: GCSDK::CJobMgr::DumpJobWaitAnalysis
void __fastcall CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::~CUtlHashtable(
        CUtlHashtable<long long unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<long long unsigned int>,DefaultEqualFunctor<long long unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *const this)
{
  CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::RemoveAll(this);
  if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>::Purge(&this->m_table);
}


// CUtlHashtable<short unsigned int, empty_t, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, empty_t>, int> >::Find  (line 211, @0x0000000001ec4c50, libserver.so)  // inlines: DoLookup<short unsigned int>, IdealIndex, operator()
// callers: CNetworkTransmitComponent::StateChanged
CUtlHashtable<short unsigned int,empty_t,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,empty_t>,int> >::handle_t __fastcall CUtlHashtable<unsigned short,empty_t,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,empty_t>,int>>::Find(
        const CUtlHashtable<short unsigned int,empty_t,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,empty_t>,int> > *const this,
        CUtlHashtable<short unsigned int,empty_t,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,empty_t>,int> >::KeyArg_t k)
{
  CUtlHashtable<short unsigned int,empty_t,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,empty_t>,int> >::handle_t result; // eax
  CUtlHashtableEntry<short unsigned int,empty_t> *m_pMemory; // r10
  unsigned int v5; // ecx
  int v6; // esi
  unsigned int v7; // r11d
  unsigned int v8; // r11d
  int v9; // r9d
  CUtlHashtableEntry<short unsigned int,empty_t>::storage_t flags_and_hash; // cx

  result = -1;
  if ( this->m_nUsed != 0 )
  {
    m_pMemory = this->m_table.m_pMemory;
    v5 = 4097 * k + 2127912214;
    v6 = this->m_table.m_nAllocationCount - 1;
    v7 = 9
       * ((33 * ((v5 >> 19) ^ v5 ^ 0xC761C23C) - 369570787) ^ ((33 * ((v5 >> 19) ^ v5 ^ 0xC761C23C) + 374761393) << 9))
       - 42973499;
    v8 = HIWORD(v7) ^ v7 ^ 0xB55A4F09;
    v9 = v6 & (16385 * (v8 & 0x3FFF));
    flags_and_hash = this->m_table.m_pMemory[v9].flags_and_hash;
    if ( v9 == ((flags_and_hash >> 31) | v6 & (16385 * (flags_and_hash & 0x3FFF))) )
    {
      for ( result = v6 & (16385 * (v8 & 0x3FFF)); ; flags_and_hash = m_pMemory[result].flags_and_hash )
      {
        if ( v9 == ((flags_and_hash >> 31) | v6 & (16385 * (flags_and_hash & 0x3FFF))) )
        {
          if ( ((v8 ^ flags_and_hash) & 0x3FFF) == 0 && k == m_pMemory[result].data[0] )
            return result;
          if ( (flags_and_hash & 0x4000) != 0 )
            break;
        }
        result = v6 & (result + 1);
      }
      return -1;
    }
  }
  return result;
}


// CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoRealloc  (line 341, @0x0000000001f99d30, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoRealloc(
        CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::DoRealloc  (line 341, @0x0000000001f9a460, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<unsigned int, empty_t>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::DoRealloc(
        CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<unsigned int,empty_t> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<unsigned int,empty_t> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  int inserted; // eax
  CUtlHashtableEntry<unsigned int,empty_t> *v17; // rax
  uint32 m_nGrowSize; // edx
  __int64 v19; // rdx
  __int64 (__fastcall **v20)(_QWORD *, __int64, __int64); // rax
  CUtlHashtableEntry<unsigned int,empty_t> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<unsigned int,empty_t> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 8LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        8LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 8LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 8LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v17 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v17;
    oldTableIfNotExternallyAllocated.m_pMemory = v17;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  v19 = m_nGrowSize & 0xC0000000;
  v20 = *g_pMemAlloc;
  if ( v19 != 0 )
  {
    v23 = (*v20)(g_pMemAlloc, 8LL * v6, v19);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 8LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = v20[1](g_pMemAlloc, m_pMemory, 8LL * v6);
    else
      v21 = (*v20)(g_pMemAlloc, 8LL * v6, v19);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      v11->flags_and_hash = 0x80000000;
      ++v10;
      ++v11;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        inserted = CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::DoInsertUnconstructed(
                     this,
                     v15,
                     0);
        v11 = *data;
        --m_nUsed;
        m_pMemory[inserted].data[0] = v11;
        if ( m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 2;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoRealloc  (line 341, @0x0000000001f9aa60, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoRealloc(
        CUtlHashtable<CSkeletonInstance*,IPhysicsJoint*,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<CSkeletonInstance*,IPhysicsJoint*,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoRealloc  (line 341, @0x0000000001f9bf50, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<unsigned int, WorldInfo_t*>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoRealloc(
        CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoRealloc  (line 341, @0x00000000022b6ce0, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoRealloc(
        CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  __int16 *data; // rbx
  int inserted; // eax
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *v16; // rax
  uint32 m_nGrowSize; // edx
  __int64 v18; // rdx
  __int64 (__fastcall **v19)(_QWORD *, __int64, __int64); // rax
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *v20; // rax
  void *v21; // rsp
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *v22; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v26 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 4LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v21 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        4LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 4LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 4LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v16 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v16;
    oldTableIfNotExternallyAllocated.m_pMemory = v16;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  v18 = m_nGrowSize & 0xC0000000;
  v19 = *g_pMemAlloc;
  if ( v18 != 0 )
  {
    v22 = (*v19)(g_pMemAlloc, 4LL * v6, v18);
    this->m_table.m_pMemory = v22;
    if ( m_pMemory != 0 )
    {
      memcpy(v22, m_pMemory, 4LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v22;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v20 = v19[1](g_pMemAlloc, m_pMemory, 4LL * v6);
    else
      v20 = (*v19)(g_pMemAlloc, 4LL * v6, v18);
    this->m_table.m_pMemory = v20;
    m_pMemory = v20;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      ++v10;
      ++v11;
      v11[-1].flags_and_hash = 0x8000;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      if ( *(data - 1) >= 0 )
      {
        inserted = CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoInsertUnconstructed(
                     this,
                     *(data - 1),
                     0);
        v11 = *data;
        --m_nUsed;
        m_pMemory[inserted].data[0] = v11;
        if ( m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 2;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoRealloc  (line 341, @0x000000000231ab10, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<CUtlStringToken, long long int>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoRealloc(
        CUtlHashtable<CUtlStringToken,long long int,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long int>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<CUtlStringToken,long long int> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<CUtlStringToken,long long int> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<CUtlStringToken,long long int> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<CUtlStringToken,long long int> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<CUtlStringToken,long long int> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<CUtlStringToken,long long int,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long int>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long int>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::DoRealloc  (line 341, @0x00000000023f8230, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<CBaseEntity*, int>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::DoRealloc(
        CUtlHashtable<CBaseEntity*,int,DefaultHashFunctor<CBaseEntity*>,DefaultEqualFunctor<CBaseEntity*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<CBaseEntity*,int> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<CBaseEntity*,int> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<CBaseEntity*,int> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<CBaseEntity*,int> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<CBaseEntity*,int> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<CBaseEntity*,int,DefaultHashFunctor<CBaseEntity*>,DefaultEqualFunctor<CBaseEntity*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoRealloc  (line 341, @0x00000000024ae8d0, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<CUtlStringToken, float>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoRealloc(
        CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<CUtlStringToken,float> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<CUtlStringToken,float> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  unsigned int *v14; // rbx
  CUtlHashtableEntry<CUtlStringToken,float> *v15; // rax
  CUtlHashtableEntry<CUtlStringToken,float> *v16; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<CUtlStringToken,float> *v18; // rax
  void *v19; // rsp
  CUtlHashtableEntry<CUtlStringToken,float> *v20; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v24 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 12LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v19 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        12LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 12LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 12LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v16 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v16;
    oldTableIfNotExternallyAllocated.m_pMemory = v16;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v20 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v20;
    if ( m_pMemory != 0 )
    {
      memcpy(v20, m_pMemory, 12LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v20;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v18 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 12LL * v6);
    else
      v18 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v18;
    m_pMemory = v18;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      v11->flags_and_hash = 0x80000000;
      ++v10;
      ++v11;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    v14 = &pOldBase[v12];
    do
    {
      if ( (*v14 & 0x80000000) == 0 )
      {
        --m_nUsed;
        v15 = &m_pMemory[CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoInsertUnconstructed(
                           this,
                           *v14,
                           0)];
        v15->data[0] = v14[1];
        v11 = v14[2];
        v15->data[1] = v11;
        if ( m_nUsed == 0 )
          break;
      }
      --v12;
      v14 -= 3;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> >::DoRealloc  (line 341, @0x00000000024afe40, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<int, empty_t>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int>>::DoRealloc(
        CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<int,empty_t> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<int,empty_t> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  int inserted; // eax
  CUtlHashtableEntry<int,empty_t> *v17; // rax
  uint32 m_nGrowSize; // edx
  __int64 v19; // rdx
  __int64 (__fastcall **v20)(_QWORD *, __int64, __int64); // rax
  CUtlHashtableEntry<int,empty_t> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<int,empty_t> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<int,empty_t>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 8LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        8LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 8LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 8LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<int,empty_t>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v17 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v17;
    oldTableIfNotExternallyAllocated.m_pMemory = v17;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  v19 = m_nGrowSize & 0xC0000000;
  v20 = *g_pMemAlloc;
  if ( v19 != 0 )
  {
    v23 = (*v20)(g_pMemAlloc, 8LL * v6, v19);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 8LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = v20[1](g_pMemAlloc, m_pMemory, 8LL * v6);
    else
      v21 = (*v20)(g_pMemAlloc, 8LL * v6, v19);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      v11->flags_and_hash = 0x80000000;
      ++v10;
      ++v11;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        inserted = CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int>>::DoInsertUnconstructed(
                     this,
                     v15,
                     0);
        v11 = *data;
        --m_nUsed;
        m_pMemory[inserted].data[0] = v11;
        if ( m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 2;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,empty_t>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoRealloc  (line 341, @0x000000000257ec10, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::DoRealloc(
        CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *m_pMemory; // r15
  int v10; // eax
  __int64 v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  __int64 data; // rbx
  signed int v15; // esi
  int inserted; // eax
  __int64 v17; // rsi
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v18; // rax
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v19; // rax
  uint32 m_nGrowSize; // edx
  __int64 v21; // rdx
  __int64 (__fastcall **v22)(_QWORD *, __int64, __int64); // rax
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v23; // rax
  void *v24; // rsp
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v25; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v29 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 32LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v24 = alloca(v7 + 32);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        32LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 32LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 32LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  v21 = m_nGrowSize & 0xC0000000;
  v22 = *g_pMemAlloc;
  if ( v21 != 0 )
  {
    v25 = (*v22)(g_pMemAlloc, 32LL * v6, v21);
    this->m_table.m_pMemory = v25;
    if ( m_pMemory != 0 )
    {
      memcpy(v25, m_pMemory, 32LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v25;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v23 = v22[1](g_pMemAlloc, m_pMemory, 32LL * v6);
    else
      v23 = (*v22)(g_pMemAlloc, 32LL * v6, v21);
    this->m_table.m_pMemory = v23;
    m_pMemory = v23;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *v11 = 0x80000000;
      ++v10;
      v11 += 32;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 4);
      if ( v15 >= 0 )
      {
        inserted = CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::DoInsertUnconstructed(
                     this,
                     v15,
                     0);
        v11 = 1;
        v17 = 0;
        v18 = &m_pMemory[inserted];
        while ( 1 )
        {
          *(&v18->flags_and_hash + v11) = *(data + 4 * v17);
          if ( v11 == 7 )
            break;
          v17 = v11++;
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 32;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoRealloc  (line 341, @0x000000000257f110, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoRealloc(
        CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoRealloc  (line 341, @0x000000000257fd90, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<short unsigned int, int>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::DoRealloc(
        CUtlHashtable<short unsigned int,int,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<short unsigned int,int> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<short unsigned int,int> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  unsigned int *v14; // rbx
  CUtlHashtableEntry<short unsigned int,int> *v15; // rax
  CUtlHashtableEntry<short unsigned int,int> *v16; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<short unsigned int,int> *v18; // rax
  void *v19; // rsp
  CUtlHashtableEntry<short unsigned int,int> *v20; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<short unsigned int,int,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v24 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 12LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v19 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        12LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 12LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 12LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v16 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v16;
    oldTableIfNotExternallyAllocated.m_pMemory = v16;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v20 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v20;
    if ( m_pMemory != 0 )
    {
      memcpy(v20, m_pMemory, 12LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v20;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v18 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 12LL * v6);
    else
      v18 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v18;
    m_pMemory = v18;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      v11->flags_and_hash = 0x80000000;
      ++v10;
      ++v11;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    v14 = &pOldBase[v12];
    do
    {
      if ( (*v14 & 0x80000000) == 0 )
      {
        --m_nUsed;
        v15 = &m_pMemory[CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::DoInsertUnconstructed(
                           this,
                           *v14,
                           0)];
        v15->data[0] = v14[1];
        v11 = v14[2];
        v15->data[1] = v11;
        if ( m_nUsed == 0 )
          break;
      }
      --v12;
      v14 -= 3;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoRealloc  (line 341, @0x0000000002580370, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<int, short unsigned int>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::DoRealloc(
        CUtlHashtable<int,short unsigned int,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,short unsigned int>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<int,short unsigned int> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<int,short unsigned int> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  unsigned int *v14; // rbx
  CUtlHashtableEntry<int,short unsigned int> *v15; // rax
  CUtlHashtableEntry<int,short unsigned int> *v16; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<int,short unsigned int> *v18; // rax
  void *v19; // rsp
  CUtlHashtableEntry<int,short unsigned int> *v20; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<int,short unsigned int,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,short unsigned int>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<int,short unsigned int>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v24 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 12LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v19 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        12LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 12LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 12LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v16 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v16;
    oldTableIfNotExternallyAllocated.m_pMemory = v16;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v20 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v20;
    if ( m_pMemory != 0 )
    {
      memcpy(v20, m_pMemory, 12LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v20;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v18 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 12LL * v6);
    else
      v18 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v18;
    m_pMemory = v18;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      v11->flags_and_hash = 0x80000000;
      ++v10;
      ++v11;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    v14 = &pOldBase[v12];
    do
    {
      if ( (*v14 & 0x80000000) == 0 )
      {
        --m_nUsed;
        v15 = &m_pMemory[CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::DoInsertUnconstructed(
                           this,
                           *v14,
                           0)];
        v15->data[0] = v14[1];
        v11 = v14[2];
        v15->data[1] = v11;
        if ( m_nUsed == 0 )
          break;
      }
      --v12;
      v14 -= 3;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::DoRealloc  (line 341, @0x000000000298ceb0, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<int, CDOTAPseudoRandom>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>>::DoRealloc(
        CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  unsigned int *v14; // rbx
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *v15; // rax
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *v16; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *v18; // rax
  void *v19; // rsp
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *v20; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v24 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 12LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v19 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        12LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 12LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 12LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v16 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v16;
    oldTableIfNotExternallyAllocated.m_pMemory = v16;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v20 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v20;
    if ( m_pMemory != 0 )
    {
      memcpy(v20, m_pMemory, 12LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v20;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v18 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 12LL * v6);
    else
      v18 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v18;
    m_pMemory = v18;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      v11->flags_and_hash = 0x80000000;
      ++v10;
      ++v11;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    v14 = &pOldBase[v12];
    do
    {
      if ( (*v14 & 0x80000000) == 0 )
      {
        --m_nUsed;
        v15 = &m_pMemory[CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>>::DoInsertUnconstructed(
                           this,
                           *v14,
                           0)];
        v15->data[0] = v14[1];
        v11 = v14[2];
        v15->data[1] = v11;
        if ( m_nUsed == 0 )
          break;
      }
      --v12;
      v14 -= 3;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoRealloc  (line 341, @0x0000000002e62660, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<int, CDOTAHeroSlots>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int>::Purge, __stack_chk_fail, _Unwind_Resume
// callers: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoRealloc(
        CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  unsigned int v4; // eax
  int v5; // ebx
  size_t v6; // r12
  int v7; // eax
  CUtlHashtableEntry<int,CDOTAHeroSlots> *m_pMemory; // r15
  int v9; // eax
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v10; // rdx
  int m_nUsed; // r14d
  int v12; // r12d
  __int64 data; // rbx
  signed int v14; // esi
  __int64 inserted; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v18; // rsi
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v19; // rax
  uint32 m_nGrowSize; // edx
  __int64 v21; // rdx
  __int64 (__fastcall **v22)(_QWORD *, __int64, __int64); // rax
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v23; // rax
  void *v24; // rsp
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v25; // rax
  int m_nAllocationCount; // [rsp+0h] [rbp-60h]
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v30 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v4 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v5 = (v4 | (v4 >> 4) | ((v4 | (v4 >> 4)) >> 8) | ((v4 | (v4 >> 4) | ((v4 | (v4 >> 4)) >> 8)) >> 16)) + 1;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v6 = 700LL * m_nAllocationCount;
    if ( v6 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v24 = alloca(((v6 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy((&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL), this->m_table.m_pMemory, v6);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 700LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, v6);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>::Purge(&this->m_table);
    v7 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v5 <= v7 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    this->m_table.m_nAllocationCount = 0;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    bFreeOldBase = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    v7 = 0;
    if ( v5 <= 0 )
    {
LABEL_9:
      v5 = v7;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  v21 = m_nGrowSize & 0xC0000000;
  v22 = *g_pMemAlloc;
  if ( v21 != 0 )
  {
    v25 = (*v22)(g_pMemAlloc, 700LL * v5, v21);
    this->m_table.m_pMemory = v25;
    if ( m_pMemory != 0 )
    {
      memcpy(v25, m_pMemory, 700LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v25;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v23 = v22[1](g_pMemAlloc, m_pMemory, 700LL * v5);
    else
      v23 = (*v22)(g_pMemAlloc, 700LL * v5, v21);
    this->m_table.m_pMemory = v23;
    m_pMemory = v23;
  }
  this->m_table.m_nAllocationCount = v5;
LABEL_10:
  v9 = 0;
  v10 = m_pMemory;
  if ( v5 > 0 )
  {
    do
    {
      v10->flags_and_hash = 0x80000000;
      ++v9;
      ++v10;
    }
    while ( this->m_table.m_nAllocationCount > v9 );
  }
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  v12 = m_nAllocationCount - 1;
  if ( m_nAllocationCount - 1 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v14 = *(data - 4);
      if ( v14 >= 0 )
      {
        inserted = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoInsertUnconstructed(
                     this,
                     v14,
                     0);
        v16 = 0;
        v17 = 1;
        v18 = &m_pMemory[inserted];
        while ( 1 )
        {
          *(&v18->flags_and_hash + v17) = *(data + 4 * v16);
          v10 = (v17 + 1);
          if ( v17 == 174 )
            break;
          v16 = v17++;
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 700;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v10);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::DoRealloc  (line 341, @0x0000000002e62cd0, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<int, CHeroBaseItems>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int>::Purge, __stack_chk_fail, _Unwind_Resume
// callers: CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::DoRealloc(
        CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<int,CHeroBaseItems> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<int,CHeroBaseItems> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  __int64 data; // rbx
  signed int v15; // esi
  __int64 inserted; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  CUtlHashtableEntry<int,CHeroBaseItems> *v19; // rsi
  CUtlHashtableEntry<int,CHeroBaseItems> *v20; // rax
  uint32 m_nGrowSize; // edx
  __int64 v22; // rdx
  __int64 (__fastcall **v23)(_QWORD *, __int64, __int64); // rax
  CUtlHashtableEntry<int,CHeroBaseItems> *v24; // rax
  void *v25; // rsp
  CUtlHashtableEntry<int,CHeroBaseItems> *v26; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v30 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 140LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v25 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        140LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 140LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 140LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v20 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v20;
    oldTableIfNotExternallyAllocated.m_pMemory = v20;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  v22 = m_nGrowSize & 0xC0000000;
  v23 = *g_pMemAlloc;
  if ( v22 != 0 )
  {
    v26 = (*v23)(g_pMemAlloc, 140LL * v6, v22);
    this->m_table.m_pMemory = v26;
    if ( m_pMemory != 0 )
    {
      memcpy(v26, m_pMemory, 140LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v26;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v24 = v23[1](g_pMemAlloc, m_pMemory, 140LL * v6);
    else
      v24 = (*v23)(g_pMemAlloc, 140LL * v6, v22);
    this->m_table.m_pMemory = v24;
    m_pMemory = v24;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      v11->flags_and_hash = 0x80000000;
      ++v10;
      ++v11;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 4);
      if ( v15 >= 0 )
      {
        inserted = CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::DoInsertUnconstructed(
                     this,
                     v15,
                     0);
        v17 = 0;
        v18 = 1;
        v19 = &m_pMemory[inserted];
        while ( 1 )
        {
          *(&v19->flags_and_hash + v18) = *(data + 4 * v17);
          v11 = (v18 + 1);
          if ( v18 == 34 )
            break;
          v17 = v18++;
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 140;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::DoRealloc  (line 341, @0x0000000002e63200, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t>*>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::DoRealloc(
        CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::DoRealloc  (line 341, @0x0000000002f0c810, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<unsigned int, bool>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::DoRealloc(
        CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<unsigned int,bool> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<unsigned int,bool> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  unsigned int *v14; // rbx
  CUtlHashtableEntry<unsigned int,bool> *v15; // rax
  CUtlHashtableEntry<unsigned int,bool> *v16; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<unsigned int,bool> *v18; // rax
  void *v19; // rsp
  CUtlHashtableEntry<unsigned int,bool> *v20; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v24 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 12LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v19 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        12LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 12LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 12LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v16 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v16;
    oldTableIfNotExternallyAllocated.m_pMemory = v16;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v20 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v20;
    if ( m_pMemory != 0 )
    {
      memcpy(v20, m_pMemory, 12LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v20;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v18 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 12LL * v6);
    else
      v18 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v18;
    m_pMemory = v18;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      v11->flags_and_hash = 0x80000000;
      ++v10;
      ++v11;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    v14 = &pOldBase[v12];
    do
    {
      if ( (*v14 & 0x80000000) == 0 )
      {
        --m_nUsed;
        v15 = &m_pMemory[CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::DoInsertUnconstructed(
                           this,
                           *v14,
                           0)];
        v15->data[0] = v14[1];
        v11 = v14[2];
        v15->data[1] = v11;
        if ( m_nUsed == 0 )
          break;
      }
      --v12;
      v14 -= 3;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::DoRealloc  (line 341, @0x0000000002f0d2d0, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<unsigned int, CNavNodesForArea>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int>>::DoRealloc(
        CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *m_pMemory; // r15
  int v10; // eax
  __int64 v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  __int64 data; // rbx
  signed int v15; // esi
  int inserted; // eax
  __int64 v17; // rcx
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *v18; // rsi
  __int64 i; // rax
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *v20; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *v22; // rax
  void *v23; // rsp
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *v24; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v28 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 44LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v23 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        44LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 44LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 44LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v20 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v20;
    oldTableIfNotExternallyAllocated.m_pMemory = v20;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v24 = (**g_pMemAlloc)(g_pMemAlloc, 44LL * v6);
    this->m_table.m_pMemory = v24;
    if ( m_pMemory != 0 )
    {
      memcpy(v24, m_pMemory, 44LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v24;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v22 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 44LL * v6);
    else
      v22 = (**g_pMemAlloc)(g_pMemAlloc, 44LL * v6);
    this->m_table.m_pMemory = v22;
    m_pMemory = v22;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *v11 = 0x80000000;
      ++v10;
      v11 += 44;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    v11 = 5LL * v12;
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 4);
      if ( v15 >= 0 )
      {
        inserted = CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int>>::DoInsertUnconstructed(
                     this,
                     v15,
                     0);
        v17 = 0;
        v18 = &m_pMemory[inserted];
        for ( i = 1; ; ++i )
        {
          *(&v18->flags_and_hash + i) = *(data + 4 * v17);
          v11 = i + 1;
          if ( i == 10 )
            break;
          v17 = i;
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 44;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoRealloc  (line 341, @0x0000000002f0d9d0, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<int, INavObstacle*>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::DoRealloc(
        CUtlHashtable<int,INavObstacle*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<int,INavObstacle*> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<int,INavObstacle*> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<int,INavObstacle*> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<int,INavObstacle*> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<int,INavObstacle*> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<int,INavObstacle*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoRealloc  (line 341, @0x0000000002f0df10, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoRealloc(
        CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoRealloc  (line 341, @0x0000000002f0e450, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<unsigned int, CNavObstacle*>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::DoRealloc(
        CUtlHashtable<unsigned int,CNavObstacle*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle*>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<unsigned int,CNavObstacle*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle*>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle*>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::DoRealloc  (line 341, @0x0000000002f0e9c0, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<int, CNavSearchElement>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::DoRealloc(
        CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<int,CNavSearchElement> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<int,CNavSearchElement> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  __int64 data; // rbx
  signed int v15; // esi
  int inserted; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  CUtlHashtableEntry<int,CNavSearchElement> *v20; // rsi
  CUtlHashtableEntry<int,CNavSearchElement> *v21; // rax
  uint32 m_nGrowSize; // edx
  __int64 v23; // rax
  CUtlHashtableEntry<int,CNavSearchElement> *v24; // rax
  void *v25; // rsp
  CUtlHashtableEntry<int,CNavSearchElement> *v26; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v30 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 28LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v25 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        28LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 28LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 28LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v21 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v21;
    oldTableIfNotExternallyAllocated.m_pMemory = v21;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  v23 = *g_pMemAlloc;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v26 = (*v23)(g_pMemAlloc, 28LL * v6);
    this->m_table.m_pMemory = v26;
    if ( m_pMemory != 0 )
    {
      memcpy(v26, m_pMemory, 28LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v26;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v24 = (*(v23 + 8))(g_pMemAlloc, m_pMemory, 28LL * v6);
    else
      v24 = (*v23)(g_pMemAlloc, 28LL * v6);
    this->m_table.m_pMemory = v24;
    m_pMemory = v24;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      v11->flags_and_hash = 0x80000000;
      ++v10;
      ++v11;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    v11 = (4LL * v12);
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 4);
      if ( v15 >= 0 )
      {
        inserted = CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::DoInsertUnconstructed(
                     this,
                     v15,
                     0);
        v17 = 0;
        v18 = inserted;
        v19 = 1;
        v20 = &m_pMemory[v18];
        while ( 1 )
        {
          *(&v20->flags_and_hash + v19) = *(data + 4 * v17);
          v11 = (v19 + 1);
          if ( v19 == 6 )
            break;
          v17 = v19++;
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 28;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::DoRealloc  (line 341, @0x0000000003165330, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<ResourceBindingBase_t const*,empty_t,DefaultHashFunctor<ResourceBindingBase_t const*>,DefaultEqualFunctor<ResourceBindingBase_t const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>>::DoRealloc(
        CUtlHashtable<const ResourceBindingBase_t*,empty_t,DefaultHashFunctor<const ResourceBindingBase_t*>,DefaultEqualFunctor<const ResourceBindingBase_t*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  unsigned int *v14; // rbx
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *v15; // rax
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *v16; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *v18; // rax
  void *v19; // rsp
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *v20; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<const ResourceBindingBase_t*,empty_t,DefaultHashFunctor<const ResourceBindingBase_t*>,DefaultEqualFunctor<const ResourceBindingBase_t*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v24 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 12LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v19 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        12LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 12LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 12LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v16 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v16;
    oldTableIfNotExternallyAllocated.m_pMemory = v16;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v20 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v20;
    if ( m_pMemory != 0 )
    {
      memcpy(v20, m_pMemory, 12LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v20;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v18 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 12LL * v6);
    else
      v18 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v18;
    m_pMemory = v18;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      v11->flags_and_hash = 0x80000000;
      ++v10;
      ++v11;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    v14 = &pOldBase[v12];
    do
    {
      if ( (*v14 & 0x80000000) == 0 )
      {
        --m_nUsed;
        v15 = &m_pMemory[CUtlHashtable<ResourceBindingBase_t const*,empty_t,DefaultHashFunctor<ResourceBindingBase_t const*>,DefaultEqualFunctor<ResourceBindingBase_t const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>>::DoInsertUnconstructed(
                           this,
                           *v14,
                           0)];
        v15->data[0] = v14[1];
        v11 = v14[2];
        v15->data[1] = v11;
        if ( m_nUsed == 0 )
          break;
      }
      --v12;
      v14 -= 3;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoRealloc  (line 341, @0x00000000031b5430, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<CUtlStringToken, float>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoRealloc(
        CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<CUtlStringToken,float> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<CUtlStringToken,float> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  unsigned int *v14; // rbx
  CUtlHashtableEntry<CUtlStringToken,float> *v15; // rax
  CUtlHashtableEntry<CUtlStringToken,float> *v16; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<CUtlStringToken,float> *v18; // rax
  void *v19; // rsp
  CUtlHashtableEntry<CUtlStringToken,float> *v20; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v24 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 12LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v19 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        12LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 12LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 12LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v16 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v16;
    oldTableIfNotExternallyAllocated.m_pMemory = v16;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v20 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v20;
    if ( m_pMemory != 0 )
    {
      memcpy(v20, m_pMemory, 12LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v20;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v18 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 12LL * v6);
    else
      v18 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v18;
    m_pMemory = v18;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      v11->flags_and_hash = 0x80000000;
      ++v10;
      ++v11;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    v14 = &pOldBase[v12];
    do
    {
      if ( (*v14 & 0x80000000) == 0 )
      {
        --m_nUsed;
        v15 = &m_pMemory[CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoInsertUnconstructed(
                           this,
                           *v14,
                           0)];
        v15->data[0] = v14[1];
        v11 = v14[2];
        v15->data[1] = v11;
        if ( m_nUsed == 0 )
          break;
      }
      --v12;
      v14 -= 3;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::DoRealloc  (line 341, @0x00000000031bc820, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<unsigned int, short unsigned int>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::DoRealloc(
        CUtlHashtable<unsigned int,short unsigned int,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,short unsigned int>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<unsigned int,short unsigned int> *m_pMemory; // r15
  int v10; // eax
  CUtlHashtableEntry<unsigned int,short unsigned int> *v11; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  unsigned int *v14; // rbx
  CUtlHashtableEntry<unsigned int,short unsigned int> *v15; // rax
  CUtlHashtableEntry<unsigned int,short unsigned int> *v16; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<unsigned int,short unsigned int> *v18; // rax
  void *v19; // rsp
  CUtlHashtableEntry<unsigned int,short unsigned int> *v20; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<unsigned int,short unsigned int,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,short unsigned int>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<unsigned int,short unsigned int>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v24 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 12LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v19 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        12LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 12LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 12LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v16 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v16;
    oldTableIfNotExternallyAllocated.m_pMemory = v16;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v20 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v20;
    if ( m_pMemory != 0 )
    {
      memcpy(v20, m_pMemory, 12LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v20;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v18 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 12LL * v6);
    else
      v18 = (**g_pMemAlloc)(g_pMemAlloc, 12LL * v6);
    this->m_table.m_pMemory = v18;
    m_pMemory = v18;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  v11 = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      v11->flags_and_hash = 0x80000000;
      ++v10;
      ++v11;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    v14 = &pOldBase[v12];
    do
    {
      if ( (*v14 & 0x80000000) == 0 )
      {
        --m_nUsed;
        v15 = &m_pMemory[CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::DoInsertUnconstructed(
                           this,
                           *v14,
                           0)];
        v15->data[0] = v14[1];
        v11 = v14[2];
        v15->data[1] = v11;
        if ( m_nUsed == 0 )
          break;
      }
      --v12;
      v14 -= 3;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, v11);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoRealloc  (line 341, @0x000000000322fa10, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::DoRealloc(
        CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoRealloc  (line 341, @0x000000000322ff50, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::DoRealloc(
        CUtlHashtable<long long unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<long long unsigned int>,DefaultEqualFunctor<long long unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<long long unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<long long unsigned int>,DefaultEqualFunctor<long long unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::DoRealloc  (line 341, @0x000000000326bc30, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<ResourceId_t, char const*>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int>>::DoRealloc(
        CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<ResourceId_t,char const*> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<ResourceId_t,char const*> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<ResourceId_t,char const*> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<ResourceId_t,char const*> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<ResourceId_t,char const*> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> >::DoRealloc  (line 341, @0x000000000326da80, libserver.so)  // inlines: CUtlMemory, EnsureCapacity, MarkInvalid, MoveDataFrom, Purge, SmallestPowerOfTwoGreaterOrEqual, Swap, V_memcpy, V_swap<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>*>, V_swap<int>, V_swap<unsigned int>, memcpy, ~CUtlMemory
// calls: memcpy, CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> >::DoInsertUnconstructed, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CSchemaClassInfo const*,CClassVisitInfo *,DefaultHashFunctor<CSchemaClassInfo const*>,DefaultEqualFunctor<CSchemaClassInfo const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>>::DoRealloc(
        CUtlHashtable<const CSchemaClassInfo*,CClassVisitInfo*,DefaultHashFunctor<const CSchemaClassInfo*>,DefaultEqualFunctor<const CSchemaClassInfo*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*>,int> > *const this,
        int size)
{
  int m_nMinSize; // eax
  int m_nAllocationCount; // r12d
  unsigned int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r13
  int v8; // eax
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *m_pMemory; // r15
  int v10; // eax
  __int64 i; // rdx
  int v12; // r12d
  int m_nUsed; // r13d
  int *data; // rbx
  signed int v15; // esi
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *v19; // rax
  uint32 m_nGrowSize; // edx
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *v21; // rax
  void *v22; // rsp
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *v23; // rax
  bool bFreeOldBase; // [rsp+7h] [rbp-59h]
  CUtlHashtable<const CSchemaClassInfo*,CClassVisitInfo*,DefaultHashFunctor<const CSchemaClassInfo*>,DefaultEqualFunctor<const CSchemaClassInfo*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*>,int> >::entry_t *pOldBase; // [rsp+8h] [rbp-58h]
  CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*>,int> oldTableIfNotExternallyAllocated; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  oldTableIfNotExternallyAllocated.m_pMemory = 0;
  v27 = __readfsqword(0x28u);
  m_nMinSize = this->m_nMinSize;
  oldTableIfNotExternallyAllocated.m_nAllocationCount = 0;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  oldTableIfNotExternallyAllocated.m_nGrowSize = 0;
  if ( m_nMinSize <= size )
    m_nMinSize = size;
  v5 = (m_nMinSize - 1) | ((m_nMinSize - 1) >> 1) | (((m_nMinSize - 1) | ((m_nMinSize - 1) >> 1)) >> 2);
  v6 = (v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8) | ((v5 | (v5 >> 4) | ((v5 | (v5 >> 4)) >> 8)) >> 16)) + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    v7 = 20LL * m_nAllocationCount;
    if ( v7 <= 0x3FFF )
    {
      bFreeOldBase = 0;
      v22 = alloca(((v7 + 31) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      pOldBase = (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL);
      memcpy(
        (&oldTableIfNotExternallyAllocated & 0xFFFFFFFFFFFFFFEFLL),
        this->m_table.m_pMemory,
        20LL * m_nAllocationCount);
    }
    else
    {
      pOldBase = (**g_pMemAlloc)(g_pMemAlloc, 20LL * m_nAllocationCount);
      bFreeOldBase = 1;
      memcpy(pOldBase, this->m_table.m_pMemory, 20LL * m_nAllocationCount);
    }
    if ( (this->m_table.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>::Purge(&this->m_table);
    v8 = this->m_table.m_nAllocationCount;
    m_pMemory = this->m_table.m_pMemory;
    if ( v6 <= v8 )
      goto LABEL_9;
  }
  else
  {
    oldTableIfNotExternallyAllocated.m_nGrowSize = this->m_table.m_nGrowSize;
    v19 = this->m_table.m_pMemory;
    m_pMemory = 0;
    this->m_table.m_nGrowSize = 0;
    this->m_table.m_pMemory = 0;
    oldTableIfNotExternallyAllocated.m_nAllocationCount = m_nAllocationCount;
    pOldBase = v19;
    oldTableIfNotExternallyAllocated.m_pMemory = v19;
    v8 = 0;
    this->m_table.m_nAllocationCount = 0;
    bFreeOldBase = 0;
    if ( v6 <= 0 )
    {
LABEL_9:
      v6 = v8;
      goto LABEL_10;
    }
  }
  m_nGrowSize = this->m_table.m_nGrowSize;
  if ( (m_nGrowSize & 0x40000000) != 0 )
    goto LABEL_9;
  if ( (m_nGrowSize & 0xC0000000) != 0 )
  {
    v23 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v23;
    if ( m_pMemory != 0 )
    {
      memcpy(v23, m_pMemory, 20LL * this->m_table.m_nAllocationCount);
      m_pMemory = this->m_table.m_pMemory;
    }
    else
    {
      m_pMemory = v23;
    }
    this->m_table.m_nGrowSize &= 0x3FFFFFFFu;
  }
  else
  {
    if ( m_pMemory != 0 )
      v21 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, m_pMemory, 20LL * v6);
    else
      v21 = (**g_pMemAlloc)(g_pMemAlloc, 20LL * v6);
    this->m_table.m_pMemory = v21;
    m_pMemory = v21;
  }
  this->m_table.m_nAllocationCount = v6;
LABEL_10:
  v10 = 0;
  i = m_pMemory;
  if ( v6 > 0 )
  {
    do
    {
      *i = 0x80000000;
      ++v10;
      i += 20;
    }
    while ( this->m_table.m_nAllocationCount > v10 );
  }
  v12 = m_nAllocationCount - 1;
  m_nUsed = this->m_nUsed;
  this->m_nUsed = 0;
  if ( v12 >= 0 )
  {
    data = pOldBase[v12].data;
    do
    {
      v15 = *(data - 1);
      if ( v15 >= 0 )
      {
        v16 = &m_pMemory[CUtlHashtable<CSchemaClassInfo const*,CClassVisitInfo *,DefaultHashFunctor<CSchemaClassInfo const*>,DefaultEqualFunctor<CSchemaClassInfo const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>>::DoInsertUnconstructed(
                           this,
                           v15,
                           0)];
        v17 = 1;
        v16->data[0] = *data;
        for ( i = 2; i != 5; ++i )
        {
          v18 = v17;
          v17 = i;
          *(&v16->flags_and_hash + i) = data[v18];
        }
        if ( --m_nUsed == 0 )
          break;
      }
      --v12;
      data -= 5;
    }
    while ( v12 != -1 );
  }
  if ( bFreeOldBase )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pOldBase, i);
  if ( (oldTableIfNotExternallyAllocated.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>::Purge(&oldTableIfNotExternallyAllocated);
}


// CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::BumpEntry  (line 406, @0x0000000001f99b10, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::BumpEntry(
        CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *m_pMemory; // r11
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::BumpEntry  (line 406, @0x0000000001f9a290, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::BumpEntry(
        CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<unsigned int,empty_t> *m_pMemory; // r11
  CUtlHashtableEntry<unsigned int,empty_t> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<unsigned int,empty_t> *v8; // r8
  int flags_and_hash; // edx
  CUtlHashtableEntry<unsigned int,empty_t> *v10; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v10 = &m_pMemory[idx];
      if ( v6 == (v4 & v10->flags_and_hash | (v10->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v10->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v8->data[0] = v3->data[0];
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::BumpEntry  (line 406, @0x0000000001f9a840, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::BumpEntry(
        CUtlHashtable<CSkeletonInstance*,IPhysicsJoint*,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *m_pMemory; // r11
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::BumpEntry  (line 406, @0x0000000001f9bd30, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::BumpEntry(
        CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *m_pMemory; // r11
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::BumpEntry  (line 406, @0x00000000022b6ab0, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::BumpEntry(
        CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *m_pMemory; // r11
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *v3; // r12
  int v4; // edi
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>::storage_t v5; // bx
  int v6; // r10d
  int i; // edx
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *v8; // r8
  __int16 flags_and_hash; // cx
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *v10; // r9
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>::storage_t v11; // cx

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFF;
  v6 = v4 & (16385 * (v3->flags_and_hash & 0x3FFF));
  for ( i = v6; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != ((v8->flags_and_hash >> 31) | v4 & (16385 * (v8->flags_and_hash & 0x3FFF))) )
      break;
    if ( (flags_and_hash & 0x4000) != 0 )
    {
      HIBYTE(flags_and_hash) &= ~0x40u;
      HIBYTE(v5) |= 0x40u;
      v8->flags_and_hash = flags_and_hash;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x4000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v10 = &m_pMemory[idx];
      v11 = v10->flags_and_hash;
      if ( v6 == ((v10->flags_and_hash >> 31) | v4 & (16385 * (v10->flags_and_hash & 0x3FFF))) )
      {
        HIBYTE(v11) |= 0x40u;
        HIBYTE(v5) &= ~0x40u;
        v10->flags_and_hash = v11;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v8->data[0] = v3->data[0];
  v3->flags_and_hash = 0x8000;
}


// CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::BumpEntry  (line 406, @0x000000000231a8f0, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::BumpEntry(
        CUtlHashtable<CUtlStringToken,long long int,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long int>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<CUtlStringToken,long long int> *m_pMemory; // r11
  CUtlHashtableEntry<CUtlStringToken,long long int> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<CUtlStringToken,long long int> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<CUtlStringToken,long long int> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::BumpEntry  (line 406, @0x00000000023f8010, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::BumpEntry(
        CUtlHashtable<CBaseEntity*,int,DefaultHashFunctor<CBaseEntity*>,DefaultEqualFunctor<CBaseEntity*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<CBaseEntity*,int> *m_pMemory; // r11
  CUtlHashtableEntry<CBaseEntity*,int> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<CBaseEntity*,int> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<CBaseEntity*,int> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::BumpEntry  (line 406, @0x00000000024ae6a0, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::BumpEntry(
        CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<CUtlStringToken,float> *m_pMemory; // r11
  CUtlHashtableEntry<CUtlStringToken,float> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<CUtlStringToken,float> *v8; // r8
  int flags_and_hash; // edx
  signed int v10; // esi
  CUtlHashtableEntry<CUtlStringToken,float> *v11; // r9
  int v12; // ecx

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    v10 = v4 & (v4 + idx);
    if ( i != v10 )
    {
      v11 = &m_pMemory[v10];
      v12 = v11->flags_and_hash;
      if ( v6 == ((v11->flags_and_hash >> 31) | v4 & v11->flags_and_hash) )
      {
LABEL_14:
        v5 &= ~0x40000000u;
        v11->flags_and_hash = v12 | 0x40000000;
      }
      else
      {
        while ( 1 )
        {
          v10 = v4 & (v4 + v10);
          if ( i == v10 )
            break;
          v11 = &m_pMemory[v10];
          v12 = v11->flags_and_hash;
          if ( v6 == (v4 & v11->flags_and_hash | (v11->flags_and_hash >> 31)) )
            goto LABEL_14;
        }
      }
    }
  }
  v8->flags_and_hash = v5;
  v8->data[0] = v3->data[0];
  v8->data[1] = v3->data[1];
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> >::BumpEntry  (line 406, @0x00000000024afc70, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int>>::BumpEntry(
        CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<int,empty_t> *m_pMemory; // r11
  CUtlHashtableEntry<int,empty_t> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<int,empty_t> *v8; // r8
  int flags_and_hash; // edx
  CUtlHashtableEntry<int,empty_t> *v10; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v10 = &m_pMemory[idx];
      if ( v6 == (v4 & v10->flags_and_hash | (v10->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v10->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v8->data[0] = v3->data[0];
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::BumpEntry  (line 406, @0x000000000257ea00, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::BumpEntry(
        CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *m_pMemory; // r11
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v3; // rbx
  int v4; // edi
  int v5; // r12d
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v8; // r8
  int flags_and_hash; // edx
  signed int v10; // esi
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *j; // r9
  __int64 v12; // rax
  __int64 k; // rcx

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    v10 = v4 & (v4 + idx);
    if ( i != v10 )
    {
      for ( j = &m_pMemory[v10]; v6 != (v4 & j->flags_and_hash | (j->flags_and_hash >> 31)); j = &m_pMemory[v10] )
      {
        v10 = v4 & (v4 + v10);
        if ( i == v10 )
          goto LABEL_14;
      }
      v5 &= ~0x40000000u;
      j->flags_and_hash |= 0x40000000u;
    }
  }
LABEL_14:
  v8->flags_and_hash = v5;
  v12 = 1;
  for ( k = 0; ; k = v12++ )
  {
    *(&v8->flags_and_hash + v12) = v3->data[k];
    if ( v12 == 7 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::BumpEntry  (line 406, @0x000000000257eef0, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::BumpEntry(
        CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *m_pMemory; // r11
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::BumpEntry  (line 406, @0x000000000257fb60, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::BumpEntry(
        CUtlHashtable<short unsigned int,int,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<short unsigned int,int> *m_pMemory; // r11
  CUtlHashtableEntry<short unsigned int,int> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<short unsigned int,int> *v8; // r8
  int flags_and_hash; // edx
  signed int v10; // esi
  CUtlHashtableEntry<short unsigned int,int> *v11; // r9
  int v12; // ecx

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    v10 = v4 & (v4 + idx);
    if ( i != v10 )
    {
      v11 = &m_pMemory[v10];
      v12 = v11->flags_and_hash;
      if ( v6 == ((v11->flags_and_hash >> 31) | v4 & v11->flags_and_hash) )
      {
LABEL_14:
        v5 &= ~0x40000000u;
        v11->flags_and_hash = v12 | 0x40000000;
      }
      else
      {
        while ( 1 )
        {
          v10 = v4 & (v4 + v10);
          if ( i == v10 )
            break;
          v11 = &m_pMemory[v10];
          v12 = v11->flags_and_hash;
          if ( v6 == (v4 & v11->flags_and_hash | (v11->flags_and_hash >> 31)) )
            goto LABEL_14;
        }
      }
    }
  }
  v8->flags_and_hash = v5;
  v8->data[0] = v3->data[0];
  v8->data[1] = v3->data[1];
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::BumpEntry  (line 406, @0x0000000002580140, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::BumpEntry(
        CUtlHashtable<int,short unsigned int,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,short unsigned int>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<int,short unsigned int> *m_pMemory; // r11
  CUtlHashtableEntry<int,short unsigned int> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<int,short unsigned int> *v8; // r8
  int flags_and_hash; // edx
  signed int v10; // esi
  CUtlHashtableEntry<int,short unsigned int> *v11; // r9
  int v12; // ecx

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    v10 = v4 & (v4 + idx);
    if ( i != v10 )
    {
      v11 = &m_pMemory[v10];
      v12 = v11->flags_and_hash;
      if ( v6 == ((v11->flags_and_hash >> 31) | v4 & v11->flags_and_hash) )
      {
LABEL_14:
        v5 &= ~0x40000000u;
        v11->flags_and_hash = v12 | 0x40000000;
      }
      else
      {
        while ( 1 )
        {
          v10 = v4 & (v4 + v10);
          if ( i == v10 )
            break;
          v11 = &m_pMemory[v10];
          v12 = v11->flags_and_hash;
          if ( v6 == (v4 & v11->flags_and_hash | (v11->flags_and_hash >> 31)) )
            goto LABEL_14;
        }
      }
    }
  }
  v8->flags_and_hash = v5;
  v8->data[0] = v3->data[0];
  v8->data[1] = v3->data[1];
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::BumpEntry  (line 406, @0x000000000298cc80, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>>::BumpEntry(
        CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *m_pMemory; // r11
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *v8; // r8
  int flags_and_hash; // edx
  signed int v10; // esi
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *v11; // r9
  int v12; // ecx

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    v10 = v4 & (v4 + idx);
    if ( i != v10 )
    {
      v11 = &m_pMemory[v10];
      v12 = v11->flags_and_hash;
      if ( v6 == ((v11->flags_and_hash >> 31) | v4 & v11->flags_and_hash) )
      {
LABEL_14:
        v5 &= ~0x40000000u;
        v11->flags_and_hash = v12 | 0x40000000;
      }
      else
      {
        while ( 1 )
        {
          v10 = v4 & (v4 + v10);
          if ( i == v10 )
            break;
          v11 = &m_pMemory[v10];
          v12 = v11->flags_and_hash;
          if ( v6 == (v4 & v11->flags_and_hash | (v11->flags_and_hash >> 31)) )
            goto LABEL_14;
        }
      }
    }
  }
  v8->flags_and_hash = v5;
  v8->data[0] = v3->data[0];
  v8->data[1] = v3->data[1];
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::BumpEntry  (line 406, @0x0000000002e62420, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::BumpEntry(
        CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<int,CDOTAHeroSlots> *m_pMemory; // rbx
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v3; // r10
  int v4; // r8d
  int v5; // r12d
  int v6; // r11d
  int i; // eax
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v8; // rdi
  int flags_and_hash; // edx
  signed int v10; // edx
  __int64 v11; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v13; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    v10 = v4 & (v4 + idx);
    if ( i != v10 )
    {
      while ( 1 )
      {
        v13 = &m_pMemory[v10];
        if ( v6 == (v4 & v13->flags_and_hash | (v13->flags_and_hash >> 31)) )
          break;
        v10 = v4 & (v4 + v10);
        if ( i == v10 )
          goto LABEL_9;
      }
      v5 &= ~0x40000000u;
      v13->flags_and_hash |= 0x40000000u;
    }
  }
LABEL_9:
  v8->flags_and_hash = v5;
  v11 = 1;
  for ( j = 0; ; j = v11++ )
  {
    *(&v8->flags_and_hash + v11) = v3->data[j];
    if ( v11 == 174 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::BumpEntry  (line 406, @0x0000000002e62aa0, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::BumpEntry(
        CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<int,CHeroBaseItems> *m_pMemory; // rbx
  CUtlHashtableEntry<int,CHeroBaseItems> *v3; // r10
  int v4; // r8d
  int v5; // r12d
  int v6; // r11d
  int i; // eax
  CUtlHashtableEntry<int,CHeroBaseItems> *v8; // rdi
  int flags_and_hash; // edx
  signed int v10; // edx
  __int64 v11; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<int,CHeroBaseItems> *v13; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    v10 = v4 & (v4 + idx);
    if ( i != v10 )
    {
      while ( 1 )
      {
        v13 = &m_pMemory[v10];
        if ( v6 == (v4 & v13->flags_and_hash | (v13->flags_and_hash >> 31)) )
          break;
        v10 = v4 & (v4 + v10);
        if ( i == v10 )
          goto LABEL_9;
      }
      v5 &= ~0x40000000u;
      v13->flags_and_hash |= 0x40000000u;
    }
  }
LABEL_9:
  v8->flags_and_hash = v5;
  v11 = 1;
  for ( j = 0; ; j = v11++ )
  {
    *(&v8->flags_and_hash + v11) = v3->data[j];
    if ( v11 == 34 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::BumpEntry  (line 406, @0x0000000002e62fe0, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::BumpEntry(
        CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*> *m_pMemory; // r11
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::BumpEntry  (line 406, @0x0000000002f0c5e0, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::BumpEntry(
        CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<unsigned int,bool> *m_pMemory; // r11
  CUtlHashtableEntry<unsigned int,bool> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<unsigned int,bool> *v8; // r8
  int flags_and_hash; // edx
  signed int v10; // esi
  CUtlHashtableEntry<unsigned int,bool> *v11; // r9
  int v12; // ecx

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    v10 = v4 & (v4 + idx);
    if ( i != v10 )
    {
      v11 = &m_pMemory[v10];
      v12 = v11->flags_and_hash;
      if ( v6 == ((v11->flags_and_hash >> 31) | v4 & v11->flags_and_hash) )
      {
LABEL_14:
        v5 &= ~0x40000000u;
        v11->flags_and_hash = v12 | 0x40000000;
      }
      else
      {
        while ( 1 )
        {
          v10 = v4 & (v4 + v10);
          if ( i == v10 )
            break;
          v11 = &m_pMemory[v10];
          v12 = v11->flags_and_hash;
          if ( v6 == (v4 & v11->flags_and_hash | (v11->flags_and_hash >> 31)) )
            goto LABEL_14;
        }
      }
    }
  }
  v8->flags_and_hash = v5;
  v8->data[0] = v3->data[0];
  v8->data[1] = v3->data[1];
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::BumpEntry  (line 406, @0x0000000002f0d0b0, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int>>::BumpEntry(
        CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *m_pMemory; // rbx
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *v3; // r11
  int v4; // edi
  int v5; // r12d
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 10 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::BumpEntry  (line 406, @0x0000000002f0d7b0, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::BumpEntry(
        CUtlHashtable<int,INavObstacle*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<int,INavObstacle*> *m_pMemory; // r11
  CUtlHashtableEntry<int,INavObstacle*> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<int,INavObstacle*> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<int,INavObstacle*> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::BumpEntry  (line 406, @0x0000000002f0dcf0, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::BumpEntry(
        CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *m_pMemory; // r11
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::BumpEntry  (line 406, @0x0000000002f0e230, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::BumpEntry(
        CUtlHashtable<unsigned int,CNavObstacle*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle*>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *m_pMemory; // r11
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::BumpEntry  (line 406, @0x0000000002f0e770, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::BumpEntry(
        CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<int,CNavSearchElement> *m_pMemory; // r11
  CUtlHashtableEntry<int,CNavSearchElement> *v3; // rbx
  int v4; // edi
  int v5; // r12d
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<int,CNavSearchElement> *v8; // r8
  int flags_and_hash; // edx
  signed int v10; // esi
  CUtlHashtableEntry<int,CNavSearchElement> *j; // r9
  __int64 v12; // rax
  __int64 k; // rcx

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    v10 = v4 & (v4 + idx);
    if ( i != v10 )
    {
      for ( j = &m_pMemory[v10]; v6 != (v4 & j->flags_and_hash | (j->flags_and_hash >> 31)); j = &m_pMemory[v10] )
      {
        v10 = v4 & (v4 + v10);
        if ( i == v10 )
          goto LABEL_14;
      }
      v5 &= ~0x40000000u;
      j->flags_and_hash |= 0x40000000u;
    }
  }
LABEL_14:
  v8->flags_and_hash = v5;
  v12 = 1;
  for ( k = 0; ; k = v12++ )
  {
    *(&v8->flags_and_hash + v12) = v3->data[k];
    if ( v12 == 6 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::BumpEntry  (line 406, @0x0000000003165100, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<ResourceBindingBase_t const*,empty_t,DefaultHashFunctor<ResourceBindingBase_t const*>,DefaultEqualFunctor<ResourceBindingBase_t const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>>::BumpEntry(
        CUtlHashtable<const ResourceBindingBase_t*,empty_t,DefaultHashFunctor<const ResourceBindingBase_t*>,DefaultEqualFunctor<const ResourceBindingBase_t*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *m_pMemory; // r11
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *v8; // r8
  int flags_and_hash; // edx
  signed int v10; // esi
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *v11; // r9
  int v12; // ecx

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    v10 = v4 & (v4 + idx);
    if ( i != v10 )
    {
      v11 = &m_pMemory[v10];
      v12 = v11->flags_and_hash;
      if ( v6 == ((v11->flags_and_hash >> 31) | v4 & v11->flags_and_hash) )
      {
LABEL_14:
        v5 &= ~0x40000000u;
        v11->flags_and_hash = v12 | 0x40000000;
      }
      else
      {
        while ( 1 )
        {
          v10 = v4 & (v4 + v10);
          if ( i == v10 )
            break;
          v11 = &m_pMemory[v10];
          v12 = v11->flags_and_hash;
          if ( v6 == (v4 & v11->flags_and_hash | (v11->flags_and_hash >> 31)) )
            goto LABEL_14;
        }
      }
    }
  }
  v8->flags_and_hash = v5;
  v8->data[0] = v3->data[0];
  v8->data[1] = v3->data[1];
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::BumpEntry  (line 406, @0x00000000031b5200, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::BumpEntry(
        CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<CUtlStringToken,float> *m_pMemory; // r11
  CUtlHashtableEntry<CUtlStringToken,float> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<CUtlStringToken,float> *v8; // r8
  int flags_and_hash; // edx
  signed int v10; // esi
  CUtlHashtableEntry<CUtlStringToken,float> *v11; // r9
  int v12; // ecx

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    v10 = v4 & (v4 + idx);
    if ( i != v10 )
    {
      v11 = &m_pMemory[v10];
      v12 = v11->flags_and_hash;
      if ( v6 == ((v11->flags_and_hash >> 31) | v4 & v11->flags_and_hash) )
      {
LABEL_14:
        v5 &= ~0x40000000u;
        v11->flags_and_hash = v12 | 0x40000000;
      }
      else
      {
        while ( 1 )
        {
          v10 = v4 & (v4 + v10);
          if ( i == v10 )
            break;
          v11 = &m_pMemory[v10];
          v12 = v11->flags_and_hash;
          if ( v6 == (v4 & v11->flags_and_hash | (v11->flags_and_hash >> 31)) )
            goto LABEL_14;
        }
      }
    }
  }
  v8->flags_and_hash = v5;
  v8->data[0] = v3->data[0];
  v8->data[1] = v3->data[1];
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::BumpEntry  (line 406, @0x00000000031bc5f0, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::BumpEntry(
        CUtlHashtable<unsigned int,short unsigned int,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,short unsigned int>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<unsigned int,short unsigned int> *m_pMemory; // r11
  CUtlHashtableEntry<unsigned int,short unsigned int> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<unsigned int,short unsigned int> *v8; // r8
  int flags_and_hash; // edx
  signed int v10; // esi
  CUtlHashtableEntry<unsigned int,short unsigned int> *v11; // r9
  int v12; // ecx

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    v10 = v4 & (v4 + idx);
    if ( i != v10 )
    {
      v11 = &m_pMemory[v10];
      v12 = v11->flags_and_hash;
      if ( v6 == ((v11->flags_and_hash >> 31) | v4 & v11->flags_and_hash) )
      {
LABEL_14:
        v5 &= ~0x40000000u;
        v11->flags_and_hash = v12 | 0x40000000;
      }
      else
      {
        while ( 1 )
        {
          v10 = v4 & (v4 + v10);
          if ( i == v10 )
            break;
          v11 = &m_pMemory[v10];
          v12 = v11->flags_and_hash;
          if ( v6 == (v4 & v11->flags_and_hash | (v11->flags_and_hash >> 31)) )
            goto LABEL_14;
        }
      }
    }
  }
  v8->flags_and_hash = v5;
  v8->data[0] = v3->data[0];
  v8->data[1] = v3->data[1];
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::BumpEntry  (line 406, @0x000000000322f7f0, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::BumpEntry(
        CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *m_pMemory; // r11
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::BumpEntry  (line 406, @0x000000000322fd30, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::BumpEntry(
        CUtlHashtable<long long unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<long long unsigned int>,DefaultEqualFunctor<long long unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *m_pMemory; // r11
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::BumpEntry  (line 406, @0x000000000326ba10, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int>>::BumpEntry(
        CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<ResourceId_t,char const*> *m_pMemory; // r11
  CUtlHashtableEntry<ResourceId_t,char const*> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<ResourceId_t,char const*> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<ResourceId_t,char const*> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> >::BumpEntry  (line 406, @0x000000000326d860, libserver.so)  // inlines: IdealIndex, MarkInvalid, MoveDataFrom
// callers: CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> >::DoInsertUnconstructed
void __fastcall CUtlHashtable<CSchemaClassInfo const*,CClassVisitInfo *,DefaultHashFunctor<CSchemaClassInfo const*>,DefaultEqualFunctor<CSchemaClassInfo const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>>::BumpEntry(
        CUtlHashtable<const CSchemaClassInfo*,CClassVisitInfo*,DefaultHashFunctor<const CSchemaClassInfo*>,DefaultEqualFunctor<const CSchemaClassInfo*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*>,int> > *const this,
        unsigned int idx)
{
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *m_pMemory; // r11
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *v3; // r12
  int v4; // edi
  int v5; // ebx
  int v6; // r10d
  int i; // eax
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *v8; // r8
  int flags_and_hash; // edx
  __int64 v10; // rax
  __int64 j; // rcx
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *v12; // r9

  m_pMemory = this->m_table.m_pMemory;
  v3 = &this->m_table.m_pMemory[idx];
  v4 = this->m_table.m_nAllocationCount - 1;
  v5 = v3->flags_and_hash & 0x7FFFFFFF;
  v6 = v5 & v4;
  for ( i = v5 & v4; ; i = v4 & (i + 1) )
  {
    v8 = &m_pMemory[i];
    flags_and_hash = v8->flags_and_hash;
    if ( v6 != (v4 & v8->flags_and_hash | (v8->flags_and_hash >> 31)) )
      break;
    if ( (flags_and_hash & 0x40000000) != 0 )
    {
      v5 |= 0x40000000u;
      v8->flags_and_hash = flags_and_hash & 0xBFFFFFFF;
    }
LABEL_3:
    ;
  }
  if ( flags_and_hash >= 0 )
    goto LABEL_3;
  if ( (v3->flags_and_hash & 0x40000000) != 0 )
  {
    while ( 1 )
    {
      idx = v4 & (v4 + idx);
      if ( i == idx )
        break;
      v12 = &m_pMemory[idx];
      if ( v6 == (v4 & v12->flags_and_hash | (v12->flags_and_hash >> 31)) )
      {
        v5 &= ~0x40000000u;
        v12->flags_and_hash |= 0x40000000u;
        break;
      }
    }
  }
  v8->flags_and_hash = v5;
  v10 = 1;
  for ( j = 0; ; j = v10++ )
  {
    *(&v8->flags_and_hash + v10) = v3->data[j];
    if ( v10 == 4 )
      break;
  }
  v3->flags_and_hash = 0x80000000;
}


// CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoInsertUnconstructed  (line 474, @0x0000000001f99c20, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::BumpEntry, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoRealloc
// callers: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoRealloc, CEntityDebugGameSystem::SetDebugBits
int __fastcall CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoInsertUnconstructed(
        CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::DoInsertUnconstructed  (line 474, @0x0000000001f9a360, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::BumpEntry, CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::DoRealloc
// callers: CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::DoRealloc, DebugCallbackEntities, FindBoundaryEdgeAroundVert
int __fastcall CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::DoInsertUnconstructed(
        CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  CUtlHashtableEntry<unsigned int,empty_t> *m_pMemory; // rdx
  int v8; // esi
  int result; // eax
  unsigned int v10; // r12d
  CUtlHashtableEntry<unsigned int,empty_t> *v11; // r13
  int flags_and_hash; // ecx
  int v13; // ecx
  int v14; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v13 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v13 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v13 )
  {
LABEL_11:
    CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::DoRealloc(
      this,
      v13 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  m_pMemory = this->m_table.m_pMemory;
  v8 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v8 & h;
  v10 = h & 0x3FFFFFFF | 0x40000000;
  v11 = &m_pMemory[v8 & h];
  flags_and_hash = v11->flags_and_hash;
  if ( result == (flags_and_hash & v8 | (flags_and_hash >> 31)) )
  {
    v10 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v11->flags_and_hash = v10;
    return result;
  }
  v14 = result;
  CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::BumpEntry(
    this,
    result);
  result = v14;
  goto LABEL_7;
}


// CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoInsertUnconstructed  (line 474, @0x0000000001f9a950, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::BumpEntry, CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoRealloc
// callers: CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoRealloc, CPhysicsGameSystem::CreateHierarchyConstraint
int __fastcall CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoInsertUnconstructed(
        CUtlHashtable<CSkeletonInstance*,IPhysicsJoint*,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoInsertUnconstructed  (line 474, @0x0000000001f9be40, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::BumpEntry, CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoRealloc
// callers: CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoRealloc, CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoInsert<unsigned int>
int __fastcall CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoInsertUnconstructed(
        CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoInsertUnconstructed  (line 474, @0x00000000022b6bc0, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::BumpEntry, CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoRealloc
// callers: CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoRealloc, CMarkupManager::FindOrCreateMarkupGroup, CMarkupVolumeTagged::Activate
int __fastcall CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoInsertUnconstructed(
        CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  __int16 v3; // r13
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>::storage_t v8; // r12
  int result; // eax
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *v10; // r13
  int v11; // ecx
  int v12; // [rsp+Ch] [rbp-24h]

  v3 = h;
  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v11 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v11 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v11 )
  {
LABEL_11:
    CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoRealloc(
      this,
      v11 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  this->m_nUsed = v6;
  v7 = m_nAllocationCount - 1;
  v8 = v3 & 0x3FFF | 0x4000;
  result = v7 & (16385 * (v3 & 0x3FFF));
  v10 = &this->m_table.m_pMemory[result];
  if ( result == ((v10->flags_and_hash >> 31) | v7 & (16385 * (v10->flags_and_hash & 0x3FFF))) )
  {
    v8 &= ~0x4000u;
  }
  else if ( v10->flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v8;
    return result;
  }
  v12 = result;
  CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::BumpEntry(
    this,
    result);
  result = v12;
  goto LABEL_7;
}


// CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoInsertUnconstructed  (line 474, @0x000000000231aa00, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::BumpEntry, CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoRealloc
// callers: CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoRealloc, CParticleSystemQueryGameSystem::PreSpawnGroupLoad
int __fastcall CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoInsertUnconstructed(
        CUtlHashtable<CUtlStringToken,long long int,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long int>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<CUtlStringToken,long long int> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::DoInsertUnconstructed  (line 474, @0x00000000023f8120, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::BumpEntry, CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::DoRealloc
// callers: CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::DoRealloc, CChangeLevel::BuildEntityTransitionList
int __fastcall CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::DoInsertUnconstructed(
        CUtlHashtable<CBaseEntity*,int,DefaultHashFunctor<CBaseEntity*>,DefaultEqualFunctor<CBaseEntity*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<CBaseEntity*,int> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsertUnconstructed  (line 474, @0x00000000024ae7c0, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::BumpEntry, CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoRealloc
// callers: CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoRealloc, CDOTA_BaseNPC::SetAutoStyleCriteria
int __fastcall CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoInsertUnconstructed(
        CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<CUtlStringToken,float> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> >::DoInsertUnconstructed  (line 474, @0x00000000024afd40, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> >::BumpEntry, CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> >::DoRealloc
// callers: CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, empty_t>, int> >::DoRealloc, CChatLanguageAnalyzer::GuessLanguageForText
int __fastcall CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int>>::DoInsertUnconstructed(
        CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  CUtlHashtableEntry<int,empty_t> *m_pMemory; // rdx
  int v8; // esi
  int result; // eax
  unsigned int v10; // r12d
  CUtlHashtableEntry<int,empty_t> *v11; // r13
  int flags_and_hash; // ecx
  int v13; // ecx
  int v14; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v13 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v13 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v13 )
  {
LABEL_11:
    CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int>>::DoRealloc(
      this,
      v13 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  m_pMemory = this->m_table.m_pMemory;
  v8 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v8 & h;
  v10 = h & 0x3FFFFFFF | 0x40000000;
  v11 = &m_pMemory[v8 & h];
  flags_and_hash = v11->flags_and_hash;
  if ( result == (flags_and_hash & v8 | (flags_and_hash >> 31)) )
  {
    v10 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v11->flags_and_hash = v10;
    return result;
  }
  v14 = result;
  CUtlHashtable<int,empty_t,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,empty_t>,int>>::BumpEntry(
    this,
    result);
  result = v14;
  goto LABEL_7;
}


// CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoInsertUnconstructed  (line 474, @0x000000000257eb10, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::BumpEntry, CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoRealloc
// callers: CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoRealloc, CDOTAFogOfWarSystem::ComputeFOWBoundsForSpawnGroup
int __fastcall CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::DoInsertUnconstructed(
        CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r13d
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v10; // rbx
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoInsertUnconstructed  (line 474, @0x000000000257f000, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::BumpEntry, CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoRealloc
// callers: CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoRealloc, CDOTAFogOfWarSystem::PreSpawnGroupLoad
int __fastcall CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoInsertUnconstructed(
        CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoInsertUnconstructed  (line 474, @0x000000000257fc80, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::BumpEntry, CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoRealloc
// callers: CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoRealloc, CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoInsert<short unsigned int>
int __fastcall CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::DoInsertUnconstructed(
        CUtlHashtable<short unsigned int,int,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<short unsigned int,int> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoInsertUnconstructed  (line 474, @0x0000000002580260, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::BumpEntry, CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoRealloc
// callers: CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoRealloc, CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoInsert<int>
int __fastcall CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::DoInsertUnconstructed(
        CUtlHashtable<int,short unsigned int,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,short unsigned int>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<int,short unsigned int> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::DoInsertUnconstructed  (line 474, @0x000000000298cda0, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::BumpEntry, CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::DoRealloc
// callers: CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::DoRealloc, CDOTA_BaseNPC::AddNewPseudoRandomNode
int __fastcall CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>>::DoInsertUnconstructed(
        CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoInsertUnconstructed  (line 474, @0x0000000002e62550, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::BumpEntry, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoRealloc
// callers: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoRealloc, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoInsert<int>
int __fastcall CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoInsertUnconstructed(
        CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r13d
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v10; // r12
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::DoInsertUnconstructed  (line 474, @0x0000000002e62bc0, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::BumpEntry, CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::DoRealloc
// callers: CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::DoRealloc, CDOTAInventoryManager::GenerateBaseItems
int __fastcall CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::DoInsertUnconstructed(
        CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r13d
  CUtlHashtableEntry<int,CHeroBaseItems> *v10; // r12
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::DoInsertUnconstructed  (line 474, @0x0000000002e630f0, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::BumpEntry, CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::DoRealloc
// callers: CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::DoRealloc, CDOTAInventoryManager::BuildAvailableLoadoutItemList
int __fastcall CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::DoInsertUnconstructed(
        CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::DoInsertUnconstructed  (line 474, @0x0000000002f0c700, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::BumpEntry, CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::DoRealloc
// callers: CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::DoRealloc, CNavObstacleMgr::SplitEdge
int __fastcall CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::DoInsertUnconstructed(
        CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<unsigned int,bool> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::DoInsertUnconstructed  (line 474, @0x0000000002f0d1c0, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::BumpEntry, CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::DoRealloc
// callers: CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::DoRealloc, CNavGeneratorAAQuad::GetNodesForArea
int __fastcall CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int>>::DoInsertUnconstructed(
        CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoInsertUnconstructed  (line 474, @0x0000000002f0d8c0, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::BumpEntry, CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoRealloc
// callers: CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoRealloc, CNavObstructionManager::UpdateObstacle
int __fastcall CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::DoInsertUnconstructed(
        CUtlHashtable<int,INavObstacle*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<int,INavObstacle*> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoInsertUnconstructed  (line 474, @0x0000000002f0de00, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::BumpEntry, CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoRealloc
// callers: CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoRealloc, CNavObstacleMgr::InsertSplitNodeForArea, CNavObstacleMgr::SplitEdge, CNavObstacleMgr::ChangeNavAreaIndex
int __fastcall CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoInsertUnconstructed(
        CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoInsertUnconstructed  (line 474, @0x0000000002f0e340, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::BumpEntry, CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoRealloc
// callers: CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoRealloc, CNavObstacleMgr::UpdateObstacle
int __fastcall CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::DoInsertUnconstructed(
        CUtlHashtable<unsigned int,CNavObstacle*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle*>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::DoInsertUnconstructed  (line 474, @0x0000000002f0e8b0, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::BumpEntry, CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::DoRealloc
// callers: CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::DoRealloc, CNavBreadthFirstSearch::IncludeInSearch
int __fastcall CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::DoInsertUnconstructed(
        CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r13d
  CUtlHashtableEntry<int,CNavSearchElement> *v10; // rbx
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::DoInsertUnconstructed  (line 474, @0x0000000003165220, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::BumpEntry, CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::DoRealloc
// callers: CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::DoRealloc, CModel::InitFromV0Data
int __fastcall CUtlHashtable<ResourceBindingBase_t const*,empty_t,DefaultHashFunctor<ResourceBindingBase_t const*>,DefaultEqualFunctor<ResourceBindingBase_t const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>>::DoInsertUnconstructed(
        CUtlHashtable<const ResourceBindingBase_t*,empty_t,DefaultHashFunctor<const ResourceBindingBase_t*>,DefaultEqualFunctor<const ResourceBindingBase_t*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<ResourceBindingBase_t const*,empty_t,DefaultHashFunctor<ResourceBindingBase_t const*>,DefaultEqualFunctor<ResourceBindingBase_t const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<ResourceBindingBase_t const*,empty_t,DefaultHashFunctor<ResourceBindingBase_t const*>,DefaultEqualFunctor<ResourceBindingBase_t const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsertUnconstructed  (line 474, @0x00000000031b5320, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::BumpEntry, CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoRealloc
// callers: CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoRealloc, CExpressionCalculator::SetExpression, CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsert<const CUtlStringToken&>
int __fastcall CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoInsertUnconstructed(
        CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<CUtlStringToken,float> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::DoInsertUnconstructed  (line 474, @0x00000000031bc710, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::BumpEntry, CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::DoRealloc
// callers: CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::DoRealloc, CFeModelCombiner::Combine
int __fastcall CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::DoInsertUnconstructed(
        CUtlHashtable<unsigned int,short unsigned int,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,short unsigned int>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<unsigned int,short unsigned int> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoInsertUnconstructed  (line 474, @0x000000000322f900, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::BumpEntry, CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoRealloc
// callers: CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoRealloc, GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob
int __fastcall CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::DoInsertUnconstructed(
        CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoInsertUnconstructed  (line 474, @0x000000000322fe40, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::BumpEntry, CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoRealloc
// callers: CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoRealloc, GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob
int __fastcall CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::DoInsertUnconstructed(
        CUtlHashtable<long long unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<long long unsigned int>,DefaultEqualFunctor<long long unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::DoInsertUnconstructed  (line 474, @0x000000000326bb20, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::BumpEntry, CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::DoRealloc
// callers: CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::DoRealloc, CResourceReferenceFixupTraversal::RegisterRefs
int __fastcall CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int>>::DoInsertUnconstructed(
        CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<ResourceId_t,char const*> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> >::DoInsertUnconstructed  (line 474, @0x000000000326d970, libserver.so)  // inlines: IdealIndex
// calls: CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> >::BumpEntry, CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> >::DoRealloc
// callers: CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> >::DoRealloc, CSchemaVisitorInfoMapBase::FindOrCreate
int __fastcall CUtlHashtable<CSchemaClassInfo const*,CClassVisitInfo *,DefaultHashFunctor<CSchemaClassInfo const*>,DefaultEqualFunctor<CSchemaClassInfo const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>>::DoInsertUnconstructed(
        CUtlHashtable<const CSchemaClassInfo*,CClassVisitInfo*,DefaultHashFunctor<const CSchemaClassInfo*>,DefaultEqualFunctor<const CSchemaClassInfo*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*>,int> > *const this,
        unsigned int h,
        bool allowGrow)
{
  int m_nAllocationCount; // esi
  int v6; // eax
  int v7; // esi
  int result; // eax
  unsigned int v9; // r12d
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *v10; // r13
  int flags_and_hash; // ecx
  int v12; // ecx
  int v13; // [rsp+Ch] [rbp-24h]

  if ( !allowGrow || this->m_bSizeLocked )
    goto LABEL_3;
  v6 = this->m_nUsed + 1;
  if ( (this->m_table.m_nGrowSize & 0xC0000000) != 0 )
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
  }
  else
  {
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v12 = 4 * v6;
    if ( 4 * v6 < m_nAllocationCount && m_nAllocationCount > 2 * this->m_nMinSize )
      goto LABEL_11;
  }
  if ( 3 * m_nAllocationCount < v12 )
  {
LABEL_11:
    CUtlHashtable<CSchemaClassInfo const*,CClassVisitInfo *,DefaultHashFunctor<CSchemaClassInfo const*>,DefaultEqualFunctor<CSchemaClassInfo const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>>::DoRealloc(
      this,
      v12 / 3);
LABEL_3:
    m_nAllocationCount = this->m_table.m_nAllocationCount;
    v6 = this->m_nUsed + 1;
  }
  v7 = m_nAllocationCount - 1;
  this->m_nUsed = v6;
  result = v7 & h;
  v9 = h & 0x3FFFFFFF | 0x40000000;
  v10 = &this->m_table.m_pMemory[v7 & h];
  flags_and_hash = v10->flags_and_hash;
  if ( result == (flags_and_hash & v7 | (flags_and_hash >> 31)) )
  {
    v9 &= ~0x40000000u;
  }
  else if ( flags_and_hash < 0 )
  {
LABEL_7:
    v10->flags_and_hash = v9;
    return result;
  }
  v13 = result;
  CUtlHashtable<CSchemaClassInfo const*,CClassVisitInfo *,DefaultHashFunctor<CSchemaClassInfo const*>,DefaultEqualFunctor<CSchemaClassInfo const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>>::BumpEntry(
    this,
    result);
  result = v13;
  goto LABEL_7;
}


// CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoLookup<unsigned int>  (line 513, @0x0000000001f2c910, libserver.so)  // inlines: IdealIndex
// callers: CEntityDebugGameSystem::HasDebugBitsSet, CEntityDebugGameSystem::GetDebugBits, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoRemove<unsigned int>, CEntityDebugGameSystem::ClearDebugBits, CEntityDebugGameSystem::SetDebugBits, CEntityDebugGameSystem::ToggleDebugBits
UtlHashHandle_t __fastcall CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoLookup<unsigned int>(
        const CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> > *const this,
        unsigned int x,
        unsigned int h,
        CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *m_pMemory; // r12
  int v5; // r10d
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>::storage_t flags_and_hash; // r9d
  UtlHashHandle_t result; // eax
  UtlHashHandle_t i; // edi

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = -1;
  if ( (h & v5) != (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    return result;
  for ( i = h & (this->m_table.m_nAllocationCount - 1); ; flags_and_hash = m_pMemory[i].flags_and_hash )
  {
    if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    {
      if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[i].data[0] == x )
        break;
      if ( (flags_and_hash & 0x40000000) != 0 )
        return -1;
      result = i;
    }
    i = v5 & (i + 1);
  }
  if ( pPreviousInChain != 0 )
    *pPreviousInChain = result;
  return i;
}


// CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoLookup<CSkeletonInstance*>  (line 513, @0x0000000001f2cae0, libserver.so)  // inlines: IdealIndex
// callers: CPhysicsGameSystem::UpdateHierarchyJoint, CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoRemove<CSkeletonInstance*>, CPhysicsGameSystem::DestroyHierarchyConstraint, CPhysicsGameSystem::UpdateHierarchyConstraint, CPhysicsGameSystem::CreateHierarchyConstraint
UtlHashHandle_t __fastcall CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoLookup<CSkeletonInstance *>(
        const CUtlHashtable<CSkeletonInstance*,IPhysicsJoint*,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*>,int> > *const this,
        CSkeletonInstance *x,
        unsigned int h,
        CUtlHashtable<CSkeletonInstance*,IPhysicsJoint*,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *m_pMemory; // r12
  int v5; // r10d
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*>::storage_t flags_and_hash; // r9d
  UtlHashHandle_t result; // eax
  UtlHashHandle_t i; // edi

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = -1;
  if ( (h & v5) != (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    return result;
  for ( i = h & (this->m_table.m_nAllocationCount - 1); ; flags_and_hash = m_pMemory[i].flags_and_hash )
  {
    if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    {
      if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && *m_pMemory[i].data == x )
        break;
      if ( (flags_and_hash & 0x40000000) != 0 )
        return -1;
      result = i;
    }
    i = v5 & (i + 1);
  }
  if ( pPreviousInChain != 0 )
    *pPreviousInChain = result;
  return i;
}


// CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoLookup<unsigned int>  (line 513, @0x0000000001f2cd60, libserver.so)  // inlines: IdealIndex
// callers: CWorldGameSystem::FindWorldInfoForSpawnGroup, CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoRemove<unsigned int>, CWorldGameSystem::PostSpawnGroupUnload, CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoInsert<unsigned int>
UtlHashHandle_t __fastcall CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoLookup<unsigned int>(
        const CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> > *const this,
        unsigned int x,
        unsigned int h,
        CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *m_pMemory; // r12
  int v5; // r10d
  CUtlHashtableEntry<unsigned int,WorldInfo_t*>::storage_t flags_and_hash; // r9d
  UtlHashHandle_t result; // eax
  UtlHashHandle_t i; // edi

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = -1;
  if ( (h & v5) != (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    return result;
  for ( i = h & (this->m_table.m_nAllocationCount - 1); ; flags_and_hash = m_pMemory[i].flags_and_hash )
  {
    if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    {
      if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[i].data[0] == x )
        break;
      if ( (flags_and_hash & 0x40000000) != 0 )
        return -1;
      result = i;
    }
    i = v5 & (i + 1);
  }
  if ( pPreviousInChain != 0 )
    *pPreviousInChain = result;
  return i;
}


// CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::DoLookup<unsigned int>  (line 513, @0x0000000001f2e210 libserver.so, @0x00000000031e2920 libserver.so)  // inlines: IdealIndex
// callers: DebugCallbackEntities
__int64 __fastcall CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::DoLookup<unsigned int>(
        const CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> > *const this,
        unsigned int x,
        unsigned int h,
        CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<unsigned int,empty_t> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<unsigned int,empty_t>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[result].data[0] == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::DoLookup<char const*>  (line 513, @0x0000000002287890, libserver.so)  // inlines: IdealIndex, _V_strcmp, operator(), operator[]
// calls: strcmp
// callers: CMarkupManager::FindOrCreateMarkupGroup, CMarkupVolumeTagged::UpdateOnRemove, CMarkupVolumeTagged::Activate, markup_group_ent_text
__int64 __fastcall CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::DoLookup<char const*>(
        const CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > *const this,
        const char *x,
        unsigned int h,
        CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> >::handle_t *pPreviousInChain)
{
  const CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > *v4; // r9
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *m_pMemory; // r13
  int v6; // r14d
  unsigned int v7; // r15d
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>::storage_t flags_and_hash; // r12
  __int64 result; // rax
  unsigned int i; // ebx
  int v11; // eax
  unsigned int ha; // [rsp+Ch] [rbp-44h]
  const CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > *thisa; // [rsp+10h] [rbp-40h]

  v4 = this;
  m_pMemory = this->m_table.m_pMemory;
  v6 = this->m_table.m_nAllocationCount - 1;
  v7 = v6 & (16385 * (h & 0x3FFF));
  flags_and_hash = this->m_table.m_pMemory[v7].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( v7 == ((flags_and_hash >> 31) | v6 & (16385 * (flags_and_hash & 0x3FFF))) )
  {
    for ( i = v6 & (16385 * (h & 0x3FFF)); ; flags_and_hash = m_pMemory[i].flags_and_hash )
    {
      if ( v7 == ((flags_and_hash >> 31) | v6 & (16385 * (flags_and_hash & 0x3FFF))) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFF) == 0 )
        {
          ha = h;
          thisa = v4;
          v11 = strcmp(*&v4[1].m_table.m_pMemory[6 * m_pMemory[i].data[0]].flags_and_hash, x);
          v4 = thisa;
          h = ha;
          if ( v11 == 0 )
            return i;
        }
        if ( (flags_and_hash & 0x4000) != 0 )
          return 0xFFFFFFFFLL;
      }
      i = v6 & (i + 1);
    }
  }
  return result;
}


// CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoLookup<const CUtlStringToken&>  (line 513, @0x00000000022bd660, libserver.so)  // inlines: IdealIndex, operator(), operator==
// callers: ParticleSystemQuery_GetQueryForWorld, CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoRemove<const CUtlStringToken&>, CParticleSystemQueryGameSystem::PostSpawnGroupUnload, CParticleSystemQueryGameSystem::PreSpawnGroupLoad
UtlHashHandle_t __fastcall CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoLookup<CUtlStringToken const&>(
        const CUtlHashtable<CUtlStringToken,long long int,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long int>,int> > *const this,
        const CUtlStringToken *const x,
        unsigned int h,
        CUtlHashtable<CUtlStringToken,long long int,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long int>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<CUtlStringToken,long long int> *m_pMemory; // r12
  int v5; // r10d
  CUtlHashtableEntry<CUtlStringToken,long long int>::storage_t flags_and_hash; // r9d
  UtlHashHandle_t result; // eax
  UtlHashHandle_t i; // edi

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = -1;
  if ( (h & v5) != (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    return result;
  for ( i = h & (this->m_table.m_nAllocationCount - 1); ; flags_and_hash = m_pMemory[i].flags_and_hash )
  {
    if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    {
      if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && x->m_nHashCode == m_pMemory[i].data[0] )
        break;
      if ( (flags_and_hash & 0x40000000) != 0 )
        return -1;
      result = i;
    }
    i = v5 & (i + 1);
  }
  if ( pPreviousInChain != 0 )
    *pPreviousInChain = result;
  return i;
}


// CUtlHashtable<CBaseEntity*, int, DefaultHashFunctor<CBaseEntity*>, DefaultEqualFunctor<CBaseEntity*>, undefined_t, CUtlMemory<CUtlHashtableEntry<CBaseEntity*, int>, int> >::DoLookup<CBaseEntity*>  (line 513, @0x00000000023bf390, libserver.so)  // inlines: IdealIndex
// callers: CChangeLevel::BuildEntityTransitionList
__int64 __fastcall CUtlHashtable<CBaseEntity *,int,DefaultHashFunctor<CBaseEntity *>,DefaultEqualFunctor<CBaseEntity *>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity *,int>,int>>::DoLookup<CBaseEntity *>(
        const CUtlHashtable<CBaseEntity*,int,DefaultHashFunctor<CBaseEntity*>,DefaultEqualFunctor<CBaseEntity*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> > *const this,
        CBaseEntity *x,
        unsigned int h,
        CUtlHashtable<CBaseEntity*,int,DefaultHashFunctor<CBaseEntity*>,DefaultEqualFunctor<CBaseEntity*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CBaseEntity*,int>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<CBaseEntity*,int> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<CBaseEntity*,int>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && *m_pMemory[result].data == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoLookup<const CUtlStringToken&>  (line 513, @0x00000000024b6200, libserver.so)  // inlines: IdealIndex, operator(), operator==
// callers: CDOTAFogOfWarSystem::HasFoW, CDOTAFogOfWarSystem::ActiveSpawnGroupChanged, CDOTAFogOfWarSystem::GetFowInfoForWorldGroupId, CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoRemove<const CUtlStringToken&>, CDOTAFogOfWarSystem::PostSpawnGroupUnload, CDOTAFogOfWarSystem::PreSpawnGroupLoad
UtlHashHandle_t __fastcall CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoLookup<CUtlStringToken const&>(
        const CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>,int> > *const this,
        const CUtlStringToken *const x,
        unsigned int h,
        CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *m_pMemory; // r12
  int v5; // r10d
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>::storage_t flags_and_hash; // r9d
  UtlHashHandle_t result; // eax
  UtlHashHandle_t i; // edi

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = -1;
  if ( (h & v5) != (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    return result;
  for ( i = h & (this->m_table.m_nAllocationCount - 1); ; flags_and_hash = m_pMemory[i].flags_and_hash )
  {
    if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    {
      if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && x->m_nHashCode == m_pMemory[i].data[0] )
        break;
      if ( (flags_and_hash & 0x40000000) != 0 )
        return -1;
      result = i;
    }
    i = v5 & (i + 1);
  }
  if ( pPreviousInChain != 0 )
    *pPreviousInChain = result;
  return i;
}


// CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoLookup<unsigned int>  (line 513, @0x00000000024b62c0, libserver.so)  // inlines: IdealIndex
// callers: CDOTAFogOfWarSystem::ActiveSpawnGroupChanged, CDOTAFogOfWarSystem::GetFoWSizeForSpawnGroup, CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoRemove<unsigned int>, CDOTAFogOfWarSystem::ComputeFOWBoundsForSpawnGroup
UtlHashHandle_t __fastcall CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::DoLookup<unsigned int>(
        const CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> > *const this,
        unsigned int x,
        unsigned int h,
        CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *m_pMemory; // r12
  int v5; // r10d
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>::storage_t flags_and_hash; // r9d
  UtlHashHandle_t result; // eax
  UtlHashHandle_t i; // edi

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = -1;
  if ( (h & v5) != (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    return result;
  for ( i = h & (this->m_table.m_nAllocationCount - 1); ; flags_and_hash = m_pMemory[i].flags_and_hash )
  {
    if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    {
      if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[i].data[0] == x )
        break;
      if ( (flags_and_hash & 0x40000000) != 0 )
        return -1;
      result = i;
    }
    i = v5 & (i + 1);
  }
  if ( pPreviousInChain != 0 )
    *pPreviousInChain = result;
  return i;
}


// CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoLookup<int>  (line 513, @0x00000000024b8080, libserver.so)  // inlines: IdealIndex
// callers: CDOTAGameManager::GetAbilityIndexFromID, CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoInsert<int>
__int64 __fastcall CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::DoLookup<int>(
        const CUtlHashtable<int,short unsigned int,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,short unsigned int>,int> > *const this,
        int x,
        unsigned int h,
        CUtlHashtable<int,short unsigned int,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,short unsigned int>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<int,short unsigned int> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<int,short unsigned int>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[result].data[0] == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoLookup<short unsigned int>  (line 513, @0x00000000024b8120, libserver.so)  // inlines: IdealIndex
// callers: CDOTAGameManager::GetAbilityIDFromIndex, CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoInsert<short unsigned int>
__int64 __fastcall CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::DoLookup<unsigned short>(
        const CUtlHashtable<short unsigned int,int,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> > *const this,
        unsigned __int16 x,
        unsigned int h,
        CUtlHashtable<short unsigned int,int,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<short unsigned int,int> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<short unsigned int,int>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && LOWORD(m_pMemory[result].data[0]) == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<int, CDOTAPseudoRandom, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAPseudoRandom>, int> >::DoLookup<int>  (line 513, @0x00000000028f9a90, libserver.so)  // inlines: IdealIndex
// callers: CDOTA_BaseNPC::GetPseudoRandomNode, CDOTA_BaseNPC::AddNewPseudoRandomNode
__int64 __fastcall CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int>>::DoLookup<int>(
        const CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int> > *const this,
        int x,
        unsigned int h,
        CUtlHashtable<int,CDOTAPseudoRandom,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAPseudoRandom>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<int,CDOTAPseudoRandom> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<int,CDOTAPseudoRandom>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[result].data[0] == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::DoLookup<int>  (line 513, @0x0000000002e331b0, libserver.so)  // inlines: IdealIndex
// callers: CDOTAInventoryManager::BuildAvailableLoadoutItemList
__int64 __fastcall CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::DoLookup<int>(
        const CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*>,int> > *const this,
        int x,
        unsigned int h,
        CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[result].data[0] == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>  (line 513, @0x0000000002e33250, libserver.so)  // inlines: IdealIndex
// callers: CDOTAItemSchema::GetCharacterSlotType, CEconItemLoadout::InitGlobalItemLoadout, CEconItemLoadout::GetPrimarySlotType, CDOTAInventoryManager::GetItemSlotsForHero, CEconItemLoadout::SetItems, CDOTAInventoryManager::SetUpDemoHeroItems, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType, UseEconItem, CDOTAPlayerInventory::GetItemInLoadout, CDOTAPlayerInventory::GetItemSetForLoadoutItems, CDOTAInventoryManager::SetHeroDemoModeItems, AddItemToLoadoutList (20 total)
__int64 __fastcall CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
        const CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> > *const this,
        int x,
        unsigned int h,
        CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<int,CDOTAHeroSlots> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<int,CDOTAHeroSlots>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[result].data[0] == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::DoLookup<int>  (line 513, @0x0000000002e332f0, libserver.so)  // inlines: IdealIndex
// callers: CDOTAInventoryManager::GetBaseItemForHero, CDOTAInventoryManager::GetBaseItemByDefIndex, CDOTAInventoryManager::GenerateBaseItems
__int64 __fastcall CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::DoLookup<int>(
        const CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> > *const this,
        int x,
        unsigned int h,
        CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<int,CHeroBaseItems> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<int,CHeroBaseItems>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[result].data[0] == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoLookup<unsigned int>  (line 513, @0x0000000002ec7ed0, libserver.so)  // inlines: IdealIndex
// callers: CNavObstacleMgr::FindSplitNodeForArea, CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoRemove<unsigned int>, CNavObstacleMgr::InsertSplitNodeForArea, CNavObstacleMgr::SplitEdge, CNavObstacleMgr::ChangeNavAreaIndex
UtlHashHandle_t __fastcall CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoLookup<unsigned int>(
        const CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> > *const this,
        unsigned int x,
        unsigned int h,
        CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *m_pMemory; // r12
  int v5; // r10d
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>::storage_t flags_and_hash; // r9d
  UtlHashHandle_t result; // eax
  UtlHashHandle_t i; // edi

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = -1;
  if ( (h & v5) != (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    return result;
  for ( i = h & (this->m_table.m_nAllocationCount - 1); ; flags_and_hash = m_pMemory[i].flags_and_hash )
  {
    if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    {
      if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[i].data[0] == x )
        break;
      if ( (flags_and_hash & 0x40000000) != 0 )
        return -1;
      result = i;
    }
    i = v5 & (i + 1);
  }
  if ( pPreviousInChain != 0 )
    *pPreviousInChain = result;
  return i;
}


// CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoLookup<unsigned int>  (line 513, @0x0000000002ec7f90, libserver.so)  // inlines: IdealIndex
// callers: CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoRemove<unsigned int>, CNavObstacleMgr::UpdateObstacle, CNavObstacleMgr::RemoveObstacle
UtlHashHandle_t __fastcall CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::DoLookup<unsigned int>(
        const CUtlHashtable<unsigned int,CNavObstacle*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle*>,int> > *const this,
        unsigned int x,
        unsigned int h,
        CUtlHashtable<unsigned int,CNavObstacle*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle*>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *m_pMemory; // r12
  int v5; // r10d
  CUtlHashtableEntry<unsigned int,CNavObstacle*>::storage_t flags_and_hash; // r9d
  UtlHashHandle_t result; // eax
  UtlHashHandle_t i; // edi

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = -1;
  if ( (h & v5) != (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    return result;
  for ( i = h & (this->m_table.m_nAllocationCount - 1); ; flags_and_hash = m_pMemory[i].flags_and_hash )
  {
    if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    {
      if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[i].data[0] == x )
        break;
      if ( (flags_and_hash & 0x40000000) != 0 )
        return -1;
      result = i;
    }
    i = v5 & (i + 1);
  }
  if ( pPreviousInChain != 0 )
    *pPreviousInChain = result;
  return i;
}


// CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoLookup<int>  (line 513, @0x0000000002ec87d0, libserver.so)  // inlines: IdealIndex
// callers: CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoRemove<int>, CNavObstructionManager::UpdateObstacle
UtlHashHandle_t __fastcall CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::DoLookup<int>(
        const CUtlHashtable<int,INavObstacle*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> > *const this,
        int x,
        unsigned int h,
        CUtlHashtable<int,INavObstacle*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<int,INavObstacle*> *m_pMemory; // r12
  int v5; // r10d
  CUtlHashtableEntry<int,INavObstacle*>::storage_t flags_and_hash; // r9d
  UtlHashHandle_t result; // eax
  UtlHashHandle_t i; // edi

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = -1;
  if ( (h & v5) != (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    return result;
  for ( i = h & (this->m_table.m_nAllocationCount - 1); ; flags_and_hash = m_pMemory[i].flags_and_hash )
  {
    if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
    {
      if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[i].data[0] == x )
        break;
      if ( (flags_and_hash & 0x40000000) != 0 )
        return -1;
      result = i;
    }
    i = v5 & (i + 1);
  }
  if ( pPreviousInChain != 0 )
    *pPreviousInChain = result;
  return i;
}


// CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::DoLookup<unsigned int>  (line 513, @0x0000000002ec8ad0, libserver.so)  // inlines: IdealIndex
// callers: CNavObstacleMgr::SplitEdge
__int64 __fastcall CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::DoLookup<unsigned int>(
        const CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int> > *const this,
        unsigned int x,
        unsigned int h,
        CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<unsigned int,bool> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<unsigned int,bool>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[result].data[0] == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<unsigned int, CNavNodesForArea, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavNodesForArea>, int> >::DoLookup<unsigned int>  (line 513, @0x0000000002ec8b70, libserver.so)  // inlines: IdealIndex
// callers: CNavGeneratorAAQuad::AreaHasNodes, CNavGeneratorAAQuad::GetNodesForArea
__int64 __fastcall CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int>>::DoLookup<unsigned int>(
        const CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int> > *const this,
        unsigned int x,
        unsigned int h,
        CUtlHashtable<unsigned int,CNavNodesForArea,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavNodesForArea>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<unsigned int,CNavNodesForArea> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<unsigned int,CNavNodesForArea>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[result].data[0] == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::DoLookup<int>  (line 513, @0x0000000002ec8c10, libserver.so)  // inlines: IdealIndex
// callers: CNavBreadthFirstSearch::IncludeInSearch, CNavBreadthFirstSearch::BreadthFirstSearchCore
__int64 __fastcall CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::DoLookup<int>(
        const CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int> > *const this,
        int x,
        unsigned int h,
        CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<int,CNavSearchElement> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<int,CNavSearchElement>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[result].data[0] == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::DoLookup<const ResourceBindingBase_t*>  (line 513, @0x0000000003163ea0, libserver.so)  // inlines: IdealIndex
// callers: CModel::InitFromV0Data
__int64 __fastcall CUtlHashtable<ResourceBindingBase_t const*,empty_t,DefaultHashFunctor<ResourceBindingBase_t const*>,DefaultEqualFunctor<ResourceBindingBase_t const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>>::DoLookup<ResourceBindingBase_t const*>(
        const CUtlHashtable<const ResourceBindingBase_t*,empty_t,DefaultHashFunctor<const ResourceBindingBase_t*>,DefaultEqualFunctor<const ResourceBindingBase_t*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>,int> > *const this,
        const ResourceBindingBase_t *x,
        unsigned int h,
        CUtlHashtable<const ResourceBindingBase_t*,empty_t,DefaultHashFunctor<const ResourceBindingBase_t*>,DefaultEqualFunctor<const ResourceBindingBase_t*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && *m_pMemory[result].data == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoLookup<const CUtlStringToken&>  (line 513, @0x00000000031b2a30, libserver.so)  // inlines: IdealIndex, operator(), operator==
// callers: CExpressionCalculator::EvalIdentifier, CExpressionCalculator::SetExpression, CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsert<const CUtlStringToken&>
__int64 __fastcall CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoLookup<CUtlStringToken const&>(
        const CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *const this,
        const CUtlStringToken *const x,
        unsigned int h,
        CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<CUtlStringToken,float> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<CUtlStringToken,float>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && x->m_nHashCode == m_pMemory[result].data[0] )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<unsigned int, short unsigned int, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int> >::DoLookup<unsigned int>  (line 513, @0x00000000031b71b0, libserver.so)  // inlines: IdealIndex
// callers: CFeModelCombiner::Combine
__int64 __fastcall CUtlHashtable<unsigned int,unsigned short,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,unsigned short>,int>>::DoLookup<unsigned int>(
        const CUtlHashtable<unsigned int,short unsigned int,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,short unsigned int>,int> > *const this,
        unsigned int x,
        unsigned int h,
        CUtlHashtable<unsigned int,short unsigned int,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,short unsigned int>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<unsigned int,short unsigned int> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<unsigned int,short unsigned int>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[result].data[0] == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoLookup<unsigned int>  (line 513, @0x00000000032248e0, libserver.so)  // inlines: IdealIndex
// callers: GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob
__int64 __fastcall CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::DoLookup<unsigned int>(
        const CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *const this,
        unsigned int x,
        unsigned int h,
        CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && m_pMemory[result].data[0] == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::DoLookup<long long unsigned int>  (line 513, @0x0000000003224980, libserver.so)  // inlines: IdealIndex
// callers: GCSDK::CJobMgr::FindOrAddWaitAnalysisNodeForJob
__int64 __fastcall CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::DoLookup<unsigned long long>(
        const CUtlHashtable<long long unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<long long unsigned int>,DefaultEqualFunctor<long long unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *const this,
        unsigned __int64 x,
        unsigned int h,
        CUtlHashtable<long long unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<long long unsigned int>,DefaultEqualFunctor<long long unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && *m_pMemory[result].data == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<ResourceId_t, char const*, DefaultHashFunctor<ResourceId_t>, DefaultEqualFunctor<ResourceId_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<ResourceId_t, char const*>, int> >::DoLookup<const ResourceId_t&>  (line 513, @0x000000000326ae30, libserver.so)  // inlines: IdealIndex, operator(), operator==
// callers: CResourceReferenceFixupTraversal::HandleExtref, CResourceReferenceFixupTraversal::RegisterRefs
__int64 __fastcall CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int>>::DoLookup<ResourceId_t const&>(
        const CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int> > *const this,
        const ResourceId_t *const x,
        unsigned int h,
        CUtlHashtable<ResourceId_t,char const*,DefaultHashFunctor<ResourceId_t>,DefaultEqualFunctor<ResourceId_t>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceId_t,char const*>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<ResourceId_t,char const*> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<ResourceId_t,char const*>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && x->m_Data == *m_pMemory[result].data )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<const CSchemaClassInfo*, CClassVisitInfo*, DefaultHashFunctor<const CSchemaClassInfo*>, DefaultEqualFunctor<const CSchemaClassInfo*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*, CClassVisitInfo*>, int> >::DoLookup<const CSchemaClassInfo*>  (line 513, @0x000000000326c920, libserver.so)  // inlines: IdealIndex
// callers: CSchemaVisitorInfoMapBase::FindOrCreate
__int64 __fastcall CUtlHashtable<CSchemaClassInfo const*,CClassVisitInfo *,DefaultHashFunctor<CSchemaClassInfo const*>,DefaultEqualFunctor<CSchemaClassInfo const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<CSchemaClassInfo const*,CClassVisitInfo *>,int>>::DoLookup<CSchemaClassInfo const*>(
        const CUtlHashtable<const CSchemaClassInfo*,CClassVisitInfo*,DefaultHashFunctor<const CSchemaClassInfo*>,DefaultEqualFunctor<const CSchemaClassInfo*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*>,int> > *const this,
        const CSchemaClassInfo *x,
        unsigned int h,
        CUtlHashtable<const CSchemaClassInfo*,CClassVisitInfo*,DefaultHashFunctor<const CSchemaClassInfo*>,DefaultEqualFunctor<const CSchemaClassInfo*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*>,int> >::handle_t *pPreviousInChain)
{
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*> *m_pMemory; // r11
  int v5; // r8d
  unsigned int v6; // r10d
  CUtlHashtableEntry<const CSchemaClassInfo*,CClassVisitInfo*>::storage_t flags_and_hash; // edi
  __int64 result; // rax

  m_pMemory = this->m_table.m_pMemory;
  v5 = this->m_table.m_nAllocationCount - 1;
  v6 = h & v5;
  flags_and_hash = this->m_table.m_pMemory[h & v5].flags_and_hash;
  result = 0xFFFFFFFFLL;
  if ( (h & v5) == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
  {
    for ( result = v6; ; flags_and_hash = m_pMemory[result].flags_and_hash )
    {
      if ( v6 == (v5 & flags_and_hash | (flags_and_hash >> 31)) )
      {
        if ( ((h ^ flags_and_hash) & 0x3FFFFFFF) == 0 && *m_pMemory[result].data == x )
          return result;
        if ( (flags_and_hash & 0x40000000) != 0 )
          break;
      }
      result = v5 & (result + 1);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}


// CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoInsert<int>  (line 566, @0x0000000002e62980, libserver.so)  // inlines: CDOTAHeroSlots, CUtlKeyValuePair<int>, CUtlString, Construct<CUtlKeyValuePair<int, CDOTAHeroSlots>, int>, DoLookup<int>, operator[]
// calls: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoInsertUnconstructed, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>
// callers: CDOTAInventoryManager::InitItemSlots, CDOTAInventoryManager::InitPlayerLoadoutSlots
UtlHashHandle_t __fastcall CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoInsert<int>(
        CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> > *const this,
        int k,
        unsigned int h,
        bool *pDidInsert)
{
  char v4; // r8
  UtlHashHandle_t result; // eax
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v9; // r8
  int *v10; // rdi
  int *v11; // rdx
  int *v12; // rdx
  unsigned __int64 v13; // rcx
  int *v14; // rsi
  bool *pDidInserta; // [rsp+8h] [rbp-28h]

  v4 = 1;
  result = -1;
  if ( this->m_nUsed != 0 )
  {
    pDidInserta = pDidInsert;
    result = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
               this,
               k,
               h,
               pDidInsert);
    pDidInsert = pDidInserta;
    v4 = result == -1;
  }
  if ( pDidInsert != 0 )
    *pDidInsert = v4;
  if ( v4 != 0 )
  {
    result = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoInsertUnconstructed(
               this,
               h,
               1);
    v9 = &this->m_table.m_pMemory[result];
    if ( v9 != -4LL )
    {
      v10 = &v9->data[2];
      v9->data[0] = k;
      v11 = &v9->data[2];
      do
      {
        *v11 = 0;
        v11 += 2;
      }
      while ( v11 != &v9->data[34] );
      v12 = &v9->data[50];
      v13 = 0;
      v14 = &v9->data[162];
      do
      {
        v10[v13 / 2 + 32] = -1;
        v12 += 5;
        v14 = (v14 + 1);
        *(v12 - 5) = 0;
        *(v12 - 4) = 0;
        *(v12 - 3) = 0;
        *(v12 - 2) = 0;
        *(v12 - 4) = 0;
        *&v10[v13 + 128] = 0;
        v13 += 2LL;
        *(v14 - 1) = 1;
        *(v14 + 15) = 0;
        *(v14 + 31) = -1;
      }
      while ( v13 != 32 );
    }
  }
  return result;
}


// CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsert<const CUtlStringToken&>  (line 566, @0x00000000031b5740, libserver.so)  // inlines: CUtlKeyValuePair<CUtlStringToken>, Construct<CUtlKeyValuePair<CUtlStringToken, float>, CUtlStringToken>, DoLookup<const CUtlStringToken&>, operator[]
// calls: CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoInsertUnconstructed, CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::DoLookup<const CUtlStringToken&>
// callers: CExpressionCalculator::SetVariable
UtlHashHandle_t __fastcall CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoInsert<CUtlStringToken const&>(
        CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *const this,
        const CUtlStringToken *const k,
        unsigned int h,
        bool *pDidInsert)
{
  char v4; // r8
  UtlHashHandle_t result; // eax
  CUtlStringToken *v9; // rdx
  bool *pDidInserta; // [rsp+8h] [rbp-28h]

  v4 = 1;
  result = -1;
  if ( this->m_nUsed != 0 )
  {
    pDidInserta = pDidInsert;
    result = CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoLookup<CUtlStringToken const&>(
               this,
               k,
               h,
               pDidInsert);
    pDidInsert = pDidInserta;
    v4 = result == -1;
  }
  if ( pDidInsert != 0 )
    *pDidInsert = v4;
  if ( v4 != 0 )
  {
    result = CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::DoInsertUnconstructed(
               this,
               h,
               1);
    v9 = &this->m_table.m_pMemory[result];
    if ( v9 != -4LL )
      v9[1].m_nHashCode = k->m_nHashCode;
  }
  return result;
}


// CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoInsert<unsigned int>  (line 585, @0x0000000001f9c270, libserver.so)  // inlines: CUtlKeyValuePair<unsigned int, WorldInfo_t*>, Construct<CUtlKeyValuePair<unsigned int, WorldInfo_t*>, unsigned int, WorldInfo_t*>, DoLookup<unsigned int>, operator[]
// calls: CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoInsertUnconstructed, CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoLookup<unsigned int>
// callers: CWorldGameSystem::PreSpawnGroupLoad
UtlHashHandle_t __fastcall CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoInsert<unsigned int>(
        CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> > *const this,
        unsigned int k,
        ArgumentTypeInfoImpl<WorldInfo_t*,undefined_t>::Arg_t v,
        unsigned int h,
        bool *pDidInsert)
{
  UtlHashHandle_t result; // eax
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v11; // rdx

  if ( this->m_nUsed == 0
    || (result = CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoLookup<unsigned int>(
                   this,
                   k,
                   h,
                   0)) == -1 )
  {
    result = CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoInsertUnconstructed(
               this,
               h,
               1);
    v11 = &this->m_table.m_pMemory[result];
    if ( v11 != -4LL )
    {
      v11->data[0] = k;
      *&v11->data[2] = v;
    }
    if ( pDidInsert != 0 )
      *pDidInsert = 1;
  }
  else if ( pDidInsert != 0 )
  {
    *pDidInsert = 0;
  }
  return result;
}


// CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoInsert<short unsigned int>  (line 585, @0x00000000025800a0, libserver.so)  // inlines: CUtlKeyValuePair<short unsigned int, int>, Construct<CUtlKeyValuePair<short unsigned int, int>, short unsigned int, int>, DoLookup<short unsigned int>, operator[]
// calls: CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoInsertUnconstructed, CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::DoLookup<short unsigned int>
// callers: CDOTAGameManager::SetupItemSymbolsAndDictionary, CDOTAGameManager::SetupCustomItemSymbolsAndDictionary
// local variable allocation has failed, the output may be wrong!
UtlHashHandle_t __fastcall CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::DoInsert<unsigned short>(
        CUtlHashtable<short unsigned int,int,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> > *const this,
        unsigned __int16 k,
        ArgumentTypeInfoImpl<int,undefined_t>::Arg_t v,
        unsigned int h,
        bool *pDidInsert)
{
  UtlHashHandle_t result; // eax
  CUtlHashtableEntry<short unsigned int,int> *v9; // rdx
  bool *pDidInserta; // [rsp+0h] [rbp-30h]
  bool *ha; // [rsp+8h] [rbp-28h]
  unsigned int hb; // [rsp+8h] [rbp-28h]

  if ( this->m_nUsed == 0
    || (pDidInserta = pDidInsert,
        hb = h,
        result = CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::DoLookup<unsigned short>(
                   this,
                   k,
                   h,
                   *&h),
        h = hb,
        pDidInsert = pDidInserta,
        result == -1) )
  {
    ha = pDidInsert;
    result = CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::DoInsertUnconstructed(
               this,
               h,
               1);
    v9 = &this->m_table.m_pMemory[result];
    if ( v9 != -4LL )
    {
      LOWORD(v9->data[0]) = k;
      v9->data[1] = v;
    }
    if ( ha != 0 )
      *ha = 1;
  }
  else if ( pDidInserta != 0 )
  {
    *pDidInserta = 0;
  }
  return result;
}


// CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoInsert<int>  (line 585, @0x0000000002580680, libserver.so)  // inlines: CUtlKeyValuePair<int, short unsigned int>, Construct<CUtlKeyValuePair<int, short unsigned int>, int, short unsigned int>, DoLookup<int>, operator[]
// calls: CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoInsertUnconstructed, CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::DoLookup<int>
// callers: CDOTAGameManager::SetupItemSymbolsAndDictionary, CDOTAGameManager::SetupCustomItemSymbolsAndDictionary
// local variable allocation has failed, the output may be wrong!
UtlHashHandle_t __fastcall CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::DoInsert<int>(
        CUtlHashtable<int,short unsigned int,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,short unsigned int>,int> > *const this,
        int k,
        ArgumentTypeInfoImpl<short unsigned int,undefined_t>::Arg_t v,
        unsigned int h,
        bool *pDidInsert)
{
  UtlHashHandle_t result; // eax
  CUtlHashtableEntry<int,short unsigned int> *v9; // rdx
  bool *pDidInserta; // [rsp+0h] [rbp-30h]
  bool *ha; // [rsp+8h] [rbp-28h]
  unsigned int hb; // [rsp+8h] [rbp-28h]

  if ( this->m_nUsed == 0
    || (pDidInserta = pDidInsert,
        hb = h,
        result = CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::DoLookup<int>(
                   this,
                   k,
                   h,
                   *&h),
        h = hb,
        pDidInsert = pDidInserta,
        result == -1) )
  {
    ha = pDidInsert;
    result = CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::DoInsertUnconstructed(
               this,
               h,
               1);
    v9 = &this->m_table.m_pMemory[result];
    if ( v9 != -4LL )
    {
      v9->data[0] = k;
      LOWORD(v9->data[1]) = v;
    }
    if ( ha != 0 )
      *ha = 1;
  }
  else if ( pDidInserta != 0 )
  {
    *pDidInserta = 0;
  }
  return result;
}


// CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoRemove<unsigned int>  (line 616, @0x0000000001f91e50, libserver.so)  // inlines: DoLookup<unsigned int>, IdealIndex, MarkInvalid, MoveDataFrom, operator[]
// calls: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoLookup<unsigned int>
// callers: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveByHandle, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveAndAdvance
int __fastcall CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoRemove<unsigned int>(
        CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> > *const this,
        unsigned int x,
        unsigned int h)
{
  int v4; // ebx
  int result; // eax
  int v7; // ecx
  __int64 v8; // r10
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v9; // rdx
  int flags_and_hash; // esi
  int v11; // esi
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *m_pMemory; // r9
  int v13; // esi
  __int64 v14; // rsi
  int *data; // r8
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v16; // r10
  __int64 i; // rax
  CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> >::handle_t previous[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  previous[0] = -1;
  v4 = this->m_table.m_nAllocationCount - 1;
  if ( this->m_nUsed == 0 )
    return -1;
  result = CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoLookup<unsigned int>(
             this,
             x,
             h,
             previous);
  v7 = result;
  if ( result == -1 )
    return -1;
  v8 = result;
  v9 = &this->m_table.m_pMemory[v8];
  flags_and_hash = v9->flags_and_hash;
  v9->flags_and_hash = 0x80000000;
  --this->m_nUsed;
  v11 = flags_and_hash & 0x40000000 | (result == ((flags_and_hash >> 31) | flags_and_hash & v4));
  if ( v11 == 0x40000000 )
  {
    this->m_table.m_pMemory[previous[0]].flags_and_hash |= 0x40000000u;
  }
  else if ( v11 == 1 )
  {
    m_pMemory = this->m_table.m_pMemory;
    do
    {
      v7 = v4 & (v7 + 1);
      v13 = m_pMemory[v7].flags_and_hash;
    }
    while ( (v4 & h) != (v4 & v13 | (v13 >> 31)) );
    m_pMemory[result].flags_and_hash = v13;
    v14 = 0;
    data = this->m_table.m_pMemory[v7].data;
    v16 = &this->m_table.m_pMemory[v8];
    for ( i = 1; ; ++i )
    {
      *(&v16->flags_and_hash + i) = data[v14];
      if ( i == 4 )
        break;
      v14 = i;
    }
    this->m_table.m_pMemory[v7].flags_and_hash = 0x80000000;
    return v7;
  }
  return result;
}


// CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoRemove<CSkeletonInstance*>  (line 616, @0x0000000001f92430, libserver.so)  // inlines: DoLookup<CSkeletonInstance*>, IdealIndex, MarkInvalid, MoveDataFrom, operator[]
// calls: CUtlHashtable<CSkeletonInstance*, IPhysicsJoint*, PointerHashFunctor, PointerEqualFunctor, undefined_t, CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*, IPhysicsJoint*>, int> >::DoLookup<CSkeletonInstance*>
// callers: CPhysicsGameSystem::DestroyHierarchyConstraint
int __fastcall CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoRemove<CSkeletonInstance *>(
        CUtlHashtable<CSkeletonInstance*,IPhysicsJoint*,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*>,int> > *const this,
        CSkeletonInstance *x,
        unsigned int h)
{
  int v4; // ebx
  int result; // eax
  int v7; // ecx
  __int64 v8; // r10
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v9; // rdx
  int flags_and_hash; // esi
  int v11; // esi
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *m_pMemory; // r9
  int v13; // esi
  __int64 v14; // rsi
  int *data; // r8
  CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*> *v16; // r10
  __int64 i; // rax
  CUtlHashtable<CSkeletonInstance*,IPhysicsJoint*,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance*,IPhysicsJoint*>,int> >::handle_t previous[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  previous[0] = -1;
  v4 = this->m_table.m_nAllocationCount - 1;
  if ( this->m_nUsed == 0 )
    return -1;
  result = CUtlHashtable<CSkeletonInstance *,IPhysicsJoint *,PointerHashFunctor,PointerEqualFunctor,undefined_t,CUtlMemory<CUtlHashtableEntry<CSkeletonInstance *,IPhysicsJoint *>,int>>::DoLookup<CSkeletonInstance *>(
             this,
             x,
             h,
             previous);
  v7 = result;
  if ( result == -1 )
    return -1;
  v8 = result;
  v9 = &this->m_table.m_pMemory[v8];
  flags_and_hash = v9->flags_and_hash;
  v9->flags_and_hash = 0x80000000;
  --this->m_nUsed;
  v11 = flags_and_hash & 0x40000000 | (result == ((flags_and_hash >> 31) | flags_and_hash & v4));
  if ( v11 == 0x40000000 )
  {
    this->m_table.m_pMemory[previous[0]].flags_and_hash |= 0x40000000u;
  }
  else if ( v11 == 1 )
  {
    m_pMemory = this->m_table.m_pMemory;
    do
    {
      v7 = v4 & (v7 + 1);
      v13 = m_pMemory[v7].flags_and_hash;
    }
    while ( (v4 & h) != (v4 & v13 | (v13 >> 31)) );
    m_pMemory[result].flags_and_hash = v13;
    v14 = 0;
    data = this->m_table.m_pMemory[v7].data;
    v16 = &this->m_table.m_pMemory[v8];
    for ( i = 1; ; ++i )
    {
      *(&v16->flags_and_hash + i) = data[v14];
      if ( i == 4 )
        break;
      v14 = i;
    }
    this->m_table.m_pMemory[v7].flags_and_hash = 0x80000000;
    return v7;
  }
  return result;
}


// CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoRemove<unsigned int>  (line 616, @0x0000000001f94100, libserver.so)  // inlines: DoLookup<unsigned int>, IdealIndex, MarkInvalid, MoveDataFrom, operator[]
// calls: CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::DoLookup<unsigned int>
// callers: CWorldGameSystem::PostSpawnGroupUnload
int __fastcall CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoRemove<unsigned int>(
        CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> > *const this,
        unsigned int x,
        unsigned int h)
{
  int v4; // ebx
  int result; // eax
  int v7; // ecx
  __int64 v8; // r10
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v9; // rdx
  int flags_and_hash; // esi
  int v11; // esi
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *m_pMemory; // r9
  int v13; // esi
  __int64 v14; // rsi
  int *data; // r8
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v16; // r10
  __int64 i; // rax
  CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> >::handle_t previous[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  previous[0] = -1;
  v4 = this->m_table.m_nAllocationCount - 1;
  if ( this->m_nUsed == 0 )
    return -1;
  result = CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::DoLookup<unsigned int>(
             this,
             x,
             h,
             previous);
  v7 = result;
  if ( result == -1 )
    return -1;
  v8 = result;
  v9 = &this->m_table.m_pMemory[v8];
  flags_and_hash = v9->flags_and_hash;
  v9->flags_and_hash = 0x80000000;
  --this->m_nUsed;
  v11 = flags_and_hash & 0x40000000 | (result == ((flags_and_hash >> 31) | flags_and_hash & v4));
  if ( v11 == 0x40000000 )
  {
    this->m_table.m_pMemory[previous[0]].flags_and_hash |= 0x40000000u;
  }
  else if ( v11 == 1 )
  {
    m_pMemory = this->m_table.m_pMemory;
    do
    {
      v7 = v4 & (v7 + 1);
      v13 = m_pMemory[v7].flags_and_hash;
    }
    while ( (v4 & h) != (v4 & v13 | (v13 >> 31)) );
    m_pMemory[result].flags_and_hash = v13;
    v14 = 0;
    data = this->m_table.m_pMemory[v7].data;
    v16 = &this->m_table.m_pMemory[v8];
    for ( i = 1; ; ++i )
    {
      *(&v16->flags_and_hash + i) = data[v14];
      if ( i == 4 )
        break;
      v14 = i;
    }
    this->m_table.m_pMemory[v7].flags_and_hash = 0x80000000;
    return v7;
  }
  return result;
}


// CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoRemove<const CUtlStringToken&>  (line 616, @0x0000000002310dc0, libserver.so)  // inlines: DoLookup<const CUtlStringToken&>, IdealIndex, MarkInvalid, MoveDataFrom, operator[]
// calls: CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::DoLookup<const CUtlStringToken&>
// callers: CParticleSystemQueryGameSystem::PostSpawnGroupUnload
int __fastcall CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoRemove<CUtlStringToken const&>(
        CUtlHashtable<CUtlStringToken,long long int,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long int>,int> > *const this,
        const CUtlStringToken *const x,
        unsigned int h)
{
  int v4; // ebx
  int result; // eax
  int v7; // ecx
  __int64 v8; // r10
  CUtlHashtableEntry<CUtlStringToken,long long int> *v9; // rdx
  int flags_and_hash; // esi
  int v11; // esi
  CUtlHashtableEntry<CUtlStringToken,long long int> *m_pMemory; // r9
  int v13; // esi
  __int64 v14; // rsi
  int *data; // r8
  CUtlHashtableEntry<CUtlStringToken,long long int> *v16; // r10
  __int64 i; // rax
  CUtlHashtable<CUtlStringToken,long long int,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long int>,int> >::handle_t previous[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  previous[0] = -1;
  v4 = this->m_table.m_nAllocationCount - 1;
  if ( this->m_nUsed == 0 )
    return -1;
  result = CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::DoLookup<CUtlStringToken const&>(
             this,
             x,
             h,
             previous);
  v7 = result;
  if ( result == -1 )
    return -1;
  v8 = result;
  v9 = &this->m_table.m_pMemory[v8];
  flags_and_hash = v9->flags_and_hash;
  v9->flags_and_hash = 0x80000000;
  --this->m_nUsed;
  v11 = flags_and_hash & 0x40000000 | (result == ((flags_and_hash >> 31) | flags_and_hash & v4));
  if ( v11 == 0x40000000 )
  {
    this->m_table.m_pMemory[previous[0]].flags_and_hash |= 0x40000000u;
  }
  else if ( v11 == 1 )
  {
    m_pMemory = this->m_table.m_pMemory;
    do
    {
      v7 = v4 & (v7 + 1);
      v13 = m_pMemory[v7].flags_and_hash;
    }
    while ( (v4 & h) != (v4 & v13 | (v13 >> 31)) );
    m_pMemory[result].flags_and_hash = v13;
    v14 = 0;
    data = this->m_table.m_pMemory[v7].data;
    v16 = &this->m_table.m_pMemory[v8];
    for ( i = 1; ; ++i )
    {
      *(&v16->flags_and_hash + i) = data[v14];
      if ( i == 4 )
        break;
      v14 = i;
    }
    this->m_table.m_pMemory[v7].flags_and_hash = 0x80000000;
    return v7;
  }
  return result;
}


// CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoRemove<const CUtlStringToken&>  (line 616, @0x00000000025728c0, libserver.so)  // inlines: DoLookup<const CUtlStringToken&>, IdealIndex, MarkInvalid, MoveDataFrom, operator[]
// calls: CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::DoLookup<const CUtlStringToken&>
// callers: CDOTAFogOfWarSystem::PostSpawnGroupUnload
int __fastcall CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoRemove<CUtlStringToken const&>(
        CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>,int> > *const this,
        const CUtlStringToken *const x,
        unsigned int h)
{
  int v4; // ebx
  int result; // eax
  int v7; // ecx
  __int64 v8; // r10
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v9; // rdx
  int flags_and_hash; // esi
  int v11; // esi
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *m_pMemory; // r9
  int v13; // esi
  __int64 v14; // rsi
  int *data; // r8
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v16; // r10
  __int64 i; // rax
  CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>,int> >::handle_t previous[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  previous[0] = -1;
  v4 = this->m_table.m_nAllocationCount - 1;
  if ( this->m_nUsed == 0 )
    return -1;
  result = CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::DoLookup<CUtlStringToken const&>(
             this,
             x,
             h,
             previous);
  v7 = result;
  if ( result == -1 )
    return -1;
  v8 = result;
  v9 = &this->m_table.m_pMemory[v8];
  flags_and_hash = v9->flags_and_hash;
  v9->flags_and_hash = 0x80000000;
  --this->m_nUsed;
  v11 = flags_and_hash & 0x40000000 | (result == ((flags_and_hash >> 31) | flags_and_hash & v4));
  if ( v11 == 0x40000000 )
  {
    this->m_table.m_pMemory[previous[0]].flags_and_hash |= 0x40000000u;
  }
  else if ( v11 == 1 )
  {
    m_pMemory = this->m_table.m_pMemory;
    do
    {
      v7 = v4 & (v7 + 1);
      v13 = m_pMemory[v7].flags_and_hash;
    }
    while ( (v4 & h) != (v4 & v13 | (v13 >> 31)) );
    m_pMemory[result].flags_and_hash = v13;
    v14 = 0;
    data = this->m_table.m_pMemory[v7].data;
    v16 = &this->m_table.m_pMemory[v8];
    for ( i = 1; ; ++i )
    {
      *(&v16->flags_and_hash + i) = data[v14];
      if ( i == 4 )
        break;
      v14 = i;
    }
    this->m_table.m_pMemory[v7].flags_and_hash = 0x80000000;
    return v7;
  }
  return result;
}


// CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoRemove<unsigned int>  (line 616, @0x0000000002572a10, libserver.so)  // inlines: DoLookup<unsigned int>, IdealIndex, MarkInvalid, MoveDataFrom, operator[]
// calls: CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::DoLookup<unsigned int>
// callers: CDOTAFogOfWarSystem::PostSpawnGroupUnload
int __fastcall CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::DoRemove<unsigned int>(
        CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> > *const this,
        unsigned int x,
        unsigned int h)
{
  int v4; // ebx
  int result; // eax
  int v7; // ecx
  __int64 v8; // r10
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v9; // rdx
  int flags_and_hash; // esi
  int v11; // esi
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *m_pMemory; // rdi
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rdi
  int *data; // r8
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v17; // r10
  __int64 i; // rdx
  CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> >::handle_t previous[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  previous[0] = -1;
  v4 = this->m_table.m_nAllocationCount - 1;
  if ( this->m_nUsed == 0 )
    return -1;
  result = CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::DoLookup<unsigned int>(
             this,
             x,
             h,
             previous);
  v7 = result;
  if ( result == -1 )
    return -1;
  v8 = result;
  v9 = &this->m_table.m_pMemory[v8];
  flags_and_hash = v9->flags_and_hash;
  v9->flags_and_hash = 0x80000000;
  --this->m_nUsed;
  v11 = flags_and_hash & 0x40000000 | (result == ((flags_and_hash >> 31) | flags_and_hash & v4));
  if ( v11 == 0x40000000 )
  {
    this->m_table.m_pMemory[previous[0]].flags_and_hash |= 0x40000000u;
  }
  else if ( v11 == 1 )
  {
    m_pMemory = this->m_table.m_pMemory;
    do
    {
      v7 = v4 & (v7 + 1);
      v13 = v7;
      v14 = m_pMemory[v13].flags_and_hash;
    }
    while ( (v4 & h) != (v4 & v14 | (v14 >> 31)) );
    m_pMemory[v8].flags_and_hash = v14;
    v15 = 0;
    data = this->m_table.m_pMemory[v13].data;
    v17 = &this->m_table.m_pMemory[v8];
    for ( i = 1; ; ++i )
    {
      *(&v17->flags_and_hash + i) = data[v15];
      if ( i == 7 )
        break;
      v15 = i;
    }
    this->m_table.m_pMemory[v7].flags_and_hash = 0x80000000;
    return v7;
  }
  return result;
}


// CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoRemove<int>  (line 616, @0x0000000002f0a1e0, libserver.so)  // inlines: DoLookup<int>, IdealIndex, MarkInvalid, MoveDataFrom, operator[]
// calls: CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::DoLookup<int>
// callers: CNavObstructionManager::RemoveObstacle
int __fastcall CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::DoRemove<int>(
        CUtlHashtable<int,INavObstacle*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> > *const this,
        int x,
        unsigned int h)
{
  int v4; // ebx
  int result; // eax
  int v7; // ecx
  __int64 v8; // r10
  CUtlHashtableEntry<int,INavObstacle*> *v9; // rdx
  int flags_and_hash; // esi
  int v11; // esi
  CUtlHashtableEntry<int,INavObstacle*> *m_pMemory; // r9
  int v13; // esi
  __int64 v14; // rsi
  int *data; // r8
  CUtlHashtableEntry<int,INavObstacle*> *v16; // r10
  __int64 i; // rax
  CUtlHashtable<int,INavObstacle*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> >::handle_t previous[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  previous[0] = -1;
  v4 = this->m_table.m_nAllocationCount - 1;
  if ( this->m_nUsed == 0 )
    return -1;
  result = CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::DoLookup<int>(
             this,
             x,
             h,
             previous);
  v7 = result;
  if ( result == -1 )
    return -1;
  v8 = result;
  v9 = &this->m_table.m_pMemory[v8];
  flags_and_hash = v9->flags_and_hash;
  v9->flags_and_hash = 0x80000000;
  --this->m_nUsed;
  v11 = flags_and_hash & 0x40000000 | (result == ((flags_and_hash >> 31) | flags_and_hash & v4));
  if ( v11 == 0x40000000 )
  {
    this->m_table.m_pMemory[previous[0]].flags_and_hash |= 0x40000000u;
  }
  else if ( v11 == 1 )
  {
    m_pMemory = this->m_table.m_pMemory;
    do
    {
      v7 = v4 & (v7 + 1);
      v13 = m_pMemory[v7].flags_and_hash;
    }
    while ( (v4 & h) != (v4 & v13 | (v13 >> 31)) );
    m_pMemory[result].flags_and_hash = v13;
    v14 = 0;
    data = this->m_table.m_pMemory[v7].data;
    v16 = &this->m_table.m_pMemory[v8];
    for ( i = 1; ; ++i )
    {
      *(&v16->flags_and_hash + i) = data[v14];
      if ( i == 4 )
        break;
      v14 = i;
    }
    this->m_table.m_pMemory[v7].flags_and_hash = 0x80000000;
    return v7;
  }
  return result;
}


// CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoRemove<unsigned int>  (line 616, @0x0000000002f0a330, libserver.so)  // inlines: DoLookup<unsigned int>, IdealIndex, MarkInvalid, MoveDataFrom, operator[]
// calls: CUtlHashtable<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacleMgr::CNavObstacleSplitNode*>, int> >::DoLookup<unsigned int>
// callers: CNavObstacleMgr::MergeLeafNode, CNavObstacleMgr::ChangeNavAreaIndex, CNavObstacleMgr::MergeEdgeRecursive
int __fastcall CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoRemove<unsigned int>(
        CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> > *const this,
        unsigned int x,
        unsigned int h)
{
  int v4; // ebx
  int result; // eax
  int v7; // ecx
  __int64 v8; // r10
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v9; // rdx
  int flags_and_hash; // esi
  int v11; // esi
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *m_pMemory; // r9
  int v13; // esi
  __int64 v14; // rsi
  int *data; // r8
  CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*> *v16; // r10
  __int64 i; // rax
  CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode*>,int> >::handle_t previous[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  previous[0] = -1;
  v4 = this->m_table.m_nAllocationCount - 1;
  if ( this->m_nUsed == 0 )
    return -1;
  result = CUtlHashtable<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacleMgr::CNavObstacleSplitNode *>,int>>::DoLookup<unsigned int>(
             this,
             x,
             h,
             previous);
  v7 = result;
  if ( result == -1 )
    return -1;
  v8 = result;
  v9 = &this->m_table.m_pMemory[v8];
  flags_and_hash = v9->flags_and_hash;
  v9->flags_and_hash = 0x80000000;
  --this->m_nUsed;
  v11 = flags_and_hash & 0x40000000 | (result == ((flags_and_hash >> 31) | flags_and_hash & v4));
  if ( v11 == 0x40000000 )
  {
    this->m_table.m_pMemory[previous[0]].flags_and_hash |= 0x40000000u;
  }
  else if ( v11 == 1 )
  {
    m_pMemory = this->m_table.m_pMemory;
    do
    {
      v7 = v4 & (v7 + 1);
      v13 = m_pMemory[v7].flags_and_hash;
    }
    while ( (v4 & h) != (v4 & v13 | (v13 >> 31)) );
    m_pMemory[result].flags_and_hash = v13;
    v14 = 0;
    data = this->m_table.m_pMemory[v7].data;
    v16 = &this->m_table.m_pMemory[v8];
    for ( i = 1; ; ++i )
    {
      *(&v16->flags_and_hash + i) = data[v14];
      if ( i == 4 )
        break;
      v14 = i;
    }
    this->m_table.m_pMemory[v7].flags_and_hash = 0x80000000;
    return v7;
  }
  return result;
}


// CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoRemove<unsigned int>  (line 616, @0x0000000002f0a470, libserver.so)  // inlines: DoLookup<unsigned int>, IdealIndex, MarkInvalid, MoveDataFrom, operator[]
// calls: CUtlHashtable<unsigned int, CNavObstacle*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CNavObstacle*>, int> >::DoLookup<unsigned int>
// callers: CNavObstacleMgr::RemoveObstacle
int __fastcall CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::DoRemove<unsigned int>(
        CUtlHashtable<unsigned int,CNavObstacle*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle*>,int> > *const this,
        unsigned int x,
        unsigned int h)
{
  int v4; // ebx
  int result; // eax
  int v7; // ecx
  __int64 v8; // r10
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v9; // rdx
  int flags_and_hash; // esi
  int v11; // esi
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *m_pMemory; // r9
  int v13; // esi
  __int64 v14; // rsi
  int *data; // r8
  CUtlHashtableEntry<unsigned int,CNavObstacle*> *v16; // r10
  __int64 i; // rax
  CUtlHashtable<unsigned int,CNavObstacle*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle*>,int> >::handle_t previous[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  previous[0] = -1;
  v4 = this->m_table.m_nAllocationCount - 1;
  if ( this->m_nUsed == 0 )
    return -1;
  result = CUtlHashtable<unsigned int,CNavObstacle *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CNavObstacle *>,int>>::DoLookup<unsigned int>(
             this,
             x,
             h,
             previous);
  v7 = result;
  if ( result == -1 )
    return -1;
  v8 = result;
  v9 = &this->m_table.m_pMemory[v8];
  flags_and_hash = v9->flags_and_hash;
  v9->flags_and_hash = 0x80000000;
  --this->m_nUsed;
  v11 = flags_and_hash & 0x40000000 | (result == ((flags_and_hash >> 31) | flags_and_hash & v4));
  if ( v11 == 0x40000000 )
  {
    this->m_table.m_pMemory[previous[0]].flags_and_hash |= 0x40000000u;
  }
  else if ( v11 == 1 )
  {
    m_pMemory = this->m_table.m_pMemory;
    do
    {
      v7 = v4 & (v7 + 1);
      v13 = m_pMemory[v7].flags_and_hash;
    }
    while ( (v4 & h) != (v4 & v13 | (v13 >> 31)) );
    m_pMemory[result].flags_and_hash = v13;
    v14 = 0;
    data = this->m_table.m_pMemory[v7].data;
    v16 = &this->m_table.m_pMemory[v8];
    for ( i = 1; ; ++i )
    {
      *(&v16->flags_and_hash + i) = data[v14];
      if ( i == 4 )
        break;
      v14 = i;
    }
    this->m_table.m_pMemory[v7].flags_and_hash = 0x80000000;
    return v7;
  }
  return result;
}


// CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveAndAdvance  (line 706, @0x0000000001f91fc0, libserver.so)  // inlines: NextHandle, operator[]
// calls: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoRemove<unsigned int>
// callers: CEntityDebugGameSystem::PreRender, CEntityDebugGameSystem::OnPostSimulate
UtlHashHandle_t __fastcall CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAndAdvance(
        CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> > *const this,
        UtlHashHandle_t idx)
{
  __int64 v3; // r13
  int v5; // eax
  UtlHashHandle_t v6; // ecx
  int m_nAllocationCount; // edx
  signed int v8; // esi
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *m_pMemory; // rax
  int flags_and_hash; // ebx
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v11; // rax

  v3 = idx;
  v5 = CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoRemove<unsigned int>(
         this,
         this->m_table.m_pMemory[v3].data[0],
         this->m_table.m_pMemory[v3].flags_and_hash & 0x3FFFFFFF);
  v6 = idx;
  if ( idx < v5 )
    return v6;
  m_nAllocationCount = this->m_table.m_nAllocationCount;
  v8 = idx + 1;
  v6 = -1;
  m_pMemory = this->m_table.m_pMemory;
  if ( (idx + 1) >= m_nAllocationCount )
    return v6;
  flags_and_hash = m_pMemory[v3 + 1].flags_and_hash;
  v11 = &m_pMemory[v8 + 1];
  if ( flags_and_hash < 0 )
  {
    while ( ++v8 != m_nAllocationCount )
    {
      ++v11;
      if ( v11[-1].flags_and_hash >= 0 )
        return v8;
    }
    return -1;
  }
  return v8;
}


// CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveByHandle  (line 729, @0x0000000001f91f90, libserver.so)  // inlines: operator[]
// calls: CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::DoRemove<unsigned int>
// callers: CEntityDebugGameSystem::ClearDebugBits, CEntityDebugGameSystem::ToggleDebugBits
void __fastcall CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveByHandle(
        CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> > *const this,
        UtlHashHandle_t idx)
{
  CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::DoRemove<unsigned int>(
    this,
    this->m_table.m_pMemory[idx].data[0],
    this->m_table.m_pMemory[idx].flags_and_hash & 0x3FFFFFFF);
}


// CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::RemoveAll  (line 750, @0x0000000001f883d0, libserver.so)  // inlines: MarkInvalid
// callers: CEntityDebugGameSystem::ClearAllDebugBits, ent_clear_debug_overlays, CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> >::~CUtlHashtable, CEntityDebugGameSystem::~CEntityDebugGameSystem
void __fastcall CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int>>::RemoveAll(
        CUtlHashtable<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<unsigned int,CEntityDebugGameSystem::EntityDebugInfo_t> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::RemoveAll  (line 750, @0x0000000001f923a0, libserver.so)  // inlines: MarkInvalid
// callers: CUtlHashtable<unsigned int, empty_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, empty_t>, int> >::~CUtlHashtable, DebugCallbackEntities
void __fastcall CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int>>::RemoveAll(
        CUtlHashtable<unsigned int,empty_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,empty_t>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<unsigned int,empty_t> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    v3 = &this->m_table.m_pMemory[v2];
    if ( v2 >= 0 )
    {
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<unsigned int, WorldInfo_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, WorldInfo_t*>, int> >::RemoveAll  (line 750, @0x0000000001f93fc0, libserver.so)  // inlines: MarkInvalid
// callers: CWorldGameSystem::GameShutdown, CWorldGameSystem::~CWorldGameSystem
void __fastcall CUtlHashtable<unsigned int,WorldInfo_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t *>,int>>::RemoveAll(
        CUtlHashtable<unsigned int,WorldInfo_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,WorldInfo_t*>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<unsigned int,WorldInfo_t*> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::RemoveAll  (line 750, @0x00000000022b5ab0, libserver.so)  // inlines: MarkInvalid
// callers: CUtlHashtable<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::HashProxy, CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::EqualProxy, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*, CMarkupManager::MarkupGroup_t*>::IndirectIndex, empty_t>, int> >::~CUtlHashtable, CMarkupManager::PostSpawnGroupUnload, CMarkupManager::~CMarkupManager
void __fastcall CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t *,DefaultHashFunctor<char const*>,DefaultEqualFunctor<char const*>,unsigned short,undefined_t>::IndirectIndex,empty_t>,int>>::RemoveAll(
        CUtlHashtable<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::HashProxy,CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::EqualProxy,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<CUtlStableHashtable<char const*,CMarkupManager::MarkupGroup_t*>::IndirectIndex,empty_t> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    v3 = &this->m_table.m_pMemory[v2];
    if ( v2 >= 0 )
    {
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x8000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::RemoveAll  (line 750, @0x0000000002311090, libserver.so)  // inlines: MarkInvalid
// callers: CUtlHashtable<CUtlStringToken, long long int, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, long long int>, int> >::~CUtlHashtable, CParticleSystemQueryGameSystem::~CParticleSystemQueryGameSystem
void __fastcall CUtlHashtable<CUtlStringToken,long long,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long>,int>>::RemoveAll(
        CUtlHashtable<CUtlStringToken,long long int,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,long long int>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<CUtlStringToken,long long int> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::RemoveAll  (line 750, @0x00000000024602b0, libserver.so)  // inlines: MarkInvalid
// callers: CExpressionCalculator::~CExpressionCalculator, CDOTA_ActionRunner::CalculateExpression, CEconStyleInfo::~CEconStyleInfo, CEconStyleInfo::BInitFromKV, CUtlHashtable<CUtlStringToken, float, VarNameHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::~CUtlHashtable, EvaluateExpression
void __fastcall CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::RemoveAll(
        CUtlHashtable<CUtlStringToken,float,VarNameHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<CUtlStringToken,float> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<CUtlStringToken, float, AutoStyleHash_t, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, float>, int> >::RemoveAll  (line 750, @0x00000000024a63b0, libserver.so)  // inlines: MarkInvalid
// callers: CDOTA_BaseNPC::ClearAutoStyleCriteria, CDOTA_BaseNPC::CopyAutoStyleCriteriaFrom
void __fastcall CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int>>::RemoveAll(
        CUtlHashtable<CUtlStringToken,float,AutoStyleHash_t,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,float>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<CUtlStringToken,float> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::RemoveAll  (line 750, @0x0000000002572710, libserver.so)  // inlines: MarkInvalid
// callers: CUtlHashtable<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*, DefaultHashFunctor<CUtlStringToken>, DefaultEqualFunctor<CUtlStringToken>, undefined_t, CUtlMemory<CUtlHashtableEntry<CUtlStringToken, CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>, int> >::~CUtlHashtable, CDOTAFogOfWarSystem::GameShutdown, CDOTAFogOfWarSystem::~CDOTAFogOfWarSystem
void __fastcall CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t *>,int>>::RemoveAll(
        CUtlHashtable<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*,DefaultHashFunctor<CUtlStringToken>,DefaultEqualFunctor<CUtlStringToken>,undefined_t,CUtlMemory<CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<CUtlStringToken,CDOTAFogOfWarSystem::SpawnGroupFoWInfo_t*> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CDOTAFogOfWarSystem::SpawnGroupFowSize_t>, int> >::RemoveAll  (line 750, @0x00000000025727a0, libserver.so)  // inlines: MarkInvalid
// callers: CDOTAFogOfWarSystem::GameShutdown, CDOTAFogOfWarSystem::~CDOTAFogOfWarSystem
void __fastcall CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int>>::RemoveAll(
        CUtlHashtable<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<unsigned int,CDOTAFogOfWarSystem::SpawnGroupFowSize_t> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    v3 = &this->m_table.m_pMemory[v2];
    if ( v2 >= 0 )
    {
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::RemoveAll  (line 750, @0x0000000002572d40, libserver.so)  // inlines: MarkInvalid
// callers: CUtlHashtable<short unsigned int, int, DefaultHashFunctor<short unsigned int>, DefaultEqualFunctor<short unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<short unsigned int, int>, int> >::~CUtlHashtable, CDOTAGameManager::DestroyAddOnGameKeyValues, CDOTAGameManager::DestroyGameKeyValues, CDOTAGameManager::~CDOTAGameManager
void __fastcall CUtlHashtable<unsigned short,int,DefaultHashFunctor<unsigned short>,DefaultEqualFunctor<unsigned short>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned short,int>,int>>::RemoveAll(
        CUtlHashtable<short unsigned int,int,DefaultHashFunctor<short unsigned int>,DefaultEqualFunctor<short unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<short unsigned int,int>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<short unsigned int,int> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::RemoveAll  (line 750, @0x0000000002572dd0, libserver.so)  // inlines: MarkInvalid
// callers: CUtlHashtable<int, short unsigned int, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, short unsigned int>, int> >::~CUtlHashtable, CDOTAGameManager::DestroyAddOnGameKeyValues, CDOTAGameManager::DestroyGameKeyValues, CDOTAGameManager::~CDOTAGameManager
void __fastcall CUtlHashtable<int,unsigned short,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,unsigned short>,int>>::RemoveAll(
        CUtlHashtable<int,short unsigned int,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,short unsigned int>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<int,short unsigned int> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::RemoveAll  (line 750, @0x0000000002e5b7f0, libserver.so)  // inlines: ClearSlotUnits, Destruct<CUtlKeyValuePair<int, CDOTAHeroSlots> >, Destruct<CUtlString>, Element, MarkInvalid, Purge, RemoveAll, operator[], ~CDOTAHeroSlots, ~CUtlKeyValuePair, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, operator delete, CUtlMemory<CUtlString, int>::Purge
// callers: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::~CUtlHashtable, CDOTAInventoryManager::~CDOTAInventoryManager
void __fastcall CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::RemoveAll(
        CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> > *const this)
{
  CUtlHashtableEntry<int,CDOTAHeroSlots> *m_pMemory; // rdx
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 i; // r12
  int *v6; // r15
  int v7; // r13d
  __int64 j; // r14
  CUtlString *v9; // rdi
  bool v10; // zf
  CUtlString *v11; // r15
  __int64 v13; // [rsp+10h] [rbp-50h]
  int used; // [rsp+1Ch] [rbp-44h]
  __int64 v15; // [rsp+20h] [rbp-40h]
  __int64 v16; // [rsp+28h] [rbp-38h]

  used = this->m_nUsed;
  if ( used != 0 )
  {
    m_pMemory = this->m_table.m_pMemory;
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = v2;
      v16 = 0;
      v4 = &m_pMemory[v3].data[2];
      v13 = -140LL - &m_pMemory[v3];
      v15 = -700 * (v2 + 1LL);
      do
      {
        if ( *(v4 - 12) >= 0 )
        {
          *(v4 - 12) = 0x80000000;
          for ( i = 0; i != 128; i += 8 )
          {
            v6 = *(v4 + i + 512);
            if ( v6 != 0 )
            {
              v7 = *v6;
              for ( j = 8LL * *v6 - 8; --v7 >= 0; j -= 8 )
              {
                v9 = (*(v6 + 1) + j);
                if ( v9->m_pString != 0 )
                  CUtlString::FreeMemoryBlock(v9);
              }
              v10 = (v6[5] & 0xC0000000) == 0;
              *v6 = 0;
              if ( v10 )
              {
                CUtlMemory<CUtlString,int>::Purge((v6 + 2));
                if ( (v6[5] & 0xC0000000) == 0 )
                  CUtlMemory<CUtlString,int>::Purge((v6 + 2));
              }
              operator delete(v6);
              *(v4 + i + 512) = 0;
            }
          }
          v11 = (v4 + 128);
          do
          {
            --v11;
            if ( *(&v11[16].m_pString + v13 - v16 + v4) != 0 )
              CUtlString::FreeMemoryBlock(v11);
          }
          while ( v11 != v4 );
          if ( --used == 0 )
            break;
        }
        v16 -= 700;
        v4 -= 700;
      }
      while ( v16 != v15 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::RemoveAll  (line 750, @0x0000000002e5b9d0, libserver.so)  // inlines: MarkInvalid
// callers: CUtlHashtable<int, CHeroBaseItems, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CHeroBaseItems>, int> >::~CUtlHashtable, CDOTAInventoryManager::~CDOTAInventoryManager, CDOTAInventoryManager::GenerateBaseItems
void __fastcall CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int>>::RemoveAll(
        CUtlHashtable<int,CHeroBaseItems,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CHeroBaseItems>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<int,CHeroBaseItems> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CUtlVector<DOTAEconItemInfo_t, CUtlMemory<DOTAEconItemInfo_t, int> >*>, int> >::RemoveAll  (line 750, @0x0000000002e5ba60, libserver.so)  // inlines: MarkInvalid
// callers: CDOTAInventoryManager::PurgeItemsForHeroesCache, CDOTAInventoryManager::~CDOTAInventoryManager
void __fastcall CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int>> *>,int>>::RemoveAll(
        CUtlHashtable<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<int,CUtlVector<DOTAEconItemInfo_t,CUtlMemory<DOTAEconItemInfo_t,int> >*> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<unsigned int, bool, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, bool>, int> >::RemoveAll  (line 750, @0x0000000002f08b40, libserver.so)  // inlines: MarkInvalid
// callers: CNavObstacleMgr::SplitObstacle, CNavObstacleMgr::MergeObstacle
void __fastcall CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int>>::RemoveAll(
        CUtlHashtable<unsigned int,bool,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,bool>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<unsigned int,bool> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::RemoveAll  (line 750, @0x0000000002f08e70, libserver.so)  // inlines: MarkInvalid
// callers: CNavObstructionManager::OnNavMeshDestroyed, CUtlHashtable<int, INavObstacle*, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, INavObstacle*>, int> >::~CUtlHashtable, CNavObstructionManager::OnChangeTheNavMesh
void __fastcall CUtlHashtable<int,INavObstacle *,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle *>,int>>::RemoveAll(
        CUtlHashtable<int,INavObstacle*,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,INavObstacle*>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<int,INavObstacle*> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<int, CNavSearchElement, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CNavSearchElement>, int> >::RemoveAll  (line 750, @0x0000000002f09500, libserver.so)  // inlines: MarkInvalid
// callers: CNavBreadthFirstSearch::~CNavBreadthFirstSearch, CNavBreadthFirstSearch::BreadthFirstSearch, CPathCostRecorder::DebugDraw, NavBreadthFirstSearch<std::function<NavSearchAreaResult_t(CNavArea&, NavSearchAreaInfo_t*)> >, NavBreadthFirstSearch<DrawSelectionSet>, NavBreadthFirstSearch<ClusterMarker>, CNavVolumeBreadthFirstSearch::DoSearch, CNavSearchHexLattice::~CNavSearchHexLattice, CNavEditor::UpdateSelection, nav_flood_select, NavSearch::GetNearestNav
void __fastcall CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int>>::RemoveAll(
        CUtlHashtable<int,CNavSearchElement,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CNavSearchElement>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<int,CNavSearchElement> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> >::RemoveAll  (line 750, @0x0000000003152600, libserver.so)  // inlines: MarkInvalid
// callers: CModelBuilder::AppendFlexControllersFromOldData, CModelBuilder::CreateRemappingTableForMeshFromOldData
void __fastcall CUtlHashtable<ResourceBindingBase_t const*,empty_t,DefaultHashFunctor<ResourceBindingBase_t const*>,DefaultEqualFunctor<ResourceBindingBase_t const*>,undefined_t,CUtlMemory<CUtlHashtableEntry<ResourceBindingBase_t const*,empty_t>,int>>::RemoveAll(
        CUtlHashtable<const ResourceBindingBase_t*,empty_t,DefaultHashFunctor<const ResourceBindingBase_t*>,DefaultEqualFunctor<const ResourceBindingBase_t*>,undefined_t,CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<const ResourceBindingBase_t*,empty_t> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::RemoveAll  (line 750, @0x000000000322d090, libserver.so)  // inlines: MarkInvalid
// callers: CUtlHashtable<unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::~CUtlHashtable, GCSDK::WaitAnalysisGraph_t::~WaitAnalysisGraph_t, GCSDK::CJobMgr::DumpJobWaitAnalysis
void __fastcall CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t *>,int>>::RemoveAll(
        CUtlHashtable<unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<unsigned int>,DefaultEqualFunctor<unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<unsigned int,GCSDK::WaitAnalysisNode_t*> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


// CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::RemoveAll  (line 750, @0x000000000322d120, libserver.so)  // inlines: MarkInvalid
// callers: CUtlHashtable<long long unsigned int, GCSDK::WaitAnalysisNode_t*, DefaultHashFunctor<long long unsigned int>, DefaultEqualFunctor<long long unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<long long unsigned int, GCSDK::WaitAnalysisNode_t*>, int> >::~CUtlHashtable, GCSDK::WaitAnalysisGraph_t::~WaitAnalysisGraph_t, GCSDK::CJobMgr::DumpJobWaitAnalysis
void __fastcall CUtlHashtable<unsigned long long,GCSDK::WaitAnalysisNode_t *,DefaultHashFunctor<unsigned long long>,DefaultEqualFunctor<unsigned long long>,undefined_t,CUtlMemory<CUtlHashtableEntry<unsigned long long,GCSDK::WaitAnalysisNode_t *>,int>>::RemoveAll(
        CUtlHashtable<long long unsigned int,GCSDK::WaitAnalysisNode_t*,DefaultHashFunctor<long long unsigned int>,DefaultEqualFunctor<long long unsigned int>,undefined_t,CUtlMemory<CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*>,int> > *const this)
{
  int m_nUsed; // ecx
  int v2; // edx
  CUtlHashtableEntry<long long unsigned int,GCSDK::WaitAnalysisNode_t*> *v3; // rax

  m_nUsed = this->m_nUsed;
  if ( m_nUsed != 0 )
  {
    v2 = this->m_table.m_nAllocationCount - 1;
    if ( v2 >= 0 )
    {
      v3 = &this->m_table.m_pMemory[v2];
      do
      {
        if ( v3->flags_and_hash >= 0 )
        {
          --m_nUsed;
          v3->flags_and_hash = 0x80000000;
          if ( m_nUsed == 0 )
            break;
        }
        --v2;
        --v3;
      }
      while ( v2 != -1 );
    }
    this->m_nUsed = 0;
  }
}


