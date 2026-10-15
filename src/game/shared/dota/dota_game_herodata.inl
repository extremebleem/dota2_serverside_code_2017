
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAPlayerChallenge::~CDOTAPlayerChallenge  (line 280, @0x00000000024b41f0, libserver.so)  // inlines: ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTAPlayerChallenge::~CSODOTAPlayerChallenge
void __fastcall CDOTAPlayerChallenge::~CDOTAPlayerChallenge(CDOTAPlayerChallenge *const this)
{
  CSODOTAPlayerChallenge *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_40DE2B0;
  CSODOTAPlayerChallenge::~CSODOTAPlayerChallenge(v2);
  *this = off_40DB630;
}


// CDOTAPlayerChallenge::~CDOTAPlayerChallenge  (line 280, @0x00000000024b4230, libserver.so)  // inlines: ~CDOTAPlayerChallenge, ~CProtoBufSharedObject, ~CProtoBufSharedObjectBase, ~CSharedObject
// calls: CSODOTAPlayerChallenge::~CSODOTAPlayerChallenge, operator delete
void __fastcall CDOTAPlayerChallenge::~CDOTAPlayerChallenge(CDOTAPlayerChallenge *const this)
{
  CSODOTAPlayerChallenge *v2; // rdi

  v2 = (this + 8);
  *(v2 - 1) = &off_40DE2B0;
  CSODOTAPlayerChallenge::~CSODOTAPlayerChallenge(v2);
  *this = off_40DB630;
  operator delete(this);
}


// CDOTAPlayerChallenge::BIsKeyLess  (line 331, @0x0000000002497690, libserver.so)
bool __fastcall CDOTAPlayerChallenge::BIsKeyLess(
        const CDOTAPlayerChallenge *const this,
        const GCSDK::CSharedObject *const soRHS)
{
  bool result; // al

  result = 1;
  if ( *(this + 9) <= HIDWORD(soRHS[4]._vptr_CSharedObject) )
    return *(this + 10) > LODWORD(soRHS[5]._vptr_CSharedObject);
  return result;
}


