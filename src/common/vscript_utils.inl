
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// ScriptVmKeyValueFromVariant  (line 90, @0x0000000001f87a50, libserver.so)  // inlines: AssignTo, TempString, ToString, operator const Vector&, operator float, operator int
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::SetPtr, KeyValues::SetFloat, CFmtStrN<256, false>::CFmtStrN, KeyValues::SetString, KeyValues::SetInt, ScriptTableToKeyValues, Warning, V_snprintf, VariantFieldTypeName, __stack_chk_fail (14 total)
// callers: ScriptTableToKeyValues
// strings: "ScriptVmKeyValueFromVariant failed to unpack parameter variant type %d\n", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_1F87A8F, jpt_1F87CDB, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
KeyValues *__fastcall ScriptVmKeyValueFromVariant(IScriptVM *pVM, ScriptVariant_t *const varValue)
{
  int m_type; // esi
  KeyValues *v4; // r12
  KeyValues *result; // rax
  KeyValues *v6; // r12
  float v7; // xmm1_4
  KeyValues *v8; // r12
  const Vector *m_uint64; // rcx
  const char *m_szBuf; // rdx
  KeyValues *v11; // r12
  int16 v12; // ax
  int m_float; // edx
  int16 v14; // ax
  const char *v15; // rax
  double m_float64; // xmm0_8
  const char *v17; // rcx
  CFmtStrN<256,false> v18; // [rsp+10h] [rbp-130h] BYREF
  unsigned __int64 v19; // [rsp+128h] [rbp-18h]

  v19 = __readfsqword(0x28u);
  m_type = varValue->m_type;
  switch ( m_type )
  {
    case 1:
    case 34:
      v6 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v6, "");
      KeyValues::SetFloat(v6, 0, v7);
      return v6;
    case 3:
      v8 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v8, "");
      m_uint64 = varValue->m_uint64;
      if ( varValue->m_uint64 == 0 )
        m_uint64 = &vec3_origin;
      CFmtStrN<256,false>::CFmtStrN(&v18, "%f %f %f", m_uint64->x, m_uint64->y, m_uint64->z);
      goto LABEL_8;
    case 5:
      v11 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v11, "");
      v12 = varValue->m_type;
      if ( v12 == 1 )
      {
        m_float = varValue->m_float;
      }
      else if ( v12 == 34 )
      {
        m_float = varValue->m_float64;
      }
      else
      {
        m_float = varValue->m_int;
      }
      goto LABEL_13;
    case 6:
      v11 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v11, "");
      m_float = varValue->m_char;
LABEL_13:
      KeyValues::SetInt(v11, 0, m_float);
      return v11;
    case 8:
      v8 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v8, "");
      CFmtStrN<256,false>::CFmtStrN(&v18, "%c", varValue->m_char);
LABEL_8:
      m_szBuf = v18.m_szBuf;
      goto LABEL_9;
    case 30:
      v8 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v8, "");
      v14 = varValue->m_type;
      if ( v14 == 30 )
      {
        m_szBuf = varValue->m_uint64;
      }
      else
      {
        switch ( v14 )
        {
          case 0:
            goto LABEL_23;
          case 1:
            m_float64 = varValue->m_float;
            goto LABEL_25;
          case 3:
          case 39:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g",
              *varValue->m_pszString,
              *(varValue->m_uint64 + 4),
              *(varValue->m_uint64 + 8));
            m_szBuf = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
          case 4:
          case 27:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g %g %g",
              *varValue->m_pszString,
              *(varValue->m_uint64 + 4),
              *(varValue->m_uint64 + 8),
              *(varValue->m_uint64 + 12));
            m_szBuf = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
          case 5:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", varValue->m_uint);
            goto LABEL_28;
          case 6:
            v17 = "true";
            if ( varValue->m_char == 0 )
              v17 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v17);
            goto LABEL_32;
          case 8:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", varValue->m_char);
            goto LABEL_28;
          case 9:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d %d %d %d",
              varValue->m_int,
              BYTE1(varValue->m_int),
              BYTE2(varValue->m_int),
              HIBYTE(varValue->m_int));
            m_szBuf = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
          case 25:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *varValue->m_pszString,
              *(varValue->m_uint64 + 4));
            m_szBuf = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
          case 26:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%lld",
              varValue->m_uint64);
            goto LABEL_32;
          case 33:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%llu",
              varValue->m_uint64);
LABEL_32:
            m_szBuf = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
          case 34:
            m_float64 = varValue->m_float64;
LABEL_25:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
            m_szBuf = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
          case 37:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", varValue->m_uint);
LABEL_28:
            m_szBuf = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
          default:
            v15 = VariantFieldTypeName(v14);
            Warning("No conversion from %s to string at the moment!\n", v15);
LABEL_23:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            m_szBuf = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
        }
      }
LABEL_9:
      KeyValues::SetString(v8, 0, m_szBuf);
      result = v8;
      break;
    case 31:
      result = ScriptTableToKeyValues(pVM, "", varValue->m_hScript);
      break;
    case 48:
      v4 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v4, "");
      KeyValues::SetPtr(v4, 0, varValue->m_pData);
      result = v4;
      break;
    default:
      Warning("ScriptVmKeyValueFromVariant failed to unpack parameter variant type %d\n", m_type);
      result = 0;
      break;
  }
  return result;
}


// ScriptTableToKeyValues  (line 137, @0x0000000001f87610, libserver.so)  // inlines: CVariantBase, Float, Free, ScriptVmStringFromVariant, SetInt, operator const Vector&, operator float, operator=, ~CVariantBase
// calls: KeyValues::operator new, KeyValues::KeyValues, V_snprintf, CVariantBase<CVariantDefaultAllocator>::Free, ScriptVmKeyValueFromVariant, KeyValues::SetName, KeyValues::AddSubKey, Warning, KeyValues::operator delete, _Unwind_Resume, __stack_chk_fail
// callers: ScriptVmKeyValueFromVariant, ScriptHelper_CreateEvent, CCustomGameEventManager::Script_Send_ServerToAllClients, CCustomGameEventManager::Script_Send_ServerToTeam, CCustomGameEventManager::Script_Send_ServerToPlayer, CCustomNetTableManager::Script_SetTableValue, CDOTA_CustomUIManager::Script_Hud_Create, CDOTA_CustomUIManager::Script_Hud_SetDialogVariables, CDOTAGamerules::Script_SetEventMetadataCustomTable, Script_ExecuteOrderFromTable, SendFrostyPointsMessageToGC, UpdateEventPoints (13 total)
// strings: "ScriptVmStringFromVariant failed to unpack parameter variant type %d\n"
// globals: jpt_1F877B3
KeyValues *__fastcall ScriptTableToKeyValues(IScriptVM *pVM, const char *szName, HSCRIPT hTable)
{
  const char *v5; // rbx
  __int64 v7; // rax
  int v8; // ebx
  unsigned int v9; // r14d
  int m_char; // ecx
  KeyValues *v11; // r15
  const Vector *m_uint64; // rax
  float m_float; // xmm0_4
  unsigned int v14; // r15d
  KeyValues *kv; // [rsp+8h] [rbp-108h]
  int v16; // [rsp+14h] [rbp-FCh]
  ScriptVariant_t varKey; // [rsp+30h] [rbp-E0h] BYREF
  ScriptVariant_t varValue; // [rsp+40h] [rbp-D0h] BYREF
  char chScratchBuffer[136]; // [rsp+50h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+D8h] [rbp-38h]

  v5 = szName;
  v21 = __readfsqword(0x28u);
  if ( szName == 0 )
    v5 = "";
  kv = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(kv, v5);
  if ( hTable != 0 && pVM != 0 )
  {
    varKey.m_type = 0;
    varKey.m_flags = 0;
    varValue.m_type = 0;
    varValue.m_flags = 0;
    v7 = *pVM;
    varKey.m_uint64 = 0;
    varValue.m_uint64 = 0;
    v16 = (*(v7 + 288))(pVM, hTable);
    if ( v16 > 0 )
    {
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        v9 = (*(*pVM + 296LL))(pVM, hTable, v9, &varKey, &varValue);
        memset(chScratchBuffer, 0, 0x80u);
        if ( varKey.m_type == 1 )
        {
          m_float = varKey.m_float;
        }
        else
        {
          if ( varKey.m_type != 34 )
          {
            switch ( varKey.m_type )
            {
              case 3:
                m_uint64 = varKey.m_uint64;
                if ( varKey.m_uint64 == 0 )
                  m_uint64 = &vec3_origin;
                V_snprintf(chScratchBuffer, 128, "%f %f %f", m_uint64->x, m_uint64->y, m_uint64->z);
                break;
              case 5:
                goto LABEL_30;
              case 6:
                m_char = varKey.m_char;
                goto LABEL_17;
              case 8:
                V_snprintf(chScratchBuffer, 128, "%c", varKey.m_char);
                break;
              case 0x1E:
                V_snprintf(chScratchBuffer, 128, "%s", varKey.m_pszString);
                break;
              default:
                Warning("ScriptVmStringFromVariant failed to unpack parameter variant type %d\n", varKey.m_type);
                break;
            }
            if ( chScratchBuffer[0] == 0 )
              goto LABEL_13;
            goto LABEL_18;
          }
          m_float = varKey.m_float64;
        }
        v14 = m_float;
        if ( (varKey.m_flags & 1) != 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, varKey.m_uint64);
          varKey.m_flags &= ~1u;
        }
        varKey.m_type = 5;
        varKey.m_uint64 = v14;
LABEL_30:
        m_char = varKey.m_int;
LABEL_17:
        V_snprintf(chScratchBuffer, 128, "%d", m_char);
        if ( chScratchBuffer[0] != 0 )
        {
LABEL_18:
          v11 = ScriptVmKeyValueFromVariant(pVM, &varValue);
          if ( v11 == 0 )
          {
            v11 = KeyValues::operator new(0x14u);
            KeyValues::KeyValues(v11, "");
          }
          KeyValues::SetName(v11, chScratchBuffer);
          KeyValues::AddSubKey(kv, v11);
        }
LABEL_13:
        if ( ++v8 == v16 )
        {
          CVariantBase<CVariantDefaultAllocator>::Free(&varValue);
          goto LABEL_15;
        }
      }
    }
    CVariantBase<CVariantDefaultAllocator>::Free(&varValue);
LABEL_15:
    CVariantBase<CVariantDefaultAllocator>::Free(&varKey);
  }
  return kv;
}


// ScriptTableFromKeyValues  (line 191, @0x0000000001f87fb0, libserver.so)  // inlines: CVariantBase, CopyData, ScriptVmKeyValueToVariant, operator=, ~CVariantBase
// calls: KeyValues::GetFirstSubKey, KeyValues::GetDataType, KeyValues::GetUint64, V_snprintf, CVariantBase<CVariantDefaultAllocator>::Free, KeyValues::GetName, KeyValues::GetNextKey, KeyValues::GetFloat, KeyValues::GetInt, KeyValues::GetString, Warning, _Unwind_Resume (13 total)
// callers: CCustomGameEventManager::ReceiveClientMsgCustomGameEvent, CCustomNetTableManager::Script_GetTableValue
// strings: "ScriptVmKeyValueToVariant failed to package parameter %s (type %d)\n"
// globals: jpt_1F88069
HSCRIPT __fastcall ScriptTableFromKeyValues(IScriptVM *pVM, KeyValues *kv, HSCRIPT hTable)
{
  HSCRIPT m_uint64; // r15
  KeyValues *i; // rbx
  float v7; // xmm1_4
  uint64 Uint64; // rax
  const char *Name; // rax
  const char *v11; // rax
  __int64 v12; // rax
  int Float; // [rsp+0h] [rbp-E0h]
  int Int; // [rsp+0h] [rbp-E0h]
  const char *String; // [rsp+0h] [rbp-E0h]
  HSCRIPT v16; // [rsp+0h] [rbp-E0h]
  CKeyValues_Data::types_t DataType; // [rsp+0h] [rbp-E0h]
  ScriptVariant_t varValue; // [rsp+10h] [rbp-D0h] BYREF
  char chScratchBuffer[128]; // [rsp+20h] [rbp-C0h] BYREF
  unsigned __int64 v20; // [rsp+A8h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( kv == 0 || pVM == 0 )
    return 0;
  m_uint64 = hTable;
  if ( hTable == 0 )
  {
    v12 = *pVM;
    varValue.m_flags = 0;
    varValue.m_type = 0;
    varValue.m_uint64 = 0;
    (*(v12 + 264))(pVM, &varValue);
    m_uint64 = varValue.m_uint64;
    CVariantBase<CVariantDefaultAllocator>::Free(&varValue);
  }
  for ( i = KeyValues::GetFirstSubKey(kv); i != 0; i = KeyValues::GetNextKey(i) )
  {
    varValue.m_type = 0;
    varValue.m_flags = 0;
    varValue.m_uint64 = 0;
    switch ( KeyValues::GetDataType(i, 0) )
    {
      case CKeyValues_Data::types_t::TYPE_NONE:
        v16 = ScriptTableFromKeyValues(pVM, i, 0);
        CVariantBase<CVariantDefaultAllocator>::Free(&varValue);
        varValue.m_type = 31;
        varValue.m_uint64 = v16;
        goto LABEL_8;
      case CKeyValues_Data::types_t::TYPE_STRING:
        String = KeyValues::GetString(i, 0, "", 0, 0);
        CVariantBase<CVariantDefaultAllocator>::Free(&varValue);
        varValue.m_type = 30;
        varValue.m_uint64 = String;
        goto LABEL_8;
      case CKeyValues_Data::types_t::TYPE_INT:
        Int = KeyValues::GetInt(i, 0, 0);
        CVariantBase<CVariantDefaultAllocator>::Free(&varValue);
        varValue.m_type = 5;
        varValue.m_int = Int;
        goto LABEL_8;
      case CKeyValues_Data::types_t::TYPE_FLOAT:
        Float = KeyValues::GetFloat(i, 0, v7);
        CVariantBase<CVariantDefaultAllocator>::Free(&varValue);
        varValue.m_type = 1;
        varValue.m_int = Float;
        goto LABEL_8;
      case CKeyValues_Data::types_t::TYPE_UINT64:
        Uint64 = KeyValues::GetUint64(i, 0, 0);
        V_snprintf(chScratchBuffer, 128, "%llu", Uint64);
        CVariantBase<CVariantDefaultAllocator>::Free(&varValue);
        varValue.m_type = 30;
        varValue.m_uint64 = chScratchBuffer;
LABEL_8:
        Name = KeyValues::GetName(i);
        (*(*pVM + 240LL))(pVM, m_uint64, Name, &varValue);
        CVariantBase<CVariantDefaultAllocator>::Free(&varValue);
        break;
      default:
        DataType = KeyValues::GetDataType(i, 0);
        v11 = KeyValues::GetName(i);
        Warning("ScriptVmKeyValueToVariant failed to package parameter %s (type %d)\n", v11, DataType);
        CVariantBase<CVariantDefaultAllocator>::Free(&varValue);
        break;
    }
  }
  return m_uint64;
}


// VScriptFilter::ClearFilterFunction  (line 348, @0x00000000024a1a50, libserver.so)
// callers: CDOTABaseGameMode::CDOTABaseGameMode
void __fastcall VScriptFilter::ClearFilterFunction(VScriptFilter *const this)
{
  if ( this->m_hFunction != 0 )
  {
    (*(*g_pScriptVM + 152LL))(g_pScriptVM);
    this->m_hFunction = 0;
  }
  if ( this->m_hContext != 0 )
  {
    (*(*g_pScriptVM + 96LL))(g_pScriptVM);
    this->m_hContext = 0;
  }
}


// VScriptFilter::RunScriptFilter  (line 406, @0x000000000245b840, libserver.so)  // inlines: CVariantBase, CreateTableFromKeyValues, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, Recursive_ConvertKeyValuesToTable, KeyValues::GetName, KeyValues::~KeyValues, KeyValues::operator delete, _Unwind_Resume
// callers: CDOTABaseAbility_BotScript::GetSpecialValueInt, CDOTABaseAbility_BotScript::GetSpecialValueFloat, CDOTA_Ability_DataDriven::LookupValueSymbol, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_GreaterClarity::OnCreated, CDOTA_Modifier_Healing_Campfire_Heal::OnCreated, CDOTA_Modifier_UpgradedMortar::OnCreated, CDOTAHeroList::GiveXP, CDOTAHeroList::GiveGold, CDOTA_BaseNPC::GainedModifier, CDOTA_BaseNPC::ActivateRuneEffect
bool __fastcall VScriptFilter::RunScriptFilter(VScriptFilter *const this, KeyValues **pFilterKV)
{
  IScriptVM *v4; // r15
  bool v5; // bl
  __int64 (__fastcall *v7)(IScriptVM *, uint64, const char *, _QWORD, _QWORD); // rbx
  const char *Name; // rax
  KeyValues *v9; // rbx
  KeyValues *pKeyValues; // [rsp+8h] [rbp-58h]
  KeyValues *pKeyValuesa; // [rsp+8h] [rbp-58h]
  CVariantBase<CVariantDefaultAllocator> args[1]; // [rsp+10h] [rbp-50h] BYREF
  ScriptVariant_t v13; // [rsp+20h] [rbp-40h] BYREF

  if ( this->m_hFunction == 0 )
    return 1;
  if ( this->m_hContext == 0 )
    return 1;
  pKeyValues = *pFilterKV;
  if ( *pFilterKV == 0 )
    return 1;
  args[0].m_type = 0;
  args[0].m_flags = 0;
  args[0].m_uint64 = 0;
  v4 = g_pScriptVM;
  (*(*g_pScriptVM + 264LL))(g_pScriptVM, args);
  if ( args[0].m_uint64 != 0 )
    Recursive_ConvertKeyValuesToTable(pKeyValues, v4, args[0].m_hScript);
  v13.m_uint64 = 0;
  v13.m_type = 0;
  v13.m_flags = 0;
  (*(*g_pScriptVM + 160LL))(g_pScriptVM, this->m_hFunction, args, 1, &v13, this->m_hContext, 1);
  v5 = 0;
  if ( v13.m_type == 6 && v13.m_char != 0 )
  {
    v7 = *(*g_pScriptVM + 304LL);
    Name = KeyValues::GetName(*pFilterKV);
    v9 = v7(g_pScriptVM, args[0].m_uint64, Name, 0, 0);
    if ( v9 != 0 )
    {
      if ( *pFilterKV != 0 )
      {
        pKeyValuesa = *pFilterKV;
        KeyValues::~KeyValues(*pFilterKV);
        KeyValues::operator delete(pKeyValuesa);
      }
      *pFilterKV = v9;
      v5 = 1;
    }
    else
    {
      v5 = 1;
    }
  }
  (*(*g_pScriptVM + 344LL))(g_pScriptVM, args);
  CVariantBase<CVariantDefaultAllocator>::Free(&v13);
  CVariantBase<CVariantDefaultAllocator>::Free(args);
  return v5;
}


