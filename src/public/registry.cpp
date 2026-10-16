// Reconstructed from DWARF by pahole; not original source.

// src/public/registry.cpp:26
class CRegistry : public IRegistry {
public:

private:

	bool m_bValid;  // +0x8
	CRegistry(const CRegistry &);
	CRegistry();
	virtual ~CRegistry();
	virtual bool Init(const char *);
	virtual bool DirectInit(const char *);
	virtual void Shutdown();
	virtual int ReadInt(const char *, int);
	virtual void WriteInt(const char *, int);
	virtual const char * ReadString(const char *, const char *);
	virtual void WriteString(const char *, const char *);
	virtual int ReadInt(const char *, const char *, int);
	virtual void WriteInt(const char *, const char *, int);
	virtual const char * ReadString(const char *, const char *, const char *);
	virtual void WriteString(const char *, const char *, const char *);

	// vtable[2] Init
	// vtable[12] DirectInit
	// vtable[3] Shutdown
	// vtable[4] ReadInt
	// vtable[5] WriteInt
	// vtable[6] ReadString
	// vtable[7] WriteString
	// vtable[8] ReadInt
	// vtable[9] WriteInt
	// vtable[10] ReadString
	// vtable[11] WriteString
	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// InstanceRegistry  (line 56, @0x0000000002f48ee0, libserver.so)
// calls: operator new
// callers: CBaseGameStats_Driver::Init, CBaseGameStats::UploadStatsFileNOW
IRegistry *__fastcall InstanceRegistry(const char *subDirectoryUnderValve)
{
  IRegistry *result; // rax

  result = operator new(0x10u);  // new CRegistry (size matches)
  result->_vptr_IRegistry = off_47B70F0;  // vptr: CRegistry
  LOBYTE(result[1]._vptr_IRegistry) = 0;
  return result;
}


// ReleaseInstancedRegistry  (line 64, @0x0000000002f48f00, libserver.so)
// callers: CBaseGameStats_Driver::Init, CBaseGameStats::UploadStatsFileNOW
void __fastcall ReleaseInstancedRegistry(IRegistry *reg)
{
  if ( reg != 0 )
  {
    (*(reg->_vptr_IRegistry + 3))(reg);
    (*(reg->_vptr_IRegistry + 1))(reg);
  }
}


// CRegistry::ReadInt  (line 83, @0x0000000002f47020, libserver.so)  // inlines: V_strlen
// calls: strlen, V_snprintf, __stack_chk_fail
// strings: "%s\\%s"
int __fastcall CRegistry::ReadInt(CRegistry *const this, const char *pKeyBase, const char *pKey, int defaultValue)
{
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  void *v11; // rsp
  _BYTE v13[48]; // [rsp+10h] [rbp-30h] BYREF

  if ( pKeyBase == 0 )
  {
    v8 = 0;
    if ( pKey != 0 )
      goto LABEL_3;
LABEL_6:
    v9 = 0;
    goto LABEL_4;
  }
  v8 = strlen(pKeyBase);
  if ( pKey == 0 )
    goto LABEL_6;
LABEL_3:
  v9 = strlen(pKey);
LABEL_4:
  v10 = v8 + v9;
  v11 = alloca(((v10 + 33) & 0xFFFFFFF0) + 16LL);
  V_snprintf(v13 & 0xFFFFFFFFFFFFFFEFLL, (v10 + 2), "%s\\%s", pKeyBase, pKey);
  return (*(this->_vptr_IRegistry + 4))(this, v13 & 0xFFFFFFFFFFFFFFEFLL, defaultValue);
}


// CRegistry::WriteInt  (line 92, @0x0000000002f47100, libserver.so)  // inlines: V_strlen
// calls: strlen, V_snprintf, __stack_chk_fail
// strings: "%s\\%s"
void __fastcall CRegistry::WriteInt(CRegistry *const this, const char *pKeyBase, const char *pKey, int value)
{
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  void *v11; // rsp
  _BYTE v12[48]; // [rsp+10h] [rbp-30h] BYREF

  if ( pKeyBase == 0 )
  {
    v8 = 0;
    if ( pKey != 0 )
      goto LABEL_3;
LABEL_6:
    v9 = 0;
    goto LABEL_4;
  }
  v8 = strlen(pKeyBase);
  if ( pKey == 0 )
    goto LABEL_6;
LABEL_3:
  v9 = strlen(pKey);
LABEL_4:
  v10 = v8 + v9;
  v11 = alloca(((v10 + 33) & 0xFFFFFFF0) + 16LL);
  V_snprintf(v12 & 0xFFFFFFFFFFFFFFEFLL, (v10 + 2), "%s\\%s", pKeyBase, pKey);
  (*(this->_vptr_IRegistry + 5))(this, v12 & 0xFFFFFFFFFFFFFFEFLL, value);
}


// CRegistry::ReadString  (line 101, @0x0000000002f471e0, libserver.so)  // inlines: V_strlen
// calls: strlen, V_snprintf, __stack_chk_fail
// strings: "%s\\%s"
const char *__fastcall CRegistry::ReadString(
        CRegistry *const this,
        const char *pKeyBase,
        const char *pKey,
        const char *defaultValue)
{
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  void *v11; // rsp
  _BYTE v13[48]; // [rsp+10h] [rbp-30h] BYREF

  if ( pKeyBase == 0 )
  {
    v8 = 0;
    if ( pKey != 0 )
      goto LABEL_3;
LABEL_6:
    v9 = 0;
    goto LABEL_4;
  }
  v8 = strlen(pKeyBase);
  if ( pKey == 0 )
    goto LABEL_6;
LABEL_3:
  v9 = strlen(pKey);
LABEL_4:
  v10 = v8 + v9;
  v11 = alloca(((v10 + 33) & 0xFFFFFFF0) + 16LL);
  V_snprintf(v13 & 0xFFFFFFFFFFFFFFEFLL, (v10 + 2), "%s\\%s", pKeyBase, pKey);
  return (*(this->_vptr_IRegistry + 6))(this, v13 & 0xFFFFFFFFFFFFFFEFLL, defaultValue);
}


// CRegistry::WriteString  (line 110, @0x0000000002f472c0, libserver.so)  // inlines: V_strlen
// calls: strlen, V_snprintf, __stack_chk_fail
// strings: "%s\\%s"
void __fastcall CRegistry::WriteString(
        CRegistry *const this,
        const char *pKeyBase,
        const char *pKey,
        const char *value)
{
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  void *v11; // rsp
  _BYTE v12[48]; // [rsp+10h] [rbp-30h] BYREF

  if ( pKeyBase == 0 )
  {
    v8 = 0;
    if ( pKey != 0 )
      goto LABEL_3;
LABEL_6:
    v9 = 0;
    goto LABEL_4;
  }
  v8 = strlen(pKeyBase);
  if ( pKey == 0 )
    goto LABEL_6;
LABEL_3:
  v9 = strlen(pKey);
LABEL_4:
  v10 = v8 + v9;
  v11 = alloca(((v10 + 33) & 0xFFFFFFF0) + 16LL);
  V_snprintf(v12 & 0xFFFFFFFFFFFFFFEFLL, (v10 + 2), "%s\\%s", pKeyBase, pKey);
  (*(this->_vptr_IRegistry + 7))(this, v12 & 0xFFFFFFFFFFFFFFEFLL, value);
}


// CRegistry::CRegistry  (line 337, @0x0000000002f48f40, libserver.so)
void __fastcall CRegistry::CRegistry(CRegistry *const this)
{
  this->_vptr_IRegistry = off_47B70F0;  // vptr: CRegistry
  this->m_bValid = 0;
}


// CRegistry::~CRegistry  (line 346, @0x0000000002f46f90, libserver.so)  // inlines: ~IRegistry
void __fastcall CRegistry::~CRegistry(CRegistry *const this)
{
  this->_vptr_IRegistry = off_47B7070;  // vptr: IRegistry
}


// CRegistry::~CRegistry  (line 346, @0x0000000002f47000, libserver.so)  // inlines: ~CRegistry, ~IRegistry
// calls: operator delete
void __fastcall CRegistry::~CRegistry(CRegistry *const this)
{
  this->_vptr_IRegistry = off_47B7070;  // vptr: IRegistry
  operator delete(this);
}


// CRegistry::ReadInt  (line 356, @0x0000000002f46fa0, libserver.so)
int __fastcall CRegistry::ReadInt(CRegistry *const this, const char *key, int defaultValue)
{
  return 0;
}


// CRegistry::WriteInt  (line 366, @0x0000000002f46fb0, libserver.so)
void __fastcall CRegistry::WriteInt(CRegistry *const this, const char *key, int value)
{
  ;
}


// CRegistry::ReadString  (line 376, @0x0000000002f46fc0, libserver.so)
const char *__fastcall CRegistry::ReadString(CRegistry *const this, const char *key, const char *defaultValue)
{
  return 0;
}


// CRegistry::WriteString  (line 386, @0x0000000002f46fd0, libserver.so)
void __fastcall CRegistry::WriteString(CRegistry *const this, const char *key, const char *value)
{
  ;
}


// CRegistry::DirectInit  (line 392, @0x0000000002f46fe0, libserver.so)
bool __fastcall CRegistry::DirectInit(CRegistry *const this, const char *subDirectoryUnderValve)
{
  return 1;
}


// CRegistry::Init  (line 401, @0x0000000002f473a0, libserver.so)  // inlines: snprintf
// calls: __snprintf_chk, __stack_chk_fail
// strings: "%s\\Settings"
bool __fastcall CRegistry::Init(CRegistry *const this, const char *platformName)
{
  char subDir[520]; // [rsp+0h] [rbp-220h] BYREF
  unsigned __int64 v5; // [rsp+208h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  __snprintf_chk(subDir, 512, 1, 512, "%s\\Settings", platformName);
  return (*(this->_vptr_IRegistry + 12))(this, subDir);
}


// CRegistry::Shutdown  (line 411, @0x0000000002f46ff0, libserver.so)
void __fastcall CRegistry::Shutdown(CRegistry *const this)
{
  if ( this->m_bValid )
    this->m_bValid = 0;
}


