// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_break.cpp:182
class C_CBreakable_MapInstall {
	C_CBreakable_MapInstall();

	// sizeof = 1
};

// src/game/server/func_break.cpp:1364
class CPushable : public CBreakable {
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
	CPushable(CPushable &);
	CPushable(CPushable &);
	CPushable();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual bool CreateVPhysics();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual int ObjectCaps();
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	virtual uint64 PhysicsSolidMaskForEntity();
	virtual ~CPushable();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[49] CreateVPhysics
	// vtable[108] Use
	// vtable[19] ObjectCaps
	// vtable[90] OnTakeDamage
	// vtable[57] VPhysicsCollision
	// vtable[123] PhysicsSolidMaskForEntity
	// sizeof = 1400
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBreakable::GetDataDescMap  (line 125, @0x000000000221a430, libserver.so)
// globals: CBreakable::m_DataMap
datamap_t *__fastcall CBreakable::GetDataDescMap(CBreakable *const this)
{
  return &CBreakable::m_DataMap;
}


// CBreakable::AddDatadescMetadataKeys  (line 125, @0x0000000002226ae0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBreakable::GetEntityClass(void)
void __fastcall CBreakable::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBreakable::GetEntityClass);
}


// CBreakable::GetBaseMap  (line 125, @0x0000000002226b00, libserver.so)
datamap_t *__cdecl CBreakable::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CBreakable>  (line 125, @0x0000000002235980, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CBreakable"
// globals: `guard variable for'DataMapInit<CBreakable>(CBreakable *)::nameHolder, `guard variable for'DataMapInit<CBreakable>(CBreakable *)::dataDesc, CBreakable::GetEntityClass(void), CBreakable::m_DataMap, DataMapInit<CBreakable>(CBreakable *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBreakable>(CBreakable *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CBreakable>(CBreakable *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBreakable>(CBreakable *)::nameHolder) != 0 )
  {
    DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_pszBase = "CBreakable";
    DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBreakable>(CBreakable *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBreakable>(CBreakable *)::nameHolder,
      &_dso_handle);
  }
  CBreakable::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBreakable>(CBreakable *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBreakable>(CBreakable *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v2, DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_pszBase), "BreakTouch");
    m_Size = DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Size == DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CBreakable>(CBreakable *)::dataDesc[20].fieldName = v2;
    v6 = operator new[](DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_nLenBase + 4);
    *stpcpy(v6, DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_pszBase) = 6646084;
    v7 = DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Size == DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CBreakable>(CBreakable *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CBreakable>(CBreakable *)::dataDesc[21].fieldName = v6;
    DataMapInit<CBreakable>(CBreakable *)::dataDesc[22].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBreakable>(CBreakable *)::dataDesc[23].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBreakable>(CBreakable *)::dataDesc);
  }
  CBreakable::m_DataMap.dataNumFields = 39;
  CBreakable::m_DataMap.dataDesc = &DataMapInit<CBreakable>(CBreakable *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBreakable::m_DataMap, CBreakable::GetEntityClass);
  return &CBreakable::m_DataMap;
}


// CBreakable::YouForgotToImplementOrDeclareServerClass  (line 182, @0x000000000221a440, libserver.so)
int __fastcall CBreakable::YouForgotToImplementOrDeclareServerClass(CBreakable *const this)
{
  return 0;
}


// CBreakable::GetServerClass  (line 182, @0x00000000022219c0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBreakable::GetServerClass(CBreakable *const this)
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


// CBreakable::Spawn  (line 188, @0x0000000002226b90, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<float>, Get<int>, GetClassNameAsCStr, GetClassname, GetDebugName, GetFloat, GetValue, GetValue<float>, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, SetSolid, String, ToCStr, atof, atoi, operator=, operator[]
// calls: CBaseEntity::Spawn, CEntityKeyValues::HasValue, MakeEntitySystemString, CBreakable::ParsePropData, CBaseEntity::GetHealth, CBaseEntity::SetDamageOptions, CBaseEntity::SetMaxHealth, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::VPhysicsGetObject, CBaseEntity::GetAbsOrigin, CEntityIdentity::GetDebugName (16 total)
// callers: CPushable::Spawn, CPhysBox::Spawn
// strings: "ConcreteChunks", "GlassChunks", "MetalChunks", "%s (%s) at (%.3f %.3f %.3f) using obsolete or unknown material type.\n", "WoodChunks", "No conversion from %s to int now\n" (8 total)
// globals: jpt_2226BDC, CBreakable::BreakTouch(CBaseEntity *), CEntityKeyValues::sm_EmptyVariant, jpt_22270D6, jpt_2227106, jpt_2227132, jpt_2227186, CBreakable::pSpawnObjects (9 total)
void __fastcall CBreakable::Spawn(CBreakable *const this, const CEntityKeyValues *pKeyValues)
{
  const char *m_uint64; // rax
  const char *v5; // rsi
  float m_fValue; // xmm0_4
  int Health; // eax
  int v8; // esi
  double v9; // xmm0_8
  double v10; // xmm1_8
  double v11; // xmm2_8
  bool v12; // zf
  IPhysicsObject *Object; // rax
  float m_float; // xmm0_4
  IPhysicsObject *v15; // rax
  int v16; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v17; // cx
  __int64 v18; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v19; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v20; // rdx
  CEntityVariant *v21; // rdx
  int v22; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v23; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v25; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v26; // rdx
  CEntityVariant *v27; // rcx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v32; // rdx
  CEntityVariant *p_m_value; // rcx
  int v34; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v35; // cx
  __int64 v36; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v37; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v38; // rdx
  CEntityVariant *v39; // rcx
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // rsi
  int16 v43; // ax
  int16 v44; // ax
  int16 m_type; // ax
  const char *v46; // rax
  Materials v47; // edx
  int16 v48; // ax
  uint64 v49; // rdx
  unsigned int v50; // eax
  uint64 v51; // rax
  const char *v52; // rax
  uint64 v53; // rsi
  const char *v54; // rax
  __int64 v55; // rdx
  const char *v56; // rax
  const char *v57; // rax
  const char *v58; // rax
  double z; // [rsp+8h] [rbp-78h]
  double y; // [rsp+10h] [rbp-70h]
  float flMass; // [rsp+18h] [rbp-68h]
  double flMassa; // [rsp+18h] [rbp-68h]
  RnInertiaProperties_t ip_0; // [rsp+20h] [rbp-60h] BYREF

  CBaseEntity::Spawn(this, pKeyValues);
  if ( CEntityKeyValues::HasValue(pKeyValues, 507717450) )
  {
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
          if ( m_pElements[i] == 507717450 )
          {
LABEL_56:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v32 = pKeyValues->m_keyValues.m_pElements;
            else
              v32 = 0;
            p_m_value = &v32[i].m_value;
            goto LABEL_81;
          }
        }
        else if ( *(4 * i) == 507717450 )
        {
          goto LABEL_56;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
LABEL_81:
    m_type = p_m_value->m_type;
    switch ( m_type )
    {
      case 0:
        goto LABEL_83;
      case 1:
        LODWORD(m_uint64) = p_m_value->m_float;
        goto LABEL_108;
      case 5:
        LODWORD(m_uint64) = p_m_value->m_int;
        goto LABEL_108;
      case 6:
        LODWORD(m_uint64) = p_m_value->m_char;
        v47 = m_uint64;
        goto LABEL_84;
      case 26:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_int64 > 0x7FFFFFFF )
          goto LABEL_106;
        if ( m_uint64 < 0xFFFFFFFF80000000LL )
          LODWORD(m_uint64) = 0x80000000;
LABEL_108:
        if ( m_uint64 > 0xA )
        {
LABEL_106:
          this->m_Material = Materials::matWood;
          v5 = "WoodChunks";
          goto LABEL_5;
        }
        v47 = m_uint64;
LABEL_84:
        this->m_Material = v47;
        break;
      case 30:
        LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
        goto LABEL_108;
      case 33:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_108;
        goto LABEL_106;
      case 34:
        LODWORD(m_uint64) = p_m_value->m_float64;
        goto LABEL_108;
      case 37:
        LODWORD(m_uint64) = p_m_value->m_int;
        if ( p_m_value->m_int > 0x7FFFFFFEu )
          goto LABEL_106;
        goto LABEL_108;
      default:
        v46 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v46);
LABEL_83:
        LODWORD(m_uint64) = 0;
        v47 = Materials::matGlass;
        goto LABEL_84;
    }
  }
  else
  {
    LODWORD(m_uint64) = this->m_Material;
  }
  switch ( m_uint64 )
  {
    case 0:
    case 7:
      v5 = "GlassChunks";
      break;
    case 1:
      goto LABEL_75;
    case 2:
      v5 = "MetalChunks";
      break;
    case 4:
    case 8:
      v5 = "ConcreteChunks";
      break;
    default:
      z = CBaseEntity::GetAbsOrigin(this)->z;
      y = CBaseEntity::GetAbsOrigin(this)->y;
      flMassa = CBaseEntity::GetAbsOrigin(this)->x;
      DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
      m_pEntity = this->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      Warning(
        "%s (%s) at (%.3f %.3f %.3f) using obsolete or unknown material type.\n",
        m_pAsString,
        DebugName,
        flMassa,
        y,
        z);
LABEL_75:
      v5 = "WoodChunks";
      break;
  }
LABEL_5:
  if ( this->m_iszGibModel.u.m_Id != 0 )
    v5 = this->m_iszGibModel.u.m_pAsString;
  MakeEntitySystemString(v5);
  this->m_iszModelName.u.m_Id = *&ip_0.m_Inertia.m_flMatVal[0][0];
  if ( CEntityKeyValues::HasValue(pKeyValues, -1549325103) )
  {
    v22 = pKeyValues->m_keyHashes.m_nCount;
    if ( v22 > 0 )
    {
      v23 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( j = 0; v22 > j; ++j )
      {
        if ( v23 != 0 )
        {
          v25 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v23 > 9 )
            v25 = pKeyValues->m_keyHashes.m_pElements;
          if ( v25[j] == -1549325103 )
          {
LABEL_45:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v26 = pKeyValues->m_keyValues.m_pElements;
            else
              v26 = 0;
            v27 = &v26[j].m_value;
            goto LABEL_86;
          }
        }
        else if ( *(4 * j) == -1549325103 )
        {
          goto LABEL_45;
        }
      }
    }
    v27 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_86:
    v48 = v27->m_type;
    switch ( v48 )
    {
      case 0:
        break;
      case 1:
        LODWORD(v49) = v27->m_float;
        v50 = v49 - 1;
        goto LABEL_92;
      case 5:
        LODWORD(v49) = v27->m_int;
        v50 = v27->m_int - 1;
        goto LABEL_92;
      case 6:
        LODWORD(v49) = v27->m_char;
        goto LABEL_91;
      case 26:
        if ( v27->m_int64 > 0x7FFFFFFF )
          break;
        LODWORD(v51) = 0x80000000;
        if ( v27->m_uint64 >= 0xFFFFFFFF80000000LL )
          v51 = v27->m_uint64;
        LODWORD(v49) = v51;
        v50 = v51 - 1;
        goto LABEL_92;
      case 30:
        LODWORD(v49) = strtol(v27->m_pszString, 0, 10);
        v50 = v49 - 1;
        goto LABEL_92;
      case 33:
        v49 = v27->m_uint64;
        if ( v27->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_91;
        break;
      case 34:
        LODWORD(v49) = v27->m_float64;
        v50 = v49 - 1;
        goto LABEL_92;
      case 37:
        LODWORD(v49) = v27->m_int;
        if ( v27->m_int > 0x7FFFFFFEu )
          break;
LABEL_91:
        v50 = v49 - 1;
LABEL_92:
        if ( v50 <= 0x19 )
        {
          MakeEntitySystemString(CBreakable::pSpawnObjects[v49]);
          this->m_iszSpawnObject.u.m_Id = *&ip_0.m_Inertia.m_flMatVal[0][0];
        }
        break;
      default:
        v58 = VariantFieldTypeName(v48);
        Warning("No conversion from %s to int now\n", v58);
        break;
    }
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, 1459238457) )
    goto LABEL_9;
  v34 = pKeyValues->m_keyHashes.m_nCount;
  if ( v34 <= 0 )
  {
LABEL_78:
    v39 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_79;
  }
  v35 = pKeyValues->m_keyHashes.m_nAllocated;
  v36 = 0;
  while ( v35 == 0 )
  {
    if ( *(4 * v36) == 1459238457 )
      goto LABEL_67;
LABEL_64:
    if ( v34 <= ++v36 )
      goto LABEL_78;
  }
  v37 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v35 > 9 )
    v37 = pKeyValues->m_keyHashes.m_pElements;
  if ( v37[v36] != 1459238457 )
    goto LABEL_64;
LABEL_67:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v38 = pKeyValues->m_keyValues.m_pElements;
  else
    v38 = 0;
  v39 = &v38[v36].m_value;
LABEL_79:
  v44 = v39->m_type;
  switch ( v44 )
  {
    case 0:
      goto LABEL_9;
    case 1:
      LODWORD(v53) = v39->m_float;
      goto LABEL_124;
    case 5:
      LODWORD(v53) = v39->m_int;
      goto LABEL_124;
    case 6:
      LODWORD(v53) = v39->m_char;
      goto LABEL_124;
    case 26:
      if ( v39->m_int64 > 0x7FFFFFFF )
      {
        LODWORD(v53) = 0x7FFFFFFF;
      }
      else
      {
        LODWORD(v53) = 0x80000000;
        if ( v39->m_uint64 >= 0xFFFFFFFF80000000LL )
          v53 = v39->m_uint64;
LABEL_124:
        if ( v53 <= 0 )
        {
          if ( v53 != 0 )
            goto LABEL_122;
          goto LABEL_9;
        }
      }
LABEL_121:
      if ( v53 > 0x19 )
      {
LABEL_122:
        Warning("func_breakable with invalid propdata %d.\n", v53);
        goto LABEL_9;
      }
      MakeEntitySystemString(pFGDPropData[v53]);
      this->m_iszPropData.u.m_Id = *&ip_0.m_Inertia.m_flMatVal[0][0];
LABEL_9:
      this->m_flDmgModBullet = func_breakdmg_bullet.m_pParent->m_Value.m_fValue;
      this->m_flDmgModClub = func_breakdmg_club.m_pParent->m_Value.m_fValue;
      m_fValue = func_breakdmg_explosive.m_pParent->m_Value.m_fValue;
      this->m_flDmgModFire = 1.0;
      this->m_flDmgModExplosive = m_fValue;
      CBreakable::ParsePropData(this);
      if ( CBaseEntity::GetHealth(this) == 0 || (this->m_spawnflags.m_Value & 1) != 0 )
      {
        if ( this->m_Material == Materials::matGlass )
          (*(this->_vptr_IHandleEntity + 157))(this, 1);
        CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
      }
      else
      {
        CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
      }
      Health = CBaseEntity::GetHealth(this);
      v8 = 1;
      if ( Health > 0 )
        v8 = CBaseEntity::GetHealth(this);
      CBaseEntity::SetMaxHealth(this, v8);
      (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 1);
      CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
      CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
      v12 = (this->m_spawnflags.m_Value & 1) == 0;
      this->m_pfnTouch.__pfn = CBreakable::BreakTouch;
      this->m_pfnTouch.__delta = 0;
      if ( !v12 )
        this->m_pfnTouch.__pfn = 0;
      if ( this->m_impactEnergyScale == 0.0 )
        this->m_impactEnergyScale = 1.0;
      (*(this->_vptr_IHandleEntity + 49))(this, v9, v10, v11, 0.0);
      if ( !CEntityKeyValues::HasValue(pKeyValues, -203831695) )
        goto LABEL_19;
      v16 = pKeyValues->m_keyHashes.m_nCount;
      if ( v16 <= 0 )
      {
LABEL_76:
        v21 = &CEntityKeyValues::sm_EmptyVariant;
        goto LABEL_77;
      }
      v17 = pKeyValues->m_keyHashes.m_nAllocated;
      v18 = 0;
      while ( v17 == 0 )
      {
        if ( *(4 * v18) == -203831695 )
          goto LABEL_34;
LABEL_31:
        if ( v16 <= ++v18 )
          goto LABEL_76;
      }
      v19 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      if ( v17 > 9 )
        v19 = pKeyValues->m_keyHashes.m_pElements;
      if ( v19[v18] != -203831695 )
        goto LABEL_31;
LABEL_34:
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v20 = pKeyValues->m_keyValues.m_pElements;
      else
        v20 = 0;
      v21 = &v20[v18].m_value;
LABEL_77:
      v43 = v21->m_type;
      switch ( v43 )
      {
        case 0:
          m_float = 0.0;
          break;
        case 1:
          m_float = v21->m_float;
          break;
        case 5:
          m_float = v21->m_int;
          break;
        case 6:
          m_float = v21->m_char;
          break;
        case 26:
          m_float = v21->m_uint64;
          break;
        case 30:
          m_float = strtod(v21->m_pszString, 0);
          break;
        case 33:
          v54 = v21->m_uint64;
          if ( v21->m_int64 >= 0 )
            goto LABEL_130;
          v55 = v21->m_uint64 & 1 | (v21->m_uint64 >> 1);
          m_float = v55 + v55;
          break;
        case 34:
          m_float = v21->m_float64;
          break;
        case 37:
          LODWORD(v54) = v21->m_int;
LABEL_130:
          m_float = v54;
          break;
        default:
          v56 = VariantFieldTypeName(v43);
          Warning("No conversion from %s to float now\n", v56);
          goto LABEL_19;
      }
      if ( m_float == 0.0 )
      {
LABEL_19:
        Object = CBaseEntity::VPhysicsGetObject(this);
        (*(*Object + 248LL))(&ip_0, Object);
        m_float = ip_0.m_flMass;
      }
      flMass = m_float;
      if ( m_float > 0.0 )
      {
        v15 = CBaseEntity::VPhysicsGetObject(this);
        (*(*v15 + 1288LL))(v15, flMass);
      }
      return;
    case 30:
      LODWORD(v53) = strtol(v39->m_pszString, 0, 10);
      goto LABEL_124;
    case 33:
      v52 = v39->m_uint64;
      LODWORD(v53) = 0x7FFFFFFF;
      if ( v39->m_uint64 <= 0x7FFFFFFE )
        goto LABEL_128;
      goto LABEL_121;
    case 34:
      LODWORD(v53) = v39->m_float64;
      goto LABEL_124;
    case 37:
      LODWORD(v52) = v39->m_int;
      LODWORD(v53) = 0x7FFFFFFF;
      if ( v39->m_int > 0x7FFFFFFEu )
        goto LABEL_121;
LABEL_128:
      LODWORD(v53) = v52;
      goto LABEL_124;
    default:
      v57 = VariantFieldTypeName(v44);
      Warning("No conversion from %s to int now\n", v57);
      goto LABEL_9;
  }
}


// CBreakable::ParsePropData  (line 376, @0x0000000002226b10, libserver.so)  // inlines: String, ToCStr, V_strncmp<int>
// calls: _V_strncmp, CPropData::ParsePropFromBase
// callers: CBreakable::Spawn, CPhysBox::Spawn
void __fastcall CBreakable::ParsePropData(CBreakable *const this)
{
  const char *m_pAsString; // rcx

  if ( this->m_iszPropData.u.m_Id != 0 && _V_strncmp(this->m_iszPropData.u.m_pAsString, "None", 4) != 0 )
  {
    m_pAsString = "";
    if ( this->m_iszPropData.u.m_Id != 0 )
      m_pAsString = this->m_iszPropData.u.m_pAsString;
    CPropData::ParsePropFromBase(g_pPropDataSystem, this, &this->IBreakableWithPropData, m_pAsString, 0);
  }
}


// CBreakable::CreateVPhysics  (line 391, @0x000000000221af40, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CBreakable::CreateVPhysics(CBreakable *const this)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx

  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED,
    m_Value,
    0);
  return 1;
}


// CBreakable::MaterialSound  (line 400, @0x0000000002227550, libserver.so)
// callers: CBreakable::MaterialSoundRandom
// strings: "Breakable.MatFlesh", "Breakable.MatConcrete", "Breakable.Computer", "Breakable.MatGlass", "Breakable.MatWood", "Breakable.MatMetal"
// globals: jpt_2227569
const char *__fastcall CBreakable::MaterialSound(Materials precacheMaterial)
{
  const char *result; // rax

  switch ( precacheMaterial )
  {
    case Materials::matGlass:
    case Materials::matUnbreakableGlass:
      result = "Breakable.MatGlass";
      break;
    case Materials::matWood:
      result = "Breakable.MatWood";
      break;
    case Materials::matMetal:
      result = "Breakable.MatMetal";
      break;
    case Materials::matFlesh:
    case Materials::matWeb:
      result = "Breakable.MatFlesh";
      break;
    case Materials::matCinderBlock:
    case Materials::matRocks:
      result = "Breakable.MatConcrete";
      break;
    case Materials::matComputer:
      result = "Breakable.Computer";
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


// CBreakable::MaterialSoundRandom  (line 429, @0x00000000022275e0, libserver.so)  // inlines: AllocateData, CPASFilter, CSosFieldData, CSosFieldDataFloat, ClearData, CopyData, GetDataPtr, GetInstance, IndexToIdentity, Init, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, V_memcpy, memcpy, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CBreakable::MaterialSound, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CSoundOpGameSystem::StartSoundEvent, CRecipientFilter::~CRecipientFilter, CSoundOpGameSystem::SetSoundEventParam, operator delete [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
// callers: CGib::BounceGibTouch
// strings: "volume_atten"
void __fastcall CBreakable::MaterialSoundRandom(
        CEntityIndex entindex,
        Materials soundMaterial,
        float a3,
        float flVolume)
{
  const char *v5; // r13
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rax
  uint v9; // xmm1_4
  SndOpEventGuid_t started; // r12
  float *m_pData; // rax
  CSosFieldData origin; // [rsp+30h] [rbp-190h] BYREF
  CPASFilter filter; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v15; // [rsp+188h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  v5 = CBreakable::MaterialSound(soundMaterial);
  if ( v5 != 0 )
  {
    m_pInstance = 0;
    if ( entindex.m_Data <= 0x7FFE )
    {
      v7 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[entindex.m_Data >> 9];
      if ( v7 != 0 )
      {
        v8 = &v7[entindex.m_Data & 0x1FF];
        if ( v8 != 0 && (v8->m_EHandle.m_Index & 0x7FFF) == entindex.m_Data )
          m_pInstance = v8->m_pInstance;
      }
    }
    *&origin.m_fieldDataType = (*(m_pInstance->_vptr_IHandleEntity + 186))(m_pInstance);
    origin.m_nAllocSize = v9;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
    started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, v5, entindex, -1, 0.0);
    if ( a3 >= 1.0 )
      goto LABEL_8;
    origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    origin.m_nAllocSize = 0;
    origin.m_pData = 0;
    origin.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    if ( origin.m_nAllocSize > 3 )
    {
      if ( origin.m_nAllocSize > 8 )
      {
        m_pData = origin.m_pData;
        if ( origin.m_pData == 0 )
        {
LABEL_14:
          CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, started, "volume_atten", &origin, 0, 0);
          if ( origin.m_nAllocSize > 8 && origin.m_pData != 0 )
            operator delete[](origin.m_pData);
LABEL_8:
          filter._vptr_IRecipientFilter = &off_3FCB190;
          CRecipientFilter::~CRecipientFilter(&filter);
          return;
        }
LABEL_13:
        *m_pData = a3;
        goto LABEL_14;
      }
    }
    else
    {
      origin.m_nAllocSize = 4;
    }
    m_pData = &origin.m_pData;
    goto LABEL_13;
  }
}


// CBreakable::Precache  (line 443, @0x000000000223ca50, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues, UTIL_PrecacheOther, CBaseEntity::PrecacheScriptSound
// strings: "Breakable.MatGlass", "Breakable.MatWood", "Breakable.MatMetal", "Breakable.MatFlesh", "Breakable.MatConcrete", "Breakable.Computer" (12 total)
void __fastcall CBreakable::Precache(CBreakable *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
  if ( this->m_iszSpawnObject.u.m_Id != 0 )
    UTIL_PrecacheOther(this->m_iszSpawnObject.u.m_pAsString, pContext);
  CBaseEntity::PrecacheScriptSound("Breakable.MatGlass", pContext);
  CBaseEntity::PrecacheScriptSound("Breakable.MatWood", pContext);
  CBaseEntity::PrecacheScriptSound("Breakable.MatMetal", pContext);
  CBaseEntity::PrecacheScriptSound("Breakable.MatFlesh", pContext);
  CBaseEntity::PrecacheScriptSound("Breakable.MatConcrete", pContext);
  CBaseEntity::PrecacheScriptSound("Breakable.Computer", pContext);
  CBaseEntity::PrecacheScriptSound("Breakable.Crate", pContext);
  CBaseEntity::PrecacheScriptSound("Breakable.Glass", pContext);
  CBaseEntity::PrecacheScriptSound("Breakable.Metal", pContext);
  CBaseEntity::PrecacheScriptSound("Breakable.Flesh", pContext);
  CBaseEntity::PrecacheScriptSound("Breakable.Concrete", pContext);
  CBaseEntity::PrecacheScriptSound("Breakable.Ceiling", pContext);
}


// CBreakable::DamageSound  (line 472, @0x0000000002227850, libserver.so)  // inlines: AllocateData, CPASFilter, CSosFieldData, CSosFieldDataFloat, ClearData, CopyData, GetDataPtr, Init, V_memcpy, entindex, memcpy, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StartSoundEvent, CRecipientFilter::~CRecipientFilter, CSoundOpGameSystem::SetSoundEventParam, operator delete [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
// callers: CBreakable::BreakTouch, CBreakable::OnTakeDamage, CBreakable::ReactToDamage
// strings: "Breakable.MatWood", "Breakable.MatGlass", "Breakable.MatConcrete", "Breakable.Computer", "Breakable.MatMetal", "volume_atten"
// globals: random_valve, jpt_22278C1
void __fastcall CBreakable::DamageSound(CBreakable *const this)
{
  Materials m_Material; // ebx
  const char *v3; // rsi
  __int64 v4; // r13
  uint v5; // xmm1_4
  CEntityIndex v6; // eax
  SndOpEventGuid_t started; // r13
  int v8; // eax
  float *m_pData; // rax
  float flVolume; // [rsp+Ch] [rbp-194h]
  CSosFieldData origin; // [rsp+10h] [rbp-190h] BYREF
  CPASFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v13; // [rsp+168h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  m_Material = this->m_Material;
  flVolume = (*(*random_valve + 8LL))(random_valve, 0.75, 1.0);
  if ( m_Material != Materials::matComputer )
  {
    switch ( m_Material )
    {
      case Materials::matGlass:
      case Materials::matUnbreakableGlass:
        v3 = "Breakable.MatGlass";
        goto LABEL_4;
      case Materials::matWood:
        v3 = "Breakable.MatWood";
        goto LABEL_4;
      case Materials::matMetal:
        goto LABEL_11;
      case Materials::matCinderBlock:
      case Materials::matRocks:
        v3 = "Breakable.MatConcrete";
        goto LABEL_4;
      default:
        return;
    }
  }
  v8 = (*(*random_valve + 16LL))(random_valve, 0, 1);
  v3 = "Breakable.Computer";
  if ( v8 != 0 )
LABEL_11:
    v3 = "Breakable.MatMetal";
LABEL_4:
  v4 = (**(g_pSoundOpSystem + 1))(g_pSoundOpSystem + 8, v3);
  if ( (*(*(g_pSoundOpSystem + 1) + 8LL))(g_pSoundOpSystem + 8, v4) != 0 )
  {
    *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
    origin.m_nAllocSize = v5;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
    v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, v4, v6, -1, 0.0);
    if ( flVolume >= 1.0 )
    {
LABEL_6:
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
      return;
    }
    origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    origin.m_nAllocSize = 0;
    origin.m_pData = 0;
    origin.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    if ( origin.m_nAllocSize > 3 )
    {
      if ( origin.m_nAllocSize > 8 )
      {
        m_pData = origin.m_pData;
        if ( origin.m_pData == 0 )
        {
LABEL_16:
          CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, started, "volume_atten", &origin, 0, 0);
          if ( origin.m_nAllocSize > 8 && origin.m_pData != 0 )
            operator delete[](origin.m_pData);
          goto LABEL_6;
        }
LABEL_15:
        *m_pData = flVolume;
        goto LABEL_16;
      }
    }
    else
    {
      origin.m_nAllocSize = 4;
    }
    m_pData = &origin.m_pData;
    goto LABEL_15;
  }
}


// CBreakable::BreakTouch  (line 528, @0x0000000002227b30, libserver.so)  // inlines: FastSqrt, GetEHandle, GetEntryIndex, GetSerialNumber, HasSpawnFlags, Length, Set, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator-, operator=
// calls: CBaseEntity::GetGroundEntity, CBreakable::DamageSound, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::GetHealth, CBaseEntity::SetDamageOptions, CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::~CTakeDamageInfo, CBaseEntity::GetAbsOrigin, CalculateMeleeDamageForce, CBaseEntity::TakeDamage, _Unwind_Resume
void __fastcall CBreakable::BreakTouch(CBreakable *const this, CBaseEntity *pOther)
{
  unsigned int m_Value; // eax
  CBreakable *GroundEntity; // r13
  CEntityIdentity *m_pEntity; // rcx
  __int16 v7; // si
  int v8; // edx
  double v9; // xmm1_8
  double v10; // xmm0_8
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v13; // xmm1_4
  __m128d v14; // xmm0
  float v15; // r13d
  int (**vptr_IHandleEntity)(...); // rax
  int (*v17)(...); // r15
  const Vector *AbsOrigin; // r15
  const Vector *v19; // r13
  const Vector *v20; // rax
  vec_t v21; // xmm2_4
  vec_t v22; // xmm1_4
  Vector vecMeleeDir; // [rsp+10h] [rbp-D0h] BYREF
  CTakeDamageInfo info; // [rsp+20h] [rbp-C0h] BYREF

  if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 && this->m_Material != Materials::matUnbreakableGlass )
  {
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 2) != 0 )
    {
      info._vptr_CTakeDamageInfo = COERCE_INT_((*(pOther->_vptr_IHandleEntity + 172))(pOther));
      info.m_vecDamageForce.x = v13;
      v14.m128d_f64[1] = fsqrt(
                           ((*&info._vptr_CTakeDamageInfo * *&info._vptr_CTakeDamageInfo)
                          + (*(&info._vptr_CTakeDamageInfo + 1) * *(&info._vptr_CTakeDamageInfo + 1)))
                         + (v13 * v13));
      v14.m128d_f64[0] = v14.m128d_f64[1] * 0.01;
      v15 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_cvtpd_ps(_mm_movedup_pd(v14))));
      if ( v15 >= CBaseEntity::GetHealth(this) )
      {
        CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
        vptr_IHandleEntity = this->_vptr_IHandleEntity;
        this->m_pfnTouch.__pfn = 0;
        this->m_pfnTouch.__delta = 0;
        v17 = vptr_IHandleEntity[90];
        CTakeDamageInfo::CTakeDamageInfo(&info, pOther, pOther, v15, 1, 0);
        v17(this, &info);
        CTakeDamageInfo::~CTakeDamageInfo(&info);
        CTakeDamageInfo::CTakeDamageInfo(&info, pOther, pOther, v15 * 0.25, 4, 0);
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        v19 = CBaseEntity::GetAbsOrigin(this);
        v20 = CBaseEntity::GetAbsOrigin(pOther);
        v21 = v20->x - v19->x;
        v22 = v20->y - v19->y;
        vecMeleeDir.z = v20->z - v19->z;
        vecMeleeDir.x = v21;
        vecMeleeDir.y = v22;
        CalculateMeleeDamageForce(&info, &vecMeleeDir, AbsOrigin, 1.0);
        CBaseEntity::TakeDamage(pOther, &info);
        CTakeDamageInfo::~CTakeDamageInfo(&info);
      }
      m_Value = this->m_spawnflags.m_Value;
    }
    if ( (m_Value & 4) != 0 )
    {
      GroundEntity = CBaseEntity::GetGroundEntity(pOther);
      if ( GroundEntity == this )
      {
        CBreakable::DamageSound(this);
        m_pEntity = pOther->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v7 = 0x7FFF;
          v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hBreaker.m_Index) = v7 | this->m_hBreaker.m_Index & 0x8000;
          this->m_hBreaker.m_Index = (v8 << 15) | this->m_hBreaker.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hBreaker.m_Index = -1;
        }
        CBaseEntity::ThinkSet(GroundEntity, 0x6B1uLL, 0.0, 0, 0);
        v10 = 0.0;
        this->m_pfnTouch.__pfn = 0;
        this->m_pfnTouch.__delta = 0;
        v11 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              (m_pfnWarningFunc)(1, 0.0);
          }
          *&v10 = LODWORD(v11->m_flCurrentTime);
        }
        *&v10 = *&v10 + this->m_flPressureDelay;
        CBaseEntity::SetNextThink(GroundEntity, v10, v9, 0);
      }
    }
  }
}


// CBreakable::InputAddHealth  (line 579, @0x0000000002232480, libserver.so)  // inlines: Int, operator int
// calls: CBaseEntity::GetHealth, CBreakable::UpdateHealth
void __fastcall CBreakable::InputAddHealth(CBreakable *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // r13
  int Health; // eax
  int16 m_type; // cx
  int m_float; // esi

  pActivator = inputdata->pActivator;
  Health = CBaseEntity::GetHealth(this);
  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
  }
  else if ( m_type == 34 )
  {
    m_float = inputdata->value.m_float64;
  }
  else
  {
    m_float = inputdata->value.m_int;
  }
  CBreakable::UpdateHealth(this, Health + m_float, pActivator);
}


// CBreakable::InputBreak  (line 588, @0x0000000002227f00, libserver.so)
// calls: CBreakable::Break
void __fastcall CBreakable::InputBreak(CBreakable *const this, inputdata_t *const inputdata)
{
  CBreakable::Break(this, inputdata->pActivator);
}


// CBreakable::InputRemoveHealth  (line 598, @0x00000000022324f0, libserver.so)  // inlines: Int, operator int
// calls: CBaseEntity::GetHealth, CBreakable::UpdateHealth
void __fastcall CBreakable::InputRemoveHealth(CBreakable *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // r13
  int Health; // eax
  int16 m_type; // cx
  int m_float; // edx

  pActivator = inputdata->pActivator;
  Health = CBaseEntity::GetHealth(this);
  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
  }
  else if ( m_type == 34 )
  {
    m_float = inputdata->value.m_float64;
  }
  else
  {
    m_float = inputdata->value.m_int;
  }
  CBreakable::UpdateHealth(this, Health - m_float, pActivator);
}


// CBreakable::InputSetHealth  (line 607, @0x0000000002232560, libserver.so)  // inlines: Int, operator int
// calls: CBreakable::UpdateHealth
void __fastcall CBreakable::InputSetHealth(CBreakable *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  CBaseEntity *pActivator; // rdx

  m_type = inputdata->value.m_type;
  pActivator = inputdata->pActivator;
  if ( m_type == 1 )
  {
    CBreakable::UpdateHealth(this, inputdata->value.m_float, pActivator);
  }
  else if ( m_type == 34 )
  {
    CBreakable::UpdateHealth(this, inputdata->value.m_float64, pActivator);
  }
  else
  {
    CBreakable::UpdateHealth(this, inputdata->value.m_int, pActivator);
  }
}


// CBreakable::InputSetMass  (line 616, @0x000000000221d050, libserver.so)  // inlines: CUtlSymbolLarge, Float, GetEntityName, operator float
// calls: CBaseEntity::VPhysicsGetObject, Warning
// strings: "Tried to call SetMass() on %s but it has no physics.\n"
void __fastcall CBreakable::InputSetMass(CBreakable *const this, inputdata_t *const inputdata)
{
  IPhysicsObject *Object; // rax
  double m_float64; // xmm0_8
  const char *m_pAsString; // rsi

  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 )
  {
    if ( inputdata->value.m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      *&m_float64 = inputdata->value.m_uint;
    (*(*Object + 200LL))(Object, m_float64);
  }
  else
  {
    m_pAsString = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
    Warning("Tried to call SetMass() on %s but it has no physics.\n", m_pAsString);
  }
}


// CBreakable::UpdateHealth  (line 638, @0x00000000022322a0, libserver.so)  // inlines: CVariantBase, FireOutput<float>, Free, Set, ~CVariantBase
// calls: CBaseEntity::GetHealth, CEntityIOOutput::FireOutputInternal, CBaseEntity::SetDamageOptions, CBaseEntity::SetMaxHealth, CBreakable::Break, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBreakable::InputAddHealth, CBreakable::InputRemoveHealth, CBreakable::InputSetHealth, CBreakable::OnTakeDamage, CBreakable::ReactToDamage
bool __fastcall CBreakable::UpdateHealth(CBreakable *const this, int iNewHealth, CBaseEntity *pActivator)
{
  int Health; // r12d
  int v7; // eax
  float v8; // xmm0_4
  int v10; // r12d
  int v11; // eax
  int v12; // r12d
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  if ( CBaseEntity::GetHealth(this) == iNewHealth )
    return 1;
  (*(this->_vptr_IHandleEntity + 157))(this, iNewHealth);
  if ( (*(this->_vptr_IHandleEntity + 156))(this) == 0 )
    CBaseEntity::SetMaxHealth(this, 1);
  Health = CBaseEntity::GetHealth(this);
  v7 = (*(this->_vptr_IHandleEntity + 156))(this);
  v8 = 1.0;
  if ( (Health / v7) <= 1.0 )
  {
    v10 = CBaseEntity::GetHealth(this);
    v11 = (*(this->_vptr_IHandleEntity + 156))(this);
    v8 = 0.0;
    if ( (v10 / v11) >= 0.0 )
    {
      v12 = CBaseEntity::GetHealth(this);
      v8 = v12 / (*(this->_vptr_IHandleEntity + 156))(this);
    }
  }
  this->m_OnHealthChanged.m_Value = v8;
  value.m_type = 1;
  value.m_flags = 0;
  value.m_float = v8;
  CEntityIOOutput::FireOutputInternal(&this->m_OnHealthChanged, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  if ( CBaseEntity::GetHealth(this) <= 0 )
  {
    CBreakable::Break(this, pActivator);
    return 0;
  }
  else
  {
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
      CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
    else
      CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
    return 1;
  }
}


// CBreakable::Break  (line 681, @0x0000000002227e60, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// callers: CBreakable::InputBreak, CBreakable::UpdateHealth
void __fastcall CBreakable::Break(CBreakable *const this, CBaseEntity *pBreaker)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  if ( this->m_Material != Materials::matUnbreakableGlass )
  {
    if ( pBreaker != 0 && (m_pEntity = pBreaker->m_pEntity) != 0 )
    {
      v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hBreaker.m_Index) = v4 | this->m_hBreaker.m_Index & 0x8000;
      this->m_hBreaker.m_Index = (v3 << 15) | this->m_hBreaker.m_Index & 0x7FFF;
      (*(this->_vptr_IHandleEntity + 214))(this);
    }
    else
    {
      this->m_hBreaker.m_Index = -1;
      (*(this->_vptr_IHandleEntity + 214))(this);
    }
  }
}


// CBreakable::TraceAttack  (line 691, @0x00000000022269f0, libserver.so)  // inlines: VectorMultiply, operator*
// calls: ITempEntsSystem::Ricochet, CBaseEntity::TraceAttack, ITempEntsSystem::Sparks, CBaseEntity::EmitSound
// strings: "Breakable.Computer"
// globals: random_valve
void __fastcall CBreakable::TraceAttack(
        CBreakable *const this,
        const CTakeDamageInfo *const info,
        const Vector *const vecDir,
        trace_t *ptr)
{
  Materials m_Material; // eax
  float z; // xmm1_4
  float x; // xmm3_4
  Vector direction; // [rsp+0h] [rbp-30h] BYREF

  if ( (*(*random_valve + 16LL))(random_valve, 0, 1) != 0 )
  {
    m_Material = this->m_Material;
    if ( m_Material == Materials::matComputer )
    {
      ITempEntsSystem::Sparks(g_pEffects, &ptr->endpos, 1, 1, 0);
      CBaseEntity::EmitSound(this, "Breakable.Computer", 0.0, 0);
    }
    else if ( m_Material == Materials::matUnbreakableGlass )
    {
      z = vecDir->z;
      x = vecDir->x;
      direction.y = -vecDir->y;
      direction.z = -z;
      direction.x = -x;
      ITempEntsSystem::Ricochet(g_pEffects, &ptr->endpos, &direction);
    }
  }
  CBaseEntity::TraceAttack(this, info, vecDir, ptr);
}


// CBreakable::VPhysicsCollision  (line 719, @0x000000000221b040, libserver.so)  // inlines: CUtlSymbolLarge, HasSpawnFlags, VectorMultiply, operator*, operator=, operator==
// calls: CBaseEntity::VPhysicsCollision, CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, CalculateDefaultPhysicsDamage, MakeEntitySystemString, _Unwind_Resume
// callers: CPushable::VPhysicsCollision, CPhysBox::VPhysicsCollision
void __fastcall CBreakable::VPhysicsCollision(CBreakable *const this, int index, gamevcollisionevent_t *pEvent)
{
  __int64 v6; // r13
  IPhysicsObject **v7; // r15
  float v8; // xmm0_4
  vec_t v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  unsigned int m_Value; // eax
  Materials m_Material; // r9d
  CBaseEntity *v14; // rbx
  int Health; // eax
  _BOOL8 v16; // r13
  IPhysicsObject *v17; // rdi
  float v18; // xmm0_4
  _BOOL8 v19; // r13
  vec_t v20; // xmm2_4
  vec_t v21; // xmm1_4
  vec_t v22; // xmm0_4
  int (**m_Id)(...); // rax
  float m_impactEnergyScale; // xmm0_4
  double v25; // xmm0_8
  float v26; // xmm1_4
  float damage; // [rsp+1Ch] [rbp-114h]
  CBaseEntity *pOther; // [rsp+20h] [rbp-110h]
  int damageType; // [rsp+3Ch] [rbp-F4h] BYREF
  string_t iszDamageTable; // [rsp+40h] [rbp-F0h] BYREF
  Vector damagePos; // [rsp+50h] [rbp-E0h] BYREF
  Vector damageForce; // [rsp+60h] [rbp-D0h] BYREF
  CTakeDamageInfo dmgInfo; // [rsp+70h] [rbp-C0h] BYREF

  v6 = index;
  v7 = &pEvent->pObjects[index];
  CBaseEntity::VPhysicsCollision(this, index, pEvent);
  (*(pEvent->pInternalData->_vptr_IPhysicsCollisionData + 1))(pEvent->pInternalData, &damagePos);
  v8 = (*(**v7 + 208LL))(*v7);
  v9 = pEvent->postVelocity[v6].x * v8;
  v10 = pEvent->postVelocity[v6].y * v8;
  v11 = v8 * pEvent->postVelocity[v6].z;
  damageForce.x = v9;
  damageForce.y = v10;
  damageForce.z = v11;
  if ( v9 == vec3_origin.x && v10 == vec3_origin.y && v11 == vec3_origin.z )
  {
    v16 = index == 0;
    v17 = pEvent->pObjects[v16];
    if ( v17 != 0 )
    {
      v18 = (*(*v17 + 208LL))(v17);
      v19 = v16;
      v20 = pEvent->postVelocity[v19].y * v18;
      v21 = pEvent->postVelocity[v19].z * v18;
      v22 = v18 * pEvent->postVelocity[v19].x;
      m_Value = this->m_spawnflags.m_Value;
      damageForce.y = v20;
      damageForce.z = v21;
      damageForce.x = v22;
      if ( (m_Value & 0x200) == 0 )
        goto LABEL_12;
LABEL_3:
      m_Material = this->m_Material;
      this->m_bTookPhysicsDamage = 1;
      v14 = pEvent->pEntities[index == 0];
      if ( m_Material == Materials::matGlass )
        (*(**v7 + 200LL))(*v7, 2.0);
      Health = CBaseEntity::GetHealth(this);
      CTakeDamageInfo::CTakeDamageInfo(&dmgInfo, v14, v14, &damageForce, &damagePos, (Health + 1), 1, 0, 0);
      CBaseEntity::TakeDamage(this, &dmgInfo);
LABEL_6:
      CTakeDamageInfo::~CTakeDamageInfo(&dmgInfo);
      return;
    }
  }
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x200) != 0 )
    goto LABEL_3;
LABEL_12:
  if ( (m_Value & 0x400) == 0 )
  {
    pOther = pEvent->pEntities[index == 0];
    (*(this->_vptr_IBreakableWithPropData + 13))(&iszDamageTable, &this->IBreakableWithPropData);
    m_Id = iszDamageTable.u.m_Id;
    if ( iszDamageTable.u.m_Id == 0 )
    {
      MakeEntitySystemString("props");
      m_Id = dmgInfo._vptr_CTakeDamageInfo;
      iszDamageTable.u.m_Id = dmgInfo._vptr_CTakeDamageInfo;
    }
    m_impactEnergyScale = this->m_impactEnergyScale;
    dmgInfo._vptr_CTakeDamageInfo = m_Id;
    *&v25 = CalculateDefaultPhysicsDamage(index, pEvent, m_impactEnergyScale, 1, &damageType, &dmgInfo, 0);
    v26 = *&v25;
    if ( *&v25 > 0.0 )
    {
      if ( this->m_Material == Materials::matGlass )
      {
        damage = *&v25;
        (*(**v7 + 200LL))(*v7, 2.0, v25);
        v26 = damage;
      }
      CTakeDamageInfo::CTakeDamageInfo(&dmgInfo, pOther, pOther, &damageForce, &damagePos, v26, damageType, 0, 0);
      CBaseEntity::TakeDamage(this, &dmgInfo);
      goto LABEL_6;
    }
  }
}


// CBreakable::OnTakeDamage  (line 793, @0x00000000022325a0, libserver.so)  // inlines: Get, GetAttacker, GetInstance, SetDamage, operator CBaseEntity*
// calls: CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::GetDamageOptions, CTakeDamageInfo::~CTakeDamageInfo, GetBreakableDamage, CBaseEntity::GetHealth, CBaseEntity::OnTakeDamage, CEntityHandle::operator CEntityInstance*, CBreakable::UpdateHealth, CBreakable::DamageSound, _Unwind_Resume
// callers: CPushable::OnTakeDamage, CPhysBox::OnTakeDamage
int __fastcall CBreakable::OnTakeDamage(CBreakable *const this, const CTakeDamageInfo *const info)
{
  int v4; // ebx
  unsigned int Health; // r15d
  int v7; // r14d
  CBaseEntity *v8; // rax
  CTakeDamageInfo subInfo; // [rsp+0h] [rbp-C0h] BYREF

  CTakeDamageInfo::CTakeDamageInfo(&subInfo, info);
  if ( CBaseEntity::GetDamageOptions(this) == DamageOptions_t::DAMAGE_NO || this->m_iMinHealthDmg > info->m_flDamage )
    goto LABEL_3;
  if ( (*(this->_vptr_IHandleEntity + 88))(this, &subInfo) == 0 )
  {
    this->m_bTookPhysicsDamage = 0;
    v4 = 1;
    goto LABEL_4;
  }
  if ( this->m_Material == Materials::matUnbreakableGlass )
  {
LABEL_3:
    v4 = 0;
  }
  else
  {
    subInfo.m_flDamage = GetBreakableDamage(&subInfo, &this->IBreakableWithPropData);
    Health = CBaseEntity::GetHealth(this);
    CBaseEntity::OnTakeDamage(this, &subInfo);
    v7 = CBaseEntity::GetHealth(this);
    (*(this->_vptr_IHandleEntity + 157))(this, Health);
    v8 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
    if ( CBreakable::UpdateHealth(this, v7, v8)
      && CBaseEntity::GetDamageOptions(this) == DamageOptions_t::DAMAGE_YES
      && (subInfo.m_bitsDamageType & 8) == 0 )
    {
      CBreakable::DamageSound(this);
    }
    v4 = 1;
  }
LABEL_4:
  CTakeDamageInfo::~CTakeDamageInfo(&subInfo);
  return v4;
}


// CBreakable::RejectDamage  (line 903, @0x000000000221cfb0, libserver.so)
// callers: CPhysBox::RejectDamage
bool __fastcall CBreakable::RejectDamage(CBreakable *const this, const CTakeDamageInfo *const info)
{
  bool v2; // r12

  v2 = 1;
  if ( this->m_iMinHealthDmg > info->m_flDamage )
    return 1;
  if ( (*(this->_vptr_IHandleEntity + 88))(this) != 0 )
    return this->m_Material == Materials::matUnbreakableGlass;
  this->m_bTookPhysicsDamage = 0;
  return v2;
}


// CBreakable::ModifyDamage  (line 986, @0x000000000221b3f0, libserver.so)  // inlines: SetDamage
// calls: GetBreakableDamage, CBaseEntity::GetHealth
void __fastcall CBreakable::ModifyDamage(CBreakable *const this, CTakeDamageInfo *const info)
{
  info->m_flDamage = GetBreakableDamage(info, &this->IBreakableWithPropData);
  this->m_iPrevHealth = CBaseEntity::GetHealth(this);
}


// CBreakable::ReactToDamage  (line 995, @0x0000000002232700, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::ReactToDamage, CBaseEntity::GetHealth, CBreakable::UpdateHealth, CBaseEntity::GetDamageOptions, CBreakable::DamageSound
// callers: CPhysBox::ReactToDamage
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBreakable::ReactToDamage(CBreakable *const this, const CTakeDamageInfo *const info)
{
  int Health; // r13d
  uint32 m_Index; // ecx
  CBaseEntity *m_pInstance; // rdx
  CEntityIdentity *v7; // rdi
  CEntityIdentity *v8; // rdi

  CBaseEntity::ReactToDamage(this, info);
  Health = CBaseEntity::GetHealth(this);
  (*(this->_vptr_IHandleEntity + 157))(this, this->m_iPrevHealth);
  m_Index = info->m_hAttacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[info->m_hAttacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( CBreakable::UpdateHealth(this, Health, m_pInstance)
    && CBaseEntity::GetDamageOptions(this) == DamageOptions_t::DAMAGE_YES
    && (info->m_bitsDamageType & 8) == 0 )
  {
    CBreakable::DamageSound(this);
  }
}


// CBreakable::ResetOnGroundFlags  (line 1022, @0x0000000002230f40, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, COverlapList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, GetEntityIdentity, GetEntryIndex, GetHitEntity, GetInstance, IgnoreOneEntityFindByCollisionGroup, IndexToIdentity, Init, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, WorldSpaceAABB, operator CBaseEntity*, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CCollisionProperty::CollisionAABBToWorldAABB, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::EntitiesInBox, CBaseEntity::SetGroundEntity, CUtlMemory<COverlapHit, int>::Purge, __stack_chk_fail, CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CBreakable::Die
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBreakable::ResetOnGroundFlags(CBreakable *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  CEntityInstance *m_pInstance; // rdi
  uint32 m_nEntityId; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v8; // eax
  Vector mins; // [rsp+10h] [rbp-1090h] BYREF
  Vector maxs; // [rsp+20h] [rbp-1080h] BYREF
  CGameQueryAttributes filter; // [rsp+30h] [rbp-1070h] BYREF
  COverlapList list; // [rsp+60h] [rbp-1040h] BYREF
  unsigned __int64 v13; // [rsp+1078h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  CCollisionProperty::CollisionAABBToWorldAABB(
    &this->m_Collision,
    &this->m_Collision.m_vecMins.m_Value,
    &this->m_Collision.m_vecMaxs.m_Value,
    &mins,
    &maxs);
  filter.m_nHierarchyId = 0;
  list.m_list.m_Memory.m_pMemory = &list.m_list.m_Memory.m_FixedMemory;
  list.m_list.m_Size = 0;
  list.m_list.m_Memory.m_nAllocationCount = 64;
  mins.z = mins.z - 1.0;
  list.m_list.m_Memory.m_nGrowSize = 0x80000000;
  memset(&filter, 0, 24);
  maxs.z = maxs.z + 8.0;
  filter.m_nEntityIdToIgnore = -1;
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nObjectSetMask = 7;
  filter.m_nCollisionGroup = 4;
  filter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(this);
  filter.m_nHierarchyId = HierarchyIDFromBaseEntity(this);
  CGamePhysicsQueryInterface::EntitiesInBox(
    g_pPhysicsQuery,
    &mins,
    &maxs,
    &filter,
    OverlapTest_t::OVERLAP_TEST_SHAPE,
    &list);
  if ( list.m_list.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      while ( 1 )
      {
        m_pInstance = 0;
        m_nEntityId = list.m_list.m_Memory.m_pMemory[v2].m_ShapeAttributes.m_nEntityId;
        if ( m_nEntityId + 2 > 1 )
        {
          v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_nEntityId >> 9) & 0x3F];
          if ( v6 != 0 )
          {
            v7 = &v6[m_nEntityId & 0x1FF];
            if ( v7 != 0 && m_nEntityId == v7->m_EHandle.m_Index )
              m_pInstance = v7->m_pInstance;
          }
        }
        if ( (m_pInstance[9].m_pEntity & 1) != 0 )
          break;
        ++v3;
        ++v2;
        if ( v3 >= list.m_list.m_Size )
          goto LABEL_11;
      }
      CBaseEntity::SetGroundEntity(m_pInstance, 0);
      ++v3;
      ++v2;
    }
    while ( v3 < list.m_list.m_Size );
  }
LABEL_11:
  list.m_list.m_Size = 0;
  v8 = list.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( list.m_list.m_Memory.m_nAllocationCount < 0
    || list.m_list.m_Memory.m_pMemory == &list.m_list.m_Memory.m_FixedMemory )
  {
    if ( v8 == 0 )
      CUtlMemory<COverlapHit,int>::Purge(&list.m_list.m_Memory);
  }
  else if ( list.m_list.m_Memory.m_pMemory != 0 && v8 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CBreakable::Die  (line 1075, @0x00000000022343d0, libserver.so)  // inlines: CPASFilter, CPVSFilter, CUtlSymbolLarge, CVariantBase, CWeakHandle, ClearData, CreateEvent, Explodable, FireOutput, Free, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetInt, GetUserID, IndexToIdentity, Init, IsValid, LookupEntity, OBBSize, SetEntityName, String, ToCStr, VectorMultiply, VectorSubtract, entindex, operator CEntityInstance*, operator bool, operator*, operator*=, operator-, operator->, operator=, ~CPASFilter, ~CPVSFilter, ~CSosFieldData, ~CSosFieldDataFloat, ~CVariantBase
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StartSoundEvent, CBaseEntity::GetHealth, CRecipientFilter::~CRecipientFilter, DevMsg(char const*,...), CRecipientFilter::AddRecipientsByPVS, CPropData::GetRandomChunkModel, CBreakable::ResetOnGroundFlags, CEntityIdentity::SetEntityName, CEntityIOOutput::FireOutputInternal (27 total)
// strings: "Breakable.Crate", "**ERROR - Unspecified gib dir method in func_breakable!\n", "Breakable.Concrete", "Breakable.Ceiling", "Breakable.Computer", "Breakable.Glass" (10 total)
// globals: jpt_2234417, CEntityHandle::gm_pEntityList, random_valve, modelinfo, engine
void __fastcall CBreakable::Die(CBreakable *const this)
{
  unsigned __int64 m_Index_low; // rsi
  const char *v3; // r12
  uint32 m_Index; // eax
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  unsigned __int64 v7; // rcx
  uint v8; // xmm1_4
  CEntityIndex v9; // eax
  SndOpEventGuid_t started; // r12
  __m128d v11; // xmm0
  __m128i v12; // xmm0
  Explosions m_Explosion; // eax
  vec_t v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  int m_nValue; // eax
  PerformanceMode_t m_PerformanceMode; // eax
  int i; // r12d
  const char *m_pAsString; // rsi
  const char *RandomChunkModel; // rax
  void (__fastcall *v22)(ITempEntsSystem *, CPASFilter *, Vector *, __int64, Vector *, Vector *, double, float, CSosFieldData *, int, int, int); // r15
  __int64 v23; // rax
  CEntityIdentity *m_pEntity; // rdi
  uint32 v25; // eax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  double v29; // xmm0_8
  double v30; // xmm1_8
  const QAngle *v31; // rax
  const char *v32; // rdi
  int v33; // r12d
  int v34; // ebx
  const QAngle *v35; // rax
  vec_t v36; // xmm1_4
  int v37; // eax
  CEntityInstance *v38; // rax
  __int64 v39; // r15
  void (__fastcall *v40)(__int64, char *, _QWORD); // r14
  CEntityInstance *v41; // rax
  CBasePlayer *v42; // rax
  CEntityIndex v43; // eax
  unsigned int v44; // eax
  void (__fastcall *v45)(__int64, char *, _QWORD); // r14
  CEntityIndex v46; // eax
  char cFlag; // [rsp+4Bh] [rbp-1F5h]
  int iCount; // [rsp+4Ch] [rbp-1F4h]
  double v49; // [rsp+50h] [rbp-1F0h]
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // [rsp+50h] [rbp-1F0h]
  EHANDLE *p_m_hBreaker; // [rsp+58h] [rbp-1E8h]
  __int64 v52; // [rsp+60h] [rbp-1E0h] BYREF
  string_t name; // [rsp+70h] [rbp-1D0h] BYREF
  Vector vecVelocity; // [rsp+80h] [rbp-1C0h] BYREF
  Vector vecSpot; // [rsp+90h] [rbp-1B0h] BYREF
  Vector vSize; // [rsp+A0h] [rbp-1A0h] BYREF
  CSosFieldData origin; // [rsp+B0h] [rbp-190h] BYREF
  CPASFilter filter; // [rsp+D0h] [rbp-170h] BYREF
  unsigned __int64 v59; // [rsp+208h] [rbp-38h]

  v59 = __readfsqword(0x28u);
  switch ( this->m_Material )
  {
    case Materials::matGlass:
      v3 = "Breakable.Glass";
      cFlag = 1;
      goto LABEL_3;
    case Materials::matWood:
      v3 = "Breakable.Crate";
      cFlag = 8;
      goto LABEL_3;
    case Materials::matMetal:
      v3 = "Breakable.Metal";
      cFlag = 2;
      goto LABEL_3;
    case Materials::matFlesh:
    case Materials::matWeb:
      v3 = "Breakable.Flesh";
      cFlag = 4;
      goto LABEL_3;
    case Materials::matCinderBlock:
    case Materials::matRocks:
      v3 = "Breakable.Concrete";
      cFlag = 64;
      goto LABEL_3;
    case Materials::matCeilingTile:
      v3 = "Breakable.Ceiling";
      cFlag = 0;
      goto LABEL_3;
    case Materials::matComputer:
      v3 = "Breakable.Computer";
      cFlag = 2;
LABEL_3:
      m_Index = this->m_hBreaker.m_Index;
      v5 = CEntityHandle::gm_pEntityList;
      v6 = (m_Index + 2);
      if ( v6 > 1 )
      {
        m_Index_low = LOWORD(this->m_hBreaker.m_Index);
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = m_Index_low & 0x1FF;
          m_Index_low = 8 * v7;
          v5 = 120 * v7;
          v6 = (v6 + v5);
          if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
          {
            p_m_hBreaker = &this->m_hBreaker;
            v38 = CEntityHandle::operator CEntityInstance *(&this->m_hBreaker);
            if ( (*(v38->_vptr_IHandleEntity + 140))(v38) != 0 )
            {
              v39 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "break_breakable", 0, 0);
              if ( v39 != 0 )
              {
                v40 = *(*v39 + 112LL);
                v41 = CEntityHandle::operator CEntityInstance *(p_m_hBreaker);
                v42 = ToBasePlayer(v41);
                v43.m_Data = CEntityInstance::GetEntityIndex(v42).m_Data;
                v44 = (*(*engine + 224LL))(engine, (v43.m_Data - 1));
                v40(v39, "userid", v44);
                v45 = *(*v39 + 112LL);
                v46.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
                v45(v39, "entindex", v46.m_Data);
                (*(*v39 + 112LL))(v39, "material", cFlag);
                (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v39, 0);
              }
            }
          }
        }
      }
      *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this, m_Index_low, v6, v5);
      origin.m_nAllocSize = v8;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
      v9.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, v3, v9, -1, 0.0);
      v49 = (*(*random_valve + 8LL))(random_valve, 0.85000002, 1.0);
      v11.m128d_f64[0] = CBaseEntity::GetHealth(this) / 100.0 + v49;
      v12 = _mm_cvtpd_ps(_mm_unpacklo_pd(v11, v11));
      if ( *v12.m128i_i32 < 1.0 )
      {
        CSosFieldDataFloat::CSosFieldDataFloat(&origin, v12, 1.0);
        CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, started, "volume_atten", &origin, 0, 0);
        if ( origin.m_nAllocSize > 8 && origin.m_pData != 0 )
          operator delete[](origin.m_pData);
      }
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
      m_Explosion = this->m_Explosion;
      if ( m_Explosion != Explosions::expDirected )
        goto LABEL_9;
      goto LABEL_45;
    default:
      cFlag = 0;
      m_Explosion = this->m_Explosion;
      if ( m_Explosion == Explosions::expDirected )
      {
LABEL_45:
        v36 = g_vecAttackDir.z * -200.0;
        vecVelocity.y = g_vecAttackDir.y * -200.0;
        vecVelocity.z = v36;
        vecVelocity.x = -200.0 * g_vecAttackDir.x;
      }
      else
      {
LABEL_9:
        if ( m_Explosion == Explosions::expUsePrecise )
        {
          AngleVectors(&this->m_GibDir, &vecVelocity, 0, 0);
          vecVelocity.x = vecVelocity.x * 200.0;
          vecVelocity.y = vecVelocity.y * 200.0;
          vecVelocity.z = 200.0 * vecVelocity.z;
        }
        else if ( m_Explosion != Explosions::expRandom )
        {
          DevMsg("**ERROR - Unspecified gib dir method in func_breakable!\n");
        }
        else
        {
          vecVelocity.x = 0.0;
          vecVelocity.y = 0.0;
          vecVelocity.z = 0.0;
        }
      }
      *&vecSpot.x = (*(this->_vptr_IHandleEntity + 62))(this);
      vecSpot.z = v14;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FF45F0;
      CRecipientFilter::AddRecipientsByPVS(&filter, &vecSpot);
      p_m_Collision = &this->m_Collision;
      v15 = this->m_Collision.m_vecMaxs.m_Value.y - this->m_Collision.m_vecMins.m_Value.y;
      v16 = this->m_Collision.m_vecMaxs.m_Value.z - this->m_Collision.m_vecMins.m_Value.z;
      vSize.x = this->m_Collision.m_vecMaxs.m_Value.x - this->m_Collision.m_vecMins.m_Value.x;
      vSize.y = v15;
      vSize.z = v16;
      m_nValue = func_break_max_pieces.m_pParent->m_Value.m_nValue;
      if ( ((((vSize.x * v15) + (v15 * v16)) + (v16 * vSize.x)) / 432.0) <= m_nValue )
        m_nValue = ((((vSize.x * v15) + (v15 * v16)) + (v16 * vSize.x)) / 432.0);
      iCount = m_nValue;
      if ( breakable_disable_gib_limit.m_pParent->m_Value.m_nValue != 0 )
        goto LABEL_18;
      if ( m_nValue == 0 )
        goto LABEL_24;
      m_PerformanceMode = this->m_PerformanceMode;
      if ( m_PerformanceMode == PerformanceMode_t::PM_NO_GIBS )
        goto LABEL_24;
      if ( m_PerformanceMode != PerformanceMode_t::PM_REDUCED_GIBS )
      {
LABEL_18:
        if ( this->m_iszModelName.u.m_Id == 0 || iCount <= 0 )
          goto LABEL_24;
        goto LABEL_20;
      }
      v37 = (iCount * func_break_reduction_factor.m_pParent->m_Value.m_fValue);
      if ( v37 <= 0 )
        v37 = 1;
      iCount = v37;
      if ( this->m_iszModelName.u.m_Id != 0 )
      {
LABEL_20:
        for ( i = 0; i != iCount; ++i )
        {
          m_pAsString = "";
          if ( this->m_iszModelName.u.m_Id != 0 )
            m_pAsString = this->m_iszModelName.u.m_pAsString;
          RandomChunkModel = CPropData::GetRandomChunkModel(g_pPropDataSystem, m_pAsString, -1);
          (*(modelinfo->_vptr_IAppSystem + 13))(&v52, modelinfo, RandomChunkModel);
          v22 = *(te->_vptr_IPredictionSystem + 9);
          *&origin.m_fieldDataType = v52;
          v23 = (*(this->m_Collision._vptr_ICollideable + 5))(p_m_Collision);
          v22(te, &filter, &vecSpot, v23, &vSize, &vecVelocity, 0.0, 2.5, &origin, 100, 1, cFlag | (i != 0 ? 0x80 : 0));
        }
      }
LABEL_24:
      CBreakable::ResetOnGroundFlags(this);
      m_pEntity = this->m_pEntity;
      name.u.m_Id = 0;
      CEntityIdentity::SetEntityName(m_pEntity, &name);
      (*(this->m_Collision._vptr_ICollideable + 16))(p_m_Collision);
      v25 = this->m_hBreaker.m_Index;
      m_pInstance = 0;
      if ( v25 + 2 > 1 )
      {
        v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBreaker.m_Index) >> 9) & 0x3F];
        if ( v27 != 0 )
        {
          v28 = &v27[this->m_hBreaker.m_Index & 0x1FF];
          if ( v28 != 0 && v25 == v28->m_EHandle.m_Index )
            m_pInstance = v28->m_pInstance;
        }
      }
      origin.m_nAllocSize = 0;
      *&origin.m_fieldDataType = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnBreak, m_pInstance, this, &origin, 0.0);
      if ( (origin.m_nAllocSize & 0x10000) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&origin.m_fieldDataType);
      (*(this->_vptr_IHandleEntity + 51))(this);
      CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
      *&v29 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.1;
      CBaseEntity::SetNextThink(this, v29, v30, 0);
      if ( this->m_iszSpawnObject.u.m_Id != 0 )
      {
        v31 = (*(this->m_Collision._vptr_ICollideable + 5))(p_m_Collision);
        v32 = "";
        if ( this->m_iszSpawnObject.u.m_Id != 0 )
          v32 = this->m_iszSpawnObject.u.m_pAsString;
        CBaseEntity::Create(v32, &vecSpot, v31, this);
      }
      if ( (*(this->_vptr_IHandleEntity + 225))(this) > 0.0 )
      {
        v33 = (*(this->_vptr_IHandleEntity + 225))(this);
        v34 = (*(this->_vptr_IHandleEntity + 226))(this);
        v35 = (*(this->m_Collision._vptr_ICollideable + 5))(p_m_Collision);
        ExplosionCreate(&vecSpot, v35, this, v34, v33, 1, 0.0, 0, 0, -1);
      }
      filter._vptr_IRecipientFilter = &off_3FF45F0;
      CRecipientFilter::~CRecipientFilter(&filter);
      return;
  }
}


// CBreakable::Event_Killed  (line 1259, @0x0000000002220660, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::SetDamageOptions, CBaseEntity::SetLifeState
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBreakable::Event_Killed(CBreakable *const this, const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[info->m_hAttacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
        (*(v5->m_pInstance->_vptr_IHandleEntity + 93))(v5->m_pInstance, this, info);
    }
  }
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_DEAD);
}


// CBreakable::IsBreakable  (line 1273, @0x0000000002227f10, libserver.so)
bool __fastcall CBreakable::IsBreakable(CBreakable *const this)
{
  return this->m_Material != Materials::matUnbreakableGlass;
}


// CBreakable::DamageDecal  (line 1281, @0x000000000221ad00, libserver.so)
// calls: CBaseModelEntity::DamageDecal
// strings: "BulletProof", "GlassBreak"
const char *__fastcall CBreakable::DamageDecal(CBreakable *const this, int bitsDamageType, int gameMaterial)
{
  Materials m_Material; // eax

  m_Material = this->m_Material;
  if ( m_Material == Materials::matGlass )
    return "GlassBreak";
  if ( m_Material == Materials::matUnbreakableGlass )
    return "BulletProof";
  return CBaseModelEntity::DamageDecal(this, bitsDamageType, gameMaterial);
}


// CBreakable::DrawDebugTextOverlays  (line 1296, @0x000000000221b430, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, CBaseEntity::VPhysicsGetObject, GetMassEquivalent, CBaseEntity::GetHealth, __stack_chk_fail
// callers: CPhysBox::DrawDebugTextOverlays
// strings: "Base PropData: %s", "Mass: %.2f kg / %.2f lb (%s)", "Health: %i"
int __fastcall CBreakable::DrawDebugTextOverlays(
        CBreakable *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r12
  int v6; // r13d
  IPhysicsObject *Object; // rax
  float v9; // xmm0_4
  float v10; // xmm1_4
  const char *MassEquivalent; // r14
  IPhysicsObject *v12; // rax
  IPhysicsObject *v13; // rax
  double v14; // xmm0_8
  int v15; // esi
  int Health; // eax
  float v17; // [rsp+Ch] [rbp-234h]
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v19; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v19 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    if ( (*(this->_vptr_IHandleEntity + 156))(this) != 0 )
    {
      Health = CBaseEntity::GetHealth(this);
      V_snprintf(tempstr, 512, "Health: %i", Health);
      CBaseEntity::EntityText(this, v6++, tempstr, 0.0, 255, 255, 255, 255);
    }
    if ( this->m_iszBasePropData.u.m_Id != 0 )
    {
      V_snprintf(tempstr, 512, "Base PropData: %s", this->m_iszBasePropData.u.m_pAsString);
      CBaseEntity::EntityText(this, v6++, tempstr, 0.0, 255, 255, 255, 255);
    }
    if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
    {
      Object = CBaseEntity::VPhysicsGetObject(this);
      v9 = (*(*Object + 208LL))(Object);
      MassEquivalent = GetMassEquivalent(v9, v10);
      v12 = CBaseEntity::VPhysicsGetObject(this);
      v17 = (*(*v12 + 208LL))(v12);
      v13 = CBaseEntity::VPhysicsGetObject(this);
      v14 = (*(*v13 + 208LL))(v13);
      V_snprintf(tempstr, 512, "Mass: %.2f kg / %.2f lb (%s)", *&v14, (v17 * 2.2), MassEquivalent);
      v15 = v6++;
      CBaseEntity::EntityText(this, v15, tempstr, 0.0, 255, 255, 255, 255);
    }
  }
  return v6;
}


// CBreakable::OnPhysGunPickup  (line 1335, @0x000000000221f040, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, curtime, operator=
void __fastcall CBreakable::OnPhysGunPickup(
        CBreakable *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason,
        int nVRControllerID)
{
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( pPhysGunUser != 0 && (m_pEntity = pPhysGunUser->m_pEntity) != 0 )
  {
    v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v7 = 0x7FFF;
    else
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v7 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v6 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
  }
  m_flCurrentTime = 0.0;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  this->m_flLastPhysicsInfluenceTime = m_flCurrentTime;
}


// CBreakable::OnPhysGunDrop  (line 1341, @0x000000000221f130, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, curtime, operator=
// callers: CPhysBox::OnPhysGunDrop
void __fastcall CBreakable::OnPhysGunDrop(
        CBreakable *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunDrop_t reason,
        int nVRControllerID)
{
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( pPhysGunUser != 0 && (m_pEntity = pPhysGunUser->m_pEntity) != 0 )
  {
    v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v7 = 0x7FFF;
    else
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v7 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v6 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
  }
  m_flCurrentTime = 0.0;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v9->m_flCurrentTime;
  }
  this->m_flLastPhysicsInfluenceTime = m_flCurrentTime;
}


// CBreakable::HasPhysicsAttacker  (line 1347, @0x00000000022200a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CBasePlayer*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBasePlayer *__fastcall CBreakable::HasPhysicsAttacker(CBreakable *const this, double a2, float dt)
{
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v5; // rbx
  uint32 m_Index; // edx
  CBasePlayer *result; // rax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v11; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = LODWORD(a2);
        (m_pfnWarningFunc)(1, a2, 0.0);
        LODWORD(a2) = v11;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  if ( this->m_flLastPhysicsInfluenceTime < (m_flCurrentTime - *&a2) )
    return 0;
  m_Index = this->m_hPhysicsAttacker.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsAttacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hPhysicsAttacker.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        return v9->m_pInstance;
    }
  }
  return result;
}


// CPushable::~CPushable  (line 1364, @0x0000000002247140, libserver.so)  // inlines: ~CBreakable
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CPushable::~CPushable(CPushable *const this)
{
  this->_vptr_IHandleEntity = &off_40417B0;
  this->_vptr_IBreakableWithPropData = off_4041F90;
  this->_vptr_IPlayerPickupVPhysics = &off_40420A8;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPushable::~CPushable  (line 1364, @0x0000000002247170, libserver.so)  // inlines: ~CBreakable, ~CPushable
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPushable::~CPushable(CPushable *const this)
{
  this->_vptr_IHandleEntity = &off_40417B0;
  this->_vptr_IBreakableWithPropData = off_4041F90;
  this->_vptr_IPlayerPickupVPhysics = &off_40420A8;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPushable::Schema_DynamicBinding  (line 1366, @0x0000000002245510, libserver.so)
// globals: CPushable::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPushable::Schema_DynamicBinding(const CPushable *const this)
{
  return CPushable::s_pSchemaBinding;
}


// CPushable::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1366, @0x0000000002245520, libserver.so)
// globals: CPushable::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPushable::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPushable::CEntityInstanceEntityClass *const this)
{
  return CPushable::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPushable::CEntityInstanceEntityClass::DestructInstance  (line 1366, @0x0000000002245530, libserver.so)  // inlines: Destruct<CPushable>
void __fastcall CPushable::CEntityInstanceEntityClass::DestructInstance(
        CPushable::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPushable::CEntityInstanceEntityClass::FreeInstance  (line 1366, @0x0000000002245550, libserver.so)
void __fastcall CPushable::CEntityInstanceEntityClass::FreeInstance(
        CPushable::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPushable::CEntityInstanceEntityClass::CanAllocate  (line 1366, @0x0000000002245570, libserver.so)
bool __fastcall CPushable::CEntityInstanceEntityClass::CanAllocate(
        const CPushable::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPushable::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1366, @0x0000000002245580, libserver.so)
// globals: CPushable::s_pSchemaBinding
const ISchemaBinding *__fastcall CPushable::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPushable::CEntityInstanceEntityClass *const this)
{
  return CPushable::s_pSchemaBinding;
}


// CPushable::CEntityInstanceEntityClass::AllocateInstance  (line 1366, @0x0000000002246810, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPushable::CEntityInstanceEntityClass::AllocateInstance(
        CPushable::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1400);
  memset(v1, 0, 0x578u);
  return v1;
}


// CPushable::CEntityInstanceEntityClass::ConstructInstance  (line 1366, @0x0000000002248090, libserver.so)  // inlines: CBreakable, CEntityHandle, CEntityIOOutput, CEntityOutputTemplate, CHandle, CPushable, CUtlSymbolLarge, Construct<CPushable>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CPushable::CEntityInstanceEntityClass::ConstructInstance(
        CPushable::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 293) = -1;
    *(p + 158) = off_3F7C190;
    *(p + 161) = off_3FD2290;
    *p = &off_4042190;
    *(p + 144) = off_4042970;
    *(p + 150) = 0;
    *(p + 151) = 0;
    *(p + 155) = 0;
    *(p + 156) = 0;
    *(p + 167) = 0;
    *(p + 168) = 0;
    *(p + 171) = 0;
    *(p + 347) = -1;
    *(p + 145) = &off_4042A88;
  }
  return p;
}


// CPushable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1366, @0x0000000002248f70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPushable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPushable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPushable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1366, @0x0000000002248f90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPushable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPushable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPushable::GetEntityClassInternal  (line 1366, @0x000000000224fb20, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "func_pushable", "CPushable", "func_breakable", "CBreakable"
// globals: `guard variable for'CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass, CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPushable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPushable::GetEntityClassInfo(void)::g_EntityCPushableClassInfo, CPushable::GetEntityClassInfo(void)::g_EntityCPushableClassInfo, `guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo (9 total)
CEntityClass *__cdecl CPushable::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass) != 0 )
  {
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_designerName.u.m_Id = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass._vptr_CEntityClass = off_3F79390;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_ComponentOffsets.m_Size = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_AllHelpers.m_Size = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_classInputs.m_Size = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_classOutputs.m_Size = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_requiredEHandle.m_Index = -1;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_hNetworkSerializer = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_pBaseClassInfo = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_pClassInfo = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_flags = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_nAllHelpersFlags = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_pScriptClassDesc = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_pInputs = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_nInputCount = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_pOutputs = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_nOutputCount = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_pGameClass = 0;
    CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass._vptr_CEntityClass = off_4042110;
    __cxa_guard_release(&`guard variable for'CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass);
    __cxa_atexit(
      CPushable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass,
      &_dso_handle);
  }
  if ( g_pEntityCPushableClass != 0 )
    return &CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass;
  if ( `guard variable for'CPushable::GetEntityClassInfo(void)::g_EntityCPushableClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPushable::GetEntityClassInfo(void)::g_EntityCPushableClassInfo) != 0 )
  {
    if ( `guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo,
        "CBreakable",
        "func_breakable",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPushable::GetEntityClassInfo(void)::g_EntityCPushableClassInfo,
      "CPushable",
      "func_pushable",
      0,
      &CBreakable::GetEntityClassInfo(void)::g_EntityCBreakableClassInfo);
    __cxa_guard_release(&`guard variable for'CPushable::GetEntityClassInfo(void)::g_EntityCPushableClassInfo);
  }
  CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_pClassInfo = &CPushable::GetEntityClassInfo(void)::g_EntityCPushableClassInfo;
  CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_pBaseClassInfo = CPushable::GetEntityClassInfo(void)::g_EntityCPushableClassInfo.m_pBaseClassInfo;
  g_pEntityCPushableClass = &CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass;
  CPushable::GetEntityClassInfo(void)::g_EntityCPushableClassInfo.m_pClass = &CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass;
  CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCPushableClass->m_pComponentOverrides = 0;
  return &CPushable::GetEntityClassInternal(void)::g_EntityCPushableClass;
}


// CPushable::ObjectCaps  (line 1373, @0x0000000002246c30, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CPushable::ObjectCaps(CPushable *const this)
{
  return CBaseEntity::ObjectCaps(this) | 4;
}


// CPushable::PhysicsSolidMaskForEntity  (line 1378, @0x0000000002245590, libserver.so)
uint64 __fastcall CPushable::PhysicsSolidMaskForEntity(const CPushable *const this)
{
  return 553009;
}


// CPushable::Spawn  (line 1383, @0x00000000022274d0, libserver.so)  // inlines: SetSolid
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBreakable::Spawn
void __fastcall CPushable::Spawn(CPushable *const this, const CEntityKeyValues *pKeyValues)
{
  if ( SLOBYTE(this->m_spawnflags.m_Value) < 0 )
  {
    CBreakable::Spawn(this, pKeyValues);
  }
  else
  {
    CBaseEntity::Spawn(this, pKeyValues);
    (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 6);
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
    (*(this->_vptr_IHandleEntity + 49))(this);
  }
}


// CPushable::CreateVPhysics  (line 1403, @0x000000000221aee0, libserver.so)
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel, CBaseEntity::VPhysicsGetObject
bool __fastcall CPushable::CreateVPhysics(CPushable *const this)
{
  IPhysicsObject *Object; // rax

  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC,
    4,
    0);
  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 )
    (*(*Object + 200LL))(Object, 30.0);
  return 1;
}


// CPushable::Use  (line 1418, @0x000000000221acf0, libserver.so)
// calls: CBaseEntity::Use
void __fastcall CPushable::Use(
        CPushable *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        __int64 useType,
        double value)
{
  CBaseEntity::Use(this, pActivator, pCaller, useType, value);
}


// CPushable::OnTakeDamage  (line 1424, @0x00000000022326e0, libserver.so)
// calls: CBreakable::OnTakeDamage
int __fastcall CPushable::OnTakeDamage(CPushable *const this, const CTakeDamageInfo *const info)
{
  if ( SLOBYTE(this->m_spawnflags.m_Value) < 0 )
    return CBreakable::OnTakeDamage(this, info);
  else
    return 1;
}


// CPushable::VPhysicsCollision  (line 1435, @0x000000000221b390, libserver.so)
// calls: CBreakable::VPhysicsCollision, CBaseEntity::VPhysicsCollision
void __fastcall CPushable::VPhysicsCollision(CPushable *const this, int index, gamevcollisionevent_t *pEvent)
{
  CBaseEntity *v6; // rdi

  v6 = pEvent->pEntities[index == 0];
  if ( (*(v6->_vptr_IHandleEntity + 140))(v6) != 0 )
    CBaseEntity::VPhysicsCollision(this, index, pEvent);
  else
    CBreakable::VPhysicsCollision(this, index, pEvent);
}


