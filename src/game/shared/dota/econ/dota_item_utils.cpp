
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// DOTAItemUtils  (line 12, @0x0000000002e38670, libserver.so)
// globals: s_DOTAItemUtils
CDOTAItemUtils *__cdecl DOTAItemUtils()
{
  return &s_DOTAItemUtils;
}


// CDOTAItemUtils::CDOTAItemUtils  (line 17, @0x0000000002e38680, libserver.so)
// calls: CEconItemUtils::CEconItemUtils
void __fastcall CDOTAItemUtils::CDOTAItemUtils(CDOTAItemUtils *const this)
{
  CEconItemUtils::CEconItemUtils(this);
  this->_vptr_CEconItemUtils = &off_47A0FF0;
}


// CDOTAItemUtils::IsGemTypeValidForSocketType  (line 21, @0x0000000002e30800, libserver.so)
bool __fastcall CDOTAItemUtils::IsGemTypeValidForSocketType(
        CDOTAItemUtils *const this,
        ESocketType eGemType,
        ESocketType eTypeRequired)
{
  bool result; // al

  switch ( eTypeRequired )
  {
    case ESocketType::SocketType_Effect:
      result = 0;
      if ( eGemType == ESocketType::SocketType_Effect )
        return 1;
      break;
    case ESocketType::SocketType_Color:
      result = 0;
      if ( eGemType == ESocketType::SocketType_Color )
        return 1;
      break;
    case ESocketType::SocketType_None:
      return (eGemType - 1) > 1;
    default:
      return 1;
  }
  return result;
}


// CDOTAItemUtils::CanGemBePlacedInSocketType  (line 54, @0x0000000002e31780, libserver.so)  // inlines: GemInfo_t
GemInSocketResult_t __fastcall CDOTAItemUtils::CanGemBePlacedInSocketType(
        CDOTAItemUtils *const this,
        IEconItemInterface *pItemToSocket,
        ESocketType socketType,
        IEconItemInterface *pGemItem)
{
  GemInSocketResult_t v5; // ebx
  int (**vptr_IEconItemInterface)(...); // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  GemInfo_t gemInfo; // [rsp+0h] [rbp-30h] BYREF

  v5 = GemInSocketResult_t::INVALID_SOCKET_SPECIFIED;
  if ( pItemToSocket != 0 )
  {
    LOBYTE(v5) = 1;
    if ( pGemItem != 0 )
    {
      vptr_IEconItemInterface = pGemItem->_vptr_IEconItemInterface;
      gemInfo.m_nGemType = ESocketType::SocketType_None;
      gemInfo.m_nRequiredHeroID = -1;
      gemInfo.m_nRequiredItemSlot = -1;
      gemInfo.m_bIsUnremovableGem = 0;
      gemInfo.m_bIsUntradable = 0;
      if ( vptr_IEconItemInterface[27](pGemItem, &gemInfo) != 0 )
      {
        LOBYTE(v5) = 4;
        if ( !gemInfo.m_bIsUnremovableGem )
        {
          LOBYTE(v5) = 5;
          if ( (*this->_vptr_CEconItemUtils)(this, gemInfo.m_nGemType, socketType) != 0 )
          {
            if ( gemInfo.m_nRequiredHeroID < 0
              || (v10 = (*(pItemToSocket->_vptr_IEconItemInterface + 12))(pItemToSocket),
                  (v11 = (*(*v10 + 72LL))(v10)) == gemInfo.m_nRequiredHeroID)
              || (v5 = GemInSocketResult_t::GEM_IS_INVALID_TYPE_FOR_HERO, v11 == 86) )
            {
              v5 = GemInSocketResult_t::GEM_CAN_BE_PLACED_IN_SOCKET;
              if ( gemInfo.m_nRequiredItemSlot >= 0 )
              {
                v5 = GemInSocketResult_t::GEM_IS_INVALID_TYPE_FOR_LOADOUT_SLOT;
                v12 = (*(pItemToSocket->_vptr_IEconItemInterface + 12))(pItemToSocket);
                v13 = (*(*v12 + 64LL))(v12);
                if ( v13 == gemInfo.m_nRequiredItemSlot )
                  return GemInSocketResult_t::GEM_CAN_BE_PLACED_IN_SOCKET;
              }
            }
          }
        }
      }
    }
  }
  return v5;
}


// CDOTAItemUtils::CanGemBePlacedInSocket  (line 94, @0x0000000002e314a0, libserver.so)
GemInSocketResult_t __fastcall CDOTAItemUtils::CanGemBePlacedInSocket(
        CDOTAItemUtils *const this,
        IEconItemInterface *pItemToSocket,
        const IItemSocket *pSocket,
        IEconItemInterface *pGemItem)
{
  char v8; // dl
  GemInSocketResult_t result; // eax
  GemInSocketResult_t (__fastcall *v10)(CDOTAItemUtils *const, IEconItemInterface *, _QWORD, IEconItemInterface *); // r15
  unsigned int v11; // eax

  if ( pItemToSocket == 0 || pSocket == 0 )
    return GemInSocketResult_t::INVALID_SOCKET_SPECIFIED;
  v8 = (*(pSocket->_vptr_IItemSocket + 27))(pSocket);
  result = GemInSocketResult_t::SOCKET_CONTAINS_UNREMOVABLE_GEM;
  if ( v8 == 0 )
  {
    v10 = *(this->_vptr_CEconItemUtils + 1);
    v11 = (*(pSocket->_vptr_IItemSocket + 12))(pSocket);
    return v10(this, pItemToSocket, v11, pGemItem);
  }
  return result;
}


