// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/decals.cpp:31
class CDecalEmitterSystem : public IDecalEmitterSystem, public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct DecalListEntry {
		int precache_index;  // +0x4
		float weight;  // +0x8
		DecalListEntry();
		DecalListEntry(const DecalListEntry &);

		// sizeof = 12
	};

	struct DecalEntry {
		DecalEntry();
		DecalEntry(const DecalEntry &);
		DecalEntry & operator=(const DecalEntry &);
		~DecalEntry();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef CAutoGameSystem BaseClass;
	CDecalEmitterSystem(CDecalEmitterSystem &);
	CDecalEmitterSystem(const CDecalEmitterSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CDecalEmitterSystem *);
	CDecalEmitterSystem();
	virtual bool Init();
	virtual void Shutdown();
	virtual void RebuildMappings();
	virtual void PreSpawnGroupLoad(const EventPreSpawnGroupLoad_t &);
	virtual int GetDecalIndexForName(const char *);
	virtual const char * TranslateDecalForGameMaterial(const char *, unsigned char);

private:

	const char * ImpactDecalForGameMaterial(int);
	void LoadDecalsFromScript(const char *);
	void Clear();
	virtual ~CDecalEmitterSystem();

	// vtable[3] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[4] DoesGameSystemReallocate
	// vtable[5] SetGameSystemGlobalPtrs
	// vtable[6] Init
	// vtable[7] Shutdown
	// vtable[2] RebuildMappings
	// vtable[8] PreSpawnGroupLoad
	// vtable[0] GetDecalIndexForName
	// vtable[1] TranslateDecalForGameMaterial
	// sizeof = 232
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDecalEmitterSystem::~CDecalEmitterSystem  (line 31, @0x00000000021ecca0, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlDict<int, int>::Purge, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlSymbolTable::~CUtlSymbolTable, CUtlDict<CDecalEmitterSystem::DecalEntry, int>::Purge, CUtlRBTree<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, IGameSystem::~IGameSystem, CUtlMemory<CDecalEmitterSystem::DecalListEntry, int>::Purge
void __fastcall CDecalEmitterSystem::~CDecalEmitterSystem(CDecalEmitterSystem *const this)
{
  CUtlDict<int,int> *p_m_GameMaterialTranslation; // r12
  bool v3; // zf

  p_m_GameMaterialTranslation = &this->m_GameMaterialTranslation;
  this->_vptr_IDecalEmitterSystem = &off_4015A10;
  this->_vptr_IGameSystem = &off_4015A78;
  CUtlDict<int,int>::Purge(&this->m_GameMaterialTranslation);
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&p_m_GameMaterialTranslation->m_Elements.m_Tree);
  if ( (this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Elements);
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_DecalFileNames);
  CUtlDict<CDecalEmitterSystem::DecalEntry,int>::Purge(&this->m_Decals);
  CUtlRBTree<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Decals.m_Elements.m_Tree);
  if ( (this->m_Decals.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_Decals.m_Elements.m_Tree.m_Elements);
  v3 = (this->m_AllDecals.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AllDecals.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CDecalEmitterSystem::DecalListEntry,int>::Purge(&this->m_AllDecals.m_Memory);
    if ( (this->m_AllDecals.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDecalEmitterSystem::DecalListEntry,int>::Purge(&this->m_AllDecals.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(&this->CAutoGameSystem);
}


// CDecalEmitterSystem::~CDecalEmitterSystem  (line 31, @0x00000000021ecd80, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CDecalEmitterSystem, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlDict<int, int>::Purge, CUtlRBTree<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, int, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, CUtlSymbolTable::~CUtlSymbolTable, CUtlDict<CDecalEmitterSystem::DecalEntry, int>::Purge, CUtlRBTree<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int>::Purge, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CDecalEmitterSystem::DecalListEntry, int>::Purge
void __fastcall CDecalEmitterSystem::~CDecalEmitterSystem(CDecalEmitterSystem *const this)
{
  CUtlDict<int,int> *p_m_GameMaterialTranslation; // r12
  bool v3; // zf

  p_m_GameMaterialTranslation = &this->m_GameMaterialTranslation;
  this->_vptr_IDecalEmitterSystem = &off_4015A10;
  this->_vptr_IGameSystem = &off_4015A78;
  CUtlDict<int,int>::Purge(&this->m_GameMaterialTranslation);
  CUtlRBTree<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&p_m_GameMaterialTranslation->m_Elements.m_Tree);
  if ( (this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Elements);
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_DecalFileNames);
  CUtlDict<CDecalEmitterSystem::DecalEntry,int>::Purge(&this->m_Decals);
  CUtlRBTree<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Purge(&this->m_Decals.m_Elements.m_Tree);
  if ( (this->m_Decals.m_Elements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>::Purge(&this->m_Decals.m_Elements.m_Tree.m_Elements);
  v3 = (this->m_AllDecals.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AllDecals.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CDecalEmitterSystem::DecalListEntry,int>::Purge(&this->m_AllDecals.m_Memory);
    if ( (this->m_AllDecals.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDecalEmitterSystem::DecalListEntry,int>::Purge(&this->m_AllDecals.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(&this->CAutoGameSystem);
  operator delete(this);
}


// CDecalEmitterSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 33, @0x00000000021de280, libserver.so)
void __fastcall CDecalEmitterSystem::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CDecalEmitterSystem *const this)
{
  ;
}


// CDecalEmitterSystem::DoesGameSystemReallocate  (line 33, @0x00000000021de2a0, libserver.so)
// globals: CDecalEmitterSystem::sm_Factory
bool __fastcall CDecalEmitterSystem::DoesGameSystemReallocate(const CDecalEmitterSystem *const this)
{
  return (*(CDecalEmitterSystem::sm_Factory->_vptr_IGameSystemFactory + 8))(CDecalEmitterSystem::sm_Factory);
}


// CDecalEmitterSystem::SetGameSystemGlobalPtrs  (line 33, @0x00000000021de2d0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDecalEmitterSystem::sm_Factory
void __fastcall CDecalEmitterSystem::SetGameSystemGlobalPtrs(CDecalEmitterSystem *const this, void *pValue)
{
  if ( CDecalEmitterSystem::sm_Factory != 0 )
    (*(CDecalEmitterSystem::sm_Factory->_vptr_IGameSystemFactory + 7))(CDecalEmitterSystem::sm_Factory, pValue);
}


// CDecalEmitterSystem::CDecalEmitterSystem  (line 36, @0x00000000021ec030, libserver.so)  // inlines: CUtlDict, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ResetDbgInfo, SetCompareType, SetLessFunc, ~CAutoGameSystem, ~CUtlDict, ~CUtlMap, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::CUtlSymbolTable, CUtlDict<CDecalEmitterSystem::DecalEntry, int>::Purge, CUtlRBTree<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CDecalEmitterSystem::DecalEntry, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::~CUtlRBTree, IGameSystem::~IGameSystem, _Unwind_Resume, CUtlMemory<CDecalEmitterSystem::DecalListEntry, int>::Purge
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// globals: FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CDecalEmitterSystem::CDecalEmitterSystem(CDecalEmitterSystem *const this)
{
  CUtlSymbolTable *p_m_DecalFileNames; // rdi

  p_m_DecalFileNames = &this->m_DecalFileNames;
  *&p_m_DecalFileNames[-2].m_StringPools.m_Size = &off_4015A10;
  LODWORD(p_m_DecalFileNames[-1].m_Lookup.m_Elements.m_pMemory) = 0;
  p_m_DecalFileNames[-2].m_StringPools.m_Memory.m_pMemory = &off_4015A78;
  *&p_m_DecalFileNames[-1].m_Lookup.m_Elements.m_nAllocationCount = 0;
  *&p_m_DecalFileNames[-1].m_Lookup.m_Root = 0;
  *&p_m_DecalFileNames[-1].m_Lookup.m_FirstFree = 0;
  *&p_m_DecalFileNames[-1].m_bInsensitive = 0;
  LODWORD(p_m_DecalFileNames[-1].m_pUserSearchString) = 0;
  HIDWORD(p_m_DecalFileNames[-1].m_pUserSearchString) = 0;
  p_m_DecalFileNames[-1].m_StringPools.m_Size = -1;
  *(&p_m_DecalFileNames[-1].m_StringPools.m_Size + 1) = 0;
  LODWORD(p_m_DecalFileNames[-1].m_StringPools.m_Memory.m_pMemory) = -1;
  HIDWORD(p_m_DecalFileNames[-1].m_StringPools.m_Memory.m_pMemory) = -1;
  *&p_m_DecalFileNames[-1].m_StringPools.m_Memory.m_nAllocationCount = 0;
  p_m_DecalFileNames[-1].m_Lookup.m_pElements = FastCaselessStringLessThan;
  CUtlSymbolTable::CUtlSymbolTable(p_m_DecalFileNames, 0, 16, 0);
  this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Root = -1;
  this->m_GameMaterialTranslation.m_Elements.m_Tree.m_NumElements = 0;
  this->m_GameMaterialTranslation.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_GameMaterialTranslation.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_GameMaterialTranslation.m_Elements.m_Tree.m_pElements = 0;
  this->m_GameMaterialTranslation.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
}


// CDecalEmitterSystem::PreSpawnGroupLoad  (line 45, @0x00000000021e1c10, libserver.so)  // inlines: IsEmpty, SpawnGroupHasWorldGeomemtry
void __fastcall CDecalEmitterSystem::PreSpawnGroupLoad(
        CDecalEmitterSystem *const this,
        const EventPreSpawnGroupLoad_t *const msg)
{
  char *m_pString; // rax

  if ( msg->m_SpawnGroupName.m_pString != 0 && *msg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = msg->m_EntityLumpName.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
      (*(this->_vptr_IDecalEmitterSystem + 2))(this);
  }
}


// CDecalEmitterSystem::DecalEntry::DecalEntry  (line 92, @0x00000000021ebcd0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, GrowMemory, operator[], ~CUtlVector
// calls: CUtlMemory<int, int>::Grow, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CDecalEmitterSystem::DecalEntry::DecalEntry(
        CDecalEmitterSystem::DecalEntry *const this,
        const CDecalEmitterSystem::DecalEntry *const src)
{
  unsigned __int64 v4; // r12
  int m_nAllocationCount; // edx
  __int64 v6; // r13
  int *v7; // rax
  int m_Size; // eax
  int *v9; // r14
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // [rsp+0h] [rbp-40h]
  __int64 v11; // [rsp+8h] [rbp-38h]

  this->indices.m_Size = 0;
  this->indices.m_Memory.m_pMemory = 0;
  this->indices.m_Memory.m_nAllocationCount = 0;
  this->indices.m_Memory.m_nGrowSize = 0;
  if ( src->indices.m_Size > 0 )
  {
    v4 = 0;
    m_nAllocationCount = 0;
    v6 = 0;
    v11 = 4LL * (src->indices.m_Size - 1) + 4;
    p_m_Memory = &this->indices.m_Memory;
    while ( 1 )
    {
      m_Size = v6;
      v9 = &src->indices.m_Memory.m_pMemory[v4 / 4];
      if ( v6 == m_nAllocationCount )
      {
        CUtlMemory<int,int>::Grow(p_m_Memory, 1);
        m_Size = this->indices.m_Size;
      }
      this->indices.m_Size = m_Size + 1;
      v7 = &this->indices.m_Memory.m_pMemory[v6];
      if ( v7 != 0 )
        *v7 = *v9;
      v4 += 4LL;
      if ( v4 == v11 )
        break;
      v6 = this->indices.m_Size;
      m_nAllocationCount = this->indices.m_Memory.m_nAllocationCount;
    }
  }
}


// CDecalEmitterSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 127, @0x00000000021c57a0, libserver.so)
void __cdecl CDecalEmitterSystem::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CDecalEmitterSystem::GetDecalIndexForName  (line 134, @0x00000000021d3330, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DecalEntry, Element, Find, LeftChild, Node_t, Purge, RemoveAll, RightChild, operator(), operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~DecalEntry, ~Node_t
// calls: CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume
int __fastcall CDecalEmitterSystem::GetDecalIndexForName(CDecalEmitterSystem *const this, const char *decalname)
{
  __int64 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  unsigned __int64 v5; // rbx
  UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v6; // rdx
  int m_Size; // eax
  float v8; // xmm3_4
  CDecalEmitterSystem::DecalListEntry *v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // r12
  double v13; // xmm2_8
  int v14; // r14d
  CDecalEmitterSystem::DecalListEntry *v15; // r15
  __int64 v16; // rax
  float v17; // xmm0_4
  __int64 v19; // [rsp-70h] [rbp-70h]
  UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v20; // [rsp-68h] [rbp-68h]
  float v21; // [rsp-60h] [rbp-60h]
  unsigned int v22; // [rsp-5Ch] [rbp-5Ch]
  _QWORD v23[2]; // [rsp-58h] [rbp-58h] BYREF
  CUtlMemory<int,int> v24[4]; // [rsp-48h] [rbp-48h] BYREF

  if ( decalname == 0 || *decalname == 0 )
    return -1;
  LODWORD(v23[1]) = 0;
  m_Root = this->m_Decals.m_Elements.m_Tree.m_Root;
  v24[0].m_pMemory = 0;
  v24[0].m_nAllocationCount = 0;
  v24[0].m_nGrowSize = 0;
  v23[0] = decalname;
  if ( m_Root == -1 )
  {
    LODWORD(v23[1]) = 0;
  }
  else
  {
    m_pMemory = this->m_Decals.m_Elements.m_Tree.m_Elements.m_pMemory;
    do
    {
      while ( 1 )
      {
        v5 = m_Root;
        if ( !this->m_Decals.m_Elements.m_Tree.m_LessFunc.m_LessFunc(v23, &m_pMemory[v5].m_Data) )
          break;
        m_pMemory = this->m_Decals.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == -1 )
          goto LABEL_9;
      }
      if ( !this->m_Decals.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_Decals.m_Elements.m_Tree.m_Elements.m_pMemory[v5].m_Data,
              v23) )
        break;
      m_pMemory = this->m_Decals.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v5].m_Right;
    }
    while ( m_Root != -1 );
LABEL_9:
    LODWORD(v23[1]) = 0;
    if ( (v24[0].m_nGrowSize & 0xC0000000) != 0 )
      goto LABEL_10;
  }
  CUtlMemory<int,int>::Purge(v24);
  if ( (v24[0].m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<int,int>::Purge(v24);
LABEL_10:
  if ( m_Root == -1 )
    return -1;
  v6 = &this->m_Decals.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root];
  m_Size = v6->m_Data.elem.indices.m_Size;
  if ( m_Size <= 0 )
    return -1;
  v8 = 0.0;
  v9 = this->m_AllDecals.m_Memory.m_pMemory;
  v10 = 4LL * (m_Size - 1) + 4;
  v11 = 0;
  v12 = 0;
  v13 = 0.0;
  do
  {
    while ( 1 )
    {
      v14 = v6->m_Data.elem.indices.m_Memory.m_pMemory[v11 / 4];
      v15 = &v9[v14];
      v16 = v14;
      if ( *&v13 != v8 )
        v16 = v12;
      *&v13 = *&v13 + v15->weight;
      v12 = v16;
      if ( *&v13 != v8 )
      {
        v21 = v8;
        v19 = v10;
        v20 = v6;
        v22 = LODWORD(v13);
        v17 = (*(*random_valve + 8LL))(random_valve, 0.0, v13);
        *&v13 = v22;
        v6 = v20;
        v10 = v19;
        v8 = v21;
        v9 = this->m_AllDecals.m_Memory.m_pMemory;
        if ( v15->weight <= v17 )
          break;
      }
      v11 += 4LL;
      v12 = v14;
      if ( v11 == v10 )
        return v9[v12].precache_index;
    }
    v11 += 4LL;
  }
  while ( v11 != v19 );
  return v9[v12].precache_index;
}


// CDecalEmitterSystem::Init  (line 178, @0x00000000021ddcf0, libserver.so)
// calls: CDecalEmitterSystem::LoadDecalsFromScript
// strings: "scripts/decals_subrect.txt"
bool __fastcall CDecalEmitterSystem::Init(CDecalEmitterSystem *const this)
{
  CDecalEmitterSystem::LoadDecalsFromScript(this, "scripts/decals_subrect.txt");
  return 1;
}


// CDecalEmitterSystem::RebuildMappings  (line 187, @0x00000000021be040, libserver.so)  // inlines: CUtlSymbol, operator[]
// calls: CUtlSymbolTable::String
void __fastcall CDecalEmitterSystem::RebuildMappings(CDecalEmitterSystem *const this)
{
  int m_Size; // eax
  __int64 v3; // r14
  __int64 v4; // r13
  char *v5; // r13
  __int64 (__fastcall *v6)(IVEngineServer2 *, const char *, _QWORD); // r15
  const char *v7; // rax
  __int64 v8; // [rsp+10h] [rbp-50h]
  const CUtlSymbolTable *p_m_DecalFileNames; // [rsp+18h] [rbp-48h]
  __int16 v10; // [rsp+20h] [rbp-40h] BYREF

  m_Size = this->m_AllDecals.m_Size;
  if ( m_Size > 0 )
  {
    p_m_DecalFileNames = &this->m_DecalFileNames;
    v3 = 0;
    v8 = 4 * (3LL * (m_Size - 1) + 3);
    do
    {
      v4 = v3;
      v3 += 12;
      v5 = this->m_AllDecals.m_Memory.m_pMemory + v4;
      v6 = *(*engine + 184LL);
      v10 = *v5;
      v7 = CUtlSymbolTable::String(p_m_DecalFileNames, &v10);
      *(v5 + 1) = v6(engine, v7, 0);
    }
    while ( v3 != v8 );
  }
}


// CDecalEmitterSystem::LoadDecalsFromScript  (line 226, @0x00000000021dd7c0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlSymbol, CUtlVector, CUtlVectorBase, CopyConstruct<CDecalEmitterSystem::DecalListEntry>, CopyConstruct<int>, DecalEntry, DecalListEntry, Element, Find, GrowMemory, LeftChild, Node_t, Purge, RemoveAll, RightChild, V_isdigit, atoi, operator(), operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~DecalEntry, ~Node_t
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::GetNextKey, KeyValues::GetFirstSubKey, KeyValues::GetName, V_stricmp_fast, CUtlSymbolTable::AddString, KeyValues::GetFloat, CUtlMemory<CDecalEmitterSystem::DecalListEntry, int>::Grow, CUtlMemory<int, int>::Grow, CUtlDict<CDecalEmitterSystem::DecalEntry, int>::Insert (22 total)
// callers: CDecalEmitterSystem::Init
// strings: "TranslationData", "CDecalEmitterSystem::LoadDecalsFromScript:  Unable to load '%s'\n", "CDecalEmitterSystem::LoadDecalsFromScript:  Script '%s' missing section '%s'\n", "CDecalEmitterSystem::LoadDecalsFromScript:  Translation for game material type '%s' refer
void __fastcall CDecalEmitterSystem::LoadDecalsFromScript(CDecalEmitterSystem *const this, const char *filename)
{
  KeyValues *v4; // rbx
  IBaseFileSystem *v5; // rsi
  KeyValues *i; // rbx
  CDecalEmitterSystem::DecalListEntry *v7; // rax
  __int64 v8; // r14
  int v9; // eax
  int *v10; // rax
  const char *Name; // rax
  UtlSymId_t v12; // r14
  float v13; // xmm1_4
  float Float; // xmm0_4
  int m_Size; // r12d
  int v16; // eax
  KeyValues *FirstSubKey; // r14
  const char *String; // rax
  const char *v19; // rax
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,CDecalEmitterSystem::DecalEntry,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rdx
  unsigned __int64 v22; // rbx
  const char *v23; // rax
  char v24; // al
  const char *v25; // rbx
  const char *v26; // rax
  KeyValues *kv; // [rsp+10h] [rbp-B0h]
  KeyValues *translation; // [rsp+20h] [rbp-A0h]
  const char *keyname; // [rsp+28h] [rbp-98h]
  const KeyValues *p; // [rsp+48h] [rbp-78h]
  float pName; // [rsp+58h] [rbp-68h]
  char gm[16]; // [rsp+60h] [rbp-60h] BYREF
  CDecalEmitterSystem::DecalEntry entry; // [rsp+70h] [rbp-50h] BYREF
  int v35; // [rsp+88h] [rbp-38h]
  int v36; // [rsp+8Ch] [rbp-34h]

  v4 = KeyValues::operator new(0x14u);
  kv = v4;
  KeyValues::KeyValues(v4, filename);
  if ( v4 != 0 )
  {
    v5 = 0;
    if ( filesystem != 0 )
      v5 = &filesystem->IBaseFileSystem;
    if ( KeyValues::LoadFromFile(v4, v5, filename, 0, 0) )
    {
      p = v4;
      translation = 0;
      do
      {
        if ( KeyValues::GetFirstSubKey(p) != 0 )
        {
          keyname = KeyValues::GetName(p);
          if ( V_stricmp_fast(keyname, "TranslationData") != 0 )
          {
            entry.indices.m_Size = 0;
            entry.indices.m_Memory.m_pMemory = 0;
            entry.indices.m_Memory.m_nAllocationCount = 0;
            entry.indices.m_Memory.m_nGrowSize = 0;
            for ( i = KeyValues::GetFirstSubKey(p); i != 0; i = KeyValues::GetNextKey(i) )
            {
              Name = KeyValues::GetName(i);
              CUtlSymbolTable::AddString(&this->m_DecalFileNames, Name);
              v12 = *gm;
              Float = KeyValues::GetFloat(i, 0, v13);
              m_Size = this->m_AllDecals.m_Size;
              pName = Float;
              v16 = m_Size;
              if ( m_Size == this->m_AllDecals.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CDecalEmitterSystem::DecalListEntry,int>::Grow(&this->m_AllDecals.m_Memory, 1);
                v16 = this->m_AllDecals.m_Size;
              }
              this->m_AllDecals.m_Size = v16 + 1;
              v7 = &this->m_AllDecals.m_Memory.m_pMemory[m_Size];
              if ( v7 != 0 )
              {
                v7->name.m_Id = v12;
                v7->precache_index = -1;
                v7->weight = pName;
              }
              v8 = entry.indices.m_Size;
              v9 = entry.indices.m_Size;
              if ( entry.indices.m_Size == entry.indices.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<int,int>::Grow(&entry.indices.m_Memory, 1);
                v9 = entry.indices.m_Size;
              }
              entry.indices.m_Size = v9 + 1;
              v10 = &entry.indices.m_Memory.m_pMemory[v8];
              if ( v10 != 0 )
                *v10 = m_Size;
            }
            CUtlDict<CDecalEmitterSystem::DecalEntry,int>::Insert(&this->m_Decals, keyname, &entry);
            entry.indices.m_Size = 0;
            if ( (entry.indices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<int,int>::Purge(&entry.indices.m_Memory);
              if ( (entry.indices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<int,int>::Purge(&entry.indices.m_Memory);
            }
          }
          else
          {
            translation = p;
          }
        }
        p = KeyValues::GetNextKey(p);
      }
      while ( p != 0 );
      if ( translation != 0 )
      {
        FirstSubKey = KeyValues::GetFirstSubKey(translation);
        if ( FirstSubKey == 0 )
          goto LABEL_26;
        while ( 1 )
        {
          String = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
          if ( V_stricmp_fast(String, "") != 0 )
            break;
LABEL_31:
          FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
          if ( FirstSubKey == 0 )
            goto LABEL_26;
        }
        v19 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
        if ( v19 == 0 )
        {
          entry.indices.m_Size = -1;
LABEL_46:
          v25 = KeyValues::GetString(FirstSubKey, 0, "", 0, 0);
          v26 = KeyValues::GetName(FirstSubKey);
          Msg(
            "CDecalEmitterSystem::LoadDecalsFromScript:  Translation for game material type '%s' references unknown decal '%s'\n",
            v26,
            v25);
          goto LABEL_31;
        }
        m_Root = this->m_Decals.m_Elements.m_Tree.m_Root;
        LODWORD(entry.indices.m_Memory.m_pMemory) = 0;
        *&entry.indices.m_Memory.m_nAllocationCount = 0;
        v35 = 0;
        v36 = 0;
        *&entry.indices.m_Size = v19;
        if ( m_Root == -1 )
        {
          LODWORD(entry.indices.m_Memory.m_pMemory) = 0;
        }
        else
        {
          m_pMemory = this->m_Decals.m_Elements.m_Tree.m_Elements.m_pMemory;
          do
          {
            while ( 1 )
            {
              v22 = m_Root;
              if ( !this->m_Decals.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&entry, &m_pMemory[v22].m_Data) )
                break;
              m_pMemory = this->m_Decals.m_Elements.m_Tree.m_Elements.m_pMemory;
              m_Root = m_pMemory[m_Root].m_Left;
              if ( m_Root == -1 )
                goto LABEL_40;
            }
            if ( !this->m_Decals.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
                    &this->m_Decals.m_Elements.m_Tree.m_Elements.m_pMemory[v22].m_Data,
                    &entry) )
              break;
            m_pMemory = this->m_Decals.m_Elements.m_Tree.m_Elements.m_pMemory;
            m_Root = m_pMemory[v22].m_Right;
          }
          while ( m_Root != -1 );
LABEL_40:
          LODWORD(entry.indices.m_Memory.m_pMemory) = 0;
          if ( (v36 & 0xC0000000) != 0 )
          {
LABEL_41:
            entry.indices.m_Size = m_Root;
            if ( m_Root != -1 )
            {
              v23 = KeyValues::GetName(FirstSubKey);
              if ( (*v23 - 48) <= 9u )
                v24 = strtol(v23, 0, 10);
              else
                v24 = toupper(*v23);
              gm[0] = v24;
              gm[1] = 0;
              CUtlDict<int,int>::Insert(&this->m_GameMaterialTranslation, gm, &entry.indices.m_Size);
              goto LABEL_31;
            }
            goto LABEL_46;
          }
        }
        CUtlMemory<int,int>::Purge(&entry.indices.m_Memory.m_nAllocationCount);
        if ( (v36 & 0xC0000000) == 0 )
          CUtlMemory<int,int>::Purge(&entry.indices.m_Memory.m_nAllocationCount);
        goto LABEL_41;
      }
    }
    else
    {
      Msg("CDecalEmitterSystem::LoadDecalsFromScript:  Unable to load '%s'\n", filename);
    }
    Msg("CDecalEmitterSystem::LoadDecalsFromScript:  Script '%s' missing section '%s'\n", filename, "TranslationData");
LABEL_26:
    KeyValues::deleteThis(kv);
  }
}


// CDecalEmitterSystem::ImpactDecalForGameMaterial  (line 330, @0x00000000021c57b0, libserver.so)  // inlines: Element, Find, GetElementName, Key, LeftChild, RightChild, operator(), operator[]
// callers: CDecalEmitterSystem::TranslateDecalForGameMaterial
const char *__fastcall CDecalEmitterSystem::ImpactDecalForGameMaterial(
        CDecalEmitterSystem *const this,
        int gamematerial)
{
  unsigned __int64 m_Root; // rbx
  UtlRBTreeNode_t<CUtlMap<char const*,int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  unsigned __int64 v5; // rbx
  bool v6; // zf
  char gm[16]; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v9[6]; // [rsp+10h] [rbp-30h] BYREF

  gm[0] = gamematerial;
  m_Root = this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Root;
  gm[1] = 0;
  v9[0] = gm;
  if ( m_Root == -1 )
    return 0;
  m_pMemory = this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = m_Root;
      if ( !this->m_GameMaterialTranslation.m_Elements.m_Tree.m_LessFunc.m_LessFunc(v9, &m_pMemory[v5].m_Data) )
        break;
      m_pMemory = this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v5].m_Left;
      if ( m_Root == -1 )
        return 0;
    }
    v6 = !this->m_GameMaterialTranslation.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Elements.m_pMemory[v5].m_Data,
            v9);
    m_pMemory = this->m_GameMaterialTranslation.m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v6 )
      break;
    m_Root = m_pMemory[v5].m_Right;
    if ( m_Root == -1 )
      return 0;
  }
  return this->m_Decals.m_Elements.m_Tree.m_Elements.m_pMemory[m_pMemory[v5].m_Data.elem].m_Data.key;
}


// CDecalEmitterSystem::Shutdown  (line 346, @0x00000000021dd070, libserver.so)
// calls: CDecalEmitterSystem::Clear
void __fastcall CDecalEmitterSystem::Shutdown(CDecalEmitterSystem *const this)
{
  CDecalEmitterSystem::Clear(this);
}


// CDecalEmitterSystem::Clear  (line 354, @0x00000000021dd020, libserver.so)  // inlines: Purge, RemoveAll
// calls: CUtlSymbolTable::RemoveAll, CUtlDict<CDecalEmitterSystem::DecalEntry, int>::Purge, CUtlMemory<CDecalEmitterSystem::DecalListEntry, int>::Purge, CUtlDict<int, int>::Purge
// callers: CDecalEmitterSystem::Shutdown
void __fastcall CDecalEmitterSystem::Clear(CDecalEmitterSystem *const this)
{
  bool v2; // zf

  CUtlSymbolTable::RemoveAll(&this->m_DecalFileNames);
  CUtlDict<CDecalEmitterSystem::DecalEntry,int>::Purge(&this->m_Decals);
  v2 = (this->m_AllDecals.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AllDecals.m_Size = 0;
  if ( v2 )
    CUtlMemory<CDecalEmitterSystem::DecalListEntry,int>::Purge(&this->m_AllDecals.m_Memory);
  CUtlDict<int,int>::Purge(&this->m_GameMaterialTranslation);
}


// CDecalEmitterSystem::TranslateDecalForGameMaterial  (line 368, @0x00000000021c5890, libserver.so)
// calls: V_stricmp_fast, CDecalEmitterSystem::ImpactDecalForGameMaterial
// strings: "Impact.Concrete"
const char *__fastcall CDecalEmitterSystem::TranslateDecalForGameMaterial(
        CDecalEmitterSystem *const this,
        const char *decalName,
        unsigned __int8 gamematerial)
{
  const char *result; // rax

  result = decalName;
  if ( gamematerial != 67 )
  {
    if ( V_stricmp_fast(decalName, "Impact.Concrete") != 0 )
      return decalName;
    result = "";
    if ( gamematerial != 45 )
    {
      result = CDecalEmitterSystem::ImpactDecalForGameMaterial(this, gamematerial);
      if ( result == 0 )
        return decalName;
    }
  }
  return result;
}


