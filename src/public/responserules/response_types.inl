
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ResponseParams::ResponseParams  (line 140, @0x000000000204e760, libserver.so)  // inlines: operator=
// callers: CSpeechScriptBridge::MakeOldResponse
void __fastcall ResponseParams::ResponseParams(ResponseParams *const this)
{
  this->odds = 100;
  this->delay.start.m_storage.rawWord = 0;
  this->delay.range.m_storage.rawWord = 0;
  this->respeakdelay.start.m_storage.rawWord = 0;
  this->respeakdelay.range.m_storage.rawWord = 0;
  this->flags = 0;
  this->weapondelay.start.m_storage.rawWord = 0;
  this->weapondelay.range.m_storage.rawWord = 0;
  this->soundlevel = 0;
  this->predelay.start.m_storage.rawWord = 0;
  this->predelay.range.m_storage.rawWord = 0;
  this->m_pFollowup = 0;
}


// CResponseCriteriaSet::Schema_DynamicBinding  (line 171, @0x000000000310d7e0, libserver.so)
// calls: CResponseCriteriaSet::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CResponseCriteriaSet::Schema_DynamicBinding(
        const CResponseCriteriaSet *const this)
{
  CResponseCriteriaSet::Schema_VerifyBindingIsRegistered();
  return CResponseCriteriaSet::s_pSchemaBinding;
}


// CResponseCriteriaSet::CritEntry_t::LessFunc  (line 280, @0x000000000310d7d0, libserver.so)
bool __fastcall CResponseCriteriaSet::CritEntry_t::LessFunc(
        const CResponseCriteriaSet::CritEntry_t *const lhs,
        const CResponseCriteriaSet::CritEntry_t *const rhs)
{
  return lhs->criterianame.m_Id < rhs->criterianame.m_Id;
}


// CRR_Response::GetMatchScore  (line 364, @0x000000000204e410, libserver.so)
float __fastcall CRR_Response::GetMatchScore(CRR_Response *const this)
{
  return this->m_fMatchScore;
}


// IResponseSystem::~IResponseSystem  (line 417, @0x000000000208eb20, libserver.so)
void __fastcall IResponseSystem::~IResponseSystem(IResponseSystem *const this)
{
  this->_vptr_IResponseSystem = off_3FECD30;
}


// IResponseSystem::~IResponseSystem  (line 417, @0x000000000208f540, libserver.so)  // inlines: ~IResponseSystem
// calls: operator delete
void __fastcall IResponseSystem::~IResponseSystem(IResponseSystem *const this)
{
  this->_vptr_IResponseSystem = off_3FECD30;
  operator delete(this);
}


