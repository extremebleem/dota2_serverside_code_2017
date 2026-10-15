// Reconstructed from DWARF by pahole; not original source.

// src/modellib/activitydataops.cpp:20
class CActivityDataOps : public CDefSaveRestoreOps {
public:

	CActivityDataOps(CActivityDataOps &);
	CActivityDataOps(const CActivityDataOps &);
	CActivityDataOps();
	virtual void Save(const SaveRestoreFieldInfo_t &, ISave *);
	virtual void Restore(const SaveRestoreFieldInfo_t &, IRestore *);
	virtual bool IsEmpty(const SaveRestoreFieldInfo_t &);
	virtual void MakeEmpty(const SaveRestoreFieldInfo_t &);

	// vtable[0] Save
	// vtable[1] Restore
	// vtable[2] IsEmpty
	// vtable[3] MakeEmpty
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_activitydataops.cpp  (line 0, @0x0000000001a6b150, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: `guard variable for'g_AnimOpSourceColors, UNSPECIFIED_LOGGING_COLOR, g_AnimOpSourceColors
void __cdecl GLOBAL__sub_I_activitydataops_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  if ( `guard variable for'g_AnimOpSourceColors == 0 )
  {
    `guard variable for'g_AnimOpSourceColors = 1;
    g_AnimOpSourceColors[0]._color[0] = -1;
    g_AnimOpSourceColors[0]._color[1] = -1;
    g_AnimOpSourceColors[0]._color[2] = 0;
    g_AnimOpSourceColors[0]._color[3] = -1;
    g_AnimOpSourceColors[1]._color[0] = -36;
    g_AnimOpSourceColors[1]._color[1] = -36;
    g_AnimOpSourceColors[1]._color[2] = -36;
    g_AnimOpSourceColors[1]._color[3] = -1;
    g_AnimOpSourceColors[2]._color[0] = 0;
    g_AnimOpSourceColors[2]._color[1] = -1;
    g_AnimOpSourceColors[2]._color[2] = 50;
    g_AnimOpSourceColors[2]._color[3] = -1;
    g_AnimOpSourceColors[3]._color[0] = -1;
    g_AnimOpSourceColors[3]._color[1] = 50;
    g_AnimOpSourceColors[3]._color[2] = 50;
    g_AnimOpSourceColors[3]._color[3] = -1;
  }
}


// CActivityDataOps::Save  (line 24, @0x0000000003160740, libserver.so)  // inlines: ActivityList_NameForIndex, V_strlen
// calls: strlen
void __fastcall CActivityDataOps::Save(
        CActivityDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  __int64 v4; // rsi
  const char *v5; // r12
  uint32 v6; // eax
  uint32 len[9]; // [rsp+Ch] [rbp-24h] BYREF

  v4 = *fieldInfo->pField;
  if ( g_pAnimationSystem == 0 )
    goto LABEL_5;
  v5 = (*(*g_pAnimationSystem + 312LL))(g_pAnimationSystem, v4);
  if ( v5 == 0 )
  {
    if ( g_pAnimationSystem != 0 )
    {
      v5 = (*(*g_pAnimationSystem + 312LL))(g_pAnimationSystem, 0);
      v6 = 1;
      if ( v5 == 0 )
        goto LABEL_4;
      goto LABEL_3;
    }
LABEL_5:
    v6 = 1;
    v5 = 0;
    goto LABEL_4;
  }
LABEL_3:
  v6 = strlen(v5) + 1;
LABEL_4:
  len[0] = v6;
  (*(pSave->_vptr_ISave + 12))(pSave, len, 1);
  (*(pSave->_vptr_ISave + 19))(pSave, v5);
}


// CActivityDataOps::Restore  (line 39, @0x0000000003160680, libserver.so)  // inlines: ActivityList_IndexForName
// calls: __stack_chk_fail
void __fastcall CActivityDataOps::Restore(
        CActivityDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  _DWORD *pField; // r13
  unsigned int v5; // eax
  int v6; // eax
  char nameBuf[1032]; // [rsp+0h] [rbp-430h] BYREF
  unsigned __int64 v8; // [rsp+408h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  pField = fieldInfo->pField;
  v5 = (*(pRestore->_vptr_IRestore + 14))(pRestore);
  (*(pRestore->_vptr_IRestore + 22))(pRestore, nameBuf, 1024, v5);
  if ( g_pAnimationSystem == 0
    || (v6 = (*(*g_pAnimationSystem + 304LL))(g_pAnimationSystem, nameBuf), *pField = v6, v6 < 0) )
  {
    *pField = 0;
  }
}


// CActivityDataOps::IsEmpty  (line 54, @0x0000000003160720, libserver.so)
bool __fastcall CActivityDataOps::IsEmpty(CActivityDataOps *const this, const SaveRestoreFieldInfo_t *const fieldInfo)
{
  return *fieldInfo->pField == 0;
}


// CActivityDataOps::MakeEmpty  (line 60, @0x0000000003160730, libserver.so)
void __fastcall CActivityDataOps::MakeEmpty(
        CActivityDataOps *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo)
{
  *fieldInfo->pField = 0;
}


// ActivityDataOps  (line 69, @0x0000000003160670, libserver.so)
// callers: DataMapInit<CAnimationLayer>
// globals: g_ActivityDataOps
ISaveRestoreOps *__cdecl ActivityDataOps()
{
  return &g_ActivityDataOps;
}


