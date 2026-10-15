
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2>::Save  (line 30, @0x0000000001b54380, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>,2>::Save(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>,2> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldSize = 1;
  dataDesc.fieldName = "elems";
  dataDesc.fieldType = fieldtype_t::FIELD_STRING;
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1, 0, 2);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 8 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13>::Save  (line 30, @0x0000000001eed0b0, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>,13>::Save(
        CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldSize = 1;
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSizeInBytes = -1;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 4 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10>::Save  (line 30, @0x00000000020fafb0, libserver.so)  // inlines: operator[]
// strings: "elems"
// globals: SaveRestoreBlockHeader_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>,10>::Save(
        CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 v4; // r12
  int v5; // ebx
  int *pField; // r15
  __int64 v7; // rsi
  int nElems; // [rsp+Ch] [rbp-E4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-A0h] BYREF

  v4 = 0;
  v5 = 0;
  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.fieldSize = 1;
  dataDesc.td = &SaveRestoreBlockHeader_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataMap.dataClassName = "uv";
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataNumFields = 1;
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  dataDesc.fieldSizeInBytes = 0;
  if ( nElems > 0 )
  {
    do
    {
      v7 = *(pField + 1) + v4;
      ++v5;
      v4 += 40;
      (*(pSave->_vptr_ISave + 5))(pSave, v7, &dataMap);
    }
    while ( nElems > v5 );
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, 13>::Save  (line 30, @0x000000000217ba10, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::Save(
        CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1, 0, 1, 2);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 4 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>, CBaseCombatCharacter::NetworkVar_m_hMyWeapons, -1>, 13>::Save  (line 30, @0x000000000217bb10, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>,13>::Save(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 4 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<float, CBaseFlex::NetworkVar_m_flexWeight, -1>, 1>::Save  (line 30, @0x000000000217bc10, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>,1>::Save(
        CUtlVectorDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>,1> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldSize = 1;
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSizeInBytes = -1;
  dataDesc.fieldType = fieldtype_t::FIELD_FLOAT;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 4 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<ResponseContext_t, CUtlMemory<ResponseContext_t, int> >, 10>::Save  (line 30, @0x000000000217bfe0, libserver.so)  // inlines: operator[]
// strings: "elems"
// globals: ResponseContext_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>,10>::Save(
        CUtlVectorDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 v4; // r12
  int v5; // ebx
  int *pField; // r15
  __int64 v7; // rsi
  int nElems; // [rsp+Ch] [rbp-E4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-A0h] BYREF

  v4 = 0;
  v5 = 0;
  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.td = &ResponseContext_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.fieldSize = 1;
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataMap.dataNumFields = 1;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  dataDesc.fieldSizeInBytes = 0;
  if ( nElems > 0 )
  {
    do
    {
      v7 = *(pField + 1) + v4;
      ++v5;
      v4 += 24;
      (*(pSave->_vptr_ISave + 5))(pSave, v7, &dataMap);
    }
    while ( nElems > v5 );
  }
}


// CUtlVectorDataOps<CUtlVector<thinkfunc_t, CUtlMemory<thinkfunc_t, int> >, 10>::Save  (line 30, @0x000000000217c100, libserver.so)  // inlines: operator[]
// strings: "elems"
// globals: thinkfunc_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>,10>::Save(
        CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 v4; // r12
  int v5; // ebx
  int *pField; // r15
  __int64 v7; // rsi
  int nElems; // [rsp+Ch] [rbp-E4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-A0h] BYREF

  v4 = 0;
  v5 = 0;
  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.td = &thinkfunc_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataMap.dataClassName = "uv";
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataNumFields = 1;
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  dataDesc.fieldSizeInBytes = 0;
  if ( nElems > 0 )
  {
    do
    {
      v7 = *(pField + 1) + v4;
      ++v5;
      v4 += 40;
      (*(pSave->_vptr_ISave + 5))(pSave, v7, &dataMap);
    }
    while ( nElems > v5 );
  }
}


// CUtlVectorDataOps<CUtlVector<Relationship_t, CUtlMemory<Relationship_t, int> >, 10>::Save  (line 30, @0x000000000217c220, libserver.so)  // inlines: operator[]
// strings: "elems"
// globals: Relationship_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>>,10>::Save(
        CUtlVectorDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 v4; // r12
  int *pField; // r15
  int v6; // ebx
  __int64 v7; // rsi
  int nElems; // [rsp+Ch] [rbp-E4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-A0h] BYREF

  v4 = 0;
  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.td = &Relationship_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  v6 = 0;
  dataMap.dataClassName = "uv";
  dataDesc.fieldSize = 1;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataMap.dataNumFields = 1;
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  dataDesc.fieldSizeInBytes = 0;
  if ( nElems > 0 )
  {
    do
    {
      v7 = *(pField + 1) + v4;
      ++v6;
      v4 += 20;
      (*(pSave->_vptr_ISave + 5))(pSave, v7, &dataMap);
    }
    while ( nElems > v6 );
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>, CUtlMemory<CHandle<CVGuiScreen>, int> >, 13>::Save  (line 30, @0x00000000021b2f50, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>,13>::Save(
        CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.flags = 2;
  pField = fieldInfo->pField;
  dataDesc.fieldSize = 1;
  dataDesc.fieldName = "elems";
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 4 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<modifiedconvars_t, CUtlMemory<modifiedconvars_t, int> >, 10>::Save  (line 30, @0x00000000021b3100, libserver.so)  // inlines: operator[]
// strings: "elems"
// globals: modifiedconvars_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>,10>::Save(
        CUtlVectorDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 v4; // r12
  int v5; // ebx
  int *pField; // r15
  __int64 v7; // rsi
  int nElems; // [rsp+Ch] [rbp-E4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-A0h] BYREF

  v4 = 0;
  v5 = 0;
  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.td = &modifiedconvars_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.fieldSize = 1;
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataMap.dataNumFields = 1;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  dataDesc.fieldSizeInBytes = 0;
  if ( nElems > 0 )
  {
    do
    {
      v7 = *(pField + 1) + v4;
      ++v5;
      v4 += 384;
      (*(pSave->_vptr_ISave + 5))(pSave, v7, &dataMap);
    }
    while ( nElems > v5 );
  }
}


// CUtlVectorDataOps<CUtlVector<prevent_interaction_t, CUtlMemory<prevent_interaction_t, int> >, 10>::Save  (line 30, @0x00000000021e1e50, libserver.so)  // inlines: operator[]
// strings: "elems"
// globals: prevent_interaction_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>,10>::Save(
        CUtlVectorDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 v4; // rbx
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  v4 = 0;
  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.fieldSize = 1;
  dataDesc.td = &prevent_interaction_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.flags = 2;
  dataMap.dataClassName = "uv";
  dataDesc.fieldSizeInBytes = -1;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataMap.dataNumFields = 1;
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  dataDesc.fieldSizeInBytes = 0;
  if ( nElems > 0 )
  {
    do
      (*(pSave->_vptr_ISave + 5))(pSave, *(pField + 1) + 16 * v4++, &dataMap);
    while ( v4 < nElems );
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CFish>, CUtlMemory<CHandle<CFish>, int> >, 13>::Save  (line 30, @0x0000000002211730, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>,13>::Save(
        CUtlVectorDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.flags = 2;
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSize = 1;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 4 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<globalentity_t, CUtlMemory<globalentity_t, int> >, 10>::Save  (line 30, @0x000000000227cae0, libserver.so)  // inlines: operator[]
// strings: "elems"
// globals: globalentity_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>>,10>::Save(
        CUtlVectorDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r15
  int v5; // ebx
  __int64 v6; // r12
  __int64 v7; // rsi
  int nElems; // [rsp+Ch] [rbp-E4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.td = &globalentity_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.fieldSize = 1;
  dataMap.dataClassName = "uv";
  v5 = 0;
  dataDesc.flags = 2;
  v6 = 0;
  dataDesc.fieldSizeInBytes = -1;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataMap.dataNumFields = 1;
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  dataDesc.fieldSizeInBytes = 0;
  if ( nElems > 0 )
  {
    do
    {
      v7 = *(pField + 1) + v6;
      ++v5;
      v6 += 12;
      (*(pSave->_vptr_ISave + 5))(pSave, v7, &dataMap);
    }
    while ( nElems > v5 );
  }
}


// CUtlVectorDataOps<CUtlStringList, 53>::Save  (line 30, @0x00000000022aa0e0, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlStringList,53>::Save(
        CUtlVectorDataOps<CUtlStringList,53> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldSize = 1;
  dataDesc.fieldName = "elems";
  dataDesc.fieldType = fieldtype_t::FIELD_UTLSTRING;
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1, 0, 2);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 8 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<magnetted_objects_t, CUtlMemory<magnetted_objects_t, int> >, 10>::Save  (line 30, @0x0000000002308290, libserver.so)  // inlines: operator[]
// strings: "elems"
// globals: magnetted_objects_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>,10>::Save(
        CUtlVectorDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  __int64 v5; // rbx
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.td = &magnetted_objects_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.flags = 2;
  dataMap.dataClassName = "uv";
  v5 = 0;
  dataDesc.fieldSize = 1;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataNumFields = 1;
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  dataDesc.fieldSizeInBytes = 0;
  if ( nElems > 0 )
  {
    do
      (*(pSave->_vptr_ISave + 5))(pSave, *(pField + 1) + 16 * v5++, &dataMap);
    while ( v5 < nElems );
  }
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1>, 13>::Save  (line 30, @0x00000000023736f0, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>,13>::Save(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 4 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>, CSceneEntity::NetworkVar_m_hActorList, -1>, 13>::Save  (line 30, @0x00000000023ab630, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>,13>::Save(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 4 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >, 13>::Save  (line 30, @0x00000000023ab730, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>,13>::Save(
        CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldSize = 1;
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSizeInBytes = -1;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 4 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<CEntityIndex, CUtlMemory<CEntityIndex, int> >, 5>::Save  (line 30, @0x00000000023ab830, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>>,5>::Save(
        CUtlVectorDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int> >,5> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldSize = 1;
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_INTEGER;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 4 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >, 13>::Save  (line 30, @0x00000000023ab930, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>,13>::Save(
        CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldSize = 1;
  dataDesc.fieldName = "elems";
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1, 0, 2);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 4 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> >, 13>::Save  (line 30, @0x00000000023aba30, libserver.so)
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>,13>::Save(
        CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 v3; // r8
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataNumFields = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1, 0, v3, 1);
  if ( nElems != 0 )
  {
    dataDesc.fieldSize = nElems;
    dataDesc.fieldSizeInBytes = 4 * nElems;
    (*(pSave->_vptr_ISave + 6))(pSave, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> >, 10>::Save  (line 30, @0x00000000024117d0, libserver.so)  // inlines: operator[]
// strings: "elems"
// globals: vehicle_gear_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>,10>::Save(
        CUtlVectorDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 v4; // r12
  int v5; // ebx
  int *pField; // r15
  __int64 v7; // rsi
  int nElems; // [rsp+Ch] [rbp-E4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-A0h] BYREF

  v4 = 0;
  v5 = 0;
  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.td = &vehicle_gear_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataMap.dataClassName = "uv";
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataNumFields = 1;
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  dataDesc.fieldSizeInBytes = 0;
  if ( nElems > 0 )
  {
    do
    {
      v7 = *(pField + 1) + v4;
      ++v5;
      v4 += 24;
      (*(pSave->_vptr_ISave + 5))(pSave, v7, &dataMap);
    }
    while ( nElems > v5 );
  }
}


// CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> >, 10>::Save  (line 30, @0x00000000024118f0, libserver.so)  // inlines: operator[]
// strings: "elems"
// globals: vehicle_crashsound_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>,10>::Save(
        CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 v4; // rbx
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  v4 = 0;
  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.td = &vehicle_crashsound_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.fieldSize = 1;
  dataMap.dataClassName = "uv";
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataDesc = &dataDesc;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataMap.dataNumFields = 1;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  dataDesc.fieldSizeInBytes = 0;
  if ( nElems > 0 )
  {
    do
      (*(pSave->_vptr_ISave + 5))(pSave, *(pField + 1) + 32 * v4++, &dataMap);
    while ( v4 < nElems );
  }
}


// CUtlVectorDataOps<CUtlVector<CPassengerInfo, CUtlMemory<CPassengerInfo, int> >, 10>::Save  (line 30, @0x0000000002411a00, libserver.so)  // inlines: operator[]
// strings: "elems"
// globals: CPassengerInfo::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>,10>::Save(
        CUtlVectorDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 v4; // rbx
  int *pField; // r14
  int nElems; // [rsp+Ch] [rbp-D4h] BYREF
  datamap_t dataMap; // [rsp+10h] [rbp-D0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-90h] BYREF

  v4 = 0;
  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.fieldSize = 1;
  dataDesc.td = &CPassengerInfo::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.flags = 2;
  dataMap.dataClassName = "uv";
  dataDesc.fieldSizeInBytes = -1;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataMap.dataNumFields = 1;
  dataMap.dataDesc = &dataDesc;
  nElems = *pField;
  (*(pSave->_vptr_ISave + 11))(pSave, &nElems, 1);
  dataDesc.fieldSizeInBytes = 0;
  if ( nElems > 0 )
  {
    do
      (*(pSave->_vptr_ISave + 5))(pSave, *(pField + 1) + 32 * v4++, &dataMap);
    while ( v4 < nElems );
  }
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2>::Restore  (line 80, @0x0000000001b54820, libserver.so)  // inlines: AddMultipleToTail, CUtlSymbolLarge, Construct<CUtlSymbolLarge>, GrowMemory, GrowVector, InsertMultipleBefore, NetworkStateChanged, RemoveMultipleFromTail, SetCount
// calls: CUtlMemory<CUtlSymbolLarge, int>::Grow
// strings: "elems"
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>,2>::Restore(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>,2> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  int *pField; // rbx
  int (**vptr_IRestore)(...); // rax
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r12d
  int v9; // eax
  int (**v10)(...); // rax
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rax
  int v15; // [rsp+8h] [rbp-E8h]
  int v16; // [rsp+Ch] [rbp-E4h]
  datamap_t dataMap; // [rsp+10h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+50h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.fieldSize = 1;
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataClassName = "uv";
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataDesc.fieldType = fieldtype_t::FIELD_STRING;
  dataMap.dataNumFields = 1;
  dataMap.dataDesc = &dataDesc;
  v6 = vptr_IRestore[13](pRestore);
  v7 = *pField;
  v8 = v6;
  v9 = v6 - v7;
  if ( v9 > 0 )
  {
    v11 = pField[4];
    if ( v8 > v11 )
    {
      v15 = v9;
      v16 = *pField;
      CUtlMemory<CUtlSymbolLarge,int>::Grow((pField + 2), v8 - v11);
      v9 = v15;
      v7 = v16;
    }
    v12 = 8 * v7;
    *pField = v8;
    v13 = 8 * (v7 + (v9 - 1) + 1);
    do
    {
      v14 = (*(pField + 1) + v12);
      if ( v14 != 0 )
        *v14 = 0;
      v12 += 8;
    }
    while ( v12 != v13 );
  }
  else if ( v9 != 0 )
  {
    *pField = v8;
  }
  (*(*(pField - 183) + 176LL))(pField - 366, 1464, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( v8 != 0 )
  {
    dataDesc.fieldSize = v8;
    v10 = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 8 * v8;
    v10[3](pRestore, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13>::Restore  (line 80, @0x0000000001efb860, libserver.so)
// calls: CUtlVectorBase<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >::SetCount
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>,13>::Restore(
        CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  CUtlVectorBase<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int> > *pField; // r14
  int v5; // r12d
  int (**vptr_IRestore)(...); // rax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  v5 = (*(pRestore->_vptr_IRestore + 13))(pRestore, fieldInfo, "elems", 0, 1, 2, &dataDesc, 1, "uv");
  CUtlVectorBase<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>::SetCount(pField, v5);
  if ( v5 != 0 )
  {
    dataDesc.fieldSize = v5;
    vptr_IRestore = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 4 * v5;
    vptr_IRestore[3](pRestore, "elems", pField->m_Memory.m_pMemory, &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10>::Restore  (line 80, @0x000000000211e950, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >::SetCount
// strings: "elems"
// globals: SaveRestoreBlockHeader_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>,10>::Restore(
        CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int> > *pField; // r14
  int (**vptr_IRestore)(...); // rax
  int v8; // ebx
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  SaveRestoreBlockHeader_t *v12; // rsi
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.td = &SaveRestoreBlockHeader_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.fieldSize = 1;
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  v8 = vptr_IRestore[13](pRestore, fieldInfo, 1, 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>::SetCount(pField, v8);
  dataDesc.fieldSizeInBytes = 0;
  if ( v8 > 0 )
  {
    v9 = 5LL * (v8 - 1) + 5;
    v10 = 0;
    v11 = 8 * v9;
    do
    {
      v12 = &pField->m_Memory.m_pMemory[v10 / 0x28];
      v10 += 40LL;
      (*(pRestore->_vptr_IRestore + 2))(pRestore, v12, &dataMap);
    }
    while ( v10 != v11 );
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, 13>::Restore  (line 80, @0x0000000002180cf0, libserver.so)
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::SetCount
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::Restore(
        CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pField; // r14
  int v7; // r12d
  int (**vptr_IRestore)(...); // rax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  v7 = (*(pRestore->_vptr_IRestore + 13))(pRestore, fieldInfo, "elems", 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::SetCount(pField, v7);
  if ( v7 != 0 )
  {
    dataDesc.fieldSize = v7;
    vptr_IRestore = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 4 * v7;
    vptr_IRestore[3](pRestore, "elems", pField->m_Memory.m_pMemory, &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>, CBaseCombatCharacter::NetworkVar_m_hMyWeapons, -1>, 13>::Restore  (line 80, @0x00000000021826d0, libserver.so)  // inlines: NetworkStateChanged, SetCount
// calls: CUtlVectorBase<CHandle<CBaseCombatWeapon>, CNetworkUtlVector_MemoryType<CHandle<CBaseCombatWeapon>, -1> >::SetCount
// strings: "elems"
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>,13>::Restore(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  CUtlVectorBase<CHandle<CBaseCombatWeapon>,CNetworkUtlVector_MemoryType<CHandle<CBaseCombatWeapon>,-1> > *pField; // rbx
  int v5; // r13d
  int (**vptr_IRestore)(...); // rax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  v5 = (*(pRestore->_vptr_IRestore + 13))(pRestore, fieldInfo, "elems", 0, 1, 2, &dataDesc, 1, "uv");
  CUtlVectorBase<CHandle<CBaseCombatWeapon>,CNetworkUtlVector_MemoryType<CHandle<CBaseCombatWeapon>,-1>>::SetCount(
    pField,
    v5);
  (*&pField[-68].m_Memory.m_pMemory[44].m_Index)(&pField[-68].m_Memory, 1624, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( v5 != 0 )
  {
    dataDesc.fieldSize = v5;
    vptr_IRestore = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 4 * v5;
    vptr_IRestore[3](pRestore, "elems", pField->m_Memory.m_pMemory, &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<float, CBaseFlex::NetworkVar_m_flexWeight, -1>, 1>::Restore  (line 80, @0x0000000002185540, libserver.so)  // inlines: AddMultipleToTail, GrowMemory, GrowVector, InsertMultipleBefore, NetworkStateChanged, RemoveMultipleFromTail, SetCount
// calls: CUtlMemory<float, int>::Grow
// strings: "elems"
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>,1>::Restore(
        CUtlVectorDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>,1> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  char *pField; // rbx
  int (**vptr_IRestore)(...); // rax
  int v8; // r12d
  int v9; // eax
  int (**v10)(...); // rax
  int v11; // eax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.flags = 2;
  pField = fieldInfo->pField;
  dataDesc.fieldSize = 1;
  dataDesc.fieldName = "elems";
  dataDesc.fieldType = fieldtype_t::FIELD_FLOAT;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataClassName = "uv";
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataMap.dataNumFields = 1;
  v8 = vptr_IRestore[13](pRestore, fieldInfo, "elems", 0, v3, v4, &dataDesc, *&dataMap.dataNumFields, "uv");
  v9 = v8 - *pField;
  if ( v9 > 0 )
  {
    v11 = *(pField + 4);
    if ( v8 > v11 )
      CUtlMemory<float,int>::Grow((pField + 8), v8 - v11);
  }
  else if ( v9 == 0 )
  {
    goto LABEL_3;
  }
  *pField = v8;
LABEL_3:
  (*(*(pField - 152) + 176LL))(pField - 1216, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( v8 != 0 )
  {
    dataDesc.fieldSize = v8;
    v10 = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 4 * v8;
    v10[3](pRestore, "elems", *(pField + 1), &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<ResponseContext_t, CUtlMemory<ResponseContext_t, int> >, 10>::Restore  (line 80, @0x0000000002186d40, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<ResponseContext_t, CUtlMemory<ResponseContext_t, int> >::SetCount
// strings: "elems"
// globals: ResponseContext_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>,10>::Restore(
        CUtlVectorDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  CUtlVectorBase<ResponseContext_t,CUtlMemory<ResponseContext_t,int> > *pField; // r14
  int (**vptr_IRestore)(...); // rax
  int v7; // ebx
  __int64 v8; // r15
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  ResponseContext_t *v11; // rsi
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.td = &ResponseContext_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataDesc.fieldSizeInBytes = -1;
  v7 = vptr_IRestore[13](pRestore, fieldInfo, pRestore, 0, v3, 1, &dataDesc, 1, "uv");
  CUtlVectorBase<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>::SetCount(pField, v7);
  dataDesc.fieldSizeInBytes = 0;
  if ( v7 > 0 )
  {
    v8 = 3LL * (v7 - 1) + 3;
    v9 = 0;
    v10 = 8 * v8;
    do
    {
      v11 = &pField->m_Memory.m_pMemory[v9 / 0x18];
      v9 += 24LL;
      (*(pRestore->_vptr_IRestore + 2))(pRestore, v11, &dataMap);
    }
    while ( v9 != v10 );
  }
}


// CUtlVectorDataOps<CUtlVector<Relationship_t, CUtlMemory<Relationship_t, int> >, 10>::Restore  (line 80, @0x0000000002186e70, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<Relationship_t, CUtlMemory<Relationship_t, int> >::SetCount
// strings: "elems"
// globals: Relationship_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>>,10>::Restore(
        CUtlVectorDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<Relationship_t,CUtlMemory<Relationship_t,int> > *pField; // r14
  int (**vptr_IRestore)(...); // rax
  int v8; // ebx
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  Relationship_t *v12; // rsi
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.td = &Relationship_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataDesc.fieldSizeInBytes = -1;
  v8 = vptr_IRestore[13](pRestore, fieldInfo, pRestore, 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<Relationship_t,CUtlMemory<Relationship_t,int>>::SetCount(pField, v8);
  dataDesc.fieldSizeInBytes = 0;
  if ( v8 > 0 )
  {
    v9 = 5LL * (v8 - 1) + 5;
    v10 = 0;
    v11 = 4 * v9;
    do
    {
      v12 = &pField->m_Memory.m_pMemory[v10 / 0x14];
      v10 += 20LL;
      (*(pRestore->_vptr_IRestore + 2))(pRestore, v12, &dataMap);
    }
    while ( v10 != v11 );
  }
}


// CUtlVectorDataOps<CUtlVector<thinkfunc_t, CUtlMemory<thinkfunc_t, int> >, 10>::Restore  (line 80, @0x00000000021871d0, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<thinkfunc_t, CUtlMemory<thinkfunc_t, int> >::SetCount
// strings: "elems"
// globals: thinkfunc_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>,10>::Restore(
        CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<thinkfunc_t,CUtlMemory<thinkfunc_t,int> > *pField; // r14
  int (**vptr_IRestore)(...); // rax
  int v8; // ebx
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  thinkfunc_t *v12; // rsi
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldSize = 1;
  dataDesc.fieldName = "elems";
  dataDesc.flags = 2;
  dataDesc.td = &thinkfunc_t::m_DataMap;
  pField = fieldInfo->pField;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataNumFields = 1;
  v8 = vptr_IRestore[13](pRestore, fieldInfo, pRestore, 0, v3, v4, &dataDesc, *&dataMap.dataNumFields, "uv");
  CUtlVectorBase<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>::SetCount(pField, v8);
  dataDesc.fieldSizeInBytes = 0;
  if ( v8 > 0 )
  {
    v9 = 5LL * (v8 - 1) + 5;
    v10 = 0;
    v11 = 8 * v9;
    do
    {
      v12 = &pField->m_Memory.m_pMemory[v10 / 0x28];
      v10 += 40LL;
      (*(pRestore->_vptr_IRestore + 2))(pRestore, v12, &dataMap);
    }
    while ( v10 != v11 );
  }
}


// CUtlVectorDataOps<CUtlVector<modifiedconvars_t, CUtlMemory<modifiedconvars_t, int> >, 10>::Restore  (line 80, @0x00000000021ba5e0, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<modifiedconvars_t, CUtlMemory<modifiedconvars_t, int> >::SetCount
// strings: "elems"
// globals: modifiedconvars_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>,10>::Restore(
        CUtlVectorDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int> > *pField; // r15
  int (**vptr_IRestore)(...); // rax
  int v8; // ebx
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  __int64 v11; // r14
  modifiedconvars_t *v12; // rsi
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.td = &modifiedconvars_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataNumFields = 1;
  v8 = vptr_IRestore[13](pRestore, fieldInfo, pRestore, 0, v3, v4, &dataDesc, *&dataMap.dataNumFields, "uv");
  CUtlVectorBase<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>::SetCount(pField, v8);
  dataDesc.fieldSizeInBytes = 0;
  if ( v8 > 0 )
  {
    v9 = 3LL * (v8 - 1) + 3;
    v10 = 0;
    v11 = v9 << 7;
    do
    {
      v12 = &pField->m_Memory.m_pMemory[v10 / 0x180];
      v10 += 384LL;
      (*(pRestore->_vptr_IRestore + 2))(pRestore, v12, &dataMap);
    }
    while ( v10 != v11 );
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>, CUtlMemory<CHandle<CVGuiScreen>, int> >, 13>::Restore  (line 80, @0x00000000021baa30, libserver.so)
// calls: CUtlVectorBase<CHandle<CVGuiScreen>, CUtlMemory<CHandle<CVGuiScreen>, int> >::SetCount
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>,13>::Restore(
        CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int> > *pField; // r14
  int v7; // r12d
  int (**vptr_IRestore)(...); // rax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  v7 = (*(pRestore->_vptr_IRestore + 13))(pRestore, fieldInfo, 2, 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>::SetCount(pField, v7);
  if ( v7 != 0 )
  {
    dataDesc.fieldSize = v7;
    vptr_IRestore = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 4 * v7;
    vptr_IRestore[3](pRestore, "elems", pField->m_Memory.m_pMemory, &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<prevent_interaction_t, CUtlMemory<prevent_interaction_t, int> >, 10>::Restore  (line 80, @0x00000000021ee2d0, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<prevent_interaction_t, CUtlMemory<prevent_interaction_t, int> >::SetCount
// strings: "elems"
// globals: prevent_interaction_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>,10>::Restore(
        CUtlVectorDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  CUtlVectorBase<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int> > *pField; // r15
  int (**vptr_IRestore)(...); // rax
  int v7; // r14d
  unsigned __int64 v8; // rbx
  __int64 v9; // r14
  prevent_interaction_t *v10; // rsi
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.td = &prevent_interaction_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataDesc.fieldSizeInBytes = -1;
  v7 = vptr_IRestore[13](pRestore, fieldInfo, pRestore, 0, v3, 1, &dataDesc, 1, "uv");
  CUtlVectorBase<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>::SetCount(pField, v7);
  dataDesc.fieldSizeInBytes = 0;
  if ( v7 > 0 )
  {
    v8 = 0;
    v9 = 16 * ((v7 - 1) + 1LL);
    do
    {
      v10 = &pField->m_Memory.m_pMemory[v8 / 0x10];
      v8 += 16LL;
      (*(pRestore->_vptr_IRestore + 2))(pRestore, v10, &dataMap);
    }
    while ( v8 != v9 );
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CFish>, CUtlMemory<CHandle<CFish>, int> >, 13>::Restore  (line 80, @0x000000000221a260, libserver.so)
// calls: CUtlVectorBase<CHandle<CFish>, CUtlMemory<CHandle<CFish>, int> >::SetCount
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>,13>::Restore(
        CUtlVectorDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int> > *pField; // r14
  int v7; // r12d
  int (**vptr_IRestore)(...); // rax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  v7 = (*(pRestore->_vptr_IRestore + 13))(pRestore, fieldInfo, 1, 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>::SetCount(pField, v7);
  if ( v7 != 0 )
  {
    dataDesc.fieldSize = v7;
    vptr_IRestore = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 4 * v7;
    vptr_IRestore[3](pRestore, "elems", pField->m_Memory.m_pMemory, &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<globalentity_t, CUtlMemory<globalentity_t, int> >, 10>::Restore  (line 80, @0x0000000002283920, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<globalentity_t, CUtlMemory<globalentity_t, int> >::SetCount
// strings: "elems"
// globals: globalentity_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>>,10>::Restore(
        CUtlVectorDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  CUtlVectorBase<globalentity_t,CUtlMemory<globalentity_t,int> > *pField; // r14
  int (**vptr_IRestore)(...); // rax
  int v6; // ebx
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  globalentity_t *v10; // rsi
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.td = &globalentity_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataDesc.fieldSizeInBytes = -1;
  v6 = vptr_IRestore[13](pRestore, fieldInfo, pRestore, 0, 1, 2, &dataDesc, 1, "uv");
  CUtlVectorBase<globalentity_t,CUtlMemory<globalentity_t,int>>::SetCount(pField, v6);
  dataDesc.fieldSizeInBytes = 0;
  if ( v6 > 0 )
  {
    v7 = 3LL * (v6 - 1) + 3;
    v8 = 0;
    v9 = 4 * v7;
    do
    {
      v10 = &pField->m_Memory.m_pMemory[v8 / 0xC];
      v8 += 12LL;
      (*(pRestore->_vptr_IRestore + 2))(pRestore, v10, &dataMap);
    }
    while ( v8 != v9 );
  }
}


// CUtlVectorDataOps<CUtlStringList, 53>::Restore  (line 80, @0x00000000022b73f0, libserver.so)
// calls: CUtlVectorBase<char*, CUtlMemory<char*, int> >::SetCount
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlStringList,53>::Restore(
        CUtlVectorDataOps<CUtlStringList,53> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<char*,CUtlMemory<char*,int> > *pField; // r14
  int v7; // r12d
  int (**vptr_IRestore)(...); // rax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_UTLSTRING;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  v7 = (*(pRestore->_vptr_IRestore + 13))(pRestore, fieldInfo, "elems", 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<char *,CUtlMemory<char *,int>>::SetCount(pField, v7);
  if ( v7 != 0 )
  {
    dataDesc.fieldSize = v7;
    vptr_IRestore = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 8 * v7;
    vptr_IRestore[3](pRestore, "elems", pField->m_Memory.m_pMemory, &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<magnetted_objects_t, CUtlMemory<magnetted_objects_t, int> >, 10>::Restore  (line 80, @0x000000000231ea70, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<magnetted_objects_t, CUtlMemory<magnetted_objects_t, int> >::SetCount
// strings: "elems"
// globals: magnetted_objects_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>,10>::Restore(
        CUtlVectorDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int> > *pField; // r15
  int (**vptr_IRestore)(...); // rax
  int v8; // r14d
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  magnetted_objects_t *v11; // rsi
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.td = &magnetted_objects_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.fieldSize = 1;
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  v8 = vptr_IRestore[13](pRestore, fieldInfo, 1, 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>::SetCount(pField, v8);
  dataDesc.fieldSizeInBytes = 0;
  if ( v8 > 0 )
  {
    v9 = 0;
    v10 = 16 * ((v8 - 1) + 1LL);
    do
    {
      v11 = &pField->m_Memory.m_pMemory[v9 / 0x10];
      v9 += 16LL;
      (*(pRestore->_vptr_IRestore + 2))(pRestore, v11, &dataMap);
    }
    while ( v9 != v10 );
  }
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1>, 13>::Restore  (line 80, @0x00000000023805c0, libserver.so)  // inlines: NetworkStateChanged, SetCount
// calls: CUtlVectorBase<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1> >::SetCount
// strings: "elems"
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>,13>::Restore(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<CHandle<CBaseVRHandAttachment>,CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>,-1> > *pField; // rbx
  int v7; // r13d
  int (**vptr_IRestore)(...); // rax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldSize = 1;
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  v7 = (*(pRestore->_vptr_IRestore + 13))(pRestore, fieldInfo, "elems", 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<CHandle<CBaseVRHandAttachment>,CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>,-1>>::SetCount(
    pField,
    v7);
  (*&pField[-56].m_Memory.m_pMemory[44].m_Index)(&pField[-56].m_Memory, 1336, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( v7 != 0 )
  {
    dataDesc.fieldSize = v7;
    vptr_IRestore = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 4 * v7;
    vptr_IRestore[3](pRestore, "elems", pField->m_Memory.m_pMemory, &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >, 13>::Restore  (line 80, @0x00000000023b6170, libserver.so)
// calls: CUtlVectorBase<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >::SetCount
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>,13>::Restore(
        CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> > *pField; // r14
  int v7; // r12d
  int (**vptr_IRestore)(...); // rax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  v7 = (*(pRestore->_vptr_IRestore + 13))(pRestore, fieldInfo, 1, 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>::SetCount(pField, v7);
  if ( v7 != 0 )
  {
    dataDesc.fieldSize = v7;
    vptr_IRestore = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 4 * v7;
    vptr_IRestore[3](pRestore, "elems", pField->m_Memory.m_pMemory, &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>, CSceneEntity::NetworkVar_m_hActorList, -1>, 13>::Restore  (line 80, @0x00000000023b9b40, libserver.so)  // inlines: NetworkStateChanged, SetCount
// calls: CUtlVectorBase<CHandle<CBaseFlex>, CNetworkUtlVector_MemoryType<CHandle<CBaseFlex>, -1> >::SetCount
// strings: "elems"
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>,13>::Restore(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  CUtlVectorBase<CHandle<CBaseFlex>,CNetworkUtlVector_MemoryType<CHandle<CBaseFlex>,-1> > *pField; // rbx
  int v5; // r13d
  int (**vptr_IRestore)(...); // rax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  v5 = (*(pRestore->_vptr_IRestore + 13))(pRestore, fieldInfo, "elems", 0, 1, 2, &dataDesc, 1, "uv");
  CUtlVectorBase<CHandle<CBaseFlex>,CNetworkUtlVector_MemoryType<CHandle<CBaseFlex>,-1>>::SetCount(pField, v5);
  (*&pField[-40].m_Memory.m_pMemory[44].m_Index)(&pField[-40].m_Memory, 952, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( v5 != 0 )
  {
    dataDesc.fieldSize = v5;
    vptr_IRestore = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 4 * v5;
    vptr_IRestore[3](pRestore, "elems", pField->m_Memory.m_pMemory, &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<CEntityIndex, CUtlMemory<CEntityIndex, int> >, 5>::Restore  (line 80, @0x00000000023ba540, libserver.so)
// calls: CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::SetCount
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>>,5>::Restore(
        CUtlVectorDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int> >,5> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> > *pField; // r14
  int v7; // r12d
  int (**vptr_IRestore)(...); // rax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldSize = 1;
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.fieldName = "elems";
  dataDesc.fieldType = fieldtype_t::FIELD_INTEGER;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  v7 = (*(pRestore->_vptr_IRestore + 13))(pRestore, fieldInfo, "elems", 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::SetCount(pField, v7);
  if ( v7 != 0 )
  {
    dataDesc.fieldSize = v7;
    vptr_IRestore = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 4 * v7;
    vptr_IRestore[3](pRestore, "elems", pField->m_Memory.m_pMemory, &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >, 13>::Restore  (line 80, @0x00000000023ba900, libserver.so)
// calls: CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::SetCount
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>,13>::Restore(
        CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int> > *pField; // r14
  int v7; // r12d
  int (**vptr_IRestore)(...); // rax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.flags = 2;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  v7 = (*(pRestore->_vptr_IRestore + 13))(pRestore, fieldInfo, 1, 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>::SetCount(pField, v7);
  if ( v7 != 0 )
  {
    dataDesc.fieldSize = v7;
    vptr_IRestore = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 4 * v7;
    vptr_IRestore[3](pRestore, "elems", pField->m_Memory.m_pMemory, &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> >, 13>::Restore  (line 80, @0x00000000023babb0, libserver.so)
// calls: CUtlVectorBase<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> >::SetCount
// strings: "elems"
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>,13>::Restore(
        CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  CUtlVectorBase<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int> > *pField; // r14
  int v5; // r12d
  int (**vptr_IRestore)(...); // rax
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataDesc.fieldType = fieldtype_t::FIELD_EHANDLE;
  dataDesc.fieldSizeInBytes = -1;
  memset(&dataMap, 0, sizeof(dataMap));
  v5 = (*(pRestore->_vptr_IRestore + 13))(pRestore, fieldInfo, "elems", 0, 1, 2, &dataDesc, 1, "uv");
  CUtlVectorBase<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>::SetCount(pField, v5);
  if ( v5 != 0 )
  {
    dataDesc.fieldSize = v5;
    vptr_IRestore = pRestore->_vptr_IRestore;
    dataDesc.fieldSizeInBytes = 4 * v5;
    vptr_IRestore[3](pRestore, "elems", pField->m_Memory.m_pMemory, &dataMap, &dataDesc, 1);
  }
}


// CUtlVectorDataOps<CUtlVector<CPassengerInfo, CUtlMemory<CPassengerInfo, int> >, 10>::Restore  (line 80, @0x0000000002413c80, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<CPassengerInfo, CUtlMemory<CPassengerInfo, int> >::SetCount
// strings: "elems"
// globals: CPassengerInfo::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>,10>::Restore(
        CUtlVectorDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<CPassengerInfo,CUtlMemory<CPassengerInfo,int> > *pField; // r15
  int (**vptr_IRestore)(...); // rax
  int v8; // r14d
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  CPassengerInfo *v11; // rsi
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.td = &CPassengerInfo::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.fieldSize = 1;
  dataDesc.flags = 2;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataDesc.fieldSizeInBytes = -1;
  v8 = vptr_IRestore[13](pRestore, fieldInfo, pRestore, 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>::SetCount(pField, v8);
  dataDesc.fieldSizeInBytes = 0;
  if ( v8 > 0 )
  {
    v9 = 0;
    v10 = 32 * ((v8 - 1) + 1LL);
    do
    {
      v11 = &pField->m_Memory.m_pMemory[v9 / 0x20];
      v9 += 32LL;
      (*(pRestore->_vptr_IRestore + 2))(pRestore, v11, &dataMap);
    }
    while ( v9 != v10 );
  }
}


// CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> >, 10>::Restore  (line 80, @0x0000000002413db0, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> >::SetCount
// strings: "elems"
// globals: vehicle_crashsound_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>,10>::Restore(
        CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int> > *pField; // r15
  int (**vptr_IRestore)(...); // rax
  int v8; // r14d
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  vehicle_crashsound_t *v11; // rsi
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  pField = fieldInfo->pField;
  dataDesc.fieldName = "elems";
  dataDesc.fieldSize = 1;
  dataDesc.td = &vehicle_crashsound_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.flags = 2;
  dataDesc.fieldSizeInBytes = -1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataMap.dataNumFields = 1;
  v8 = vptr_IRestore[13](pRestore, fieldInfo, pRestore, 0, v3, v4, &dataDesc, *&dataMap.dataNumFields, "uv");
  CUtlVectorBase<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>::SetCount(pField, v8);
  dataDesc.fieldSizeInBytes = 0;
  if ( v8 > 0 )
  {
    v9 = 0;
    v10 = 32 * ((v8 - 1) + 1LL);
    do
    {
      v11 = &pField->m_Memory.m_pMemory[v9 / 0x20];
      v9 += 32LL;
      (*(pRestore->_vptr_IRestore + 2))(pRestore, v11, &dataMap);
    }
    while ( v9 != v10 );
  }
}


// CUtlVectorDataOps<CUtlVector<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> >, 10>::Restore  (line 80, @0x0000000002413ee0, libserver.so)  // inlines: operator[]
// calls: CUtlVectorBase<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> >::SetCount
// strings: "elems"
// globals: vehicle_gear_t::m_DataMap
void __fastcall CUtlVectorDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>,10>::Restore(
        CUtlVectorDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  __int64 v3; // r8
  __int64 v4; // r9
  CUtlVectorBase<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int> > *pField; // r14
  int (**vptr_IRestore)(...); // rax
  int v8; // ebx
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  vehicle_gear_t *v12; // rsi
  datamap_t dataMap; // [rsp+0h] [rbp-E0h] BYREF
  typedescription_t dataDesc; // [rsp+40h] [rbp-A0h] BYREF

  memset(&dataDesc, 0, sizeof(dataDesc));
  dataDesc.fieldName = "elems";
  pField = fieldInfo->pField;
  dataDesc.td = &vehicle_gear_t::m_DataMap;
  memset(&dataMap, 0, sizeof(dataMap));
  dataDesc.flags = 2;
  dataDesc.fieldSize = 1;
  dataMap.dataClassName = "uv";
  dataMap.dataDesc = &dataDesc;
  vptr_IRestore = pRestore->_vptr_IRestore;
  dataDesc.fieldType = fieldtype_t::FIELD_EMBEDDED;
  dataDesc.fieldSizeInBytes = -1;
  v8 = vptr_IRestore[13](pRestore, fieldInfo, 2, 0, v3, v4, &dataDesc, 1, "uv");
  CUtlVectorBase<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>::SetCount(pField, v8);
  dataDesc.fieldSizeInBytes = 0;
  if ( v8 > 0 )
  {
    v9 = 3LL * (v8 - 1) + 3;
    v10 = 0;
    v11 = 8 * v9;
    do
    {
      v12 = &pField->m_Memory.m_pMemory[v10 / 0x18];
      v10 += 24LL;
      (*(pRestore->_vptr_IRestore + 2))(pRestore, v12, &dataMap);
    }
    while ( v10 != v11 );
  }
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2>::MakeEmpty  (line 131, @0x0000000001b549b0, libserver.so)  // inlines: AddMultipleToTail, CUtlSymbolLarge, Construct<CUtlSymbolLarge>, GrowMemory, GrowVector, InsertMultipleBefore, NetworkStateChanged, RemoveMultipleFromTail, SetCount
// calls: CUtlMemory<CUtlSymbolLarge, int>::Grow
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>,2>::MakeEmpty(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>,2> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  char *pField; // rbx
  __int64 v3; // r13
  int v4; // r12d
  int v5; // esi
  __int64 v6; // rax
  _QWORD *v7; // rdx

  pField = fieldInfo->pField;
  v3 = *fieldInfo->pField;
  v4 = -*fieldInfo->pField;
  if ( v4 < 0 || *fieldInfo->pField == 0 )
  {
    if ( *fieldInfo->pField != 0 )
      *pField = 0;
  }
  else
  {
    v5 = *(pField + 4);
    if ( v5 < 0 )
      CUtlMemory<CUtlSymbolLarge,int>::Grow((pField + 8), -v5);
    *pField = 0;
    v6 = 8 * v3;
    do
    {
      v7 = (*(pField + 1) + v6);
      if ( v7 != 0 )
        *v7 = 0;
      v6 += 8;
    }
    while ( v6 != 8 * (v3 + (v4 - 1) + 1) );
  }
  (*(*(pField - 183) + 176LL))(pField - 1464, 1464, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13>::MakeEmpty  (line 131, @0x0000000001efb960, libserver.so)
// calls: CUtlVectorBase<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>,13>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10>::MakeEmpty  (line 131, @0x000000000211e930, libserver.so)
// calls: CUtlVectorBase<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>,10>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, 13>::MakeEmpty  (line 131, @0x0000000002180cd0, libserver.so)
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>, CBaseCombatCharacter::NetworkVar_m_hMyWeapons, -1>, 13>::MakeEmpty  (line 131, @0x00000000021827f0, libserver.so)  // inlines: NetworkStateChanged, SetCount
// calls: CUtlVectorBase<CHandle<CBaseCombatWeapon>, CNetworkUtlVector_MemoryType<CHandle<CBaseCombatWeapon>, -1> >::SetCount
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>,13>::MakeEmpty(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  _QWORD *pField; // rbx

  pField = fieldInfo->pField;
  CUtlVectorBase<CHandle<CBaseCombatWeapon>,CNetworkUtlVector_MemoryType<CHandle<CBaseCombatWeapon>,-1>>::SetCount(
    fieldInfo->pField,
    0);
  (*(*(pField - 203) + 176LL))(pField - 203, 1624, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<float, CBaseFlex::NetworkVar_m_flexWeight, -1>, 1>::MakeEmpty  (line 131, @0x00000000021854d0, libserver.so)  // inlines: AddMultipleToTail, GrowMemory, GrowVector, InsertMultipleBefore, NetworkStateChanged, RemoveMultipleFromTail, SetCount
// calls: CUtlMemory<float, int>::Grow
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>,1>::MakeEmpty(
        CUtlVectorDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>,1> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  char *pField; // rbx
  int v3; // esi

  pField = fieldInfo->pField;
  if ( -*fieldInfo->pField >= 0 && *fieldInfo->pField != 0 )
  {
    v3 = *(pField + 4);
    if ( v3 < 0 )
      CUtlMemory<float,int>::Grow((pField + 8), -v3);
    goto LABEL_6;
  }
  if ( *fieldInfo->pField != 0 )
LABEL_6:
    *pField = 0;
  (*(*(pField - 152) + 176LL))(pField - 1216, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CUtlVectorDataOps<CUtlVector<ResponseContext_t, CUtlMemory<ResponseContext_t, int> >, 10>::MakeEmpty  (line 131, @0x0000000002186e50, libserver.so)
// calls: CUtlVectorBase<ResponseContext_t, CUtlMemory<ResponseContext_t, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>,10>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<Relationship_t, CUtlMemory<Relationship_t, int> >, 10>::MakeEmpty  (line 131, @0x0000000002186f80, libserver.so)
// calls: CUtlVectorBase<Relationship_t, CUtlMemory<Relationship_t, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>>,10>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<Relationship_t,CUtlMemory<Relationship_t,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<thinkfunc_t, CUtlMemory<thinkfunc_t, int> >, 10>::MakeEmpty  (line 131, @0x00000000021872e0, libserver.so)
// calls: CUtlVectorBase<thinkfunc_t, CUtlMemory<thinkfunc_t, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>,10>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<modifiedconvars_t, CUtlMemory<modifiedconvars_t, int> >, 10>::MakeEmpty  (line 131, @0x00000000021ba700, libserver.so)
// calls: CUtlVectorBase<modifiedconvars_t, CUtlMemory<modifiedconvars_t, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>,10>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>, CUtlMemory<CHandle<CVGuiScreen>, int> >, 13>::MakeEmpty  (line 131, @0x00000000021bab30, libserver.so)
// calls: CUtlVectorBase<CHandle<CVGuiScreen>, CUtlMemory<CHandle<CVGuiScreen>, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>,13>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<prevent_interaction_t, CUtlMemory<prevent_interaction_t, int> >, 10>::MakeEmpty  (line 131, @0x00000000021ee3e0, libserver.so)
// calls: CUtlVectorBase<prevent_interaction_t, CUtlMemory<prevent_interaction_t, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>,10>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<CHandle<CFish>, CUtlMemory<CHandle<CFish>, int> >, 13>::MakeEmpty  (line 131, @0x000000000221a360, libserver.so)
// calls: CUtlVectorBase<CHandle<CFish>, CUtlMemory<CHandle<CFish>, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>,13>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<globalentity_t, CUtlMemory<globalentity_t, int> >, 10>::MakeEmpty  (line 131, @0x0000000002283a30, libserver.so)
// calls: CUtlVectorBase<globalentity_t, CUtlMemory<globalentity_t, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>>,10>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<globalentity_t,CUtlMemory<globalentity_t,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlStringList, 53>::MakeEmpty  (line 131, @0x00000000022b74f0, libserver.so)
// calls: CUtlVectorBase<char*, CUtlMemory<char*, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlStringList,53>::MakeEmpty(
        CUtlVectorDataOps<CUtlStringList,53> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<char *,CUtlMemory<char *,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<magnetted_objects_t, CUtlMemory<magnetted_objects_t, int> >, 10>::MakeEmpty  (line 131, @0x000000000231eb80, libserver.so)
// calls: CUtlVectorBase<magnetted_objects_t, CUtlMemory<magnetted_objects_t, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>,10>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1>, 13>::MakeEmpty  (line 131, @0x0000000002380770, libserver.so)  // inlines: NetworkStateChanged, SetCount
// calls: CUtlVectorBase<CHandle<CBaseVRHandAttachment>, CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>, -1> >::SetCount
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>,13>::MakeEmpty(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  _QWORD *pField; // rbx

  pField = fieldInfo->pField;
  CUtlVectorBase<CHandle<CBaseVRHandAttachment>,CNetworkUtlVector_MemoryType<CHandle<CBaseVRHandAttachment>,-1>>::SetCount(
    fieldInfo->pField,
    0);
  (*(*(pField - 167) + 176LL))(pField - 167, 1336, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >, 13>::MakeEmpty  (line 131, @0x00000000023b6150, libserver.so)
// calls: CUtlVectorBase<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>,13>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>, CSceneEntity::NetworkVar_m_hActorList, -1>, 13>::MakeEmpty  (line 131, @0x00000000023b9a90, libserver.so)  // inlines: NetworkStateChanged, SetCount
// calls: CUtlVectorBase<CHandle<CBaseFlex>, CNetworkUtlVector_MemoryType<CHandle<CBaseFlex>, -1> >::SetCount
void __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>,13>::MakeEmpty(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  _QWORD *pField; // rbx

  pField = fieldInfo->pField;
  CUtlVectorBase<CHandle<CBaseFlex>,CNetworkUtlVector_MemoryType<CHandle<CBaseFlex>,-1>>::SetCount(fieldInfo->pField, 0);
  (*(*(pField - 119) + 176LL))(pField - 119, 952, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CUtlVectorDataOps<CUtlVector<CEntityIndex, CUtlMemory<CEntityIndex, int> >, 5>::MakeEmpty  (line 131, @0x00000000023ba640, libserver.so)
// calls: CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>>,5>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int> >,5> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >, 13>::MakeEmpty  (line 131, @0x00000000023baa00, libserver.so)
// calls: CUtlVectorBase<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>,13>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> >, 13>::MakeEmpty  (line 131, @0x00000000023bacb0, libserver.so)
// calls: CUtlVectorBase<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>,13>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<CPassengerInfo, CUtlMemory<CPassengerInfo, int> >, 10>::MakeEmpty  (line 131, @0x0000000002413d90, libserver.so)
// calls: CUtlVectorBase<CPassengerInfo, CUtlMemory<CPassengerInfo, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>,10>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> >, 10>::MakeEmpty  (line 131, @0x0000000002413ec0, libserver.so)
// calls: CUtlVectorBase<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>,10>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CUtlVector<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> >, 10>::MakeEmpty  (line 131, @0x0000000002413ff0, libserver.so)
// calls: CUtlVectorBase<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> >::SetCount
void __fastcall CUtlVectorDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>,10>::MakeEmpty(
        CUtlVectorDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  CUtlVectorBase<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>::SetCount(fieldInfo->pField, 0);
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge, CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses, -1>, 2>::IsEmpty  (line 137, @0x0000000001b54350, libserver.so)
bool __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>,2>::IsEmpty(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1>,2> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>, CUtlMemory<CHandle<CLightEntity>, int> >, 13>::IsEmpty  (line 137, @0x0000000001eeb2b0, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>,13>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t, CUtlMemory<SaveRestoreBlockHeader_t, int> >, 10>::IsEmpty  (line 137, @0x00000000020f22a0, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int>>,10>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,CUtlMemory<SaveRestoreBlockHeader_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<float, CBaseFlex::NetworkVar_m_flexWeight, -1>, 1>::IsEmpty  (line 137, @0x000000000217a940, libserver.so)
bool __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>,1>::IsEmpty(
        CUtlVectorDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>,1> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<ResponseContext_t, CUtlMemory<ResponseContext_t, int> >, 10>::IsEmpty  (line 137, @0x000000000217a960, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int>>,10>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<ResponseContext_t,CUtlMemory<ResponseContext_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<thinkfunc_t, CUtlMemory<thinkfunc_t, int> >, 10>::IsEmpty  (line 137, @0x000000000217a980, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int>>,10>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<thinkfunc_t,CUtlMemory<thinkfunc_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>, CBaseCombatCharacter::NetworkVar_m_hMyWeapons, -1>, 13>::IsEmpty  (line 137, @0x000000000217a990, libserver.so)
bool __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>,13>::IsEmpty(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<Relationship_t, CUtlMemory<Relationship_t, int> >, 10>::IsEmpty  (line 137, @0x000000000217a9a0, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>>,10>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, 13>::IsEmpty  (line 137, @0x000000000217a9b0, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<modifiedconvars_t, CUtlMemory<modifiedconvars_t, int> >, 10>::IsEmpty  (line 137, @0x00000000021b15d0, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int>>,10>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<modifiedconvars_t,CUtlMemory<modifiedconvars_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>, CUtlMemory<CHandle<CVGuiScreen>, int> >, 13>::IsEmpty  (line 137, @0x00000000021b15e0, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int>>,13>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CVGuiScreen>,CUtlMemory<CHandle<CVGuiScreen>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<prevent_interaction_t, CUtlMemory<prevent_interaction_t, int> >, 10>::IsEmpty  (line 137, @0x00000000021df5e0, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int>>,10>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<prevent_interaction_t,CUtlMemory<prevent_interaction_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<CHandle<CFish>, CUtlMemory<CHandle<CFish>, int> >, 13>::IsEmpty  (line 137, @0x000000000220edf0, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int>>,13>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CFish>,CUtlMemory<CHandle<CFish>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<globalentity_t, CUtlMemory<globalentity_t, int> >, 10>::IsEmpty  (line 137, @0x000000000227b670, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int>>,10>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<globalentity_t,CUtlMemory<globalentity_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlStringList, 53>::IsEmpty  (line 137, @0x00000000022a6d60, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlStringList,53>::IsEmpty(
        CUtlVectorDataOps<CUtlStringList,53> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<magnetted_objects_t, CUtlMemory<magnetted_objects_t, int> >, 10>::IsEmpty  (line 137, @0x0000000002304850, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>,10>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>, CPropVRHand::NetworkVar_m_hAttachments, -1>, 13>::IsEmpty  (line 137, @0x0000000002371610, libserver.so)
bool __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>,13>::IsEmpty(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseVRHandAttachment>,CPropVRHand::NetworkVar_m_hAttachments,-1>,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>, CUtlMemory<CHandle<CBasePlayer>, int> >, 13>::IsEmpty  (line 137, @0x00000000023a99d0, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int>>,13>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayer>,CUtlMemory<CHandle<CBasePlayer>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<CEntityIndex, CUtlMemory<CEntityIndex, int> >, 5>::IsEmpty  (line 137, @0x00000000023a99e0, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int>>,5>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<CEntityIndex,CUtlMemory<CEntityIndex,int> >,5> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>, CUtlMemory<CHandle<CSceneListManager>, int> >, 13>::IsEmpty  (line 137, @0x00000000023a99f0, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int>>,13>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>,CUtlMemory<CHandle<CSceneListManager>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>, CUtlMemory<CHandle<CSceneEntity>, int> >, 13>::IsEmpty  (line 137, @0x00000000023a9a00, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int>>,13>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>,CUtlMemory<CHandle<CSceneEntity>,int> >,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>, CSceneEntity::NetworkVar_m_hActorList, -1>, 13>::IsEmpty  (line 137, @0x00000000023a9a20, libserver.so)
bool __fastcall CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>,13>::IsEmpty(
        CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1>,13> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<CPassengerInfo, CUtlMemory<CPassengerInfo, int> >, 10>::IsEmpty  (line 137, @0x0000000002410580, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>,10>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> >, 10>::IsEmpty  (line 137, @0x0000000002410590, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>,10>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CUtlVectorDataOps<CUtlVector<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> >, 10>::IsEmpty  (line 137, @0x00000000024105a0, libserver.so)
bool __fastcall CUtlVectorDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>,10>::IsEmpty(
        CUtlVectorDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int> >,10> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


