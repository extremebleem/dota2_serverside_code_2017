// Reconstructed from DWARF by pahole; not original source.

// src/game/server/vguiscreen.cpp:20
class C_CVGuiScreen_MapInstall {
	C_CVGuiScreen_MapInstall();

	// sizeof = 1
};

// src/game/server/vguiscreen.cpp:23
class CVGuiScreenTeam : public CVGuiScreen {
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
	CVGuiScreenTeam(CVGuiScreenTeam &);
	CVGuiScreenTeam(CVGuiScreenTeam &);
	CVGuiScreenTeam();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CVGuiScreenTeam();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1200
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CVGuiScreen::YouForgotToImplementOrDeclareServerClass  (line 20, @0x00000000023f8a70, libserver.so)
int __fastcall CVGuiScreen::YouForgotToImplementOrDeclareServerClass(CVGuiScreen *const this)
{
  return 0;
}


// CVGuiScreen::GetServerClass  (line 20, @0x00000000023fd940, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CVGuiScreen::GetServerClass(CVGuiScreen *const this)
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


// CVGuiScreenTeam::Schema_DynamicBinding  (line 23, @0x0000000002410450, libserver.so)
// globals: CVGuiScreenTeam::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CVGuiScreenTeam::Schema_DynamicBinding(const CVGuiScreenTeam *const this)
{
  return CVGuiScreenTeam::s_pSchemaBinding;
}


// CVGuiScreenTeam::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x0000000002410460, libserver.so)
// globals: CVGuiScreenTeam::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CVGuiScreenTeam::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CVGuiScreenTeam::CEntityInstanceEntityClass *const this)
{
  return CVGuiScreenTeam::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CVGuiScreenTeam::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x0000000002410470, libserver.so)  // inlines: Destruct<CVGuiScreenTeam>
void __fastcall CVGuiScreenTeam::CEntityInstanceEntityClass::DestructInstance(
        CVGuiScreenTeam::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CVGuiScreenTeam::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x0000000002410490, libserver.so)
void __fastcall CVGuiScreenTeam::CEntityInstanceEntityClass::FreeInstance(
        CVGuiScreenTeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CVGuiScreenTeam::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x00000000024104b0, libserver.so)
bool __fastcall CVGuiScreenTeam::CEntityInstanceEntityClass::CanAllocate(
        const CVGuiScreenTeam::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CVGuiScreenTeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x00000000024104c0, libserver.so)
// globals: CVGuiScreenTeam::s_pSchemaBinding
const ISchemaBinding *__fastcall CVGuiScreenTeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CVGuiScreenTeam::CEntityInstanceEntityClass *const this)
{
  return CVGuiScreenTeam::s_pSchemaBinding;
}


// CVGuiScreenTeam::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x0000000002410770, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CVGuiScreenTeam::CEntityInstanceEntityClass::AllocateInstance(
        CVGuiScreenTeam::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1200);
  memset(v1, 0, 0x4B0u);
  return v1;
}


// CVGuiScreenTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000002411cf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CVGuiScreenTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CVGuiScreenTeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CVGuiScreenTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x0000000002411d10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CVGuiScreenTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CVGuiScreenTeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CVGuiScreenTeam::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x0000000002412b30, libserver.so)  // inlines: CVGuiScreenTeam, Construct<CVGuiScreenTeam>
// calls: CVGuiScreen::CVGuiScreen
CEntityInstance *__fastcall CVGuiScreenTeam::CEntityInstanceEntityClass::ConstructInstance(
        CVGuiScreenTeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CVGuiScreen::CVGuiScreen(p);
    *p = &off_40D28F0;
  }
  return p;
}


// CVGuiScreenTeam::~CVGuiScreenTeam  (line 23, @0x0000000002412be0, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle, ~CVGuiScreen
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CVGuiScreenTeam::~CVGuiScreenTeam(CVGuiScreenTeam *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CVGuiScreen::NetworkVar_m_nOverlayMaterial> *p_m_nOverlayMaterial; // rdi

  p_m_nOverlayMaterial = &this->m_nOverlayMaterial;
  p_m_nOverlayMaterial[-148].m_Value.m_pBinding = &off_40D21B0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_nOverlayMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CVGuiScreenTeam::~CVGuiScreenTeam  (line 23, @0x0000000002412c20, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle, ~CVGuiScreen, ~CVGuiScreenTeam
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CVGuiScreenTeam::~CVGuiScreenTeam(CVGuiScreenTeam *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CVGuiScreen::NetworkVar_m_nOverlayMaterial> *p_m_nOverlayMaterial; // rdi

  p_m_nOverlayMaterial = &this->m_nOverlayMaterial;
  p_m_nOverlayMaterial[-148].m_Value.m_pBinding = &off_40D21B0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_nOverlayMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CVGuiScreenTeam::GetEntityClassInternal  (line 23, @0x0000000002413110, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "vgui_screen_team", "CVGuiScreenTeam", "vgui_screen", "CVGuiScreen", "basemodelentity", "CBaseModelEntity" (8 total)
// globals: `guard variable for'CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass, CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CVGuiScreenTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CVGuiScreenTeam::GetEntityClassInfo(void)::g_EntityCVGuiScreenTeamClassInfo, CVGuiScreenTeam::GetEntityClassInfo(void)::g_EntityCVGuiScreenTeamClassInfo, `guard variable for'CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo (15 total)
CEntityClass *__cdecl CVGuiScreenTeam::GetEntityClassInternal()
{
  if ( `guard variable for'CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass == 0
    && __cxa_guard_acquire(&`guard variable for'CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass) != 0 )
  {
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_designerName.u.m_Id = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass._vptr_CEntityClass = off_3F79390;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_ComponentOffsets.m_Size = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_AllHelpers.m_Size = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_atomicFields,
      4);
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_classInputs.m_Size = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_classInputs.m_Memory.m_pMemory = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_classOutputs.m_Size = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_requiredEHandle.m_Index = -1;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_hNetworkSerializer = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_pBaseClassInfo = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_pClassInfo = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_flags = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_nAllHelpersFlags = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_pScriptClassDesc = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_pInputs = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_nInputCount = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_pOutputs = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_nOutputCount = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_pGameClass = 0;
    CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass._vptr_CEntityClass = off_40D2870;
    __cxa_guard_release(&`guard variable for'CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass);
    __cxa_atexit(
      CVGuiScreenTeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass,
      &_dso_handle);
  }
  if ( g_pEntityCVGuiScreenTeamClass != 0 )
    return &CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass;
  if ( `guard variable for'CVGuiScreenTeam::GetEntityClassInfo(void)::g_EntityCVGuiScreenTeamClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CVGuiScreenTeam::GetEntityClassInfo(void)::g_EntityCVGuiScreenTeamClassInfo) != 0 )
  {
    if ( `guard variable for'CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo) != 0 )
    {
      if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
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
          &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
          "CBaseModelEntity",
          "basemodelentity",
          0,
          &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
        __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo,
        "CVGuiScreen",
        "vgui_screen",
        0,
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CVGuiScreenTeam::GetEntityClassInfo(void)::g_EntityCVGuiScreenTeamClassInfo,
      "CVGuiScreenTeam",
      "vgui_screen_team",
      0,
      &CVGuiScreen::GetEntityClassInfo(void)::g_EntityCVGuiScreenClassInfo);
    __cxa_guard_release(&`guard variable for'CVGuiScreenTeam::GetEntityClassInfo(void)::g_EntityCVGuiScreenTeamClassInfo);
  }
  CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_pClassInfo = &CVGuiScreenTeam::GetEntityClassInfo(void)::g_EntityCVGuiScreenTeamClassInfo;
  CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_pBaseClassInfo = CVGuiScreenTeam::GetEntityClassInfo(void)::g_EntityCVGuiScreenTeamClassInfo.m_pBaseClassInfo;
  g_pEntityCVGuiScreenTeamClass = &CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass;
  CVGuiScreenTeam::GetEntityClassInfo(void)::g_EntityCVGuiScreenTeamClassInfo.m_pClass = &CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass;
  CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCVGuiScreenTeamClass->m_pComponentOverrides = 0;
  return &CVGuiScreenTeam::GetEntityClassInternal(void)::g_EntityCVGuiScreenTeamClass;
}


// InitManifestDesc<vgui_screen_server::CTemplateArg>  (line 25, @0x0000000002408de0, libserver.so)  // inlines: ResourceManifestEntry_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "vgui_screen.ventr"
// globals: `guard variable for'InitManifestDesc<vgui_screen_server::CTemplateArg>(vgui_screen_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<vgui_screen_server::CTemplateArg>(vgui_screen_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<vgui_screen_server::CTemplateArg>(vgui_screen_server::CTemplateArg &)::s_Manifest, _ZGRZ16InitManifestDescIN18vgui_screen_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1, _ZGRZ16InitManifestDescIN18vgui_screen_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0
ResourceManifestDesc_t *__fastcall InitManifestDesc<vgui_screen_server::CTemplateArg>(
        vgui_screen_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<vgui_screen_server::CTemplateArg>(vgui_screen_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<vgui_screen_server::CTemplateArg>(vgui_screen_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    byte_4B808A8 = 0;
    ZGRZ16InitManifestDescIN18vgui_screen_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1 = "vgui_screen.ventr";
    ZGRZ16InitManifestDescIN18vgui_screen_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0 = &ZGRZ16InitManifestDescIN18vgui_screen_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1;
    qword_4B808B0 = 0;
    InitManifestDesc<vgui_screen_server::CTemplateArg>(vgui_screen_server::CTemplateArg &)::s_pManifestEntries._M_array = &ZGRZ16InitManifestDescIN18vgui_screen_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0;
    qword_4B808B8 = 0;
    dword_4B808C0 = 0;
    qword_4B808D8 = 1;
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<vgui_screen_server::CTemplateArg>(vgui_screen_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<vgui_screen_server::CTemplateArg>(vgui_screen_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<vgui_screen_server::CTemplateArg>(vgui_screen_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<vgui_screen_server::CTemplateArg>(vgui_screen_server::CTemplateArg &)::s_Manifest;
}


// CVGuiScreen::GetDataDescMap  (line 33, @0x00000000023f8a80, libserver.so)
// globals: CVGuiScreen::m_DataMap
datamap_t *__fastcall CVGuiScreen::GetDataDescMap(CVGuiScreen *const this)
{
  return &CVGuiScreen::m_DataMap;
}


// CVGuiScreen::AddDatadescMetadataKeys  (line 33, @0x0000000002408e90, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CVGuiScreen::GetEntityClass(void)
void __fastcall CVGuiScreen::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CVGuiScreen::GetEntityClass);
}


// CVGuiScreen::GetBaseMap  (line 33, @0x0000000002408eb0, libserver.so)
datamap_t *__cdecl CVGuiScreen::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CVGuiScreen>  (line 33, @0x0000000002408ec0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_13.cpp
// strings: "CVGuiScreen"
// globals: `guard variable for'DataMapInit<CVGuiScreen>(CVGuiScreen *)::nameHolder, CVGuiScreen::GetEntityClass(void), CVGuiScreen::m_DataMap, DataMapInit<CVGuiScreen>(CVGuiScreen *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CVGuiScreen>(CVGuiScreen *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CVGuiScreen>(CVGuiScreen *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CVGuiScreen>(CVGuiScreen *)::nameHolder) != 0 )
  {
    DataMapInit<CVGuiScreen>(CVGuiScreen *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CVGuiScreen>(CVGuiScreen *)::nameHolder.m_pszBase = "CVGuiScreen";
    DataMapInit<CVGuiScreen>(CVGuiScreen *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CVGuiScreen>(CVGuiScreen *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CVGuiScreen>(CVGuiScreen *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CVGuiScreen>(CVGuiScreen *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CVGuiScreen>(CVGuiScreen *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CVGuiScreen>(CVGuiScreen *)::nameHolder,
      &_dso_handle);
  }
  CVGuiScreen::m_DataMap.dataNumFields = 10;
  CVGuiScreen::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CVGuiScreen::m_DataMap.dataDesc = &DataMapInit<CVGuiScreen>(CVGuiScreen *)::dataDesc[1];
  AddDatadescMetadataKeys(&CVGuiScreen::m_DataMap, CVGuiScreen::GetEntityClass);
  return &CVGuiScreen::m_DataMap;
}


// CVGuiScreen::CVGuiScreen  (line 55, @0x0000000002409fd0, libserver.so)  // inlines: CEntityHandle, CNetworkHandleBase, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<unsigned int>
// calls: CBaseModelEntity::CBaseModelEntity
// callers: CVGuiScreen::CEntityInstanceEntityClass::ConstructInstance, CVGuiScreenTeam::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CVGuiScreen::CVGuiScreen(CVGuiScreen *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_40D21B0;
  this->m_strOverlayMaterial.u.m_Id = 0;
  this->m_flWidth.m_Value = 0.0;
  *&this->m_flHeight.m_Value = 0;
  this->m_nPanelName.m_Value = 0;
  this->m_fScreenFlags.m_Value = 0;
  this->m_nOverlayMaterial.m_Value.m_pBinding = 0;
  this->m_hPlayerOwner.m_Value.m_Index = -1;
}


// CVGuiScreen::Spawn  (line 64, @0x000000000240b650, libserver.so)  // inlines: AddEFlags, AssignTo, Base, Element, EmptyValue<QAngle>, FindKeyHash, Get<QAngle>, GetValue, GetValue<QAngle>, GetValueString, NetworkStateChanged, Set, SetSolid, TempString, VariantFieldTypeName, Vector, operator=, operator=<<anonymous enum> >, operator=<int>, operator[]
// calls: CBaseEntity::Spawn, CEntityKeyValues::HasValue, CBaseEntity::DispatchUpdateTransmitState, CVGuiScreen::SetActualSize, CBaseEntity::SetDamageOptions, CBaseEntity::AddFlag, CVGuiScreen::SetPanelName, MatrixFromAngles, MatrixBuildRotationAboutAxis, MatrixMultiply, MatrixBuildRotateZ, MatrixToAngles (16 total)
// strings: "%g %g %g %g", "No free conversion of %s variant to QAngle right now\n", "js_raw_args", "js_array", "js_object", "js_value" (21 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_240B8FE, jpt_240BA70
void __fastcall CVGuiScreen::Spawn(CVGuiScreen *const this, const CEntityKeyValues *pKeyValues)
{
  double v4; // xmm2_8
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v7; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rdx
  const char *m_uint64; // rsi
  CEntityVariant *p_m_value; // rax
  int v12; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v13; // cx
  __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  const Quaternion *const *v17; // rdi
  float x; // xmm1_4
  float y; // xmm0_4
  vec_t z; // xmm2_4
  __int16 v21; // ax
  float v22; // xmm1_4
  float v23; // xmm1_4
  const char *v24; // rsi
  QAngle angles; // [rsp+0h] [rbp-100h] BYREF
  VMatrix mat; // [rsp+10h] [rbp-F0h] BYREF
  VMatrix rotation; // [rsp+50h] [rbp-B0h] BYREF
  VMatrix tmp; // [rsp+90h] [rbp-70h] BYREF

  CBaseEntity::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, -759460439) )
    goto LABEL_2;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_31:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_19;
    goto LABEL_32;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v7 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v7) == -759460439 )
      goto LABEL_16;
LABEL_13:
    if ( m_nCount <= ++v7 )
      goto LABEL_31;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v7] != -759460439 )
    goto LABEL_13;
LABEL_16:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v9 = pKeyValues->m_keyValues.m_pElements;
  else
    v9 = 0;
  m_uint64 = 0;
  p_m_value = &v9[v7].m_value;
  if ( p_m_value->m_type == 30 )
LABEL_19:
    m_uint64 = p_m_value->m_uint64;
LABEL_32:
  CVGuiScreen::SetPanelName(this, m_uint64);
LABEL_2:
  if ( !CEntityKeyValues::HasValue(pKeyValues, -1164387633) )
    goto LABEL_3;
  v12 = pKeyValues->m_keyHashes.m_nCount;
  if ( v12 <= 0 )
  {
LABEL_33:
    v17 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_34;
  }
  v13 = pKeyValues->m_keyHashes.m_nAllocated;
  v14 = 0;
  while ( 2 )
  {
    if ( v13 == 0 )
    {
      if ( *(4 * v14) == -1164387633 )
        break;
      goto LABEL_25;
    }
    v15 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v13 > 9 )
      v15 = pKeyValues->m_keyHashes.m_pElements;
    if ( v15[v14] != -1164387633 )
    {
LABEL_25:
      if ( v12 <= ++v14 )
        goto LABEL_33;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v16 = pKeyValues->m_keyValues.m_pElements;
  else
    v16 = 0;
  v17 = &v16[v14];
LABEL_34:
  x = vec3_angle.x;
  y = vec3_angle.y;
  z = vec3_angle.z;
  *&tmp.m[0][0] = __PAIR64__(LODWORD(y), LODWORD(vec3_angle.x));
  tmp.m[0][2] = z;
  v21 = *(v17 + 4);
  switch ( v21 )
  {
    case 0:
      break;
    case 3:
    case 39:
      z = (*v17)->z;
      x = **v17;
      y = (*v17)->y;
      break;
    case 4:
      QuaternionAngles(*v17, &tmp);
      y = tmp.m[0][1];
      x = tmp.m[0][0];
      z = tmp.m[0][2];
      break;
    case 30:
      rotation.m[0][0] = 0.0;
      if ( V_sscanf(*v17, "%g %g %g %g", &tmp, &tmp.m[0][1], &tmp.m[0][2], &rotation) == 3 )
      {
        y = tmp.m[0][1];
        x = tmp.m[0][0];
        z = tmp.m[0][2];
      }
      else
      {
        z = vec3_angle.z;
        x = vec3_angle.x;
        y = vec3_angle.y;
      }
      break;
    default:
      switch ( v21 )
      {
        case 0:
          v24 = "void";
          break;
        case 1:
          v24 = "float";
          break;
        case 3:
          v24 = "vector";
          break;
        case 4:
          v24 = "quaternion";
          break;
        case 5:
          v24 = "integer";
          break;
        case 6:
          v24 = "boolean";
          break;
        case 8:
          v24 = "character";
          break;
        case 9:
          v24 = "color";
          break;
        case 13:
          v24 = "ehandle";
          break;
        case 25:
          v24 = "vector2d";
          break;
        case 26:
          v24 = "int64";
          break;
        case 27:
          v24 = "vector4d";
          break;
        case 28:
          v24 = "resourcehandle";
          break;
        case 30:
          v24 = "cstring";
          break;
        case 31:
          v24 = "hscript";
          break;
        case 32:
          v24 = "variant";
          break;
        case 33:
          v24 = "uint64";
          break;
        case 34:
          v24 = "float64";
          break;
        case 37:
          v24 = "unsigned";
          break;
        case 38:
          v24 = "utlstringtoken";
          break;
        case 39:
          v24 = "qangle";
          break;
        case 48:
          v24 = "hscript_lightbinding";
          break;
        case 49:
          v24 = "js_value";
          break;
        case 50:
          v24 = "js_object";
          break;
        case 51:
          v24 = "js_array";
          break;
        case 52:
          v24 = "js_raw_args";
          break;
        default:
          v24 = "unknown_variant_type";
          break;
      }
      Warning("No free conversion of %s variant to QAngle right now\n", v24);
      y = tmp.m[0][1];
      x = tmp.m[0][0];
      z = tmp.m[0][2];
      break;
  }
  angles.x = x;
  angles.z = z;
  angles.y = y;
  MatrixFromAngles(&angles, &mat);
  *&tmp.m[0][0] = 0x3F80000000000000LL;
  tmp.m[0][2] = 0.0;
  MatrixBuildRotationAboutAxis(&rotation, &tmp, v22);
  MatrixMultiply(&mat, &rotation, &tmp);
  MatrixBuildRotateZ(&rotation, v23);
  MatrixMultiply(&tmp, &rotation, &mat);
  MatrixToAngles(&mat, &angles);
  CBaseEntity::SetAbsAngles(this, &angles);
LABEL_3:
  this->m_iEFlags |= 0x80u;
  CBaseEntity::DispatchUpdateTransmitState(this);
  if ( this->m_nAttachmentIndex.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nAttachmentIndex.m_Value = 0;
  }
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 3);
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  CVGuiScreen::SetActualSize(
    this,
    COERCE_DOUBLE(LODWORD(this->m_flWidth.m_Value)),
    COERCE_DOUBLE(LODWORD(this->m_flHeight.m_Value)),
    v4);
  if ( this->m_fScreenFlags.m_Value != 1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fScreenFlags.m_Value = 1;
  }
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
  CBaseEntity::AddFlag(this, 0x8000);
}


// CVGuiScreen::Precache  (line 107, @0x000000000240fbf0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, PrecacheMaterial
void __fastcall CVGuiScreen::Precache(CVGuiScreen *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  if ( this->m_strOverlayMaterial.u.m_Id != 0 )
    PrecacheMaterial(this->m_strOverlayMaterial.u.m_pAsString, pContext);
}


// CVGuiScreen::Activate  (line 120, @0x000000000240a170, libserver.so)  // inlines: operator!=
// calls: CBaseModelEntity::Activate, CVGuiScreen::SetOverlayMaterial
void __fastcall CVGuiScreen::Activate(CVGuiScreen *const this, ActivateType_t activateType)
{
  const char *m_pAsString; // rsi

  CBaseModelEntity::Activate(this, activateType);
  if ( this->m_nOverlayMaterial.m_Value.m_pBinding == 0 )
  {
    m_pAsString = this->m_strOverlayMaterial.u.m_pAsString;
    if ( m_pAsString != 0 )
      CVGuiScreen::SetOverlayMaterial(this, m_pAsString);
  }
}


// CVGuiScreen::OnRestore  (line 130, @0x00000000023f8bd0, libserver.so)
// calls: CBaseModelEntity::OnRestore
void __fastcall CVGuiScreen::OnRestore(CVGuiScreen *const this)
{
  (*(this->_vptr_IHandleEntity + 64))(this);
  CBaseModelEntity::OnRestore(this);
}


// CVGuiScreen::SetAttachmentIndex  (line 137, @0x0000000002408f90, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CreateVGuiScreen
void __fastcall CVGuiScreen::SetAttachmentIndex(CVGuiScreen *const this, int nIndex)
{
  if ( this->m_nAttachmentIndex.m_Value != nIndex )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nAttachmentIndex.m_Value = nIndex;
  }
}


// CVGuiScreen::SetOverlayMaterial  (line 142, @0x000000000240a050, libserver.so)  // inlines: CStrongHandle, GetBinding, Init, NetworkStateChanged, Set, ThreadInterlockedIncrement, operator++, operator=, operator=<CWeakHandle<InfoForResourceTypeIMaterial2> >, ~CStrongHandle
// calls: GetMaterialIndex, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, _Unwind_Resume
// callers: CVGuiScreen::Activate
void __fastcall CVGuiScreen::SetOverlayMaterial(CVGuiScreen *const this, const char *pMaterial)
{
  const ResourceBindingBase_t *m_pBinding; // rsi
  const ResourceBindingBase_t *v4; // rax
  const ResourceBindingBase_t *v5; // rsi
  bool v6; // zf
  __int64 v7; // [rsp+0h] [rbp-40h] BYREF
  CStrongHandle<InfoForResourceTypeIMaterial2> v8; // [rsp+10h] [rbp-30h] BYREF

  GetMaterialIndex(&v7, pMaterial);
  m_pBinding = v7;
  v8.m_pBinding = v7;
  if ( v7 != 0 )
  {
    if ( (*(v7 + 16) & 0x20) != 0 )
    {
      (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, v7, 2, &v8);
      m_pBinding = v8.m_pBinding;
    }
    _InterlockedAdd(&m_pBinding->m_nRefCount.m_value, 1u);
    v4 = v8.m_pBinding;
  }
  else
  {
    v4 = 0;
  }
  if ( this->m_nOverlayMaterial.m_Value.m_pBinding != v4 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( this->m_nOverlayMaterial.m_Value.m_pBinding != 0 )
      CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_nOverlayMaterial.m_Value);
    v5 = v8.m_pBinding;
    v6 = v8.m_pBinding == 0;
    this->m_nOverlayMaterial.m_Value = v8;
    if ( !v6 )
    {
      if ( (v5->m_nFlags & 0x20) != 0 )
      {
        (*(*g_pResourceHandleUtils + 24LL))(g_pResourceHandleUtils, v5, 2, &this->m_nOverlayMaterial);
        v5 = this->m_nOverlayMaterial.m_Value.m_pBinding;
      }
      _InterlockedAdd(&v5->m_nRefCount.m_value, 1u);
    }
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&v8);
}


// CVGuiScreen::IsActive  (line 147, @0x0000000002408fd0, libserver.so)
bool __fastcall CVGuiScreen::IsActive(const CVGuiScreen *const this)
{
  return this->m_fScreenFlags.m_Value & 1;
}


// CVGuiScreen::SetActive  (line 152, @0x0000000002408fe0, libserver.so)  // inlines: IsActive, NetworkStateChanged, Set, operator&=<int>, operator|=<<anonymous enum> >
// callers: CVGuiScreen::InputSetActive, CVGuiScreen::InputSetInactive
void __fastcall CVGuiScreen::SetActive(CVGuiScreen *const this, bool bActive)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d

  m_Value = this->m_fScreenFlags.m_Value;
  if ( bActive != (this->m_fScreenFlags.m_Value & 1) )
  {
    if ( bActive )
    {
      v4 = m_Value | 1;
      if ( m_Value == (m_Value | 1) )
        return;
    }
    else
    {
      v4 = m_Value & 0xFFFFFFFE;
      if ( m_Value == (m_Value & 0xFFFFFFFE) )
        return;
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fScreenFlags.m_Value = v4;
  }
}


// CVGuiScreen::IsAttachedToViewModel  (line 171, @0x0000000002409070, libserver.so)
bool __fastcall CVGuiScreen::IsAttachedToViewModel(const CVGuiScreen *const this)
{
  return (this->m_fScreenFlags.m_Value & 4) != 0;
}


// CVGuiScreen::SetAttachedToViewModel  (line 180, @0x0000000002409090, libserver.so)  // inlines: IsActive, NetworkStateChanged, Set, operator&=<int>, operator|=<<anonymous enum> >
// calls: CBaseEntity::DispatchUpdateTransmitState
void __fastcall CVGuiScreen::SetAttachedToViewModel(CVGuiScreen *const this, bool bAttached)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d
  unsigned int v5; // r12d

  m_Value = this->m_fScreenFlags.m_Value;
  if ( bAttached != (this->m_fScreenFlags.m_Value & 1) )
  {
    if ( bAttached )
    {
      v4 = m_Value | 4;
      if ( m_Value != (m_Value | 4) )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_fScreenFlags.m_Value = v4;
      }
      CBaseEntity::DispatchUpdateTransmitState(this);
      goto LABEL_6;
    }
    v5 = m_Value & 0xFFFFFFFB;
    if ( m_Value == (m_Value & 0xFFFFFFFB) )
    {
LABEL_6:
      CBaseEntity::DispatchUpdateTransmitState(this);
      return;
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fScreenFlags.m_Value = v5;
    CBaseEntity::DispatchUpdateTransmitState(this);
  }
}


// CVGuiScreen::SetTransparency  (line 201, @0x0000000002409130, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>, operator|=<<anonymous enum> >
void __fastcall CVGuiScreen::SetTransparency(CVGuiScreen *const this, bool bTransparent)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d

  m_Value = this->m_fScreenFlags.m_Value;
  if ( bTransparent )
  {
    v4 = m_Value | 8;
    if ( m_Value == (m_Value | 8) )
      return;
  }
  else
  {
    v4 = m_Value & 0xFFFFFFF7;
    if ( m_Value == (m_Value & 0xFFFFFFF7) )
      return;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_fScreenFlags.m_Value = v4;
}


// CVGuiScreen::InputSetActive  (line 216, @0x0000000002409050, libserver.so)
// calls: CVGuiScreen::SetActive
void __fastcall CVGuiScreen::InputSetActive(CVGuiScreen *const this, inputdata_t *const inputdata)
{
  CVGuiScreen::SetActive(this, 1);
}


// CVGuiScreen::InputSetInactive  (line 224, @0x0000000002409060, libserver.so)
// calls: CVGuiScreen::SetActive
void __fastcall CVGuiScreen::InputSetInactive(CVGuiScreen *const this, inputdata_t *const inputdata)
{
  CVGuiScreen::SetActive(this, 0);
}


// CVGuiScreen::IsVisibleOnlyToTeammates  (line 229, @0x0000000002409190, libserver.so)
bool __fastcall CVGuiScreen::IsVisibleOnlyToTeammates(const CVGuiScreen *const this)
{
  return (this->m_fScreenFlags.m_Value & 2) != 0;
}


// CVGuiScreen::MakeVisibleOnlyToTeammates  (line 234, @0x00000000024091b0, libserver.so)  // inlines: IsVisibleOnlyToTeammates, NetworkStateChanged, Set, operator&=<int>, operator|=<<anonymous enum> >
void __fastcall CVGuiScreen::MakeVisibleOnlyToTeammates(CVGuiScreen *const this, bool bActive)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d

  m_Value = this->m_fScreenFlags.m_Value;
  if ( bActive != ((m_Value & 2) != 0) )
  {
    if ( bActive )
    {
      v4 = m_Value | 2;
      if ( m_Value == (m_Value | 2) )
        return;
    }
    else
    {
      v4 = m_Value & 0xFFFFFFFD;
      if ( m_Value == (m_Value & 0xFFFFFFFD) )
        return;
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fScreenFlags.m_Value = v4;
  }
}


// CVGuiScreen::IsVisibleToTeam  (line 249, @0x0000000002409220, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, LookupEntity
bool __fastcall CVGuiScreen::IsVisibleToTeam(CVGuiScreen *const this, int nTeam)
{
  bool result; // al
  uint32 v3; // ecx
  unsigned __int16 v4; // dx
  int v5; // edi
  int v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  __int64 v9; // [rsp-8h] [rbp-8h]

  result = 1;
  if ( (this->m_fScreenFlags.m_Value & 2) != 0 && nTeam > 0 )
  {
    v3 = this->m_hOwnerEntity.m_Value.m_Index >> 15;
    if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    *(&v9 - 8) = v4 | *(&v9 - 2) & 0x8000;
    v6 = (v3 << 15) | *(&v9 - 2) & 0x7FFF;
    *(&v9 - 4) = v6;
    result = 1;
    if ( (v6 + 2) > 1 )
    {
      v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
      if ( v7 != 0 )
      {
        v8 = &v7[v5 & 0x1FF];
        if ( v8 != 0
          && v6 == v8->m_EHandle.m_Index
          && v8->m_pInstance != 0
          && nTeam != HIBYTE(v8->m_pInstance[7].m_CScriptComponent) )
        {
          return 0;
        }
      }
    }
  }
  return result;
}


// CVGuiScreen::UpdateTransmitState  (line 271, @0x00000000023f9b70, libserver.so)
// calls: CBaseEntity::GetMoveParent, CBaseEntity::SetTransmitState, CBaseEntity::UpdateTransmitState
int __fastcall CVGuiScreen::UpdateTransmitState(CVGuiScreen *const this)
{
  int v1; // esi

  v1 = 0;
  if ( (this->m_fScreenFlags.m_Value & 4) != 0 )
    return CBaseEntity::SetTransmitState(this, v1);
  if ( CBaseEntity::GetMoveParent(this) != 0 )
  {
    v1 = 16;
    return CBaseEntity::SetTransmitState(this, v1);
  }
  return CBaseEntity::UpdateTransmitState(this);
}


// CVGuiScreen::ShouldTransmit  (line 290, @0x00000000023faa30, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CBaseEntity::ShouldTransmit
int __fastcall CVGuiScreen::ShouldTransmit(CVGuiScreen *const this, const CGameCheckTransmitInfo *pInfo)
{
  uint32 v3; // ecx
  unsigned __int16 v4; // dx
  int v5; // edi
  int v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx

  v3 = this->m_hOwnerEntity.m_Value.m_Index >> 15;
  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (v3 << 15) | v4 & 0x7FFF;
  if ( (v6 + 2) > 1
    && (v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9]) != 0
    && (v8 = &v7[v5 & 0x1FF]) != 0
    && v6 == v8->m_EHandle.m_Index
    && v8->m_pInstance != 0 )
  {
    return (*(v8->m_pInstance->_vptr_IHandleEntity + 65))(v8->m_pInstance, pInfo);
  }
  else
  {
    return CBaseEntity::ShouldTransmit(this, pInfo);
  }
}


// CVGuiScreen::SetPanelName  (line 307, @0x0000000002409310, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CreateVGuiScreen, CVGuiScreen::Spawn
void __fastcall CVGuiScreen::SetPanelName(CVGuiScreen *const this, const char *pPanelName)
{
  int v3; // r12d

  v3 = (*(g_pStringTableVguiScreen->_vptr_INetworkStringTable + 8))(
         g_pStringTableVguiScreen,
         1,
         pPanelName,
         0xFFFFFFFFLL,
         0);
  if ( v3 != this->m_nPanelName.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1172, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nPanelName.m_Value = v3;
  }
}


// CVGuiScreen::GetPanelName  (line 312, @0x0000000002409370, libserver.so)
const char *__fastcall CVGuiScreen::GetPanelName(const CVGuiScreen *const this)
{
  return (*(g_pStringTableVguiScreen->_vptr_INetworkStringTable + 9))(
           g_pStringTableVguiScreen,
           this->m_nPanelName.m_Value,
           0);
}


// CVGuiScreen::SetActualSize  (line 321, @0x00000000024093a0, libserver.so)  // inlines: Init, NetworkStateChanged, Set, SetCollisionBounds, UTIL_SetSize, operator=<float>
// calls: CCollisionProperty::SetCollisionBounds
// callers: CVGuiScreen::Spawn
void __fastcall CVGuiScreen::SetActualSize(CVGuiScreen *const this, double a2, double flWidth, double flHeight)
{
  float flHeightb; // [rsp+8h] [rbp-38h]
  unsigned int flHeighta; // [rsp+8h] [rbp-38h]
  int flWidthb; // [rsp+Ch] [rbp-34h]
  float flWidtha; // [rsp+Ch] [rbp-34h]
  Vector mins; // [rsp+10h] [rbp-30h] BYREF
  Vector maxs; // [rsp+20h] [rbp-20h] BYREF

  if ( *&a2 != this->m_flWidth.m_Value )
  {
    flHeighta = LODWORD(flWidth);
    flWidtha = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, *&flWidth, *&flHeight);
    *&a2 = LODWORD(flWidtha);
    *&flWidth = flHeighta;
    this->m_flWidth.m_Value = flWidtha;
  }
  if ( *&flWidth != this->m_flHeight.m_Value )
  {
    flHeightb = *&flWidth;
    flWidthb = LODWORD(a2);
    (*(this->_vptr_IHandleEntity + 22))(this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flWidth, flHeight);
    *&flWidth = flHeightb;
    LODWORD(a2) = flWidthb;
    this->m_flHeight.m_Value = flHeightb;
  }
  mins.x = 0.0;
  mins.y = 0.0;
  mins.z = -0.1;
  maxs.x = 0.0;
  maxs.y = 0.0;
  maxs.z = 0.1;
  if ( *&a2 <= 0.0 )
    mins.x = *&a2;
  else
    maxs.x = *&a2;
  if ( *&flWidth <= 0.0 )
    mins.y = *&flWidth;
  else
    maxs.y = *&flWidth;
  CCollisionProperty::SetCollisionBounds(&this->m_Collision, &mins, &maxs);
}


// CVGuiScreen::SetPlayerOwner  (line 344, @0x00000000024094c0, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=, operator=<<anonymous enum> >
// globals: CEntityHandle::gm_pEntityList
void __fastcall CVGuiScreen::SetPlayerOwner(CVGuiScreen *const this, CBasePlayer *pPlayer, bool bOwnerOnlyInput)
{
  CBasePlayer *m_pInstance; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v11; // eax
  __int16 v12; // cx

  m_pInstance = 0;
  m_Index = this->m_hPlayerOwner.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPlayerOwner.m_Value.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hPlayerOwner.m_Value.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( pPlayer != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( pPlayer != 0 && (m_pEntity = pPlayer->m_pEntity) != 0 )
    {
      v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v12 = 0x7FFF;
      else
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hPlayerOwner.m_Value.m_Index) = v12 | this->m_hPlayerOwner.m_Value.m_Index & 0x8000;
      this->m_hPlayerOwner.m_Value.m_Index = (v11 << 15) | this->m_hPlayerOwner.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hPlayerOwner.m_Value.m_Index = -1;
    }
  }
  if ( bOwnerOnlyInput && this->m_fScreenFlags.m_Value != 16 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fScreenFlags.m_Value = 16;
  }
}


// PrecacheVGuiScreen  (line 358, @0x0000000002409620, libserver.so)
void __fastcall PrecacheVGuiScreen(const char *pScreenType)
{
  (*(g_pStringTableVguiScreen->_vptr_INetworkStringTable + 8))(
    g_pStringTableVguiScreen,
    1,
    pScreenType,
    0xFFFFFFFFLL,
    0);
}


// CreateVGuiScreen  (line 367, @0x0000000002409650, libserver.so)
// calls: CBaseEntity::Create, CVGuiScreen::SetPanelName, CBaseEntity::FollowEntity, CVGuiScreen::SetAttachmentIndex
CVGuiScreen *__fastcall CreateVGuiScreen(
        const char *pScreenClassname,
        const char *pScreenType,
        CBaseEntity *pAttachedTo,
        CBaseEntity *pOwner,
        int nAttachmentIndex)
{
  CVGuiScreen *v9; // rbx

  v9 = CBaseEntity::Create(pScreenClassname, &vec3_origin, &vec3_angle, pAttachedTo);
  CVGuiScreen::SetPanelName(v9, pScreenType);
  CBaseEntity::FollowEntity(v9, pAttachedTo, 1);
  (*(v9->_vptr_IHandleEntity + 40))(v9, pOwner);
  CVGuiScreen::SetAttachmentIndex(v9, nAttachmentIndex);
  return v9;
}


// DestroyVGuiScreen  (line 380, @0x00000000024096d0, libserver.so)
// calls: UTIL_Remove
void __fastcall DestroyVGuiScreen(CVGuiScreen *pVGuiScreen)
{
  if ( pVGuiScreen != 0 )
    UTIL_Remove(pVGuiScreen);
}


