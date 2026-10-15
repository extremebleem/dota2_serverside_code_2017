
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ClientQuickBuyItemState::Schema_DynamicBinding  (line 1371, @0x000000000269ce40, libserver.so)
// globals: ClientQuickBuyItemState::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall ClientQuickBuyItemState::Schema_DynamicBinding(
        const ClientQuickBuyItemState *const this)
{
  return ClientQuickBuyItemState::s_pSchemaBinding;
}


// CSpeechBubbleInfo::Schema_DynamicBinding  (line 1663, @0x0000000002736c80, libserver.so)
// calls: CSpeechBubbleInfo::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CSpeechBubbleInfo::Schema_DynamicBinding(const CSpeechBubbleInfo *const this)
{
  CSpeechBubbleInfo::Schema_VerifyBindingIsRegistered();
  return CSpeechBubbleInfo::s_pSchemaBinding;
}


// CUnitOrders::operator=  (line 2087, @0x0000000002579650, libserver.so)  // inlines: operator=
// calls: CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::SetCount
// callers: DOTA_ExecuteOrders
CUnitOrders *__fastcall CUnitOrders::operator=(CUnitOrders *const this, __int64 a2)
{
  CCopyableUtlVector<CEntityIndex> *p_m_nUnits; // rdi
  int v5; // r13d
  unsigned __int64 v6; // rdx

  p_m_nUnits = &this->m_nUnits;
  p_m_nUnits[-1].m_Memory.m_nAllocationCount = *a2;
  p_m_nUnits[-1].m_Memory.m_nGrowSize = *(a2 + 4);
  if ( p_m_nUnits != (a2 + 8) )
  {
    v5 = *(a2 + 8);
    CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::SetCount(p_m_nUnits, v5);
    if ( v5 > 0 )
    {
      v6 = 0;
      do
      {
        this->m_nUnits.m_Memory.m_pMemory[v6 / 4].m_Data = *(*(a2 + 16) + v6);
        v6 += 4LL;
      }
      while ( v6 != 4LL * (v5 - 1) + 4 );
    }
  }
  this->m_nOrderType = *(a2 + 32);
  this->m_nTargetIndex.m_Data = *(a2 + 36);
  this->m_nAbilityIndex.m_Data = *(a2 + 40);
  this->m_vPosition.x = *(a2 + 44);
  this->m_vPosition.y = *(a2 + 48);
  this->m_vPosition.z = *(a2 + 52);
  this->m_bQueue = *(a2 + 56);
  return this;
}


// CUnitOrders::~CUnitOrders  (line 2087, @0x000000000296f360, libserver.so)  // inlines: Purge, RemoveAll, ~CCopyableUtlVector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CEntityIndex, int>::Purge
void __fastcall CUnitOrders::~CUnitOrders(CUnitOrders *const this)
{
  bool v2; // zf
  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_nUnits.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_nUnits.m_Memory;
    CUtlMemory<CEntityIndex,int>::Purge(&this->m_nUnits.m_Memory);
    if ( (this->m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIndex,int>::Purge(p_m_Memory);
  }
}


// CUnitOrders::CUnitOrders  (line 2092, @0x00000000025675f0, libserver.so)  // inlines: CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase, Reset, operator=
// callers: DOTA_ExecuteOrders, CDOTA_Bot::ConsiderCourierUsage, CDOTA_BaseNPC::ExecuteResumePreviousMovement, CDOTA_Modifier_Lich_FrostArmor_Autocast::OnAttack, CDOTA_Modifier_PhantomLancer_Juxtapose::OnAttacked, CDOTA_Ability_Huskar_Life_Break::OnProjectileHit, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnProjectileHit_ExtraData, CDOTA_Modifier_Ogre_Magi_Bloodlust_Autocast::OnIntervalThink
void __fastcall CUnitOrders::CUnitOrders(CUnitOrders *const this)
{
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4

  this->m_nUnits.m_Size = 0;
  this->m_nUnits.m_Memory.m_pMemory = 0;
  this->m_nUnits.m_Memory.m_nAllocationCount = 0;
  x = vec3_origin.x;
  this->m_nUnits.m_Memory.m_nGrowSize = 0;
  this->m_nOrderSequenceNumber = 0;
  this->m_vPosition.x = x;
  y = vec3_origin.y;
  this->m_nIssuerPlayerIndex = -1;
  this->m_vPosition.y = y;
  z = vec3_origin.z;
  this->m_nOrderType = 0;
  this->m_nTargetIndex.m_Data = 0;
  this->m_vPosition.z = z;
  this->m_nAbilityIndex.m_Data = 0;
  this->m_bQueue = 0;
}


// CUnitOrders::Reset  (line 2099, @0x0000000002a2a8e0, libserver.so)  // inlines: RemoveAll, operator=
// callers: CDOTA_Modifier_Lich_FrostArmor_Autocast::OnAttack, CDOTA_Modifier_PhantomLancer_Juxtapose::OnAttacked
void __fastcall CUnitOrders::Reset(CUnitOrders *const this)
{
  vec_t x; // xmm0_4

  this->m_nUnits.m_Size = 0;
  this->m_nOrderType = 0;
  this->m_nTargetIndex.m_Data = 0;
  x = vec3_origin.x;
  this->m_nAbilityIndex.m_Data = 0;
  this->m_bQueue = 0;
  this->m_vPosition.x = x;
  this->m_vPosition.y = vec3_origin.y;
  this->m_vPosition.z = vec3_origin.z;
}


