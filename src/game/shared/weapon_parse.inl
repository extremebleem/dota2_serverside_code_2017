
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GameFileWeaponInfo_t::~GameFileWeaponInfo_t  (line 28, @0x000000000213bc40, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~FileWeaponInfo_t
// calls: CUtlVectorBase<WeaponSoundData_t, CUtlMemory<WeaponSoundData_t, int> >::RemoveAll, CUtlVectorBase<WeaponTextureData_t, CUtlMemory<WeaponTextureData_t, int> >::RemoveAll, CUtlString::FreeMemoryBlock, CUtlMemory<WeaponSoundData_t, int>::Purge, CUtlMemory<WeaponTextureData_t, int>::Purge
void __fastcall GameFileWeaponInfo_t::~GameFileWeaponInfo_t(GameFileWeaponInfo_t *const this)
{
  this->_vptr_FileWeaponInfo_t = &off_3FFCFF0;
  CUtlVectorBase<WeaponSoundData_t,CUtlMemory<WeaponSoundData_t,int>>::RemoveAll(&this->m_aShootSounds);
  if ( (this->m_aShootSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<WeaponSoundData_t,int>::Purge(&this->m_aShootSounds.m_Memory);
    if ( (this->m_aShootSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<WeaponSoundData_t,int>::Purge(&this->m_aShootSounds.m_Memory);
  }
  CUtlVectorBase<WeaponTextureData_t,CUtlMemory<WeaponTextureData_t,int>>::RemoveAll(&this->m_aTextureData);
  if ( (this->m_aTextureData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<WeaponTextureData_t,int>::Purge(&this->m_aTextureData.m_Memory);
    if ( (this->m_aTextureData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<WeaponTextureData_t,int>::Purge(&this->m_aTextureData.m_Memory);
  }
  if ( this->m_szAIAddOn.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szAIAddOn);
  if ( this->m_szAmmo2.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szAmmo2);
  if ( this->m_szAmmo1.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szAmmo1);
  if ( this->m_szAnimationPrefix.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szAnimationPrefix);
  if ( this->m_szWorldModel.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szWorldModel);
  if ( this->m_szViewModel.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szViewModel);
  if ( this->m_szPrintName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szPrintName);
  if ( this->m_szClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_szClassName);
}


// GameFileWeaponInfo_t::Schema_DynamicBinding  (line 32, @0x0000000002018f40, libserver.so)
// globals: GameFileWeaponInfo_t::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall GameFileWeaponInfo_t::Schema_DynamicBinding(
        const GameFileWeaponInfo_t *const this)
{
  return GameFileWeaponInfo_t::s_pSchemaBinding;
}


