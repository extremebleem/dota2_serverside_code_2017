
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlSymbolDataOps::Save  (line 23, @0x000000000227c5f0, libserver.so)  // inlines: CUtlSymbol
// calls: CUtlSymbolTable::String
void __fastcall CUtlSymbolDataOps::Save(
        CUtlSymbolDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  CUtlSymbolTable *m_pSymbolTable; // rdi
  const char *v6; // rax
  CUtlSymbol id; // [rsp+0h] [rbp-20h] BYREF

  m_pSymbolTable = this->m_pSymbolTable;
  id.m_Id = *fieldInfo->pField;
  v6 = CUtlSymbolTable::String(m_pSymbolTable, &id);
  (*(pSave->_vptr_ISave + 38))(pSave, fieldInfo->pTypeDesc->fieldName, v6);
}


// CUtlSymbolDataOps::Restore  (line 33, @0x000000000227c640, libserver.so)  // inlines: operator=
// calls: CUtlSymbolTable::AddString, __stack_chk_fail
void __fastcall CUtlSymbolDataOps::Restore(
        CUtlSymbolDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  _WORD *pField; // r13
  unsigned int v6; // eax
  __int16 v7; // [rsp+0h] [rbp-440h]
  char tmp[1032]; // [rsp+10h] [rbp-430h] BYREF
  unsigned __int64 v9; // [rsp+418h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  pField = fieldInfo->pField;
  v6 = (*(pRestore->_vptr_IRestore + 10))(pRestore);
  (*(pRestore->_vptr_IRestore + 22))(pRestore, tmp, 1024, v6);
  CUtlSymbolTable::AddString(this->m_pSymbolTable, tmp);
  *pField = v7;
}


// CUtlSymbolDataOps::MakeEmpty  (line 45, @0x000000000227b1d0, libserver.so)  // inlines: operator=
void __fastcall CUtlSymbolDataOps::MakeEmpty(
        CUtlSymbolDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  *fieldInfo->pField = -1;
}


// CUtlSymbolDataOps::IsEmpty  (line 51, @0x000000000227b1f0, libserver.so)  // inlines: IsValid
bool __fastcall CUtlSymbolDataOps::IsEmpty(
        CUtlSymbolDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0xFFFF;
}


