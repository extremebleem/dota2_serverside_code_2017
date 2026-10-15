
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIParticleSystemDefinition>::Inspect  (line 159, @0x0000000001f11d70, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeIParticleSystemDefinition>, GetBinding, GetResourceName, GetResourceName<512ul>, ResourceGetName, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CWeakHandle"
void __fastcall CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIParticleSystemDefinition>::Inspect(
        CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIParticleSystemDefinition> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  const char **v7; // rax
  void (__fastcall *v8)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v9; // rsi
  _BYTE v10[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v11; // [rsp+208h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CWeakHandle", 0);
  if ( *pMember != 0 )
  {
    v7 = *(*pMember + 8LL);
    v8 = *(*pTarget + 152LL);
    if ( v7 != 0 )
    {
      v9 = "";
      if ( *v7 != 0 )
        v9 = *v7;
      _V_strncpy(v10, v9, 512, v5, v6);
    }
    else
    {
      _V_strncpy(v10, "", 512, v5, v6);
    }
    v8(pTarget, v10, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeMorphSetData_t>::Inspect  (line 159, @0x0000000003198ac0, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeMorphSetData_t>, GetBinding, GetResourceName, GetResourceName<512ul>, ResourceGetName, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CWeakHandle"
void __fastcall CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeMorphSetData_t>::Inspect(
        CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeMorphSetData_t> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  const char **v5; // rax
  void (__fastcall *v6)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v7; // rsi
  _BYTE v8[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+208h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CWeakHandle", 0);
  if ( *pMember != 0 )
  {
    v5 = *(*pMember + 8LL);
    v6 = *(*pTarget + 152LL);
    if ( v5 != 0 )
    {
      v7 = "";
      if ( *v5 != 0 )
        v7 = *v5;
      _V_strncpy(v8, v7, 512);
    }
    else
    {
      _V_strncpy(v8, "", 512);
    }
    v6(pTarget, v8, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIMaterial2>::Inspect  (line 159, @0x0000000003198bb0, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeIMaterial2>, GetBinding, GetResourceName, GetResourceName<512ul>, ResourceGetName, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CWeakHandle"
void __fastcall CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIMaterial2>::Inspect(
        CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIMaterial2> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  const char **v5; // rax
  void (__fastcall *v6)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v7; // rsi
  _BYTE v8[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+208h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CWeakHandle", 0);
  if ( *pMember != 0 )
  {
    v5 = *(*pMember + 8LL);
    v6 = *(*pTarget + 152LL);
    if ( v5 != 0 )
    {
      v7 = "";
      if ( *v5 != 0 )
        v7 = *v5;
      _V_strncpy(v8, v7, 512);
    }
    else
    {
      _V_strncpy(v8, "", 512);
    }
    v6(pTarget, v8, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCModel>::Inspect  (line 159, @0x000000000319e4d0, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeCModel>, GetBinding, GetResourceName, GetResourceName<512ul>, ResourceGetName, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CWeakHandle"
void __fastcall CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCModel>::Inspect(
        CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCModel> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  const char **v5; // rax
  void (__fastcall *v6)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v7; // rsi
  _BYTE v8[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+208h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CWeakHandle", 0);
  if ( *pMember != 0 )
  {
    v5 = *(*pMember + 8LL);
    v6 = *(*pTarget + 152LL);
    if ( v5 != 0 )
    {
      v7 = "";
      if ( *v5 != 0 )
        v7 = *v5;
      _V_strncpy(v8, v7, 512);
    }
    else
    {
      _V_strncpy(v8, "", 512);
    }
    v6(pTarget, v8, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeSequenceGroupResourceData_t>::Inspect  (line 159, @0x000000000319e5c0, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeSequenceGroupResourceData_t>, GetBinding, GetResourceName, GetResourceName<512ul>, ResourceGetName, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CWeakHandle"
void __fastcall CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeSequenceGroupResourceData_t>::Inspect(
        CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeSequenceGroupResourceData_t> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  const char **v5; // rax
  void (__fastcall *v6)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v7; // rsi
  _BYTE v8[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+208h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CWeakHandle", 0);
  if ( *pMember != 0 )
  {
    v5 = *(*pMember + 8LL);
    v6 = *(*pTarget + 152LL);
    if ( v5 != 0 )
    {
      v7 = "";
      if ( *v5 != 0 )
        v7 = *v5;
      _V_strncpy(v8, v7, 512);
    }
    else
    {
      _V_strncpy(v8, "", 512);
    }
    v6(pTarget, v8, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeAnimationGroupResourceData_t>::Inspect  (line 159, @0x000000000319e6b0, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeAnimationGroupResourceData_t>, GetBinding, GetResourceName, GetResourceName<512ul>, ResourceGetName, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CWeakHandle"
void __fastcall CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeAnimationGroupResourceData_t>::Inspect(
        CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeAnimationGroupResourceData_t> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  const char **v5; // rax
  void (__fastcall *v6)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v7; // rsi
  _BYTE v8[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+208h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CWeakHandle", 0);
  if ( *pMember != 0 )
  {
    v5 = *(*pMember + 8LL);
    v6 = *(*pTarget + 152LL);
    if ( v5 != 0 )
    {
      v7 = "";
      if ( *v5 != 0 )
        v7 = *v5;
      _V_strncpy(v8, v7, 512);
    }
    else
    {
      _V_strncpy(v8, "", 512);
    }
    v6(pTarget, v8, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCPhysAggregateData>::Inspect  (line 159, @0x000000000319e7a0, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeCPhysAggregateData>, GetBinding, GetResourceName, GetResourceName<512ul>, ResourceGetName, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CWeakHandle"
void __fastcall CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCPhysAggregateData>::Inspect(
        CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCPhysAggregateData> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  const char **v5; // rax
  void (__fastcall *v6)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v7; // rsi
  _BYTE v8[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+208h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CWeakHandle", 0);
  if ( *pMember != 0 )
  {
    v5 = *(*pMember + 8LL);
    v6 = *(*pTarget + 152LL);
    if ( v5 != 0 )
    {
      v7 = "";
      if ( *v5 != 0 )
        v7 = *v5;
      _V_strncpy(v8, v7, 512);
    }
    else
    {
      _V_strncpy(v8, "", 512);
    }
    v6(pTarget, v8, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCRenderMesh>::Inspect  (line 159, @0x000000000319e890, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeCRenderMesh>, GetBinding, GetResourceName, GetResourceName<512ul>, ResourceGetName, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CWeakHandle"
void __fastcall CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCRenderMesh>::Inspect(
        CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCRenderMesh> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  const char **v5; // rax
  void (__fastcall *v6)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v7; // rsi
  _BYTE v8[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+208h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CWeakHandle", 0);
  if ( *pMember != 0 )
  {
    v5 = *(*pMember + 8LL);
    v6 = *(*pTarget + 152LL);
    if ( v5 != 0 )
    {
      v7 = "";
      if ( *v5 != 0 )
        v7 = *v5;
      _V_strncpy(v8, v7, 512);
    }
    else
    {
      _V_strncpy(v8, "", 512);
    }
    v6(pTarget, v8, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCTextureBase>::Inspect  (line 159, @0x00000000031a3880, libserver.so)  // inlines: CResourceNameGetter<InfoForResourceTypeCTextureBase>, GetBinding, GetResourceName, GetResourceName<512ul>, ResourceGetName, String, V_strncpy<int>
// calls: _V_strncpy, __stack_chk_fail
// strings: "CWeakHandle"
void __fastcall CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCTextureBase>::Inspect(
        CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCTextureBase> *const this,
        const void *pMember,
        ISchemaSerializationTarget *pTarget)
{
  const char **v5; // rax
  void (__fastcall *v6)(ISchemaSerializationTarget *, _BYTE *, _QWORD); // r13
  const char *v7; // rsi
  _BYTE v8[520]; // [rsp+0h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+208h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  (*(*pTarget + 72LL))(pTarget, "CWeakHandle", 0);
  if ( *pMember != 0 )
  {
    v5 = *(*pMember + 8LL);
    v6 = *(*pTarget + 152LL);
    if ( v5 != 0 )
    {
      v7 = "";
      if ( *v5 != 0 )
        v7 = *v5;
      _V_strncpy(v8, v7, 512);
    }
    else
    {
      _V_strncpy(v8, "", 512);
    }
    v6(pTarget, v8, 0);
  }
  else
  {
    (*(*pTarget + 96LL))(pTarget);
  }
  (*(*pTarget + 80LL))(pTarget);
}


// CSchemaManipulator<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> >::SearchForInterface  (line 186, @0x0000000001f0f550, libserver.so)
void *__fastcall CSchemaManipulator<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition>>::SearchForInterface(
        CSchemaManipulator<CWeakHandle<InfoForResourceTypeIParticleSystemDefinition> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIParticleSystemDefinition> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CSchemaManipulator<CWeakHandle<InfoForResourceTypeMorphSetData_t> >::SearchForInterface  (line 186, @0x0000000003195070, libserver.so)
void *__fastcall CSchemaManipulator<CWeakHandle<InfoForResourceTypeMorphSetData_t>>::SearchForInterface(
        CSchemaManipulator<CWeakHandle<InfoForResourceTypeMorphSetData_t> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeMorphSetData_t> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CSchemaManipulator<CWeakHandle<InfoForResourceTypeIMaterial2> >::SearchForInterface  (line 186, @0x0000000003195090, libserver.so)
void *__fastcall CSchemaManipulator<CWeakHandle<InfoForResourceTypeIMaterial2>>::SearchForInterface(
        CSchemaManipulator<CWeakHandle<InfoForResourceTypeIMaterial2> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeIMaterial2> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CSchemaManipulator<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> >::SearchForInterface  (line 186, @0x000000000319b760, libserver.so)
void *__fastcall CSchemaManipulator<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t>>::SearchForInterface(
        CSchemaManipulator<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeSequenceGroupResourceData_t> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CSchemaManipulator<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> >::SearchForInterface  (line 186, @0x000000000319b780, libserver.so)
void *__fastcall CSchemaManipulator<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t>>::SearchForInterface(
        CSchemaManipulator<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeAnimationGroupResourceData_t> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CSchemaManipulator<CWeakHandle<InfoForResourceTypeCPhysAggregateData> >::SearchForInterface  (line 186, @0x000000000319b7a0, libserver.so)
void *__fastcall CSchemaManipulator<CWeakHandle<InfoForResourceTypeCPhysAggregateData>>::SearchForInterface(
        CSchemaManipulator<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCPhysAggregateData> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CSchemaManipulator<CWeakHandle<InfoForResourceTypeCRenderMesh> >::SearchForInterface  (line 186, @0x000000000319b7c0, libserver.so)
void *__fastcall CSchemaManipulator<CWeakHandle<InfoForResourceTypeCRenderMesh>>::SearchForInterface(
        CSchemaManipulator<CWeakHandle<InfoForResourceTypeCRenderMesh> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCRenderMesh> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CSchemaManipulator<CWeakHandle<InfoForResourceTypeCModel> >::SearchForInterface  (line 186, @0x000000000319b8e0, libserver.so)
void *__fastcall CSchemaManipulator<CWeakHandle<InfoForResourceTypeCModel>>::SearchForInterface(
        CSchemaManipulator<CWeakHandle<InfoForResourceTypeCModel> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCModel> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CSchemaManipulator<CWeakHandle<InfoForResourceTypeCTextureBase> >::SearchForInterface  (line 186, @0x00000000031a1830, libserver.so)
void *__fastcall CSchemaManipulator<CWeakHandle<InfoForResourceTypeCTextureBase>>::SearchForInterface(
        CSchemaManipulator<CWeakHandle<InfoForResourceTypeCTextureBase> > *const this,
        SchemaManipulatorInterfaceType_t nType)
{
  CSchemaWeakHandleInspectionManipulator<InfoForResourceTypeCTextureBase> *p_m_Inspection; // rdi
  void *result; // rax

  p_m_Inspection = &this->m_Inspection;
  result = 0;
  if ( nType == SchemaManipulatorInterfaceType_t::SCHEMA_MANIPULATOR_TYPE_INSPECTION )
    return p_m_Inspection;
  return result;
}


// CWeakHandle<InfoForResourceTypeCModel>::InitUntyped  (line 329, @0x0000000002057d60, libserver.so)
// callers: OnPrecacheGibsForModel, PropBreakablePrecacheAll, CBasePropDoor::PrecacheDoorSounds, CPropDoorRotatingBreakable::PrecacheBreakables
void __fastcall CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(
        CWeakHandle<InfoForResourceTypeCModel> *const this,
        ResourceHandle_t hUntypedResource)
{
  if ( hUntypedResource == 0 || (*(*g_pResourceHandleUtils + 56LL))(g_pResourceHandleUtils) == 1818520950 )
    this->m_pBinding = hUntypedResource;
  else
    this->m_pBinding = 0;
}


