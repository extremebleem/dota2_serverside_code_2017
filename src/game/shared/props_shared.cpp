// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/props_shared.cpp:171
struct propdata_interaction_t {
	const char * pszSectionName;  // +0x0
	const char * pszKeyName;  // +0x8
	const char * pszValue;  // +0x10

	// sizeof = 24
};

// src/game/shared/props_shared.cpp:212
struct propdata_table_t {
	int m_nInteractionStart;  // +0x0
	int m_nInteractionCount;  // +0x4
	propdata_table_t();

	// sizeof = 12
};

// src/game/shared/props_shared.cpp:804
class CGameGibManager : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_bAllowNewGibs;  // +0x330

	int m_iCurrentMaxPieces;  // +0x334
	int m_iMaxPieces;  // +0x338
	int m_iLastFrame;  // +0x33c
	typedef CBaseEntity BaseClass;

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
	CGameGibManager(CGameGibManager &);
	CGameGibManager(CGameGibManager &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CGameGibManager();
	virtual void Activate(ActivateType_t);
	void AddGibToLRU(CBaseAnimating *);
	bool AllowedToSpawnGib();
	void UpdateMaxPieces();
	void InputSetMaxPieces(inputdata_t &);
	void InputSetMaxPiecesDX8(inputdata_t &);
	virtual ~CGameGibManager();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[10] Activate
	// sizeof = 832
};

// src/game/shared/props_shared.cpp:1479
class CBreakModelsPrecached : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	struct BreakModelInfo_t {
		uint32 m_nChildSpawnServerSideMask;  // +0x18
		bool m_bComputedChildSpawnMask;  // +0x1c
		bool m_bSpawnServerSide;  // +0x1d
		BreakModelInfo_t();
		~BreakModelInfo_t();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	typedef CAutoGameSystem BaseClass;

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CBreakModelsPrecached *);
	CBreakModelsPrecached();
	bool IsInList(const char *, int *, uint32 *);
	UtlSymId_t AddToList(HModel, const char *, const CUtlVector<breakmodel_t, CUtlMemory<breakmodel_t, int> > &);
	UtlSymId_t FindBreakModel(const char *);
	bool IsValidBreakModel(UtlSymId_t);
	void CopyBreakModels(UtlSymId_t, CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > &);

private:

	bool ComputeServerSideSpawn(HModel);
	void ComputeChildSpawnMask(UtlSymId_t);
	virtual ~CBreakModelsPrecached();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 128
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// AlignBoxes  (line 124, @0x000000000204f970, libserver.so)  // inlines: GetColumn, GreatestAxis, LargestComponent, MatrixGetColumn, MatrixRot90, MatrixSetColumn, SetColumn, operator-, operator[]
// callers: CreatePiecesFromPropData, CreateGibsFromList
void __fastcall AlignBoxes(matrix3x4_t *pInOutMatrix, const Vector *const boxExtents1, const Vector *const boxExtents2)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  Vector *p_y; // r8
  int v7; // esi
  Vector *p_z; // rdx
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  int v12; // eax
  int v13; // ecx
  vec_t x; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  int v19; // edx
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm3_4
  int v23; // eax
  __int64 v24; // rsi
  float *v25; // rdx
  float *v26; // rax
  float v27; // xmm0_4
  float v28; // xmm1_4
  int v29; // xmm6_4
  float v30; // xmm2_4
  float v31; // xmm4_4
  Vector ext1; // [rsp+0h] [rbp-30h] BYREF
  Vector ext2; // [rsp+10h] [rbp-20h] BYREF
  lambda rotations[2]; // [rsp+20h] [rbp-10h]

  ext1 = *boxExtents1;
  v3 = fabs(ext1.x);
  v4 = fabs(ext1.y);
  v5 = fabs(ext1.z);
  ext2 = *boxExtents2;
  if ( v3 <= v4 )
  {
    if ( v4 <= v5 )
      goto LABEL_3;
    p_y = &ext1.y;
    v7 = 1;
    p_z = &ext2.y;
  }
  else
  {
    if ( v3 <= v5 )
    {
LABEL_3:
      p_y = &ext1.z;
      v7 = 2;
      p_z = &ext2.z;
      goto LABEL_4;
    }
    p_y = &ext1;
    v7 = 0;
    p_z = &ext2;
  }
LABEL_4:
  v9 = fabs(ext2.x);
  v10 = fabs(ext2.y);
  v11 = fabs(ext2.z);
  if ( v9 <= v10 )
    v12 = (v10 <= v11) + 1;
  else
    v12 = 2 * (v9 <= v11);
  v13 = 0;
  if ( v7 != v12 )
  {
    x = p_z->x;
    rotations[0].axis1 = v12;
    rotations[0].axis0 = v7;
    LOBYTE(v13) = 1;
    *(&ext2.x + v12) = x;
  }
  p_y->x = 0.0;
  v15 = ext1.x;
  p_z->x = 0.0;
  v16 = fabs(v15);
  v17 = fabs(ext1.y);
  v18 = fabs(ext1.z);
  if ( v16 <= v17 )
    v19 = (v17 <= v18) + 1;
  else
    v19 = 2 * (v16 <= v18);
  v20 = fabs(ext2.x);
  v21 = fabs(ext2.y);
  v22 = fabs(ext2.z);
  if ( v20 <= v21 )
  {
    v23 = (v21 <= v22) + 1;
    if ( v19 != v23 )
      goto LABEL_12;
LABEL_16:
    if ( v13 == 0 )
      return;
    goto LABEL_13;
  }
  v23 = 2 * (v20 <= v22);
  if ( v19 == v23 )
    goto LABEL_16;
LABEL_12:
  v24 = v13++;
  rotations[v24].axis0 = v19;
  rotations[v24].axis1 = v23;
  do
  {
LABEL_13:
    v25 = (pInOutMatrix + 4 * rotations[--v13].axis0);
    v26 = (pInOutMatrix + 4 * rotations[v13].axis1);
    v27 = -v25[8];
    v28 = -v25[4];
    v29 = *(v26 + 4);
    v30 = -*v25;
    v31 = *v26;
    v25[8] = v26[8];
    *(v25 + 4) = v29;
    *v25 = v31;
    *v26 = v30;
    v26[4] = v28;
    v26[8] = v27;
  }
  while ( v13 != 0 );
}


// CPropData::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 168, @0x00000000020503c0, libserver.so)
void __cdecl CPropData::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// InitPropdataInteractions  (line 221, @0x00000000020503d0, libserver.so)
// calls: KeyValuesSystem
// callers: CPropData::ParsePropFromKV
// globals: g_nInteractionTableCount, sPropdataInteractionSections, g_nInteractionTable
void __cdecl InitPropdataInteractions()
{
  int v0; // r14d
  uint32 v1; // r12d
  propdata_interaction_t *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rax
  uint32 v5; // eax

  if ( g_nInteractionTableCount == 0 )
  {
    v0 = 0;
    v1 = 0;
    v2 = sPropdataInteractionSections;
    do
    {
      while ( 1 )
      {
        v4 = KeyValuesSystem();
        v5 = (*(*v4 + 16LL))(v4, v2->pszSectionName, 1);
        if ( v1 == v5 )
          break;
        v1 = v5;
        ++v2;
        v3 = 3LL * g_nInteractionTableCount++;
        v3 *= 4;
        *(&g_nInteractionTable[0].m_hSectionKey.nIndex + v3) = v5;
        *(&g_nInteractionTable[0].m_nInteractionStart + v3) = v0++;
        *(&g_nInteractionTable[0].m_nInteractionCount + v3) = 1;
        if ( v0 == 22 )
          return;
      }
      ++v0;
      ++v2;
      ++g_nInteractionTable[g_nInteractionTableCount - 1].m_nInteractionCount;
    }
    while ( v0 != 22 );
  }
}


// CPropData::CPropData  (line 252, @0x00000000020504b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CGameSystemReallocatingFactory<CPropData, CPropData>::CreateGameSystem
void __fastcall CPropData::CPropData(CPropData *const this)
{
  this->_vptr_IGameSystem = off_3FEAFB0;  // vptr: CPropData
  this->m_BreakableChunks.m_Size = 0;
  this->m_BreakableChunks.m_Memory.m_pMemory = 0;
  this->m_BreakableChunks.m_Memory.m_nAllocationCount = 0;
  this->m_BreakableChunks.m_Memory.m_nGrowSize = 0;
  this->m_bPropDataLoaded = 0;
  this->m_pKVPropData = 0;
}


// CPropData::GameInit  (line 261, @0x0000000002053090, libserver.so)
// calls: CPropData::ParsePropDataFile
void __fastcall CPropData::GameInit(CPropData *const this, const EventGameInit_t *const msg)
{
  CPropData::ParsePropDataFile(this);
}


// CPropData::GameShutdown  (line 270, @0x0000000002052d40, libserver.so)
// calls: KeyValues::~KeyValues, KeyValues::operator delete, CUtlVectorBase<CPropData::propdata_breakablechunk_t, CUtlMemory<CPropData::propdata_breakablechunk_t, int> >::RemoveAll
void __fastcall CPropData::GameShutdown(CPropData *const this, const EventGameShutdown_t *const msg)
{
  KeyValues *m_pKVPropData; // r12

  m_pKVPropData = this->m_pKVPropData;
  if ( m_pKVPropData != 0 )
  {
    KeyValues::~KeyValues(this->m_pKVPropData);
    KeyValues::operator delete(m_pKVPropData);
  }
  this->m_pKVPropData = 0;
  CUtlVectorBase<CPropData::propdata_breakablechunk_t,CUtlMemory<CPropData::propdata_breakablechunk_t,int>>::RemoveAll(&this->m_BreakableChunks);
}


// CPropData::BuildGameSessionManifest  (line 282, @0x0000000002050320, libserver.so)  // inlines: String, ToCStr, operator[]
// calls: CBaseEntity::PrecacheModel
void __fastcall CPropData::BuildGameSessionManifest(
        CPropData *const this,
        const EventBuildGameSessionManifest_t *const msg)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  CPropData::propdata_breakablechunk_t *m_pMemory; // rdx
  int v7; // eax
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  const char *v10; // rdi
  const char **v11; // rax
  __int64 v12; // [rsp+8h] [rbp-38h]

  m_Size = this->m_BreakableChunks.m_Size;
  if ( m_Size > 0 )
  {
    v5 = 0;
    v12 = 32 * ((m_Size - 1) + 1LL);
    do
    {
      m_pMemory = this->m_BreakableChunks.m_Memory.m_pMemory;
      v7 = m_pMemory[v5 / 0x20].iszChunkModels.m_Size;
      if ( v7 > 0 )
      {
        v8 = 0;
        v9 = 8LL * (v7 - 1) + 8;
        while ( 1 )
        {
          v10 = "";
          v11 = &m_pMemory[v5 / 0x20].iszChunkModels.m_Memory.m_pMemory[v8 / 8];
          if ( *v11 != 0 )
            v10 = *v11;
          v8 += 8LL;
          CBaseEntity::PrecacheModel(v10, msg->m_pResourceManifest);
          if ( v8 == v9 )
            break;
          m_pMemory = this->m_BreakableChunks.m_Memory.m_pMemory;
        }
      }
      v5 += 32LL;
    }
    while ( v5 != v12 );
  }
}


// CPropData::ParsePropDataFile  (line 300, @0x0000000002052e60, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CPropData::propdata_breakablechunk_t>, CopyConstruct<CUtlSymbolLarge>, Element, GrowMemory, operator=, operator[], propdata_breakablechunk_t
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::~KeyValues, KeyValues::operator delete, KeyValues::FindKey, KeyValues::GetFirstSubKey, KeyValues::GetName, AllocPooledString, KeyValues::GetNextKey, CUtlMemory<CUtlSymbolLarge, int>::Grow, CUtlMemory<CPropData::propdata_breakablechunk_t, int>::Grow (13 total)
// callers: CPropData::GameInit
// strings: "PropDatafile", "scripts/propdata.txt", "BreakableModels"
void __fastcall CPropData::ParsePropDataFile(CPropData *const this)
{
  KeyValues *v2; // rbx
  IBaseFileSystem *v3; // rsi
  KeyValues *v4; // rbx
  KeyValues *m_pKVPropData; // rdi
  KeyValues *Key; // rax
  KeyValues *FirstSubKey; // r13
  int m_Size; // r14d
  int v9; // eax
  __int64 v10; // rax
  CPropData::propdata_breakablechunk_t *v11; // r14
  __int64 v12; // rax
  CPropData::propdata_breakablechunk_t *v13; // rcx
  const char *Name; // rax
  KeyValues *i; // r15
  CUtlSymbolLarge *v16; // rax
  const char *v17; // rax
  __int64 v18; // rax
  int v19; // esi
  int v20; // [rsp+1Ch] [rbp-44h]
  string_t pooledName; // [rsp+20h] [rbp-40h]

  v2 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v2, "PropDatafile");
  v3 = 0;
  this->m_pKVPropData = v2;
  if ( filesystem != 0 )
    v3 = &filesystem->IBaseFileSystem;
  if ( KeyValues::LoadFromFile(v2, v3, "scripts/propdata.txt", 0, 0) )
  {
    m_pKVPropData = this->m_pKVPropData;
    this->m_bPropDataLoaded = 1;
    Key = KeyValues::FindKey(m_pKVPropData, "BreakableModels", 0);
    if ( Key != 0 )
    {
      FirstSubKey = KeyValues::GetFirstSubKey(Key);
      if ( FirstSubKey != 0 )
      {
        m_Size = this->m_BreakableChunks.m_Size;
        v9 = m_Size;
        if ( m_Size == this->m_BreakableChunks.m_Memory.m_nAllocationCount )
          goto LABEL_22;
        while ( 1 )
        {
          this->m_BreakableChunks.m_Size = v9 + 1;
          v10 = m_Size;
          v11 = 0;
          v12 = v10;
          v13 = &this->m_BreakableChunks.m_Memory.m_pMemory[v12];
          if ( v13 != 0 )
          {
            v13->iszChunkType.u.m_Id = 0;
            v13->iszChunkModels.m_Size = 0;
            v13->iszChunkModels.m_Memory.m_pMemory = 0;
            v13->iszChunkModels.m_Memory.m_nAllocationCount = 0;
            v13->iszChunkModels.m_Memory.m_nGrowSize = 0;
            v11 = &this->m_BreakableChunks.m_Memory.m_pMemory[v12];
          }
          Name = KeyValues::GetName(FirstSubKey);
          AllocPooledString(Name);
          v11->iszChunkType = pooledName;
          for ( i = KeyValues::GetFirstSubKey(FirstSubKey); i != 0; i = KeyValues::GetNextKey(i) )
          {
            v17 = KeyValues::GetName(i);
            AllocPooledString(v17);
            v18 = v11->iszChunkModels.m_Size;
            v19 = v11->iszChunkModels.m_Size;
            if ( v18 == v11->iszChunkModels.m_Memory.m_nAllocationCount )
            {
              v20 = v11->iszChunkModels.m_Size;
              CUtlMemory<CUtlSymbolLarge,int>::Grow(&v11->iszChunkModels.m_Memory, 1);
              v19 = v11->iszChunkModels.m_Size;
              v18 = v20;
            }
            v11->iszChunkModels.m_Size = v19 + 1;
            v16 = &v11->iszChunkModels.m_Memory.m_pMemory[v18];
            if ( v16 != 0 )
              v16->u.m_Id = pooledName.u.m_Id;
          }
          FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
          if ( FirstSubKey == 0 )
            break;
          m_Size = this->m_BreakableChunks.m_Size;
          v9 = m_Size;
          if ( m_Size == this->m_BreakableChunks.m_Memory.m_nAllocationCount )
          {
LABEL_22:
            CUtlMemory<CPropData::propdata_breakablechunk_t,int>::Grow(&this->m_BreakableChunks.m_Memory, 1);
            v9 = this->m_BreakableChunks.m_Size;
          }
        }
      }
    }
  }
  else
  {
    v4 = this->m_pKVPropData;
    if ( v4 != 0 )
    {
      KeyValues::~KeyValues(this->m_pKVPropData);
      KeyValues::operator delete(v4);
    }
    this->m_pKVPropData = 0;
  }
}


// CPropData::ParsePropFromKV  (line 349, @0x0000000002050630, libserver.so)  // inlines: AddSpawnFlags, CUtlSymbolLarge, CollisionSize, FStrEq, GetFloat, GetInt, GetString, NetworkStateChanged, OBBSize, RemoveSpawnFlags, Set, SetEFlags, SmallestAxis, String, ToCStr, VectorSubtract, _V_strcmp, operator&=<int>, operator(), operator-, operator|=<int>
// calls: KeyValues::FindKey, CKeyValues_Data::Internal_GetString, CKeyValues_Data::Internal_GetFloat, CKeyValues_Data::Internal_GetInt, __cxa_guard_acquire, floor, InitPropdataInteractions, KeyValues::GetString, V_stricmp_fast, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName (22 total)
// callers: CPropData::ParsePropFromBase, CBaseProp::ParsePropData
// strings: "allowstatic", "damage_table", "breakable_model", "AIWalkable", "breakable_skin", "dmg.fire" (19 total)
// globals: `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#1}::operator() const(c, CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#1}::operator() const(char const*)::s_sym, `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#2}::operator() const(c, CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#2}::operator() const(char const*)::s_sym, `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#3}::operator() const(c, CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#3}::operator() const(char const*)::s_sym, `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#4}::operator() const(c, CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#4}::operator() const(char const*)::s_sym (40 total)
int __fastcall CPropData::ParsePropFromKV(
        CPropData *const this,
        CBaseEntity *pProp,
        IBreakableWithPropData *pBreakableInterface,
        KeyValues *pSection,
        KeyValues *pInteractionSection,
        bool bIsOverrideProp)
{
  KeyValues *Key; // rax
  const char *String; // rax
  KeyValues *v10; // rax
  int Float; // eax
  KeyValues *v12; // rax
  int v13; // eax
  KeyValues *v14; // rax
  const char *v15; // r12
  void (__fastcall *v16)(IBreakableWithPropData *, Vector *); // rax
  unsigned int Int; // r12d
  KeyValues *v18; // rax
  KeyValues *v19; // rax
  const char *v20; // rax
  __int64 v21; // rsi
  int (*v22)(...); // r12
  __m128i v23; // xmm0
  unsigned int v24; // r14d
  KeyValues *v25; // rax
  double v26; // xmm0_8
  void (__fastcall *v27)(IBreakableWithPropData *, double); // r12
  __m128i v28; // xmm0
  unsigned int v29; // r14d
  KeyValues *v30; // rax
  double v31; // xmm0_8
  void (__fastcall *v32)(IBreakableWithPropData *, double); // r12
  __m128i v33; // xmm0
  unsigned int v34; // r14d
  KeyValues *v35; // rax
  double v36; // xmm0_8
  void (__fastcall *v37)(IBreakableWithPropData *, double); // r12
  __m128i v38; // xmm0
  unsigned int v39; // r14d
  KeyValues *v40; // rax
  double v41; // xmm0_8
  KeyValues *v42; // rax
  const char *v43; // r12
  void (__fastcall *v44)(IBreakableWithPropData *, Vector *); // rax
  void (__fastcall *v45)(IBreakableWithPropData *, __int64); // r12
  unsigned int v46; // r13d
  KeyValues *v47; // rax
  __int64 v48; // rsi
  void (__fastcall *v49)(IBreakableWithPropData *, __int64); // r12
  unsigned int v50; // r13d
  KeyValues *v51; // rax
  __int64 v52; // rsi
  CCollisionProperty *m_pCollision; // rax
  float y; // xmm0_4
  float z; // xmm2_4
  float x; // xmm1_4
  Vector *p_y; // rax
  int *p_m_nInteractionCount; // r14
  double v59; // xmm0_8
  int v60; // ebx
  int *v61; // r15
  unsigned int v62; // r13d
  propdata_interaction_t *v63; // r14
  const char *v64; // rax
  KeyValues *v65; // rax
  KeyValues *j; // rbx
  const char *Name; // r12
  const char *v68; // rax
  void (__fastcall *v69)(CBaseEntity *, char *); // r14
  char *v70; // rax
  KeyValues *v71; // rax
  int result; // eax
  KeyValues *v73; // rax
  KeyValues *v74; // rax
  void (__fastcall *v75)(IBreakableWithPropData *, Vector *); // r14
  void (__fastcall *v76)(IBreakableWithPropData *, Vector *); // r13
  __int64 v77; // rax
  void (__fastcall *v78)(CBaseEntity *, _QWORD); // r12
  int Health; // r13d
  KeyValues *v80; // rax
  unsigned int v81; // eax
  KeyValues *v82; // rax
  const char *v83; // rax
  void (__fastcall *v84)(IBreakableWithPropData *, double); // r12
  __m128i v85; // xmm0
  unsigned int v86; // r13d
  KeyValues *v87; // rax
  double v88; // xmm0_8
  void (__fastcall *v89)(IBreakableWithPropData *, double); // r12
  __m128i v90; // xmm0
  unsigned int v91; // r13d
  KeyValues *v92; // rax
  double v93; // xmm0_8
  unsigned int v94; // r12d
  unsigned int v95; // r12d
  int iBaseResult; // [rsp+20h] [rbp-50h]
  int i; // [rsp+24h] [rbp-4Ch]
  KeyValues *pkvCurrentInter; // [rsp+28h] [rbp-48h]
  Vector vecSize; // [rsp+30h] [rbp-40h] BYREF

  if ( pBreakableInterface == 0 )
    return 3;
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
      "base");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  }
  Key = KeyValues::FindKey(
          pSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
  if ( Key != 0 )
  {
    String = CKeyValues_Data::Internal_GetString(Key, "", 0, 0);
    if ( String == 0 || *String == 0 )
      goto LABEL_6;
  }
  else
  {
    String = "";
    if ( asc_32DB004[2] == 0 )
    {
LABEL_6:
      iBaseResult = 0;
      goto LABEL_7;
    }
  }
  result = CPropData::ParsePropFromBase(this, pProp, pBreakableInterface, String, bIsOverrideProp);
  iBaseResult = result;
  if ( result > 1 )
    return result;
LABEL_7:
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#2}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#2}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#2}::operator() const(char const*)::s_sym,
      "blockLOS");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#2}::operator() const(char const*)::s_sym);
  }
  v10 = KeyValues::FindKey(
          pSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#2}::operator() const(char const*)::s_sym);
  if ( v10 != 0 )
  {
    Float = CKeyValues_Data::Internal_GetFloat(v10);
    if ( Float != -1 )
      (*(pBreakableInterface->_vptr_IBreakableWithPropData + 22))(pBreakableInterface, Float != 0);
  }
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#3}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#3}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#3}::operator() const(char const*)::s_sym,
      "AIWalkable");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#3}::operator() const(char const*)::s_sym);
  }
  v12 = KeyValues::FindKey(
          pSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#3}::operator() const(char const*)::s_sym);
  if ( v12 != 0 )
  {
    v13 = CKeyValues_Data::Internal_GetFloat(v12);
    if ( v13 != -1 )
      (*(pBreakableInterface->_vptr_IBreakableWithPropData + 23))(pBreakableInterface, v13 != 0);
  }
  (*(pBreakableInterface->_vptr_IBreakableWithPropData + 13))(&vecSize);
  if ( *&vecSize.x != 0 )
  {
    v15 = "";
    (*(pBreakableInterface->_vptr_IBreakableWithPropData + 13))(&vecSize);
    if ( *&vecSize.x != 0 )
      v15 = *&vecSize.x;
    if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#5}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#5}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#5}::operator() const(char const*)::s_sym,
        "damage_table");
      __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#5}::operator() const(char const*)::s_sym);
    }
    v74 = KeyValues::FindKey(
            pSection,
            CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#5}::operator() const(char const*)::s_sym);
    if ( v74 != 0 )
      v15 = CKeyValues_Data::Internal_GetString(v74, v15, 0, 0);
  }
  else
  {
    if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#4}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#4}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#4}::operator() const(char const*)::s_sym,
        "damage_table");
      __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#4}::operator() const(char const*)::s_sym);
    }
    v14 = KeyValues::FindKey(
            pSection,
            CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#4}::operator() const(char const*)::s_sym);
    if ( v14 == 0 )
      goto LABEL_21;
    v15 = CKeyValues_Data::Internal_GetString(v14, 0, 0, 0);
  }
  if ( v15 != 0 && *v15 != 0 )
  {
    v75 = *(pBreakableInterface->_vptr_IBreakableWithPropData + 12);
    AllocPooledString(v15);
    v75(pBreakableInterface, &vecSize);
    goto LABEL_22;
  }
LABEL_21:
  v16 = *(pBreakableInterface->_vptr_IBreakableWithPropData + 12);
  *&vecSize.x = 0;
  v16(pBreakableInterface, &vecSize);
LABEL_22:
  Int = (*(pBreakableInterface->_vptr_IBreakableWithPropData + 27))(pBreakableInterface);
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#6}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#6}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#6}::operator() const(char const*)::s_sym,
      "physicsmode");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#6}::operator() const(char const*)::s_sym);
  }
  v18 = KeyValues::FindKey(
          pSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#6}::operator() const(char const*)::s_sym);
  if ( v18 != 0 )
    Int = CKeyValues_Data::Internal_GetInt(v18);
  if ( Int == 3 )
    Int = 0;
  (*(pBreakableInterface->_vptr_IBreakableWithPropData + 26))(pBreakableInterface, Int);
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#7}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#7}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#7}::operator() const(char const*)::s_sym,
      "multiplayer_break");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#7}::operator() const(char const*)::s_sym);
  }
  v19 = KeyValues::FindKey(
          pSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#7}::operator() const(char const*)::s_sym);
  if ( v19 != 0 )
  {
    v20 = CKeyValues_Data::Internal_GetString(v19, 0, 0, 0);
    if ( v20 != 0 )
    {
      if ( v20 == "server" )
      {
        v21 = 1;
      }
      else
      {
        v21 = 1;
        if ( strcmp(v20, "server") != 0 )
        {
          if ( v20 == "client" )
          {
            v21 = 2;
          }
          else
          {
            v21 = 2;
            if ( strcmp(v20, "client") != 0 )
            {
              if ( v20 == "both" )
                v21 = 3;
              else
                v21 = strcmp(v20, "both") == 0 ? 3 : 0;
            }
          }
        }
      }
      (*(pBreakableInterface->_vptr_IBreakableWithPropData + 28))(pBreakableInterface, v21);
    }
  }
  v22 = *pBreakableInterface->_vptr_IBreakableWithPropData;
  *v23.m128i_i64 = (*(pBreakableInterface->_vptr_IBreakableWithPropData + 4))(pBreakableInterface);
  v24 = _mm_cvtsi128_si32(v23);
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#8}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#8}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#8}::operator() const(char const*)::s_sym,
      "dmg.bullets");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#8}::operator() const(char const*)::s_sym);
  }
  v25 = KeyValues::FindKey(
          pSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#8}::operator() const(char const*)::s_sym);
  *&v26 = _mm_cvtsi32_si128(v24).m128i_u64[0];
  if ( v25 != 0 )
    *&v26 = CKeyValues_Data::Internal_GetFloat(v25);
  v22(pBreakableInterface, v26);
  v27 = *(pBreakableInterface->_vptr_IBreakableWithPropData + 1);
  *v28.m128i_i64 = (*(pBreakableInterface->_vptr_IBreakableWithPropData + 5))(pBreakableInterface);
  v29 = _mm_cvtsi128_si32(v28);
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#9}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#9}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#9}::operator() const(char const*)::s_sym,
      "dmg.club");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#9}::operator() const(char const*)::s_sym);
  }
  v30 = KeyValues::FindKey(
          pSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#9}::operator() const(char const*)::s_sym);
  *&v31 = _mm_cvtsi32_si128(v29).m128i_u64[0];
  if ( v30 != 0 )
    *&v31 = CKeyValues_Data::Internal_GetFloat(v30);
  v27(pBreakableInterface, v31);
  v32 = *(pBreakableInterface->_vptr_IBreakableWithPropData + 2);
  *v33.m128i_i64 = (*(pBreakableInterface->_vptr_IBreakableWithPropData + 6))(pBreakableInterface);
  v34 = _mm_cvtsi128_si32(v33);
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#10}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#10}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#10}::operator() const(char const*)::s_sym,
      "dmg.explosive");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#10}::operator() const(char const*)::s_sym);
  }
  v35 = KeyValues::FindKey(
          pSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#10}::operator() const(char const*)::s_sym);
  *&v36 = _mm_cvtsi32_si128(v34).m128i_u64[0];
  if ( v35 != 0 )
    *&v36 = CKeyValues_Data::Internal_GetFloat(v35);
  v32(pBreakableInterface, v36);
  v37 = *(pBreakableInterface->_vptr_IBreakableWithPropData + 3);
  *v38.m128i_i64 = (*(pBreakableInterface->_vptr_IBreakableWithPropData + 7))(pBreakableInterface);
  v39 = _mm_cvtsi128_si32(v38);
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#11}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#11}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#11}::operator() const(char const*)::s_sym,
      "dmg.fire");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#11}::operator() const(char const*)::s_sym);
  }
  v40 = KeyValues::FindKey(
          pSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#11}::operator() const(char const*)::s_sym);
  *&v41 = _mm_cvtsi32_si128(v39).m128i_u64[0];
  if ( v40 != 0 )
    *&v41 = CKeyValues_Data::Internal_GetFloat(v40);
  v37(pBreakableInterface, v41);
  if ( !bIsOverrideProp )
  {
    v78 = *(pProp->_vptr_IHandleEntity + 157);
    Health = CBaseEntity::GetHealth(pProp);
    if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#12}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#12}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#12}::operator() const(char const*)::s_sym,
        "health");
      __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#12}::operator() const(char const*)::s_sym);
    }
    v80 = KeyValues::FindKey(
            pSection,
            CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#12}::operator() const(char const*)::s_sym);
    if ( v80 != 0 )
      v81 = CKeyValues_Data::Internal_GetInt(v80);
    else
      v81 = Health;
    v78(pProp, v81);
    if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#13}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#13}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#13}::operator() const(char const*)::s_sym,
        "explosion_type");
      __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#13}::operator() const(char const*)::s_sym);
    }
    v82 = KeyValues::FindKey(
            pSection,
            CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#13}::operator() const(char const*)::s_sym);
    if ( v82 != 0 )
    {
      v83 = CKeyValues_Data::Internal_GetString(v82, 0, 0, 0);
      if ( v83 != 0
        && (v83 == "grenade"
         || strcmp(v83, "grenade") == 0
         || v83 == "molotov"
         || strcmp(v83, "molotov") == 0
         || v83 == "fireworks"
         || strcmp(v83, "fireworks") == 0) )
      {
        pProp->m_iEFlags = 0x80000000;
      }
    }
    v84 = *(pBreakableInterface->_vptr_IBreakableWithPropData + 9);
    *v85.m128i_i64 = (*(pBreakableInterface->_vptr_IBreakableWithPropData + 11))(pBreakableInterface);
    v86 = _mm_cvtsi128_si32(v85);
    if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#14}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#14}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#14}::operator() const(char const*)::s_sym,
        "explosive_damage");
      __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#14}::operator() const(char const*)::s_sym);
    }
    v87 = KeyValues::FindKey(
            pSection,
            CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#14}::operator() const(char const*)::s_sym);
    *&v88 = _mm_cvtsi32_si128(v86).m128i_u64[0];
    if ( v87 != 0 )
      *&v88 = CKeyValues_Data::Internal_GetFloat(v87);
    v84(pBreakableInterface, v88);
    v89 = *(pBreakableInterface->_vptr_IBreakableWithPropData + 8);
    *v90.m128i_i64 = (*(pBreakableInterface->_vptr_IBreakableWithPropData + 10))(pBreakableInterface);
    v91 = _mm_cvtsi128_si32(v90);
    if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#15}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#15}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#15}::operator() const(char const*)::s_sym,
        "explosive_radius");
      __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#15}::operator() const(char const*)::s_sym);
    }
    v92 = KeyValues::FindKey(
            pSection,
            CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#15}::operator() const(char const*)::s_sym);
    *&v93 = _mm_cvtsi32_si128(v91).m128i_u64[0];
    if ( v92 != 0 )
      *&v93 = CKeyValues_Data::Internal_GetFloat(v92);
    v89(pBreakableInterface, v93);
    if ( CBaseEntity::GetHealth(pProp) != 0 )
    {
      v95 = pProp->m_spawnflags.m_Value & 0xFFFFFFFD;
      if ( pProp->m_spawnflags.m_Value != v95 )
      {
        (*(pProp->_vptr_IHandleEntity + 22))(pProp, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        pProp->m_spawnflags.m_Value = v95;
      }
    }
    if ( KeyValues::GetInt(pSection, "glow", 0) != 0 )
    {
      v94 = pProp->m_spawnflags.m_Value | 0x8000;
      if ( pProp->m_spawnflags.m_Value != v94 )
      {
        (*(pProp->_vptr_IHandleEntity + 22))(pProp, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        pProp->m_spawnflags.m_Value = v94;
      }
    }
  }
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::hBreakable_model == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::hBreakable_model) != 0 )
  {
    v77 = KeyValuesSystem();
    CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::hBreakable_model.nIndex = (*(*v77 + 16LL))(v77, "breakable_model", 1);
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::hBreakable_model);
  }
  (*(pBreakableInterface->_vptr_IBreakableWithPropData + 15))(&vecSize);
  if ( *&vecSize.x != 0 )
  {
    v43 = "";
    (*(pBreakableInterface->_vptr_IBreakableWithPropData + 15))(&vecSize);
    if ( *&vecSize.x != 0 )
      v43 = *&vecSize.x;
    v73 = KeyValues::FindKey(
            pSection,
            CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::hBreakable_model);
    if ( v73 != 0 )
      v43 = CKeyValues_Data::Internal_GetString(v73, v43, 0, 0);
  }
  else
  {
    v42 = KeyValues::FindKey(
            pSection,
            CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::hBreakable_model);
    if ( v42 == 0 )
      goto LABEL_58;
    v43 = CKeyValues_Data::Internal_GetString(v42, 0, 0, 0);
  }
  if ( v43 != 0 && *v43 != 0 )
  {
    v76 = *(pBreakableInterface->_vptr_IBreakableWithPropData + 14);
    AllocPooledString(v43);
    v76(pBreakableInterface, &vecSize);
    goto LABEL_59;
  }
LABEL_58:
  v44 = *(pBreakableInterface->_vptr_IBreakableWithPropData + 14);
  *&vecSize.x = 0;
  v44(pBreakableInterface, &vecSize);
LABEL_59:
  v45 = *(pBreakableInterface->_vptr_IBreakableWithPropData + 16);
  v46 = (*(pBreakableInterface->_vptr_IBreakableWithPropData + 17))(pBreakableInterface);
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#16}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#16}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#16}::operator() const(char const*)::s_sym,
      "breakable_skin");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#16}::operator() const(char const*)::s_sym);
  }
  v47 = KeyValues::FindKey(
          pSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#16}::operator() const(char const*)::s_sym);
  v48 = v46;
  if ( v47 != 0 )
    v48 = CKeyValues_Data::Internal_GetInt(v47);
  v45(pBreakableInterface, v48);
  v49 = *(pBreakableInterface->_vptr_IBreakableWithPropData + 18);
  v50 = (*(pBreakableInterface->_vptr_IBreakableWithPropData + 19))(pBreakableInterface);
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#17}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#17}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#17}::operator() const(char const*)::s_sym,
      "breakable_count");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#17}::operator() const(char const*)::s_sym);
  }
  v51 = KeyValues::FindKey(
          pSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#17}::operator() const(char const*)::s_sym);
  v52 = v50;
  if ( v51 != 0 )
    v52 = CKeyValues_Data::Internal_GetInt(v51);
  v49(pBreakableInterface, v52);
  m_pCollision = pProp->m_pCollision;
  if ( m_pCollision != 0 )
  {
    y = m_pCollision->m_vecMaxs.m_Value.y - m_pCollision->m_vecMins.m_Value.y;
    z = m_pCollision->m_vecMaxs.m_Value.z - m_pCollision->m_vecMins.m_Value.z;
    x = m_pCollision->m_vecMaxs.m_Value.x - m_pCollision->m_vecMins.m_Value.x;
  }
  else
  {
    z = vec3_origin.z;
    y = vec3_origin.y;
    x = vec3_origin.x;
  }
  vecSize.x = x;
  vecSize.y = y;
  vecSize.z = z;
  if ( y <= x )
  {
    p_y = &vecSize.y;
    if ( z > y )
      goto LABEL_69;
LABEL_97:
    p_y = &vecSize.z;
    goto LABEL_69;
  }
  p_y = &vecSize;
  if ( z <= x )
    goto LABEL_97;
LABEL_69:
  p_y->x = 1.0;
  p_m_nInteractionCount = &g_nInteractionTable[0].m_nInteractionCount;
  v59 = floor(((vecSize.x * vecSize.y) * vecSize.z) * 0.0009765625);
  (*(pBreakableInterface->_vptr_IBreakableWithPropData + 20))(pBreakableInterface, v59);
  InitPropdataInteractions();
  for ( i = 0; g_nInteractionTableCount > i; p_m_nInteractionCount += 3 )
  {
    pkvCurrentInter = KeyValues::FindKey(pInteractionSection, g_nInteractionTable[i].m_hSectionKey);
    if ( pkvCurrentInter != 0 && *p_m_nInteractionCount > 0 )
    {
      v60 = 0;
      v61 = p_m_nInteractionCount;
      do
      {
        while ( 1 )
        {
          v62 = v60 + *(v61 - 1);
          v63 = &sPropdataInteractionSections[v62];
          if ( v63->pszSectionName != 0 )
          {
            v64 = KeyValues::GetString(pkvCurrentInter, v63->pszKeyName, "", 0, 0);
            if ( v64 != 0 && *v64 != 0 && V_stricmp_fast(v64, v63->pszValue) == 0 )
              break;
          }
          if ( *v61 <= ++v60 )
            goto LABEL_79;
        }
        ++v60;
        (*(pBreakableInterface->_vptr_IBreakableWithPropData + 24))(pBreakableInterface, v62);
      }
      while ( *v61 > v60 );
LABEL_79:
      p_m_nInteractionCount = v61;
    }
    ++i;
  }
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#18}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#18}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#18}::operator() const(char const*)::s_sym,
      "prop_contexts");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#18}::operator() const(char const*)::s_sym);
  }
  v65 = KeyValues::FindKey(
          pInteractionSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#18}::operator() const(char const*)::s_sym);
  if ( v65 != 0 )
  {
    for ( j = KeyValues::GetFirstSubKey(v65); j != 0; j = KeyValues::GetNextKey(j) )
    {
      while ( 1 )
      {
        Name = KeyValues::GetName(j);
        v68 = KeyValues::GetString(j, 0, "", 0, 0);
        if ( v68 != 0 && Name != 0 )
          break;
        j = KeyValues::GetNextKey(j);
        if ( j == 0 )
          goto LABEL_89;
      }
      v69 = *(pProp->_vptr_IHandleEntity + 81);
      v70 = UTIL_VarArgs("%s:%s", Name, v68);
      v69(pProp, v70);
    }
  }
LABEL_89:
  if ( iBaseResult == 1 )
    return 1;
  if ( `guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#19}::operator() const(char const*)::s_sym == 0
    && __cxa_guard_acquire(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#19}::operator() const(char const*)::s_sym) != 0 )
  {
    CKeySymbol::CKeySymbol(
      &CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#19}::operator() const(char const*)::s_sym,
      "allowstatic");
    __cxa_guard_release(&`guard variable for'CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#19}::operator() const(char const*)::s_sym);
  }
  v71 = KeyValues::FindKey(
          pSection,
          CPropData::ParsePropFromKV(CBaseEntity *,IBreakableWithPropData *,KeyValues *,KeyValues *,bool)::{lambda(char const*)#19}::operator() const(char const*)::s_sym);
  return v71 != 0 && CKeyValues_Data::Internal_GetInt(v71) != 0;
}


// CPropData::ParsePropFromBase  (line 595, @0x00000000020504f0, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String, ToCStr
// calls: KeyValues::FindKey, CPropData::ParsePropFromKV, CBaseEntity::GetModelName, Warning, AllocPooledString
// callers: CPropData::ParsePropFromKV, CBreakable::ParsePropData
// strings: "%s '%s' has a base specified as '%s', but there is no matching entry in propdata.txt.\n"
int __fastcall CPropData::ParsePropFromBase(
        CPropData *const this,
        CBaseEntity *pProp,
        IBreakableWithPropData *pBreakableInterface,
        const char *pszPropData,
        bool bIsOverrideProp)
{
  int result; // eax
  KeyValues *m_pKVPropData; // rdi
  KeyValues *Key; // rax
  const char *v11; // rcx
  KeyValues *v12; // r15
  bool v13; // r8
  CEntityIdentity *m_pEntity; // rax
  const char *v15; // rdx
  const char *m_pAsString; // rsi
  const char *v17; // rsi
  bool pszPropDatab; // [rsp+0h] [rbp-50h]
  char *pStringa; // [rsp+8h] [rbp-48h]
  char *pStringb; // [rsp+8h] [rbp-48h]
  _QWORD v23[8]; // [rsp+10h] [rbp-40h] BYREF

  result = 2;
  if ( this->m_bPropDataLoaded )
  {
    LOBYTE(result) = 3;
    if ( pBreakableInterface != 0 )
    {
      m_pKVPropData = this->m_pKVPropData;
      if ( m_pKVPropData != 0 )
      {
        Key = KeyValues::FindKey(m_pKVPropData, pszPropData, 0);
        v11 = pszPropData;
        v12 = Key;
        if ( Key != 0 )
        {
          pszPropDatab = bIsOverrideProp;
          pStringa = v11;
          (*(pBreakableInterface->_vptr_IBreakableWithPropData + 31))(v23, pBreakableInterface);
          v13 = pszPropDatab;
          if ( v23[0] == 0 )
          {
            v17 = pStringa;
            pStringb = *(pBreakableInterface->_vptr_IBreakableWithPropData + 30);
            AllocPooledString(v17);
            (pStringb)(pBreakableInterface, v23);
            v13 = pszPropDatab;
          }
          return CPropData::ParsePropFromKV(this, pProp, pBreakableInterface, v12, v12, v13);
        }
        else
        {
          CBaseEntity::GetModelName(v23, pProp);
          m_pEntity = pProp->m_pEntity;
          v15 = "";
          m_pAsString = "";
          if ( v23[0] != 0 )
            v15 = v23[0];
          if ( m_pEntity->m_designerName.u.m_Id != 0 )
            m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
          Warning(
            "%s '%s' has a base specified as '%s', but there is no matching entry in propdata.txt.\n",
            m_pAsString,
            v15,
            pszPropData);
          return 3;
        }
      }
    }
  }
  return result;
}


// CPropData::GetPropValueFromBase  (line 627, @0x0000000002051790, libserver.so)
// calls: KeyValues::FindKey, KeyValues::GetString, KeyValues::GetInt
// callers: CBreakModelsPrecached::ComputeServerSideSpawn
int __fastcall CPropData::GetPropValueFromBase(
        CPropData *const this,
        const char *pBase,
        const char *pValue,
        int nDefaultVal)
{
  KeyValues *m_pKVPropData; // rdi
  KeyValues *Key; // rax
  KeyValues *v10; // r14
  const char *String; // rax
  int PropValueFromBase; // eax

  if ( !this->m_bPropDataLoaded )
    return nDefaultVal;
  m_pKVPropData = this->m_pKVPropData;
  if ( m_pKVPropData == 0 )
    return nDefaultVal;
  if ( pBase == 0 )
    return nDefaultVal;
  if ( *pBase == 0 )
    return nDefaultVal;
  Key = KeyValues::FindKey(m_pKVPropData, pBase, 0);
  v10 = Key;
  if ( Key == 0 )
    return nDefaultVal;
  String = KeyValues::GetString(Key, "base", 0, 0, 0);
  PropValueFromBase = CPropData::GetPropValueFromBase(this, String, pValue, nDefaultVal);
  return KeyValues::GetInt(v10, pValue, PropValueFromBase);
}


// CPropData::GetRandomChunkModel  (line 653, @0x0000000002051820, libserver.so)  // inlines: String, ToCStr, V_strlen, V_strncmp<int>, operator[]
// calls: strlen, _V_strncmp, RandomInt
// callers: CreatePiecesFromPropData, CreateGibsFromList, CBreakable::Die
const char *__fastcall CPropData::GetRandomChunkModel(
        CPropData *const this,
        const char *pszBreakableSection,
        int iMaxSize)
{
  int m_Size; // r15d
  __int64 v6; // rbx
  int v7; // r12d
  int v8; // edx
  const char *m_Id; // rdi
  CPropData::propdata_breakablechunk_t *v10; // rcx
  __int64 v11; // rsi
  CUtlSymbolLarge *v12; // rdx
  const char *result; // rax

  if ( !this->m_bPropDataLoaded )
    return 0;
  m_Size = this->m_BreakableChunks.m_Size;
  if ( m_Size > 0 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      if ( pszBreakableSection != 0 )
        v8 = strlen(pszBreakableSection);
      else
        v8 = 0;
      m_Id = "";
      v10 = &this->m_BreakableChunks.m_Memory.m_pMemory[v6];
      if ( v10->iszChunkType.u.m_Id != 0 )
        m_Id = v10->iszChunkType.u.m_Id;
      if ( _V_strncmp(m_Id, pszBreakableSection, v8) == 0 )
        break;
      ++v7;
      ++v6;
      if ( v7 == m_Size )
        return 0;
    }
    goto LABEL_13;
  }
  if ( m_Size == 0 )
    return 0;
  v6 = 0;
LABEL_13:
  v11 = (this->m_BreakableChunks.m_Memory.m_pMemory[v6].iszChunkModels.m_Size - 1);
  if ( iMaxSize != -1 && v11 > iMaxSize )
    v11 = iMaxSize;
  v12 = &this->m_BreakableChunks.m_Memory.m_pMemory[v6].iszChunkModels.m_Memory.m_pMemory[RandomInt(0, v11)];
  result = "";
  if ( v12->u.m_Id != 0 )
    return v12->u.m_Id;
  return result;
}


// BreakModelList  (line 686, @0x00000000020530a0, libserver.so)  // inlines: AddToTail, CBreakParser, CTransform, Construct<breakmodel_t>, Element, GetData, GrowMemory, VectorAligned, breakmodel_t, operator[]
// calls: CModel::GetCollisionEmbeddedKeyvalues, VPhysicsKeyParserCreate, V_stricmp_fast, VPhysicsKeyParserDestroy, CUtlMemory<breakmodel_t, int>::Grow
// callers: BuildGibList, CreatePiecesFromBreakModelList, PropBreakablePrecacheAll
void __fastcall BreakModelList(
        CUtlVector<breakmodel_t,CUtlMemory<breakmodel_t,int> > *const list,
        HModel hModel,
        float defBurstScale,
        float defBurstRandomize,
        int defCollisionGroup)
{
  const CModel *const *m_pData; // rax
  const char *CollisionEmbeddedKeyvalues; // rax
  IVPhysicsKeyParser *i; // r15
  __int64 v10; // rax
  __int64 m_Size; // rax
  int v12; // edx
  __int64 v13; // rsi
  breakmodel_t *v14; // rax
  breakmodel_t *v15; // rsi
  int v16; // [rsp+4h] [rbp-5Ch]
  CBreakParser breakParser; // [rsp+10h] [rbp-50h] BYREF

  m_pData = hModel.m_pBinding->m_pData;
  if ( hModel.m_pBinding->m_pData != 0 && *m_pData != 0 )
  {
    CollisionEmbeddedKeyvalues = CModel::GetCollisionEmbeddedKeyvalues(*m_pData);
    if ( CollisionEmbeddedKeyvalues != 0 )
    {
      for ( i = VPhysicsKeyParserCreate(CollisionEmbeddedKeyvalues);
            (*(i->_vptr_IVPhysicsKeyParser + 3))(i) == 0;
            (*(i->_vptr_IVPhysicsKeyParser + 10))(i) )
      {
        while ( 1 )
        {
          breakParser.m_defaultCollisionGroup = defCollisionGroup;
          breakParser._vptr_IVPhysicsKeyHandler = &off_3FEAF30;
          breakParser.m_defaultBurstScale = defBurstScale;
          breakParser.m_defaultBurstRandomize = defBurstRandomize;
          v10 = (*(i->_vptr_IVPhysicsKeyParser + 2))(i);
          if ( V_stricmp_fast(v10, "break") != 0 )
            break;
          m_Size = list->m_Size;
          v12 = list->m_Size;
          if ( m_Size == list->m_Memory.m_nAllocationCount )
          {
            v16 = list->m_Size;
            CUtlMemory<breakmodel_t,int>::Grow(&list->m_Memory, 1);
            v12 = list->m_Size;
            m_Size = v16;
          }
          v13 = m_Size;
          list->m_Size = v12 + 1;
          v14 = &list->m_Memory.m_pMemory[m_Size];
          if ( v14 != 0 )
          {
            v14->offset.m_vPosition.w = 0.0;
            v15 = &list->m_Memory.m_pMemory[v13];
          }
          else
          {
            v15 = 0;
          }
          (*(i->_vptr_IVPhysicsKeyParser + 8))(i, v15, &breakParser);
          if ( (*(i->_vptr_IVPhysicsKeyParser + 3))(i) != 0 )
            goto LABEL_12;
        }
      }
LABEL_12:
      VPhysicsKeyParserDestroy(i);
    }
  }
}


// GetAutoMultiplayerPhysicsMode  (line 716, @0x0000000002051930, libserver.so)
// callers: CPhysicsProp::Spawn
__int64 __fastcall GetAutoMultiplayerPhysicsMode(float a1, float mass)
{
  return (a1 < 8.0) + 1;
}


// ShouldSpawnBreakablePieceOnClient  (line 730, @0x0000000002051950, libserver.so)  // inlines: GetFloat
bool __cdecl ShouldSpawnBreakablePieceOnClient(Vector size)
{
  return ((sv_pushaway_clientside_size.m_pParent->m_Value.m_fValue
         * sv_pushaway_clientside_size.m_pParent->m_Value.m_fValue)
        * sv_pushaway_clientside_size.m_pParent->m_Value.m_fValue) > ((size.x * size.y) * size.z);
}


// GetMassEquivalent  (line 754, @0x0000000002051990, libserver.so)
// callers: CEntityDebugGameSystem::DrawMassReport, CBreakable::DrawDebugTextOverlays, CRagdollProp::DrawDebugTextOverlays, CPhysBox::DrawDebugTextOverlays, CPhysicsProp::DrawDebugTextOverlays
// strings: "really freaking heavy"
// globals: GetMassEquivalent(float)::masstext
const char *__fastcall GetMassEquivalent(float a1, float flMass)
{
  const const struct {float flMass;const char *sz;} *v2; // rdx
  int v3; // eax

  if ( a1 < 0.0000049999999 )
  {
    v3 = 0;
  }
  else
  {
    v2 = &GetMassEquivalent(float)::masstext[1];
    v3 = 1;
    while ( v2->flMass <= a1 )
    {
      ++v3;
      ++v2;
      if ( v3 == 22 )
        return "really freaking heavy";
    }
  }
  return GetMassEquivalent(float)::masstext[v3].sz;
}


// CGameGibManager::~CGameGibManager  (line 804, @0x0000000002057ce0, libserver.so)
// calls: CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::~CUtlLinkedList, CBaseEntity::~CBaseEntity
void __fastcall CGameGibManager::~CGameGibManager(CGameGibManager *const this)
{
  CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *p_m_LRU; // rdi

  p_m_LRU = &this->m_LRU;
  *&p_m_LRU[-20].m_NumAlloced = &off_3FEB190;
  CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::~CUtlLinkedList(p_m_LRU);
  CBaseEntity::~CBaseEntity(this);
}


// CGameGibManager::~CGameGibManager  (line 804, @0x0000000002057d20, libserver.so)  // inlines: ~CGameGibManager
// calls: CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::~CUtlLinkedList, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CGameGibManager::~CGameGibManager(CGameGibManager *const this)
{
  CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *p_m_LRU; // rdi

  p_m_LRU = &this->m_LRU;
  *&p_m_LRU[-20].m_NumAlloced = &off_3FEB190;
  CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::~CUtlLinkedList(p_m_LRU);
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CGameGibManager::GetEntityClass  (line 806, @0x0000000002056350, libserver.so)
CEntityClass *__cdecl CGameGibManager::GetEntityClass()
{
  return g_pEntityCGameGibManagerClass;
}


// CGameGibManager::Schema_DynamicBinding  (line 806, @0x0000000002056360, libserver.so)
// globals: CGameGibManager::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameGibManager::Schema_DynamicBinding(const CGameGibManager *const this)
{
  return CGameGibManager::s_pSchemaBinding;
}


// CGameGibManager::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 806, @0x0000000002056370, libserver.so)
// globals: CGameGibManager::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameGibManager::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGameGibManager::CEntityInstanceEntityClass *const this)
{
  return CGameGibManager::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGameGibManager::CEntityInstanceEntityClass::DestructInstance  (line 806, @0x0000000002056380, libserver.so)  // inlines: Destruct<CGameGibManager>
void __fastcall CGameGibManager::CEntityInstanceEntityClass::DestructInstance(
        CGameGibManager::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGameGibManager::CEntityInstanceEntityClass::FreeInstance  (line 806, @0x00000000020563a0, libserver.so)
void __fastcall CGameGibManager::CEntityInstanceEntityClass::FreeInstance(
        CGameGibManager::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGameGibManager::CEntityInstanceEntityClass::CanAllocate  (line 806, @0x00000000020563c0, libserver.so)
bool __fastcall CGameGibManager::CEntityInstanceEntityClass::CanAllocate(
        const CGameGibManager::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGameGibManager::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 806, @0x00000000020563d0, libserver.so)
// globals: CGameGibManager::s_pSchemaBinding
const ISchemaBinding *__fastcall CGameGibManager::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGameGibManager::CEntityInstanceEntityClass *const this)
{
  return CGameGibManager::s_pSchemaBinding;
}


// CGameGibManager::CEntityInstanceEntityClass::AllocateInstance  (line 806, @0x0000000002056750, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGameGibManager::CEntityInstanceEntityClass::AllocateInstance(
        CGameGibManager::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CGameGibManager::CEntityInstanceEntityClass::ConstructInstance  (line 806, @0x0000000002056b10, libserver.so)  // inlines: CGameGibManager, CUtlLinkedList, CUtlMemory, Construct<CGameGibManager>, ConstructList, ResetDbgInfo
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CGameGibManager::CEntityInstanceEntityClass::ConstructInstance(
        CGameGibManager::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_3FEB190;
    *(p + 401) = -1;
    *(p + 396) = -1;
    *(p + 397) = -1;
    *(p + 398) = -1;
    *(p + 97) = 0;
    *(p + 196) = 0;
    *(p + 197) = 0;
    *(p + 399) = 0;
    *(p + 400) = 0;
    *(p + 101) = 0;
    *(p + 205) = -1;
    *(p + 206) = -1;
  }
  return p;
}


// CGameGibManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 806, @0x0000000002056e10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGameGibManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameGibManager::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CGameGibManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 806, @0x0000000002056e30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGameGibManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameGibManager::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGameGibManager::GetEntityClassInternal  (line 806, @0x0000000002057030, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, Purge, RemoveAll, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume, CUtlMemory<CEntityClass::ComponentHelper_t, int>::Purge, CUtlMemory<CEntityClass::ComponentOffsets_t, int>::Purge
// callers: _GLOBAL__sub_I__unity_source_1_entities_01.cpp
// strings: "game_gib_manager", "CGameGibManager", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass, CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CGameGibManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGameGibManager::GetEntityClassInfo(void)::g_EntityCGameGibManagerClassInfo, CGameGibManager::GetEntityClassInfo(void)::g_EntityCGameGibManagerClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo (11 total)
CEntityClass *__cdecl CGameGibManager::GetEntityClassInternal()
{
  CGameGibManager::CEntityInstanceEntityClass *v1; // rax

  if ( `guard variable for'CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass) != 0 )
  {
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass._vptr_CEntityClass = off_3F79390;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_designerName.u.m_Id = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_ComponentOffsets.m_Size = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_AllHelpers.m_Size = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_classInputs.m_Size = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_classOutputs.m_Size = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_requiredEHandle.m_Index = -1;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_hNetworkSerializer = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_pBaseClassInfo = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_pClassInfo = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_flags = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_nAllHelpersFlags = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_pScriptClassDesc = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_pInputs = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_nInputCount = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_pOutputs = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_nOutputCount = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_pGameClass = 0;
    CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass._vptr_CEntityClass = off_3FEB110;
    __cxa_guard_release(&`guard variable for'CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass);
    __cxa_atexit(
      CGameGibManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass,
      &_dso_handle);
  }
  if ( g_pEntityCGameGibManagerClass != 0 )
    return &CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass;
  if ( `guard variable for'CGameGibManager::GetEntityClassInfo(void)::g_EntityCGameGibManagerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGameGibManager::GetEntityClassInfo(void)::g_EntityCGameGibManagerClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
      {
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
          "CGameEntity",
          0,
          0,
          &g_EntityRootClassInfo);
        __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGameGibManager::GetEntityClassInfo(void)::g_EntityCGameGibManagerClassInfo,
      "CGameGibManager",
      "game_gib_manager",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGameGibManager::GetEntityClassInfo(void)::g_EntityCGameGibManagerClassInfo);
  }
  CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_pClassInfo = &CGameGibManager::GetEntityClassInfo(void)::g_EntityCGameGibManagerClassInfo;
  CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_pBaseClassInfo = CGameGibManager::GetEntityClassInfo(void)::g_EntityCGameGibManagerClassInfo.m_pBaseClassInfo;
  g_pEntityCGameGibManagerClass = &CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass;
  CGameGibManager::GetEntityClassInfo(void)::g_EntityCGameGibManagerClassInfo.m_pClass = &CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass;
  CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCGameGibManagerClass->m_pComponentOverrides = 0;
  return &CGameGibManager::GetEntityClassInternal(void)::g_EntityCGameGibManagerClass;
}


// CGameGibManager::GetDataDescMap  (line 835, @0x000000000204fb70, libserver.so)
// globals: CGameGibManager::m_DataMap
datamap_t *__fastcall CGameGibManager::GetDataDescMap(CGameGibManager *const this)
{
  return &CGameGibManager::m_DataMap;
}


// CGameGibManager::AddDatadescMetadataKeys  (line 835, @0x00000000020519f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CGameGibManager::GetEntityClass(void)
void __fastcall CGameGibManager::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CGameGibManager::GetEntityClass);
}


// CGameGibManager::GetBaseMap  (line 835, @0x0000000002051a10, libserver.so)
datamap_t *__cdecl CGameGibManager::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CGameGibManager>  (line 835, @0x0000000002051a20, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_1_entities_01.cpp
// strings: "CGameGibManager"
// globals: `guard variable for'DataMapInit<CGameGibManager>(CGameGibManager *)::nameHolder, CGameGibManager::GetEntityClass(void), CGameGibManager::m_DataMap, DataMapInit<CGameGibManager>(CGameGibManager *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGameGibManager>(CGameGibManager *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CGameGibManager>(CGameGibManager *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGameGibManager>(CGameGibManager *)::nameHolder) != 0 )
  {
    DataMapInit<CGameGibManager>(CGameGibManager *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGameGibManager>(CGameGibManager *)::nameHolder.m_pszBase = "CGameGibManager";
    DataMapInit<CGameGibManager>(CGameGibManager *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGameGibManager>(CGameGibManager *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGameGibManager>(CGameGibManager *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGameGibManager>(CGameGibManager *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGameGibManager>(CGameGibManager *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGameGibManager>(CGameGibManager *)::nameHolder,
      &_dso_handle);
  }
  CGameGibManager::m_DataMap.dataNumFields = 7;
  CGameGibManager::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CGameGibManager::m_DataMap.dataDesc = &DataMapInit<CGameGibManager>(CGameGibManager *)::dataDesc[1];
  AddDatadescMetadataKeys(&CGameGibManager::m_DataMap, CGameGibManager::GetEntityClass);
  return &CGameGibManager::m_DataMap;
}


// CGameGibManager::Activate  (line 850, @0x0000000002052d80, libserver.so)  // inlines: Purge, ResetDbgInfo, UpdateMaxPieces
// calls: CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int>::Purge, CBaseEntity::Activate
void __fastcall CGameGibManager::Activate(CGameGibManager *const this, ActivateType_t activateType)
{
  CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *p_m_LRU; // r12
  CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> >::ListElem_t *m_pMemory; // rax

  p_m_LRU = &this->m_LRU;
  CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::RemoveAll(&this->m_LRU);
  if ( (this->m_LRU.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>::Purge(&p_m_LRU->m_Memory);
  this->m_LRU.m_FirstFree = -1;
  m_pMemory = this->m_LRU.m_Memory.m_pMemory;
  this->m_LRU.m_NumAlloced = 0;
  this->m_LRU.m_LastAlloc.index = -1;
  this->m_LRU.m_pElements = m_pMemory;
  this->m_iCurrentMaxPieces = this->m_iMaxPieces;
  CBaseEntity::Activate(this, activateType);
}


// CGameGibManager::UpdateMaxPieces  (line 860, @0x0000000002051af0, libserver.so)
void __fastcall CGameGibManager::UpdateMaxPieces(CGameGibManager *const this)
{
  this->m_iCurrentMaxPieces = this->m_iMaxPieces;
}


// CGameGibManager::InputSetMaxPieces  (line 889, @0x000000000204fb80, libserver.so)  // inlines: Int, UpdateMaxPieces, operator int
void __fastcall CGameGibManager::InputSetMaxPieces(CGameGibManager *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  int m_float64; // eax
  int m_float; // eax

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
    this->m_iMaxPieces = m_float;
    this->m_iCurrentMaxPieces = m_float;
  }
  else
  {
    if ( m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      m_float64 = inputdata->value.m_int;
    this->m_iMaxPieces = m_float64;
    this->m_iCurrentMaxPieces = m_float64;
  }
}


// CGameGibManager::InputSetMaxPiecesDX8  (line 895, @0x000000000204fbe0, libserver.so)  // inlines: UpdateMaxPieces
void __fastcall CGameGibManager::InputSetMaxPiecesDX8(CGameGibManager *const this, inputdata_t *const inputdata)
{
  this->m_iCurrentMaxPieces = this->m_iMaxPieces;
}


// CGameGibManager::AddGibToLRU  (line 900, @0x00000000020532d0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseAnimating> >, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, InsertBefore, InternalElement, IsValid, LinkBefore, LookupEntity, Next, Remove, Set, operator CEntityInstance*, operator[]
// calls: CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::Unlink, CUtlLinkedList<CHandle<CBaseAnimating>, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>, short unsigned int>, short unsigned int> >::AllocInternal, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CGameGibManager::AddGibToLRU(CGameGibManager *const this, CBaseAnimating *pEntity)
{
  int m_Head; // r14d
  CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *p_m_LRU; // r8
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v6; // rax
  uint32 m_Index; // edx
  int m_Next; // r12d
  __int16 v9; // cx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v13; // cx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r12
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v16; // rcx
  __int64 m_Tail; // rdx
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v18; // rax
  int m_iCurrentMaxPieces; // eax
  int m_ElementCount; // eax
  unsigned __int16 v21; // r12
  CEntityInstance *m_pInstance; // rdi
  UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int> *v23; // rdx
  uint32 v24; // eax
  __int16 v25; // cx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  CUtlLinkedList<CHandle<CBaseAnimating>,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,short unsigned int>,short unsigned int> > *v28; // [rsp+8h] [rbp-48h]
  int v29; // [rsp+10h] [rbp-40h]

  if ( pEntity != 0 )
  {
    m_Head = this->m_LRU.m_Head;
    p_m_LRU = &this->m_LRU;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v6 = &this->m_LRU.m_Memory.m_pMemory[m_Head];
        m_Index = v6->m_Element.m_Index;
        m_Next = v6->m_Next;
        if ( v6->m_Element.m_Index + 2 <= 1
          || (v9 = v6->m_Element.m_Index,
              (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Element.m_Index) >> 9) & 0x3F]) == 0)
          || (v11 = &v10[v9 & 0x1FF]) == 0
          || m_Index != v11->m_EHandle.m_Index
          || v11->m_pInstance == 0 )
        {
          v28 = p_m_LRU;
          CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::Unlink(
            p_m_LRU,
            m_Head);
          p_m_LRU = v28;
          this->m_LRU.m_Memory.m_pMemory[m_Head].m_Next = this->m_LRU.m_FirstFree;
          this->m_LRU.m_FirstFree = m_Head;
        }
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
    }
    m_iCurrentMaxPieces = this->m_iCurrentMaxPieces;
    if ( m_iCurrentMaxPieces > 0 )
    {
      if ( m_iCurrentMaxPieces <= this->m_LRU.m_ElementCount )
      {
        do
        {
          v21 = this->m_LRU.m_Head;
          m_pInstance = 0;
          v23 = &this->m_LRU.m_Memory.m_pMemory[v21];
          v24 = v23->m_Element.m_Index;
          if ( v23->m_Element.m_Index + 2 > 1 )
          {
            v25 = v23->m_Element.m_Index;
            v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->m_Element.m_Index) >> 9) & 0x3F];
            if ( v26 != 0 )
            {
              v27 = &v26[v25 & 0x1FF];
              if ( v27 != 0 && v24 == v27->m_EHandle.m_Index )
                m_pInstance = v27->m_pInstance;
            }
          }
          UTIL_Remove(m_pInstance);
          CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::Unlink(
            &this->m_LRU,
            v21);
          this->m_LRU.m_Memory.m_pMemory[v21].m_Next = this->m_LRU.m_FirstFree;
          m_ElementCount = this->m_LRU.m_ElementCount;
          this->m_LRU.m_FirstFree = v21;
        }
        while ( m_ElementCount >= this->m_iCurrentMaxPieces );
      }
      m_pEntity = pEntity->m_pEntity;
      v29 = -1;
      if ( m_pEntity != 0 )
      {
        v13 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v29 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
      }
      v14 = CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::AllocInternal(
              &this->m_LRU,
              0);
      v15 = v14;
      if ( v14 != 0xFFFF )
      {
        CUtlLinkedList<CHandle<CBaseAnimating>,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CHandle<CBaseAnimating>,unsigned short>,unsigned short>>::Unlink(
          &this->m_LRU,
          v14);
        v16 = &this->m_LRU.m_Memory.m_pMemory[v15];
        v16->m_Next = -1;
        m_Tail = this->m_LRU.m_Tail;
        v16->m_Previous = m_Tail;
        this->m_LRU.m_Tail = v15;
        if ( m_Tail == 0xFFFF )
          this->m_LRU.m_Head = v15;
        else
          this->m_LRU.m_Memory.m_pMemory[m_Tail].m_Next = v15;
        ++this->m_LRU.m_ElementCount;
        v18 = &this->m_LRU.m_Memory.m_pMemory[v15];
        if ( v18 != 0 )
          v18->m_Element.m_Index = v29;
      }
      this->m_iLastFrame = gpGlobals->framecount;
    }
  }
}


// GetGibManager  (line 937, @0x0000000002051b10, libserver.so)
CGameGibManager *__cdecl GetGibManager()
{
  return 0;
}


// PropBreakableCreateAll  (line 955, @0x0000000002054830, libserver.so)  // inlines: CWeakHandle, GetInt, Init, operator->
// calls: CModel::HasCollision, IPhysicsBody::GetGameData, CreatePiecesFromBreakModelList, CreatePiecesFromPropData
// callers: PropBreakableCreateAll, CBreakableProp::Break
// globals: nFrameNumber, nPropBreakablesPerFrameCount
void __fastcall PropBreakableCreateAll(
        HModel hModel,
        IPhysicsObject *pPhysics,
        const breakablepropparams_t *const params,
        CBaseEntity *pEntity,
        int iPrecomputedBreakableCount,
        bool bIgnoreGibLimit,
        bool defaultLocation)
{
  int v9; // ebx
  int m_nValue; // r14d
  int v11; // eax
  const CModel **m_pData; // rax
  const CModel *v13; // rdi
  IPhysicsObject *v14; // rsi
  CBaseEntity *v15; // r10
  CBaseEntity *GameData; // rax
  int v17; // eax
  CBaseEntity *pOwnerEntity; // [rsp+18h] [rbp-58h]
  HModel hModela; // [rsp+30h] [rbp-40h] BYREF

  v9 = iPrecomputedBreakableCount;
  m_nValue = props_break_max_pieces_perframe.m_pParent->m_Value.m_nValue;
  if ( m_nValue != -1 )
  {
    if ( gpGlobals->framecount == nFrameNumber )
    {
      v11 = nPropBreakablesPerFrameCount;
    }
    else
    {
      nFrameNumber = gpGlobals->framecount;
      v11 = 0;
      nPropBreakablesPerFrameCount = 0;
    }
    if ( m_nValue <= v11 )
      return;
  }
  if ( !bIgnoreGibLimit )
  {
    v17 = props_break_max_pieces.m_pParent->m_Value.m_nValue;
    if ( v17 != -1 )
    {
      if ( iPrecomputedBreakableCount != -1 )
      {
        if ( iPrecomputedBreakableCount > v17 )
          v9 = props_break_max_pieces.m_pParent->m_Value.m_nValue;
        m_pData = hModel.m_pBinding->m_pData;
        if ( hModel.m_pBinding->m_pData == 0 )
          goto LABEL_18;
LABEL_7:
        v13 = *m_pData;
        goto LABEL_8;
      }
      v9 = props_break_max_pieces.m_pParent->m_Value.m_nValue;
    }
  }
  m_pData = hModel.m_pBinding->m_pData;
  if ( hModel.m_pBinding->m_pData != 0 )
    goto LABEL_7;
LABEL_18:
  v13 = 0;
LABEL_8:
  if ( CModel::HasCollision(v13) )
  {
    v14 = pPhysics;
    v15 = pEntity;
    if ( pPhysics != 0 )
    {
      GameData = IPhysicsBody::GetGameData(pPhysics);
      v14 = pPhysics;
      v15 = GameData;
    }
    pOwnerEntity = v15;
    hModela.m_pBinding = hModel.m_pBinding->m_pData;
    if ( CreatePiecesFromBreakModelList(&hModela, v14, pEntity, params, v15, m_nValue, v9, defaultLocation) == 0 )
    {
      hModela.m_pBinding = hModel.m_pBinding->m_pData;
      CreatePiecesFromPropData(&hModela, pEntity, params, pOwnerEntity, v9);
    }
  }
}


// GetPlacementOriginTransform  (line 1003, @0x00000000020535a0, libserver.so)  // inlines: CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, GetInt, Purge, Purge_FixedGrowable, RemoveAll, SetToIdentity, operator->, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CModel::GetAttachmentHandle, CBaseAnimating::GetAttachmentLocal, SetIdentityMatrix, CModel::NumBones, CUtlVectorBase<matrix3x4a_t, CUtlMemoryFixedGrowable<matrix3x4a_t, 2ul, int> >::SetCount, CModel::MasterSkeleton, CModelSkeleton::GetBindPoseWorldTransforms, CModel::SetupAttachmentTransform, CUtlMemory<matrix3x4a_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<matrix3x4a_t, CUtlMemoryFixedGrowable<matrix3x4a_t, 2ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CreatePiece, CreatePiecesFromBreakModelList, CreateGibsFromList
void __fastcall GetPlacementOriginTransform(
        HModel hModel,
        CBaseAnimating *pOwnerAnim,
        matrix3x4a_t *pOutPlacementOriginTransform)
{
  const CModel *v6; // rdi
  AttachmentHandle_t AttachmentHandle; // al
  AttachmentHandle_t v8; // r12
  const CModel *v9; // rdi
  int v10; // eax
  int v11; // r15d
  const CModel *v12; // rdi
  const CModelSkeleton *v13; // rax
  const CModel *v14; // rdi
  uint32 v15; // eax
  matrix3x4a_t *pBindPoseWorldTransforms; // [rsp+8h] [rbp-C8h]
  CUtlVectorFixedGrowable<matrix3x4a_t,2ul> bindPoseBoneTransforms; // [rsp+10h] [rbp-C0h] BYREF
  unsigned __int64 v18; // [rsp+98h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( prop_disable_placement_origin_hack.m_pParent->m_Value.m_nValue == 1 )
    goto LABEL_7;
  if ( hModel.m_pBinding->m_pData != 0 )
    v6 = *hModel.m_pBinding->m_pData;
  else
    v6 = 0;
  AttachmentHandle = CModel::GetAttachmentHandle(v6, 451328981);
  v8 = AttachmentHandle;
  if ( pOwnerAnim != 0 )
  {
    if ( AttachmentHandle == 0
      || !CBaseAnimating::GetAttachmentLocal(pOwnerAnim, AttachmentHandle, pOutPlacementOriginTransform) )
    {
LABEL_7:
      SetIdentityMatrix(pOutPlacementOriginTransform);
    }
  }
  else
  {
    if ( hModel.m_pBinding->m_pData != 0 )
      v9 = *hModel.m_pBinding->m_pData;
    else
      v9 = 0;
    v10 = CModel::NumBones(v9);
    bindPoseBoneTransforms.m_Size = 0;
    bindPoseBoneTransforms.m_Memory.m_nAllocationCount = 2;
    v11 = v10;
    bindPoseBoneTransforms.m_Memory.m_nGrowSize = 0x80000000;
    bindPoseBoneTransforms.m_Memory.m_pMemory = &bindPoseBoneTransforms.m_Memory.m_FixedMemory;
    CUtlVectorBase<matrix3x4a_t,CUtlMemoryFixedGrowable<matrix3x4a_t,2ul,int>>::SetCount(&bindPoseBoneTransforms, v10);
    pBindPoseWorldTransforms = bindPoseBoneTransforms.m_Memory.m_pMemory;
    if ( hModel.m_pBinding->m_pData != 0 )
      v12 = *hModel.m_pBinding->m_pData;
    else
      v12 = 0;
    v13 = CModel::MasterSkeleton(v12);
    CModelSkeleton::GetBindPoseWorldTransforms(v13, &g_TransformIdentity, 1.0, 0, v11, pBindPoseWorldTransforms);
    if ( hModel.m_pBinding->m_pData != 0 )
      v14 = *hModel.m_pBinding->m_pData;
    else
      v14 = 0;
    CModel::SetupAttachmentTransform(v14, v8, bindPoseBoneTransforms.m_Memory.m_pMemory, pOutPlacementOriginTransform);
    bindPoseBoneTransforms.m_Size = 0;
    v15 = bindPoseBoneTransforms.m_Memory.m_nGrowSize & 0xC0000000;
    if ( bindPoseBoneTransforms.m_Memory.m_nAllocationCount < 0
      || bindPoseBoneTransforms.m_Memory.m_pMemory == &bindPoseBoneTransforms.m_Memory.m_FixedMemory )
    {
      if ( v15 == 0 )
        CUtlMemory<matrix3x4a_t,int>::Purge(&bindPoseBoneTransforms.m_Memory);
    }
    else if ( bindPoseBoneTransforms.m_Memory.m_pMemory != 0 && v15 == 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    }
  }
}


// CreatePiece  (line 1040, @0x00000000020537c0, libserver.so)  // inlines: CWeakHandle, ConcatTransforms, FastSqrt, GetBool, GetInt, Init, Length, MatrixAngles, MatrixInvert, MatrixPosition, SetOrigin, TransformMatrix, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator*=, operator+=, operator-, operator->
// calls: AngleMatrix, GetPlacementOriginTransform, MatrixInvert, TransformMatrix, ConcatTransforms, MatrixAngles, VectorNormalize, RandomFloat, CModel::numskinfamilies, CModel::GetMaterialGroupTokenForIndex, BreakModelCreateSingle, CBaseEntity::VPhysicsGetAggregate (18 total)
// callers: CreatePiecesFromBreakModelList
// globals: nPropBreakablesPerFrameCount
__int64 __fastcall CreatePiece(
        HModel modelIndex,
        breakmodel_t *const breakModel,
        CBaseAnimating *pOwnerAnim,
        int nSkin,
        IPhysicsObject *pPhysics,
        const breakablepropparams_t *const params,
        CBaseEntity *pOwnerEntity,
        int nPropCount,
        bool defaultLocation)
{
  mp_break_t mpBreakMode; // eax
  __int64 result; // rax
  vec_t z; // eax
  float scale; // xmm0_4
  const Vector *velocity; // rax
  const CModel *v18; // rdi
  const CModel *v19; // rdi
  CUtlStringToken v20; // eax
  const VpropBreakablePartData_t *m_pBreakData; // rax
  IPhysAggregateInstance *Aggregate; // r14
  const VpropBreakablePartData_t *v23; // rax
  unsigned int i; // ebx
  __int64 v25; // r15
  float v26; // xmm1_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm4_4
  int v32; // eax
  float pBreakablea; // [rsp+20h] [rbp-160h]
  CBaseEntity *pBreakable; // [rsp+20h] [rbp-160h]
  int pPhysicsb; // [rsp+28h] [rbp-158h]
  const Vector *pOwnerAnimb; // [rsp+38h] [rbp-148h]
  float pOwnerAnimc; // [rsp+38h] [rbp-148h]
  _BOOL4 pOwnerAnimd; // [rsp+38h] [rbp-148h]
  Vector position; // [rsp+40h] [rbp-140h] BYREF
  QAngle angles; // [rsp+50h] [rbp-130h] BYREF
  matrix3x4_t matrix; // [rsp+60h] [rbp-120h] BYREF
  matrix3x4a_t piecePlacementOriginTransform; // [rsp+90h] [rbp-F0h] BYREF
  matrix3x4_t temp; // [rsp+C0h] [rbp-C0h] BYREF
  Vector vecBurst; // [rsp+F0h] [rbp-90h] BYREF
  matrix3x4_t temp2; // [rsp+120h] [rbp-60h] BYREF

  if ( gpGlobals->maxClients > 1 && breakable_multiplayer.m_pParent->m_Value.m_nValue != 0 )
  {
    mpBreakMode = breakModel->mpBreakMode;
    if ( mpBreakMode == mp_break_t::MULTIPLAYER_BREAK_CLIENTSIDE
      || !defaultLocation && mpBreakMode == mp_break_t::MULTIPLAYER_BREAK_DEFAULT )
    {
      return 1;
    }
  }
  if ( nPropCount == -1 || (result = 0, nPropCount >= nPropBreakablesPerFrameCount) )
  {
    AngleMatrix(params->angles, params->origin, &matrix);
    ++nPropBreakablesPerFrameCount;
    z = vec3_origin.z;
    *&position.x = *&vec3_origin.x;
    position.z = z;
    angles = *params->angles;
    if ( pOwnerAnim != 0 && breakModel->placementName[0] != 0 )
    {
      if ( breakModel->placementIsBone )
      {
        v32 = CBaseAnimating::LookupBone(pOwnerAnim, breakModel->placementName);
        if ( v32 < 0 )
          goto LABEL_11;
        CBaseAnimating::GetBonePosition(pOwnerAnim, v32, &position, &angles);
      }
      else
      {
        CBaseAnimating::GetAttachment(pOwnerAnim, breakModel->placementName, &position, &angles);
      }
      AngleMatrix(&angles, &position, &matrix);
    }
    else
    {
      *&temp2.m_flMatVal[0][0] = modelIndex.m_pBinding->m_pData;
      GetPlacementOriginTransform(&temp2, 0, &piecePlacementOriginTransform);
      MatrixInvert(&piecePlacementOriginTransform, &temp2);
      TransformMatrix(&breakModel->offset, &vecBurst);
      ConcatTransforms(&vecBurst, &temp2, &temp);
      scale = params->scale;
      temp.m_flMatVal[1][3] = temp.m_flMatVal[1][3] * scale;
      temp.m_flMatVal[2][3] = temp.m_flMatVal[2][3] * scale;
      temp.m_flMatVal[0][3] = scale * temp.m_flMatVal[0][3];
      ConcatTransforms(&matrix, &temp, &temp2);
      MatrixAngles(&temp2, &angles);
      position.x = temp2.m_flMatVal[0][3];
      position.y = temp2.m_flMatVal[1][3];
      position.z = temp2.m_flMatVal[2][3];
    }
LABEL_11:
    velocity = params->velocity;
    *&temp.m_flMatVal[0][0] = *&velocity->x;
    temp.m_flMatVal[0][2] = velocity->z;
    pBreakablea = VectorNormalize(&temp);
    temp.m_flMatVal[0][0] = RandomFloat(-1.0, 1.0) + temp.m_flMatVal[0][0];
    temp.m_flMatVal[0][1] = RandomFloat(-1.0, 1.0) + temp.m_flMatVal[0][1];
    temp.m_flMatVal[0][2] = RandomFloat(0.0, 1.0) + temp.m_flMatVal[0][2];
    VectorNormalize(&temp);
    temp.m_flMatVal[0][0] = temp.m_flMatVal[0][0] * pBreakablea;
    temp.m_flMatVal[0][1] = temp.m_flMatVal[0][1] * pBreakablea;
    temp.m_flMatVal[0][2] = pBreakablea * temp.m_flMatVal[0][2];
    if ( pPhysics != 0 && !params->useThisRawVelocity )
      (*(*pPhysics + 1728LL))(pPhysics, &position, &temp);
    if ( modelIndex.m_pBinding->m_pData != 0 )
      v18 = *modelIndex.m_pBinding->m_pData;
    else
      v18 = 0;
    if ( nSkin > CModel::numskinfamilies(v18) )
      nSkin = 0;
    if ( modelIndex.m_pBinding->m_pData != 0 )
      v19 = *modelIndex.m_pBinding->m_pData;
    else
      v19 = 0;
    v20.m_nHashCode = CModel::GetMaterialGroupTokenForIndex(v19, nSkin).m_nHashCode;
    pBreakable = BreakModelCreateSingle(
                   pOwnerEntity,
                   breakModel,
                   &position,
                   &angles,
                   &temp,
                   params->angularVelocity,
                   v20,
                   params);
    if ( pBreakable != 0 )
    {
      if ( pOwnerEntity != 0 && (pOwnerEntity->m_fEffects.m_Value & 0x10) != 0
        || (m_pBreakData = breakModel->m_pBreakData) != 0 && m_pBreakData->m_bNoShadows )
      {
        CBaseEntity::AddEffects(pBreakable, 16);
      }
      Aggregate = CBaseEntity::VPhysicsGetAggregate(pBreakable);
      if ( Aggregate != 0 )
      {
        v23 = breakModel->m_pBreakData;
        if ( v23 != 0 && v23->m_nSurfaceProp != 0 )
          (*(Aggregate->_vptr_IPhysAggregateInstance + 64))(Aggregate);
        if ( breakModel->burstScale != 0.0 || breakModel->burstRandomize != 0.0 )
        {
          pPhysicsb = (*(Aggregate->_vptr_IPhysAggregateInstance + 9))(Aggregate, 0.0);
          if ( pPhysicsb > 0 )
          {
            for ( i = 0; i != pPhysicsb; ++i )
            {
              v25 = (*(Aggregate->_vptr_IPhysAggregateInstance + 10))(Aggregate, i);
              pOwnerAnimb = params->origin;
              *&temp2.m_flMatVal[0][0] = (*(*v25 + 288LL))(v25);
              temp2.m_flMatVal[0][2] = v26;
              v27 = temp2.m_flMatVal[0][0] - pOwnerAnimb->x;
              v28 = temp2.m_flMatVal[0][1] - pOwnerAnimb->y;
              v29 = v26 - pOwnerAnimb->z;
              vecBurst.x = v27;
              vecBurst.y = v28;
              vecBurst.z = v29;
              v30 = fsqrt(((v27 * v27) + (v28 * v28)) + (v29 * v29));
              if ( v30 > 0.000001 )
              {
                v31 = breakModel->burstScale / v30;
                vecBurst.x = v27 * v31;
                vecBurst.y = v28 * v31;
                vecBurst.z = v29 * v31;
              }
              if ( breakModel->burstRandomize > 0.000001 )
              {
                pOwnerAnimc = breakModel->burstRandomize;
                *&temp2.m_flMatVal[0][0] = RandomVectorInUnitSphere();
                vecBurst.z = (temp2.m_flMatVal[0][2] * pOwnerAnimc) + vecBurst.z;
                vecBurst.y = (temp2.m_flMatVal[0][1] * pOwnerAnimc) + vecBurst.y;
                vecBurst.x = (pOwnerAnimc * temp2.m_flMatVal[0][0]) + vecBurst.x;
              }
              (*(*v25 + 552LL))(v25, &vecBurst);
            }
          }
        }
      }
      if ( breakModel->isMotionDisabled )
      {
        pOwnerAnimd = breakModel->isMotionDisabled;
        CBaseEntity::PhysicsEnableMotion(pBreakable, 0);
        return pOwnerAnimd;
      }
    }
    else
    {
      --nPropBreakablesPerFrameCount;
    }
    return 1;
  }
  return result;
}


// CreatePiecesFromBreakModelList  (line 1218, @0x0000000002053f10, libserver.so)  // inlines: AddToTail, CTransform, CUtlMemory, CUtlStringToken, CUtlVector, CUtlVectorBase, CWeakHandle, Construct<breakmodel_t>, Element, GetEffects, GetPtr, GrowMemory, Init, Purge, RemoveAll, ResolveOffset, ResourceHandleToData<InfoForResourceTypeCModel>, VectorAligned, breakmodel_t, operator const VpropBreakablePartData_t*, operator int, operator->, operator=, operator==, operator[], ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: BreakModelList, CBaseAnimating::GetS1Skin, GetPlacementOriginTransform, CModel::GetNumExtParts, memcpy, CModel::GetExtPartModel, CModel::GetPhysicsContainer, CModel::GetExtPartTransform, CUtlMemory<breakmodel_t, int>::Grow, Warning, CModel::GetNumMeshes, CreatePiece (23 total)
// callers: PropBreakableCreateAll
// strings: "Unable to create non-precached breakmodel %s\n"
__int64 __fastcall CreatePiecesFromBreakModelList(
        HModel hModel,
        IPhysicsObject *pPhysics,
        CBaseEntity *pEntity,
        const breakablepropparams_t *const params,
        CBaseEntity *pOwnerEntity,
        int nPropCount,
        int iPrecomputedBreakableCount,
        bool defaultLocation)
{
  int defCollisionGroup; // edx
  float defBurstRandomize; // xmm1_4
  float defBurstScale; // xmm0_4
  const CBaseAnimating *v13; // rdi
  int m_Size; // edx
  int breakModelsNotToMake; // eax
  breakmodel_t *v16; // r12
  unsigned __int8 (__fastcall *v17)(IGameModelInfo *, CTransform *); // rax
  const CModel *m_pData; // r15
  int NumExtParts; // eax
  int v20; // r13d
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rbx
  breakmodel_t *v24; // rbx
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  vec_t w; // xmm1_4
  vec_t v28; // xmm2_4
  vec_t v29; // xmm3_4
  const CModel *v30; // rdi
  const CPhysAggregateData_1 *PhysicsContainer; // rax
  int v32; // esi
  const VPhysXBodyPart_t **m_pMemory; // rdi
  __int64 v34; // rax
  CResourcePointer<VpropBreakablePartData_t> *p_m_pBreakablePartData; // rdx
  __int64 m_nOffset; // rcx
  char *v37; // rdx
  float v38; // xmm0_4
  vec_t v39; // r14d
  vec_t v40; // xmm1_4
  vec_t x; // xmm0_4
  vec_t v42; // xmm1_4
  vec_t v43; // xmm3_4
  vec_t v44; // xmm0_4
  char v45; // cl
  unsigned int v46; // ebx
  __int64 v48; // rax
  __int64 (__fastcall *v49)(__int64, CTransform *); // rdx
  int NumMeshes; // eax
  vec_t v51; // xmm1_4
  uint32 m_nHashCode; // r15d
  const CBaseAnimating *v53; // rax
  const Vector *velocity; // r14
  int v55; // r12d
  void (__fastcall *v56)(ITempEntsSystem *, CPASFilter *, CTransform *, _QWORD, const Vector *, const QAngle *, float, float, const Vector *, int, unsigned int, int, int, int, int); // r13
  CBaseAnimating *pOwnerAnim; // [rsp+68h] [rbp-258h]
  __int64 v63; // [rsp+80h] [rbp-240h]
  int nSkin; // [rsp+90h] [rbp-230h]
  signed int nBreakPieceIndex; // [rsp+94h] [rbp-22Ch]
  unsigned int m_Value; // [rsp+98h] [rbp-228h]
  const Vector *src; // [rsp+A0h] [rbp-220h]
  int nExtPartCount; // [rsp+A8h] [rbp-218h]
  const QAngle *nExtPartCounta; // [rsp+A8h] [rbp-218h]
  char *modelName; // [rsp+B0h] [rbp-210h]
  float modelNamea; // [rsp+B0h] [rbp-210h]
  HModel modelIndex; // [rsp+C0h] [rbp-200h] BYREF
  HModel hRefModel; // [rsp+D0h] [rbp-1F0h]
  CUtlVector<breakmodel_t,CUtlMemory<breakmodel_t,int> > list; // [rsp+E0h] [rbp-1E0h] BYREF
  CTransform hModela; // [rsp+100h] [rbp-1C0h] BYREF
  matrix3x4a_t parentPlacementOriginTransform; // [rsp+120h] [rbp-1A0h] BYREF
  CPASFilter filter; // [rsp+150h] [rbp-170h] BYREF
  unsigned __int64 v78; // [rsp+288h] [rbp-38h]

  v78 = __readfsqword(0x28u);
  if ( hModel.m_pBinding->m_pData != 0 )
  {
    defCollisionGroup = params->defCollisionGroup;
    *&parentPlacementOriginTransform.m_flMatVal[0][0] = hModel.m_pBinding->m_pData;
    defBurstRandomize = params->defBurstRandomize;
    defBurstScale = params->defBurstScale;
    list.m_Size = 0;
    list.m_Memory.m_pMemory = 0;
    list.m_Memory.m_nAllocationCount = 0;
    list.m_Memory.m_nGrowSize = 0;
    BreakModelList(&list, &parentPlacementOriginTransform, defBurstScale, defBurstRandomize, defCollisionGroup);
    if ( list.m_Size != 0 )
    {
      if ( pOwnerEntity != 0
        && (v13 = (*(pOwnerEntity->_vptr_IHandleEntity + 43))(pOwnerEntity), pOwnerAnim = v13, v13 != 0) )
      {
        nSkin = CBaseAnimating::GetS1Skin(v13);
      }
      else
      {
        pOwnerAnim = 0;
        nSkin = 0;
      }
      *&hModela.m_vPosition.x = hModel.m_pBinding->m_pData;
      GetPlacementOriginTransform(&hModela, pOwnerAnim, &parentPlacementOriginTransform);
      m_Size = list.m_Size;
      if ( list.m_Size > 0 )
      {
        v63 = 0;
        for ( nBreakPieceIndex = 0; m_Size > nBreakPieceIndex; ++nBreakPieceIndex )
        {
          breakModelsNotToMake = params->breakModelsNotToMake;
          if ( breakModelsNotToMake != 0 && _bittest(&breakModelsNotToMake, nBreakPieceIndex) )
          {
            list.m_Memory.m_pMemory[v63].mpBreakMode = mp_break_t::MULTIPLAYER_BREAK_CLIENTSIDE;
          }
          else
          {
            v16 = &list.m_Memory.m_pMemory[v63];
            modelName = list.m_Memory.m_pMemory[v63].modelName;
            (*(modelinfo->_vptr_IAppSystem + 13))(&modelIndex, modelinfo, modelName);
            v17 = *(modelinfo->_vptr_IAppSystem + 14);
            *&hModela.m_vPosition.x = modelIndex;
            if ( v17(modelinfo, &hModela) != 0 )
            {
              m_pData = 0;
              if ( modelIndex.m_pBinding != 0 && modelIndex.m_pBinding->m_nRefCount.m_value > 0 )
                m_pData = modelIndex.m_pBinding->m_pData;
              NumExtParts = CModel::GetNumExtParts(m_pData);
              nExtPartCount = NumExtParts;
              if ( NumExtParts != 0 )
              {
                if ( NumExtParts > 0 )
                {
                  v20 = 0;
                  do
                  {
                    v21 = list.m_Size;
                    v22 = list.m_Size;
                    if ( list.m_Size == list.m_Memory.m_nAllocationCount )
                    {
                      CUtlMemory<breakmodel_t,int>::Grow(&list.m_Memory, 1);
                      v22 = list.m_Size;
                    }
                    v23 = v21;
                    list.m_Size = v22 + 1;
                    if ( &list.m_Memory.m_pMemory[v23] != 0 )
                    {
                      list.m_Memory.m_pMemory[v23].offset.m_vPosition.w = 0.0;
                      v24 = &list.m_Memory.m_pMemory[v23];
                    }
                    else
                    {
                      v24 = 0;
                    }
                    y = v16->offset.m_vPosition.y;
                    z = v16->offset.m_vPosition.z;
                    v24->offset.m_vPosition.x = v16->offset.m_vPosition.x;
                    v24->offset.m_vPosition.y = y;
                    v24->offset.m_vPosition.z = z;
                    w = v16->offset.m_orientation.w;
                    v28 = v16->offset.m_orientation.z;
                    v29 = v16->offset.m_orientation.y;
                    v24->offset.m_orientation.x = v16->offset.m_orientation.x;
                    v24->offset.m_orientation.z = v28;
                    v24->offset.m_orientation.y = v29;
                    v24->offset.m_orientation.w = w;
                    memcpy(v24->modelName, modelName, sizeof(v24->modelName));
                    memcpy(v24->placementName, v16->placementName, sizeof(v24->placementName));
                    v24->fadeTime = v16->fadeTime;
                    v24->fadeMinDist = v16->fadeMinDist;
                    v24->fadeMaxDist = v16->fadeMaxDist;
                    v24->health = v16->health;
                    v24->burstScale = v16->burstScale;
                    v24->burstRandomize = v16->burstRandomize;
                    v24->collisionGroup = v16->collisionGroup;
                    v24->isRagdoll = v16->isRagdoll;
                    v24->placementIsBone = v16->placementIsBone;
                    v24->isMotionDisabled = v16->isMotionDisabled;
                    v24->mpBreakMode = v16->mpBreakMode;
                    v24->m_pBreakData = v16->m_pBreakData;
                    CModel::GetExtPartModel(m_pData, v20);
                    (*(*g_pResourceSystem + 328LL))(g_pResourceSystem, hRefModel.m_pBinding, v24->modelName, 512);
                    if ( hRefModel.m_pBinding != 0 )
                      v30 = hRefModel.m_pBinding->m_pData;
                    else
                      v30 = 0;
                    PhysicsContainer = CModel::GetPhysicsContainer(v30);
                    if ( PhysicsContainer != 0 )
                    {
                      v32 = PhysicsContainer->m_Parts.m_Size;
                      if ( v32 > 0 )
                      {
                        m_pMemory = PhysicsContainer->m_Parts.m_Memory.m_pMemory;
                        v34 = 0;
                        while ( 1 )
                        {
                          p_m_pBreakablePartData = &m_pMemory[v34]->m_pBreakablePartData;
                          m_nOffset = p_m_pBreakablePartData->m_nOffset;
                          if ( m_nOffset != 0 )
                          {
                            v37 = p_m_pBreakablePartData + m_nOffset;
                            if ( v37 != 0 )
                              break;
                          }
                          if ( v32 <= ++v34 )
                            goto LABEL_31;
                        }
                        v24->isMotionDisabled = *v37;
                        v24->health = *(v37 + 1);
                        v24->fadeTime = *(v37 + 2);
                        v24->fadeMinDist = *(v37 + 3);
                        v24->fadeMaxDist = *(v37 + 4);
                        v24->burstScale = *(v37 + 5);
                        v38 = *(v37 + 6);
                        v24->m_pBreakData = v37;
                        v24->burstRandomize = v38;
                        v39 = *(v37 + 8);
                        if ( v39 != 0.0 )
                        {
                          v48 = (*(g_pVPhysics2->_vptr_IAppSystem + 19))(g_pVPhysics2);
                          v49 = *(*v48 + 24LL);
                          hModela.m_vPosition.x = v39;
                          v24->collisionGroup = v49(v48, &hModela);
                        }
                      }
                    }
LABEL_31:
                    CModel::GetExtPartTransform(&hModela, m_pData, v20++);
                    v40 = hModela.m_vPosition.z;
                    x = hModela.m_vPosition.x;
                    v24->offset.m_vPosition.y = hModela.m_vPosition.y;
                    v24->offset.m_vPosition.z = v40;
                    v24->offset.m_vPosition.x = x;
                    v42 = hModela.m_orientation.w;
                    v43 = hModela.m_orientation.y;
                    v44 = hModela.m_orientation.x;
                    v24->offset.m_orientation.z = hModela.m_orientation.z;
                    v24->offset.m_orientation.y = v43;
                    v24->offset.m_orientation.x = v44;
                    v24->offset.m_orientation.w = v42;
                  }
                  while ( v20 != nExtPartCount );
                }
              }
              else
              {
                NumMeshes = CModel::GetNumMeshes(m_pData);
                m_Size = list.m_Size;
                if ( NumMeshes == 0 )
                  goto LABEL_33;
                *&hModela.m_vPosition.x = modelIndex;
                if ( CreatePiece(
                       &hModela,
                       &list.m_Memory.m_pMemory[v63],
                       pOwnerAnim,
                       nSkin,
                       pPhysics,
                       params,
                       pOwnerEntity,
                       nPropCount,
                       defaultLocation) == 0 )
                {
                  v45 = list.m_Size;
                  goto LABEL_35;
                }
              }
            }
            else
            {
              Warning("Unable to create non-precached breakmodel %s\n", modelName);
            }
            m_Size = list.m_Size;
          }
LABEL_33:
          ++v63;
        }
      }
      v45 = m_Size;
LABEL_35:
      v46 = 1;
      if ( (((1 << v45) - 1) & params->breakModelsNotToMake) != 0 )
      {
        *&hModela.m_vPosition.x = (*(pEntity->_vptr_IHandleEntity + 62))(pEntity);
        hModela.m_vPosition.z = v51;
        CPASFilter::CPASFilter(&filter, &hModela.m_vPosition);
        m_nHashCode = 0;
        if ( (*(pEntity->_vptr_IHandleEntity + 43))(pEntity) != 0 )
        {
          v53 = (*(pEntity->_vptr_IHandleEntity + 43))(pEntity);
          m_nHashCode = CBaseAnimating::GetSkin(v53).m_nHashCode;
        }
        velocity = params->velocity;
        v55 = ~params->breakModelsNotToMake;
        v56 = *(te->_vptr_IPredictionSystem + 27);
        m_Value = pEntity->m_fEffects.m_Value;
        modelNamea = CBaseEntity::GetAbsScale(pEntity);
        nExtPartCounta = CBaseEntity::GetAbsAngles(pEntity);
        src = CBaseEntity::GetAbsOrigin(pEntity);
        CBaseEntity::GetModel(&hModela, pEntity);
        v56(
          te,
          &filter,
          &hModela,
          m_nHashCode,
          src,
          nExtPartCounta,
          -1.0,
          modelNamea,
          velocity,
          1,
          m_Value,
          255,
          255,
          255,
          v55);
        v46 = 1;
        filter._vptr_IRecipientFilter = &off_3FCB190;
        CRecipientFilter::~CRecipientFilter(&filter);
      }
    }
    else
    {
      v46 = 0;
    }
    list.m_Size = 0;
    if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<breakmodel_t,int>::Purge(&list.m_Memory);
      if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<breakmodel_t,int>::Purge(&list.m_Memory);
    }
  }
  else
  {
    return 0;
  }
  return v46;
}


// CreatePiecesFromPropData  (line 1353, @0x0000000002051b20, libserver.so)  // inlines: CTransform, CollisionSize, Init, OBBSize, RandomPointInBounds, SmallestAxis, String, ToCStr, V_strncpy<long unsigned int>, Vector, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, breakmodel_t, operator*, operator+, operator-, operator->, operator=
// calls: __dynamic_cast, CCollisionProperty::RandomPointInBounds, VectorNormalize, RandomVectorInUnitSphere, CBaseEntity::GetAbsAngles, CModel::GetMaterialGroupTokenForIndex, BreakModelCreateSingle, AngleMatrix, AlignBoxes, MatrixAngles, CBaseEntity::VPhysicsGetObject, CBaseEntity::SetAbsAngles (19 total)
// callers: PropBreakableCreateAll
// strings: "PropBreakableCreateAll: Could not create model %s\n"
// globals: `typeinfo for'IBreakableWithPropData, g_pPropDataSystem
void __fastcall CreatePiecesFromPropData(
        HModel hModel,
        CBaseEntity *pEntity,
        const breakablepropparams_t *const params,
        CBaseEntity *pOwnerEntity,
        int iPrecomputedBreakableCount)
{
  void *v8; // rax
  void *v9; // rbx
  int v10; // r13d
  Vector *p_vecMaxs; // rax
  Vector *p_vecMins; // rcx
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  vec_t v16; // xmm2_4
  vec_t v17; // xmm0_4
  float v18; // xmm3_4
  int v19; // eax
  const CModel *v20; // rdi
  CUtlStringToken nSkin; // eax
  CBaseEntity *v22; // rax
  CBaseEntity *v23; // r14
  float *v24; // rax
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  IPhysicsObject *Object; // rax
  vec_t v29; // xmm1_4
  IPhysicsObject *v30; // rax
  const char *v31; // r14
  int v32; // eax
  const char *RandomChunkModel; // rax
  vec_t z; // xmm0_4
  vec_t v35; // xmm1_4
  vec_t w; // xmm0_4
  vec_t x; // xmm3_4
  vec_t y; // xmm2_4
  float v39; // xmm0_4
  float defBurstScale; // xmm0_4
  float defBurstRandomize; // xmm0_4
  CCollisionProperty *m_pCollision; // rdi
  float v43; // xmm2_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  const Vector *AbsOrigin; // rax
  const ResourceBindingBase_t *hModela; // [rsp+10h] [rbp-590h]
  float v49; // [rsp+58h] [rbp-548h]
  Vector vecObbSize; // [rsp+60h] [rbp-540h] BYREF
  Vector vecMins; // [rsp+70h] [rbp-530h] BYREF
  Vector vecMaxs; // [rsp+80h] [rbp-520h] BYREF
  Vector vecBurstDir; // [rsp+90h] [rbp-510h] BYREF
  Vector vecVelocity; // [rsp+A0h] [rbp-500h] BYREF
  QAngle vecAngles; // [rsp+B0h] [rbp-4F0h] BYREF
  Vector vecBreakableObbSize; // [rsp+C0h] [rbp-4E0h] BYREF
  Vector pos; // [rsp+D0h] [rbp-4D0h] BYREF
  matrix3x4_t matrix; // [rsp+E0h] [rbp-4C0h] BYREF
  breakmodel_t breakModel; // [rsp+110h] [rbp-490h] BYREF
  unsigned __int64 v61; // [rsp+568h] [rbp-38h]
  Vector v62; // 0:kr00_12.12

  v61 = __readfsqword(0x28u);
  if ( pEntity != 0 && hModel.m_pBinding->m_pData != 0 )
  {
    v8 = __dynamic_cast(pEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'IBreakableWithPropData, -2);
    v9 = v8;
    if ( v8 != 0 )
    {
      (*(*v8 + 120LL))(&matrix, v8);
      if ( *&matrix.m_flMatVal[0][0] != 0 && (*(*v9 + 152LL))(v9) != 0 )
      {
        v10 = 0;
        hModela = hModel.m_pBinding;
        breakModel.offset.m_vPosition.w = 0.0;
        while ( 1 )
        {
          if ( v10 >= (*(*v9 + 152LL))(v9) || v10 >= iPrecomputedBreakableCount && iPrecomputedBreakableCount != -1 )
            return;
          v31 = "";
          (*(*v9 + 120LL))(&matrix, v9);
          if ( *&matrix.m_flMatVal[0][0] != 0 )
            v31 = *&matrix.m_flMatVal[0][0];
          v32 = (*(*v9 + 168LL))(v9);
          RandomChunkModel = CPropData::GetRandomChunkModel(g_pPropDataSystem, v31, v32);
          if ( RandomChunkModel != 0 )
            break;
LABEL_22:
          ++v10;
        }
        _V_strncpy(breakModel.modelName, RandomChunkModel, 512);
        (*(modelinfo->_vptr_IAppSystem + 13))(&matrix, modelinfo, breakModel.modelName);
        if ( *&matrix.m_flMatVal[0][0] == 0 )
        {
          DevWarning("PropBreakableCreateAll: Could not create model %s\n", breakModel.modelName);
          goto LABEL_22;
        }
        breakModel.placementName[0] = 0;
        z = g_TransformIdentity.m_vPosition.z;
        breakModel.offset.m_vPosition.y = g_TransformIdentity.m_vPosition.y;
        breakModel.offset.m_vPosition.z = z;
        v35 = g_TransformIdentity.m_orientation.z;
        w = g_TransformIdentity.m_orientation.w;
        breakModel.offset.m_vPosition.x = g_TransformIdentity.m_vPosition.x;
        x = g_TransformIdentity.m_orientation.x;
        breakModel.offset.m_orientation.z = v35;
        y = g_TransformIdentity.m_orientation.y;
        breakModel.offset.m_orientation.w = w;
        breakModel.offset.m_orientation.x = x;
        breakModel.offset.m_orientation.y = y;
        v39 = RandomFloat(5.0, 10.0);
        breakModel.isRagdoll = 0;
        breakModel.fadeTime = v39;
        defBurstScale = params->defBurstScale;
        breakModel.fadeMinDist = 0.0;
        breakModel.burstScale = defBurstScale;
        defBurstRandomize = params->defBurstRandomize;
        m_pCollision = pEntity->m_pCollision;
        breakModel.fadeMaxDist = 0.0;
        breakModel.health = 1.0;
        breakModel.burstRandomize = defBurstRandomize;
        breakModel.collisionGroup = 5;
        breakModel.isMotionDisabled = 0;
        breakModel.placementIsBone = 0;
        breakModel.mpBreakMode = mp_break_t::MULTIPLAYER_BREAK_SERVERSIDE;
        breakModel.m_pBreakData = 0;
        if ( m_pCollision != 0 )
        {
          v43 = m_pCollision->m_vecMaxs.m_Value.z - m_pCollision->m_vecMins.m_Value.z;
          v44 = m_pCollision->m_vecMaxs.m_Value.y - m_pCollision->m_vecMins.m_Value.y;
          v45 = m_pCollision->m_vecMaxs.m_Value.x - m_pCollision->m_vecMins.m_Value.x;
        }
        else
        {
          v43 = vec3_origin.z;
          v44 = vec3_origin.y;
          v45 = vec3_origin.x;
        }
        vecObbSize.x = v45;
        vecObbSize.y = v44;
        vecObbSize.z = v43;
        if ( v44 > v45 )
        {
          if ( v43 > v45 )
          {
            p_vecMaxs = &vecMaxs;
            p_vecMins = &vecMins;
            goto LABEL_10;
          }
        }
        else if ( v43 > v44 )
        {
          p_vecMaxs = &vecMaxs.y;
          p_vecMins = &vecMins.y;
          goto LABEL_10;
        }
        p_vecMaxs = &vecMaxs.z;
        p_vecMins = &vecMins.z;
LABEL_10:
        vecMins.x = 0.0;
        vecMins.y = 0.0;
        vecMins.z = 0.0;
        vecMaxs.x = 1.0;
        vecMaxs.y = 1.0;
        vecMaxs.z = 1.0;
        p_vecMins->x = 0.5;
        p_vecMaxs->x = 0.5;
        if ( m_pCollision != 0 )
        {
          CCollisionProperty::RandomPointInBounds(m_pCollision, &vecMins, &vecMaxs, &breakModel.offset.m_vPosition);
          v13 = breakModel.offset.m_vPosition.x;
          v14 = breakModel.offset.m_vPosition.y;
          v15 = breakModel.offset.m_vPosition.z;
        }
        else
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
          v13 = AbsOrigin->x;
          v14 = AbsOrigin->y;
          v15 = AbsOrigin->z;
          breakModel.offset.m_vPosition.x = AbsOrigin->x;
          breakModel.offset.m_vPosition.y = v14;
          breakModel.offset.m_vPosition.z = v15;
        }
        v16 = v13 - params->origin->x;
        v17 = v15 - params->origin->z;
        vecBurstDir.y = v14 - params->origin->y;
        vecBurstDir.x = v16;
        vecBurstDir.z = v17;
        VectorNormalize(&vecBurstDir);
        v49 = params->defBurstRandomize;
        v62 = RandomVectorInUnitSphere();
        v18 = params->defBurstScale;
        *&matrix.m_flMatVal[0][0] = v62;
        vecVelocity.y = (v62.y * v49) + (vecBurstDir.y * v18);
        vecVelocity.z = (v62.z * v49) + (vecBurstDir.z * v18);
        vecVelocity.x = (v49 * v62.x) + (v18 * vecBurstDir.x);
        vecAngles = *CBaseEntity::GetAbsAngles(pEntity);
        v19 = (*(*v9 + 136LL))(v9);
        if ( hModela->m_pData != 0 )
          v20 = *hModela->m_pData;
        else
          v20 = 0;
        nSkin.m_nHashCode = CModel::GetMaterialGroupTokenForIndex(v20, v19).m_nHashCode;
        v22 = BreakModelCreateSingle(
                pOwnerEntity,
                &breakModel,
                &breakModel.offset.m_vPosition,
                &vecAngles,
                &vecVelocity,
                &vec3_origin,
                nSkin,
                params);
        v23 = v22;
        if ( v22 != 0 )
        {
          v24 = v22->m_pCollision;
          if ( v24 != 0 )
          {
            v25 = v24[18] - v24[15];
            v26 = v24[19] - v24[16];
            v27 = v24[17] - v24[14];
          }
          else
          {
            v26 = vec3_origin.z;
            v25 = vec3_origin.y;
            v27 = vec3_origin.x;
          }
          vecBreakableObbSize.x = v27;
          vecBreakableObbSize.y = v25;
          vecBreakableObbSize.z = v26;
          AngleMatrix(&vecAngles, &matrix);
          AlignBoxes(&matrix, &vecObbSize, &vecBreakableObbSize);
          MatrixAngles(&matrix, &vecAngles);
          if ( CBaseEntity::VPhysicsGetObject(v23) != 0 )
          {
            Object = CBaseEntity::VPhysicsGetObject(v23);
            *&pos.x = (*(*Object + 368LL))(Object);
            pos.z = v29;
            v30 = CBaseEntity::VPhysicsGetObject(v23);
            (*(*v30 + 1664LL))(v30, &pos, &vecAngles, 1);
          }
          CBaseEntity::SetAbsAngles(v23, &vecAngles);
          if ( pOwnerEntity != 0 && (pOwnerEntity->m_fEffects.m_Value & 0x10) != 0 )
            CBaseEntity::AddEffects(v23, 16);
        }
        goto LABEL_22;
      }
    }
  }
}


// PropBreakableCreateAll  (line 1467, @0x00000000020549b0, libserver.so)  // inlines: CWeakHandle, Init, breakablepropparams_t
// calls: PropBreakableCreateAll
// callers: CPhysicsCannister::Explode
void __fastcall PropBreakableCreateAll(
        HModel hModel,
        IPhysicsObject *pPhysics,
        const Vector *const origin,
        const QAngle *const angles,
        float flScale,
        const Vector *const velocity,
        const AngularImpulse *const angularVelocity,
        float impactEnergyScale,
        float defBurstScale,
        float defBurstRandomize,
        int defCollisionGroup,
        CBaseEntity *pEntity,
        bool defaultLocation)
{
  const ResourceBindingBase_t *m_pData; // rax
  HModel hModela; // [rsp+10h] [rbp-50h] BYREF
  breakablepropparams_t params; // [rsp+20h] [rbp-40h] BYREF

  params.angles = angles;
  params.origin = origin;
  params.velocity = velocity;
  params.angularVelocity = angularVelocity;
  params.defCollisionGroup = defCollisionGroup;
  m_pData = hModel.m_pBinding->m_pData;
  params.scale = flScale;
  params.useThisRawVelocity = 0;
  params.breakModelsNotToMake = 0;
  hModela.m_pBinding = m_pData;
  params.impactEnergyScale = impactEnergyScale;
  params.defBurstScale = defBurstScale;
  params.defBurstRandomize = defBurstRandomize;
  PropBreakableCreateAll(&hModela, pPhysics, &params, pEntity, -1, 0, defaultLocation);
}


// CBreakModelsPrecached::~CBreakModelsPrecached  (line 1479, @0x0000000002056bd0, libserver.so)  // inlines: Destruct<CBreakModelsPrecached::BreakModelInfo_t>, Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~BreakModelInfo_t, ~CAutoGameSystem, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlString::FreeMemoryBlock, IGameSystem::~IGameSystem, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t, int>::Purge
void __fastcall CBreakModelsPrecached::~CBreakModelsPrecached(CBreakModelsPrecached *const this)
{
  int m_Size; // r13d
  CBreakModelsPrecached *v3; // rax
  __int64 v4; // r14
  int i; // r13d
  int *v6; // r15
  int v7; // ebx
  __int64 j; // r12
  CUtlString *v9; // rdi
  bool v10; // zf
  CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t,int> *p_m_Memory; // rbx
  CBreakModelsPrecached *v12; // r14

  this->_vptr_IGameSystem = off_3FEB830;  // vptr: CBreakModelsPrecached
  CUtlSymbolTable::~CUtlSymbolTable(&this->m_modelList.m_SymbolTable);
  m_Size = this->m_modelList.m_Vector.m_Size;
  v3 = this;
  v4 = 32LL * m_Size - 32;
  for ( i = m_Size - 1; i >= 0; v3 = this )
  {
    v6 = (&v3->m_modelList.m_Vector.m_Memory.m_pMemory->m_breakModelNames.m_Size + v4);
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
    v4 -= 32;
    --i;
  }
  v10 = (v3->m_modelList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  v3->m_modelList.m_Vector.m_Size = 0;
  if ( v10 )
  {
    p_m_Memory = &v3->m_modelList.m_Vector.m_Memory;
    v12 = v3;
    CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t,int>::Purge(&v3->m_modelList.m_Vector.m_Memory);
    if ( (v12->m_modelList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
}


// CBreakModelsPrecached::~CBreakModelsPrecached  (line 1479, @0x0000000002056cf0, libserver.so)  // inlines: Destruct<CBreakModelsPrecached::BreakModelInfo_t>, Destruct<CUtlString>, Element, Purge, RemoveAll, operator[], ~BreakModelInfo_t, ~CAutoGameSystem, ~CBreakModelsPrecached, ~CUtlMemory, ~CUtlString, ~CUtlStringMap, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlSymbolTable::~CUtlSymbolTable, CUtlString::FreeMemoryBlock, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CUtlString, int>::Purge, CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t, int>::Purge
void __fastcall CBreakModelsPrecached::~CBreakModelsPrecached(CBreakModelsPrecached *const this)
{
  CUtlSymbolTable *p_m_SymbolTable; // rdi
  __int64 v3; // r14
  int *v4; // r13
  int v5; // ebx
  __int64 j; // r12
  CUtlString *v7; // rdi
  bool v8; // zf
  int m_Size; // [rsp+Ch] [rbp-34h]
  int i; // [rsp+Ch] [rbp-34h]

  p_m_SymbolTable = &this->m_modelList.m_SymbolTable;
  p_m_SymbolTable[-1].m_Lookup.m_pElements = off_3FEB830;
  CUtlSymbolTable::~CUtlSymbolTable(p_m_SymbolTable);
  m_Size = this->m_modelList.m_Vector.m_Size;
  v3 = 32LL * m_Size - 32;
  for ( i = m_Size - 1; i >= 0; --i )
  {
    v4 = (&this->m_modelList.m_Vector.m_Memory.m_pMemory->m_breakModelNames.m_Size + v3);
    v5 = *v4;
    for ( j = 8LL * *v4 - 8; --v5 >= 0; j -= 8 )
    {
      v7 = (*(v4 + 1) + j);
      if ( v7->m_pString != 0 )
        CUtlString::FreeMemoryBlock(v7);
    }
    v8 = (v4[5] & 0xC0000000) == 0;
    *v4 = 0;
    if ( v8 )
    {
      CUtlMemory<CUtlString,int>::Purge((v4 + 2));
      if ( (v4[5] & 0xC0000000) == 0 )
        CUtlMemory<CUtlString,int>::Purge((v4 + 2));
    }
    v3 -= 32;
  }
  v8 = (this->m_modelList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_modelList.m_Vector.m_Size = 0;
  if ( v8 )
  {
    CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t,int>::Purge(&this->m_modelList.m_Vector.m_Memory);
    if ( (this->m_modelList.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t,int>::Purge(&this->m_modelList.m_Vector.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;  // vptr: CAutoGameSystem
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CBreakModelsPrecached::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 1481, @0x00000000020563e0, libserver.so)
void __fastcall CBreakModelsPrecached::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CBreakModelsPrecached *const this)
{
  ;
}


// CBreakModelsPrecached::DoesGameSystemReallocate  (line 1481, @0x00000000020563f0, libserver.so)
// globals: CBreakModelsPrecached::sm_Factory
bool __fastcall CBreakModelsPrecached::DoesGameSystemReallocate(const CBreakModelsPrecached *const this)
{
  return (*(CBreakModelsPrecached::sm_Factory->_vptr_IGameSystemFactory + 8))(CBreakModelsPrecached::sm_Factory);
}


// CBreakModelsPrecached::SetGameSystemGlobalPtrs  (line 1481, @0x0000000002056410, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CBreakModelsPrecached::sm_Factory
void __fastcall CBreakModelsPrecached::SetGameSystemGlobalPtrs(CBreakModelsPrecached *const this, void *pValue)
{
  if ( CBreakModelsPrecached::sm_Factory != 0 )
    (*(CBreakModelsPrecached::sm_Factory->_vptr_IGameSystemFactory + 7))(CBreakModelsPrecached::sm_Factory, pValue);
}


// CBreakModelsPrecached::ComputeServerSideSpawn  (line 1557, @0x00000000020574d0, libserver.so)  // inlines: CWeakHandle, GetData, GetFloat, Init, ShouldSpawnBreakablePieceOnClient, VectorSubtract, operator-
// calls: KeyValues::KeyValues, CModel::KeyValueText, CModel::name, KeyValues::LoadFromBuffer, KeyValues::~KeyValues, KeyValues::FindKey, KeyValues::GetString, CPropData::GetPropValueFromBase, KeyValues::GetInt, __cxa_guard_acquire, KeyValuesSystem, __cxa_guard_release (15 total)
// callers: PropBreakablePrecacheAll
// strings: "prop_data", "physicsmode"
// globals: `guard variable for'CBreakModelsPrecached::ComputeServerSideSpawn(CWeakHandle<InfoForResourceTypeCModel>)::keyPropData, g_pPropDataSystem, CBreakModelsPrecached::ComputeServerSideSpawn(CWeakHandle<InfoForResourceTypeCModel>)::keyPropData
__int64 __fastcall CBreakModelsPrecached::ComputeServerSideSpawn(CBreakModelsPrecached *const this, HModel hModel)
{
  const CModel *v3; // r12
  const char *v4; // r14
  const char *v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // r12d
  int (**vptr_IAppSystem)(...); // rax
  KeyValues *Key; // rax
  KeyValues *v11; // r14
  const char *String; // rax
  int PropValueFromBase; // eax
  int Int; // eax
  __int64 v15; // rax
  void *m_pData; // [rsp+10h] [rbp-70h] BYREF
  Vector vMins; // [rsp+20h] [rbp-60h] BYREF
  Vector vMaxs; // [rsp+30h] [rbp-50h] BYREF
  KeyValues modelKeyValues; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  if ( hModel.m_pBinding->m_pData != 0 )
    v3 = *hModel.m_pBinding->m_pData;
  else
    v3 = 0;
  KeyValues::KeyValues(&modelKeyValues, "");
  v4 = CModel::KeyValueText(v3);
  v5 = CModel::name(v3);
  LOBYTE(v6) = KeyValues::LoadFromBuffer(&modelKeyValues, v5, v4, 0, 0, 0, 0);
  v7 = v6;
  if ( v6 == 0 )
    goto LABEL_4;
  if ( `guard variable for'CBreakModelsPrecached::ComputeServerSideSpawn(CWeakHandle<InfoForResourceTypeCModel>)::keyPropData == 0
    && __cxa_guard_acquire(&`guard variable for'CBreakModelsPrecached::ComputeServerSideSpawn(CWeakHandle<InfoForResourceTypeCModel>)::keyPropData) != 0 )
  {
    v15 = KeyValuesSystem();
    CBreakModelsPrecached::ComputeServerSideSpawn(CWeakHandle<InfoForResourceTypeCModel>)::keyPropData = (*(*v15 + 16LL))(v15, "prop_data", 1);
    __cxa_guard_release(&`guard variable for'CBreakModelsPrecached::ComputeServerSideSpawn(CWeakHandle<InfoForResourceTypeCModel>)::keyPropData);
  }
  Key = KeyValues::FindKey(&modelKeyValues, "prop_data", 0);
  v11 = Key;
  if ( Key != 0
    && (String = KeyValues::GetString(Key, "base", "", 0, 0),
        PropValueFromBase = CPropData::GetPropValueFromBase(g_pPropDataSystem, String, "physicsmode", 0),
        (Int = KeyValues::GetInt(v11, "physicsmode", PropValueFromBase)) != 0) )
  {
    if ( Int == 3 )
      v7 = 0;
  }
  else
  {
LABEL_4:
    vptr_IAppSystem = modelinfo->_vptr_IAppSystem;
    m_pData = hModel.m_pBinding->m_pData;
    vptr_IAppSystem[16](modelinfo, &m_pData, &vMins, &vMaxs);
    LOBYTE(v7) = ((sv_pushaway_clientside_size.m_pParent->m_Value.m_fValue
                 * sv_pushaway_clientside_size.m_pParent->m_Value.m_fValue)
                * sv_pushaway_clientside_size.m_pParent->m_Value.m_fValue) <= ((vMaxs.z - vMins.z)
                                                                             * ((vMaxs.x - vMins.x) * (vMaxs.y - vMins.y)));
  }
  KeyValues::~KeyValues(&modelKeyValues);
  return v7;
}


// CBreakModelsPrecached::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 1630, @0x0000000002052220, libserver.so)
void __cdecl CBreakModelsPrecached::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// PropBreakablePrecacheAll  (line 1633, @0x0000000002055ba0, libserver.so)  // inlines: AddMultipleToTail, AddString, AddToList, AddToTail, BreakModelInfo_t, CResourceNameGetter<InfoForResourceTypeCModel>, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, CWeakHandle, Construct<CBreakModelsPrecached::BreakModelInfo_t>, Construct<CUtlString>, CopyArray, CopyBreakModels, Destruct<CUtlString>, Element, EnsureCapacity, EnsureCount, Find, FindBreakModel, FromUntypedHandle, GetResourceName, GetResourceName<512ul>, GrowMemory, GrowVector, Init, InsertMultipleBefore, Purge, RemoveAll, ResourceGetName, String, V_strncpy<int>, memcpy, operator const UtlSymId_t, operator==, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CWeakHandle<InfoForResourceTypeCModel>::InitUntyped, _V_strncpy, CUtlSymbolTable::Find, CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::SetCount, CUtlString::operator=, CUtlString::Get, CUtlString::FreeMemoryBlock, CUtlMemory<CUtlString, int>::Purge, BreakModelList, CUtlSymbolTable::AddString, CBreakModelsPrecached::ComputeServerSideSpawn, FixupResourceName (21 total)
// strings: "PropBreakablePrecacheAll, ignoring %s since g_pBreakModelsPrecached == NULL (connection t
// globals: g_pBreakModelsPrecached, PropBreakablePrecacheAll(ResourceBindingBase_t const*,CEntityPrecacheContext const*)
void __fastcall PropBreakablePrecacheAll(ResourceHandle_t hResource, const CEntityPrecacheContext *pContext)
{
  ResourceNameHandle_t m_Name; // rax
  const char *m_Id; // rsi
  CBreakModelsPrecached::BreakModelInfo_t *v5; // rcx
  int m_Size; // r12d
  CUtlString *m_pMemory; // r13
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // r14
  void (__fastcall *v12)(IEntityResourceManifest *, const char *, void (__fastcall *)(ResourceHandle_t, const CEntityPrecacheContext *)); // r13
  const char *v13; // rax
  int v14; // ebx
  __int64 i; // r12
  CBreakModelsPrecached *v16; // r13
  int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // r15
  int v20; // r12d
  CBreakModelsPrecached::BreakModelInfo_t *v21; // r12
  CBreakModelsPrecached::BreakModelInfo_t *v22; // r12
  bool v23; // cc
  int m_nGrowSize; // eax
  CUtlString *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // r14
  CUtlString *v30; // rax
  __int64 v31; // r14
  int v32; // eax
  CUtlString *v33; // r13
  CUtlString *v34; // rax
  int m_nAllocationCount; // eax
  __int64 v36; // r15
  int j; // edx
  CBreakModelsPrecached::BreakModelInfo_t *v38; // rax
  const ResourceBindingBase_t *m_pBinding; // [rsp+10h] [rbp-3B0h]
  __int64 v40; // [rsp+10h] [rbp-3B0h]
  __int64 m_Size_low; // [rsp+18h] [rbp-3A8h]
  int v42; // [rsp+18h] [rbp-3A8h]
  unsigned __int16 v43; // [rsp+20h] [rbp-3A0h]
  HModel hModel; // [rsp+30h] [rbp-390h] BYREF
  HModel v45; // [rsp+40h] [rbp-380h] BYREF
  CUtlVector<breakmodel_t,CUtlMemory<breakmodel_t,int> > list; // [rsp+50h] [rbp-370h] BYREF
  char pOutResourceName[272]; // [rsp+70h] [rbp-350h] BYREF
  CResourceNameGetter modelName; // [rsp+180h] [rbp-240h] BYREF
  unsigned __int64 v49; // [rsp+388h] [rbp-38h]

  hModel.m_pBinding = 0;
  v49 = __readfsqword(0x28u);
  CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(&hModel, hResource);
  if ( hModel.m_pBinding == 0 )
    return;
  m_Name = hModel.m_pBinding->m_Name;
  if ( m_Name != 0 )
  {
    m_Id = "";
    if ( m_Name->m_ResourceNameSymbol.u.m_Id != 0 )
      m_Id = m_Name->m_ResourceNameSymbol.u.m_Id;
    _V_strncpy(&modelName, m_Id, 512);
  }
  else
  {
    _V_strncpy(&modelName, "", 512);
  }
  if ( g_pBreakModelsPrecached != 0 )
  {
    CUtlSymbolTable::Find(&g_pBreakModelsPrecached->m_modelList.m_SymbolTable, modelName.m_Buffer);
    if ( LOWORD(list.m_Size) != 0xFFFF )
    {
      m_Size_low = LOWORD(list.m_Size);
LABEL_9:
      list.m_Size = 0;
      list.m_Memory.m_pMemory = 0;
      list.m_Memory.m_nAllocationCount = 0;
      list.m_Memory.m_nGrowSize = 0;
      v5 = &g_pBreakModelsPrecached->m_modelList.m_Vector.m_Memory.m_pMemory[m_Size_low];
      m_Size = v5->m_breakModelNames.m_Size;
      m_pMemory = v5->m_breakModelNames.m_Memory.m_pMemory;
      CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::SetCount(&list, v5->m_breakModelNames.m_Size);
      if ( m_Size > 0 )
      {
        v8 = 8LL * (m_Size - 1) + 8;
        v9 = 0;
        do
        {
          CUtlString::operator=((list.m_Memory.m_pMemory + v9), &m_pMemory[v9 / 8]);
          v9 += 8LL;
        }
        while ( v9 != v8 );
      }
      if ( list.m_Size <= 0 )
      {
        v14 = list.m_Size;
      }
      else
      {
        v10 = 0;
        v11 = 8LL * (list.m_Size - 1) + 8;
        do
        {
          v12 = *(*pContext->m_pManifest + 8LL);
          v13 = CUtlString::Get((list.m_Memory.m_pMemory + v10));
          v12(pContext->m_pManifest, v13, PropBreakablePrecacheAll);
          v10 += 8;
        }
        while ( v10 != v11 );
        v14 = list.m_Size;
      }
      for ( i = 8LL * v14 - 8; --v14 >= 0; i -= 8 )
      {
        if ( *(&list.m_Memory.m_pMemory->offset.m_vPosition.x + i) != 0 )
          CUtlString::FreeMemoryBlock((list.m_Memory.m_pMemory + i));
      }
      list.m_Size = 0;
      if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CUtlString,int>::Purge(&list.m_Memory);
        if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CUtlString,int>::Purge(&list.m_Memory);
      }
      return;
    }
    list.m_Size = 0;
    list.m_Memory.m_pMemory = 0;
    list.m_Memory.m_nAllocationCount = 0;
    v45.m_pBinding = hModel.m_pBinding;
    list.m_Memory.m_nGrowSize = 0;
    BreakModelList(&list, &v45, 0.0, 0.0, 4);
    v16 = g_pBreakModelsPrecached;
    v17 = list.m_Size;
    m_pBinding = hModel.m_pBinding;
    CUtlSymbolTable::AddString(&g_pBreakModelsPrecached->m_modelList.m_SymbolTable, modelName.m_Buffer);
    v18 = v43;
    v19 = v16->m_modelList.m_Vector.m_Size;
    if ( v43 >= v19 )
    {
      v20 = v43 + 1;
      if ( v19 < v20 )
      {
        v42 = v20 - v19;
        if ( v20 != v19 )
        {
          m_nAllocationCount = v16->m_modelList.m_Vector.m_Memory.m_nAllocationCount;
          if ( v20 > m_nAllocationCount )
            CUtlMemory<CBreakModelsPrecached::BreakModelInfo_t,int>::Grow(
              &v16->m_modelList.m_Vector.m_Memory,
              v20 - m_nAllocationCount);
          v16->m_modelList.m_Vector.m_Size = v20;
          if ( v42 > 0 )
          {
            v21 = v16->m_modelList.m_Vector.m_Memory.m_pMemory;
            v36 = v19;
            for ( j = 0; j < v42; ++j )
            {
              v38 = &v21[v36];
              if ( &v21[v36] != 0 )
              {
                v38->m_breakModelNames.m_Size = 0;
                v38->m_breakModelNames.m_Memory.m_pMemory = 0;
                v38->m_breakModelNames.m_Memory.m_nAllocationCount = 0;
                v38->m_breakModelNames.m_Memory.m_nGrowSize = 0;
                v21 = v16->m_modelList.m_Vector.m_Memory.m_pMemory;
              }
              ++v36;
            }
            v18 = v43;
            goto LABEL_28;
          }
          v18 = v43;
        }
      }
    }
    v21 = v16->m_modelList.m_Vector.m_Memory.m_pMemory;
LABEL_28:
    m_Size_low = v18;
    v22 = &v21[v18];
    v45.m_pBinding = m_pBinding;
    v22->m_bSpawnServerSide = CBreakModelsPrecached::ComputeServerSideSpawn(v16, &v45);
    v22->m_bComputedChildSpawnMask = v17 == 0;
    v23 = v17 <= v22->m_breakModelNames.m_Memory.m_nAllocationCount;
    v22->m_nChildSpawnServerSideMask = 0;
    if ( !v23 )
    {
      m_nGrowSize = v22->m_breakModelNames.m_Memory.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          v33 = v22->m_breakModelNames.m_Memory.m_pMemory;
          v34 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v17);
          v22->m_breakModelNames.m_Memory.m_pMemory = v34;
          if ( v33 != 0 )
            memcpy(v34, v33, 8LL * v22->m_breakModelNames.m_Memory.m_nAllocationCount);
          v22->m_breakModelNames.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v25 = v22->m_breakModelNames.m_Memory.m_pMemory;
          v26 = *g_pMemAlloc;
          if ( v25 != 0 )
            v27 = (*(v26 + 8))(g_pMemAlloc, v25, 8LL * v17);
          else
            v27 = (*v26)(g_pMemAlloc, 8LL * v17);
          v22->m_breakModelNames.m_Memory.m_pMemory = v27;
        }
        v22->m_breakModelNames.m_Memory.m_nAllocationCount = v17;
      }
    }
    if ( v17 > 0 )
    {
      v28 = 0;
      v40 = 1104 * ((v17 - 1) + 1LL);
      do
      {
        v31 = v22->m_breakModelNames.m_Size;
        v32 = v22->m_breakModelNames.m_Size;
        if ( v31 == v22->m_breakModelNames.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&v22->m_breakModelNames.m_Memory, 1);
          v32 = v22->m_breakModelNames.m_Size;
        }
        v29 = v31;
        v22->m_breakModelNames.m_Size = v32 + 1;
        v30 = &v22->m_breakModelNames.m_Memory.m_pMemory[v29];
        if ( v30 != 0 )
          v30->m_pString = 0;
        FixupResourceName(list.m_Memory.m_pMemory[v28 / 0x450].modelName, pOutResourceName, 260);
        CUtlString::operator=(&v22->m_breakModelNames.m_Memory.m_pMemory[v29], pOutResourceName);
        v28 += 1104LL;
      }
      while ( v28 != v40 );
    }
    list.m_Size = 0;
    if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<breakmodel_t,int>::Purge(&list.m_Memory);
      if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<breakmodel_t,int>::Purge(&list.m_Memory);
    }
    goto LABEL_9;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
    LoggingSystem_Log(
      LOG_SERVER,
      2,
      "PropBreakablePrecacheAll, ignoring %s since g_pBreakModelsPrecached == NULL (connection to server aborted?)\n",
      modelName.m_Buffer);
}


// GetBreakableInfoForProp  (line 1665, @0x0000000002052230, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeCModel>, ComputeChildSpawnMask, Find, FindBreakModel, GetResourceName, GetResourceName<512ul>, IsInList, ResourceGetName, String, V_strncpy<int>, operator const UtlSymId_t, operator[]
// calls: _V_strncpy, CUtlSymbolTable::Find, Warning, CUtlString::Get, __stack_chk_fail
// callers: CBreakableProp::Spawn
// strings: "GetNumPrecachedBreakablesForProp discovered no precached break models for model \"%s\".\n
// globals: g_pBreakModelsPrecached
void __fastcall GetBreakableInfoForProp(HModel hModel, int *pCount, uint32 *pChildServerSideSpawnMask)
{
  const char **v4; // rax
  const char *v5; // rsi
  CBreakModelsPrecached *v6; // r13
  CUtlSymbolTable *p_m_SymbolTable; // rbx
  __int64 v8; // r15
  CBreakModelsPrecached::BreakModelInfo_t *m_pMemory; // rax
  int *p_m_Size; // rdx
  __int64 v11; // r14
  const char *v12; // rax
  char v13; // cl
  CBreakModelsPrecached::BreakModelInfo_t *v14; // rax
  int v15; // [rsp+4h] [rbp-25Ch]
  unsigned __int16 v17; // [rsp+10h] [rbp-250h]
  CResourceNameGetter modelName; // [rsp+20h] [rbp-240h] BYREF
  unsigned __int64 v19; // [rsp+228h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  if ( hModel.m_pBinding->m_pData != 0 && (v4 = *(hModel.m_pBinding->m_pData + 1)) != 0 )
  {
    v5 = "";
    if ( *v4 != 0 )
      v5 = *v4;
    _V_strncpy(&modelName, v5, 512);
  }
  else
  {
    _V_strncpy(&modelName, "", 512);
  }
  v6 = g_pBreakModelsPrecached;
  p_m_SymbolTable = &g_pBreakModelsPrecached->m_modelList.m_SymbolTable;
  CUtlSymbolTable::Find(&g_pBreakModelsPrecached->m_modelList.m_SymbolTable, modelName.m_Buffer);
  if ( v17 == 0xFFFF )
  {
    Warning(
      "GetNumPrecachedBreakablesForProp discovered no precached break models for model \"%s\".\n"
      "Ensure PropBreakablePrecacheAll was called first.\n",
      modelName.m_Buffer);
    *pCount = 0;
    if ( pChildServerSideSpawnMask != 0 )
      *pChildServerSideSpawnMask = 0;
  }
  else
  {
    v8 = v17;
    *pCount = v6->m_modelList.m_Vector.m_Memory.m_pMemory[v8].m_breakModelNames.m_Size;
    if ( pChildServerSideSpawnMask != 0 )
    {
      m_pMemory = v6->m_modelList.m_Vector.m_Memory.m_pMemory;
      p_m_Size = &m_pMemory[v8].m_breakModelNames.m_Size;
      if ( !m_pMemory[v8].m_bComputedChildSpawnMask )
      {
        v15 = *p_m_Size;
        if ( *p_m_Size <= 0 )
        {
          v14 = &m_pMemory[v8];
        }
        else
        {
          v11 = 0;
          do
          {
            while ( 1 )
            {
              v12 = CUtlString::Get(&m_pMemory[v8].m_breakModelNames.m_Memory.m_pMemory[v11]);
              CUtlSymbolTable::Find(p_m_SymbolTable, v12);
              m_pMemory = v6->m_modelList.m_Vector.m_Memory.m_pMemory;
              if ( m_pMemory[v17].m_bSpawnServerSide )
                break;
              if ( v15 <= ++v11 )
                goto LABEL_17;
            }
            v13 = v11++;
            m_pMemory[v8].m_nChildSpawnServerSideMask |= 1 << v13;
            m_pMemory = v6->m_modelList.m_Vector.m_Memory.m_pMemory;
          }
          while ( v15 > v11 );
LABEL_17:
          v14 = &m_pMemory[v8];
        }
        v14->m_bComputedChildSpawnMask = 1;
        *pChildServerSideSpawnMask = v6->m_modelList.m_Vector.m_Memory.m_pMemory[v8].m_nChildSpawnServerSideMask;
      }
    }
  }
}


// PrecacheGibsForModel  (line 1684, @0x0000000002052420, libserver.so)  // inlines: CBreakParser, CTransform, ResourceHandleToData<InfoForResourceTypeCModel>, VectorAligned, breakmodel_t, operator int
// calls: CModel::GetCollisionEmbeddedKeyvalues, VPhysicsKeyParserCreate, V_stricmp_fast, CBaseEntity::PrecacheModel, VPhysicsKeyParserDestroy, __stack_chk_fail
// callers: OnPrecacheGibsForModel
void __fastcall PrecacheGibsForModel(HModel hModel, IEntityResourceManifest *pManifest)
{
  const CModel *const *m_pData; // rax
  const char *CollisionEmbeddedKeyvalues; // rax
  IVPhysicsKeyParser *i; // rbx
  __int64 v6; // rax
  CBreakParser breakParser; // [rsp+0h] [rbp-4B0h] BYREF
  breakmodel_t breakModel; // [rsp+20h] [rbp-490h] BYREF
  unsigned __int64 v9; // [rsp+478h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  m_pData = hModel.m_pBinding->m_pData;
  if ( hModel.m_pBinding->m_pData != 0 && *(m_pData + 6) > 0 && *m_pData != 0 )
  {
    CollisionEmbeddedKeyvalues = CModel::GetCollisionEmbeddedKeyvalues(*m_pData);
    if ( CollisionEmbeddedKeyvalues != 0 )
    {
      breakParser.m_defaultCollisionGroup = 4;
      breakParser._vptr_IVPhysicsKeyHandler = &off_3FEAF30;
      breakParser.m_defaultBurstScale = 1.0;
      breakParser.m_defaultBurstRandomize = 0.0;
      for ( i = VPhysicsKeyParserCreate(CollisionEmbeddedKeyvalues);
            (*(i->_vptr_IVPhysicsKeyParser + 3))(i) == 0;
            (*(i->_vptr_IVPhysicsKeyParser + 10))(i) )
      {
        while ( 1 )
        {
          v6 = (*(i->_vptr_IVPhysicsKeyParser + 2))(i);
          if ( V_stricmp_fast(v6, "break") != 0 )
            break;
          breakModel.offset.m_vPosition.w = 0.0;
          (*(i->_vptr_IVPhysicsKeyParser + 8))(i, &breakModel, &breakParser);
          CBaseEntity::PrecacheModel(breakModel.modelName, pManifest);
          if ( (*(i->_vptr_IVPhysicsKeyParser + 3))(i) != 0 )
            goto LABEL_9;
        }
      }
LABEL_9:
      VPhysicsKeyParserDestroy(i);
    }
  }
}


// OnPrecacheGibsForModel  (line 1719, @0x0000000002052e10, libserver.so)  // inlines: CWeakHandle, FromUntypedHandle
// calls: CWeakHandle<InfoForResourceTypeCModel>::InitUntyped, PrecacheGibsForModel
void __fastcall OnPrecacheGibsForModel(ResourceHandle_t hModel, const CEntityPrecacheContext *pContext)
{
  IEntityResourceManifest *m_pManifest; // r12
  CWeakHandle<InfoForResourceTypeCModel> v3; // [rsp+0h] [rbp-20h] BYREF

  if ( pContext != 0 )
    m_pManifest = pContext->m_pManifest;
  else
    m_pManifest = 0;
  v3.m_pBinding = 0;
  CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(&v3, hModel);
  PrecacheGibsForModel(&v3, m_pManifest);
}


// BuildGibList  (line 1733, @0x00000000020531f0, libserver.so)  // inlines: CWeakHandle, Init
// calls: BreakModelList
void __fastcall BuildGibList(
        CUtlVector<breakmodel_t,CUtlMemory<breakmodel_t,int> > *const list,
        HModel hModel,
        float defBurstScale,
        float defBurstRandomize,
        int defCollisionGroup)
{
  HModel hModela; // [rsp+0h] [rbp-10h] BYREF

  hModela.m_pBinding = hModel.m_pBinding->m_pData;
  BreakModelList(list, &hModela, defBurstScale, defBurstRandomize, defCollisionGroup);
}


// CreateGibsFromList  (line 1749, @0x0000000002054a20, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CTransform, CWeakHandle, CollisionSize, CopyConstruct<CHandle<CBaseEntity> >, Element, GetBool, GetEHandle, GetEntryIndex, GetInt, GetSerialNumber, GrowMemory, Init, OBBSize, RandomPointInBounds, Set, SmallestAxis, String, ToCStr, V_strncpy<long unsigned int>, Vector, VectorAdd, VectorAligned, VectorITransform, VectorMultiply, VectorSubtract, VectorTransform, breakmodel_t, operator*, operator*=, operator+, operator-, operator->, operator=, operator==, operator[]
// calls: CModel::HasCollision, IPhysicsBody::GetGameData, __dynamic_cast, CBaseAnimating::GetS1Skin, GetPlacementOriginTransform, AngleMatrix, CBaseAnimating::LookupBone, CBaseAnimating::GetBonePosition, VectorNormalize, RandomFloat, CModel::numskinfamilies, CModel::GetMaterialGroupTokenForIndex (34 total)
// strings: "Unable to create non-precached breakmodel %s\n", "PropBreakableCreateAll: Could not create model %s\n"
// globals: nFrameNumber, nPropBreakablesPerFrameCount, `typeinfo for'IBreakableWithPropData, g_pPropDataSystem
CBaseEntity *__fastcall CreateGibsFromList(
        CUtlVector<breakmodel_t,CUtlMemory<breakmodel_t,int> > *const list,
        HModel hModel,
        IPhysicsObject *pPhysics,
        const breakablepropparams_t *const params,
        CBaseEntity *pEntity,
        int iPrecomputedBreakableCount,
        bool bIgnoreGibLimit,
        bool defaultLocation,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pGibList)
{
  void *m_pData; // rdx
  unsigned __int8 (__fastcall *v12)(IGameModelInfo *, matrix3x4_t *); // rax
  int v13; // eax
  const CModel **v14; // rax
  const CModel *v15; // rdi
  const CBaseAnimating *v16; // rax
  __int64 v17; // r13
  unsigned __int8 (__fastcall *v18)(IGameModelInfo *, matrix3x4_t *); // rax
  mp_break_t mpBreakMode; // eax
  breakmodel_t *v20; // rsi
  int v21; // eax
  const CModel **v22; // rax
  const CModel *v23; // rdi
  int v24; // eax
  int v25; // esi
  const CModel *v26; // rdi
  CUtlStringToken nSkin; // eax
  CBaseEntity *v28; // rbx
  breakmodel_t *v29; // rax
  const Vector *origin; // rax
  float v31; // xmm1_4
  float v32; // xmm2_4
  breakmodel_t *m_pMemory; // rax
  float burstScale; // xmm3_4
  CBaseEntity *v35; // rax
  CEntityIdentity *m_pEntity; // rax
  int v37; // edx
  __int16 v38; // cx
  __int64 m_Size; // rbx
  int v40; // eax
  float *p_m_Index; // rax
  int v43; // eax
  float v44; // xmm1_4
  vec_t v45; // xmm1_4
  vec_t v46; // xmm2_4
  void *v47; // rax
  void *v48; // rbx
  Vector *p_vecMaxs; // rax
  Vector *p_vecMins; // rcx
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  vec_t v54; // xmm2_4
  vec_t v55; // xmm0_4
  float v56; // xmm3_4
  int v57; // eax
  const CModel *v58; // rdi
  CUtlStringToken v59; // eax
  CBaseEntity *v60; // rax
  CBaseEntity *v61; // r12
  float *v62; // rax
  float v63; // xmm1_4
  float v64; // xmm0_4
  float v65; // xmm2_4
  IPhysicsObject *Object; // rax
  vec_t v67; // xmm1_4
  IPhysicsObject *v68; // rax
  CBaseEntity *v69; // rax
  CEntityIdentity *v70; // rax
  int v71; // edx
  __int16 v72; // cx
  __int64 v73; // r12
  int v74; // eax
  vec_t *v75; // rax
  int v76; // r12d
  const char *v77; // rsi
  const char *RandomChunkModel; // rax
  float v79; // xmm0_4
  float defBurstScale; // xmm0_4
  float defBurstRandomize; // xmm0_4
  CCollisionProperty *m_pCollision; // rdi
  float z; // xmm2_4
  float y; // xmm0_4
  float x; // xmm1_4
  const Vector *AbsOrigin; // rax
  int nActualSkin; // [rsp+28h] [rbp-608h]
  int m_nValue; // [rsp+2Ch] [rbp-604h]
  CBaseEntity *pFirstBreakable; // [rsp+38h] [rbp-5F8h]
  CBaseAnimating *pOwnerAnim; // [rsp+40h] [rbp-5F0h]
  float flScale; // [rsp+50h] [rbp-5E0h]
  CBaseEntity *v93; // [rsp+58h] [rbp-5D8h]
  float angles; // [rsp+68h] [rbp-5C8h]
  QAngle *anglesa; // [rsp+68h] [rbp-5C8h]
  float v97; // [rsp+78h] [rbp-5B8h]
  CBaseEntity *pOwnerEntity_0; // [rsp+80h] [rbp-5B0h]
  int i; // [rsp+94h] [rbp-59Ch]
  int ia; // [rsp+94h] [rbp-59Ch]
  Vector vecObbSize; // [rsp+A0h] [rbp-590h] BYREF
  Vector vecMins; // [rsp+B0h] [rbp-580h] BYREF
  Vector vecMaxs; // [rsp+C0h] [rbp-570h] BYREF
  Vector vecBurstDir_0; // [rsp+D0h] [rbp-560h] BYREF
  Vector vecVelocity; // [rsp+E0h] [rbp-550h] BYREF
  QAngle vecAngles; // [rsp+F0h] [rbp-540h] BYREF
  Vector vecBreakableObbSize; // [rsp+100h] [rbp-530h] BYREF
  matrix3x4a_t parentPlacementOriginTransform; // [rsp+110h] [rbp-520h] BYREF
  Vector pos; // [rsp+140h] [rbp-4F0h] BYREF
  matrix3x4_t matrix_0; // [rsp+170h] [rbp-4C0h] BYREF
  breakmodel_t breakModel; // [rsp+1A0h] [rbp-490h] BYREF
  unsigned __int64 v114; // [rsp+5F8h] [rbp-38h]
  Vector v116; // 0:kr00_12.12
  Vector v117; // 0:kr14_12.12

  m_pData = hModel.m_pBinding->m_pData;
  v114 = __readfsqword(0x28u);
  v12 = *(modelinfo->_vptr_IAppSystem + 14);
  *&matrix_0.m_flMatVal[0][0] = m_pData;
  if ( v12(modelinfo, &matrix_0) == 0 )
    return 0;
  m_nValue = props_break_max_pieces_perframe.m_pParent->m_Value.m_nValue;
  if ( m_nValue != -1 )
  {
    if ( gpGlobals->framecount == nFrameNumber )
    {
      v13 = nPropBreakablesPerFrameCount;
    }
    else
    {
      nFrameNumber = gpGlobals->framecount;
      v13 = 0;
      nPropBreakablesPerFrameCount = 0;
    }
    if ( m_nValue <= v13 )
      return 0;
  }
  if ( !bIgnoreGibLimit )
  {
    v43 = props_break_max_pieces.m_pParent->m_Value.m_nValue;
    if ( v43 != -1 )
    {
      if ( iPrecomputedBreakableCount != -1 )
      {
        if ( iPrecomputedBreakableCount <= v43 )
          v43 = iPrecomputedBreakableCount;
        iPrecomputedBreakableCount = v43;
        v14 = hModel.m_pBinding->m_pData;
        if ( hModel.m_pBinding->m_pData == 0 )
          goto LABEL_67;
        goto LABEL_8;
      }
      iPrecomputedBreakableCount = props_break_max_pieces.m_pParent->m_Value.m_nValue;
    }
  }
  v14 = hModel.m_pBinding->m_pData;
  if ( hModel.m_pBinding->m_pData == 0 )
  {
LABEL_67:
    v15 = 0;
    goto LABEL_9;
  }
LABEL_8:
  v15 = *v14;
LABEL_9:
  if ( !CModel::HasCollision(v15) )
    return 0;
  pOwnerEntity_0 = pEntity;
  if ( pPhysics != 0 )
    pOwnerEntity_0 = IPhysicsBody::GetGameData(pPhysics);
  if ( pOwnerEntity_0 != 0 )
  {
    v16 = __dynamic_cast(pOwnerEntity_0, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseAnimating, 0);
    pOwnerAnim = v16;
    if ( v16 != 0 )
      nActualSkin = CBaseAnimating::GetS1Skin(v16);
    else
      nActualSkin = 0;
  }
  else
  {
    pOwnerAnim = 0;
    nActualSkin = 0;
  }
  *&matrix_0.m_flMatVal[0][0] = hModel.m_pBinding->m_pData;
  GetPlacementOriginTransform(&matrix_0, pOwnerAnim, &parentPlacementOriginTransform);
  if ( list->m_Size != 0 )
  {
    if ( list->m_Size > 0 )
    {
      i = 0;
      v17 = 0;
      pFirstBreakable = 0;
      while ( 1 )
      {
        (*(modelinfo->_vptr_IAppSystem + 13))(&vecMins, modelinfo, list->m_Memory.m_pMemory[v17].modelName);
        v18 = *(modelinfo->_vptr_IAppSystem + 14);
        *&matrix_0.m_flMatVal[0][0] = *&vecMins.x;
        if ( v18(modelinfo, &matrix_0) != 0 )
        {
          Warning("Unable to create non-precached breakmodel %s\n", list->m_Memory.m_pMemory[v17].modelName);
        }
        else if ( gpGlobals->maxClients <= 1
               || breakable_multiplayer.m_pParent->m_Value.m_nValue == 0
               || (mpBreakMode = list->m_Memory.m_pMemory[v17].mpBreakMode) != mp_break_t::MULTIPLAYER_BREAK_CLIENTSIDE
               && (defaultLocation || mpBreakMode != mp_break_t::MULTIPLAYER_BREAK_DEFAULT) )
        {
          if ( m_nValue != -1 && nPropBreakablesPerFrameCount > m_nValue
            || i >= iPrecomputedBreakableCount && iPrecomputedBreakableCount != -1 )
          {
            return pFirstBreakable;
          }
          AngleMatrix(params->angles, params->origin, &pos);
          ++nPropBreakablesPerFrameCount;
          vecMaxs = vec3_origin;
          vecBurstDir_0 = *params->angles;
          if ( pOwnerAnim != 0 && (v20 = &list->m_Memory.m_pMemory[v17])->placementName[0] != 0 )
          {
            if ( v20->placementIsBone )
            {
              v21 = CBaseAnimating::LookupBone(pOwnerAnim, v20->placementName);
              if ( v21 >= 0 )
              {
                CBaseAnimating::GetBonePosition(pOwnerAnim, v21, &vecMaxs, &vecBurstDir_0);
                AngleMatrix(&vecBurstDir_0, &vecMaxs, &pos);
              }
            }
            else
            {
              CBaseAnimating::GetAttachment(pOwnerAnim, v20->placementName, &vecMaxs, &vecBurstDir_0);
              AngleMatrix(&vecBurstDir_0, &vecMaxs, &pos);
            }
          }
          else
          {
            *&vecBreakableObbSize.x = *&vecMins.x;
            GetPlacementOriginTransform(&vecBreakableObbSize, 0, &matrix_0);
            VectorITransform(&list->m_Memory.m_pMemory[v17].offset.m_vPosition.x, &matrix_0, &vecBreakableObbSize.x);
            VectorTransform(&vecBreakableObbSize.x, &pos, &vecMaxs.x);
          }
          vecVelocity = *params->velocity;
          flScale = VectorNormalize(&vecVelocity);
          vecVelocity.x = RandomFloat(-1.0, 1.0) + vecVelocity.x;
          vecVelocity.y = RandomFloat(-1.0, 1.0) + vecVelocity.y;
          vecVelocity.z = RandomFloat(0.0, 1.0) + vecVelocity.z;
          VectorNormalize(&vecVelocity);
          vecVelocity.x = vecVelocity.x * flScale;
          vecVelocity.y = vecVelocity.y * flScale;
          vecVelocity.z = flScale * vecVelocity.z;
          if ( pPhysics != 0 && !params->useThisRawVelocity )
          {
            (*(*pPhysics + 1728LL))(pPhysics, &vecMaxs, &vecVelocity);
            v22 = hModel.m_pBinding->m_pData;
            if ( hModel.m_pBinding->m_pData == 0 )
              goto LABEL_78;
LABEL_34:
            v23 = *v22;
          }
          else
          {
            v22 = hModel.m_pBinding->m_pData;
            if ( hModel.m_pBinding->m_pData != 0 )
              goto LABEL_34;
LABEL_78:
            v23 = 0;
          }
          v24 = CModel::numskinfamilies(v23);
          v25 = 0;
          if ( nActualSkin <= v24 )
            v25 = nActualSkin;
          if ( hModel.m_pBinding->m_pData != 0 )
            v26 = *hModel.m_pBinding->m_pData;
          else
            v26 = 0;
          nSkin.m_nHashCode = CModel::GetMaterialGroupTokenForIndex(v26, v25).m_nHashCode;
          v28 = BreakModelCreateSingle(
                  pOwnerEntity_0,
                  &list->m_Memory.m_pMemory[v17],
                  &vecMaxs,
                  &vecBurstDir_0,
                  &vecVelocity,
                  params->angularVelocity,
                  nSkin,
                  params);
          if ( v28 != 0 )
          {
            if ( pOwnerEntity_0 != 0 && (pOwnerEntity_0->m_fEffects.m_Value & 0x10) != 0 )
              CBaseEntity::AddEffects(v28, 16);
            v29 = &list->m_Memory.m_pMemory[v17];
            if ( v29->burstScale != 0.0 || v29->burstRandomize != 0.0 )
            {
              origin = params->origin;
              v31 = vecMaxs.y - params->origin->y;
              v32 = vecMaxs.z - params->origin->z;
              vecAngles.x = vecMaxs.x - params->origin->x;
              vecAngles.y = v31;
              vecAngles.z = v32;
              if ( vecAngles.x == vec3_origin.x && v31 == vec3_origin.y && v32 == vec3_origin.z )
              {
                anglesa = origin;
                *&matrix_0.m_flMatVal[0][0] = (*(v28->_vptr_IHandleEntity + 62))(v28);
                matrix_0.m_flMatVal[0][2] = v44;
                v45 = v44 - anglesa->z;
                v46 = matrix_0.m_flMatVal[0][0] - anglesa->x;
                vecAngles.y = matrix_0.m_flMatVal[0][1] - anglesa->y;
                vecAngles.z = v45;
                vecAngles.x = v46;
              }
              VectorNormalize(&vecAngles);
              angles = list->m_Memory.m_pMemory[v17].burstRandomize;
              v116 = RandomVectorInUnitSphere();
              m_pMemory = list->m_Memory.m_pMemory;
              vecBreakableObbSize = v116;
              burstScale = m_pMemory[v17].burstScale;
              matrix_0.m_flMatVal[0][1] = (v116.y * angles) + (vecAngles.y * burstScale);
              matrix_0.m_flMatVal[0][2] = (v116.z * angles) + (vecAngles.z * burstScale);
              matrix_0.m_flMatVal[0][0] = (angles * v116.x) + (burstScale * vecAngles.x);
              CBaseEntity::ApplyAbsVelocityImpulse(v28, &matrix_0);
              v29 = &list->m_Memory.m_pMemory[v17];
            }
            if ( v29->isMotionDisabled )
              CBaseEntity::PhysicsEnableMotion(v28, 0);
            v35 = pFirstBreakable;
            if ( pFirstBreakable == 0 )
              v35 = v28;
            pFirstBreakable = v35;
            if ( pGibList != 0 )
            {
              matrix_0.m_flMatVal[0][0] = NAN;
              m_pEntity = v28->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v37 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                v38 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v38 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(matrix_0.m_flMatVal[0][0]) = v38 | LOWORD(matrix_0.m_flMatVal[0][0]) & 0x8000;
                LODWORD(matrix_0.m_flMatVal[0][0]) = (v37 << 15) | LOWORD(matrix_0.m_flMatVal[0][0]) & 0x7FFF;
              }
              m_Size = pGibList->m_Size;
              v40 = pGibList->m_Size;
              if ( m_Size == pGibList->m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&pGibList->m_Memory, 1);
                v40 = pGibList->m_Size;
              }
              pGibList->m_Size = v40 + 1;
              p_m_Index = &pGibList->m_Memory.m_pMemory[m_Size].m_Index;
              if ( p_m_Index != 0 )
                *p_m_Index = matrix_0.m_flMatVal[0][0];
            }
          }
        }
        ++i;
        ++v17;
        if ( list->m_Size <= i )
          return pFirstBreakable;
      }
    }
    return 0;
  }
  if ( pEntity == 0 )
    return 0;
  v47 = __dynamic_cast(pEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'IBreakableWithPropData, -2);
  v48 = v47;
  if ( v47 == 0 )
    return 0;
  (*(*v47 + 120LL))(&matrix_0, v47);
  if ( *&matrix_0.m_flMatVal[0][0] == 0 || (*(*v48 + 152LL))(v48) == 0 )
    return 0;
  breakModel.offset.m_vPosition.w = 0.0;
  ia = 0;
  v93 = 0;
  while ( ia < (*(*v48 + 152LL))(v48) && (ia < iPrecomputedBreakableCount || iPrecomputedBreakableCount == -1) )
  {
    v76 = (*(*v48 + 168LL))(v48);
    (*(*v48 + 120LL))(&matrix_0, v48);
    v77 = "";
    if ( *&matrix_0.m_flMatVal[0][0] != 0 )
      v77 = *&matrix_0.m_flMatVal[0][0];
    RandomChunkModel = CPropData::GetRandomChunkModel(g_pPropDataSystem, v77, v76);
    _V_strncpy(breakModel.modelName, RandomChunkModel, 512);
    (*(modelinfo->_vptr_IAppSystem + 13))(&matrix_0, modelinfo, breakModel.modelName);
    if ( *&matrix_0.m_flMatVal[0][0] == 0 )
    {
      DevWarning("PropBreakableCreateAll: Could not create model %s\n", breakModel.modelName);
      goto LABEL_113;
    }
    breakModel.health = 1.0;
    v79 = RandomFloat(5.0, 10.0);
    breakModel.isRagdoll = 0;
    breakModel.fadeTime = v79;
    defBurstScale = params->defBurstScale;
    breakModel.fadeMinDist = 0.0;
    breakModel.burstScale = defBurstScale;
    defBurstRandomize = params->defBurstRandomize;
    m_pCollision = pEntity->m_pCollision;
    breakModel.fadeMaxDist = 0.0;
    breakModel.burstRandomize = defBurstRandomize;
    breakModel.collisionGroup = 5;
    breakModel.isMotionDisabled = 0;
    breakModel.placementName[0] = 0;
    breakModel.placementIsBone = 0;
    if ( m_pCollision != 0 )
    {
      z = m_pCollision->m_vecMaxs.m_Value.z - m_pCollision->m_vecMins.m_Value.z;
      y = m_pCollision->m_vecMaxs.m_Value.y - m_pCollision->m_vecMins.m_Value.y;
      x = m_pCollision->m_vecMaxs.m_Value.x - m_pCollision->m_vecMins.m_Value.x;
    }
    else
    {
      z = vec3_origin.z;
      y = vec3_origin.y;
      x = vec3_origin.x;
    }
    vecObbSize.x = x;
    vecObbSize.y = y;
    vecObbSize.z = z;
    if ( y > x )
    {
      if ( z > x )
      {
        p_vecMaxs = &vecMaxs;
        p_vecMins = &vecMins;
        goto LABEL_91;
      }
    }
    else if ( z > y )
    {
      p_vecMaxs = &vecMaxs.y;
      p_vecMins = &vecMins.y;
      goto LABEL_91;
    }
    p_vecMaxs = &vecMaxs.z;
    p_vecMins = &vecMins.z;
LABEL_91:
    vecMins.x = 0.0;
    vecMins.y = 0.0;
    vecMins.z = 0.0;
    vecMaxs.x = 1.0;
    vecMaxs.y = 1.0;
    vecMaxs.z = 1.0;
    p_vecMins->x = 0.5;
    p_vecMaxs->x = 0.5;
    if ( m_pCollision != 0 )
    {
      CCollisionProperty::RandomPointInBounds(m_pCollision, &vecMins, &vecMaxs, &breakModel.offset.m_vPosition);
      v51 = breakModel.offset.m_vPosition.x;
      v52 = breakModel.offset.m_vPosition.y;
      v53 = breakModel.offset.m_vPosition.z;
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
      v51 = AbsOrigin->x;
      v52 = AbsOrigin->y;
      v53 = AbsOrigin->z;
      breakModel.offset.m_vPosition.x = AbsOrigin->x;
      breakModel.offset.m_vPosition.y = v52;
      breakModel.offset.m_vPosition.z = v53;
    }
    v54 = v51 - params->origin->x;
    v55 = v53 - params->origin->z;
    vecBurstDir_0.y = v52 - params->origin->y;
    vecBurstDir_0.x = v54;
    vecBurstDir_0.z = v55;
    VectorNormalize(&vecBurstDir_0);
    v97 = params->defBurstRandomize;
    v117 = RandomVectorInUnitSphere();
    v56 = params->defBurstScale;
    *&matrix_0.m_flMatVal[0][0] = v117;
    vecVelocity.y = (v117.y * v97) + (vecBurstDir_0.y * v56);
    vecVelocity.z = (v117.z * v97) + (vecBurstDir_0.z * v56);
    vecVelocity.x = (v97 * v117.x) + (v56 * vecBurstDir_0.x);
    vecAngles = *CBaseEntity::GetAbsAngles(pEntity);
    v57 = (*(*v48 + 136LL))(v48);
    if ( hModel.m_pBinding->m_pData != 0 )
      v58 = *hModel.m_pBinding->m_pData;
    else
      v58 = 0;
    v59.m_nHashCode = CModel::GetMaterialGroupTokenForIndex(v58, v57).m_nHashCode;
    v60 = BreakModelCreateSingle(
            pOwnerEntity_0,
            &breakModel,
            &breakModel.offset.m_vPosition,
            &vecAngles,
            &vecVelocity,
            &vec3_origin,
            v59,
            params);
    v61 = v60;
    if ( v60 != 0 )
    {
      v62 = v60->m_pCollision;
      if ( v62 != 0 )
      {
        v63 = v62[18] - v62[15];
        v64 = v62[19] - v62[16];
        v65 = v62[17] - v62[14];
      }
      else
      {
        v64 = vec3_origin.z;
        v63 = vec3_origin.y;
        v65 = vec3_origin.x;
      }
      vecBreakableObbSize.x = v65;
      vecBreakableObbSize.y = v63;
      vecBreakableObbSize.z = v64;
      AngleMatrix(&vecAngles, &matrix_0);
      AlignBoxes(&matrix_0, &vecObbSize, &vecBreakableObbSize);
      MatrixAngles(&matrix_0, &vecAngles);
      if ( CBaseEntity::VPhysicsGetObject(v61) != 0 )
      {
        Object = CBaseEntity::VPhysicsGetObject(v61);
        *&pos.x = (*(*Object + 368LL))(Object);
        pos.z = v67;
        v68 = CBaseEntity::VPhysicsGetObject(v61);
        (*(*v68 + 1664LL))(v68, &pos, &vecAngles, 1);
      }
      CBaseEntity::SetAbsAngles(v61, &vecAngles);
      if ( (pOwnerEntity_0->m_fEffects.m_Value & 0x10) != 0 )
        CBaseEntity::AddEffects(v61, 16);
      v69 = v93;
      if ( v93 == 0 )
        v69 = v61;
      v93 = v69;
      if ( pGibList != 0 )
      {
        pos.x = NAN;
        v70 = v61->m_pEntity;
        if ( v70 != 0 )
        {
          v71 = (v70->m_EHandle.m_Index >> 15) - (v70->m_flags & 1);
          v72 = 0x7FFF;
          if ( v70->m_EHandle.m_Index != -1 )
            v72 = v70->m_EHandle.m_Index & 0x7FFF;
          LOWORD(pos.x) = v72 | LOWORD(pos.x) & 0x8000;
          LODWORD(pos.x) = (v71 << 15) | LOWORD(pos.x) & 0x7FFF;
        }
        v73 = pGibList->m_Size;
        v74 = pGibList->m_Size;
        if ( v73 == pGibList->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&pGibList->m_Memory, 1);
          v74 = pGibList->m_Size;
        }
        pGibList->m_Size = v74 + 1;
        v75 = &pGibList->m_Memory.m_pMemory[v73].m_Index;
        if ( v75 != 0 )
          *v75 = pos.x;
      }
    }
LABEL_113:
    ++ia;
  }
  return v93;
}


// IsPlayerAbleToLockOrUnlockDoor  (line 2076, @0x0000000002052560, libserver.so)  // inlines: Dot, DotProduct, FastSqrt, IsZero, Length, MatrixPosition, NormalizeInPlace, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// calls: CBaseAnimating::LookupBone, CBaseAnimating::LookupAttachment, CBaseAnimating::FindBodygroupByName, CBaseAnimating::GetBodygroup, CBasePlayer::EyePositionAndVectors, VectorNormalize
// strings: "DoorHandleBone", "DoorHandleBoneLeft", "RightHandle", "LeftHandle", "handles"
bool __fastcall IsPlayerAbleToLockOrUnlockDoor(CBaseAnimating *door, CBasePlayer *player)
{
  int v4; // r12d
  bool v5; // r12
  unsigned int v7; // r15d
  unsigned int v8; // r14d
  int BodygroupByName; // eax
  int Bodygroup; // eax
  unsigned int v11; // eax
  float v12; // [rsp+4h] [rbp-ACh]
  float v13; // [rsp+8h] [rbp-A8h]
  float v14; // [rsp+Ch] [rbp-A4h]
  float v15; // [rsp+10h] [rbp-A0h]
  float v16; // [rsp+18h] [rbp-98h]
  Vector eyePos; // [rsp+1Ch] [rbp-94h] BYREF
  float v18; // [rsp+28h] [rbp-88h]
  Vector eyeForward; // [rsp+30h] [rbp-80h] BYREF
  Vector eyeToLock; // [rsp+40h] [rbp-70h] BYREF
  matrix3x4_t attachmentMatrix; // [rsp+50h] [rbp-60h] BYREF

  v4 = CBaseAnimating::LookupBone(door, "DoorHandleBone");
  v5 = (v4 >= 0) & (CBaseAnimating::LookupBone(door, "DoorHandleBoneLeft") >= 0);
  if ( !v5 )
    return 0;
  v7 = CBaseAnimating::LookupAttachment(door, "RightHandle");
  v8 = CBaseAnimating::LookupAttachment(door, "LeftHandle");
  BodygroupByName = CBaseAnimating::FindBodygroupByName(door, "handles");
  if ( BodygroupByName >= 0 )
  {
    Bodygroup = CBaseAnimating::GetBodygroup(door, BodygroupByName);
    if ( Bodygroup == 0 )
      return 0;
    if ( Bodygroup == 2 )
    {
      v11 = v7;
      v7 = v8;
      v8 = v11;
    }
  }
  (*(door->_vptr_IHandleEntity + 220))(door, v7, &attachmentMatrix);
  eyePos.x = attachmentMatrix.m_flMatVal[0][3];
  v16 = attachmentMatrix.m_flMatVal[1][3];
  v14 = attachmentMatrix.m_flMatVal[2][3];
  (*(door->_vptr_IHandleEntity + 220))(door, v8, &attachmentMatrix);
  if ( eyePos.x > -0.0099999998
    && eyePos.x < 0.0099999998
    && v16 > -0.0099999998
    && v16 < 0.0099999998
    && v14 > -0.0099999998
    && v14 < 0.0099999998 )
  {
    return 0;
  }
  if ( attachmentMatrix.m_flMatVal[0][3] > -0.0099999998
    && attachmentMatrix.m_flMatVal[0][3] < 0.0099999998
    && attachmentMatrix.m_flMatVal[1][3] > -0.0099999998
    && attachmentMatrix.m_flMatVal[1][3] < 0.0099999998
    && attachmentMatrix.m_flMatVal[2][3] > -0.0099999998
    && attachmentMatrix.m_flMatVal[2][3] < 0.0099999998 )
  {
    return 0;
  }
  v13 = attachmentMatrix.m_flMatVal[1][3];
  v15 = attachmentMatrix.m_flMatVal[0][3];
  v12 = attachmentMatrix.m_flMatVal[2][3];
  CBasePlayer::EyePositionAndVectors(player, &eyePos.y, &eyeForward, 0, 0);
  eyeToLock.y = v16 - eyePos.z;
  eyeToLock.x = eyePos.x - eyePos.y;
  eyeToLock.z = v14 - v18;
  VectorNormalize(&eyeToLock);
  if ( fsqrt(
         (((eyePos.x - eyePos.y) * (eyePos.x - eyePos.y)) + ((v16 - eyePos.z) * (v16 - eyePos.z)))
       + ((v14 - v18) * (v14 - v18))) > fsqrt(
                                          (((v15 - eyePos.y) * (v15 - eyePos.y)) + ((v13 - eyePos.z) * (v13 - eyePos.z)))
                                        + ((v12 - v18) * (v12 - v18)))
    || (((eyeToLock.x * eyeForward.x) + (eyeToLock.y * eyeForward.y)) + (eyeToLock.z * eyeForward.z)) <= 0.0 )
  {
    return 0;
  }
  return v5;
}


