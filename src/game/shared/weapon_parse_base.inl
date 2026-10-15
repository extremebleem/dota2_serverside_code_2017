
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// WeaponTextureData_t::~WeaponTextureData_t  (line 148, @0x0000000002025480, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
// callers: CSchemaUtlVectorManipulator<CUtlVector<WeaponTextureData_t, CUtlMemory<WeaponTextureData_t, int> >, WeaponTextureData_t>::SwapItems
void __fastcall WeaponTextureData_t::~WeaponTextureData_t(WeaponTextureData_t *const this)
{
  if ( this->m_Font.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Font);
  if ( this->m_Sprite.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Sprite);
  if ( this->m_Name.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_Name);
}


// FileWeaponInfo_t::~FileWeaponInfo_t  (line 168, @0x000000000201f7a0, libserver.so)  // inlines: Destruct<WeaponSoundData_t>, Destruct<WeaponTextureData_t>, Element, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~WeaponSoundData_t, ~WeaponTextureData_t
// calls: CUtlString::FreeMemoryBlock, CUtlMemory<WeaponSoundData_t, int>::Purge, CUtlMemory<WeaponTextureData_t, int>::Purge
// callers: CSchemaClassBinding<FileWeaponInfo_t>::Deallocate, CSchemaClassBinding<FileWeaponInfo_t>::DestructInPlace, CSchemaClassBinding<GameFileWeaponInfo_t>::Deallocate, CSchemaClassBinding<GameFileWeaponInfo_t>::DestructInPlace
void __fastcall FileWeaponInfo_t::~FileWeaponInfo_t(FileWeaponInfo_t *const this)
{
  int m_Size; // ebx
  __int64 i; // r13
  CUtlString *v4; // rdi
  bool v5; // zf
  int v6; // r13d
  __int64 j; // r14
  CUtlString *v8; // rbx

  m_Size = this->m_aShootSounds.m_Size;
  this->_vptr_FileWeaponInfo_t = &off_3FFCFF0;
  for ( i = 16LL * m_Size - 16; --m_Size >= 0; i -= 16 )
  {
    v4 = (this->m_aShootSounds.m_Memory.m_pMemory + i);
    if ( v4[1].m_pString != 0 )
      CUtlString::FreeMemoryBlock(v4 + 1);
  }
  v5 = (this->m_aShootSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_aShootSounds.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<WeaponSoundData_t,int>::Purge(&this->m_aShootSounds.m_Memory);
    if ( (this->m_aShootSounds.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<WeaponSoundData_t,int>::Purge(&this->m_aShootSounds.m_Memory);
  }
  v6 = this->m_aTextureData.m_Size;
  for ( j = 48LL * v6 - 48; --v6 >= 0; j -= 48 )
  {
    v8 = (&this->m_aTextureData.m_Memory.m_pMemory->m_Name + j);
    if ( v8[2].m_pString != 0 )
      CUtlString::FreeMemoryBlock(v8 + 2);
    if ( v8[1].m_pString != 0 )
      CUtlString::FreeMemoryBlock(v8 + 1);
    if ( v8->m_pString != 0 )
      CUtlString::FreeMemoryBlock(v8);
  }
  v5 = (this->m_aTextureData.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_aTextureData.m_Size = 0;
  if ( v5 )
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


// FileWeaponInfo_t::Schema_DynamicBinding  (line 173, @0x0000000002139e00, libserver.so)
// calls: FileWeaponInfo_t::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall FileWeaponInfo_t::Schema_DynamicBinding(const FileWeaponInfo_t *const this)
{
  FileWeaponInfo_t::Schema_VerifyBindingIsRegistered();
  return FileWeaponInfo_t::s_pSchemaBinding;
}


