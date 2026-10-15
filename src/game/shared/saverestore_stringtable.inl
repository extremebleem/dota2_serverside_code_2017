
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CStringTableSaveRestoreOps::Save  (line 31, @0x0000000002246750, libserver.so)  // inlines: V_strlen
// calls: strlen
void __fastcall CStringTableSaveRestoreOps::Save(
        CStringTableSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  const char *v5; // rax
  const char *v6; // r12
  int v7; // eax
  int nLen[9]; // [rsp+Ch] [rbp-24h] BYREF

  v5 = (*(this->m_pStringTable->_vptr_INetworkStringTable + 9))(this->m_pStringTable, *fieldInfo->pField, 0);
  v6 = v5;
  if ( v5 != 0 )
    v7 = strlen(v5) + 1;
  else
    v7 = 1;
  nLen[0] = v7;
  (*(pSave->_vptr_ISave + 11))(pSave, nLen, 1);
  (*(pSave->_vptr_ISave + 38))(pSave, fieldInfo->pTypeDesc->fieldName, v6);
}


// CStringTableSaveRestoreOps::Restore  (line 40, @0x0000000002247360, libserver.so)
// calls: __stack_chk_fail
void __fastcall CStringTableSaveRestoreOps::Restore(
        CStringTableSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  _DWORD *pField; // r13
  unsigned int v6; // eax
  void *v7; // rsp
  _BYTE v8[32]; // [rsp+10h] [rbp-20h] BYREF

  pField = fieldInfo->pField;
  v6 = (*(pRestore->_vptr_IRestore + 13))(pRestore);
  v7 = alloca(((v6 + 31) & 0xFFFFFFF0) + 16LL);
  (*(pRestore->_vptr_IRestore + 22))(pRestore, v8 & 0xFFFFFFFFFFFFFFEFLL, v6, v6);
  *pField = (*(this->m_pStringTable->_vptr_INetworkStringTable + 8))(
              this->m_pStringTable,
              1,
              v8 & 0xFFFFFFFFFFFFFFEFLL,
              0xFFFFFFFFLL,
              0);
}


// CStringTableSaveRestoreOps::MakeEmpty  (line 49, @0x0000000002245cb0, libserver.so)
void __fastcall CStringTableSaveRestoreOps::MakeEmpty(
        CStringTableSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  *fieldInfo->pField = 0xFFFF;
}


// CStringTableSaveRestoreOps::IsEmpty  (line 55, @0x0000000002245cc0, libserver.so)
bool __fastcall CStringTableSaveRestoreOps::IsEmpty(
        CStringTableSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0xFFFF;
}


