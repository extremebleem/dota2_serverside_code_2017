// Reconstructed from DWARF by pahole; not original source.

// src/game/server/modelentities.cpp:37
class C_CFuncBrush_MapInstall {
	C_CFuncBrush_MapInstall();

	// sizeof = 1
};

// src/game/server/modelentities.cpp:236
class CTriggerBrush : public CBaseModelEntity {
	enum TriggerFilters_e {
		TRIGGER_IGNOREPLAYERS = 0x1,
		TRIGGER_IGNORENPCS = 0x2,
		TRIGGER_IGNOREPUSHABLES = 0x4,
		TRIGGER_IGNORETOUCH = 0x8,
		TRIGGER_IGNOREUSE = 0x10,
		TRIGGER_IGNOREALL = 0x20,
	};

public:

private:

	COutputEvent m_OnStartTouch;  // +0x480
	COutputEvent m_OnEndTouch;  // +0x498
	COutputEvent m_OnUse;  // +0x4b0
	int m_iInputFilter;  // +0x4c8
	int m_iDontMessageParent;  // +0x4cc

	static datamap_t m_DataMap;
	typedef CBaseModelEntity BaseClass;

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
	CTriggerBrush(CTriggerBrush &);
	CTriggerBrush(CTriggerBrush &);
	CTriggerBrush();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void StartTouch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	bool PassesInputFilter(CBaseEntity *, int);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTriggerBrush();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[111] StartTouch
	// vtable[113] EndTouch
	// vtable[108] Use
	// vtable[34] GetDataDescMap
	// sizeof = 1232
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncBrush::GetDataDescMap  (line 20, @0x0000000002283e70, libserver.so)
// globals: CFuncBrush::m_DataMap
datamap_t *__fastcall CFuncBrush::GetDataDescMap(CFuncBrush *const this)
{
  return &CFuncBrush::m_DataMap;
}


// CFuncBrush::AddDatadescMetadataKeys  (line 20, @0x00000000022997b0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncBrush::GetEntityClass(void)
void __fastcall CFuncBrush::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncBrush::GetEntityClass);
}


// CFuncBrush::GetBaseMap  (line 20, @0x00000000022997d0, libserver.so)
datamap_t *__cdecl CFuncBrush::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncBrush>  (line 20, @0x00000000022997e0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CFuncBrush"
// globals: `guard variable for'DataMapInit<CFuncBrush>(CFuncBrush *)::nameHolder, CFuncBrush::GetEntityClass(void), CFuncBrush::m_DataMap, DataMapInit<CFuncBrush>(CFuncBrush *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncBrush>(CFuncBrush *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncBrush>(CFuncBrush *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncBrush>(CFuncBrush *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncBrush>(CFuncBrush *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncBrush>(CFuncBrush *)::nameHolder.m_pszBase = "CFuncBrush";
    DataMapInit<CFuncBrush>(CFuncBrush *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncBrush>(CFuncBrush *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncBrush>(CFuncBrush *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncBrush>(CFuncBrush *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncBrush>(CFuncBrush *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncBrush>(CFuncBrush *)::nameHolder,
      &_dso_handle);
  }
  CFuncBrush::m_DataMap.dataNumFields = 11;
  CFuncBrush::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CFuncBrush::m_DataMap.dataDesc = &DataMapInit<CFuncBrush>(CFuncBrush *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncBrush::m_DataMap, CFuncBrush::GetEntityClass);
  return &CFuncBrush::m_DataMap;
}


// CFuncBrush::YouForgotToImplementOrDeclareServerClass  (line 37, @0x0000000002283e80, libserver.so)
int __fastcall CFuncBrush::YouForgotToImplementOrDeclareServerClass(CFuncBrush *const this)
{
  return 0;
}


// CFuncBrush::GetServerClass  (line 37, @0x000000000228d6c0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFuncBrush::GetServerClass(CFuncBrush *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CFuncBrush::CFuncBrush  (line 39, @0x00000000022998b0, libserver.so)  // inlines: CUtlSymbolLarge
// calls: CBaseModelEntity::CBaseModelEntity
// callers: CFuncBrush::CEntityInstanceEntityClass::ConstructInstance, CFuncMonitor::CFuncMonitor
void __fastcall CFuncBrush::CFuncBrush(CFuncBrush *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->m_iszExcludedClass.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_406EE90;
  this->m_bScriptedMovement = 0;
}


// CFuncBrush::Spawn  (line 44, @0x0000000002299950, libserver.so)  // inlines: AddEFlags, CUtlSymbolLarge, GetEntityName, SetSolid
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::AddFlag, CBaseEntity::SetNetworkQuantizeOriginAngAngles, CBaseEntity::NetworkQuantize, CBaseEntity::GetMoveParent, CFuncBrush::TurnOff
// callers: CFuncMonitor::Spawn
void __fastcall CFuncBrush::Spawn(CFuncBrush *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  if ( this->m_bScriptedMovement )
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NOCLIP, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  else
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 6);
  this->m_iEFlags |= 0x40000u;
  if ( this->m_iSolidity == CFuncBrush::BrushSolidities_e::BRUSHSOLID_NEVER )
    (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  if ( this->m_iDisabled != 0 )
    CFuncBrush::TurnOff(this);
  if ( this->m_pEntity->m_name.u.m_Id == 0 || CBaseEntity::GetMoveParent(this) != 0 )
    CBaseEntity::AddFlag(this, 0x1000000);
  (*(this->_vptr_IHandleEntity + 49))(this);
  if ( this->m_bSolidBsp )
    (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 1);
  CBaseEntity::SetNetworkQuantizeOriginAngAngles(this, 1);
  CBaseEntity::NetworkQuantize(this);
}


// CFuncBrush::CreateVPhysics  (line 91, @0x0000000002285b10, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CFuncBrush::CreateVPhysics(CFuncBrush *const this)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx
  int v4; // edx

  m_pCollision = this->m_pCollision;
  if ( (this->m_fFlags.m_Value & 0x1000000) != 0 )
  {
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
  else
  {
    if ( m_pCollision != 0 )
      v4 = m_pCollision->m_CollisionGroup.m_Value;
    else
      v4 = 4;
    CCollisionProperty::SetupPhysicsFromUnscaledModel(
      &this->m_Collision,
      VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
      v4,
      0);
    return 1;
  }
}


// CFuncBrush::DrawDebugTextOverlays  (line 118, @0x0000000002284650, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, CBaseEntity::GetLocalAngles, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "angles: %g %g %g"
int __fastcall CFuncBrush::DrawDebugTextOverlays(
        CFuncBrush *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v5; // bl
  int v6; // r13d
  const QAngle *LocalAngles; // rax
  double z; // [rsp+10h] [rbp-240h]
  double y; // [rsp+18h] [rbp-238h]
  char tempstr[520]; // [rsp+20h] [rbp-230h] BYREF
  unsigned __int64 v12; // [rsp+228h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v12 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    z = CBaseEntity::GetLocalAngles(this)->z;
    y = CBaseEntity::GetLocalAngles(this)->y;
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    V_snprintf(tempstr, 512, "angles: %g %g %g", LocalAngles->x, y, z);
    CBaseEntity::EntityText(this, v6++, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CFuncBrush::InputToggle  (line 137, @0x0000000002299b10, libserver.so)
// calls: CFuncBrush::TurnOn, CFuncBrush::TurnOff
void __fastcall CFuncBrush::InputToggle(CFuncBrush *const this, inputdata_t *const inputdata)
{
  if ( (*(this->_vptr_IHandleEntity + 214))(this, inputdata) != 0 )
    CFuncBrush::TurnOff(this);
  else
    CFuncBrush::TurnOn(this);
}


// CFuncBrush::InputTurnOff  (line 152, @0x0000000002299a90, libserver.so)
// calls: CFuncBrush::TurnOff
void __fastcall CFuncBrush::InputTurnOff(CFuncBrush *const this, inputdata_t *const inputdata)
{
  CFuncBrush::TurnOff(this);
}


// CFuncBrush::InputTurnOn  (line 161, @0x0000000002299b50, libserver.so)
// calls: CFuncBrush::TurnOn
void __fastcall CFuncBrush::InputTurnOn(CFuncBrush *const this, inputdata_t *const inputdata)
{
  CFuncBrush::TurnOn(this);
}


// CFuncBrush::InputSetExcluded  (line 170, @0x000000000228bc30, libserver.so)  // inlines: AssignTo, StringID, TempString, ToString, operator=
// calls: MakeEntitySystemString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_228BC61, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CFuncBrush::InputSetExcluded(CFuncBrush *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8
  UtlSymLargeId_t v8; // [rsp+10h] [rbp-20h]

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_15;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_15;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_iszExcludedClass.u.m_Id = v8;
}


// CFuncBrush::InputSetInvert  (line 178, @0x0000000002283e90, libserver.so)
void __fastcall CFuncBrush::InputSetInvert(CFuncBrush *const this, inputdata_t *const inputdata)
{
  this->m_bInvertExclusion = inputdata->value.m_char;
}


// CFuncBrush::TurnOff  (line 187, @0x00000000022998f0, libserver.so)
// calls: CBaseEntity::AddEffects
// callers: CFuncBrush::Spawn, CFuncBrush::InputTurnOff, CFuncBrush::InputToggle
void __fastcall CFuncBrush::TurnOff(CFuncBrush *const this)
{
  if ( (*(this->_vptr_IHandleEntity + 214))(this) != 0 )
  {
    if ( this->m_iSolidity != CFuncBrush::BrushSolidities_e::BRUSHSOLID_ALWAYS )
      (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
    CBaseEntity::AddEffects(this, 32);
    this->m_iDisabled = 1;
  }
}


// CFuncBrush::TurnOn  (line 205, @0x0000000002299aa0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::DispatchUpdateTransmitState
// callers: CFuncBrush::InputToggle, CFuncBrush::InputTurnOn
void __fastcall CFuncBrush::TurnOn(CFuncBrush *const this)
{
  if ( (*(this->_vptr_IHandleEntity + 214))(this) == 0 )
  {
    if ( this->m_iSolidity != CFuncBrush::BrushSolidities_e::BRUSHSOLID_NEVER )
      (*(this->m_Collision._vptr_ICollideable + 15))(&this->m_Collision);
    (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(this);
  }
}


// CFuncBrush::IsOn  (line 219, @0x0000000002283ea0, libserver.so)
bool __fastcall CFuncBrush::IsOn(CFuncBrush *const this)
{
  return ((this->m_fEffects.m_Value >> 5) ^ 1) & 1;
}


// CFuncBrush::Precache  (line 224, @0x00000000022a42f0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
// callers: CFuncMonitor::Precache
void __fastcall CFuncBrush::Precache(CFuncBrush *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CTriggerBrush::~CTriggerBrush  (line 236, @0x00000000022a9eb0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CTriggerBrush::~CTriggerBrush(CTriggerBrush *const this)
{
  this->_vptr_IHandleEntity = &off_406F5F0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CTriggerBrush::~CTriggerBrush  (line 236, @0x00000000022a9ed0, libserver.so)  // inlines: ~CTriggerBrush
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CTriggerBrush::~CTriggerBrush(CTriggerBrush *const this)
{
  this->_vptr_IHandleEntity = &off_406F5F0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CTriggerBrush::GetEntityClass  (line 238, @0x00000000022a69e0, libserver.so)
CEntityClass *__cdecl CTriggerBrush::GetEntityClass()
{
  return g_pEntityCTriggerBrushClass;
}


// CTriggerBrush::Schema_DynamicBinding  (line 238, @0x00000000022a69f0, libserver.so)
// globals: CTriggerBrush::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerBrush::Schema_DynamicBinding(const CTriggerBrush *const this)
{
  return CTriggerBrush::s_pSchemaBinding;
}


// CTriggerBrush::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 238, @0x00000000022a6a00, libserver.so)
// globals: CTriggerBrush::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTriggerBrush::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTriggerBrush::CEntityInstanceEntityClass *const this)
{
  return CTriggerBrush::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTriggerBrush::CEntityInstanceEntityClass::DestructInstance  (line 238, @0x00000000022a6a10, libserver.so)  // inlines: Destruct<CTriggerBrush>
void __fastcall CTriggerBrush::CEntityInstanceEntityClass::DestructInstance(
        CTriggerBrush::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTriggerBrush::CEntityInstanceEntityClass::FreeInstance  (line 238, @0x00000000022a6a30, libserver.so)
void __fastcall CTriggerBrush::CEntityInstanceEntityClass::FreeInstance(
        CTriggerBrush::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTriggerBrush::CEntityInstanceEntityClass::CanAllocate  (line 238, @0x00000000022a6a50, libserver.so)
bool __fastcall CTriggerBrush::CEntityInstanceEntityClass::CanAllocate(
        const CTriggerBrush::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTriggerBrush::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 238, @0x00000000022a6a60, libserver.so)
// globals: CTriggerBrush::s_pSchemaBinding
const ISchemaBinding *__fastcall CTriggerBrush::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTriggerBrush::CEntityInstanceEntityClass *const this)
{
  return CTriggerBrush::s_pSchemaBinding;
}


// CTriggerBrush::CEntityInstanceEntityClass::AllocateInstance  (line 238, @0x00000000022a8840, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTriggerBrush::CEntityInstanceEntityClass::AllocateInstance(
        CTriggerBrush::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1232);
  memset(v1, 0, 0x4D0u);
  return v1;
}


// CTriggerBrush::CEntityInstanceEntityClass::ConstructInstance  (line 238, @0x00000000022a91d0, libserver.so)  // inlines: CEntityIOOutput, CTriggerBrush, Construct<CTriggerBrush>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CTriggerBrush::CEntityInstanceEntityClass::ConstructInstance(
        CTriggerBrush::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_406F5F0;
    *(p + 144) = off_3F7C190;
    *(p + 147) = off_3F7C190;
    *(p + 150) = off_3F7C190;
  }
  return p;
}


// CTriggerBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 238, @0x00000000022ab590, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTriggerBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerBrush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTriggerBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 238, @0x00000000022ab5b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTriggerBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTriggerBrush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTriggerBrush::GetEntityClassInternal  (line 238, @0x00000000022b4960, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "trigger_brush", "CTriggerBrush"
// globals: `guard variable for'CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass, CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass, __dso_handle, CTriggerBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTriggerBrush::GetEntityClassInfo(void)::g_EntityCTriggerBrushClassInfo, CTriggerBrush::GetEntityClassInfo(void)::g_EntityCTriggerBrushClassInfo
CEntityClass *__cdecl CTriggerBrush::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass);
    CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass._vptr_CEntityClass = off_406F570;
    __cxa_guard_release(&`guard variable for'CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass);
    __cxa_atexit(
      CTriggerBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass,
      &_dso_handle);
  }
  if ( g_pEntityCTriggerBrushClass != 0 )
    return &CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass;
  if ( `guard variable for'CTriggerBrush::GetEntityClassInfo(void)::g_EntityCTriggerBrushClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTriggerBrush::GetEntityClassInfo(void)::g_EntityCTriggerBrushClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTriggerBrush::GetEntityClassInfo(void)::g_EntityCTriggerBrushClassInfo,
      "CTriggerBrush",
      "trigger_brush",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTriggerBrush::GetEntityClassInfo(void)::g_EntityCTriggerBrushClassInfo);
  }
  CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass.m_pClassInfo = &CTriggerBrush::GetEntityClassInfo(void)::g_EntityCTriggerBrushClassInfo;
  CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass.m_pBaseClassInfo = CTriggerBrush::GetEntityClassInfo(void)::g_EntityCTriggerBrushClassInfo.m_pBaseClassInfo;
  g_pEntityCTriggerBrushClass = &CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass;
  CTriggerBrush::GetEntityClassInfo(void)::g_EntityCTriggerBrushClassInfo.m_pClass = &CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass;
  CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCTriggerBrushClass->m_pComponentOverrides = 0;
  return &CTriggerBrush::GetEntityClassInternal(void)::g_EntityCTriggerBrushClass;
}


// CTriggerBrush::InputEnable  (line 264, @0x00000000022a9220, libserver.so)
// calls: CBaseEntity::RemoveFlag
void __fastcall CTriggerBrush::InputEnable(CTriggerBrush *const this, inputdata_t *const inputdata)
{
  CBaseEntity::RemoveFlag(this, 0x400000);
}


// CTriggerBrush::InputDisable  (line 269, @0x00000000022a9fc0, libserver.so)
// calls: CBaseEntity::AddFlag
void __fastcall CTriggerBrush::InputDisable(CTriggerBrush *const this, inputdata_t *const inputdata)
{
  CBaseEntity::AddFlag(this, 0x400000);
}


// CTriggerBrush::GetDataDescMap  (line 287, @0x0000000002283ec0, libserver.so)
// globals: CTriggerBrush::m_DataMap
datamap_t *__fastcall CTriggerBrush::GetDataDescMap(CTriggerBrush *const this)
{
  return &CTriggerBrush::m_DataMap;
}


// CTriggerBrush::AddDatadescMetadataKeys  (line 287, @0x0000000002299b60, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTriggerBrush::GetEntityClass(void)
void __fastcall CTriggerBrush::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTriggerBrush::GetEntityClass);
}


// CTriggerBrush::GetBaseMap  (line 287, @0x0000000002299b80, libserver.so)
datamap_t *__cdecl CTriggerBrush::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CTriggerBrush>  (line 287, @0x0000000002299b90, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CTriggerBrush"
// globals: `guard variable for'DataMapInit<CTriggerBrush>(CTriggerBrush *)::nameHolder, `guard variable for'DataMapInit<CTriggerBrush>(CTriggerBrush *)::dataDesc, CTriggerBrush::GetEntityClass(void), CTriggerBrush::m_DataMap, DataMapInit<CTriggerBrush>(CTriggerBrush *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTriggerBrush>(CTriggerBrush *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerBrush>(CTriggerBrush *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerBrush>(CTriggerBrush *)::nameHolder) != 0 )
  {
    DataMapInit<CTriggerBrush>(CTriggerBrush *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTriggerBrush>(CTriggerBrush *)::nameHolder.m_pszBase = "CTriggerBrush";
    DataMapInit<CTriggerBrush>(CTriggerBrush *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTriggerBrush>(CTriggerBrush *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTriggerBrush>(CTriggerBrush *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTriggerBrush>(CTriggerBrush *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerBrush>(CTriggerBrush *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTriggerBrush>(CTriggerBrush *)::nameHolder,
      &_dso_handle);
  }
  CTriggerBrush::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CTriggerBrush>(CTriggerBrush *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTriggerBrush>(CTriggerBrush *)::dataDesc) != 0 )
  {
    DataMapInit<CTriggerBrush>(CTriggerBrush *)::dataDesc[3].pSaveRestoreOps = eventFuncs;
    DataMapInit<CTriggerBrush>(CTriggerBrush *)::dataDesc[4].pSaveRestoreOps = eventFuncs;
    DataMapInit<CTriggerBrush>(CTriggerBrush *)::dataDesc[5].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTriggerBrush>(CTriggerBrush *)::dataDesc);
  }
  CTriggerBrush::m_DataMap.dataNumFields = 7;
  CTriggerBrush::m_DataMap.dataDesc = &DataMapInit<CTriggerBrush>(CTriggerBrush *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTriggerBrush::m_DataMap, CTriggerBrush::GetEntityClass);
  return &CTriggerBrush::m_DataMap;
}


// CTriggerBrush::Spawn  (line 302, @0x0000000002285110, libserver.so)  // inlines: GetInt, SetSolid
// calls: CBaseEntity::Spawn, CCollisionProperty::SetTriggerCollisionGroup, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::AddEffects
void __fastcall CTriggerBrush::Spawn(CTriggerBrush *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13

  p_m_Collision = &this->m_Collision;
  CBaseEntity::Spawn(this, pKeyValues);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 1);
  CCollisionProperty::SetTriggerCollisionGroup(p_m_Collision);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  if ( showtriggers.m_pParent->m_Value.m_nValue == 0 )
    CBaseEntity::AddEffects(this, 32);
}


// CTriggerBrush::StartTouch  (line 323, @0x000000000229e9a0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CTriggerBrush::PassesInputFilter, CEntityIOOutput::FireOutputInternal, CBaseEntity::StartTouch, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CTriggerBrush::StartTouch(CTriggerBrush *const this, CBaseEntity *pOther)
{
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  if ( CTriggerBrush::PassesInputFilter(this, pOther, this->m_iInputFilter) && (this->m_iInputFilter & 8) == 0 )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnStartTouch, pOther, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( this->m_iDontMessageParent == 0 )
      CBaseEntity::StartTouch(this, pOther);
  }
}


// CTriggerBrush::EndTouch  (line 338, @0x000000000229ea60, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CTriggerBrush::PassesInputFilter, CEntityIOOutput::FireOutputInternal, CBaseEntity::EndTouch, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CTriggerBrush::EndTouch(CTriggerBrush *const this, CBaseEntity *pOther)
{
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  if ( CTriggerBrush::PassesInputFilter(this, pOther, this->m_iInputFilter) && (this->m_iInputFilter & 8) == 0 )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnEndTouch, pOther, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( this->m_iDontMessageParent == 0 )
      CBaseEntity::EndTouch(this, pOther);
  }
}


// CTriggerBrush::Use  (line 357, @0x000000000229e8c0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CTriggerBrush::PassesInputFilter, CEntityIOOutput::FireOutputInternal, CBaseEntity::Use, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CTriggerBrush::Use(
        CTriggerBrush *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        unsigned int useType,
        float value)
{
  CVariant v10; // [rsp+10h] [rbp-40h] BYREF

  if ( CTriggerBrush::PassesInputFilter(this, pActivator, this->m_iInputFilter) && (this->m_iInputFilter & 0x10) == 0 )
  {
    v10.m_flags = 0;
    v10.m_type = 0;
    v10.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnUse, pActivator, this, &v10, 0.0);
    if ( (v10.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10.m_uint64);
    if ( this->m_iDontMessageParent == 0 )
      CBaseEntity::Use(this, pActivator, pCaller, useType, COERCE_DOUBLE(LODWORD(value)));
  }
}


// CTriggerBrush::PassesInputFilter  (line 376, @0x0000000002299cc0, libserver.so)  // inlines: FStrEq, GetClassNameAsCStr, GetClassname, String, _V_strcmp
// callers: CTriggerBrush::Use, CTriggerBrush::StartTouch, CTriggerBrush::EndTouch
// strings: "func_pushable"
bool __fastcall CTriggerBrush::PassesInputFilter(CTriggerBrush *const this, CBaseEntity *pOther, int filter)
{
  bool result; // al
  const char *m_pAsString; // rsi
  char v5; // al
  char v6; // [rsp-14h] [rbp-14h]
  CBaseEntity *v7; // [rsp-10h] [rbp-10h]

  result = 1;
  if ( filter != 0 )
  {
    if ( (filter & 1) != 0 )
    {
      v6 = filter;
      v7 = pOther;
      v5 = (*(pOther->_vptr_IHandleEntity + 140))(pOther);
      pOther = v7;
      LOBYTE(filter) = v6;
      if ( v5 != 0 )
        return 0;
    }
    if ( (filter & 2) != 0 && (pOther->m_fFlags.m_Value & 0x2000) != 0 )
      return 0;
    if ( (filter & 4) == 0 )
      return 1;
    m_pAsString = pOther->m_pEntity->m_designerName.u.m_pAsString;
    result = 1;
    if ( m_pAsString != 0 )
    {
      if ( m_pAsString == "func_pushable" )
        return 0;
      if ( strcmp(m_pAsString, "func_pushable") == 0 )
        return 0;
    }
  }
  return result;
}


