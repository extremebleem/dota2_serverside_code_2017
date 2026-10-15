
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDefSaveRestoreBlockHandler::PreSave  (line 85, @0x0000000001f71a20, libserver.so)
void __fastcall CDefSaveRestoreBlockHandler::PreSave(
        CDefSaveRestoreBlockHandler *const this,
        CSaveRestoreData *a2,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const list)
{
  ;
}


// CDefSaveRestoreBlockHandler::Save  (line 86, @0x000000000208e5f0, libserver.so)
void __fastcall CDefSaveRestoreBlockHandler::Save(CDefSaveRestoreBlockHandler *const this, ISave *a2)
{
  ;
}


// CDefSaveRestoreBlockHandler::WriteSaveHeaders  (line 87, @0x000000000208e600, libserver.so)
void __fastcall CDefSaveRestoreBlockHandler::WriteSaveHeaders(CDefSaveRestoreBlockHandler *const this, ISave *a2)
{
  ;
}


// CDefSaveRestoreBlockHandler::PostSave  (line 88, @0x0000000001f71a30, libserver.so)
void __fastcall CDefSaveRestoreBlockHandler::PostSave(
        CDefSaveRestoreBlockHandler *const this,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const list)
{
  ;
}


// CDefSaveRestoreBlockHandler::PreRestore  (line 90, @0x0000000001f71a40, libserver.so)
void __fastcall CDefSaveRestoreBlockHandler::PreRestore(CDefSaveRestoreBlockHandler *const this)
{
  ;
}


// CDefSaveRestoreBlockHandler::ReadRestoreHeaders  (line 91, @0x000000000208e610, libserver.so)
void __fastcall CDefSaveRestoreBlockHandler::ReadRestoreHeaders(CDefSaveRestoreBlockHandler *const this, IRestore *a2)
{
  ;
}


// CDefSaveRestoreBlockHandler::Restore  (line 92, @0x000000000208e620, libserver.so)
void __fastcall CDefSaveRestoreBlockHandler::Restore(
        CDefSaveRestoreBlockHandler *const this,
        IRestore *a2,
        SpawnGroupHandle_t handle,
        bool fCreatePlayers)
{
  ;
}


// CDefSaveRestoreBlockHandler::PostRestore  (line 93, @0x0000000001f71a50, libserver.so)
void __fastcall CDefSaveRestoreBlockHandler::PostRestore(CDefSaveRestoreBlockHandler *const this)
{
  ;
}


// ISave::~ISave  (line 236, @0x00000000020f1090, libserver.so)
void __fastcall ISave::~ISave(ISave *const this)
{
  this->_vptr_ISave = &off_3FF3F30;
}


// ISave::~ISave  (line 236, @0x00000000020f4ab0, libserver.so)  // inlines: ~ISave
// calls: operator delete
void __fastcall ISave::~ISave(ISave *const this)
{
  this->_vptr_ISave = &off_3FF3F30;
  operator delete(this);
}


// IRestore::~IRestore  (line 346, @0x000000000208e630, libserver.so)
void __fastcall IRestore::~IRestore(IRestore *const this)
{
  this->_vptr_IRestore = &off_3FEC5D0;
}


// IRestore::~IRestore  (line 346, @0x000000000208f520, libserver.so)  // inlines: ~IRestore
// calls: operator delete
void __fastcall IRestore::~IRestore(IRestore *const this)
{
  this->_vptr_IRestore = &off_3FEC5D0;
  operator delete(this);
}


// CDefSaveRestoreOps::Save  (line 391, @0x0000000001b542e0, libserver.so)
void __fastcall CDefSaveRestoreOps::Save(
        CDefSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  ;
}


// CDefSaveRestoreOps::Restore  (line 392, @0x0000000001b542f0, libserver.so)
void __fastcall CDefSaveRestoreOps::Restore(
        CDefSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  ;
}


// CDefSaveRestoreOps::IsEmpty  (line 394, @0x0000000001b54300, libserver.so)
bool __fastcall CDefSaveRestoreOps::IsEmpty(
        CDefSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return 0;
}


// CDefSaveRestoreOps::MakeEmpty  (line 395, @0x0000000001b54310, libserver.so)
void __fastcall CDefSaveRestoreOps::MakeEmpty(
        CDefSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  ;
}


// CDefSaveRestoreOps::Parse  (line 396, @0x0000000001b54320, libserver.so)
bool __fastcall CDefSaveRestoreOps::Parse(
        CDefSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        const char *szValue)
{
  return 0;
}


// CClassPtrSaveRestoreOps::IsEmpty  (line 406, @0x00000000023a8af0, libserver.so)
bool __fastcall CClassPtrSaveRestoreOps::IsEmpty(
        CClassPtrSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  _QWORD *pField; // rdx
  int fieldSize; // ecx
  unsigned __int64 v4; // rax
  __int64 v5; // rcx

  pField = fieldInfo->pField;
  fieldSize = fieldInfo->pTypeDesc->fieldSize;
  if ( fieldSize == 0 )
    return 1;
  if ( *pField == 0 )
  {
    v4 = 0;
    v5 = 8LL * (fieldSize - 1);
    while ( v4 != v5 )
    {
      v4 += 8LL;
      if ( pField[v4 / 8] != 0 )
        return 0;
    }
    return 1;
  }
  return 0;
}


// CClassPtrSaveRestoreOps::MakeEmpty  (line 418, @0x00000000023aa750, libserver.so)  // inlines: memset
// calls: memset
void __fastcall CClassPtrSaveRestoreOps::MakeEmpty(
        CClassPtrSaveRestoreOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  memset(fieldInfo->pField, 0, 8LL * fieldInfo->pTypeDesc->fieldSize);
}


