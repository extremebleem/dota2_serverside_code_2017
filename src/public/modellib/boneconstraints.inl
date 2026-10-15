
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseConstraint::~CBaseConstraint  (line 71, @0x000000000315e0d0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, CUtlMemory<CConstraintTarget, int>::Purge, CUtlMemory<CConstraintSlave, int>::Purge
void __fastcall CBaseConstraint::~CBaseConstraint(CBaseConstraint *const this)
{
  bool v2; // zf
  CUtlString *p_m_name; // rdi
  CUtlVectorBase<CConstraintTarget,CUtlMemory<CConstraintTarget,int> >::CAllocator *p_m_Memory; // r12

  this->m_targets.m_Size = 0;
  v2 = (this->m_targets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CBaseConstraint = &off_47C6F70;
  if ( !v2
    || (p_m_Memory = &this->m_targets.m_Memory,
        CUtlMemory<CConstraintTarget,int>::Purge(&this->m_targets.m_Memory),
        (this->m_targets.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    v2 = (this->m_slaves.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_slaves.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  else
  {
    CUtlMemory<CConstraintTarget,int>::Purge(p_m_Memory);
    v2 = (this->m_slaves.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_slaves.m_Size = 0;
    if ( !v2 )
      goto LABEL_3;
  }
  CUtlMemory<CConstraintSlave,int>::Purge(&this->m_slaves.m_Memory);
  if ( (this->m_slaves.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
  {
LABEL_3:
    p_m_name = &this->m_name;
    if ( this->m_name.m_pString == 0 )
      return;
    goto LABEL_4;
  }
  CUtlMemory<CConstraintSlave,int>::Purge(&this->m_slaves.m_Memory);
  p_m_name = &this->m_name;
  if ( this->m_name.m_pString != 0 )
LABEL_4:
    CUtlString::FreeMemoryBlock(p_m_name);
}


// CBaseConstraint::Schema_DynamicBinding  (line 73, @0x0000000003180050, libserver.so)
// globals: CBaseConstraint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseConstraint::Schema_DynamicBinding(const CBaseConstraint *const this)
{
  return CBaseConstraint::s_pSchemaBinding;
}


// CPointConstraint::Schema_DynamicBinding  (line 107, @0x0000000003180060, libserver.so)
// globals: CPointConstraint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointConstraint::Schema_DynamicBinding(const CPointConstraint *const this)
{
  return CPointConstraint::s_pSchemaBinding;
}


// CPointConstraint::GetConstraintType  (line 115, @0x0000000003180070, libserver.so)
BoneConstraintType_t __fastcall CPointConstraint::GetConstraintType(const CPointConstraint *const this)
{
  return BoneConstraintType_t::BONE_CONSTRAINT_TYPE_POINT;
}


// COrientConstraint::Schema_DynamicBinding  (line 126, @0x0000000003180080, libserver.so)
// globals: COrientConstraint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall COrientConstraint::Schema_DynamicBinding(const COrientConstraint *const this)
{
  return COrientConstraint::s_pSchemaBinding;
}


// COrientConstraint::GetConstraintType  (line 134, @0x0000000003180090, libserver.so)
BoneConstraintType_t __fastcall COrientConstraint::GetConstraintType(const COrientConstraint *const this)
{
  return BoneConstraintType_t::BONE_CONSTRAINT_TYPE_ORIENT;
}


// CAimConstraint::Schema_DynamicBinding  (line 145, @0x00000000031800a0, libserver.so)
// globals: CAimConstraint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAimConstraint::Schema_DynamicBinding(const CAimConstraint *const this)
{
  return CAimConstraint::s_pSchemaBinding;
}


// CAimConstraint::GetConstraintType  (line 157, @0x00000000031800b0, libserver.so)
BoneConstraintType_t __fastcall CAimConstraint::GetConstraintType(const CAimConstraint *const this)
{
  return BoneConstraintType_t::BONE_CONSTRAINT_TYPE_AIM;
}


// CTwistConstraint::Schema_DynamicBinding  (line 170, @0x00000000031800c0, libserver.so)
// globals: CTwistConstraint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTwistConstraint::Schema_DynamicBinding(const CTwistConstraint *const this)
{
  return CTwistConstraint::s_pSchemaBinding;
}


// CTwistConstraint::GetConstraintType  (line 182, @0x00000000031800d0, libserver.so)
BoneConstraintType_t __fastcall CTwistConstraint::GetConstraintType(const CTwistConstraint *const this)
{
  return BoneConstraintType_t::BONE_CONSTRAINT_TYPE_TWIST;
}


// CTiltTwistConstraint::Schema_DynamicBinding  (line 199, @0x00000000031800e0, libserver.so)
// globals: CTiltTwistConstraint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTiltTwistConstraint::Schema_DynamicBinding(
        const CTiltTwistConstraint *const this)
{
  return CTiltTwistConstraint::s_pSchemaBinding;
}


// CTiltTwistConstraint::GetConstraintType  (line 212, @0x00000000031800f0, libserver.so)
BoneConstraintType_t __fastcall CTiltTwistConstraint::GetConstraintType(const CTiltTwistConstraint *const this)
{
  return BoneConstraintType_t::BONE_CONSTRAINT_TYPE_TILT_TWIST;
}


// CMorphConstraint::Schema_DynamicBinding  (line 251, @0x0000000003180100, libserver.so)
// globals: CMorphConstraint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMorphConstraint::Schema_DynamicBinding(const CMorphConstraint *const this)
{
  return CMorphConstraint::s_pSchemaBinding;
}


// CMorphConstraint::GetConstraintType  (line 260, @0x0000000003180110, libserver.so)
BoneConstraintType_t __fastcall CMorphConstraint::GetConstraintType(const CMorphConstraint *const this)
{
  return BoneConstraintType_t::BONE_CONSTRAINT_TYPE_MORPH;
}


