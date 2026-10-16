// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/dota_item_schema.cpp:1637
class CSchemaAttributeType_HeroStatue : public CSchemaAttributeTypeBase<CAttribute_HeroStatue> {
public:

	CSchemaAttributeType_HeroStatue(CSchemaAttributeType_HeroStatue &);
	CSchemaAttributeType_HeroStatue(const CSchemaAttributeType_HeroStatue &);
	CSchemaAttributeType_HeroStatue();
	virtual void ConvertTypedValueToByteStream(const CAttribute_HeroStatue &, string *);
	virtual void ConvertByteStreamToTypedValue(const string &, CAttribute_HeroStatue *);
	virtual bool BConvertStringToEconAttributeValue(const CEconItemAttributeDefinition *, const char *, attribute_data_union_t *, bool);
	virtual void ConvertEconAttributeValueToString(const CEconItemAttributeDefinition *, const attribute_data_union_t &, string *);
	virtual ~CSchemaAttributeType_HeroStatue();

	// vtable[12] ConvertTypedValueToByteStream
	// vtable[13] ConvertByteStreamToTypedValue
	// vtable[5] BConvertStringToEconAttributeValue
	// vtable[6] ConvertEconAttributeValueToString
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAItemDefinition::AdditionalInfo_t::CopyFrom  (line 41, @0x0000000002e37920, libserver.so)
// calls: CEconSchemaSymbol::operator=
void __fastcall CDOTAItemDefinition::AdditionalInfo_t::CopyFrom(
        CDOTAItemDefinition::AdditionalInfo_t *const this,
        const CDOTAItemDefinition::AdditionalInfo_t *pSource)
{
  CEconSchemaSymbol::operator=(&this->m_symDisplayMsgLocKey, &pSource->m_symDisplayMsgLocKey);
}


// CDOTAItemDefinition::PortraitNode_t::~PortraitNode_t  (line 48, @0x0000000002e37930, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock
void __fastcall CDOTAItemDefinition::PortraitNode_t::~PortraitNode_t(CDOTAItemDefinition::PortraitNode_t *const this)
{
  if ( this->m_resourceName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_resourceName);
}


// CDOTAItemDefinition::CDOTAItemDefinition  (line 60, @0x0000000002e37950, libserver.so)  // inlines: CEconSchemaSymbol, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase
// calls: CEconItemDefinition::CEconItemDefinition
// callers: CDOTAItemSchema::CreateEconItemDefinition
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTAItemDefinition::CDOTAItemDefinition(CDOTAItemDefinition *const this)
{
  uint16 m_Data; // ax

  CEconItemDefinition::CEconItemDefinition(this);
  this->m_pPortraitData = 0;
  this->_vptr_IEconItemDefinition = off_47A0710;  // vptr: CDOTAItemDefinition
  m_Data = INVALID_ITEM_DEF_INDEX.m_Data;
  this->m_symBannerName.u.m_Id = 0;
  this->m_symTournamentURL.u.m_Id = 0;
  this->m_symHeroName.u.m_Id = 0;
  this->m_nPreviewOverrideDefIndex.m_Data = m_Data;
  LOBYTE(m_Data) = *(this + 529);
  this->m_symSlotType.u.m_Id = 0;
  this->m_symTreasureExtraLayoutFile.u.m_Id = 0;
  this->m_vecAdditionalHeroes.m_Size = 0;
  this->m_vecAdditionalHeroes.m_Memory.m_pMemory = 0;
  this->m_vecAdditionalHeroes.m_Memory.m_nAllocationCount = 0;
  *(this + 529) = m_Data & 0xC0 | 0x20;
  this->m_vecAdditionalHeroes.m_Memory.m_nGrowSize = 0;
  this->m_nSlotType = -1;
  this->m_nHeroID = -1;
  this->m_nLeagueID = 0;
  this->m_pPurchaseRequirementInfo = 0;
  this->m_pAutographInfo = 0;
  *(this + 528) = 0;
  this->m_pAdditionalInfo = 0;
  this->m_pCustomizableCourier = 0;
  this->m_eAssociatedEvent = EEvent::EVENT_ID_NONE;
  this->m_unPremiumPointCost = 0;
}


// CDOTAItemDefinition::~CDOTAItemDefinition  (line 89, @0x0000000002e33630, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase, ~PortraitNode_t
// calls: CUtlString::FreeMemoryBlock, operator delete, CEconItemDefinition::~CEconItemDefinition, CUtlMemory<CDOTAItemDefinition::AdditionalHeroes_t, int>::Purge
// callers: CDOTAItemDefinition::~CDOTAItemDefinition
void __fastcall CDOTAItemDefinition::~CDOTAItemDefinition(CDOTAItemDefinition *const this)
{
  CDOTAItemDefinition::PortraitNode_t *m_pPortraitData; // rbx
  CDOTAItemDefinition::PortraitNode_t *m_pNext; // r12
  bool v4; // zf

  this->_vptr_IEconItemDefinition = off_47A0710;  // vptr: CDOTAItemDefinition
  m_pPortraitData = this->m_pPortraitData;
  if ( m_pPortraitData != 0 )
  {
    m_pNext = m_pPortraitData->m_pNext;
    if ( m_pPortraitData->m_resourceName.m_pString == 0 )
      goto LABEL_4;
    while ( 1 )
    {
      CUtlString::FreeMemoryBlock(&m_pPortraitData->m_resourceName);
LABEL_4:
      operator delete(m_pPortraitData);
      if ( m_pNext == 0 )
        break;
      while ( 1 )
      {
        m_pPortraitData = m_pNext;
        v4 = m_pNext->m_resourceName.m_pString == 0;
        m_pNext = m_pNext->m_pNext;
        if ( !v4 )
          break;
        operator delete(m_pPortraitData);
        if ( m_pNext == 0 )
          goto LABEL_7;
      }
    }
  }
LABEL_7:
  operator delete(this->m_pAdditionalInfo);
  operator delete(this->m_pCustomizableCourier);
  operator delete(this->m_pPurchaseRequirementInfo);
  operator delete(this->m_pAutographInfo);
  v4 = (this->m_vecAdditionalHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecAdditionalHeroes.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTAItemDefinition::AdditionalHeroes_t,int>::Purge(&this->m_vecAdditionalHeroes.m_Memory);
    if ( (this->m_vecAdditionalHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTAItemDefinition::AdditionalHeroes_t,int>::Purge(&this->m_vecAdditionalHeroes.m_Memory);
  }
  CEconItemDefinition::~CEconItemDefinition(this);
}


// CDOTAItemDefinition::~CDOTAItemDefinition  (line 89, @0x0000000002e33720, libserver.so)
// calls: CDOTAItemDefinition::~CDOTAItemDefinition, operator delete
void __fastcall CDOTAItemDefinition::~CDOTAItemDefinition(CDOTAItemDefinition *const this)
{
  CDOTAItemDefinition::~CDOTAItemDefinition(this);
  operator delete(this);
}


// CDOTAItemDefinition::BInitFromKVOverride  (line 108, @0x0000000002e4d260, libserver.so)  // inlines: AdditionalInfo_t, AutographInfo_t, CEconSchemaSymbol, CUtlString, CUtlSymbolLarge, EEvent_Parse, GetBool, GetItemClass, GetWithNull, ParseNamedEnum<EEvent>, PortraitNode_t, PurchaseRequirementInfo_t, String, V_isempty, _M_data, _M_dispose, _M_rep, _V_strcmp, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, operator(), ~basic_string
// calls: CEconItemDefinition::BInitFromKVOverride, CDOTAItemDefinition::ExtractHeroUsageFromKVs, CDOTAItemDefinition::InitCustomizableCourierData, KeyValues::GetString, CEconSchemaSymbol::operator=, KeyValues::GetInt, KeyValues::FindKey, operator new, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetName, V_stricmp_fast (26 total)
// strings: "image_banner", "purchase_requires_owning_league_id", "autograph", "preview_override_def_index", "tournament_url", "treasure_extra_layout_file" (33 total)
// globals: INVALID_ITEM_DEF_INDEX, `guard variable for'CDOTAItemDefinition::BInitFromKVOverride(KeyValues *,CEconItemSchema &,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char co, CDOTAItemDefinition::BInitFromKVOverride(KeyValues *,CEconItemSchema &,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator()
bool __fastcall CDOTAItemDefinition::BInitFromKVOverride(
        CDOTAItemDefinition *const this,
        KeyValues *pKVItem,
        CEconItemSchema *const pschema,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool v8; // r13
  const char *String; // rax
  int Int; // r15d
  KeyValues *Key; // r15
  AutographInfo_t *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  const char *v16; // rax
  bool v17; // zf
  __int64 v18; // rcx
  const char *v19; // rdi
  _BYTE *m_Id; // rsi
  const char *v21; // rdi
  _BYTE *v22; // rsi
  bool v23; // zf
  char v24; // al
  __int64 v25; // rcx
  const char *v26; // r15
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // al
  char v31; // dl
  char v32; // al
  const char *v33; // rax
  KeyValues *v34; // rax
  KeyValues *i; // r15
  const char *Name; // rax
  const char *v37; // rax
  CDOTAItemDefinition::PortraitNode_t *v38; // rax
  KeyValues *v39; // r12
  CDOTAItemDefinition::AdditionalInfo_t *v40; // rax
  const char *v41; // rax
  PurchaseRequirementInfo_t *v42; // rax
  const char *v43; // rax
  const char *v44; // rax
  const char *v45; // rax
  google::protobuf::internal *v46; // rax
  char v47; // al
  const std::string *v48; // rdi
  KeyValues *v49; // rax
  KeyValues *v50; // rax
  KeyValues *v51; // r15
  uint32 v52; // eax
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  item_definition_index_t v57; // ax
  int v58; // edx
  int M_p; // ecx
  const char *nFlags; // [rsp+8h] [rbp-68h]
  _BOOL4 nFlagsa; // [rsp+8h] [rbp-68h]
  int nFlagsb; // [rsp+8h] [rbp-68h]
  uint32 nFlagsc; // [rsp+8h] [rbp-68h]
  int unTier; // [rsp+14h] [rbp-5Ch]
  char unTiera; // [rsp+14h] [rbp-5Ch]
  const char *pMaterialNamea; // [rsp+18h] [rbp-58h]
  CDOTAItemSchema *pMaterialName; // [rsp+18h] [rbp-58h]
  char v68; // [rsp+2Ah] [rbp-46h] BYREF
  EEvent v69; // [rsp+2Ch] [rbp-44h] BYREF
  google::protobuf::EnumDescriptor v70; // [rsp+30h] [rbp-40h] BYREF

  v8 = CEconItemDefinition::BInitFromKVOverride(this, pKVItem, pschema, pVecErrors);
  if ( v8 )
  {
    CDOTAItemDefinition::ExtractHeroUsageFromKVs(this, pKVItem, pschema);
    CDOTAItemDefinition::InitCustomizableCourierData(this, pKVItem, pschema);
    String = KeyValues::GetString(pKVItem, "image_banner", "", 0, 0);
    CEconSchemaSymbol::operator=(&this->m_symBannerName, String);
    Int = KeyValues::GetInt(pKVItem, "purchase_requires_owning_league_id", 0);
    if ( Int != 0 )
    {
      v42 = operator new(0x20u);
      v42->m_purchaseRequirementText.u.m_Id = 0;
      v42->m_purchaseRequirementOKText.u.m_Id = 0;
      v42->m_purchaseRequirementOKEvent.u.m_Id = 0;
      this->m_pPurchaseRequirementInfo = v42;
      v42->m_nPurchaseRequiredLeagueID = Int;
      v43 = KeyValues::GetString(pKVItem, "purchase_requirement_prompt_text", "", 0, 0);
      CEconSchemaSymbol::operator=(&this->m_pPurchaseRequirementInfo->m_purchaseRequirementText, v43);
      v44 = KeyValues::GetString(pKVItem, "purchase_requirement_prompt_ok_text", "", 0, 0);
      CEconSchemaSymbol::operator=(&this->m_pPurchaseRequirementInfo->m_purchaseRequirementOKText, v44);
      v45 = KeyValues::GetString(pKVItem, "purchase_requirement_prompt_ok_event", "", 0, 0);
      CEconSchemaSymbol::operator=(&this->m_pPurchaseRequirementInfo->m_purchaseRequirementOKEvent, v45);
    }
    Key = KeyValues::FindKey(pKVItem, "autograph", 0);
    if ( Key != 0 )
    {
      v13 = operator new(8u);
      v13->m_name.u.m_Id = 0;
      this->m_pAutographInfo = v13;
      v14 = KeyValues::GetString(Key, "name", 0, 0, 0);
      CEconSchemaSymbol::operator=(&this->m_pAutographInfo->m_name, v14);
    }
    this->m_nPreviewOverrideDefIndex.m_Data = KeyValues::GetInt(
                                                pKVItem,
                                                "preview_override_def_index",
                                                INVALID_ITEM_DEF_INDEX.m_Data);
    v15 = KeyValues::GetString(pKVItem, "tournament_url", "", 0, 0);
    CEconSchemaSymbol::operator=(&this->m_symTournamentURL, v15);
    v16 = KeyValues::GetString(pKVItem, "treasure_extra_layout_file", 0, 0, 0);
    CEconSchemaSymbol::operator=(&this->m_symTreasureExtraLayoutFile, v16);
    v18 = 19;
    v19 = "dota_item_wearable";
    m_Id = this->m_symItemClassname.u.m_Id;
    do
    {
      if ( v18 == 0 )
        break;
      v17 = *m_Id++ == *v19++;
      --v18;
    }
    while ( v17 );
    v21 = "supply_crate";
    v22 = this->m_symItemClassname.u.m_Id;
    LOBYTE(v18) = v17;
    v24 = (2 * v17) | *(this + 528) & 0xFD;
    v23 = ((2 * v18) | *(this + 528) & 0xFD) == 0;
    v25 = 13;
    *(this + 528) = v24;
    do
    {
      if ( v25 == 0 )
        break;
      v23 = *v22++ == *v21++;
      --v25;
    }
    while ( v23 );
    *(this + 528) = (32 * v23) | v24 & 0xDF;
    v26 = (*(this->_vptr_IEconItemDefinition + 11))(this, v22);
    v27 = (4 * (strcmp(v26, "taunt") == 0)) | *(this + 528) & 0xFB;
    *(this + 528) = v27;
    v28 = (8 * (strcmp(v26, "announcer") == 0)) | v27 & 0xF7;
    *(this + 528) = v28;
    v29 = (16 * (strcmp(v26, "courier") == 0)) | v28 & 0xEF;
    *(this + 528) = v29;
    *(this + 528) = ((strcmp(v26, "hud_skin") == 0) << 6) | v29 & 0xBF;
    v30 = (strcmp(KeyValues::GetString(pKVItem, "prefab", "", 0, 0), "league") == 0) | *(this + 529) & 0xFE;
    v31 = *(this + 528);
    *(this + 529) = v30;
    *(this + 528) = ((strcmp(v26, "loading_screen") == 0) << 7) | v31 & 0x7F;
    v32 = (2 * (strcmp(v26, "weather") == 0)) | v30 & 0xFD;
    *(this + 529) = v32;
    *(this + 529) = (8 * (strcmp(v26, "terrain") == 0)) | v32 & 0xF7;
    *(this + 529) = (16 * (KeyValues::GetInt(pKVItem, "perfect_world_explicit_whitelist", 0) != 0))
                  | *(this + 529) & 0xEF;
    if ( strcmp(KeyValues::GetString(pKVItem, "prefab", "", 0, 0), "treasure_chest") == 0
      && this->m_rtDefCreation > 0x55E4EA7F )
    {
      *(this + 529) |= 0x10u;
    }
    *(this + 528) = (KeyValues::GetInt(pKVItem, "free_cafe_equip", 1) == 0) | *(this + 528) & 0xFE;
    *(this + 529) = (32 * (KeyValues::GetInt(pKVItem, "match_cycle_to_parent", 1) != 0)) | *(this + 529) & 0xDF;
    v33 = KeyValues::GetString(pKVItem, "event_id", "", 0, 0);
    if ( v33 != 0 && *v33 != 0 )
    {
      std::string::string(&v70, v33, &v68);
      v46 = EEvent_descriptor();
      v47 = google::protobuf::internal::ParseNamedEnum(v46, &v70, &v69, &v69);
      if ( v47 != 0 )
        this->m_eAssociatedEvent = v69;
      v48 = v70.name_ - 3;
      if ( &v70.name_[-3] != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create != 0 )
        {
          v58 = _InterlockedExchangeAdd(&v48[2], 0xFFFFFFFF);
        }
        else
        {
          M_p = v70.name_[-1]._M_dataplus._M_p;
          LODWORD(v70.name_[-1]._M_dataplus._M_p) = M_p - 1;
          v58 = M_p;
        }
        if ( v58 <= 0 )
        {
          unTiera = v47;
          std::string::_Rep::_M_destroy(v48, &v69);
          v47 = unTiera;
        }
      }
      if ( v47 != 0 )
      {
        if ( this->m_eAssociatedEvent != EEvent::EVENT_ID_NONE )
          this->m_unPremiumPointCost = KeyValues::GetInt(pKVItem, "premium_point_cost", 0);
      }
      else
      {
        this->m_eAssociatedEvent = EEvent::EVENT_ID_NONE;
      }
    }
    if ( `guard variable for'CDOTAItemDefinition::BInitFromKVOverride(KeyValues *,CEconItemSchema &,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTAItemDefinition::BInitFromKVOverride(KeyValues *,CEconItemSchema &,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym) != 0 )
    {
      CKeySymbol::CKeySymbol(
        &CDOTAItemDefinition::BInitFromKVOverride(KeyValues *,CEconItemSchema &,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym,
        "portraits");
      __cxa_guard_release(&`guard variable for'CDOTAItemDefinition::BInitFromKVOverride(KeyValues *,CEconItemSchema &,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    }
    v34 = KeyValues::FindKey(
            pKVItem,
            CDOTAItemDefinition::BInitFromKVOverride(KeyValues *,CEconItemSchema &,CUtlVector<CUtlString,CUtlMemory<CUtlString,int>> *)::{lambda(char const*)#1}::operator() const(char const*)::s_sym);
    if ( v34 != 0 )
    {
      for ( i = KeyValues::GetFirstTrueSubKey(v34); i != 0; i = KeyValues::GetNextTrueSubKey(i) )
      {
        while ( 1 )
        {
          Name = KeyValues::GetName(i);
          if ( V_stricmp_fast(Name, "icon") != 0 )
          {
            v37 = KeyValues::GetString(i, "PortraitBackgroundTexture", 0, 0, 0);
            if ( v37 != 0 && *v37 != 0 )
              break;
          }
          i = KeyValues::GetNextTrueSubKey(i);
          if ( i == 0 )
            goto LABEL_25;
        }
        pMaterialNamea = v37;
        v38 = operator new(0x10u);
        v38->m_resourceName.m_pString = 0;
        v38->m_pNext = this->m_pPortraitData;
        this->m_pPortraitData = v38;
        CUtlString::operator=(&v38->m_resourceName, pMaterialNamea);
      }
    }
LABEL_25:
    pMaterialName = GEconItemSchema();
    if ( strcmp(KeyValues::GetString(pKVItem, "prefab", "", 0, 0), "dynamic_recipe") == 0 )
    {
      CDOTAItemSchema::AddRecipe(pMaterialName, this);
    }
    else if ( strcmp(KeyValues::GetString(pKVItem, "prefab", "", 0, 0), "league") == 0 )
    {
      v49 = KeyValues::FindKey(pKVItem, "tool", 0);
      if ( v49 != 0 )
      {
        v50 = KeyValues::FindKey(v49, "usage", 0);
        v51 = v50;
        if ( v50 != 0 )
        {
          nFlags = KeyValues::GetString(v50, "tier", "", 0, 0);
          unTier = 1;
          if ( V_stricmp_fast(nFlags, "amateur") != 0 )
          {
            unTier = 2;
            if ( V_stricmp_fast(nFlags, "professional") != 0 )
              unTier = V_stricmp_fast(nFlags, "premium") == 0 ? 3 : 0;
          }
          if ( KeyValues::GetInt(v51, "admin", 0) == 0 && KeyValues::GetInt(v51, "disabled", 0) == 0 )
          {
            v52 = KeyValues::GetInt(v51, "league_id", 0);
            this->m_nLeagueID = v52;
            if ( v52 != 0 )
            {
              nFlagsa = KeyValues::GetInt(v51, "free_to_spectate", 0) != 0;
              v53 = KeyValues::GetInt(v51, "fantasy", 0);
              v54 = nFlagsa;
              if ( v53 != 0 )
                v54 = nFlagsa | 2;
              nFlagsb = v54;
              v55 = KeyValues::GetInt(v51, "drop_items", unTier != 1);
              v56 = nFlagsb;
              if ( v55 != 0 )
                v56 = nFlagsb | 4;
              nFlagsc = v56;
              v57.m_Data = this->GetDefinitionIndex();
              CDOTAItemSchema::AddInfoToLeagueCache(pMaterialName, this->m_nLeagueID, v57, nFlagsc, unTier);
            }
          }
        }
      }
    }
    v39 = KeyValues::FindKey(pKVItem, "additional_info", 0);
    if ( v39 != 0 )
    {
      v40 = operator new(8u);
      v40->m_symDisplayMsgLocKey.u.m_Id = 0;
      this->m_pAdditionalInfo = v40;
      v41 = KeyValues::GetString(v39, "display_msg", 0, 0, 0);
      CEconSchemaSymbol::operator=(&this->m_pAdditionalInfo->m_symDisplayMsgLocKey, v41);
    }
    if ( pVecErrors != 0 )
      return pVecErrors->m_Size == 0;
  }
  return v8;
}


// CDOTAItemDefinition::GetPortraitInfoForModel  (line 293, @0x0000000002e37aa0, libserver.so)
const CDOTAPortraitInfo *__fastcall CDOTAItemDefinition::GetPortraitInfoForModel(
        const CDOTAItemDefinition *const this,
        const char *pszModelName)
{
  return 0;
}


// CDOTAItemDefinition::GetPortraitInfoForEnvironment  (line 310, @0x0000000002e37ab0, libserver.so)
const CDOTAPortraitInfo *__fastcall CDOTAItemDefinition::GetPortraitInfoForEnvironment(
        const CDOTAItemDefinition *const this,
        DOTAPortraitEnvironmentType_t type)
{
  return 0;
}


// CDOTAItemDefinition::IsOlderThan  (line 334, @0x0000000002e37ac0, libserver.so)  // inlines: RTime32TimeCur
// calls: CRTime::RTime32DateAdd
// callers: CDOTAItemDefinition::IsRecent, CDOTAItemDefinition::IsValidForNexonPCBang
bool __fastcall CDOTAItemDefinition::IsOlderThan(const CDOTAItemDefinition *const this, int unDays)
{
  RTime32 m_rtDefCreation; // edi
  bool result; // al

  m_rtDefCreation = this->m_rtDefCreation;
  result = 1;
  if ( m_rtDefCreation != 0 )
    return CRTime::RTime32DateAdd(m_rtDefCreation, unDays, ETimeUnit::k_ETimeUnitDay) < CRTime::sm_nTimeCur;
  return result;
}


// CDOTAItemDefinition::IsRecent  (line 351, @0x0000000002e37af0, libserver.so)
// calls: CDOTAItemDefinition::IsOlderThan
bool __fastcall CDOTAItemDefinition::IsRecent(const CDOTAItemDefinition *const this)
{
  return !CDOTAItemDefinition::IsOlderThan(this, 4);
}


// CDOTAItemDefinition::BuildListOfAllAssociatedLoadoutItems  (line 358, @0x0000000002e44ad0, libserver.so)  // inlines: AddToTail, CopyConstruct<item_definition_index_t>, DoLookup<int>, Element, Find, GetItemSlotsForHero, GetSlotIndexBySlotType, GetStaticDataForItemByDefIndex, GrowMemory, Purge, RemoveAll, operator(), operator[]
// calls: CUtlMemory<item_definition_index_t, int>::Purge, CEconItemDefinition::HasHeroID, CUtlMemory<item_definition_index_t, int>::Grow, CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>, ItemSystem, CEconItemSchema::GetItemDefinition
// local variable allocation has failed, the output may be wrong!
bool __fastcall CDOTAItemDefinition::BuildListOfAllAssociatedLoadoutItems(
        const CDOTAItemDefinition *const this,
        int nHeroID,
        bool bRespectItemSets,
        CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> > *pItems)
{
  __int64 v4; // r8
  __int64 v5; // r9
  bool v8; // zf
  __int64 m_nUsed; // rcx
  int *v10; // rbx
  bundleinfo_t *m_BundleInfo; // r14
  __int64 i; // r15
  CEconItemDefinition *v13; // r13
  __int64 v14; // rax
  int v15; // eax
  uint16 v17; // ax
  __int64 m_Size; // rdx
  int v19; // ecx
  item_definition_index_t *v20; // rdx
  unsigned int v21; // edx
  int v22; // edx
  int v23; // eax
  const CEconItemSetDefinition *m_pItemSetDef; // r13
  const CEconItemSetDefinition *v25; // rdi
  unsigned int v26; // r15d
  item_definition_index_t v27; // r14
  CEconItemSystem *v28; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  int m_pKVItem; // edx
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // edx
  item_definition_index_t *v34; // rax
  __int64 m_nSlotType; // rdx
  __int64 v36; // rax
  uint16 v37; // ax
  __int64 v38; // rbx
  uint16 v39; // r13
  int v40; // edx
  item_definition_index_t *m_pMemory; // rax
  int v42; // edx
  item_definition_index_t *v43; // rcx
  uint16 v44; // [rsp+Ch] [rbp-44h]
  CUtlVectorBase<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >::CAllocator *p_m_Memory; // [rsp+10h] [rbp-40h]
  _BOOL4 v46; // [rsp+18h] [rbp-38h]
  int v47; // [rsp+18h] [rbp-38h]
  unsigned int v48; // [rsp+18h] [rbp-38h]
  int v49; // [rsp+18h] [rbp-38h]
  int nCounta; // [rsp+1Ch] [rbp-34h]

  v5 = bRespectItemSets;
  v8 = (pItems->m_Memory.m_nGrowSize & 0xC0000000) == 0;
  pItems->m_Size = 0;
  p_m_Memory = &pItems->m_Memory;
  if ( v8 )
  {
    v46 = bRespectItemSets;
    CUtlMemory<item_definition_index_t,int>::Purge(&pItems->m_Memory);
    v5 = v46;
  }
  m_nUsed = stru_4D583D0.m_nUsed;
  v10 = 0;
  if ( stru_4D583D0.m_nUsed != 0 )
  {
    v48 = v5;
    v21 = 33 * (((4097 * nHeroID + 2127912214) >> 19) ^ (4097 * nHeroID + 2127912214) ^ 0xC761C23C);
    v22 = 9 * ((v21 - 369570787) ^ ((v21 + 374761393) << 9)) - 42973499;
    v23 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
            &stru_4D583D0,
            nHeroID,
            HIWORD(v22) ^ v22 ^ 0xB55A4F09,
            nHeroID);
    v5 = v48;
    if ( v23 != -1 )
    {
      m_BundleInfo = this->m_BundleInfo;
      v10 = &stru_4D583D0.m_table.m_pMemory[v23].data[2];
      if ( m_BundleInfo == 0 )
        goto LABEL_20;
LABEL_5:
      for ( i = 0; m_BundleInfo->vecItemDefs.m_Size > i; ++i )
      {
        while ( 1 )
        {
          v13 = m_BundleInfo->vecItemDefs.m_Memory.m_pMemory[i];
          if ( CEconItemDefinition::HasHeroID(v13, nHeroID) )
          {
            v14 = 0;
            while ( LODWORD(v13[1].m_pKVItem) != v10[v14 + 32] )
            {
              if ( ++v14 == 16 )
                goto LABEL_10;
            }
            v17 = v13->GetDefinitionIndex();
            m_Size = pItems->m_Size;
            v19 = pItems->m_Size;
            if ( m_Size == pItems->m_Memory.m_nAllocationCount )
            {
              v44 = v17;
              v47 = pItems->m_Size;
              CUtlMemory<item_definition_index_t,int>::Grow(p_m_Memory, 1);
              v19 = pItems->m_Size;
              v17 = v44;
              m_Size = v47;
            }
            pItems->m_Size = v19 + 1;
            v20 = &pItems->m_Memory.m_pMemory[m_Size];
            if ( v20 != 0 )
              break;
          }
LABEL_10:
          if ( m_BundleInfo->vecItemDefs.m_Size <= ++i )
            goto LABEL_11;
        }
        v20->m_Data = v17;
      }
      goto LABEL_11;
    }
  }
  m_BundleInfo = this->m_BundleInfo;
  if ( m_BundleInfo != 0 )
    goto LABEL_5;
LABEL_20:
  m_pItemSetDef = this->m_pItemSetDef;
  if ( m_pItemSetDef != 0 && v5 != 0 )
  {
    v25 = this->m_pItemSetDef;
    v26 = 0;
    nCounta = (*(m_pItemSetDef->_vptr_IEconItemSetDefinition + 4))(v25);
    if ( nCounta > 0 )
    {
      do
      {
        while ( 1 )
        {
          v27.m_Data = (*(m_pItemSetDef->_vptr_IEconItemSetDefinition + 5))(m_pItemSetDef, v26);
          v28 = ItemSystem();
          ItemDefinition = CEconItemSchema::GetItemDefinition(&v28->m_itemSchema, v27, 0);
          if ( ItemDefinition != 0 )
          {
            m_pKVItem = ItemDefinition[1].m_pKVItem;
            v31 = 0;
            while ( m_pKVItem != v10[v31 + 32] )
            {
              if ( ++v31 == 16 )
                goto LABEL_27;
            }
            v32 = pItems->m_Size;
            v33 = pItems->m_Size;
            if ( v32 == pItems->m_Memory.m_nAllocationCount )
            {
              v49 = pItems->m_Size;
              CUtlMemory<item_definition_index_t,int>::Grow(p_m_Memory, 1);
              v33 = pItems->m_Size;
              v32 = v49;
            }
            pItems->m_Size = v33 + 1;
            v34 = &pItems->m_Memory.m_pMemory[v32];
            if ( v34 != 0 )
              break;
          }
LABEL_27:
          if ( ++v26 == nCounta )
            goto LABEL_11;
        }
        ++v26;
        v34->m_Data = v27.m_Data;
      }
      while ( v26 != nCounta );
    }
  }
  else
  {
    m_nSlotType = this->m_nSlotType;
    v36 = 0;
    while ( m_nSlotType != v10[v36 + 32] )
    {
      if ( ++v36 == 16 )
        goto LABEL_11;
    }
    v37 = (*this->_vptr_IEconItemDefinition)(this, *&nHeroID, m_nSlotType, m_nUsed, v4, v5);
    v38 = pItems->m_Size;
    v39 = v37;
    v40 = pItems->m_Size;
    if ( v38 == pItems->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<item_definition_index_t,int>::Grow(p_m_Memory, 1);
      v40 = pItems->m_Size;
    }
    m_pMemory = pItems->m_Memory.m_pMemory;
    v42 = v40 + 1;
    pItems->m_Size = v42;
    v43 = &m_pMemory[v38];
    if ( v43 == 0 )
    {
      v15 = v42;
      return v15 > 0;
    }
    v43->m_Data = v39;
  }
LABEL_11:
  v15 = pItems->m_Size;
  return v15 > 0;
}


// CDOTAItemDefinition::GetLeagueIDRequiredForPurchase  (line 438, @0x0000000002e37b10, libserver.so)
uint32 __fastcall CDOTAItemDefinition::GetLeagueIDRequiredForPurchase(const CDOTAItemDefinition *const this)
{
  PurchaseRequirementInfo_t *m_pPurchaseRequirementInfo; // rax

  m_pPurchaseRequirementInfo = this->m_pPurchaseRequirementInfo;
  if ( m_pPurchaseRequirementInfo != 0 )
    return m_pPurchaseRequirementInfo->m_nPurchaseRequiredLeagueID;
  else
    return 0;
}


// CDOTAItemDefinition::GetPurchaseRequirementInfo  (line 443, @0x0000000002e37b30, libserver.so)
const PurchaseRequirementInfo_t *__fastcall CDOTAItemDefinition::GetPurchaseRequirementInfo(
        const CDOTAItemDefinition *const this)
{
  return this->m_pPurchaseRequirementInfo;
}


// CDOTAItemDefinition::GetAutographInfo  (line 448, @0x0000000002e37b40, libserver.so)
const AutographInfo_t *__fastcall CDOTAItemDefinition::GetAutographInfo(const CDOTAItemDefinition *const this)
{
  return this->m_pAutographInfo;
}


// CDOTAItemDefinition::GetPreviewOverrideDefIndex  (line 453, @0x0000000002e37b50, libserver.so)
item_definition_index_t __fastcall CDOTAItemDefinition::GetPreviewOverrideDefIndex(
        const CDOTAItemDefinition *const this)
{
  return this->m_nPreviewOverrideDefIndex.m_Data;
}


// CDOTAItemDefinition::IsPreviewableInStore  (line 461, @0x0000000002e33450, libserver.so)  // inlines: IsAnnouncer, IsCourier, IsHUDSkin, IsWearable, IsWeather
bool __fastcall CDOTAItemDefinition::IsPreviewableInStore(const CDOTAItemDefinition *const this)
{
  char v1; // dl
  bool result; // al
  bundleinfo_t *m_BundleInfo; // r13
  __int64 v4; // rbx
  int v5; // r12d
  __int64 v6; // rdi

  v1 = *(this + 528);
  result = (v1 & 0x40) != 0;
  if ( (v1 & 0x40) == 0 )
  {
    if ( v1 < 0 )
      return result;
    result = (*(this + 529) & 2) != 0;
    if ( (*(this + 529) & 2) == 0 )
    {
      if ( (*(this + 529) & 8) == 0 )
      {
        result = (v1 & 2) != 0;
        if ( (v1 & 2) == 0 )
        {
          result = (v1 & 0x10) != 0;
          if ( (v1 & 0x10) == 0 )
          {
            result = (v1 & 8) != 0;
            if ( (v1 & 8) == 0 )
            {
              m_BundleInfo = this->m_BundleInfo;
              if ( m_BundleInfo != 0 && (v4 = 0, v5 = 0, m_BundleInfo->vecItemDefs.m_Size > 0) )
              {
                while ( 1 )
                {
                  v6 = *(m_BundleInfo->vecItemDefs.m_Memory.m_pMemory + v4);
                  if ( v6 != 0 )
                  {
                    result = (*(*v6 + 224LL))(v6);
                    if ( result )
                      break;
                  }
                  ++v5;
                  v4 += 8;
                  if ( v5 >= m_BundleInfo->vecItemDefs.m_Size )
                    return 0;
                }
              }
              else
              {
                return 0;
              }
            }
          }
        }
      }
      return result;
    }
  }
  return 0;
}


// CDOTAItemDefinition::GetStoreItemTypeName  (line 492, @0x0000000002e37b60, libserver.so)  // inlines: IsWearable
// callers: CDOTAItemDefinition::GetStoreItemTypeNameID
// strings: "#DOTA_WearableType_Wearable"
const char *__fastcall CDOTAItemDefinition::GetStoreItemTypeName(const CDOTAItemDefinition *const this)
{
  char v1; // al

  v1 = *(this + 528);
  if ( (v1 & 2) == 0 || (v1 & 4) != 0 || (v1 & 8) != 0 || (v1 & 0x10) != 0 )
    return (*(this->_vptr_IEconItemDefinition + 3))(this);
  else
    return "#DOTA_WearableType_Wearable";
}


// CDOTAItemDefinition::GetStoreItemTypeNameID  (line 501, @0x0000000002e37ba0, libserver.so)  // inlines: CRC32_ProcessSingleBuffer, V_strlen
// calls: CDOTAItemDefinition::GetStoreItemTypeName, strlen, CRC32_Init, CRC32_ProcessBuffer, CRC32_Final
uint32 __fastcall CDOTAItemDefinition::GetStoreItemTypeNameID(const CDOTAItemDefinition *const this)
{
  const char *StoreItemTypeName; // rax
  const char *v2; // r12
  int v3; // r13d
  CRC32_t pulCRC[9]; // [rsp+Ch] [rbp-24h] BYREF

  StoreItemTypeName = CDOTAItemDefinition::GetStoreItemTypeName(this);
  v2 = StoreItemTypeName;
  if ( StoreItemTypeName != 0 )
    v3 = strlen(StoreItemTypeName);
  else
    v3 = 0;
  CRC32_Init(pulCRC);
  CRC32_ProcessBuffer(pulCRC, v2, v3);
  CRC32_Final(pulCRC);
  return pulCRC[0];
}


// CDOTAItemDefinition::GetNumItemHeroes  (line 511, @0x0000000002e30700, libserver.so)
uint32 __fastcall CDOTAItemDefinition::GetNumItemHeroes(const CDOTAItemDefinition *const this)
{
  return this->m_vecAdditionalHeroes.m_Size + 1;
}


// CDOTAItemDefinition::GetItemHeroID  (line 519, @0x0000000002e31e00, libserver.so)  // inlines: operator[]
int __fastcall CDOTAItemDefinition::GetItemHeroID(const CDOTAItemDefinition *const this, uint32 unIndex)
{
  if ( unIndex != 0 )
    return this->m_vecAdditionalHeroes.m_Memory.m_pMemory[unIndex - 1].m_nHeroID;
  else
    return this->m_nHeroID;
}


// CDOTAItemDefinition::GetItemHeroName  (line 530, @0x0000000002e37c00, libserver.so)  // inlines: Get, String, operator[]
// callers: dota_create_bot_wearing_set, dota_create_bot_wearing_item, CDOTAItemDefinition::GetItemHeroForHeroID
const char *__fastcall CDOTAItemDefinition::GetItemHeroName(const CDOTAItemDefinition *const this, uint32 unIndex)
{
  const char *result; // rax
  CDOTAItemDefinition::AdditionalHeroes_t *v3; // rsi

  if ( unIndex != 0 )
  {
    result = "";
    v3 = &this->m_vecAdditionalHeroes.m_Memory.m_pMemory[unIndex - 1];
    if ( v3->m_symHeroName.u.m_Id != 0 )
      return v3->m_symHeroName.u.m_Id;
  }
  else
  {
    result = "";
    if ( this->m_symHeroName.u.m_Id != 0 )
      return this->m_symHeroName.u.m_pAsString;
  }
  return result;
}


// CDOTAItemDefinition::GetItemHeroForHeroID  (line 538, @0x0000000002e37c50, libserver.so)  // inlines: Get, String
// calls: CDOTAItemDefinition::GetItemHeroName
// strings: "multiple_heroes"
const char *__fastcall CDOTAItemDefinition::GetItemHeroForHeroID(const CDOTAItemDefinition *const this, int nHeroID)
{
  int v4; // eax
  int v5; // r14d
  uint32 v6; // ebx
  const char *result; // rax

  v4 = (*(this->_vptr_IEconItemDefinition + 26))(this);
  v5 = v4;
  if ( nHeroID < 0 )
  {
    result = "multiple_heroes";
    if ( v5 <= 1 )
    {
      result = "";
      if ( this->m_symHeroName.u.m_Id != 0 )
        return this->m_symHeroName.u.m_pAsString;
    }
  }
  else
  {
    v6 = 0;
    if ( v4 > 0 )
    {
      while ( nHeroID != (*(this->_vptr_IEconItemDefinition + 27))(this, v6) )
      {
        if ( v5 == ++v6 )
          return "";
      }
      return CDOTAItemDefinition::GetItemHeroName(this, v6);
    }
    else
    {
      return "";
    }
  }
  return result;
}


// CDOTAItemDefinition::IsTreasureChest  (line 558, @0x0000000002e37cf0, libserver.so)  // inlines: _V_strcmp
// callers: CDOTAItemDefinition::HasOrContainsItemForHeroID
// strings: "treasure_chest"
bool __fastcall CDOTAItemDefinition::IsTreasureChest(const CDOTAItemDefinition *const this)
{
  const char *v1; // rax

  v1 = (*(this->_vptr_IEconItemDefinition + 1))(this);
  return v1 != 0 && strcmp(v1, "treasure_chest") == 0;
}


// CDOTAItemDefinition::GetTreasureExtraLayoutFile  (line 564, @0x0000000002e37d20, libserver.so)  // inlines: Get, String
const char *__fastcall CDOTAItemDefinition::GetTreasureExtraLayoutFile(const CDOTAItemDefinition *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_symTreasureExtraLayoutFile.u.m_Id != 0 )
    return this->m_symTreasureExtraLayoutFile.u.m_pAsString;
  return result;
}


// CDOTAItemDefinition::HasOrContainsItemForHeroID  (line 570, @0x0000000002e3efa0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetTypedRef, operator const CEconItemAttributeDefinition*, ~CUtlVector
// calls: CEconItemDefinition::HasHeroID, CDOTAItemDefinition::IsTreasureChest, __cxa_guard_acquire, CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle, __cxa_guard_release, __cxa_atexit, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, FindAttribute_UnsafeBitwiseCast<CAttribute_String, char const*, CDOTAItemDefinition>, GetItemSchema, CEconItemSchema::GetLootListByName, __dynamic_cast (15 total)
// strings: "treasure loot list"
// globals: `guard variable for'CDOTAItemDefinition::HasOrContainsItemForHeroID(int)::pAttrDef_TreasureLootList, CDOTAItemDefinition::HasOrContainsItemForHeroID(int)::pAttrDef_TreasureLootList, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle(), `typeinfo for'CDOTAItemDefinition
bool __fastcall CDOTAItemDefinition::HasOrContainsItemForHeroID(const CDOTAItemDefinition *const this, int nHeroID)
{
  bool HasHeroID; // r13
  bundleinfo_t *m_BundleInfo; // r12
  __int64 v7; // rbx
  CEconItemSchema *v8; // rax
  const CEconItemAttributeDefinition *m_pRef; // rsi
  uint32 m_unResetCount; // r12d
  const char *m_szName; // r13
  CEconItemSchema *v12; // rax
  const CEconItemAttributeDefinition *AttributeDefinitionByName; // rax
  const char *v14; // rbx
  GameItemSchema_t *ItemSchema; // rax
  const CEconLootListDefinition *LootListByName; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // r12
  const CEconItemDefinition *v19; // rdi
  const CEconItemDefinition *m_pItemDef; // rdi
  const char *pszLootList; // [rsp+8h] [rbp-58h] BYREF
  CUtlVector<rolled_item_defs_t,CUtlMemory<rolled_item_defs_t,int> > vecItems; // [rsp+10h] [rbp-50h] BYREF

  HasHeroID = CEconItemDefinition::HasHeroID(this, nHeroID);
  if ( HasHeroID )
    return 1;
  if ( (*(this->_vptr_IEconItemDefinition + 16))(this) != 0 )
  {
    m_BundleInfo = this->m_BundleInfo;
    if ( m_BundleInfo != 0 && m_BundleInfo->vecItemDefs.m_Size > 0 )
    {
      v7 = 0;
      while ( !CEconItemDefinition::HasHeroID(m_BundleInfo->vecItemDefs.m_Memory.m_pMemory[v7], nHeroID) )
      {
        if ( m_BundleInfo->vecItemDefs.m_Size <= ++v7 )
          return HasHeroID;
      }
      return 1;
    }
  }
  else if ( CDOTAItemDefinition::IsTreasureChest(this) )
  {
    if ( `guard variable for'CDOTAItemDefinition::HasOrContainsItemForHeroID(int)::pAttrDef_TreasureLootList == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTAItemDefinition::HasOrContainsItemForHeroID(int)::pAttrDef_TreasureLootList) != 0 )
    {
      CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle(
        &CDOTAItemDefinition::HasOrContainsItemForHeroID(int)const::pAttrDef_TreasureLootList,
        "treasure loot list");
      __cxa_guard_release(&`guard variable for'CDOTAItemDefinition::HasOrContainsItemForHeroID(int)::pAttrDef_TreasureLootList);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &CDOTAItemDefinition::HasOrContainsItemForHeroID(int)const::pAttrDef_TreasureLootList,
        &_dso_handle);
    }
    if ( CDOTAItemDefinition::HasOrContainsItemForHeroID(int)const::pAttrDef_TreasureLootList.m_szName != 0 )
    {
      v8 = GEconItemSchema();
      m_pRef = CDOTAItemDefinition::HasOrContainsItemForHeroID(int)const::pAttrDef_TreasureLootList.m_pRef;
      m_unResetCount = v8->m_unResetCount;
      if ( m_unResetCount != CDOTAItemDefinition::HasOrContainsItemForHeroID(int)const::pAttrDef_TreasureLootList.m_unSchemaGeneration )
      {
        m_szName = CDOTAItemDefinition::HasOrContainsItemForHeroID(int)const::pAttrDef_TreasureLootList.m_szName;
        v12 = GEconItemSchema();
        AttributeDefinitionByName = CEconItemSchema::GetAttributeDefinitionByName(v12, m_szName);
        CDOTAItemDefinition::HasOrContainsItemForHeroID(int)const::pAttrDef_TreasureLootList.m_unSchemaGeneration = m_unResetCount;
        m_pRef = AttributeDefinitionByName;
        CDOTAItemDefinition::HasOrContainsItemForHeroID(int)const::pAttrDef_TreasureLootList.m_pRef = AttributeDefinitionByName;
      }
    }
    else
    {
      m_pRef = 0;
    }
    if ( FindAttribute_UnsafeBitwiseCast<CAttribute_String,char const*,CDOTAItemDefinition>(this, m_pRef, &pszLootList)
      && (v14 = pszLootList,
          ItemSchema = GetItemSchema(),
          (LootListByName = CEconItemSchema::GetLootListByName(ItemSchema, v14, 0)) != 0) )
    {
      vecItems.m_Size = 0;
      vecItems.m_Memory.m_pMemory = 0;
      vecItems.m_Memory.m_nAllocationCount = 0;
      vecItems.m_Memory.m_nGrowSize = 0;
      (*(LootListByName->_vptr_IEconLootListDefinition + 23))(LootListByName, &vecItems, 1);
      if ( vecItems.m_Size <= 0 )
      {
LABEL_28:
        HasHeroID = 0;
        CUtlVectorBase<rolled_item_defs_t,CUtlMemory<rolled_item_defs_t,int>>::~CUtlVectorBase(&vecItems);
      }
      else
      {
        v17 = 0;
        v18 = 16 * (3LL * (vecItems.m_Size - 1) + 3);
        while ( 1 )
        {
          m_pItemDef = vecItems.m_Memory.m_pMemory[v17 / 0x30].m_pItemDef;
          v19 = m_pItemDef != 0
              ? __dynamic_cast(m_pItemDef, &`typeinfo for'CEconItemDefinition, &`typeinfo for'CDOTAItemDefinition, 0)
              : 0LL;
          HasHeroID = CEconItemDefinition::HasHeroID(v19, nHeroID);
          if ( HasHeroID )
            break;
          v17 += 48LL;
          if ( v17 == v18 )
            goto LABEL_28;
        }
        CUtlVectorBase<rolled_item_defs_t,CUtlMemory<rolled_item_defs_t,int>>::~CUtlVectorBase(&vecItems);
      }
    }
    else
    {
      return 0;
    }
  }
  return HasHeroID;
}


// CDOTAItemDefinition::ExtractHeroUsageFromKVs  (line 625, @0x0000000002e45130, libserver.so)  // inlines: AddToTail, AdditionalHeroes_t, CEconSchemaSymbol, CUtlSymbolLarge, Construct<CDOTAItemDefinition::AdditionalHeroes_t>, Element, GetBool, GetDOTASlotType, GetHeroesKeyValues, GrowMemory, IsAddOnGame, _V_strcmp, operator[]
// calls: KeyValues::GetString, CEconSchemaSymbol::operator=, KeyValues::GetInt, KeyValues::FindKey, DOTAGameManager, KeyValues::GetFirstTrueSubKey, KeyValues::GetNextTrueSubKey, KeyValues::GetName, strcmp, CUtlMemory<CDOTAItemDefinition::AdditionalHeroes_t, int>::Grow, KeyValues::GetFirstSubKey, KeyValues::GetNextKey (13 total)
// callers: CDOTAItemDefinition::BInitFromKVOverride, CDOTAItemDefinition::BInitFromTestItemKVs
// strings: "player_loadout", "used_by_heroes"
// globals: GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings
void __fastcall CDOTAItemDefinition::ExtractHeroUsageFromKVs(
        CDOTAItemDefinition *const this,
        KeyValues *pKVItem,
        CEconItemSchema *const pSchema)
{
  const char *String; // rax
  KeyValues *Key; // rax
  const KeyValues *v7; // r12
  CDOTAGameManager *v8; // rax
  KeyValues *m_pkvAddOnHeroes; // rdi
  KeyValues *FirstTrueSubKey; // r12
  char v11; // r13
  int Int; // r15d
  const char *Name; // rax
  int m_Size; // ecx
  int v15; // esi
  __int64 v16; // rdi
  CDOTAItemDefinition::AdditionalHeroes_t *v17; // rcx
  CDOTAItemDefinition::AdditionalHeroes_t *v18; // rcx
  const char *v19; // r13
  __int64 v20; // r12
  KeyValues *FirstSubKey; // r12
  int v22; // r13d
  const char *v23; // r14
  CDOTAGameManager *v24; // rax
  int HeroIDByName; // eax
  int v26; // edx
  int v27; // ecx
  __int64 v28; // rdi
  CDOTAItemDefinition::AdditionalHeroes_t *v29; // rdx
  CDOTAItemDefinition::AdditionalHeroes_t *v30; // rdx
  int v31; // [rsp+Ch] [rbp-44h]
  int v32; // [rsp+Ch] [rbp-44h]
  const char *pszHeroName; // [rsp+10h] [rbp-40h]
  int pszHeroNamea; // [rsp+10h] [rbp-40h]

  String = KeyValues::GetString(pKVItem, "item_slot", 0, 0, 0);
  CEconSchemaSymbol::operator=(&this->m_symSlotType, String);
  if ( this->m_symSlotType.u.m_Id != 0 )
  {
    v19 = (*(this->_vptr_IEconItemDefinition + 11))(this);
    if ( v19 != 0 )
    {
      v20 = 0;
      while ( strcmp(*(&GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings + v20), v19) != 0 )
      {
        if ( ++v20 == 45 )
          goto LABEL_28;
      }
    }
    else
    {
LABEL_28:
      LODWORD(v20) = -1;
    }
    this->m_nSlotType = v20;
  }
  if ( KeyValues::GetInt(pKVItem, "player_loadout", 0) != 0 )
  {
    this->m_nHeroID = 1000;
  }
  else
  {
    Key = KeyValues::FindKey(pKVItem, "used_by_heroes", 0);
    v7 = Key;
    if ( Key != 0 )
    {
      if ( KeyValues::FindKey(Key, "all", 0) != 0 )
      {
        v8 = DOTAGameManager();
        if ( v8->m_bCustomGame || v8->m_bEventGame )
          m_pkvAddOnHeroes = v8->m_pkvAddOnHeroes;
        else
          m_pkvAddOnHeroes = v8->m_pkvHeroes;
        if ( m_pkvAddOnHeroes != 0 )
        {
          FirstTrueSubKey = KeyValues::GetFirstTrueSubKey(m_pkvAddOnHeroes);
          if ( FirstTrueSubKey != 0 )
          {
            v11 = 0;
            do
            {
              Int = KeyValues::GetInt(FirstTrueSubKey, "HeroID", -1);
              if ( Int >= 0 )
              {
                Name = KeyValues::GetName(FirstTrueSubKey);
                if ( v11 != 0 )
                {
                  m_Size = this->m_vecAdditionalHeroes.m_Size;
                  v15 = m_Size;
                  if ( m_Size == this->m_vecAdditionalHeroes.m_Memory.m_nAllocationCount )
                  {
                    v31 = this->m_vecAdditionalHeroes.m_Size;
                    pszHeroName = Name;
                    CUtlMemory<CDOTAItemDefinition::AdditionalHeroes_t,int>::Grow(
                      &this->m_vecAdditionalHeroes.m_Memory,
                      1);
                    v15 = this->m_vecAdditionalHeroes.m_Size;
                    m_Size = v31;
                    Name = pszHeroName;
                  }
                  v16 = m_Size;
                  this->m_vecAdditionalHeroes.m_Size = v15 + 1;
                  v17 = &this->m_vecAdditionalHeroes.m_Memory.m_pMemory[v16];
                  if ( v17 != 0 )
                  {
                    v17->m_symHeroName.u.m_Id = 0;
                    v18 = &this->m_vecAdditionalHeroes.m_Memory.m_pMemory[v16];
                  }
                  else
                  {
                    v18 = 0;
                  }
                  v18->m_nHeroID = Int;
                  CEconSchemaSymbol::operator=(&this->m_vecAdditionalHeroes.m_Memory.m_pMemory[v16].m_symHeroName, Name);
                }
                else
                {
                  this->m_nHeroID = Int;
                  CEconSchemaSymbol::operator=(&this->m_symHeroName, Name);
                  v11 = 1;
                }
              }
              FirstTrueSubKey = KeyValues::GetNextTrueSubKey(FirstTrueSubKey);
            }
            while ( FirstTrueSubKey != 0 );
          }
        }
      }
      else
      {
        FirstSubKey = KeyValues::GetFirstSubKey(v7);
        if ( FirstSubKey != 0 )
        {
          v22 = 0;
          do
          {
            v23 = KeyValues::GetName(FirstSubKey);
            v24 = DOTAGameManager();
            HeroIDByName = CDOTAGameManager::GetHeroIDByName(v24, v23);
            if ( v22 != 0 )
            {
              v26 = this->m_vecAdditionalHeroes.m_Size;
              v27 = v26;
              if ( v26 == this->m_vecAdditionalHeroes.m_Memory.m_nAllocationCount )
              {
                v32 = this->m_vecAdditionalHeroes.m_Size;
                pszHeroNamea = HeroIDByName;
                CUtlMemory<CDOTAItemDefinition::AdditionalHeroes_t,int>::Grow(&this->m_vecAdditionalHeroes.m_Memory, 1);
                v27 = this->m_vecAdditionalHeroes.m_Size;
                v26 = v32;
                HeroIDByName = pszHeroNamea;
              }
              v28 = v26;
              this->m_vecAdditionalHeroes.m_Size = v27 + 1;
              v29 = &this->m_vecAdditionalHeroes.m_Memory.m_pMemory[v28];
              if ( v29 != 0 )
              {
                v29->m_symHeroName.u.m_Id = 0;
                v30 = &this->m_vecAdditionalHeroes.m_Memory.m_pMemory[v28];
              }
              else
              {
                v30 = 0;
              }
              v30->m_nHeroID = HeroIDByName;
              CEconSchemaSymbol::operator=(&this->m_vecAdditionalHeroes.m_Memory.m_pMemory[v28].m_symHeroName, v23);
            }
            else
            {
              this->m_nHeroID = HeroIDByName;
              CEconSchemaSymbol::operator=(&this->m_symHeroName, v23);
            }
            ++v22;
            FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
          }
          while ( FirstSubKey != 0 );
        }
      }
    }
  }
}


// CDOTAItemDefinition::InitCustomizableCourierData  (line 720, @0x0000000002e4b0f0, libserver.so)  // inlines: CEconSchemaSymbol, CUtlSymbolLarge, GetBool, courier_wearable_t, customizable_courier_t
// calls: KeyValues::FindKey, KeyValues::GetFirstTrueSubKey, CEconSchemaSymbol::operator=, KeyValues::GetName, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, CDOTAItemSchema::AddCustomizableCourier, KeyValues::GetNextTrueSubKey, KeyValues::GetString, KeyValues::GetInt, CDOTAItemSchema::AddCourierWearable, operator new
// callers: CDOTAItemDefinition::BInitFromKVOverride
// strings: "courier_slots", "courier_wearable"
void __fastcall CDOTAItemDefinition::InitCustomizableCourierData(
        CDOTAItemDefinition *const this,
        KeyValues *pKVItem,
        CEconItemSchema *const pSchema)
{
  KeyValues *Key; // rbx
  KeyValues *i; // r13
  int j; // ebx
  __int64 v7; // rdx
  int v8; // r15d
  const char *Name; // rax
  KeyValues *FirstSubKey; // rbx
  const char *v11; // rax
  KeyValues *v12; // rax
  KeyValues *v13; // rbx
  const char *String; // rax
  const char *v15; // rax
  item_definition_index_t v16; // ax
  customizable_courier_t *v17; // rax
  customizable_courier_t *m_Slots; // rdx
  courier_wearable_t courierWearable; // [rsp+10h] [rbp-50h] BYREF

  Key = KeyValues::FindKey(pKVItem, "courier_slots", 0);
  if ( Key != 0 )
  {
    if ( this->m_pCustomizableCourier == 0 )
    {
      v17 = operator new(0x88u);
      v17->m_symCourier.u.m_Id = 0;
      m_Slots = v17->m_Slots;
      do
      {
        m_Slots->m_symCourier.u.m_Id = 0;
        m_Slots = (m_Slots + 8);
      }
      while ( m_Slots != &v17[1] );
      this->m_pCustomizableCourier = v17;
    }
    for ( i = KeyValues::GetFirstTrueSubKey(Key); i != 0; i = KeyValues::GetNextTrueSubKey(i) )
    {
      for ( j = 0; j != 16; j += 2 )
      {
        v7 = j;
        CEconSchemaSymbol::operator=(&this->m_pCustomizableCourier->m_Slots[v7], 0);
      }
      v8 = 0;
      Name = KeyValues::GetName(i);
      CEconSchemaSymbol::operator=(&this->m_pCustomizableCourier->m_symCourier, Name);
      FirstSubKey = KeyValues::GetFirstSubKey(i);
      if ( FirstSubKey != 0 )
      {
        while ( 1 )
        {
          v11 = KeyValues::GetName(FirstSubKey);
          CEconSchemaSymbol::operator=(&this->m_pCustomizableCourier->m_Slots[v8], v11);
          FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
          if ( FirstSubKey == 0 || v8 == 15 )
            break;
          ++v8;
        }
      }
      CDOTAItemSchema::AddCustomizableCourier(pSchema, this->m_pCustomizableCourier);
    }
  }
  v12 = KeyValues::FindKey(pKVItem, "courier_wearable", 0);
  v13 = v12;
  if ( v12 != 0 )
  {
    courierWearable.m_symCourier.u.m_Id = 0;
    courierWearable.m_symSlot.u.m_Id = 0;
    String = KeyValues::GetString(v12, "courier", "", 0, 0);
    CEconSchemaSymbol::operator=(&courierWearable.m_symCourier, String);
    v15 = KeyValues::GetString(v13, "slot", "", 0, 0);
    CEconSchemaSymbol::operator=(&courierWearable.m_symSlot, v15);
    courierWearable.m_nIndex = KeyValues::GetInt(v13, "index", 0);
    courierWearable.m_bFlyingOnly = KeyValues::GetInt(v13, "flying", 0) != 0;
    *(this + 529) = (4 * courierWearable.m_bFlyingOnly) | *(this + 529) & 0xFB;
    v16.m_Data = this->GetDefinitionIndex();
    CDOTAItemSchema::AddCourierWearable(pSchema, &courierWearable, v16);
  }
}


// CDOTAItemDefinition::BuildCourierWearableList  (line 768, @0x0000000002e45540, libserver.so)  // inlines: CUtlString, Get, IsCustomizableCourier, String, ~CUtlString
// calls: CUtlString::Set, GetItemSchema, CDOTAItemSchema::GetCustomizableCourierSlot, CUtlString::FreeMemoryBlock, CDOTAItemSchema::GetCourierWearableItemDef, CEconItemSchema::GetItemDefinition, _Unwind_Resume
// callers: CDOTA_Unit_Courier::AddCourierWearables, CDOTA_Unit_Courier::PrecacheCourierWearables
// globals: INVALID_ITEM_DEF_INDEX
int __fastcall CDOTAItemDefinition::BuildCourierWearableList(
        const CDOTAItemDefinition *const this,
        int nMaxCount,
        item_definition_index_t *pWearables,
        const IEconItemInterface *pItem,
        CourierWearableFilterType_t filter)
{
  customizable_courier_t *m_pCustomizableCourier; // r12
  int v6; // ebx
  const char *m_Id; // rsi
  CDOTAItemSchema *ItemSchema; // rax
  const char *CustomizableCourierSlot; // r15
  const char *v10; // r14
  CDOTAItemSchema *v11; // rax
  item_definition_index_t v12; // r14
  GameItemSchema_t *v13; // rax
  const CEconItemDefinition *ItemDefinition; // rax
  unsigned __int32 v18; // [rsp+10h] [rbp-50h]
  int nCount; // [rsp+14h] [rbp-4Ch]
  CUtlString strCourier; // [rsp+20h] [rbp-40h] BYREF

  m_pCustomizableCourier = this->m_pCustomizableCourier;
  if ( m_pCustomizableCourier == 0 || m_pCustomizableCourier->m_symCourier.u.m_Id == 0 )
    return 0;
  v6 = 0;
  nCount = 0;
  v18 = filter & 0xFFFFFFFD;
  while ( 1 )
  {
    m_Id = "";
    if ( m_pCustomizableCourier->m_symCourier.u.m_Id != 0 )
      m_Id = m_pCustomizableCourier->m_symCourier.u.m_Id;
    strCourier.m_pString = 0;
    CUtlString::Set(&strCourier, m_Id);
    ItemSchema = GetItemSchema();
    CustomizableCourierSlot = CDOTAItemSchema::GetCustomizableCourierSlot(ItemSchema, &strCourier, v6);
    if ( strCourier.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&strCourier);
    if ( CustomizableCourierSlot != 0 )
    {
      v10 = "";
      if ( m_pCustomizableCourier->m_symCourier.u.m_Id != 0 )
        v10 = m_pCustomizableCourier->m_symCourier.u.m_Id;
      v11 = GetItemSchema();
      v12.m_Data = CDOTAItemSchema::GetCourierWearableItemDef(v11, v10, CustomizableCourierSlot, pItem, v6).m_Data;
      if ( INVALID_ITEM_DEF_INDEX.m_Data == v12.m_Data )
        goto LABEL_17;
      v13 = GetItemSchema();
      ItemDefinition = CEconItemSchema::GetItemDefinition(v13, v12, 1);
      if ( ItemDefinition == 0 || v18 != 0 && (ItemDefinition[1].m_vecBaseDisplayModels.m_Size & 0x400) != 0 )
        goto LABEL_17;
      pWearables[nCount] = v12;
      if ( nCount + 1 == nMaxCount )
        return nMaxCount;
      ++nCount;
    }
LABEL_17:
    if ( ++v6 == 16 )
      return nCount;
  }
}


// CDOTAItemDefinition::IsValidForNexonPCBang  (line 808, @0x0000000002e37d40, libserver.so)  // inlines: V_isempty
// calls: IsAppDota2Experimental, GetItemSchema, CEconItemSchema::GetRarityDefinition, CDOTAItemDefinition::IsOlderThan, V_stricmp_fast
// strings: "hud_skin", "cursor_pack"
bool __fastcall CDOTAItemDefinition::IsValidForNexonPCBang(const CDOTAItemDefinition *const this, bool bAllowBundles)
{
  bool v4; // bl
  unsigned __int8 v6; // r14
  GameItemSchema_t *ItemSchema; // rax
  const CEconItemRarityDefinition *RarityDefinition; // rax
  _BYTE *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  const char **v15; // rbx
  const char *v16; // r14
  __int64 i; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  const char *pszAllowedPrefabs[7]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF

  v4 = IsAppDota2Experimental();
  if ( !v4 )
  {
    v6 = (*(this->_vptr_IEconItemDefinition + 10))(this);
    ItemSchema = GetItemSchema();
    RarityDefinition = CEconItemSchema::GetRarityDefinition(ItemSchema, v6);
    if ( (RarityDefinition == 0 || (RarityDefinition->m_iAttribColor - 16) > 1)
      && (*(this->_vptr_IEconItemDefinition + 14))(this) == 0
      && this->m_nItemQuality != 1
      && CDOTAItemDefinition::IsOlderThan(this, 60)
      && this->m_nSlotType != 28 )
    {
      v9 = (*(this->_vptr_IEconItemDefinition + 1))(this);
      if ( v9 != 0 && *v9 != 0 )
      {
        v15 = &pszAllowedPrefabs[1];
        v16 = "wearable";
        for ( i = (*(this->_vptr_IEconItemDefinition + 1))(
                    this,
                    v12,
                    v10,
                    v11,
                    v13,
                    v14,
                    "wearable",
                    "courier",
                    "hud_skin",
                    "loading_screen",
                    "announcer",
                    "cursor_pack",
                    "ward");
              V_stricmp_fast(v16, i) != 0;
              i = (*(this->_vptr_IEconItemDefinition + 1))(
                    this,
                    v20,
                    v18,
                    v19,
                    v21,
                    v22,
                    pszAllowedPrefabs[0],
                    pszAllowedPrefabs[1],
                    pszAllowedPrefabs[2],
                    pszAllowedPrefabs[3],
                    pszAllowedPrefabs[4],
                    pszAllowedPrefabs[5],
                    pszAllowedPrefabs[6]) )
        {
          if ( v15 == &v25 )
          {
            if ( !bAllowBundles )
              return 0;
            v23 = (*(this->_vptr_IEconItemDefinition + 1))(this);
            if ( V_stricmp_fast(v23, "bundle") != 0 )
              return 0;
            return !(*(this + 528) & 1);
          }
          v16 = *v15++;
        }
        return !(*(this + 528) & 1);
      }
    }
  }
  return v4;
}


// CDOTAItemDefinition::BInitFromTestItemKVs  (line 869, @0x0000000002e4dbc0, libserver.so)
// calls: CEconItemDefinition::BInitFromTestItemKVs, CDOTAItemDefinition::ExtractHeroUsageFromKVs
bool __fastcall CDOTAItemDefinition::BInitFromTestItemKVs(
        CDOTAItemDefinition *const this,
        item_definition_index_t iNewDefIndex,
        KeyValues *pKVItem,
        CEconItemSchema *const pschema)
{
  bool result; // al
  bool v8; // [rsp+Ch] [rbp-24h]

  result = CEconItemDefinition::BInitFromTestItemKVs(this, iNewDefIndex, pKVItem, pschema);
  if ( result )
  {
    v8 = result;
    CDOTAItemDefinition::ExtractHeroUsageFromKVs(this, pKVItem, pschema);
    return v8;
  }
  return result;
}


// CDOTAItemDefinition::Precache  (line 884, @0x0000000002e4dc00, libserver.so)
// calls: CEconItemDefinition::Precache, CUtlString::Get
void __fastcall CDOTAItemDefinition::Precache(
        const CDOTAItemDefinition *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTAItemDefinition::PortraitNode_t *i; // rbx
  void (__fastcall *v5)(IEntityResourceManifest *, const char *); // r13
  const char *v6; // rax

  CEconItemDefinition::Precache(this, pContext);
  for ( i = this->m_pPortraitData; i != 0; i = i->m_pNext )
  {
    v5 = **pContext->m_pManifest;
    v6 = CUtlString::Get(&i->m_resourceName);
    v5(pContext->m_pManifest, v6);
  }
}


// CDOTAItemSchema::CDOTAItemSchema  (line 910, @0x0000000002e488b0, libserver.so)  // inlines: CBitVecT, CLargeVarBitVec, CUtlDict, CUtlHashMapLarge, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, CVarBitVecBase, ClearAll, ResetDbgInfo, SetCompareType, SetLessFunc, memset
// calls: CEconItemSchema::CEconItemSchema, memset
// callers: CEconItemSystem::CEconItemSystem
// globals: CDefOps<uint>::LessFunc(uint const&,uint const&), FastCaselessStringLessThan(char const* const&,char const* const&)
void __fastcall CDOTAItemSchema::CDOTAItemSchema(CDOTAItemSchema *const this)
{
  CEconItemSchema::CEconItemSchema(this);
  this->_vptr_IEconItemSchema = &off_47A0830;
  this->m_mapHeroNames.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
  this->m_mapHeroNames.m_Tree.m_Root = -1;
  this->m_mapHeroNames.m_Tree.m_NumElements = 0;
  this->m_mapHeroNames.m_Tree.m_LastAlloc.index = -1;
  this->m_mapHeroNames.m_Tree.m_FirstFree = -1;
  this->m_dictHeroIDs.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_vecItemContextRecipes.m_Size = 0;
  this->m_vecItemContextRecipes.m_Memory.m_pMemory = 0;
  this->m_vecItemContextRecipes.m_Memory.m_nAllocationCount = 0;
  this->m_vecItemContextRecipes.m_Memory.m_nGrowSize = 0;
  this->m_vecPlayerLoadoutSlots.m_Size = 0;
  this->m_vecPlayerLoadoutSlots.m_Memory.m_pMemory = 0;
  this->m_vecPlayerLoadoutSlots.m_Memory.m_nAllocationCount = 0;
  this->m_vecPlayerLoadoutSlots.m_Memory.m_nGrowSize = 0;
  this->m_mapHeroNames.m_Tree.m_Elements.m_pMemory = 0;
  this->m_mapHeroNames.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_mapHeroNames.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_mapHeroNames.m_Tree.m_pElements = 0;
  this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_dictHeroIDs.m_Elements.m_Tree.m_Root = -1;
  this->m_dictHeroIDs.m_Elements.m_Tree.m_NumElements = 0;
  this->m_dictHeroIDs.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_dictHeroIDs.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_dictHeroIDs.m_Elements.m_Tree.m_pElements = 0;
  this->m_vecItemizedHeroIDs.m_Size = 0;
  this->m_vecItemizedHeroIDs.m_Memory.m_pMemory = 0;
  this->m_vecItemizedHeroIDs.m_Memory.m_nAllocationCount = 0;
  this->m_vecItemizedHeroIDs.m_Memory.m_nGrowSize = 0;
  this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Root = -1;
  this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_NumElements = 0;
  this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_pElements = 0;
  this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements.m_pMemory = 0;
  this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Root = -1;
  this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_NumElements = 0;
  this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_FirstFree = -1;
  this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_LastAlloc.index = -1;
  this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_pElements = 0;
  this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size = 0;
  this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory = 0;
  this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_nAllocationCount = 0;
  this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_nGrowSize = 0;
  *&this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_numBits = 0;
  this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt = 0;
  *this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_FixedStorage = 0;
  memset(0, 0, 0);
  this->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory = 0;
  this->m_ItemDefToAssociatedLeague.m_memNodes.m_nAllocationCount = 0;
  this->m_ItemDefToAssociatedLeague.m_memNodes.m_nGrowSize = 0;
  this->m_ItemDefToAssociatedLeague.m_cElements = 0;
  this->m_ItemDefToAssociatedLeague.m_nMaxElement = 0;
  this->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket = -1;
  this->m_ItemDefToAssociatedLeague.m_nMaxRehashedBucket = -1;
  this->m_ItemDefToAssociatedLeague.m_iNodeFreeListHead = -1;
  this->m_LeagueDefIndex.m_vecHashBuckets.m_Size = 0;
  this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory = 0;
  this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_nAllocationCount = 0;
  this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_nGrowSize = 0;
  *&this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_numBits = 0;
  this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt = 0;
  *this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_FixedStorage = 0;
  memset(0, 0, 0);
  this->m_LeagueDefIndex.m_memNodes.m_pMemory = 0;
  this->m_LeagueDefIndex.m_memNodes.m_nAllocationCount = 0;
  this->m_LeagueDefIndex.m_memNodes.m_nGrowSize = 0;
  this->m_LeagueDefIndex.m_cElements = 0;
  this->m_LeagueDefIndex.m_nMaxElement = 0;
  this->m_LeagueDefIndex.m_nMinRehashedBucket = -1;
  this->m_LeagueDefIndex.m_nMaxRehashedBucket = -1;
  this->m_LeagueDefIndex.m_iNodeFreeListHead = -1;
  this->m_mapCustomGameTickets.m_vecHashBuckets.m_Size = 0;
  this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory = 0;
  this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_nAllocationCount = 0;
  this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_nGrowSize = 0;
  *&this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_numBits = 0;
  this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt = 0;
  *this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_FixedStorage = 0;
  memset(0, 0, 0);
  this->m_mapCustomGameTickets.m_memNodes.m_pMemory = 0;
  this->m_mapCustomGameTickets.m_memNodes.m_nAllocationCount = 0;
  this->m_mapCustomGameTickets.m_memNodes.m_nGrowSize = 0;
  this->m_mapCustomGameTickets.m_cElements = 0;
  this->m_mapCustomGameTickets.m_nMaxElement = 0;
  this->m_mapCustomGameTickets.m_nMinRehashedBucket = -1;
  this->m_mapCustomGameTickets.m_nMaxRehashedBucket = -1;
  this->m_mapCustomGameTickets.m_iNodeFreeListHead = -1;
}


// CDOTAItemSchema::CreateEconItemDefinition  (line 918, @0x0000000002e37a70, libserver.so)  // inlines: Alloc, Construct<CDOTAItemDefinition>
// calls: CUtlMemoryPoolBase::Alloc, CDOTAItemDefinition::CDOTAItemDefinition
// globals: s_dotaItemDefinitionPool
CEconItemDefinition *__fastcall CDOTAItemSchema::CreateEconItemDefinition(CDOTAItemSchema *const this)
{
  CEconItemDefinition *result; // rax
  CEconItemDefinition *v2; // [rsp+8h] [rbp-8h]

  result = CUtlMemoryPoolBase::Alloc(&s_dotaItemDefinitionPool);
  if ( result != 0 )
  {
    v2 = result;
    CDOTAItemDefinition::CDOTAItemDefinition(result);
    return v2;
  }
  return result;
}


// CDOTAItemSchema::DeleteEconItemDefinition  (line 926, @0x0000000002e30f30, libserver.so)  // inlines: Destruct<CDOTAItemDefinition>, Free
// calls: CUtlMemoryPoolBase::Free
// globals: s_dotaItemDefinitionPool
void __fastcall CDOTAItemSchema::DeleteEconItemDefinition(CDOTAItemSchema *const this, CEconItemDefinition *pItemDef)
{
  if ( pItemDef != 0 )
    (*(pItemDef->_vptr_IEconItemDefinition + 21))(pItemDef);
  CUtlMemoryPoolBase::Free(&s_dotaItemDefinitionPool, pItemDef);
}


// CDOTAItemSchema::Reset  (line 934, @0x0000000002e30cf0, libserver.so)
// calls: CEconItemSchema::Reset
void __fastcall CDOTAItemSchema::Reset(CDOTAItemSchema *const this)
{
  CEconItemSchema::Reset(this);
}


// CDOTAItemSchema::BInitItems  (line 946, @0x0000000002e48860, libserver.so)
// calls: CUtlDict<customizable_courier_t*, int>::Purge, CUtlDict<item_definition_index_t, int>::Purge, CEconItemSchema::BInitItems
bool __fastcall CDOTAItemSchema::BInitItems(
        CDOTAItemSchema *const this,
        KeyValues *pKVAttributes,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  CUtlDict<customizable_courier_t *,int>::Purge(&this->m_dictCustomizableCouriers);
  CUtlDict<item_definition_index_t,int>::Purge(&this->m_dictCustomizableCourierSlotItems);
  return CEconItemSchema::BInitItems(this, pKVAttributes, pVecErrors);
}


// CDOTAItemSchema::BInitSchema  (line 957, @0x0000000002e4c490, libserver.so)  // inlines: AddToTail, CEconSchemaSymbol, CUtlString, CUtlSymbolLarge, CopyConstruct<CUtlString>, Element, FindInsertionPosition, GetHeroesKeyValues, GrowMemory, Insert, InsertAt, IsAddOnGame, LeftChild, Node_t, Purge, RemoveAll, RightChild, _V_strcmp, operator(), operator[], ~CUtlString
// calls: KeyValues::FindKey, CDOTAItemSchema::BInitPlayerLoadout, CDOTAInventoryManager::InitPlayerLoadoutSlots, DOTAGameManager, KeyValues::GetFirstSubKey, KeyValues::GetNextKey, KeyValues::GetName, CEconSchemaSymbol::CEconSchemaSymbol, KeyValues::GetInt, CEconSchemaSymbol::operator=, CUtlRBTree<CUtlMap<unsigned int, CEconSchemaSymbol>::Node_t, short unsigned int, CUtlMap<unsigned int, CEconSchemaSymbol>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CEconSchemaSymbol>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<unsigned int, CEconSchemaSymbol>::Node_t, short unsigned int, CUtlMap<unsigned int, CEconSchemaSymbol>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, CEconSchemaSymbol>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent (26 total)
// strings: "player_loadout_slots", "Item Slot loaded that is beyond the last_valid_item_slot (found in items.txt)\n", "Required key \"player_loadout_slots\" missing.\n"
// globals: g_DOTAInventoryManager
bool __fastcall CDOTAItemSchema::BInitSchema(
        CDOTAItemSchema *const this,
        KeyValues *pKVRawDefinition,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool v4; // zf
  KeyValues *Key; // rax
  CDOTAGameManager *v6; // rax
  const KeyValues *m_pkvAddOnHeroes; // rdi
  KeyValues *FirstSubKey; // r13
  const char *Name; // rax
  int Int; // eax
  unsigned __int16 m_Root; // r12
  unsigned __int16 m_Right; // ax
  UtlRBTreeNode_t<CUtlMap<unsigned int,CEconSchemaSymbol>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v14; // ax
  const char *v15; // rax
  bool v16; // r12
  __int64 m_Size; // r12
  int v18; // eax
  CUtlString *v19; // r12
  const char *v20; // rax
  __int64 v22; // r12
  int v23; // eax
  CUtlString *v24; // r12
  const char *v25; // rax
  char v26; // cl
  bool isLeft; // [rsp+Ch] [rbp-1A4h]
  CUtlMap<unsigned int,CEconSchemaSymbol,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_mapHeroNames; // [rsp+10h] [rbp-1A0h]
  CEconSchemaSymbol v31[2]; // [rsp+40h] [rbp-170h] BYREF
  CUtlString msg; // [rsp+50h] [rbp-160h] BYREF
  CEconSchemaSymbol v33; // [rsp+58h] [rbp-158h] BYREF
  CFmtStrN<256,false> v34; // [rsp+60h] [rbp-150h] BYREF
  unsigned __int64 v35; // [rsp+178h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  v4 = (this->m_vecItemContextRecipes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecItemContextRecipes.m_Size = 0;
  if ( v4 )
    CUtlMemory<CDOTAItemDefinition const*,int>::Purge(&this->m_vecItemContextRecipes.m_Memory);
  Key = KeyValues::FindKey(pKVRawDefinition, "player_loadout_slots", 0);
  if ( Key != 0 )
  {
    if ( CDOTAItemSchema::BInitPlayerLoadout(this, Key, pVecErrors) || pVecErrors != 0 )
    {
      CDOTAInventoryManager::InitPlayerLoadoutSlots(g_DOTAInventoryManager);
      v6 = DOTAGameManager();
      if ( v6->m_bCustomGame || v6->m_bEventGame )
        m_pkvAddOnHeroes = v6->m_pkvAddOnHeroes;
      else
        m_pkvAddOnHeroes = v6->m_pkvHeroes;
      if ( m_pkvAddOnHeroes != 0 )
      {
        FirstSubKey = KeyValues::GetFirstSubKey(m_pkvAddOnHeroes);
        if ( FirstSubKey != 0 )
        {
          p_m_mapHeroNames = &this->m_mapHeroNames;
          do
          {
            while ( strcmp(KeyValues::GetName(FirstSubKey), "Version") == 0 )
            {
              FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
              if ( FirstSubKey == 0 )
                goto LABEL_20;
            }
            Name = KeyValues::GetName(FirstSubKey);
            CEconSchemaSymbol::CEconSchemaSymbol(v31, Name);
            Int = KeyValues::GetInt(FirstSubKey, "HeroID", 0);
            v33.u.m_Id = 0;
            LODWORD(msg.m_pString) = Int;
            CEconSchemaSymbol::operator=(&v33, v31);
            m_Root = this->m_mapHeroNames.m_Tree.m_Root;
            if ( m_Root != 0xFFFF )
            {
              while ( 1 )
              {
                v4 = !this->m_mapHeroNames.m_Tree.m_LessFunc.m_LessFunc(
                        &msg,
                        &this->m_mapHeroNames.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
                m_pMemory = this->m_mapHeroNames.m_Tree.m_Elements.m_pMemory;
                if ( v4 )
                {
                  m_Right = m_pMemory[m_Root].m_Right;
                  v26 = 0;
                  if ( m_Right == 0xFFFF )
                    goto LABEL_19;
                }
                else
                {
                  m_Right = m_pMemory[m_Root].m_Left;
                  v26 = 1;
                  if ( m_Right == 0xFFFF )
                    goto LABEL_19;
                }
                m_Root = m_Right;
              }
            }
            m_Root = -1;
            v26 = 0;
LABEL_19:
            isLeft = v26;
            v14 = CUtlRBTree<CUtlMap<unsigned int,CEconSchemaSymbol,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CEconSchemaSymbol,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CEconSchemaSymbol,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                    &p_m_mapHeroNames->m_Tree,
                    &msg);
            CUtlRBTree<CUtlMap<unsigned int,CEconSchemaSymbol,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,CEconSchemaSymbol,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,CEconSchemaSymbol,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
              &p_m_mapHeroNames->m_Tree,
              v14,
              m_Root,
              isLeft);
            ++this->m_mapHeroNames.m_Tree.m_NumElements;
            LODWORD(msg.m_pString) = KeyValues::GetInt(FirstSubKey, "HeroID", 0);
            v15 = KeyValues::GetName(FirstSubKey);
            CUtlDict<unsigned int,int>::Insert(&this->m_dictHeroIDs, v15, &msg);
            FirstSubKey = KeyValues::GetNextKey(FirstSubKey);
          }
          while ( FirstSubKey != 0 );
        }
      }
LABEL_20:
      v16 = CEconItemSchema::BInitSchema(this, pKVRawDefinition, pVecErrors);
      if ( v16 )
      {
        if ( this->m_vecPlayerLoadoutSlots.m_Size - 1 <= this->m_unLastValidItemSlot )
        {
          CDOTAItemSchema::BInitCustomGameTickets(this);
          CDOTAItemSchema::CalculateHeroItemization(this);
          CDOTAItemSchema::BuildAssociatedLeagueInfo(this);
          return v16;
        }
        msg.m_pString = 0;
        CFmtStrN<256,false>::CFmtStrN(
          &v34,
          "Item Slot loaded that is beyond the last_valid_item_slot (found in items.txt)\n");
        CUtlString::Format(&msg, v34.m_szBuf);
        if ( pVecErrors != 0 )
        {
          m_Size = pVecErrors->m_Size;
          v18 = pVecErrors->m_Size;
          if ( m_Size == pVecErrors->m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
            v18 = pVecErrors->m_Size;
          }
          pVecErrors->m_Size = v18 + 1;
          v19 = &pVecErrors->m_Memory.m_pMemory[m_Size];
          if ( v19 != 0 )
          {
            v19->m_pString = 0;
            v20 = CUtlString::Get(&msg);
            CUtlString::Set(v19, v20);
          }
        }
        if ( msg.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&msg);
      }
    }
  }
  else
  {
    msg.m_pString = 0;
    CFmtStrN<256,false>::CFmtStrN(&v34, "Required key \"player_loadout_slots\" missing.\n");
    CUtlString::Format(&msg, v34.m_szBuf);
    if ( pVecErrors != 0 )
    {
      v22 = pVecErrors->m_Size;
      v23 = pVecErrors->m_Size;
      if ( v22 == pVecErrors->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CUtlString,int>::Grow(&pVecErrors->m_Memory, 1);
        v23 = pVecErrors->m_Size;
      }
      pVecErrors->m_Size = v23 + 1;
      v24 = &pVecErrors->m_Memory.m_pMemory[v22];
      if ( v24 != 0 )
      {
        v24->m_pString = 0;
        v25 = CUtlString::Get(&msg);
        CUtlString::Set(v24, v25);
      }
    }
    if ( msg.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&msg);
  }
  return 0;
}


// CDOTAItemSchema::BInitCustomGameTickets  (line 1063, @0x0000000002e4b340, libserver.so)  // inlines: AddMultipleToTail, AddToTail, AllocNode, Bitvec_Set, CUtlMemory, CUtlVectorBase, CopyConstruct<CUtlVector<item_definition_index_t>*>, CopyConstruct<item_definition_index_t>, CopyConstruct<long long unsigned int>, Element, EnsureCapacity, Find, FindInBucket, FreeNodeIDToIndex, Get, GetTypedEconTool<CEconTool_CustomGameTicket>, GrowMemory, GrowVector, IncrementalRehash, Insert, InsertInternal, InsertMultipleBefore, IsValidIndex, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long unsigned int>, RehashNodesInBucket, Set, UnlinkNodeFromBucket, memcpy, memset, operator(), operator[]
// calls: __dynamic_cast, MurmurHash3_32, operator new, memset, CUtlHashMapLarge<long long unsigned int, CUtlVector<item_definition_index_t, CUtlMemory<item_definition_index_t, int> >*, CUtlHashMapLargeDefEquals<long long unsigned int>, MurmurHash3Functor<long long unsigned int> >::LinkNodeIntoBucket, CUtlMemory<item_definition_index_t, int>::Grow, CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<long long unsigned int, CUtlVector<item_definition_index_t>*>::Node_t, int>::Grow, CUtlMemory<CUtlHashMapLarge<long long unsigned int, CUtlVector<item_definition_index_t>*>::HashBucket_t, int>::Grow, memcpy
// callers: CDOTAItemSchema::BInitSchema
// globals: `typeinfo for'CEconTool_CustomGameTicket
bool __fastcall CDOTAItemSchema::BInitCustomGameTickets(CDOTAItemSchema *const this)
{
  CDOTAItemSchema *v1; // r13
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v2; // rax
  IEconTool *m_pTool; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_cElements; // r9d
  uint32 v7; // eax
  int m_Size; // edx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *m_pMemory; // r12
  __int64 m_iNode; // rcx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v11; // rdi
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v12; // rcx
  __int64 m_iNextNode; // rcx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_nMinRehashedBucket; // r9d
  int j; // edx
  int v16; // ecx
  __int64 v17; // rcx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v18; // rdi
  __int64 v19; // rcx
  uint16 v20; // ax
  __int64 v21; // rbx
  int v22; // edx
  item_definition_index_t *v23; // rdx
  CDOTAItemSchema::TicketList_t *v25; // rax
  int v26; // edx
  int v27; // eax
  int v28; // ebx
  int v29; // r15d
  uint32 m_nGrowSize; // edx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v31; // rsi
  int v32; // r12d
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *v33; // rdi
  size_t v34; // rdx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t v35; // eax
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t v36; // r12d
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_nMaxRehashedBucket; // edi
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *v38; // rsi
  __int64 v39; // rbx
  int v40; // ecx
  uint32 *m_pInt; // rax
  int v42; // r12d
  int v43; // r15d
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v44; // rdi
  int v45; // r14d
  uint32 v46; // eax
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v47; // rdx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *v48; // rdi
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t v49; // esi
  __int64 v50; // rcx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v51; // rdi
  int v52; // eax
  bool v53; // cc
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t v54; // eax
  int v55; // r12d
  uint32 *k; // rax
  CDOTAItemSchema *v57; // rax
  int v58; // r13d
  CDOTAItemSchema *v59; // r15
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v60; // rdi
  int v61; // ebx
  uint32 v62; // eax
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v63; // r9
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *v64; // rcx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t v65; // esi
  __int64 v66; // rdx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v67; // rdi
  __int64 v68; // rcx
  int v69; // edx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v70; // rax
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_iNodeFreeListHead; // edi
  __int64 v72; // rcx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v73; // rax
  int v74; // esi
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v75; // rax
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v76; // rcx
  __int64 v77; // rax
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v78; // rsi
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v79; // rax
  __int64 v80; // rax
  int m_nAllocationCount; // eax
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *v82; // rax
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v83; // r12
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v84; // rax
  CUtlMemory<CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t>*>::Node_t,int> *p_m_memNodes; // [rsp+0h] [rbp-90h]
  CLargeVarBitVec *p_m_bitsMigratedBuckets; // [rsp+8h] [rbp-88h]
  uint32 v87; // [rsp+1Ch] [rbp-74h]
  CDOTAItemSchema::TicketList_t *pTicketList; // [rsp+20h] [rbp-70h]
  CEconItemDefinition *pItemDef; // [rsp+28h] [rbp-68h]
  CDOTAItemSchema::CustomGameToTicketList_t *p_m_mapCustomGameTickets; // [rsp+30h] [rbp-60h]
  uint16 v91; // [rsp+38h] [rbp-58h]
  __int64 v92; // [rsp+40h] [rbp-50h]
  int v93; // [rsp+48h] [rbp-48h]
  int i; // [rsp+4Ch] [rbp-44h]
  _QWORD v95[7]; // [rsp+58h] [rbp-38h] BYREF

  v92 = 0;
  i = 0;
  if ( this->m_mapItems.m_nMaxElement > 0 )
  {
    v1 = this;
    p_m_mapCustomGameTickets = &this->m_mapCustomGameTickets;
    p_m_bitsMigratedBuckets = &this->m_mapCustomGameTickets.m_bitsMigratedBuckets;
    p_m_memNodes = &this->m_mapCustomGameTickets.m_memNodes;
    while ( 1 )
    {
      v2 = &v1->m_mapItems.m_memNodes.m_pMemory[v92];
      if ( v2->m_iNextNode >= -1 )
      {
        pItemDef = v2->m_elem;
        if ( pItemDef != 0 )
        {
          m_pTool = pItemDef->m_pTool;
          if ( m_pTool != 0 )
          {
            v4 = __dynamic_cast(m_pTool, &`typeinfo for'IEconTool, &`typeinfo for'CEconTool_CustomGameTicket, 0);
            v5 = v4;
            if ( v4 != 0 )
              break;
          }
        }
      }
LABEL_26:
      ++i;
      ++v92;
      if ( v1->m_mapItems.m_nMaxElement <= i )
        return 1;
    }
    m_cElements = v1->m_mapCustomGameTickets.m_cElements;
    v95[0] = v4[9];
    if ( m_cElements != 0 )
    {
      v7 = MurmurHash3_32(v95, 8u, 0x417u, 0);
      m_Size = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Size;
      m_pMemory = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory;
      m_iNode = m_pMemory[v7 & (m_Size - 1)].m_iNode;
      if ( m_iNode != -1 )
      {
        v11 = v1->m_mapCustomGameTickets.m_memNodes.m_pMemory;
        v12 = &v11[m_iNode];
        if ( v95[0] == v12->m_key )
        {
LABEL_21:
          pTicketList = v12->m_elem;
LABEL_22:
          v20 = pItemDef->GetDefinitionIndex();
          v21 = pTicketList->m_Size;
          v22 = pTicketList->m_Size;
          if ( v21 == pTicketList->m_Memory.m_nAllocationCount )
          {
            v91 = v20;
            CUtlMemory<item_definition_index_t,int>::Grow(&pTicketList->m_Memory, 1);
            v22 = pTicketList->m_Size;
            v20 = v91;
          }
          pTicketList->m_Size = v22 + 1;
          v23 = &pTicketList->m_Memory.m_pMemory[v21];
          if ( v23 != 0 )
            v23->m_Data = v20;
          goto LABEL_26;
        }
        while ( 1 )
        {
          m_iNextNode = v12->m_iNextNode;
          if ( m_iNextNode == -1 )
            break;
          v12 = &v11[m_iNextNode];
          if ( v12->m_key == v95[0] )
            goto LABEL_21;
        }
      }
      m_nMinRehashedBucket = v1->m_mapCustomGameTickets.m_nMinRehashedBucket;
      for ( j = m_Size >> 1; m_nMinRehashedBucket <= j; j >>= 1 )
      {
        v16 = v7 & (j - 1);
        if ( ((1 << (v7 & (j - 1))) & v1->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt[v16 >> 5]) == 0 )
        {
          v17 = m_pMemory[v16].m_iNode;
          if ( v17 != -1 )
          {
            v18 = v1->m_mapCustomGameTickets.m_memNodes.m_pMemory;
            v12 = &v18[v17];
            if ( v95[0] == v12->m_key )
              goto LABEL_21;
            while ( 1 )
            {
              v19 = v12->m_iNextNode;
              if ( v19 == -1 )
                break;
              v12 = &v18[v19];
              if ( v12->m_key == v95[0] )
                goto LABEL_21;
            }
          }
        }
      }
    }
    v25 = operator new(0x18u);
    v25->m_Size = 0;
    v25->m_Memory.m_pMemory = 0;
    v25->m_Memory.m_nAllocationCount = 0;
    v25->m_Memory.m_nGrowSize = 0;
    pTicketList = v25;
    v26 = v1->m_mapCustomGameTickets.m_cElements;
    v95[0] = v5[9];
    v27 = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Size;
    if ( v26 >= v27 )
    {
      v28 = 16;
      v29 = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Size;
      if ( 2 * v27 > 15 )
        v28 = 2 * v27;
      if ( v28 > v1->m_mapCustomGameTickets.m_memNodes.m_nAllocationCount )
      {
        m_nGrowSize = v1->m_mapCustomGameTickets.m_memNodes.m_nGrowSize;
        if ( (m_nGrowSize & 0x40000000) == 0 )
        {
          if ( (m_nGrowSize & 0xC0000000) != 0 )
          {
            v83 = v1->m_mapCustomGameTickets.m_memNodes.m_pMemory;
            v84 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v28);
            v1->m_mapCustomGameTickets.m_memNodes.m_pMemory = v84;
            if ( v83 != 0 )
              memcpy(v84, v83, 24LL * v1->m_mapCustomGameTickets.m_memNodes.m_nAllocationCount);
            v1->m_mapCustomGameTickets.m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
          }
          else
          {
            v31 = v1->m_mapCustomGameTickets.m_memNodes.m_pMemory;
            if ( v31 != 0 )
              v1->m_mapCustomGameTickets.m_memNodes.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v31, 24LL * v28);
            else
              v1->m_mapCustomGameTickets.m_memNodes.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v28);
          }
          v29 = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Size;
          v1->m_mapCustomGameTickets.m_memNodes.m_nAllocationCount = v28;
        }
      }
      if ( v28 > v29 )
      {
        v32 = v29;
        if ( v29 > 15 || (v32 = 16, v28 > 16) )
        {
          do
            v32 *= 2;
          while ( v28 > v32 );
        }
        if ( v32 == v29 )
        {
          v33 = &v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory[v29];
          v34 = 0;
        }
        else
        {
          m_nAllocationCount = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_nAllocationCount;
          if ( v32 > m_nAllocationCount )
            CUtlMemory<CUtlHashMapLarge<unsigned long long,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int>> *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::HashBucket_t,int>::Grow(
              &v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory,
              v32 - m_nAllocationCount);
          v82 = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory;
          v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Size = v32;
          v34 = 4LL * (v32 - v29);
          v33 = &v82[v29];
        }
        memset(v33, -1, v34);
        v26 = v1->m_mapCustomGameTickets.m_cElements;
        v1->m_mapCustomGameTickets.m_nMinRehashedBucket = 0;
        v1->m_mapCustomGameTickets.m_nMaxRehashedBucket = v29;
        if ( v26 <= 0 )
        {
          v1->m_mapCustomGameTickets.m_nMinRehashedBucket = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Size;
          goto LABEL_45;
        }
        CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
        CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Size, 0);
      }
      v35 = v1->m_mapCustomGameTickets.m_memNodes.m_nAllocationCount;
      if ( v35 > v1->m_mapCustomGameTickets.m_cElements )
        goto LABEL_46;
      goto LABEL_92;
    }
LABEL_45:
    v35 = v1->m_mapCustomGameTickets.m_memNodes.m_nAllocationCount;
    if ( v35 <= v26 )
LABEL_92:
      CUtlMemory<CUtlHashMapLarge<unsigned long long,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int>> *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::Node_t,int>::Grow(
        p_m_memNodes,
        2 * v35);
LABEL_46:
    v36 = v1->m_mapCustomGameTickets.m_nMinRehashedBucket;
    m_nMaxRehashedBucket = v1->m_mapCustomGameTickets.m_nMaxRehashedBucket;
    if ( v36 < m_nMaxRehashedBucket )
    {
      v38 = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory;
      v39 = v36;
      v40 = v1->m_mapCustomGameTickets.m_nMinRehashedBucket;
      while ( 1 )
      {
        if ( v38[v39].m_iNode != -1 )
        {
          m_pInt = v1->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt;
          if ( ((1 << v40) & m_pInt[v40 >> 5]) == 0 )
            break;
        }
        ++v40;
        ++v39;
        v1->m_mapCustomGameTickets.m_nMinRehashedBucket = v40;
        if ( v40 == m_nMaxRehashedBucket )
          goto LABEL_61;
      }
      v42 = v40;
      m_pInt[v40 >> 5] |= 1 << v40;
      v43 = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory[v39].m_iNode;
      if ( v43 != -1 )
      {
        while ( 1 )
        {
          v44 = &v1->m_mapCustomGameTickets.m_memNodes.m_pMemory[v43];
          v45 = v44->m_iNextNode;
          v46 = (v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(v44, 8u, 0x417u, 0);
          if ( v42 != v46 )
          {
            v47 = v1->m_mapCustomGameTickets.m_memNodes.m_pMemory;
            v48 = &v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory[v39];
            v49 = v47[v43].m_iNextNode;
            v50 = v48->m_iNode;
            if ( v43 == v50 )
            {
              v48->m_iNode = v49;
            }
            else
            {
              while ( v50 != -1 )
              {
                v51 = &v47[v50];
                v50 = v51->m_iNextNode;
                if ( v43 == v50 )
                {
                  v51->m_iNextNode = v49;
                  break;
                }
              }
            }
            CUtlHashMapLarge<unsigned long long,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int>> *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::LinkNodeIntoBucket(
              p_m_mapCustomGameTickets,
              v46,
              v43);
          }
          if ( v45 == -1 )
            break;
          v43 = v45;
        }
      }
      v52 = v1->m_mapCustomGameTickets.m_nMinRehashedBucket + 1;
      v53 = v52 < v1->m_mapCustomGameTickets.m_nMaxRehashedBucket;
      v1->m_mapCustomGameTickets.m_nMinRehashedBucket = v52;
      if ( !v53 )
      {
LABEL_61:
        v54 = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Size;
        v1->m_mapCustomGameTickets.m_nMaxRehashedBucket = -1;
        v1->m_mapCustomGameTickets.m_nMinRehashedBucket = v54;
        CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
      }
    }
    v87 = MurmurHash3_32(v95, 8u, 0x417u, 0);
    v93 = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Size >> 1;
    v55 = v87 & (v93 - 1);
    if ( v55 >= v1->m_mapCustomGameTickets.m_nMinRehashedBucket )
    {
      for ( k = v1->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt;
            ((1 << v55) & k[v55 >> 5]) == 0;
            k = v1->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt )
      {
        k[v55 >> 5] |= 1 << v55;
        if ( v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory[v55].m_iNode != -1 )
        {
          v57 = v1;
          v58 = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory[v55].m_iNode;
          v59 = v57;
          while ( 1 )
          {
            v60 = &v59->m_mapCustomGameTickets.m_memNodes.m_pMemory[v58];
            v61 = v60->m_iNextNode;
            v62 = (v59->m_mapCustomGameTickets.m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(v60, 8u, 0x417u, 0);
            if ( v55 != v62 )
            {
              v63 = v59->m_mapCustomGameTickets.m_memNodes.m_pMemory;
              v64 = &v59->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory[v55];
              v65 = v63[v58].m_iNextNode;
              v66 = v64->m_iNode;
              if ( v58 == v66 )
              {
                v64->m_iNode = v65;
              }
              else if ( v66 != -1 )
              {
                v67 = &v63[v66];
                v68 = v67->m_iNextNode;
                if ( v58 == v68 )
                {
LABEL_87:
                  v67->m_iNextNode = v65;
                }
                else
                {
                  while ( v68 != -1 )
                  {
                    v67 = &v63[v68];
                    v68 = v67->m_iNextNode;
                    if ( v58 == v68 )
                      goto LABEL_87;
                  }
                }
              }
              CUtlHashMapLarge<unsigned long long,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int>> *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::LinkNodeIntoBucket(
                p_m_mapCustomGameTickets,
                v62,
                v58);
            }
            if ( v61 == -1 )
              break;
            v58 = v61;
          }
          v1 = v59;
        }
        v93 >>= 1;
        v55 = v87 & (v93 - 1);
        if ( v55 < v1->m_mapCustomGameTickets.m_nMinRehashedBucket )
          break;
      }
    }
    v69 = v1->m_mapCustomGameTickets.m_cElements;
    if ( v69 == 0
      || (v77 = v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory[v87
                                                                             & (v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Size
                                                                              - 1)].m_iNode) == -1 )
    {
      v70 = v1->m_mapCustomGameTickets.m_memNodes.m_pMemory;
      if ( v69 == v1->m_mapCustomGameTickets.m_nMaxElement )
      {
LABEL_99:
        v1->m_mapCustomGameTickets.m_cElements = v69 + 1;
        v1->m_mapCustomGameTickets.m_nMaxElement = v69 + 1;
        v72 = v69;
        v73 = &v70[v72];
        goto LABEL_82;
      }
    }
    else
    {
      v78 = v1->m_mapCustomGameTickets.m_memNodes.m_pMemory;
      v79 = &v78[v77];
      if ( v95[0] == v79->m_key )
      {
LABEL_103:
        v79->m_elem = pTicketList;
        goto LABEL_22;
      }
      while ( 1 )
      {
        v80 = v79->m_iNextNode;
        if ( v80 == -1 )
          break;
        v79 = &v78[v80];
        if ( v95[0] == v79->m_key )
          goto LABEL_103;
      }
      v70 = v1->m_mapCustomGameTickets.m_memNodes.m_pMemory;
      if ( v69 == v1->m_mapCustomGameTickets.m_nMaxElement )
        goto LABEL_99;
    }
    m_iNodeFreeListHead = v1->m_mapCustomGameTickets.m_iNodeFreeListHead;
    v72 = m_iNodeFreeListHead;
    v73 = &v70[v72];
    v74 = -3 - v73->m_iNextNode;
    v1->m_mapCustomGameTickets.m_cElements = v69 + 1;
    v69 = m_iNodeFreeListHead;
    v1->m_mapCustomGameTickets.m_iNodeFreeListHead = v74;
LABEL_82:
    v73->m_iNextNode = -1;
    v75 = &v1->m_mapCustomGameTickets.m_memNodes.m_pMemory[v72];
    if ( v75 != 0 )
    {
      v75->m_key = v95[0];
      v76 = &v1->m_mapCustomGameTickets.m_memNodes.m_pMemory[v72];
    }
    else
    {
      v76 = 0;
    }
    if ( v76 != -8LL )
      v76->m_elem = pTicketList;
    CUtlHashMapLarge<unsigned long long,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int>> *,CUtlHashMapLargeDefEquals<unsigned long long>,MurmurHash3Functor<unsigned long long>>::LinkNodeIntoBucket(
      p_m_mapCustomGameTickets,
      v87 & (v1->m_mapCustomGameTickets.m_vecHashBuckets.m_Size - 1),
      v69);
    goto LABEL_22;
  }
  return 1;
}


// CDOTAItemSchema::GetCustomGameTicketList  (line 1098, @0x0000000002e37ed0, libserver.so)  // inlines: Find, FindInBucket, Get, ModPowerOf2<unsigned int, int>, MurmurHash3Item<long long unsigned int>, operator(), operator[]
// calls: MurmurHash3_32
const CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> > *__fastcall CDOTAItemSchema::GetCustomGameTicketList(
        CDOTAItemSchema *const this,
        uint64 ulCustomGameID)
{
  uint32 v3; // eax
  int m_Size; // esi
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::HashBucket_t *m_pMemory; // r8
  __int64 m_iNode; // rdx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v7; // rdi
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v8; // rdx
  __int64 m_iNextNode; // rdx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::IndexType_t m_nMinRehashedBucket; // r9d
  int i; // esi
  int v12; // ecx
  __int64 v13; // rdx
  CUtlHashMapLarge<long long unsigned int,CUtlVector<item_definition_index_t,CUtlMemory<item_definition_index_t,int> >*,CUtlHashMapLargeDefEquals<long long unsigned int>,MurmurHash3Functor<long long unsigned int> >::Node_t *v14; // rcx
  __int64 v15; // rdx
  uint64 ulCustomGameIDa[3]; // [rsp+8h] [rbp-18h] BYREF

  ulCustomGameIDa[0] = ulCustomGameID;
  if ( this->m_mapCustomGameTickets.m_cElements != 0 )
  {
    v3 = MurmurHash3_32(ulCustomGameIDa, 8u, 0x417u, 0);
    m_Size = this->m_mapCustomGameTickets.m_vecHashBuckets.m_Size;
    m_pMemory = this->m_mapCustomGameTickets.m_vecHashBuckets.m_Memory.m_pMemory;
    m_iNode = m_pMemory[v3 & (m_Size - 1)].m_iNode;
    if ( m_iNode != -1 )
    {
      v7 = this->m_mapCustomGameTickets.m_memNodes.m_pMemory;
      v8 = &v7[m_iNode];
      if ( ulCustomGameIDa[0] == v8->m_key )
        return v8->m_elem;
      while ( 1 )
      {
        m_iNextNode = v8->m_iNextNode;
        if ( m_iNextNode == -1 )
          break;
        v8 = &v7[m_iNextNode];
        if ( ulCustomGameIDa[0] == v8->m_key )
          return v8->m_elem;
      }
    }
    m_nMinRehashedBucket = this->m_mapCustomGameTickets.m_nMinRehashedBucket;
    for ( i = m_Size >> 1; i >= m_nMinRehashedBucket; i >>= 1 )
    {
      v12 = v3 & (i - 1);
      if ( ((1 << (v3 & (i - 1))) & this->m_mapCustomGameTickets.m_bitsMigratedBuckets.m_pInt[v12 >> 5]) == 0 )
      {
        v13 = m_pMemory[v12].m_iNode;
        if ( v13 != -1 )
        {
          v14 = this->m_mapCustomGameTickets.m_memNodes.m_pMemory;
          v8 = &v14[v13];
          if ( ulCustomGameIDa[0] == v8->m_key )
            return v8->m_elem;
          while ( 1 )
          {
            v15 = v8->m_iNextNode;
            if ( v15 == -1 )
              break;
            v8 = &v14[v15];
            if ( ulCustomGameIDa[0] == v8->m_key )
              return v8->m_elem;
          }
        }
      }
    }
  }
  return 0;
}


// CDOTAItemSchema::BInitPlayerLoadout  (line 1110, @0x0000000002e43450, libserver.so)  // inlines: AddToTail, CopyConstruct<int>, Element, GetDOTASlotType, GrowMemory, Purge, RemoveAll, _V_strcmp, operator[]
// calls: KeyValues::GetFirstSubKey, KeyValues::GetString, strcmp, KeyValues::GetNextKey, CUtlMemory<int, int>::Grow, CUtlMemory<int, int>::Purge
// callers: CDOTAItemSchema::BInitSchema
// globals: GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings
bool __fastcall CDOTAItemSchema::BInitPlayerLoadout(
        CDOTAItemSchema *const this,
        KeyValues *pKVPlayerLoadoutBlock,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  bool v3; // zf
  KeyValues *i; // r13
  const char *String; // rbx
  __int64 v6; // r14
  __int64 m_Size; // rbx
  int v8; // eax
  int *v9; // rax
  KeyValues *pKVPlayerLoadoutBlocka; // [rsp+0h] [rbp-50h]
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-48h]

  v3 = (this->m_vecPlayerLoadoutSlots.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vecPlayerLoadoutSlots.m_Size = 0;
  p_m_Memory = &this->m_vecPlayerLoadoutSlots.m_Memory;
  if ( v3 )
  {
    pKVPlayerLoadoutBlocka = pKVPlayerLoadoutBlock;
    CUtlMemory<int,int>::Purge(&this->m_vecPlayerLoadoutSlots.m_Memory);
    pKVPlayerLoadoutBlock = pKVPlayerLoadoutBlocka;
  }
  for ( i = KeyValues::GetFirstSubKey(pKVPlayerLoadoutBlock); i != 0; i = KeyValues::GetNextKey(i) )
  {
    String = KeyValues::GetString(i, 0, "", 0, 0);
    if ( String != 0 )
    {
      v6 = 0;
      while ( strcmp(*(&GetDOTALoadoutTypeStrings(void)::s_szDOTALoadoutTypeStrings + v6), String) != 0 )
      {
        if ( ++v6 == 45 )
          goto LABEL_13;
      }
      if ( v6 != 0 )
      {
        m_Size = this->m_vecPlayerLoadoutSlots.m_Size;
        v8 = this->m_vecPlayerLoadoutSlots.m_Size;
        if ( m_Size == this->m_vecPlayerLoadoutSlots.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(p_m_Memory, 1);
          v8 = this->m_vecPlayerLoadoutSlots.m_Size;
        }
        this->m_vecPlayerLoadoutSlots.m_Size = v8 + 1;
        v9 = &this->m_vecPlayerLoadoutSlots.m_Memory.m_pMemory[m_Size];
        if ( v9 != 0 )
          *v9 = v6;
      }
    }
LABEL_13:
    ;
  }
  return pVecErrors == 0 || pVecErrors->m_Size == 0;
}


// CDOTAItemSchema::GetNumPlayerLoadoutSlots  (line 1134, @0x0000000002e38000, libserver.so)
int __fastcall CDOTAItemSchema::GetNumPlayerLoadoutSlots(const CDOTAItemSchema *const this)
{
  return this->m_vecPlayerLoadoutSlots.m_Size;
}


// CDOTAItemSchema::GetPlayerLoadoutSlotType  (line 1143, @0x0000000002e38010, libserver.so)  // inlines: IsValidIndex, operator[]
// callers: CDOTAInventoryManager::InitPlayerLoadoutSlots
int __fastcall CDOTAItemSchema::GetPlayerLoadoutSlotType(const CDOTAItemSchema *const this, int iSlot)
{
  int result; // eax

  result = -1;
  if ( iSlot >= 0 && iSlot < this->m_vecPlayerLoadoutSlots.m_Size )
    return this->m_vecPlayerLoadoutSlots.m_Memory.m_pMemory[iSlot];
  return result;
}


// CDOTAItemSchema::CalculateHeroItemization  (line 1156, @0x0000000002e41db0, libserver.so)  // inlines: AddToTail, CopyConstruct<unsigned int>, Element, Find, GrowMemory, IsValidIndex, operator[]
// calls: __dynamic_cast, CUtlMemory<unsigned int, int>::Grow, IsAppDota2Main
// callers: CDOTAItemSchema::BInitSchema
// globals: `typeinfo for'CDOTAItemDefinition
void __fastcall CDOTAItemSchema::CalculateHeroItemization(CDOTAItemSchema *const this)
{
  __int64 v2; // r12
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v3; // rax
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::ElemType_t m_elem; // rdi
  _BYTE *v5; // rax
  _BYTE *v6; // rbx
  unsigned int v7; // r13d
  int v8; // eax
  int m_Size; // r15d
  unsigned int *m_pMemory; // rcx
  unsigned int *v11; // rcx
  int v12; // edx
  int v13; // edx
  unsigned int *v14; // rdx
  int nHeroID; // [rsp+Ch] [rbp-44h]
  CUtlVectorBase<unsigned int,CUtlMemory<unsigned int,int> >::CAllocator *p_m_Memory; // [rsp+10h] [rbp-40h]
  uint32 unNumHeroes; // [rsp+18h] [rbp-38h]
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t iItem; // [rsp+1Ch] [rbp-34h]

  v2 = 0;
  iItem = 0;
  p_m_Memory = &this->m_vecItemizedHeroIDs.m_Memory;
  if ( this->m_mapItems.m_nMaxElement > 0 )
  {
    while ( 1 )
    {
      v3 = &this->m_mapItems.m_memNodes.m_pMemory[v2];
      if ( v3->m_iNextNode >= -1 )
      {
        m_elem = v3->m_elem;
        if ( m_elem != 0 )
        {
          v5 = __dynamic_cast(m_elem, &`typeinfo for'CEconItemDefinition, &`typeinfo for'CDOTAItemDefinition, 0);
          v6 = v5;
          if ( v5 != 0
            && (v5[272] & 2) == 0
            && (*(*v5 + 112LL))(v5) == 0
            && ((*(*v6 + 120LL))(v6) != 0 || IsAppDota2Main()) )
          {
            unNumHeroes = (*(*v6 + 208LL))(v6);
            if ( unNumHeroes != 0 )
              break;
          }
        }
      }
LABEL_3:
      ++iItem;
      ++v2;
      if ( this->m_mapItems.m_nMaxElement <= iItem )
        return;
    }
    v7 = 0;
    while ( 1 )
    {
      v8 = (*(*v6 + 216LL))(v6, v7);
      if ( v8 != -1 )
      {
        m_Size = this->m_vecItemizedHeroIDs.m_Size;
        if ( m_Size <= 0 )
          goto LABEL_18;
        m_pMemory = this->m_vecItemizedHeroIDs.m_Memory.m_pMemory;
        if ( v8 != *m_pMemory )
          break;
      }
LABEL_22:
      if ( ++v7 == unNumHeroes )
        goto LABEL_3;
    }
    v11 = m_pMemory + 1;
    v12 = 0;
    while ( ++v12 != m_Size )
    {
      if ( v8 == *v11++ )
      {
        if ( v12 != -1 )
          goto LABEL_22;
        break;
      }
    }
LABEL_18:
    v13 = this->m_vecItemizedHeroIDs.m_Size;
    if ( m_Size == this->m_vecItemizedHeroIDs.m_Memory.m_nAllocationCount )
    {
      nHeroID = v8;
      CUtlMemory<unsigned int,int>::Grow(p_m_Memory, 1);
      v13 = this->m_vecItemizedHeroIDs.m_Size;
      v8 = nHeroID;
    }
    this->m_vecItemizedHeroIDs.m_Size = v13 + 1;
    v14 = &this->m_vecItemizedHeroIDs.m_Memory.m_pMemory[m_Size];
    if ( v14 != 0 )
      *v14 = v8;
    goto LABEL_22;
  }
}


// CDOTAItemSchema::BuildAssociatedLeagueInfo  (line 1199, @0x0000000002e4bc50, libserver.so)  // inlines: AddMultipleToTail, AllocNode, Bitvec_Set, ConvertToLeaguePass, CopyConstruct<CDOTAItemSchema::AssociatedLeagueInfo_t>, CopyConstruct<item_definition_index_t>, EnsureCapacity, FindInBucket, FindOrInsert, FreeNodeIDToIndex, Get, GetItemContribution, GetTypedEconTool<CEconTool_LeagueViewPass>, GrowMemory, GrowVector, IncrementalRehash, InsertInternal, InsertMultipleBefore, IsValidIndex, ModPowerOf2<unsigned int, int>, MurmurHash3Item<item_definition_index_t>, Purge, RehashNodesInBucket, RemoveAll, Set, UnlinkNodeFromBucket, memcpy, memset, operator(), operator==, operator[]
// calls: CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t>::HashBucket_t, int>::Purge, __dynamic_cast, memset, MurmurHash3_32, CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t, CUtlHashMapLargeDefEquals<item_definition_index_t>, MurmurHash3Functor<item_definition_index_t> >::LinkNodeIntoBucket, CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t>::Node_t, int>::Grow, CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t>::HashBucket_t, int>::Grow, CUtlMemory<CUtlHashMapLarge<item_definition_index_t, CDOTAItemSchema::AssociatedLeagueInfo_t>::Node_t, int>::Purge, memcpy
// callers: CDOTAItemSchema::BInitSchema
// globals: `typeinfo for'CEconTool_LeagueViewPass
void __fastcall CDOTAItemSchema::BuildAssociatedLeagueInfo(CDOTAItemSchema *const this)
{
  CDOTAItemSchema *v1; // r15
  bool v2; // zf
  int m_nMaxElement; // ebx
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v4; // rax
  CUtlHashMapLarge<item_definition_index_t,CEconItemDefinition*,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::ElemType_t m_elem; // rax
  IEconTool *m_pTool; // rdi
  _DWORD *v7; // rax
  int v8; // eax
  CDOTAItemSchema *v9; // r14
  __int64 v10; // rax
  uint16 v11; // dx
  int v12; // xmm0_4
  int m_cElements; // eax
  int m_Size; // edx
  int v15; // ebx
  int v16; // r13d
  uint32 m_nGrowSize; // eax
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v18; // rsi
  __int64 v19; // rax
  int v20; // r12d
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *v21; // rdi
  size_t v22; // rdx
  int v23; // edx
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t m_nMinRehashedBucket; // r12d
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t m_nMaxRehashedBucket; // edi
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *v26; // rsi
  int v27; // ecx
  __int64 v28; // r15
  uint32 *m_pInt; // rax
  int v30; // r12d
  int m_iNode; // r13d
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v32; // rdi
  int m_iNextNode; // ebx
  uint32 v34; // eax
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v35; // rdx
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *v36; // rcx
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v37; // esi
  __int64 v38; // rdi
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v39; // rdi
  __int64 v40; // rcx
  int j; // r12d
  int v42; // edx
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v43; // rcx
  int m_iNodeFreeListHead; // esi
  __int64 v45; // rax
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v46; // rcx
  int v47; // edi
  item_definition_index_t *p_m_key; // rcx
  __int64 v49; // rax
  int v50; // eax
  bool v51; // cc
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t v52; // eax
  uint32 *v53; // rax
  CDOTAItemSchema *v54; // r13
  int k; // r14d
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v56; // rdi
  int v57; // ebx
  uint32 v58; // eax
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v59; // rdx
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *v60; // rcx
  int v61; // esi
  __int64 v62; // rdi
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v63; // rdi
  __int64 v64; // rcx
  __int64 v65; // rax
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v66; // rax
  __int64 v67; // rax
  int m_nAllocationCount; // eax
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *v69; // rax
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *m_pMemory; // r12
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v71; // rax
  __int64 v72; // [rsp+10h] [rbp-A0h]
  int v73; // [rsp+1Ch] [rbp-94h]
  __int64 i; // [rsp+20h] [rbp-90h]
  _DWORD *v75; // [rsp+28h] [rbp-88h]
  CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t>::HashBucket_t,int> *p_m_Memory; // [rsp+30h] [rbp-80h]
  CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t>::Node_t,int> *p_m_memNodes; // [rsp+38h] [rbp-78h]
  CLargeVarBitVec *p_m_bitsMigratedBuckets; // [rsp+40h] [rbp-70h]
  __int64 v79; // [rsp+48h] [rbp-68h]
  int v80; // [rsp+50h] [rbp-60h]
  int nDefn; // [rsp+54h] [rbp-5Ch]
  uint32 v82; // [rsp+58h] [rbp-58h]
  int v83; // [rsp+5Ch] [rbp-54h]
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> > *p_m_ItemDefToAssociatedLeague; // [rsp+60h] [rbp-50h]
  item_definition_index_t unDefIndex; // [rsp+70h] [rbp-40h] BYREF

  v1 = this;
  p_m_ItemDefToAssociatedLeague = &this->m_ItemDefToAssociatedLeague;
  this->m_ItemDefToAssociatedLeague.m_cElements = 0;
  this->m_ItemDefToAssociatedLeague.m_nMaxElement = 0;
  this->m_ItemDefToAssociatedLeague.m_iNodeFreeListHead = -1;
  this->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket = -1;
  this->m_ItemDefToAssociatedLeague.m_nMaxRehashedBucket = -1;
  p_m_bitsMigratedBuckets = &this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets;
  CVarBitVecBase<int,32>::Resize(&this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets, 0, 0);
  p_m_memNodes = &v1->m_ItemDefToAssociatedLeague.m_memNodes;
  if ( (v1->m_ItemDefToAssociatedLeague.m_memNodes.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::Node_t,int>::Purge(&v1->m_ItemDefToAssociatedLeague.m_memNodes);
  v2 = (v1->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  v1->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size = 0;
  p_m_Memory = &v1->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory;
  if ( v2 )
    CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Purge(&v1->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory);
  m_nMaxElement = v1->m_mapItems.m_nMaxElement;
  if ( m_nMaxElement > 0 )
  {
    nDefn = 0;
    for ( i = 0; ; ++i )
    {
      if ( m_nMaxElement > nDefn )
      {
        v4 = &v1->m_mapItems.m_memNodes.m_pMemory[i];
        if ( v4->m_iNextNode >= -1 )
        {
          m_elem = v4->m_elem;
          if ( m_elem != 0 && (*(m_elem + 272) & 2) == 0 )
          {
            m_pTool = m_elem->m_pTool;
            if ( m_pTool != 0 )
            {
              v7 = __dynamic_cast(m_pTool, &`typeinfo for'IEconTool, &`typeinfo for'CEconTool_LeagueViewPass, 0);
              v75 = v7;
              if ( v7 != 0 && v7[20] == 0 )
              {
                v8 = v7[28];
                v80 = v75[18];
                if ( v8 > 0 )
                  break;
              }
            }
          }
        }
      }
LABEL_62:
      if ( m_nMaxElement <= ++nDefn )
        return;
    }
    v79 = 0;
    v9 = v1;
    v72 = 8LL * (v8 - 1) + 8;
    while ( 1 )
    {
      v10 = *(v75 + 15) + v79;
      v11 = *v10;
      v12 = *(v10 + 4);
      m_cElements = v9->m_ItemDefToAssociatedLeague.m_cElements;
      v73 = v12;
      unDefIndex.m_Data = v11;
      m_Size = v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size;
      if ( m_cElements >= m_Size )
      {
        v15 = 2 * m_Size;
        v16 = v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size;
        if ( 2 * m_Size <= 15 )
          v15 = 16;
        if ( v15 > v9->m_ItemDefToAssociatedLeague.m_memNodes.m_nAllocationCount )
        {
          m_nGrowSize = v9->m_ItemDefToAssociatedLeague.m_memNodes.m_nGrowSize;
          if ( (m_nGrowSize & 0x40000000) == 0 )
          {
            if ( (m_nGrowSize & 0xC0000000) != 0 )
            {
              m_pMemory = v9->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory;
              v71 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * v15);
              v9->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory = v71;
              if ( m_pMemory != 0 )
                memcpy(v71, m_pMemory, 16LL * v9->m_ItemDefToAssociatedLeague.m_memNodes.m_nAllocationCount);
              v9->m_ItemDefToAssociatedLeague.m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
            }
            else
            {
              v18 = v9->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory;
              v19 = *g_pMemAlloc;
              if ( v18 != 0 )
                v9->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory = (*(v19 + 8))(g_pMemAlloc, v18, 16LL * v15);
              else
                v9->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory = (*v19)(g_pMemAlloc, 16LL * v15);
            }
            v16 = v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size;
            v9->m_ItemDefToAssociatedLeague.m_memNodes.m_nAllocationCount = v15;
          }
        }
        if ( v15 <= v16 )
          goto LABEL_84;
        v20 = v16;
        if ( v16 > 15 || (v20 = 16, v15 > 16) )
        {
          do
            v20 *= 2;
          while ( v15 > v20 );
        }
        if ( v20 == v16 )
        {
          v21 = &v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory[v16];
          v22 = 0;
        }
        else
        {
          m_nAllocationCount = v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_nAllocationCount;
          if ( m_nAllocationCount < v20 )
            CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::HashBucket_t,int>::Grow(
              p_m_Memory,
              v20 - m_nAllocationCount);
          v69 = v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory;
          v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size = v20;
          v22 = 4LL * (v20 - v16);
          v21 = &v69[v16];
        }
        memset(v21, -1, v22);
        m_cElements = v9->m_ItemDefToAssociatedLeague.m_cElements;
        v9->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket = 0;
        v9->m_ItemDefToAssociatedLeague.m_nMaxRehashedBucket = v16;
        if ( m_cElements > 0 )
        {
          CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
          CVarBitVecBase<int,32>::Resize(
            p_m_bitsMigratedBuckets,
            v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size,
            0);
LABEL_84:
          v23 = v9->m_ItemDefToAssociatedLeague.m_memNodes.m_nAllocationCount;
          if ( v23 > v9->m_ItemDefToAssociatedLeague.m_cElements )
            goto LABEL_34;
          goto LABEL_85;
        }
        v9->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket = v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size;
      }
      v23 = v9->m_ItemDefToAssociatedLeague.m_memNodes.m_nAllocationCount;
      if ( v23 <= m_cElements )
LABEL_85:
        CUtlMemory<CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::Node_t,int>::Grow(
          p_m_memNodes,
          2 * v23);
LABEL_34:
      m_nMinRehashedBucket = v9->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket;
      m_nMaxRehashedBucket = v9->m_ItemDefToAssociatedLeague.m_nMaxRehashedBucket;
      if ( m_nMinRehashedBucket < m_nMaxRehashedBucket )
      {
        v26 = v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory;
        v27 = v9->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket;
        v28 = m_nMinRehashedBucket;
        while ( 1 )
        {
          if ( v26[v28].m_iNode != -1 )
          {
            m_pInt = v9->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt;
            if ( ((1 << v27) & m_pInt[v27 >> 5]) == 0 )
              break;
          }
          ++v27;
          ++v28;
          v9->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket = v27;
          if ( v27 == m_nMaxRehashedBucket )
            goto LABEL_65;
        }
        v30 = v27;
        m_pInt[v27 >> 5] |= 1 << v27;
        m_iNode = v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory[v28].m_iNode;
        if ( m_iNode != -1 )
        {
          while ( 1 )
          {
            v32 = &v9->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory[m_iNode];
            m_iNextNode = v32->m_iNextNode;
            v34 = (v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(v32, 2u, 0x417u, 0);
            if ( v30 != v34 )
            {
              v35 = v9->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory;
              v36 = &v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory[v28];
              v37 = v35[m_iNode].m_iNextNode;
              v38 = v36->m_iNode;
              if ( m_iNode == v38 )
              {
                v36->m_iNode = v37;
              }
              else if ( v38 != -1 )
              {
                v39 = &v35[v38];
                v40 = v39->m_iNextNode;
                if ( m_iNode == v40 )
                {
LABEL_82:
                  v39->m_iNextNode = v37;
                }
                else
                {
                  while ( v40 != -1 )
                  {
                    v39 = &v35[v40];
                    v40 = v39->m_iNextNode;
                    if ( m_iNode == v40 )
                      goto LABEL_82;
                  }
                }
              }
              CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::LinkNodeIntoBucket(
                p_m_ItemDefToAssociatedLeague,
                v34,
                m_iNode);
            }
            if ( m_iNextNode == -1 )
              break;
            m_iNode = m_iNextNode;
          }
        }
        v50 = v9->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket + 1;
        v51 = v50 < v9->m_ItemDefToAssociatedLeague.m_nMaxRehashedBucket;
        v9->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket = v50;
        if ( !v51 )
        {
LABEL_65:
          v52 = v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size;
          v9->m_ItemDefToAssociatedLeague.m_nMaxRehashedBucket = -1;
          v9->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket = v52;
          CVarBitVecBase<int,32>::Resize(p_m_bitsMigratedBuckets, 0, 0);
        }
      }
      v82 = MurmurHash3_32(&unDefIndex, 2u, 0x417u, 0);
      v83 = v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size >> 1;
      for ( j = v82 & (v83 - 1); j >= v9->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket; j = v82 & (v83 - 1) )
      {
        v53 = v9->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt;
        if ( ((1 << j) & v53[j >> 5]) != 0 )
          break;
        v53[j >> 5] |= 1 << j;
        if ( v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory[j].m_iNode != -1 )
        {
          v54 = v9;
          for ( k = v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory[j].m_iNode; ; k = v57 )
          {
            v56 = &v54->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory[k];
            v57 = v56->m_iNextNode;
            v58 = (v54->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size - 1) & MurmurHash3_32(v56, 2u, 0x417u, 0);
            if ( j != v58 )
            {
              v59 = v54->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory;
              v60 = &v54->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory[j];
              v61 = v59[k].m_iNextNode;
              v62 = v60->m_iNode;
              if ( k == v62 )
              {
                v60->m_iNode = v61;
              }
              else if ( v62 != -1 )
              {
                v63 = &v59[v62];
                v64 = v63->m_iNextNode;
                if ( k == v64 )
                {
LABEL_80:
                  v63->m_iNextNode = v61;
                }
                else
                {
                  while ( v64 != -1 )
                  {
                    v63 = &v59[v64];
                    v64 = v63->m_iNextNode;
                    if ( k == v64 )
                      goto LABEL_80;
                  }
                }
              }
              CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::LinkNodeIntoBucket(
                p_m_ItemDefToAssociatedLeague,
                v58,
                k);
            }
            if ( v57 == -1 )
              break;
          }
          v9 = v54;
        }
        v83 >>= 1;
      }
      v42 = v9->m_ItemDefToAssociatedLeague.m_cElements;
      if ( v42 == 0
        || (v65 = v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory[v82
                                                                                    & (v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size
                                                                                     - 1)].m_iNode) == -1 )
      {
        v43 = v9->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory;
        if ( v42 != v9->m_ItemDefToAssociatedLeague.m_nMaxElement )
          goto LABEL_54;
LABEL_92:
        v9->m_ItemDefToAssociatedLeague.m_cElements = v42 + 1;
        v9->m_ItemDefToAssociatedLeague.m_nMaxElement = v42 + 1;
        v45 = v42;
        v46 = &v43[v45];
LABEL_55:
        v46->m_iNextNode = -1;
        p_m_key = &v9->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory[v45].m_key;
        if ( p_m_key != 0 )
        {
          p_m_key->m_Data = unDefIndex.m_Data;
          v49 = &v9->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory[v45];
        }
        else
        {
          v49 = 0;
        }
        if ( v49 != -4 )
        {
          *(v49 + 8) = v73;
          *(v49 + 4) = v80;
        }
        CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t>>::LinkNodeIntoBucket(
          p_m_ItemDefToAssociatedLeague,
          v82 & (v9->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size - 1),
          v42);
        goto LABEL_60;
      }
      v43 = v9->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory;
      v66 = &v43[v65];
      if ( v66->m_key.m_Data != unDefIndex.m_Data )
      {
        while ( 1 )
        {
          v67 = v66->m_iNextNode;
          if ( v67 == -1 )
            break;
          v66 = &v43[v67];
          if ( unDefIndex.m_Data == v66->m_key.m_Data )
            goto LABEL_60;
        }
        if ( v42 == v9->m_ItemDefToAssociatedLeague.m_nMaxElement )
          goto LABEL_92;
LABEL_54:
        m_iNodeFreeListHead = v9->m_ItemDefToAssociatedLeague.m_iNodeFreeListHead;
        v45 = m_iNodeFreeListHead;
        v46 = &v43[v45];
        v47 = -3 - v46->m_iNextNode;
        v9->m_ItemDefToAssociatedLeague.m_cElements = v42 + 1;
        v42 = m_iNodeFreeListHead;
        v9->m_ItemDefToAssociatedLeague.m_iNodeFreeListHead = v47;
        goto LABEL_55;
      }
LABEL_60:
      v79 += 8;
      if ( v79 == v72 )
      {
        m_nMaxElement = v9->m_mapItems.m_nMaxElement;
        v1 = v9;
        goto LABEL_62;
      }
    }
  }
}


// CDOTAItemSchema::GetAssociatedLeagueForItemDef  (line 1232, @0x0000000002e38040, libserver.so)  // inlines: Find, FindInBucket, Get, ModPowerOf2<unsigned int, int>, MurmurHash3Item<item_definition_index_t>, operator(), operator==, operator[]
// calls: MurmurHash3_32
__int64 __fastcall CDOTAItemSchema::GetAssociatedLeagueForItemDef(
        CDOTAItemSchema *const this,
        uint16 a2,
        uint32 *pLeagueID,
        float *pRevenuePercent)
{
  uint32 v7; // eax
  int m_Size; // r8d
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::HashBucket_t *m_pMemory; // r10
  __int64 m_iNode; // rsi
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v11; // rcx
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v12; // rsi
  __int64 m_iNextNode; // rsi
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::IndexType_t m_nMinRehashedBucket; // edx
  int i; // r8d
  int v16; // ecx
  __int64 v17; // rsi
  CUtlHashMapLarge<item_definition_index_t,CDOTAItemSchema::AssociatedLeagueInfo_t,CUtlHashMapLargeDefEquals<item_definition_index_t>,MurmurHash3Functor<item_definition_index_t> >::Node_t *v18; // rcx
  __int64 v19; // rsi
  item_definition_index_t nItemDefa; // [rsp+0h] [rbp-30h] BYREF

  nItemDefa.m_Data = a2;
  if ( this->m_ItemDefToAssociatedLeague.m_cElements != 0 )
  {
    v7 = MurmurHash3_32(&nItemDefa, 2u, 0x417u, 0);
    m_Size = this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Size;
    m_pMemory = this->m_ItemDefToAssociatedLeague.m_vecHashBuckets.m_Memory.m_pMemory;
    m_iNode = m_pMemory[v7 & (m_Size - 1)].m_iNode;
    if ( m_iNode != -1 )
    {
      v11 = this->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory;
      v12 = &v11[m_iNode];
      if ( v12->m_key.m_Data == nItemDefa.m_Data )
      {
LABEL_15:
        *pLeagueID = v12->m_elem.m_nLeagueID;
        *pRevenuePercent = v12->m_elem.m_flRevenuePercent;
        return 1;
      }
      while ( 1 )
      {
        m_iNextNode = v12->m_iNextNode;
        if ( m_iNextNode == -1 )
          break;
        v12 = &v11[m_iNextNode];
        if ( nItemDefa.m_Data == v12->m_key.m_Data )
          goto LABEL_15;
      }
    }
    m_nMinRehashedBucket = this->m_ItemDefToAssociatedLeague.m_nMinRehashedBucket;
    for ( i = m_Size >> 1; i >= m_nMinRehashedBucket; i >>= 1 )
    {
      v16 = v7 & (i - 1);
      if ( ((1 << (v7 & (i - 1))) & this->m_ItemDefToAssociatedLeague.m_bitsMigratedBuckets.m_pInt[v16 >> 5]) == 0 )
      {
        v17 = m_pMemory[v16].m_iNode;
        if ( v17 != -1 )
        {
          v18 = this->m_ItemDefToAssociatedLeague.m_memNodes.m_pMemory;
          v12 = &v18[v17];
          if ( v12->m_key.m_Data == nItemDefa.m_Data )
            goto LABEL_15;
          while ( 1 )
          {
            v19 = v12->m_iNextNode;
            if ( v19 == -1 )
              break;
            v12 = &v18[v19];
            if ( nItemDefa.m_Data == v12->m_key.m_Data )
              goto LABEL_15;
          }
        }
      }
    }
  }
  *pLeagueID = 0;
  *pRevenuePercent = 0.0;
  return 0;
}


// CDOTAItemSchema::GetCharacterSlotType  (line 1252, @0x0000000002e33980, libserver.so)  // inlines: DoLookup<int>, Find, GetItemSlotsForHero, GetSlotType, operator(), operator[]
// calls: CUtlHashtable<int, CDOTAHeroSlots, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry<int, CDOTAHeroSlots>, int> >::DoLookup<int>
int __fastcall CDOTAItemSchema::GetCharacterSlotType(CDOTAItemSchema *const this, int iCharacter, int iSlot)
{
  CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int> >::handle_t *v3; // rcx
  __int64 v4; // r12
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v8; // eax
  CUtlHashtableEntry<int,CDOTAHeroSlots> *v9; // rcx

  v4 = iSlot;
  if ( stru_4D583D0.m_nUsed == 0 )
    return -1;
  v6 = 33 * (((4097 * iCharacter + 2127912214) >> 19) ^ (4097 * iCharacter + 2127912214) ^ 0xC761C23C);
  v7 = 9 * ((v6 - 369570787) ^ ((v6 + 374761393) << 9)) - 42973499;
  v8 = CUtlHashtable<int,CDOTAHeroSlots,DefaultHashFunctor<int>,DefaultEqualFunctor<int>,undefined_t,CUtlMemory<CUtlHashtableEntry<int,CDOTAHeroSlots>,int>>::DoLookup<int>(
         &stru_4D583D0,
         iCharacter,
         HIWORD(v7) ^ v7 ^ 0xB55A4F09,
         v3);
  if ( v8 == -1 )
    return -1;
  v9 = &stru_4D583D0.m_table.m_pMemory[v8];
  if ( v9 == -12LL || v4 > 0xF )
    return -1;
  else
    return v9->data[v4 + 34];
}


// CDOTAItemSchema::GetCharacterID  (line 1264, @0x0000000002e30d50, libserver.so)
// calls: DOTAGameManager, CDOTAGameManager::GetHeroIDByName
int __fastcall CDOTAItemSchema::GetCharacterID(CDOTAItemSchema *const this, const char *pszCharacterName)
{
  CDOTAGameManager *v3; // rax

  v3 = DOTAGameManager();
  return CDOTAGameManager::GetHeroIDByName(v3, pszCharacterName);
}


// CDOTAItemSchema::GetCharacterCount  (line 1272, @0x0000000002e30f70, libserver.so)
// calls: DOTAGameManager, CDOTAGameManager::GetHighestHeroID
int __fastcall CDOTAItemSchema::GetCharacterCount(CDOTAItemSchema *const this)
{
  CDOTAGameManager *v1; // rax

  v1 = DOTAGameManager();
  return CDOTAGameManager::GetHighestHeroID(v1);
}


// CDOTAItemSchema::GetCharacterName  (line 1280, @0x0000000002e30ea0, libserver.so)
// calls: DOTAGameManager, CDOTAGameManager::GetHeroDataByHeroID, KeyValues::GetName
const char *__fastcall CDOTAItemSchema::GetCharacterName(CDOTAItemSchema *const this, int iCharacter)
{
  CDOTAGameManager *v3; // rax
  KeyValues *HeroDataByHeroID; // rax

  v3 = DOTAGameManager();
  HeroDataByHeroID = CDOTAGameManager::GetHeroDataByHeroID(v3, iCharacter);
  if ( HeroDataByHeroID != 0 )
    return KeyValues::GetName(HeroDataByHeroID);
  else
    return 0;
}


// CDOTAItemSchema::GetCharacterModel  (line 1296, @0x0000000002e30ee0, libserver.so)
// calls: DOTAGameManager, CDOTAGameManager::GetHeroDataByHeroID, KeyValues::GetString
const char *__fastcall CDOTAItemSchema::GetCharacterModel(CDOTAItemSchema *const this, int iCharacter)
{
  CDOTAGameManager *v3; // rax
  KeyValues *HeroDataByHeroID; // rax

  v3 = DOTAGameManager();
  HeroDataByHeroID = CDOTAGameManager::GetHeroDataByHeroID(v3, iCharacter);
  if ( HeroDataByHeroID != 0 )
    return KeyValues::GetString(HeroDataByHeroID, "Model", "", 0, 0);
  else
    return 0;
}


// CDOTAItemSchema::GetToolType  (line 1312, @0x0000000002e30a30, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: strcmp
// globals: g_DOTA_ToolType
int __fastcall CDOTAItemSchema::GetToolType(const CDOTAItemSchema *const this, const char *pszToolType)
{
  __int64 v3; // rbx
  const char *v4; // rdi

  if ( pszToolType == 0 )
    return -1;
  v3 = 0;
  while ( 1 )
  {
    v4 = g_DOTA_ToolType[v3];
    if ( pszToolType == v4 || strcmp(v4, pszToolType) == 0 )
      break;
    if ( ++v3 == 3 )
      return -1;
  }
  return v3;
}


// CDOTAItemSchema::GetHeroID  (line 1331, @0x0000000002e33820, libserver.so)  // inlines: Element, Find, IsIdxValid, IsValidIndex, LeftChild, RightChild, operator(), operator[]
uint32 __fastcall CDOTAItemSchema::GetHeroID(CDOTAItemSchema *const this, const char *pszHeroName)
{
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v5; // rbx
  uint32 result; // eax
  UtlRBTreeNode_t<CUtlMap<char const*,unsigned int,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v7; // rbx
  _QWORD v8[9]; // [rsp-48h] [rbp-48h] BYREF

  if ( pszHeroName == 0 )
    return 0;
  v8[0] = pszHeroName;
  m_Root = this->m_dictHeroIDs.m_Elements.m_Tree.m_Root;
  if ( m_Root == -1 )
    return 0;
  m_pMemory = this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = m_Root;
      if ( !this->m_dictHeroIDs.m_Elements.m_Tree.m_LessFunc.m_LessFunc(v8, &m_pMemory[v5].m_Data) )
        break;
      m_pMemory = this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[m_Root].m_Left;
      if ( m_Root == -1 )
        return 0;
    }
    if ( !this->m_dictHeroIDs.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements.m_pMemory[v5].m_Data,
            v8) )
      break;
    m_pMemory = this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v5].m_Right;
    if ( m_Root == -1 )
      return 0;
  }
  if ( m_Root < 0LL
    || m_Root >= this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements.m_nAllocationCount
    || this->m_dictHeroIDs.m_Elements.m_Tree.m_LastAlloc.index < m_Root )
  {
    return 0;
  }
  result = 0;
  v7 = &this->m_dictHeroIDs.m_Elements.m_Tree.m_Elements.m_pMemory[v5];
  if ( v7->m_Left != m_Root )
    return v7->m_Data.elem;
  return result;
}


// CDOTAItemSchema::GetHeroName  (line 1343, @0x0000000002e33520, libserver.so)  // inlines: CEconSchemaSymbol, CUtlSymbolLarge, Element, Find, Get, IsIdxValid, IsValidIndex, LeftChild, Node_t, RightChild, String, operator(), operator[]
const char *__fastcall CDOTAItemSchema::GetHeroName(CDOTAItemSchema *const this, uint32 unHeroID)
{
  unsigned __int16 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<unsigned int,CEconSchemaSymbol>::Node_t,short unsigned int> *m_pMemory; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // r14
  const char *result; // rax
  UtlRBTreeNode_t<CUtlMap<unsigned int,CEconSchemaSymbol>::Node_t,short unsigned int> *v8; // rdx
  uint32 v9; // [rsp+10h] [rbp-40h] BYREF
  __int64 v10; // [rsp+18h] [rbp-38h]

  v10 = 0;
  m_Root = this->m_mapHeroNames.m_Tree.m_Root;
  v9 = unHeroID;
  if ( m_Root == 0xFFFF )
  {
LABEL_7:
    v5 = 0xFFFF;
    m_Root = -1;
  }
  else
  {
    m_pMemory = this->m_mapHeroNames.m_Tree.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = m_Root;
        v6 = m_Root;
        if ( !this->m_mapHeroNames.m_Tree.m_LessFunc.m_LessFunc(&v9, &m_pMemory[v6].m_Data) )
          break;
        m_pMemory = this->m_mapHeroNames.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[m_Root].m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_7;
      }
      if ( !this->m_mapHeroNames.m_Tree.m_LessFunc.m_LessFunc(
              &this->m_mapHeroNames.m_Tree.m_Elements.m_pMemory[v6].m_Data,
              &v9) )
        break;
      m_pMemory = this->m_mapHeroNames.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v6].m_Right;
      if ( m_Root == 0xFFFF )
        goto LABEL_7;
    }
  }
  result = 0;
  if ( v5 < this->m_mapHeroNames.m_Tree.m_Elements.m_nAllocationCount
    && this->m_mapHeroNames.m_Tree.m_LastAlloc.index >= m_Root
    && m_Root != 0xFFFF )
  {
    v8 = &this->m_mapHeroNames.m_Tree.m_Elements.m_pMemory[m_Root];
    if ( v8->m_Left != m_Root )
    {
      result = "";
      if ( v8->m_Data.elem.u.m_Id != 0 )
        return v8->m_Data.elem.u.m_pAsString;
    }
  }
  return result;
}


// CDOTAItemSchema::AddCustomizableCourier  (line 1355, @0x0000000002e4add0, libserver.so)  // inlines: Element, Find, FindInsertionPosition, Get, Insert, InsertAt, IsIdxValid, IsValidIndex, LeftChild, MemAlloc_StrDupFunc, RightChild, String, operator(), operator[], strcpy
// calls: CUtlRBTree<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find, strlen, strcpy, CUtlRBTree<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent
// callers: CDOTAItemDefinition::InitCustomizableCourierData
void __fastcall CDOTAItemSchema::AddCustomizableCourier(
        CDOTAItemSchema *const this,
        customizable_courier_t *const customCourier)
{
  const char *m_Id; // rax
  CUtlDict<customizable_courier_t*,int> *p_m_dictCustomizableCouriers; // r15
  int v6; // eax
  const char *v7; // r13
  size_t v8; // rsi
  char *v9; // rax
  char *v10; // rax
  int m_Root; // r13d
  int m_Left; // eax
  char v13; // cl
  bool v14; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  int v16; // eax
  bool v17; // bl
  CUtlMap<char const*,customizable_courier_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+0h] [rbp-40h] BYREF

  if ( customCourier->m_symCourier.u.m_Id != 0 )
    m_Id = customCourier->m_symCourier.u.m_Id;
  else
    m_Id = "";
  p_m_dictCustomizableCouriers = &this->m_dictCustomizableCouriers;
  search.key = m_Id;
  v6 = CUtlRBTree<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
         &this->m_dictCustomizableCouriers.m_Elements.m_Tree,
         &search);
  if ( v6 >= 0LL
    && v6 < this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements.m_nAllocationCount
    && v6 <= this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_LastAlloc.index
    && v6 != -1
    && v6 != this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements.m_pMemory[v6].m_Left )
  {
    return;
  }
  v7 = customCourier->m_symCourier.u.m_Id;
  if ( customCourier->m_symCourier.u.m_Id != 0 )
  {
    v8 = strlen(customCourier->m_symCourier.u.m_pAsString) + 1;
  }
  else
  {
    v7 = "";
    v8 = 1;
  }
  v9 = (**g_pMemAlloc)(g_pMemAlloc, v8);
  v10 = strcpy(v9, v7);
  m_Root = this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Root;
  search.elem = customCourier;
  search.key = v10;
  if ( m_Root == -1 )
  {
    v17 = 0;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v14 = !this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
             &search,
             &this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
    m_pMemory = this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v14 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v13 = 1;
    if ( m_Left == -1 )
      goto LABEL_16;
LABEL_13:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v13 = 0;
  if ( m_Left != -1 )
    goto LABEL_13;
LABEL_16:
  v17 = v13;
LABEL_17:
  v16 = CUtlRBTree<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &p_m_dictCustomizableCouriers->m_Elements.m_Tree,
          &search);
  CUtlRBTree<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &p_m_dictCustomizableCouriers->m_Elements.m_Tree,
    v16,
    m_Root,
    v17);
  ++this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_NumElements;
}


// CDOTAItemSchema::GetCustomizableCourierSlot  (line 1369, @0x0000000002e454a0, libserver.so)  // inlines: Find, Get, IsIdxValid, IsValidIndex, LeftChild, String, operator char const*, operator[]
// calls: CUtlString::Get, CUtlRBTree<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, customizable_courier_t*, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Find
// callers: CDOTAItemDefinition::BuildCourierWearableList
const char *__fastcall CDOTAItemSchema::GetCustomizableCourierSlot(
        CDOTAItemSchema *const this,
        const CUtlString *const strCourier,
        int iSlotIndex)
{
  __int64 v3; // r12
  const char *v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ecx
  const char *result; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v10; // rdx
  __int64 v11; // rdx
  CUtlMap<char const*,customizable_courier_t*,int,bool (*)(char const* const&,char const* const&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  v3 = iSlotIndex;
  v5 = CUtlString::Get(strCourier);
  if ( v5 == 0 )
    return 0;
  search.key = v5;
  v6 = CUtlRBTree<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,customizable_courier_t *,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Find(
         &this->m_dictCustomizableCouriers.m_Elements.m_Tree,
         &search);
  v7 = v6;
  v8 = v6;
  if ( v6 < 0LL
    || v6 >= this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements.m_nAllocationCount
    || v6 > this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_LastAlloc.index )
  {
    return 0;
  }
  result = 0;
  if ( v8 != -1 )
  {
    v10 = &this->m_dictCustomizableCouriers.m_Elements.m_Tree.m_Elements.m_pMemory[v7];
    if ( v8 != v10->m_Left )
    {
      v11 = v10->m_Data.elem + 8 * v3;
      result = "";
      if ( *(v11 + 8) != 0 )
        return *(v11 + 8);
    }
  }
  return result;
}


// CDOTAItemSchema::AddCourierWearable  (line 1383, @0x0000000002e4af60, libserver.so)  // inlines: Element, FindInsertionPosition, Insert, InsertAt, LeftChild, MemAlloc_StrDupFunc, RightChild, String, operator(), operator[], strcpy
// calls: V_sprintf_safe<256ul>, strcpy, CUtlRBTree<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::NewNode, CUtlRBTree<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, item_definition_index_t, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::LinkToParent, __stack_chk_fail
// callers: CDOTAItemDefinition::InitCustomizableCourierData
// strings: "%s_%s_%i"
void __fastcall CDOTAItemSchema::AddCourierWearable(
        CDOTAItemSchema *const this,
        courier_wearable_t *const courierWearable,
        item_definition_index_t iDefIndex)
{
  const char *m_pAsString; // rcx
  const char *m_Id; // rdx
  char *v7; // rax
  char *v8; // rax
  int m_Root; // r13d
  int m_Left; // eax
  char v11; // cl
  bool v12; // zf
  UtlRBTreeNode_t<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  bool v14; // bl
  int v15; // eax
  CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+0h] [rbp-150h] BYREF
  char szKey[256]; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v18; // [rsp+118h] [rbp-38h]

  m_pAsString = "";
  v18 = __readfsqword(0x28u);
  if ( courierWearable->m_symSlot.u.m_Id != 0 )
    m_pAsString = courierWearable->m_symSlot.u.m_pAsString;
  m_Id = "";
  if ( courierWearable->m_symCourier.u.m_Id != 0 )
    m_Id = courierWearable->m_symCourier.u.m_Id;
  V_sprintf_safe<256ul>(szKey, "%s_%s_%i", m_Id, m_pAsString, courierWearable->m_nIndex);
  v7 = (**g_pMemAlloc)(g_pMemAlloc, strlen(szKey) + 1);
  v8 = strcpy(v7, szKey);
  m_Root = this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Root;
  pCopyFrom.elem = iDefIndex;
  pCopyFrom.key = v8;
  if ( m_Root == -1 )
  {
    v14 = 0;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v12 = !this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
             &pCopyFrom,
             &this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
    m_pMemory = this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_pMemory;
    if ( v12 )
      break;
    m_Left = m_pMemory[m_Root].m_Left;
    v11 = 1;
    if ( m_Left == -1 )
      goto LABEL_11;
LABEL_8:
    m_Root = m_Left;
  }
  m_Left = m_pMemory[m_Root].m_Right;
  v11 = 0;
  if ( m_Left != -1 )
    goto LABEL_8;
LABEL_11:
  v14 = v11;
LABEL_12:
  v15 = CUtlRBTree<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::NewNode(
          &this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree,
          &pCopyFrom);
  CUtlRBTree<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::LinkToParent(
    &this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree,
    v15,
    m_Root,
    v14);
  ++this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_NumElements;
}


// CDOTAItemSchema::GetCourierWearableItemDef  (line 1394, @0x0000000002e3e4f0, libserver.so)  // inlines: Element, Find, IsIdxValid, IsValidIndex, LeftChild, Node_t, RightChild, item_definition_index_t, operator(), operator[]
// calls: V_sprintf_safe<256ul>, __stack_chk_fail
// callers: CDOTAItemSchema::GetCourierWearableItemDef
// strings: "%s_%s_%i"
// globals: INVALID_ITEM_DEF_INDEX
item_definition_index_t __fastcall CDOTAItemSchema::GetCourierWearableItemDef(
        CDOTAItemSchema *const this,
        const char *pszCourier,
        const char *pszSlot,
        int iItemIndex)
{
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v7; // rbx
  UtlRBTreeNode_t<CUtlMap<char const*,item_definition_index_t,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v9; // rbx
  char *v10; // [rsp+0h] [rbp-150h] BYREF
  __int16 v11; // [rsp+8h] [rbp-148h]
  char szKey[256]; // [rsp+10h] [rbp-140h] BYREF
  unsigned __int64 v13; // [rsp+118h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  V_sprintf_safe<256ul>(szKey, "%s_%s_%i", pszCourier, pszSlot, iItemIndex);
  m_Root = this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Root;
  v11 = 0;
  v10 = szKey;
  if ( m_Root == -1 )
    return INVALID_ITEM_DEF_INDEX;
  m_pMemory = this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = m_Root;
      if ( !this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
              &v10,
              &m_pMemory[v7].m_Data) )
        break;
      m_pMemory = this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[m_Root].m_Left;
      if ( m_Root == -1 )
        return INVALID_ITEM_DEF_INDEX;
    }
    if ( !this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
            &this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data,
            &v10) )
      break;
    m_pMemory = this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v7].m_Right;
    if ( m_Root == -1 )
      return INVALID_ITEM_DEF_INDEX;
  }
  if ( m_Root < 0LL )
    return INVALID_ITEM_DEF_INDEX;
  if ( m_Root >= this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_nAllocationCount )
    return INVALID_ITEM_DEF_INDEX;
  if ( this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_LastAlloc.index < m_Root )
    return INVALID_ITEM_DEF_INDEX;
  v9 = &this->m_dictCustomizableCourierSlotItems.m_Elements.m_Tree.m_Elements.m_pMemory[v7];
  if ( v9->m_Left == m_Root )
    return INVALID_ITEM_DEF_INDEX;
  else
    return v9->m_Data.elem.m_Data;
}


// CDOTAItemSchema::GetCourierWearableItemDef  (line 1406, @0x0000000002e3e630, libserver.so)
// calls: GetItemSchema, CDOTAItemSchema::GetCourierItemInSlot, CDOTAItemSchema::GetCourierWearableItemDef
// callers: CDOTAItemDefinition::BuildCourierWearableList
item_definition_index_t __fastcall CDOTAItemSchema::GetCourierWearableItemDef(
        CDOTAItemSchema *const this,
        const char *pszCourier,
        const char *pszSlot,
        const IEconItemInterface *pItem,
        int iSlot)
{
  CDOTAItemSchema *ItemSchema; // rax
  CDOTAItemSchema *v10; // rax

  ItemSchema = GetItemSchema();
  LODWORD(pItem) = CDOTAItemSchema::GetCourierItemInSlot(ItemSchema, pItem, iSlot);
  v10 = GetItemSchema();
  return CDOTAItemSchema::GetCourierWearableItemDef(v10, pszCourier, pszSlot, pItem);
}


// CDOTAItemSchema::GetCourierItemInSlot  (line 1413, @0x0000000002e3db40, libserver.so)  // inlines: CAttributeIterator_GetTypedAttributeValue, CSchemaFieldHandle, FindAttribute<IEconItemInterface, unsigned int>, FindAttribute<unsigned int>, FindAttribute_UnsafeBitwiseCast<unsigned int, unsigned int, IEconItemInterface>, Get, GetTypedRef, operator const CEconItemAttributeDefinition*
// calls: __cxa_guard_acquire, GEconItemSchema, CEconItemSchema::GetAttributeDefinitionByName, __cxa_guard_release, __cxa_atexit, CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle, __cxa_guard_abort, _Unwind_Resume
// callers: CDOTAItemSchema::GetCourierWearableItemDef
// strings: "courier slots 2", "courier slots 4", "courier slots 1", "courier slots 3"
// globals: `guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1, CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1, `guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2, CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2, `guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3, CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3, __dso_handle, CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle() (10 total)
int __fastcall CDOTAItemSchema::GetCourierItemInSlot(
        CDOTAItemSchema *const this,
        const IEconItemInterface *pItem,
        int iSlot)
{
  char v4; // bl
  uint32 v5; // r13d
  const CEconItemAttributeDefinition *m_pRef; // rax
  const char *m_szName; // r14
  CEconItemSchema *v8; // rax
  int (**vptr_IEconItemInterface)(...); // rax
  uint32 v11; // r13d
  const char *v12; // r14
  CEconItemSchema *v13; // rax
  uint32 v14; // r13d
  const char *v15; // r14
  CEconItemSchema *v16; // rax
  CEconItemSchema *v17; // rax
  uint32 v18; // eax
  uint32 v19; // r13d
  const char *v20; // r14
  CEconItemSchema *v21; // rax
  CEconItemSchema *v22; // rax
  uint32 m_unResetCount; // eax
  CEconItemSchema *v24; // rax
  uint32 v25; // eax
  uint32 iCourierSlots; // [rsp+Ch] [rbp-44h] BYREF
  _QWORD v27[3]; // [rsp+10h] [rbp-40h] BYREF
  char v28; // [rsp+28h] [rbp-28h]

  v4 = iSlot;
  iCourierSlots = 0;
  if ( iSlot <= 3 )
  {
    if ( `guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1 == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1) != 0 )
    {
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1.m_szName = "courier slots 1";
      v22 = GEconItemSchema();
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v22, "courier slots 1");
      m_unResetCount = GEconItemSchema()->m_unResetCount;
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1.m_bDestructName = 0;
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1.m_unSchemaGeneration = m_unResetCount;
      __cxa_guard_release(&`guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1,
        &_dso_handle);
    }
    if ( CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1.m_szName == 0 )
      return (iCourierSlots & (255 << (8 * (v4 & 3)))) >> (8 * (v4 & 3));
    v5 = GEconItemSchema()->m_unResetCount;
    m_pRef = CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1.m_pRef;
    if ( v5 != CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1.m_unSchemaGeneration )
    {
      m_szName = CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1.m_szName;
      v8 = GEconItemSchema();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v8, m_szName);
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1.m_unSchemaGeneration = v5;
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots1.m_pRef = m_pRef;
    }
    goto LABEL_8;
  }
  if ( (iSlot - 4) <= 3 )
  {
    if ( `guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2 == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2) != 0 )
    {
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2.m_szName = "courier slots 2";
      v17 = GEconItemSchema();
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v17, "courier slots 2");
      v18 = GEconItemSchema()->m_unResetCount;
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2.m_bDestructName = 0;
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2.m_unSchemaGeneration = v18;
      __cxa_guard_release(&`guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2,
        &_dso_handle);
    }
    if ( CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2.m_szName == 0 )
      return (iCourierSlots & (255 << (8 * (v4 & 3)))) >> (8 * (v4 & 3));
    v11 = GEconItemSchema()->m_unResetCount;
    m_pRef = CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2.m_pRef;
    if ( v11 != CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2.m_unSchemaGeneration )
    {
      v12 = CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2.m_szName;
      v13 = GEconItemSchema();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v13, v12);
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2.m_unSchemaGeneration = v11;
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots2.m_pRef = m_pRef;
    }
LABEL_8:
    if ( m_pRef == 0 )
      return (iCourierSlots & (255 << (8 * (v4 & 3)))) >> (8 * (v4 & 3));
    v27[0] = &wrapper;
LABEL_10:
    v27[1] = m_pRef;
    v27[2] = &iCourierSlots;
    vptr_IEconItemInterface = pItem->_vptr_IEconItemInterface;
    v28 = 0;
    vptr_IEconItemInterface[28](pItem, v27);
    return (iCourierSlots & (255 << (8 * (v4 & 3)))) >> (8 * (v4 & 3));
  }
  if ( (iSlot - 8) <= 3 )
  {
    if ( `guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3 == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3) != 0 )
    {
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3.m_szName = "courier slots 3";
      v24 = GEconItemSchema();
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3.m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v24, "courier slots 3");
      v25 = GEconItemSchema()->m_unResetCount;
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3.m_bDestructName = 0;
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3.m_unSchemaGeneration = v25;
      __cxa_guard_release(&`guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3,
        &_dso_handle);
    }
    if ( CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3.m_szName == 0 )
      return (iCourierSlots & (255 << (8 * (v4 & 3)))) >> (8 * (v4 & 3));
    v14 = GEconItemSchema()->m_unResetCount;
    m_pRef = CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3.m_pRef;
    if ( v14 != CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3.m_unSchemaGeneration )
    {
      v15 = CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3.m_szName;
      v16 = GEconItemSchema();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v16, v15);
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3.m_unSchemaGeneration = v14;
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots3.m_pRef = m_pRef;
    }
    goto LABEL_24;
  }
  if ( (iSlot - 12) <= 3 )
  {
    if ( `guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots4 == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots4) != 0 )
    {
      CSchemaFieldHandle<CEconItemAttributeDefinition>::CSchemaFieldHandle(
        &CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots4,
        "courier slots 4");
      __cxa_guard_release(&`guard variable for'CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots4);
      __cxa_atexit(
        CSchemaFieldHandle<CEconItemAttributeDefinition>::~CSchemaFieldHandle,
        &CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots4,
        &_dso_handle);
    }
    if ( CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots4.m_szName == 0 )
      return (iCourierSlots & (255 << (8 * (v4 & 3)))) >> (8 * (v4 & 3));
    v19 = GEconItemSchema()->m_unResetCount;
    m_pRef = CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots4.m_pRef;
    if ( v19 != CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots4.m_unSchemaGeneration )
    {
      v20 = CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots4.m_szName;
      v21 = GEconItemSchema();
      m_pRef = CEconItemSchema::GetAttributeDefinitionByName(v21, v20);
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots4.m_unSchemaGeneration = v19;
      CDOTAItemSchema::GetCourierItemInSlot(IEconItemInterface const*,int)::pAttr_CourierSlots4.m_pRef = m_pRef;
    }
LABEL_24:
    if ( m_pRef == 0 )
      return (iCourierSlots & (255 << (8 * (v4 & 3)))) >> (8 * (v4 & 3));
    v27[0] = &wrapper;
    goto LABEL_10;
  }
  return 0;
}


// CDOTAItemSchema::AddRecipe  (line 1443, @0x0000000002e456b0, libserver.so)  // inlines: AddToTail, CopyConstruct<const CDOTAItemDefinition*>, Element, GetContextMenuPrompt, GetTypedEconTool<CEconTool_ItemDynamicRecipe>, GetWithNull, GrowMemory, RTime32TimeCur, String, operator[]
// calls: __dynamic_cast, CUtlMemory<const CDOTAItemDefinition*, int>::Grow
// callers: CDOTAItemDefinition::BInitFromKVOverride
void __fastcall CDOTAItemSchema::AddRecipe(CDOTAItemSchema *const this, const CDOTAItemDefinition *pItemDef)
{
  RTime32 m_rtExpiration; // eax
  IEconTool *m_pTool; // rdi
  _BYTE *v6; // rax
  __int64 m_Size; // r13
  const CDOTAItemDefinition **v8; // rax

  m_rtExpiration = pItemDef->m_rtExpiration;
  if ( m_rtExpiration == 0 || m_rtExpiration > CRTime::sm_nTimeCur )
  {
    m_pTool = pItemDef->m_pTool;
    if ( m_pTool != 0 )
    {
      v6 = __dynamic_cast(m_pTool, &`typeinfo for'IEconTool, &`typeinfo for'CEconTool_ItemDynamicRecipe, 0);
      if ( v6 != 0 && v6[65] != 0 && *(v6 + 9) != 0 && **(v6 + 9) != 0 )
      {
        m_Size = this->m_vecItemContextRecipes.m_Size;
        if ( m_Size == this->m_vecItemContextRecipes.m_Memory.m_nAllocationCount )
          CUtlMemory<CDOTAItemDefinition const*,int>::Grow(&this->m_vecItemContextRecipes.m_Memory, 1);
        ++this->m_vecItemContextRecipes.m_Size;
        v8 = &this->m_vecItemContextRecipes.m_Memory.m_pMemory[m_Size];
        if ( v8 != 0 )
          *v8 = pItemDef;
      }
    }
  }
}


// CDOTAItemSchema::AddInfoToLeagueCache  (line 1465, @0x0000000002e4c9a0, libserver.so)  // inlines: AddMultipleToTail, AllocNode, Bitvec_Set, CopyConstruct<CDOTAItemSchema::LeagueInfo_t>, CopyConstruct<unsigned int>, EnsureCapacity, Find, FindInBucket, FreeNodeIDToIndex, Get, GrowMemory, GrowVector, IncrementalRehash, InsertInternal, InsertMultipleBefore, InsertOrReplace, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, RehashNodesInBucket, Set, UnlinkNodeFromBucket, memcpy, memset, operator(), operator[]
// calls: memset, CUtlHashMapLarge<unsigned int, CDOTAItemSchema::LeagueInfo_t, CUtlHashMapLargeDefEquals<unsigned int>, MurmurHash3Functor<unsigned int> >::LinkNodeIntoBucket, CVarBitVecBase<int, 32>::Resize, CUtlMemory<CUtlHashMapLarge<unsigned int, CDOTAItemSchema::LeagueInfo_t>::Node_t, int>::Grow, memcpy, CUtlMemory<CUtlHashMapLarge<unsigned int, CDOTAItemSchema::LeagueInfo_t>::HashBucket_t, int>::Grow
// callers: CDOTAItemDefinition::BInitFromKVOverride
void __fastcall CDOTAItemSchema::AddInfoToLeagueCache(
        CDOTAItemSchema *const this,
        uint32 nLeagueID,
        item_definition_index_t nDefIndex,
        uint32 nFlags,
        uint32 unTier)
{
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> > *p_m_LeagueDefIndex; // r12
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_cElements; // r14d
  int m_Size; // r10d
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // r11
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v10; // rdx
  unsigned int v11; // r9d
  __int64 m_iNode; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v13; // rax
  __int64 m_iNextNode; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMinRehashedBucket; // esi
  int v16; // eax
  int v17; // ecx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v18; // rcx
  int v19; // ebx
  int v20; // ecx
  uint32 m_nGrowSize; // eax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v22; // rsi
  __int64 (__fastcall **v23)(_QWORD *, __int64, CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *, _QWORD); // rax
  int v24; // r14d
  int v25; // ebx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v26; // rdi
  size_t v27; // rdx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nAllocationCount; // eax
  int v29; // ecx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMaxRehashedBucket; // edi
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v31; // rsi
  __int64 v32; // rbx
  uint32 *m_pInt; // rax
  int v34; // r14d
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v35; // r8d
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v36; // edx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v37; // rdi
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v38; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v39; // r13d
  int v40; // esi
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v41; // rax
  __int64 v42; // r8
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v43; // r8
  __int64 v44; // rax
  int v45; // eax
  int v46; // r14d
  uint32 *v47; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v48; // r13d
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v49; // edx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v50; // rdi
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v51; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v52; // r14d
  int v53; // esi
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v54; // rax
  __int64 v55; // rcx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v56; // rcx
  __int64 v57; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v58; // edx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v59; // rcx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_iNodeFreeListHead; // edi
  __int64 v61; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v62; // rcx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v63; // esi
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v64; // rcx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v65; // rax
  bool v66; // cc
  __int64 v67; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v68; // rax
  __int64 v69; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v70; // r14
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v71; // rax
  int v72; // eax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *v73; // rax
  uint16 unTiera; // [rsp+8h] [rbp-48h]
  uint16 nFlagsa; // [rsp+Ch] [rbp-44h]
  unsigned int v78; // [rsp+18h] [rbp-38h]
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t v79; // [rsp+1Ch] [rbp-34h]
  int v80; // [rsp+1Ch] [rbp-34h]
  int v81; // [rsp+1Ch] [rbp-34h]

  p_m_LeagueDefIndex = &this->m_LeagueDefIndex;
  m_cElements = this->m_LeagueDefIndex.m_cElements;
  nFlagsa = nFlags;
  unTiera = unTier;
  if ( m_cElements != 0 )
  {
    m_Size = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
    m_pMemory = this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory;
    v10 = (-2048144789 * (nLeagueID ^ HIWORD(nLeagueID)));
    v11 = (-1028477387 * (v10 ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
        ^ ((-1028477387 * (v10 ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16);
    m_iNode = m_pMemory[v11 & (m_Size - 1)].m_iNode;
    if ( m_iNode != -1 )
    {
      v10 = this->m_LeagueDefIndex.m_memNodes.m_pMemory;
      v13 = &v10[m_iNode];
      if ( v13->m_key == nLeagueID )
      {
LABEL_15:
        v78 = v11;
        goto LABEL_16;
      }
      while ( 1 )
      {
        m_iNextNode = v13->m_iNextNode;
        if ( m_iNextNode == -1 )
          break;
        v13 = &v10[m_iNextNode];
        if ( v13->m_key == nLeagueID )
          goto LABEL_15;
      }
    }
    m_nMinRehashedBucket = this->m_LeagueDefIndex.m_nMinRehashedBucket;
    v16 = m_Size >> 1;
    if ( m_Size >> 1 >= m_nMinRehashedBucket )
    {
      while ( 1 )
      {
        v17 = v11 & (v16 - 1);
        v10 = (v17 >> 5);
        if ( ((1 << (v11 & (v16 - 1))) & this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt[v10]) == 0 )
        {
          v10 = m_pMemory[v17].m_iNode;
          if ( v10 != -1 )
          {
            v18 = this->m_LeagueDefIndex.m_memNodes.m_pMemory;
            v10 = &v18[v10];
            if ( v10->m_key == nLeagueID )
              goto LABEL_15;
            while ( 1 )
            {
              v10 = v10->m_iNextNode;
              if ( v10 == -1 )
                break;
              v10 = &v18[v10];
              if ( v10->m_key == nLeagueID )
                goto LABEL_15;
            }
          }
        }
        v16 >>= 1;
        if ( v16 < m_nMinRehashedBucket )
          goto LABEL_15;
      }
    }
    goto LABEL_15;
  }
  m_Size = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
  v10 = (-2048144789 * (nLeagueID ^ HIWORD(nLeagueID)));
  v78 = (-1028477387 * (v10 ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
      ^ ((-1028477387 * (v10 ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16);
LABEL_16:
  if ( m_cElements < m_Size )
    goto LABEL_33;
  v19 = 16;
  v20 = m_Size;
  if ( 2 * m_Size > 15 )
    v19 = 2 * m_Size;
  if ( v19 > this->m_LeagueDefIndex.m_memNodes.m_nAllocationCount )
  {
    m_nGrowSize = this->m_LeagueDefIndex.m_memNodes.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        v70 = this->m_LeagueDefIndex.m_memNodes.m_pMemory;
        v71 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * v19, *g_pMemAlloc, m_Size);
        this->m_LeagueDefIndex.m_memNodes.m_pMemory = v71;
        if ( v70 != 0 )
          memcpy(v71, v70, 16LL * this->m_LeagueDefIndex.m_memNodes.m_nAllocationCount);
        this->m_LeagueDefIndex.m_memNodes.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v22 = this->m_LeagueDefIndex.m_memNodes.m_pMemory;
        v23 = *g_pMemAlloc;
        if ( v22 != 0 )
          this->m_LeagueDefIndex.m_memNodes.m_pMemory = v23[1](g_pMemAlloc, v22, (16LL * v19), m_Size);
        else
          this->m_LeagueDefIndex.m_memNodes.m_pMemory = (*v23)(g_pMemAlloc, 16LL * v19, v10, m_Size);
      }
      v20 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
      this->m_LeagueDefIndex.m_memNodes.m_nAllocationCount = v19;
    }
  }
  if ( v19 <= v20 )
  {
LABEL_51:
    m_nAllocationCount = this->m_LeagueDefIndex.m_memNodes.m_nAllocationCount;
    if ( m_nAllocationCount > this->m_LeagueDefIndex.m_cElements )
      goto LABEL_34;
    goto LABEL_52;
  }
  v24 = v20;
  if ( v20 > 15 || (v24 = 16, v19 > 16) )
  {
    do
      v24 *= 2;
    while ( v19 > v24 );
  }
  v25 = v24 - v20;
  if ( v24 == v20 )
  {
    v26 = &this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory[v20];
    v27 = 0;
  }
  else
  {
    v72 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_nAllocationCount;
    if ( v72 < v24 )
    {
      v81 = v20;
      CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::HashBucket_t,int>::Grow(
        &this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory,
        v24 - v72);
      v20 = v81;
    }
    v73 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory;
    this->m_LeagueDefIndex.m_vecHashBuckets.m_Size = v24;
    v27 = 4LL * v25;
    v26 = &v73[v20];
  }
  v79 = v20;
  memset(v26, -1, v27);
  m_cElements = this->m_LeagueDefIndex.m_cElements;
  this->m_LeagueDefIndex.m_nMinRehashedBucket = 0;
  this->m_LeagueDefIndex.m_nMaxRehashedBucket = v79;
  if ( m_cElements > 0 )
  {
    CVarBitVecBase<int,32>::Resize(&this->m_LeagueDefIndex.m_bitsMigratedBuckets, 0, 0);
    CVarBitVecBase<int,32>::Resize(
      &this->m_LeagueDefIndex.m_bitsMigratedBuckets,
      this->m_LeagueDefIndex.m_vecHashBuckets.m_Size,
      0);
    goto LABEL_51;
  }
  this->m_LeagueDefIndex.m_nMinRehashedBucket = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
LABEL_33:
  m_nAllocationCount = this->m_LeagueDefIndex.m_memNodes.m_nAllocationCount;
  if ( m_nAllocationCount <= m_cElements )
LABEL_52:
    CUtlMemory<CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::Node_t,int>::Grow(
      &this->m_LeagueDefIndex.m_memNodes,
      2 * m_nAllocationCount);
LABEL_34:
  v29 = this->m_LeagueDefIndex.m_nMinRehashedBucket;
  m_nMaxRehashedBucket = this->m_LeagueDefIndex.m_nMaxRehashedBucket;
  if ( v29 >= m_nMaxRehashedBucket )
  {
    v35 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
    v45 = this->m_LeagueDefIndex.m_nMinRehashedBucket;
  }
  else
  {
    v31 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory;
    v32 = v29;
    while ( 1 )
    {
      if ( v31[v32].m_iNode != -1 )
      {
        m_pInt = this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt;
        if ( ((1 << v29) & m_pInt[v29 >> 5]) == 0 )
          break;
      }
      ++v29;
      ++v32;
      this->m_LeagueDefIndex.m_nMinRehashedBucket = v29;
      if ( v29 == m_nMaxRehashedBucket )
      {
        v35 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
LABEL_90:
        this->m_LeagueDefIndex.m_nMinRehashedBucket = v35;
        this->m_LeagueDefIndex.m_nMaxRehashedBucket = -1;
        CVarBitVecBase<int,32>::Resize(&this->m_LeagueDefIndex.m_bitsMigratedBuckets, 0, 0);
        v45 = this->m_LeagueDefIndex.m_nMinRehashedBucket;
        v35 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
        goto LABEL_55;
      }
    }
    v34 = v29;
    m_pInt[v29 >> 5] |= 1 << v29;
    v35 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
    v36 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory[v32].m_iNode;
    if ( v36 != -1 )
    {
      while ( 1 )
      {
        v37 = this->m_LeagueDefIndex.m_memNodes.m_pMemory;
        v38 = &v37[v36];
        v39 = v38->m_iNextNode;
        LODWORD(v38) = -1028477387
                     * ((-2048144789 * (v38->m_key ^ HIWORD(v38->m_key)))
                      ^ ((-2048144789 * (v38->m_key ^ HIWORD(v38->m_key))) >> 13));
        v40 = (v35 - 1) & (v38 ^ (v38 >> 16));
        if ( v34 != v40 )
        {
          v41 = &this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory[v32];
          v42 = v41->m_iNode;
          if ( v36 == v42 )
          {
            v41->m_iNode = v39;
          }
          else if ( v42 != -1 )
          {
            v43 = &v37[v42];
            v44 = v43->m_iNextNode;
            if ( v36 == v44 )
            {
LABEL_53:
              v43->m_iNextNode = v39;
            }
            else
            {
              while ( v44 != -1 )
              {
                v43 = &v37[v44];
                v44 = v43->m_iNextNode;
                if ( v36 == v44 )
                  goto LABEL_53;
              }
            }
          }
          CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
            p_m_LeagueDefIndex,
            v40,
            v36);
          v35 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
        }
        if ( v39 == -1 )
          break;
        v36 = v39;
      }
    }
    v45 = this->m_LeagueDefIndex.m_nMinRehashedBucket + 1;
    v66 = v45 < this->m_LeagueDefIndex.m_nMaxRehashedBucket;
    this->m_LeagueDefIndex.m_nMinRehashedBucket = v45;
    if ( !v66 )
      goto LABEL_90;
  }
LABEL_55:
  v80 = v35 >> 1;
  v46 = v78 & ((v35 >> 1) - 1);
  if ( v46 >= v45 )
  {
    v47 = this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt;
    if ( ((1 << v46) & v47[v46 >> 5]) == 0 )
    {
      v48 = v78 & ((v35 >> 1) - 1);
      do
      {
        v47[v48 >> 5] |= 1 << v48;
        v49 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory[v48].m_iNode;
        if ( v49 != -1 )
        {
          while ( 1 )
          {
            v50 = this->m_LeagueDefIndex.m_memNodes.m_pMemory;
            v51 = &v50[v49];
            v52 = v51->m_iNextNode;
            LODWORD(v51) = -1028477387
                         * ((-2048144789 * (v51->m_key ^ HIWORD(v51->m_key)))
                          ^ ((-2048144789 * (v51->m_key ^ HIWORD(v51->m_key))) >> 13));
            v53 = (this->m_LeagueDefIndex.m_vecHashBuckets.m_Size - 1) & (v51 ^ (v51 >> 16));
            if ( v48 != v53 )
            {
              v54 = &this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory[v48];
              v55 = v54->m_iNode;
              if ( v49 == v55 )
              {
                v54->m_iNode = v52;
              }
              else if ( v55 != -1 )
              {
                v56 = &v50[v55];
                v57 = v56->m_iNextNode;
                if ( v49 == v57 )
                {
LABEL_69:
                  v56->m_iNextNode = v52;
                }
                else
                {
                  while ( v57 != -1 )
                  {
                    v56 = &v50[v57];
                    v57 = v56->m_iNextNode;
                    if ( v49 == v57 )
                      goto LABEL_69;
                  }
                }
              }
              CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
                p_m_LeagueDefIndex,
                v53,
                v49);
            }
            if ( v52 == -1 )
              break;
            v49 = v52;
          }
        }
        v80 >>= 1;
        v48 = v78 & (v80 - 1);
        if ( v48 < this->m_LeagueDefIndex.m_nMinRehashedBucket )
          break;
        v47 = this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt;
      }
      while ( ((1 << v48) & v47[v48 >> 5]) == 0 );
    }
  }
  v58 = this->m_LeagueDefIndex.m_cElements;
  if ( v58 == 0
    || (v67 = this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory[v78
                                                                       & (this->m_LeagueDefIndex.m_vecHashBuckets.m_Size
                                                                        - 1)].m_iNode) == -1 )
  {
    v59 = this->m_LeagueDefIndex.m_memNodes.m_pMemory;
  }
  else
  {
    v59 = this->m_LeagueDefIndex.m_memNodes.m_pMemory;
    v68 = &v59[v67];
    if ( v68->m_key == nLeagueID )
    {
LABEL_88:
      v68->m_elem.m_nDefIndex = nDefIndex;
      v68->m_elem.m_nFlags = nFlagsa;
      v68->m_elem.m_nTier = unTiera;
      return;
    }
    while ( 1 )
    {
      v69 = v68->m_iNextNode;
      if ( v69 == -1 )
        break;
      v68 = &v59[v69];
      if ( v68->m_key == nLeagueID )
        goto LABEL_88;
    }
  }
  if ( v58 == this->m_LeagueDefIndex.m_nMaxElement )
  {
    this->m_LeagueDefIndex.m_cElements = v58 + 1;
    this->m_LeagueDefIndex.m_nMaxElement = v58 + 1;
    v61 = v58;
    v62 = &v59[v61];
  }
  else
  {
    m_iNodeFreeListHead = this->m_LeagueDefIndex.m_iNodeFreeListHead;
    v61 = m_iNodeFreeListHead;
    v62 = &v59[v61];
    v63 = -3 - v62->m_iNextNode;
    this->m_LeagueDefIndex.m_cElements = v58 + 1;
    v58 = m_iNodeFreeListHead;
    this->m_LeagueDefIndex.m_iNodeFreeListHead = v63;
  }
  v62->m_iNextNode = -1;
  v64 = &this->m_LeagueDefIndex.m_memNodes.m_pMemory[v61];
  if ( v64 != 0 )
  {
    v64->m_key = nLeagueID;
    v65 = &this->m_LeagueDefIndex.m_memNodes.m_pMemory[v61];
  }
  else
  {
    v65 = 0;
  }
  if ( v65 != -4LL )
  {
    v65->m_elem.m_nDefIndex = nDefIndex;
    v65->m_elem.m_nFlags = nFlagsa;
    v65->m_elem.m_nTier = unTiera;
  }
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int>>::LinkNodeIntoBucket(
    p_m_LeagueDefIndex,
    v78 & (this->m_LeagueDefIndex.m_vecHashBuckets.m_Size - 1),
    v58);
}


// CDOTAItemSchema::GetDefIndexForLeagueID  (line 1481, @0x0000000002e381a0, libserver.so)  // inlines: Find, FindInBucket, Get, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, operator(), operator[]
// globals: INVALID_ITEM_DEF_INDEX
item_definition_index_t __fastcall CDOTAItemSchema::GetDefIndexForLeagueID(
        const CDOTAItemSchema *const this,
        uint32 nLeagueID)
{
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // r9
  int m_Size; // edx
  uint32 v4; // r8d
  __int64 m_iNode; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v6; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMinRehashedBucket; // r10d
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v12; // rcx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v13; // rax
  __int64 m_iNextNode; // rax

  if ( this->m_LeagueDefIndex.m_cElements == 0 )
    return INVALID_ITEM_DEF_INDEX;
  m_pMemory = this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory;
  m_Size = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
  v4 = (-1028477387
      * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
     ^ ((-1028477387
       * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16);
  m_iNode = m_pMemory[v4 & (m_Size - 1)].m_iNode;
  if ( m_iNode == -1 )
  {
LABEL_7:
    m_nMinRehashedBucket = this->m_LeagueDefIndex.m_nMinRehashedBucket;
    v9 = m_Size >> 1;
    if ( m_nMinRehashedBucket <= v9 )
    {
      do
      {
        v10 = v4 & (v9 - 1);
        if ( ((1 << (((53
                     * ((107 * (nLeagueID ^ BYTE2(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
                    ^ ((-1028477387
                      * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID)))
                       ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16))
                   & (v9 - 1)))
            & this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt[v10 >> 5]) == 0 )
        {
          v11 = m_pMemory[v10].m_iNode;
          if ( v11 != -1 )
          {
            v12 = this->m_LeagueDefIndex.m_memNodes.m_pMemory;
            v13 = &v12[v11];
            if ( v13->m_key == nLeagueID )
              return v13->m_elem.m_nDefIndex.m_Data;
            while ( 1 )
            {
              m_iNextNode = v13->m_iNextNode;
              if ( m_iNextNode == -1 )
                break;
              v13 = &v12[m_iNextNode];
              if ( v13->m_key == nLeagueID )
                return v13->m_elem.m_nDefIndex.m_Data;
            }
          }
        }
        v9 >>= 1;
      }
      while ( m_nMinRehashedBucket <= v9 );
      return INVALID_ITEM_DEF_INDEX;
    }
    return INVALID_ITEM_DEF_INDEX;
  }
  while ( 1 )
  {
    v6 = &this->m_LeagueDefIndex.m_memNodes.m_pMemory[m_iNode];
    if ( v6->m_key == nLeagueID )
      return v6->m_elem.m_nDefIndex.m_Data;
    m_iNode = v6->m_iNextNode;
    if ( m_iNode == -1 )
      goto LABEL_7;
  }
}


// CDOTAItemSchema::GetFlagsForLeagueID  (line 1492, @0x0000000002e382d0, libserver.so)  // inlines: Find, FindInBucket, Get, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, operator(), operator[]
// callers: IsLeaguePassFree
uint32 __fastcall CDOTAItemSchema::GetFlagsForLeagueID(const CDOTAItemSchema *const this, uint32 nLeagueID)
{
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // r9
  int m_Size; // edx
  uint32 v4; // r8d
  __int64 m_iNode; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v6; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMinRehashedBucket; // r10d
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v12; // rcx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v13; // rax
  __int64 m_iNextNode; // rax

  if ( this->m_LeagueDefIndex.m_cElements == 0 )
    return 0;
  m_pMemory = this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory;
  m_Size = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
  v4 = (-1028477387
      * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
     ^ ((-1028477387
       * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16);
  m_iNode = m_pMemory[v4 & (m_Size - 1)].m_iNode;
  if ( m_iNode == -1 )
  {
LABEL_7:
    m_nMinRehashedBucket = this->m_LeagueDefIndex.m_nMinRehashedBucket;
    v9 = m_Size >> 1;
    if ( m_nMinRehashedBucket <= v9 )
    {
      do
      {
        v10 = v4 & (v9 - 1);
        if ( ((1 << (((53
                     * ((107 * (nLeagueID ^ BYTE2(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
                    ^ ((-1028477387
                      * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID)))
                       ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16))
                   & (v9 - 1)))
            & this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt[v10 >> 5]) == 0 )
        {
          v11 = m_pMemory[v10].m_iNode;
          if ( v11 != -1 )
          {
            v12 = this->m_LeagueDefIndex.m_memNodes.m_pMemory;
            v13 = &v12[v11];
            if ( v13->m_key == nLeagueID )
              return v13->m_elem.m_nFlags;
            while ( 1 )
            {
              m_iNextNode = v13->m_iNextNode;
              if ( m_iNextNode == -1 )
                break;
              v13 = &v12[m_iNextNode];
              if ( v13->m_key == nLeagueID )
                return v13->m_elem.m_nFlags;
            }
          }
        }
        v9 >>= 1;
      }
      while ( m_nMinRehashedBucket <= v9 );
      return 0;
    }
    return 0;
  }
  while ( 1 )
  {
    v6 = &this->m_LeagueDefIndex.m_memNodes.m_pMemory[m_iNode];
    if ( v6->m_key == nLeagueID )
      return v6->m_elem.m_nFlags;
    m_iNode = v6->m_iNextNode;
    if ( m_iNode == -1 )
      goto LABEL_7;
  }
}


// CDOTAItemSchema::GetTierForLeagueID  (line 1502, @0x0000000002e383f0, libserver.so)  // inlines: Find, FindInBucket, Get, ModPowerOf2<unsigned int, int>, MurmurHash3Int, MurmurHash3Item<unsigned int>, operator(), operator[]
// callers: CDOTAGCServerSystem::IsValidFantasyGame
uint32 __fastcall CDOTAItemSchema::GetTierForLeagueID(const CDOTAItemSchema *const this, uint32 nLeagueID)
{
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::HashBucket_t *m_pMemory; // r9
  int m_Size; // edx
  uint32 v4; // r8d
  __int64 m_iNode; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v6; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::IndexType_t m_nMinRehashedBucket; // r10d
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v12; // rcx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v13; // rax
  __int64 m_iNextNode; // rax

  if ( this->m_LeagueDefIndex.m_cElements == 0 )
    return 0;
  m_pMemory = this->m_LeagueDefIndex.m_vecHashBuckets.m_Memory.m_pMemory;
  m_Size = this->m_LeagueDefIndex.m_vecHashBuckets.m_Size;
  v4 = (-1028477387
      * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
     ^ ((-1028477387
       * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16);
  m_iNode = m_pMemory[v4 & (m_Size - 1)].m_iNode;
  if ( m_iNode == -1 )
  {
LABEL_7:
    m_nMinRehashedBucket = this->m_LeagueDefIndex.m_nMinRehashedBucket;
    v9 = m_Size >> 1;
    if ( m_nMinRehashedBucket <= v9 )
    {
      do
      {
        v10 = v4 & (v9 - 1);
        if ( ((1 << (((53
                     * ((107 * (nLeagueID ^ BYTE2(nLeagueID))) ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13)))
                    ^ ((-1028477387
                      * ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID)))
                       ^ ((-2048144789 * (nLeagueID ^ HIWORD(nLeagueID))) >> 13))) >> 16))
                   & (v9 - 1)))
            & this->m_LeagueDefIndex.m_bitsMigratedBuckets.m_pInt[v10 >> 5]) == 0 )
        {
          v11 = m_pMemory[v10].m_iNode;
          if ( v11 != -1 )
          {
            v12 = this->m_LeagueDefIndex.m_memNodes.m_pMemory;
            v13 = &v12[v11];
            if ( v13->m_key == nLeagueID )
              return v13->m_elem.m_nTier;
            while ( 1 )
            {
              m_iNextNode = v13->m_iNextNode;
              if ( m_iNextNode == -1 )
                break;
              v13 = &v12[m_iNextNode];
              if ( v13->m_key == nLeagueID )
                return v13->m_elem.m_nTier;
            }
          }
        }
        v9 >>= 1;
      }
      while ( m_nMinRehashedBucket <= v9 );
      return 0;
    }
    return 0;
  }
  while ( 1 )
  {
    v6 = &this->m_LeagueDefIndex.m_memNodes.m_pMemory[m_iNode];
    if ( v6->m_key == nLeagueID )
      return v6->m_elem.m_nTier;
    m_iNode = v6->m_iNextNode;
    if ( m_iNode == -1 )
      goto LABEL_7;
  }
}


// CDOTAItemSchema::GetProfessionalLeagueIDs  (line 1512, @0x0000000002e41ce0, libserver.so)  // inlines: AddToTail, CopyConstruct<unsigned int>, Element, GrowMemory, IsValidIndex, operator[]
// calls: CUtlMemory<unsigned int, int>::Grow
void __fastcall CDOTAItemSchema::GetProfessionalLeagueIDs(
        CDOTAItemSchema *const this,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *pVecLeagueIDs)
{
  CUtlMemory<unsigned int,int> *p_m_Memory; // rcx
  __int64 i; // rbx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v6; // rax
  int m_key; // r14d
  __int64 m_Size; // r15
  int v9; // eax
  unsigned int *v10; // rax
  CUtlMemory<unsigned int,int> *v11; // [rsp+8h] [rbp-38h]

  p_m_Memory = &pVecLeagueIDs->m_Memory;
  for ( i = 0; i < this->m_LeagueDefIndex.m_nMaxElement; ++i )
  {
    v6 = &this->m_LeagueDefIndex.m_memNodes.m_pMemory[i];
    if ( v6->m_iNextNode >= -1 && (v6->m_elem.m_nTier - 2) <= 1u )
    {
      m_key = v6->m_key;
      if ( v6->m_key > 599 )
      {
        m_Size = pVecLeagueIDs->m_Size;
        if ( m_Size == pVecLeagueIDs->m_Memory.m_nAllocationCount )
        {
          v11 = p_m_Memory;
          CUtlMemory<unsigned int,int>::Grow(p_m_Memory, 1);
          v9 = pVecLeagueIDs->m_Size;
          p_m_Memory = v11;
        }
        else
        {
          v9 = pVecLeagueIDs->m_Size;
        }
        pVecLeagueIDs->m_Size = v9 + 1;
        v10 = &pVecLeagueIDs->m_Memory.m_pMemory[m_Size];
        if ( v10 != 0 )
          *v10 = m_key;
      }
    }
  }
}


// CDOTAItemSchema::GetAllLeagueIDs  (line 1528, @0x0000000002e41c20, libserver.so)  // inlines: AddToTail, CopyConstruct<unsigned int>, Element, GrowMemory, IsValidIndex, operator[]
// calls: CUtlMemory<unsigned int, int>::Grow
void __fastcall CDOTAItemSchema::GetAllLeagueIDs(
        CDOTAItemSchema *const this,
        CUtlVector<unsigned int,CUtlMemory<unsigned int,int> > *pVecLeagueIDs)
{
  CUtlMemory<unsigned int,int> *p_m_Memory; // rdx
  __int64 i; // rbx
  CUtlHashMapLarge<unsigned int,CDOTAItemSchema::LeagueInfo_t,CUtlHashMapLargeDefEquals<unsigned int>,MurmurHash3Functor<unsigned int> >::Node_t *v6; // rax
  int m_key; // r14d
  __int64 m_Size; // r15
  int v9; // eax
  unsigned int *v10; // rax
  CUtlMemory<unsigned int,int> *v11; // [rsp+8h] [rbp-38h]

  p_m_Memory = &pVecLeagueIDs->m_Memory;
  for ( i = 0; i < this->m_LeagueDefIndex.m_nMaxElement; ++i )
  {
    v6 = &this->m_LeagueDefIndex.m_memNodes.m_pMemory[i];
    if ( v6->m_iNextNode >= -1 )
    {
      m_key = v6->m_key;
      if ( v6->m_key > 599 )
      {
        m_Size = pVecLeagueIDs->m_Size;
        if ( m_Size == pVecLeagueIDs->m_Memory.m_nAllocationCount )
        {
          v11 = p_m_Memory;
          CUtlMemory<unsigned int,int>::Grow(p_m_Memory, 1);
          v9 = pVecLeagueIDs->m_Size;
          p_m_Memory = v11;
        }
        else
        {
          v9 = pVecLeagueIDs->m_Size;
        }
        pVecLeagueIDs->m_Size = v9 + 1;
        v10 = &pVecLeagueIDs->m_Memory.m_pMemory[m_Size];
        if ( v10 != 0 )
          *v10 = m_key;
      }
    }
  }
}


// CDOTAItemSchema::OnTestItemDefinitionAdded  (line 1602, @0x0000000002e3fcb0, libserver.so)  // inlines: OnTestItemDefinitionAdded
// calls: CDOTAInventoryManager::PurgeItemsForHeroesCache
// globals: g_DOTAInventoryManager
void __fastcall CDOTAItemSchema::OnTestItemDefinitionAdded(
        CDOTAItemSchema *const this,
        item_definition_index_t unDefIndex)
{
  CDOTAInventoryManager::PurgeItemsForHeroesCache(g_DOTAInventoryManager);
}


// CDOTAItemSchema::OnTestItemDefinitionRemoved  (line 1610, @0x0000000002e3fce0, libserver.so)  // inlines: OnTestItemDefinitionRemoved
// calls: CDOTAInventoryManager::PurgeItemsForHeroesCache
// globals: g_DOTAInventoryManager
void __fastcall CDOTAItemSchema::OnTestItemDefinitionRemoved(
        CDOTAItemSchema *const this,
        item_definition_index_t unDefIndex)
{
  CDOTAInventoryManager::PurgeItemsForHeroesCache(g_DOTAInventoryManager);
}


// CDOTAItemSchema::OnTestItemSetAdded  (line 1618, @0x0000000002e3fd10, libserver.so)  // inlines: OnTestItemSetAdded
// calls: CDOTAInventoryManager::PurgeItemsForHeroesCache
// globals: g_DOTAInventoryManager
void __fastcall CDOTAItemSchema::OnTestItemSetAdded(CDOTAItemSchema *const this, const char *pItemSetName)
{
  CDOTAInventoryManager::PurgeItemsForHeroesCache(g_DOTAInventoryManager);
}


// CDOTAItemSchema::OnTestItemSetRemoved  (line 1626, @0x0000000002e3fd40, libserver.so)  // inlines: OnTestItemSetRemoved
// calls: CDOTAInventoryManager::PurgeItemsForHeroesCache
// globals: g_DOTAInventoryManager
void __fastcall CDOTAItemSchema::OnTestItemSetRemoved(CDOTAItemSchema *const this, const char *pItemSetName)
{
  CDOTAInventoryManager::PurgeItemsForHeroesCache(g_DOTAInventoryManager);
}


// CSchemaAttributeType_HeroStatue::~CSchemaAttributeType_HeroStatue  (line 1637, @0x0000000002e4f1b0, libserver.so)  // inlines: ~CSchemaAttributeTypeBase, ~ISchemaAttributeType, ~ISchemaAttributeTypeBase
void __fastcall CSchemaAttributeType_HeroStatue::~CSchemaAttributeType_HeroStatue(
        CSchemaAttributeType_HeroStatue *const this)
{
  this->_vptr_ISchemaAttributeType = off_479F1D0;  // vptr: ISchemaAttributeType
}


// CSchemaAttributeType_HeroStatue::~CSchemaAttributeType_HeroStatue  (line 1637, @0x0000000002e4fb50, libserver.so)  // inlines: ~CSchemaAttributeTypeBase, ~CSchemaAttributeType_HeroStatue, ~ISchemaAttributeType, ~ISchemaAttributeTypeBase
// calls: operator delete
void __fastcall CSchemaAttributeType_HeroStatue::~CSchemaAttributeType_HeroStatue(
        CSchemaAttributeType_HeroStatue *const this)
{
  this->_vptr_ISchemaAttributeType = off_479F1D0;  // vptr: ISchemaAttributeType
  operator delete(this);
}


// CSchemaAttributeType_HeroStatue::ConvertTypedValueToByteStream  (line 1673, @0x0000000002e50560, libserver.so)  // inlines: ConvertToByteStream
// calls: google::protobuf::MessageLite::SerializeToString(std::string *)
void __fastcall CSchemaAttributeType_HeroStatue::ConvertTypedValueToByteStream(
        const CSchemaAttributeType_HeroStatue *const this,
        const CAttribute_HeroStatue *const typedValue,
        std::string *out_psBytes)
{
  google::protobuf::MessageLite::SerializeToString(typedValue, out_psBytes);
}


// CSchemaAttributeType_HeroStatue::ConvertByteStreamToTypedValue  (line 1678, @0x0000000002e50550, libserver.so)  // inlines: ParseFromByteStream
// calls: google::protobuf::MessageLite::ParseFromString(std::string const&)
void __fastcall CSchemaAttributeType_HeroStatue::ConvertByteStreamToTypedValue(
        const CSchemaAttributeType_HeroStatue *const this,
        const std::string *const sBytes,
        CAttribute_HeroStatue *out_pTypedValue)
{
  google::protobuf::MessageLite::ParseFromString(out_pTypedValue, sBytes);
}


// CSchemaAttributeType_HeroStatue::BConvertStringToEconAttributeValue  (line 1683, @0x0000000002e68ed0, libserver.so)  // inlines: CAttribute_HeroStatue, ConvertTypedValueToEconAttributeValue, ParseFromString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, operator=, ~CAttribute_HeroStatue, ~basic_string
// calls: std::string::string(char const*,std::allocator<char> const&), CProtoItemHeroStatue::CProtoItemHeroStatue, google::protobuf::TextFormat::ParseFromString(std::string const&,google::protobuf::Message *), CProtoItemHeroStatue::CopyFrom, CProtoItemHeroStatue::~CProtoItemHeroStatue, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
bool __fastcall CSchemaAttributeType_HeroStatue::BConvertStringToEconAttributeValue(
        const CSchemaAttributeType_HeroStatue *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const char *pszValue,
        attribute_data_union_t *out_pValue,
        bool bEnableTerribleBackwardsCompatibilitySchemaParsingCode)
{
  google::protobuf::Message *v6; // rdx
  char *v7; // rdi
  int v9; // eax
  int v10; // edx
  char v11; // [rsp+Fh] [rbp-91h] BYREF
  std::string sValue; // [rsp+10h] [rbp-90h] BYREF
  std::string v13; // [rsp+20h] [rbp-80h] BYREF

  std::string::string(&sValue, pszValue, &v13);
  CProtoItemHeroStatue::CProtoItemHeroStatue(&v13);
  google::protobuf::TextFormat::ParseFromString(&sValue, &v13, v6);
  CProtoItemHeroStatue::CopyFrom(out_pValue->asBlobPointer, &v13);
  CProtoItemHeroStatue::~CProtoItemHeroStatue(&v13);
  v7 = sValue._M_dataplus._M_p - 24;
  if ( sValue._M_dataplus._M_p - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v9 = _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF);
    }
    else
    {
      v10 = *(sValue._M_dataplus._M_p - 2);
      *(sValue._M_dataplus._M_p - 2) = v10 - 1;
      v9 = v10;
    }
    if ( v9 <= 0 )
      std::string::_Rep::_M_destroy(v7, &v11);
  }
  return 1;
}


// CSchemaAttributeType_HeroStatue::ConvertEconAttributeValueToString  (line 1696, @0x0000000002e50540, libserver.so)  // inlines: ConvertToString
// calls: google::protobuf::TextFormat::PrintToString(google::protobuf::Message const&,std::string *)
void __fastcall CSchemaAttributeType_HeroStatue::ConvertEconAttributeValueToString(
        const CSchemaAttributeType_HeroStatue *const this,
        const CEconItemAttributeDefinition *pAttrDef,
        const attribute_data_union_t *const value,
        std::string *out_ps)
{
  google::protobuf::TextFormat::PrintToString(value->asBlobPointer, out_ps, value);
}


// CDOTAItemSchema::BAddAttributeTypes  (line 1708, @0x0000000002e45780, libserver.so)  // inlines: AddToTail, CEconSchemaSymbol, CSchemaAttributeTypeBase, CSchemaAttributeType_HeroStatue, CUtlSymbolLarge, CopyConstruct<attr_type_t>, Element, GrowMemory, ISchemaAttributeTypeBase, RegisterAttributeType<ISchemaAttributeTypeBase<CAttribute_HeroStatue>, CAttribute_HeroStatue>, attr_type_t, operator[]
// calls: CEconItemSchema::BAddAttributeTypes, operator new, CEconSchemaSymbol::CEconSchemaSymbol, CUtlMemory<attr_type_t, int>::Grow
// strings: "21CAttribute_HeroStatue"
// globals: CSchemaAttributeStats::m_pHead, ISchemaAttributeTypeBase<CAttribute_HeroStatue>::s_InstanceStats
bool __fastcall CDOTAItemSchema::BAddAttributeTypes(
        CDOTAItemSchema *const this,
        CUtlVector<CUtlString,CUtlMemory<CUtlString,int> > *pVecErrors)
{
  ISchemaAttributeType *v3; // r12
  int m_Size; // r12d
  int v5; // eax
  attr_type_t *v6; // rax
  CEconSchemaSymbol v8; // [rsp+0h] [rbp-20h] BYREF
  const ISchemaAttributeType *v9; // [rsp+8h] [rbp-18h]

  CEconItemSchema::BAddAttributeTypes(this, pVecErrors);
  v3 = operator new(8u);  // new CSchemaAttributeType_HeroStatue (size matches)  [vptr stores: ISchemaAttributeTypeBase<CAttribute_HeroStatue>, CSchemaAttributeType_HeroStatue]
  v3->_vptr_ISchemaAttributeType = off_47A0AD0;  // vptr: ISchemaAttributeTypeBase<CAttribute_HeroStatue>
  if ( ISchemaAttributeTypeBase<CAttribute_HeroStatue>::s_InstanceStats.m_pszDesc == 0 )
  {
    ISchemaAttributeTypeBase<CAttribute_HeroStatue>::s_InstanceStats.m_pszDesc = "21CAttribute_HeroStatue";
    ISchemaAttributeTypeBase<CAttribute_HeroStatue>::s_InstanceStats.m_pNext = CSchemaAttributeStats::m_pHead;
    CSchemaAttributeStats::m_pHead = &ISchemaAttributeTypeBase<CAttribute_HeroStatue>::s_InstanceStats;
  }
  v3->_vptr_ISchemaAttributeType = off_47A0BD0;  // vptr: CSchemaAttributeType_HeroStatue
  CEconSchemaSymbol::CEconSchemaSymbol(&v8, "hero_statue");
  v9 = v3;
  m_Size = this->m_vecAttributeTypes.m_Size;
  v5 = m_Size;
  if ( m_Size == this->m_vecAttributeTypes.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<attr_type_t,int>::Grow(&this->m_vecAttributeTypes.m_Memory, 1);
    v5 = this->m_vecAttributeTypes.m_Size;
  }
  this->m_vecAttributeTypes.m_Size = v5 + 1;
  v6 = &this->m_vecAttributeTypes.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
  {
    v6->m_sName = v8;
    v6->m_pAttrType = v9;
  }
  return 1;
}


// CDOTAItemSchema::CreateEconToolImpl  (line 1720, @0x0000000002e3d120, libserver.so)  // inlines: CEconSchemaSymbol, CEconTool_AwardEventPoints, CEconTool_CompendiumSetSelection, CEconTool_CustomGameTicket, CEconTool_EffigyReforgeItem, CEconTool_Egg, CEconTool_EmoticonUnlock, CEconTool_EventTicket, CEconTool_FantasyTicket, CEconTool_GemCombiner, CEconTool_Gift, CEconTool_HeroAbility, CEconTool_HeroStatueForge, CEconTool_HeroStatueReforge, CEconTool_HeroTaunt, CEconTool_PassportFantasyTeam, CEconTool_TeamShowcaseForge, CEconTool_TournamentPassport, CEconTool_UnusualPaint, CUtlSymbolLarge, item_definition_index_t
// calls: V_stricmp_fast, operator new, IEconTool::IEconTool, CEconItemSchema::CreateEconToolImpl, CEconTool_Compendium::CEconTool_Compendium, CEconTool_PennantUpgrade::CEconTool_PennantUpgrade, operator delete, _Unwind_Resume, CEconTool_EggEssence::CEconTool_EggEssence, CEconTool_VictoryPrediction::CEconTool_VictoryPrediction, CEconTool_DropRateBooster::CEconTool_DropRateBooster, CEconTool_LeagueViewPass::CEconTool_LeagueViewPass (14 total)
// strings: "tournament_passport", "emoticon_unlock", "custom_game_ticket", "compendium", "pennant_upgrade", "compendium_set_selection" (23 total)
IEconTool *__fastcall CDOTAItemSchema::CreateEconToolImpl(
        CDOTAItemSchema *const this,
        const char *pszToolType,
        const char *pszUseString,
        const char *pszUsageRestriction,
        item_capabilities_t unCapabilities,
        KeyValues *pUsageKV)
{
  IEconTool *v11; // r12
  IEconTool *v13; // r12
  IEconTool *v14; // r12
  IEconTool *v15; // r12
  CEconTool_Compendium *v16; // r12
  CEconTool_PennantUpgrade *v17; // r15
  IEconTool *v18; // r12
  IEconTool *v19; // r12
  IEconTool *v20; // r12
  IEconTool *v21; // r12
  IEconTool *v22; // r13
  IEconTool *v23; // r15
  IEconTool *v24; // r12
  IEconTool *v25; // r13
  IEconTool *v26; // rbx
  IEconTool *v27; // r12
  IEconTool *v28; // r12
  IEconTool *v29; // r12
  IEconTool *v30; // r12
  IEconTool *v31; // r12

  if ( pszToolType == 0 )
    return CEconItemSchema::CreateEconToolImpl(
             this,
             pszToolType,
             pszUseString,
             pszUsageRestriction,
             unCapabilities,
             pUsageKV);
  if ( V_stricmp_fast(pszToolType, "tournament_passport") == 0 )
  {
    if ( pszUsageRestriction == 0 && unCapabilities == item_capabilities_t::ITEM_CAP_NONE )
    {
      v11 = operator new(0x48u);  // new CEconTool_TournamentPassport (size matches)
      IEconTool::IEconTool(v11, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
      v11->_vptr_IEconTool = off_479F9D0;  // vptr: CEconTool_TournamentPassport
      return v11;
    }
    return 0;
  }
  if ( V_stricmp_fast(pszToolType, "emoticon_unlock") == 0 )
  {
    if ( pszUsageRestriction == 0 && unCapabilities == item_capabilities_t::ITEM_CAP_NONE )
    {
      v13 = operator new(0x50u);  // new CEconTool_EmoticonUnlock (size matches)
      IEconTool::IEconTool(v13, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
      v13->_vptr_IEconTool = off_479FD30;  // vptr: CEconTool_EmoticonUnlock
      return v13;
    }
    return 0;
  }
  if ( V_stricmp_fast(pszToolType, "custom_game_ticket") == 0 )
  {
    if ( pszUsageRestriction == 0 && unCapabilities == item_capabilities_t::ITEM_CAP_NONE )
    {
      v14 = operator new(0x58u);  // new CEconTool_CustomGameTicket (size matches)
      IEconTool::IEconTool(v14, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
      v14->_vptr_IEconTool = off_479FD90;  // vptr: CEconTool_CustomGameTicket
      return v14;
    }
    return 0;
  }
  if ( V_stricmp_fast(pszToolType, "event_points") == 0 )
  {
    if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
      return 0;
    v15 = operator new(0x68u);  // new CEconTool_AwardEventPoints (size matches)
    IEconTool::IEconTool(v15, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
    v15[1].m_symUsageRestriction.u.m_Id = 0;
    v15->_vptr_IEconTool = off_479FC70;  // vptr: CEconTool_AwardEventPoints
    return v15;
  }
  if ( V_stricmp_fast(pszToolType, "compendium") == 0 )
  {
    if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
      return 0;
    v16 = operator new(0x80u);
    CEconTool_Compendium::CEconTool_Compendium(v16, pszToolType, pszUseString, pUsageKV);
    return v16;
  }
  if ( V_stricmp_fast(pszToolType, "pennant_upgrade") == 0 )
  {
    if ( pszUsageRestriction != 0 )
      return 0;
    v17 = operator new(0x60u);
    CEconTool_PennantUpgrade::CEconTool_PennantUpgrade(v17, pszToolType, pszUseString, unCapabilities, pUsageKV);
    return v17;
  }
  if ( V_stricmp_fast(pszToolType, "gift") == 0 )
  {
    if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
      return 0;
    v18 = operator new(0x60u);  // new CEconTool_Gift (size matches)
    IEconTool::IEconTool(v18, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
    v18[1]._vptr_IEconTool = 0;
    v18->_vptr_IEconTool = off_479FF70;  // vptr: CEconTool_Gift
    LODWORD(v18[1].m_symTypeName.u.m_Id) = 0;
    HIDWORD(v18[1].m_symTypeName.u.m_pAsString) = 1;
    HIDWORD(v18[1].m_symUseString.u.m_pAsString) = 1;
    return v18;
  }
  if ( V_stricmp_fast(pszToolType, "compendium_set_selection") == 0 )
  {
    if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
      return 0;
    v19 = operator new(0x60u);  // new CEconTool_CompendiumSetSelection (size matches)
    IEconTool::IEconTool(v19, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
    v19->_vptr_IEconTool = off_479FB50;  // vptr: CEconTool_CompendiumSetSelection
    return v19;
  }
  if ( V_stricmp_fast(pszToolType, "passport_fantasy_team") == 0 )
  {
    if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
      return 0;
    v20 = operator new(0x48u);  // new CEconTool_PassportFantasyTeam (size matches)
    IEconTool::IEconTool(v20, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
    v20->_vptr_IEconTool = off_479FBB0;  // vptr: CEconTool_PassportFantasyTeam
    return v20;
  }
  if ( V_stricmp_fast(pszToolType, "fantasy_ticket") == 0 )
  {
    if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
      return 0;
    v21 = operator new(0x48u);  // new CEconTool_FantasyTicket (size matches)
    IEconTool::IEconTool(v21, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
    v21->_vptr_IEconTool = off_479FC10;  // vptr: CEconTool_FantasyTicket
    return v21;
  }
  if ( V_stricmp_fast(pszToolType, "unusual_paint") == 0 )
  {
    if ( pszUsageRestriction != 0 || pUsageKV != 0 )
      return 0;
    v22 = operator new(0x48u);  // new CEconTool_UnusualPaint (size matches)
    IEconTool::IEconTool(v22, pszToolType, 0, 0, unCapabilities, 0);
    v22->_vptr_IEconTool = off_47A0DB0;  // vptr: CEconTool_UnusualPaint
    return v22;
  }
  if ( V_stricmp_fast(pszToolType, "gem_combiner") != 0 )
  {
    if ( V_stricmp_fast(pszToolType, "egg_essence") == 0 )
    {
      if ( pszUsageRestriction != 0 )
        return 0;
      v17 = operator new(0x60u);
      CEconTool_EggEssence::CEconTool_EggEssence(v17, pszToolType, pszUseString, unCapabilities, pUsageKV);
      return v17;
    }
    if ( V_stricmp_fast(pszToolType, "egg") == 0 )
    {
      if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
        return 0;
      v24 = operator new(0x48u);  // new CEconTool_Egg (size matches)
      IEconTool::IEconTool(v24, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
      v24->_vptr_IEconTool = off_479F910;  // vptr: CEconTool_Egg
      return v24;
    }
    if ( V_stricmp_fast(pszToolType, "hero_taunt") == 0 )
    {
      if ( pszUsageRestriction != 0 || pUsageKV != 0 )
        return 0;
      v25 = operator new(0x48u);  // new CEconTool_HeroTaunt (size matches)
      IEconTool::IEconTool(v25, pszToolType, pszUseString, 0, unCapabilities, 0);
      v25->_vptr_IEconTool = off_47A00F0;  // vptr: CEconTool_HeroTaunt
      return v25;
    }
    if ( V_stricmp_fast(pszToolType, "victory_prediction") == 0 )
    {
      if ( pszUsageRestriction != 0 )
        return 0;
      v17 = operator new(0x88u);
      CEconTool_VictoryPrediction::CEconTool_VictoryPrediction(v17, pszToolType, pszUseString, unCapabilities, pUsageKV);
      return v17;
    }
    if ( V_stricmp_fast(pszToolType, "hero_ability") == 0 )
    {
      if ( pszUsageRestriction != 0 || pUsageKV != 0 )
        return 0;
      v26 = operator new(0x48u);  // new CEconTool_HeroAbility (size matches)
      IEconTool::IEconTool(v26);
      v26->_vptr_IEconTool = off_47A0270;  // vptr: CEconTool_HeroAbility
      return v26;
    }
    if ( V_stricmp_fast(pszToolType, "fortunate_soul") == 0 )
    {
      if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
        return 0;
      v16 = operator new(0x68u);
      CEconTool_DropRateBooster::CEconTool_DropRateBooster(v16, pszToolType, pszUseString, pUsageKV);
      return v16;
    }
    if ( V_stricmp_fast(pszToolType, "league_view_pass") == 0 )
    {
      if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
        return 0;
      v16 = operator new(0xD0u);
      CEconTool_LeagueViewPass::CEconTool_LeagueViewPass(v16, pszToolType, pszUseString, pUsageKV);
      return v16;
    }
    if ( V_stricmp_fast(pszToolType, "event_ticket") == 0 )
    {
      if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
        return 0;
      v27 = operator new(0x48u);  // new CEconTool_EventTicket (size matches)
      IEconTool::IEconTool(v27, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
      v27->_vptr_IEconTool = off_479F970;  // vptr: CEconTool_EventTicket
      return v27;
    }
    if ( V_stricmp_fast(pszToolType, "player_card") == 0 )
    {
      if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
        return 0;
      v16 = operator new(0x98u);
      CEconTool_PlayerCard::CEconTool_PlayerCard(v16, pszToolType, pszUseString, pUsageKV);
      return v16;
    }
    if ( V_stricmp_fast(pszToolType, "player_card_pack") == 0 )
    {
      if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
        return 0;
      v16 = operator new(0x98u);
      CEconTool_PlayerCardPack::CEconTool_PlayerCardPack(
        v16,
        pszToolType,
        pszUseString,
        item_capabilities_t::ITEM_CAP_NONE,
        pUsageKV);
      return v16;
    }
    if ( V_stricmp_fast(pszToolType, "hero_statue_forge") == 0 )
    {
      if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
        return 0;
      v28 = operator new(0x50u);  // new CEconTool_HeroStatueForge (size matches)
      IEconTool::IEconTool(v28, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
      LOWORD(v28[1]._vptr_IEconTool) = 0;
      v28->_vptr_IEconTool = off_479FEB0;  // vptr: CEconTool_HeroStatueForge
      return v28;
    }
    if ( V_stricmp_fast(pszToolType, "hero_statue_reforgeitem") == 0 )
    {
      if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
        return 0;
      v29 = operator new(0x48u);  // new CEconTool_EffigyReforgeItem (size matches)
      IEconTool::IEconTool(v29, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
      v29->_vptr_IEconTool = off_479FAF0;  // vptr: CEconTool_EffigyReforgeItem
      return v29;
    }
    if ( V_stricmp_fast(pszToolType, "hero_statue_reforge") == 0 )
    {
      if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
        return 0;
      v30 = operator new(0x48u);  // new CEconTool_HeroStatueReforge (size matches)
      IEconTool::IEconTool(v30, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
      v30->_vptr_IEconTool = off_479FF10;  // vptr: CEconTool_HeroStatueReforge
      return v30;
    }
    if ( V_stricmp_fast(pszToolType, "team_showcase_forge") == 0 )
    {
      if ( pszUsageRestriction != 0 || unCapabilities != item_capabilities_t::ITEM_CAP_NONE )
        return 0;
      v31 = operator new(0x50u);  // new CEconTool_TeamShowcaseForge (size matches)
      IEconTool::IEconTool(v31, pszToolType, pszUseString, 0, item_capabilities_t::ITEM_CAP_NONE, pUsageKV);
      LOWORD(v31[1]._vptr_IEconTool) = 0;
      v31->_vptr_IEconTool = off_479FA90;  // vptr: CEconTool_TeamShowcaseForge
      return v31;
    }
    return CEconItemSchema::CreateEconToolImpl(
             this,
             pszToolType,
             pszUseString,
             pszUsageRestriction,
             unCapabilities,
             pUsageKV);
  }
  if ( pszUsageRestriction != 0 )
    return 0;
  v23 = operator new(0x48u);  // new CEconTool_GemCombiner (size matches)
  IEconTool::IEconTool(v23, pszToolType, pszUseString, 0, unCapabilities, pUsageKV);
  v23->_vptr_IEconTool = off_47A0E10;  // vptr: CEconTool_GemCombiner
  return v23;
}


