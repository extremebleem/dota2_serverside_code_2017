
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEconTool_PennantUpgrade::CanApplyTo  (line 13, @0x0000000002e3c1a0, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute_UnsafeBitwiseCast<unsigned int, float, IEconItemInterface>, Get, GetTypedRef, HasEconTag, IsValidIndex, operator const CEconItemAttributeDefinition*
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::Find, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, GetItemSchema, CEconItemSchema::GetItemDefinition, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "strangifier target"
// globals: `guard variable for'CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttribDef_StrangifierTarget, CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttribDef_StrangifierTarget, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall CEconTool_PennantUpgrade::CanApplyTo(
        const CEconTool_PennantUpgrade *const this,
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  __int64 v6; // r13
  const CEconItemDefinition *v7; // r13
  int m_Size; // eax
  int *m_pMemory; // r15
  __int64 v10; // r14
  int v11; // eax
  uint32 v12; // ebx
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r12
  CEconItemSchema *v15; // rax
  bool result; // al
  int v17; // ebx
  GameItemSchema_t *ItemSchema; // rax
  CEconItemSchema *v19; // rax
  uint32 m_unResetCount; // eax
  float value; // [rsp+18h] [rbp-58h] BYREF
  int src; // [rsp+1Ch] [rbp-54h] BYREF
  _QWORD v24[3]; // [rsp+20h] [rbp-50h] BYREF
  char v25; // [rsp+38h] [rbp-38h]

  v6 = (*(pToolSubject->_vptr_IEconItemInterface + 14))(pToolSubject);
  if ( v6 == (*(pTool->_vptr_IEconItemInterface + 14))(pTool) )
    return 0;
  v7 = (*(pToolSubject->_vptr_IEconItemInterface + 12))(pToolSubject);
  if ( v7 == 0 )
    return 0;
  m_Size = this->m_vecRequiredTags.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_vecRequiredTags.m_Memory.m_pMemory;
    v10 = &m_pMemory[m_Size - 1 + 1];
    do
    {
      src = *m_pMemory;
      v11 = CUtlVectorBase<int,CUtlMemory<int,int>>::Find(&v7->m_vecTags, &src);
      if ( v11 < 0 || v11 >= v7->m_vecTags.m_Size )
        return 0;
      ++m_pMemory;
    }
    while ( m_pMemory != v10 );
  }
  if ( `guard variable for'CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttribDef_StrangifierTarget == 0
    && __cxa_guard_acquire(&`guard variable for'CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttribDef_StrangifierTarget) != 0 )
  {
    CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttribDef_StrangifierTarget.m_szName = "strangifier target";
    v19 = GEconItemSchema();
    CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttribDef_StrangifierTarget.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v19, "strangifier target");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttribDef_StrangifierTarget.m_bDestructName = 0;
    CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttribDef_StrangifierTarget.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttribDef_StrangifierTarget);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttribDef_StrangifierTarget,
      &_dso_handle);
  }
  if ( CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttribDef_StrangifierTarget.m_szName == 0 )
    return 1;
  v12 = GEconItemSchema()->m_unResetCount;
  m_pRef = CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttribDef_StrangifierTarget.m_pRef;
  if ( v12 != CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttribDef_StrangifierTarget.m_unSchemaGeneration )
  {
    m_szName = CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttribDef_StrangifierTarget.m_szName;
    v15 = GEconItemSchema();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v15, m_szName);
    CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttribDef_StrangifierTarget.m_unSchemaGeneration = v12;
    CEconTool_PennantUpgrade::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttribDef_StrangifierTarget.m_pRef = m_pRef;
  }
  if ( m_pRef == 0 )
    return 1;
  v24[1] = m_pRef;
  v24[2] = &value;
  v24[0] = off_40FDAF0;
  v25 = 0;
  (*(pTool->_vptr_IEconItemInterface + 28))(pTool, v24);
  result = 1;
  if ( v25 != 0 )
  {
    v17 = value;
    ItemSchema = GetItemSchema();
    return v7 == CEconItemSchema::GetItemDefinition(ItemSchema, v17, 0);
  }
  return result;
}


// CEconTool_UnusualPaint::CanApplyTo  (line 50, @0x0000000002e3dfa0, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CAttributeIterator_HasAttribute, CSchemaFieldHandle, FindAttribute, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<IEconItemInterface>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle, __cxa_guard_abort, _Unwind_Resume
// strings: "set item tint RGB", "attach particle effect"
// globals: `guard variable for'CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_Color, CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_Color, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle(), `guard variable for'CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_Particle, CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_Particle
bool __fastcall CEconTool_UnusualPaint::CanApplyTo(
        const CEconTool_UnusualPaint *const this,
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  CEconItemSchema *v5; // rax
  uint32 m_unResetCount; // eax
  uint32 v7; // r12d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r13
  CEconItemSchema *v10; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  uint32 v12; // r13d
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v14; // r14
  CEconItemSchema *v15; // rax
  int (**v16)(...); // rax
  uint32 unParticleType; // [rsp+Ch] [rbp-44h] BYREF
  void (__fastcall **v18)(CAttributeIterator_HasAttribute *__hidden); // [rsp+10h] [rbp-40h] BYREF
  const CEconItemAttributeDefinition *v19; // [rsp+18h] [rbp-38h]
  uint32 *p_unParticleType; // [rsp+20h] [rbp-30h]
  char v21; // [rsp+28h] [rbp-28h]

  if ( (*(pToolSubject->_vptr_IEconItemInterface + 15))(pToolSubject, pTool) != 3 )
    return 0;
  if ( `guard variable for'CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_Color == 0
    && __cxa_guard_acquire(&`guard variable for'CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_Color) != 0 )
  {
    CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Color.m_szName = "set item tint RGB";
    v5 = GEconItemSchema();
    CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Color.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v5, "set item tint RGB");
    m_unResetCount = GEconItemSchema()->m_unResetCount;
    CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Color.m_bDestructName = 0;
    CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Color.m_unSchemaGeneration = m_unResetCount;
    __cxa_guard_release(&`guard variable for'CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_Color);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Color,
      &_dso_handle);
  }
  if ( CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Color.m_szName == 0 )
    return 0;
  v7 = GEconItemSchema()->m_unResetCount;
  m_pRef = CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Color.m_pRef;
  if ( v7 != CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Color.m_unSchemaGeneration )
  {
    m_szName = CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Color.m_szName;
    v10 = GEconItemSchema();
    m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v10, m_szName);
    CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Color.m_unSchemaGeneration = v7;
    CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Color.m_pRef = m_pRef;
  }
  if ( m_pRef == 0 )
    return 0;
  v19 = m_pRef;
  vptr_IEconItemInterface = pToolSubject->_vptr_IEconItemInterface;
  v18 = off_40F17F0;
  LOBYTE(p_unParticleType) = 0;
  vptr_IEconItemInterface[28](pToolSubject, &v18);
  if ( p_unParticleType == 0 )
    return 0;
  if ( `guard variable for'CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_Particle == 0
    && __cxa_guard_acquire(&`guard variable for'CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_Particle) != 0 )
  {
    CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle(
      &CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Particle,
      "attach particle effect");
    __cxa_guard_release(&`guard variable for'CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttrDef_Particle);
    __cxa_atexit(
      CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
      &CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Particle,
      &_dso_handle);
  }
  if ( CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Particle.m_szName == 0 )
    return 0;
  v12 = GEconItemSchema()->m_unResetCount;
  AttributeDefinitionByName = CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Particle.m_pRef;
  if ( v12 != CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Particle.m_unSchemaGeneration )
  {
    v14 = CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Particle.m_szName;
    v15 = GEconItemSchema();
    AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v15, v14);
    CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Particle.m_unSchemaGeneration = v12;
    CEconTool_UnusualPaint::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttrDef_Particle.m_pRef = AttributeDefinitionByName;
  }
  if ( AttributeDefinitionByName != 0
    && (v19 = AttributeDefinitionByName,
        p_unParticleType = &unParticleType,
        v16 = pToolSubject->_vptr_IEconItemInterface,
        v18 = &wrapper,
        v21 = 0,
        v16[28](pToolSubject, &v18),
        v21 != 0) )
  {
    return unParticleType - 21 > 1;
  }
  else
  {
    return 0;
  }
}


// CEconTool_GemCombiner::CanApplyTo  (line 79, @0x0000000002e3e210, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, FindAttribute<CAttribute_Socket>, FindAttribute<IEconItemInterface, CAttribute_Socket>, FindAttribute_UnsafeBitwiseCast<CAttribute_Socket, CAttribute_Socket, IEconItemInterface>, Get, GetItemSocket, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: CAttribute_Socket::CAttribute_Socket, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, CAttribute_Socket::~CAttribute_Socket, __cxa_guard_acquire, CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// strings: "socket 1"
// globals: `guard variable for'CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttr_SocketInfo, CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttr_SocketInfo, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle()
bool __fastcall CEconTool_GemCombiner::CanApplyTo(
        const CEconTool_GemCombiner *const this,
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  __int64 v6; // r13
  __int64 v7; // r13
  bool v8; // bl
  uint32 m_unResetCount; // r15d
  const CEconItemAttributeDefinition *m_pRef; // rax
  CEconItemSchema *v12; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  uint32 v14; // ebx
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *m_szName; // r15
  CEconItemSchema *v17; // rax
  int (**v18)(...); // rax
  char *pszDefName; // [rsp+8h] [rbp-98h]
  CAttribute_Socket socketTool; // [rsp+10h] [rbp-90h] BYREF
  CAttribute_Socket socketSubject; // [rsp+20h] [rbp-80h] BYREF
  _QWORD v22[3]; // [rsp+30h] [rbp-70h] BYREF
  char v23; // [rsp+48h] [rbp-58h]
  _QWORD v24[3]; // [rsp+50h] [rbp-50h] BYREF
  bool v25; // [rsp+68h] [rbp-38h]

  v6 = (*(pToolSubject->_vptr_IEconItemInterface + 14))(pToolSubject);
  if ( v6 != (*(pTool->_vptr_IEconItemInterface + 14))(pTool) )
  {
    v7 = (*(pTool->_vptr_IEconItemInterface + 12))(pTool);
    if ( v7 == (*(pToolSubject->_vptr_IEconItemInterface + 12))(pToolSubject) )
    {
      if ( !this->m_bFilterAutographID )
        return 1;
      if ( `guard variable for'CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttr_SocketInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttr_SocketInfo) != 0 )
      {
        CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle(
          &CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo,
          "socket 1");
        __cxa_guard_release(&`guard variable for'CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)::pAttr_SocketInfo);
        __cxa_atexit(
          CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
          &CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo,
          &_dso_handle);
      }
      CAttribute_Socket::CAttribute_Socket(&socketTool);
      CAttribute_Socket::CAttribute_Socket(&socketSubject);
      if ( CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo.m_szName != 0 )
      {
        m_unResetCount = GEconItemSchema()->m_unResetCount;
        m_pRef = CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo.m_pRef;
        if ( m_unResetCount != CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo.m_unSchemaGeneration )
        {
          pszDefName = CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo.m_szName;
          v12 = GEconItemSchema();
          m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v12, pszDefName);
          CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo.m_pRef = m_pRef;
          CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo.m_unSchemaGeneration = m_unResetCount;
        }
        if ( m_pRef != 0 )
        {
          v22[1] = m_pRef;
          vptr_IEconItemInterface = pTool->_vptr_IEconItemInterface;
          v22[0] = off_47A46F0;
          v22[2] = &socketTool;
          v23 = 0;
          vptr_IEconItemInterface[28](pTool, v22);
          if ( v23 != 0
            && CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo.m_szName != 0 )
          {
            v14 = GEconItemSchema()->m_unResetCount;
            AttributeDefinitionByName = CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo.m_pRef;
            if ( v14 != CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo.m_unSchemaGeneration )
            {
              m_szName = CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo.m_szName;
              v17 = GEconItemSchema();
              AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v17, m_szName);
              CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo.m_pRef = AttributeDefinitionByName;
              CEconTool_GemCombiner::CanApplyTo(IEconItemInterface const*,IEconItemInterface const*)const::pAttr_SocketInfo.m_unSchemaGeneration = v14;
            }
            if ( AttributeDefinitionByName != 0 )
            {
              v24[1] = AttributeDefinitionByName;
              v18 = pToolSubject->_vptr_IEconItemInterface;
              v24[0] = off_47A46F0;
              v24[2] = &socketSubject;
              v25 = 0;
              v18[28](pToolSubject, v24);
              v8 = v25;
              if ( v25
                && socketTool.m_pSocket != 0
                && socketSubject.m_pSocket != 0
                && (*(socketTool.m_pSocket->_vptr_IItemSocket + 20))() == 6
                && (*(socketSubject.m_pSocket->_vptr_IItemSocket + 20))(socketSubject.m_pSocket) == 6
                && LODWORD(socketTool.m_pSocket[6]._vptr_IItemSocket) == LODWORD(socketSubject.m_pSocket[6]._vptr_IItemSocket) )
              {
                CAttribute_Socket::~CAttribute_Socket(&socketSubject);
                CAttribute_Socket::~CAttribute_Socket(&socketTool);
                return v8;
              }
            }
          }
        }
      }
      CAttribute_Socket::~CAttribute_Socket(&socketSubject);
      CAttribute_Socket::~CAttribute_Socket(&socketTool);
    }
  }
  return 0;
}


// CEconTool_EggEssence::CanApplyTo  (line 118, @0x0000000002e3c100, libserver.so)  // inlines: HasEconTag, IsValidIndex
// calls: CUtlVectorBase<int, CUtlMemory<int, int> >::Find
bool __fastcall CEconTool_EggEssence::CanApplyTo(
        const CEconTool_EggEssence *const this,
        const IEconItemInterface *pTool,
        const IEconItemInterface *pToolSubject)
{
  __int64 v4; // r14
  int m_Size; // eax
  int *m_pMemory; // rbx
  __int64 v7; // r15
  int v8; // eax
  int src[13]; // [rsp+Ch] [rbp-34h] BYREF

  v4 = (*(pToolSubject->_vptr_IEconItemInterface + 12))(pToolSubject, pTool);
  if ( v4 != 0 )
  {
    m_Size = this->m_vecRequiredTags.m_Size;
    if ( m_Size <= 0 )
      return 1;
    m_pMemory = this->m_vecRequiredTags.m_Memory.m_pMemory;
    v7 = &m_pMemory[m_Size - 1 + 1];
    while ( 1 )
    {
      src[0] = *m_pMemory;
      v8 = CUtlVectorBase<int,CUtlMemory<int,int>>::Find((v4 + 376), src);
      if ( v8 < 0 || v8 >= *(v4 + 376) )
        break;
      if ( ++m_pMemory == v7 )
        return 1;
    }
  }
  return 0;
}


// CEconTool_LeagueViewPass::BInitFromKV  (line 245, @0x0000000002e45870, libserver.so)  // inlines: AddToTail, CopyConstruct<CEconTool_LeagueViewPass::ItemContribution_t>, CopyConstruct<unsigned int>, Element, GetBool, GrowMemory, StringFieldToInt, operator(), operator[]
// calls: IEconTool::BInitFromKV, KeyValues::FindKey, KeyValues::GetInt, KeyValues::GetString, CEconSchemaSymbol::operator=, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, CUtlMemory<unsigned int, int>::Grow, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetFloat, CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t, int>::Grow (18 total)
// strings: "season_id", "admin", "start_date", "end_date", "tier", "tournament_location" (18 total)
// globals: `guard variable for'CEconTool_LeagueViewPass::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() , CEconTool_LeagueViewPass::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::, INVALID_ITEM_DEF_INDEX, g_szTierStrings
bool __fastcall CEconTool_LeagueViewPass::BInitFromKV(
        CEconTool_LeagueViewPass *const this,
        KeyValues *pToolKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool result; // al
  bool v7; // zf
  KeyValues *Key; // rax
  KeyValues *v9; // r13
  const char *String; // rax
  bool v11; // r8
  __int32 v12; // edx
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  int Int; // eax
  int m_Data; // edx
  KeyValues *v20; // rax
  KeyValues *i; // r12
  unsigned int *v22; // rdx
  int v23; // eax
  int m_Size; // r15d
  int v25; // ecx
  KeyValues *v26; // rax
  KeyValues *v27; // r12
  KeyValues *v28; // rax
  KeyValues *j; // r12
  CEconTool_LeagueViewPass::ItemContribution_t *v30; // rax
  uint16 v31; // r13
  float v32; // xmm1_4
  float Float; // xmm0_4
  int v34; // r15d
  int v35; // edx
  int v36; // [rsp+Ch] [rbp-34h]
  float v37; // [rsp+Ch] [rbp-34h]

  result = IEconTool::BInitFromKV(this, pToolKV, pVecErrors);
  if ( result )
  {
    v7 = `guard variable for'CEconTool_LeagueViewPass::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0;
    this->m_iLeagueID = 0;
    if ( v7
      && __cxa_guard_acquire(&`guard variable for'CEconTool_LeagueViewPass::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CEconTool_LeagueViewPass::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "usage");
      __cxa_guard_release(&`guard variable for'CEconTool_LeagueViewPass::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    Key = KeyValues::FindKey(
            pToolKV,
            CEconTool_LeagueViewPass::BInitFromKV(KeyValues *,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    v9 = Key;
    if ( Key != 0 )
    {
      this->m_iLeagueID = KeyValues::GetInt(Key, "league_id", 0);
      this->m_iSeasonID = KeyValues::GetInt(v9, "season_id", 0);
      this->m_iAdmin = KeyValues::GetInt(v9, "admin", 0);
      this->m_iOrder = KeyValues::GetInt(v9, "order", 0);
      this->m_iDuration = KeyValues::GetInt(v9, "duration", 0);
      this->m_nStartTime = KeyValues::GetInt(v9, "start_date", 0);
      this->m_nEndTime = KeyValues::GetInt(v9, "end_date", 0);
      String = KeyValues::GetString(v9, "tier", "", 0, 0);
      v12 = 0;
      if ( String != 0 && *String != 0 )
      {
        LOBYTE(v12) = 4;
        v12 = StringFieldToInt(String, g_szTierStrings, v12, 0, v11);
      }
      this->m_tier = v12;
      v13 = KeyValues::GetString(v9, "tournament_location", "", 0, 0);
      CEconSchemaSymbol::operator=(&this->m_symTournamentLocation, v13);
      v14 = KeyValues::GetString(v9, "location", "", 0, 0);
      CEconSchemaSymbol::operator=(&this->m_symLocation, v14);
      v15 = KeyValues::GetString(v9, "organization", "", 0, 0);
      CEconSchemaSymbol::operator=(&this->m_symOrganization, v15);
      v16 = KeyValues::GetString(v9, "square_logo", "", 0, 0);
      CEconSchemaSymbol::operator=(&this->m_symSquareLogo, v16);
      v17 = KeyValues::GetString(v9, "tournament_loading_screen", "", 0, 0);
      CEconSchemaSymbol::operator=(&this->m_symLoadingScreen, v17);
      Int = KeyValues::GetInt(v9, "has_rollup", 0);
      m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
      this->m_bBattlePassRollup = Int != 0;
      this->m_nHudSkinItemDef.m_Data = KeyValues::GetInt(v9, "hud_skin_item_def", m_Data);
      this->m_bFantasy = KeyValues::GetInt(v9, "fantasy", 0) != 0;
      this->m_bDisabled = KeyValues::GetInt(v9, "disabled", 0) != 0;
      this->m_bPrivate = KeyValues::GetInt(v9, "private", 0) != 0;
      v20 = KeyValues::FindKey(v9, "teams", 0);
      if ( v20 != 0 )
      {
        for ( i = KeyValues::GetFirstSubKey(v20); i != 0; i = KeyValues::GetNextKey(i) )
        {
          v23 = KeyValues::GetInt(i, 0, 0);
          m_Size = this->m_vecTeams.m_Size;
          v25 = m_Size;
          if ( m_Size == this->m_vecTeams.m_Memory.m_nAllocationCount )
          {
            v36 = v23;
            CUtlMemory<unsigned int,int>::Grow(&this->m_vecTeams.m_Memory, 1);
            v25 = this->m_vecTeams.m_Size;
            v23 = v36;
          }
          this->m_vecTeams.m_Size = v25 + 1;
          v22 = &this->m_vecTeams.m_Memory.m_pMemory[m_Size];
          if ( v22 != 0 )
            *v22 = v23;
        }
      }
      this->m_nMVPmode = LeagueMatchMVPMode_t::LEAGUE_MATCHES_HAVE_NO_MVP_DATA;
      if ( KeyValues::GetInt(v9, "matches_have_mvp_data", 0) != 0 )
        this->m_nMVPmode = 2 - (KeyValues::GetInt(v9, "can_vote_for_mvp_data", 0) == 0);
      this->m_iBasePrizePool = 0;
      v26 = KeyValues::FindKey(v9, "prize_pool", 0);
      v27 = v26;
      if ( v26 != 0 )
      {
        this->m_iBasePrizePool = KeyValues::GetInt(v26, "base_prize_pool", 0);
        v28 = KeyValues::FindKey(v27, "items", 0);
        if ( v28 != 0 )
        {
          for ( j = KeyValues::GetFirstTrueSubKey(v28); j != 0; j = KeyValues::GetNextTrueSubKey(j) )
          {
            v31 = KeyValues::GetInt(j, "itemdef", INVALID_ITEM_DEF_INDEX.m_Data);
            Float = KeyValues::GetFloat(j, "revenue_percent", v32);
            v34 = this->m_vecItemContributions.m_Size;
            v35 = v34;
            if ( v34 == this->m_vecItemContributions.m_Memory.m_nAllocationCount )
            {
              v37 = Float;
              CUtlMemory<CEconTool_LeagueViewPass::ItemContribution_t,int>::Grow(
                &this->m_vecItemContributions.m_Memory,
                1);
              v35 = this->m_vecItemContributions.m_Size;
              Float = v37;
            }
            this->m_vecItemContributions.m_Size = v35 + 1;
            v30 = &this->m_vecItemContributions.m_Memory.m_pMemory[v34];
            if ( v30 != 0 )
            {
              v30->m_nItemDef.m_Data = v31;
              v30->m_flRevenuePercent = Float;
            }
          }
        }
      }
    }
    return pVecErrors == 0 || pVecErrors->m_Size == 0;
  }
  return result;
}


// CDOTAStaticRecipeComponentEvent::CDOTAStaticRecipeComponentEvent  (line 333, @0x0000000002e38520, libserver.so)  // inlines: CStaticRecipeComponent, CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo
// calls: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CBaseRecipeComponent
// callers: CreateGameSpecificRecipeComponent
// globals: CDefOps<uint>::LessFunc(uint const&,uint const&)
void __fastcall CDOTAStaticRecipeComponentEvent::CDOTAStaticRecipeComponentEvent(
        CDOTAStaticRecipeComponentEvent *const this,
        bool bIsOutput)
{
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CBaseRecipeComponent(this, bIsOutput);
  this->_vptr_CBaseRecipeComponent = off_47A0F30;  // vptr: CDOTAStaticRecipeComponentEvent
  this->m_mapActionGrants.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
  this->m_unEventID = 0;
  this->m_unNormalPoints = 0;
  this->m_unPremiumPoints = 0;
  this->m_mapActionGrants.m_Tree.m_Elements.m_pMemory = 0;
  this->m_mapActionGrants.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_mapActionGrants.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_mapActionGrants.m_Tree.m_Root = -1;
  this->m_mapActionGrants.m_Tree.m_NumElements = 0;
  this->m_mapActionGrants.m_Tree.m_FirstFree = -1;
  this->m_mapActionGrants.m_Tree.m_LastAlloc.index = -1;
  this->m_mapActionGrants.m_Tree.m_pElements = 0;
}


// CDOTAStaticRecipeComponentEvent::ParseKV  (line 341, @0x0000000002e490b0, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, Find, FindInsertionPosition, GrowMemory, HasKey, Insert, InsertAt, IsIdxValid, IsValidIndex, LeftChild, RightChild, operator(), operator[], ~CUtlString
// calls: CUtlString::Format, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, KeyValues::GetInt, KeyValues::FindKey, KeyValues::GetFirstValue, KeyValues::GetName, V_atoi, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, KeyValues::GetNextValue (18 total)
// strings: "Encountered recipe that includes an event reward but is not associated with an output rew, "Encountered an event recipe component that did not specify an event_id", "Encountered recipe event that did not specify points or actions", "Encountered an invalid action ID %s", "Encountered an invalid action grant number %u for action %s", "Encountered multiple references to action ID %s"
bool __fastcall CDOTAStaticRecipeComponentEvent::ParseKV(
        CDOTAStaticRecipeComponentEvent *const this,
        KeyValues *pKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors,
        CEconTool_ItemDynamicRecipe *pTool)
{
  __int64 m_Size; // r12
  int v6; // eax
  CUtlString *v7; // r12
  const char *v8; // rax
  uint32 Int; // eax
  __int64 v11; // r12
  int v12; // eax
  CUtlString *v13; // r12
  const char *v14; // rax
  KeyValues *Key; // rax
  const char *Name; // rax
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int>::Node_t,short unsigned int> *m_pMemory; // rax
  __int64 v19; // r12
  unsigned __int64 v20; // r14
  unsigned __int16 v21; // bx
  unsigned __int16 m_Left; // ax
  char v23; // cl
  bool v24; // zf
  UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int>::Node_t,short unsigned int> *v25; // rax
  unsigned __int16 v26; // ax
  bool v27; // r12
  const char *v28; // rax
  const char *v29; // rax
  const char *v30; // rax
  __int64 v31; // r12
  int v32; // eax
  CUtlString *v33; // r12
  const char *v34; // rax
  CUtlMap<unsigned int,unsigned int,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_mapActionGrants; // [rsp+8h] [rbp-198h]
  KeyValues *pKVAction; // [rsp+20h] [rbp-180h]
  bool m_bIsOutput; // [rsp+37h] [rbp-169h]
  uint32 unNumToGrant; // [rsp+38h] [rbp-168h]
  uint32 unActionID; // [rsp+3Ch] [rbp-164h]
  CUtlString msg; // [rsp+40h] [rbp-160h] BYREF
  CFmtStrN<256,false> v44; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v45; // [rsp+168h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  m_bIsOutput = this->m_bIsOutput;
  if ( !m_bIsOutput )
  {
    msg.m_pString = 0;
    CUtlString::Format(
      &msg,
      "Encountered recipe that includes an event reward but is not associated with an output reward (only supported on ou"
      "tputs currently)");
    if ( pVecErrors != 0 )
    {
      m_Size = pVecErrors->m_Size;
      v6 = pVecErrors->m_Size;
      if ( m_Size == pVecErrors->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
        v6 = pVecErrors->m_Size;
      }
      pVecErrors->m_Size = v6 + 1;
      v7 = &pVecErrors->m_Memory.m_pMemory[m_Size];
      if ( v7 != 0 )
      {
        v7->m_pString = 0;
        v8 = CUtlString::Get(&msg);
        CUtlString::Set(v7, v8);
      }
    }
    if ( msg.m_pString == 0 )
      return m_bIsOutput;
    goto LABEL_8;
  }
  Int = KeyValues::GetInt(pKV, "event_id", 0);
  this->m_unEventID = Int;
  if ( Int == 0 )
  {
    msg.m_pString = 0;
    CUtlString::Format(&msg, "Encountered an event recipe component that did not specify an event_id");
    if ( pVecErrors != 0 )
    {
      v11 = pVecErrors->m_Size;
      v12 = pVecErrors->m_Size;
      if ( v11 == pVecErrors->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
        v12 = pVecErrors->m_Size;
      }
      pVecErrors->m_Size = v12 + 1;
      v13 = &pVecErrors->m_Memory.m_pMemory[v11];
      if ( v13 != 0 )
      {
        v13->m_pString = 0;
        v14 = CUtlString::Get(&msg);
        CUtlString::Set(v13, v14);
      }
    }
    if ( msg.m_pString != 0 )
      goto LABEL_17;
    return 0;
  }
  this->m_unNormalPoints = KeyValues::GetInt(pKV, "normal_pts", 0);
  this->m_unPremiumPoints = KeyValues::GetInt(pKV, "premium_pts", 0);
  Key = KeyValues::FindKey(pKV, "actions", 0);
  if ( Key == 0 )
    goto LABEL_43;
  pKVAction = KeyValues::GetFirstValue(Key);
  if ( pKVAction == 0 )
    goto LABEL_43;
  p_m_mapActionGrants = &this->m_mapActionGrants;
  do
  {
    Name = KeyValues::GetName(pKVAction);
    unActionID = V_atoi(Name);
    unNumToGrant = KeyValues::GetInt(pKVAction, 0, 0);
    if ( unActionID - 1 > 0xF423E )
    {
      msg.m_pString = 0;
      v28 = KeyValues::GetName(pKVAction);
      CFmtStrN<256,false>::CFmtStrN(&v44, "Encountered an invalid action ID %s", v28);
      CUtlString::Format(&msg, v44.m_szBuf);
      if ( pVecErrors != 0 )
        CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
      if ( msg.m_pString == 0 )
        return 0;
LABEL_17:
      CUtlString::FreeMemoryBlock(&msg);
      return 0;
    }
    m_bIsOutput = unNumToGrant == 0 || unActionID > 0x270F;
    if ( m_bIsOutput )
    {
      msg.m_pString = 0;
      v29 = KeyValues::GetName(pKVAction);
      CFmtStrN<256,false>::CFmtStrN(
        &v44,
        "Encountered an invalid action grant number %u for action %s",
        unNumToGrant,
        v29);
      CUtlString::Format(&msg, v44.m_szBuf);
      if ( pVecErrors != 0 )
        CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
      if ( msg.m_pString == 0 )
        return 0;
      goto LABEL_17;
    }
    m_Root = this->m_mapActionGrants.m_Tree.m_Root;
    LODWORD(msg.m_pString) = unActionID;
    if ( m_Root == 0xFFFF )
    {
LABEL_30:
      v19 = 0xFFFF;
      m_Root = -1;
    }
    else
    {
      m_pMemory = this->m_mapActionGrants.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = m_Root;
          v20 = m_Root;
          if ( !this->m_mapActionGrants.m_Tree.m_LessFunc.m_LessFunc(&msg, &m_pMemory[v20].m_Data) )
            break;
          m_pMemory = this->m_mapActionGrants.m_Tree.m_Elements.m_pMemory;
          m_Root = m_pMemory[m_Root].m_Left;
          if ( m_Root == 0xFFFF )
            goto LABEL_30;
        }
        if ( !this->m_mapActionGrants.m_Tree.m_LessFunc.m_LessFunc(
                &this->m_mapActionGrants.m_Tree.m_Elements.m_pMemory[v20].m_Data,
                &msg) )
          break;
        m_pMemory = this->m_mapActionGrants.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[v20].m_Right;
        if ( m_Root == 0xFFFF )
          goto LABEL_30;
      }
    }
    if ( this->m_mapActionGrants.m_Tree.m_Elements.m_nAllocationCount > v19
      && this->m_mapActionGrants.m_Tree.m_LastAlloc.index >= m_Root
      && m_Root != 0xFFFF
      && this->m_mapActionGrants.m_Tree.m_Elements.m_pMemory[m_Root].m_Left != m_Root )
    {
      msg.m_pString = 0;
      v30 = KeyValues::GetName(pKVAction);
      CFmtStrN<256,false>::CFmtStrN(&v44, "Encountered multiple references to action ID %s", v30);
      CUtlString::Format(&msg, v44.m_szBuf);
      if ( pVecErrors != 0 )
      {
        v31 = pVecErrors->m_Size;
        v32 = pVecErrors->m_Size;
        if ( v31 == pVecErrors->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
          v32 = pVecErrors->m_Size;
        }
        pVecErrors->m_Size = v32 + 1;
        v33 = &pVecErrors->m_Memory.m_pMemory[v31];
        if ( v33 != 0 )
        {
          v33->m_pString = 0;
          v34 = CUtlString::Get(&msg);
          CUtlString::Set(v33, v34);
        }
      }
      if ( msg.m_pString == 0 )
        return m_bIsOutput;
LABEL_8:
      CUtlString::FreeMemoryBlock(&msg);
      return m_bIsOutput;
    }
    v21 = this->m_mapActionGrants.m_Tree.m_Root;
    msg.m_pString = __PAIR64__(unNumToGrant, unActionID);
    if ( v21 == 0xFFFF )
    {
      v21 = -1;
      v27 = 0;
      goto LABEL_42;
    }
    while ( 1 )
    {
      v24 = !this->m_mapActionGrants.m_Tree.m_LessFunc.m_LessFunc(
               &msg,
               &this->m_mapActionGrants.m_Tree.m_Elements.m_pMemory[v21].m_Data);
      v25 = this->m_mapActionGrants.m_Tree.m_Elements.m_pMemory;
      if ( v24 )
        break;
      m_Left = v25[v21].m_Left;
      v23 = 1;
      if ( m_Left == 0xFFFF )
        goto LABEL_41;
LABEL_38:
      v21 = m_Left;
    }
    m_Left = v25[v21].m_Right;
    v23 = 0;
    if ( m_Left != 0xFFFF )
      goto LABEL_38;
LABEL_41:
    v27 = v23;
LABEL_42:
    v26 = CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
            &p_m_mapActionGrants->m_Tree,
            &msg);
    CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
      &p_m_mapActionGrants->m_Tree,
      v26,
      v21,
      v27);
    ++this->m_mapActionGrants.m_Tree.m_NumElements;
    pKVAction = KeyValues::GetNextValue(pKVAction);
  }
  while ( pKVAction != 0 );
LABEL_43:
  if ( *&this->m_unNormalPoints != 0 || this->m_mapActionGrants.m_Tree.m_NumElements != 0 )
    return CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::ParseKV(this, pKV, pVecErrors, pTool);
  msg.m_pString = 0;
  CUtlString::Format(&msg, "Encountered recipe event that did not specify points or actions");
  if ( pVecErrors != 0 )
    CUtlVectorBase<CUtlString,CUtlMemory<CUtlString,int>>::AddToTail(pVecErrors, &msg);
  if ( msg.m_pString != 0 )
    goto LABEL_17;
  return 0;
}


// CDOTAStaticRecipeComponentLeagueOwnership::ParseKV  (line 400, @0x0000000002e430b0, libserver.so)  // inlines: AddToTail, CUtlString, CopyConstruct<CUtlString>, Element, GrowMemory, operator[], ~CUtlString
// calls: CUtlString::Format, CUtlString::Get, CUtlString::Set, CUtlString::FreeMemoryBlock, KeyValues::GetInt, CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::ParseKV, CUtlMemory<CUtlString, int>::Grow, _Unwind_Resume
// strings: "Encountered recipe that includes an league ownership check but is not associated with an , "Encountered an event recipe component that did not specify a league_id"
bool __fastcall CDOTAStaticRecipeComponentLeagueOwnership::ParseKV(
        CDOTAStaticRecipeComponentLeagueOwnership *const this,
        KeyValues *pKV,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors,
        CEconTool_ItemDynamicRecipe *pTool)
{
  bool m_bIsOutput; // bl
  __int64 m_Size; // rbx
  int v8; // eax
  CUtlString *v9; // rbx
  const char *v10; // rax
  uint32 Int; // eax
  __int64 v15; // r14
  int v16; // eax
  CUtlString *v17; // r12
  const char *v18; // rax
  CUtlString msg; // [rsp+0h] [rbp-40h] BYREF

  m_bIsOutput = this->m_bIsOutput;
  if ( m_bIsOutput )
  {
    msg.m_pString = 0;
    CUtlString::Format(
      &msg,
      "Encountered recipe that includes an league ownership check but is not associated with an input reward (only suppor"
      "ted on inputs currently)",
      pVecErrors,
      pTool);
    if ( pVecErrors != 0 )
    {
      m_Size = pVecErrors->m_Size;
      v8 = pVecErrors->m_Size;
      if ( m_Size == pVecErrors->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
        v8 = pVecErrors->m_Size;
      }
      pVecErrors->m_Size = v8 + 1;
      v9 = &pVecErrors->m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
      {
        v9->m_pString = 0;
        v10 = CUtlString::Get(&msg);
        CUtlString::Set(v9, v10);
      }
    }
    if ( msg.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&msg);
    return 0;
  }
  else
  {
    Int = KeyValues::GetInt(pKV, "league_id", 0);
    this->m_unLeagueID = Int;
    if ( Int != 0 )
    {
      return CEconTool_ItemDynamicRecipe::CStaticRecipeComponent::ParseKV(this, pKV, pVecErrors, pTool);
    }
    else
    {
      msg.m_pString = 0;
      CUtlString::Format(&msg, "Encountered an event recipe component that did not specify a league_id");
      if ( pVecErrors != 0 )
      {
        v15 = pVecErrors->m_Size;
        v16 = pVecErrors->m_Size;
        if ( v15 == pVecErrors->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
          v16 = pVecErrors->m_Size;
        }
        pVecErrors->m_Size = v16 + 1;
        v17 = &pVecErrors->m_Memory.m_pMemory[v15];
        if ( v17 != 0 )
        {
          v17->m_pString = 0;
          v18 = CUtlString::Get(&msg);
          CUtlString::Set(v17, v18);
        }
      }
      if ( msg.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&msg);
    }
  }
  return m_bIsOutput;
}


// CreateGameSpecificRecipeComponent  (line 440, @0x0000000002e385c0, libserver.so)  // inlines: CDOTAStaticRecipeComponentLeagueOwnership, CStaticRecipeComponent, _V_strcmp
// calls: operator new, CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CBaseRecipeComponent, CDOTAStaticRecipeComponentEvent::CDOTAStaticRecipeComponentEvent, operator delete, _Unwind_Resume
// callers: CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::ParseComponents
// strings: "own_league_id"
CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *__fastcall CreateGameSpecificRecipeComponent(
        const char *pszComponentType,
        bool bIsOutput,
        KeyValues *pEntry)
{
  CEconTool_ItemDynamicRecipe::CBaseRecipeComponent *v4; // rbx
  CDOTAStaticRecipeComponentEvent *v6; // rbx

  if ( strcmp(pszComponentType, "event") == 0 )
  {
    v6 = operator new(0x98u);
    CDOTAStaticRecipeComponentEvent::CDOTAStaticRecipeComponentEvent(v6, bIsOutput);
    return v6;
  }
  else if ( strcmp(pszComponentType, "own_league_id") == 0 )
  {
    v4 = operator new(0x68u);  // new CDOTAStaticRecipeComponentLeagueOwnership (size matches)
    CEconTool_ItemDynamicRecipe::CBaseRecipeComponent::CBaseRecipeComponent(v4, bIsOutput);
    *(&v4->m_bCannotMatchInput + 1) = 0;
    v4->_vptr_CBaseRecipeComponent = off_47A0F90;  // vptr: CDOTAStaticRecipeComponentLeagueOwnership
    return v4;
  }
  else
  {
    return 0;
  }
}


