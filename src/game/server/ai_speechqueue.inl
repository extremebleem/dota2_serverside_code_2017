
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CResponseQueue::Schema_DynamicBinding  (line 39, @0x000000000217a2e0, libserver.so)
// globals: CResponseQueue::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CResponseQueue::Schema_DynamicBinding(const CResponseQueue *const this)
{
  return CResponseQueue::s_pSchemaBinding;
}


// CResponseQueue::CDeferredResponse::Schema_DynamicBinding  (line 75, @0x000000000217a2f0, libserver.so)
// globals: CResponseQueue::CDeferredResponse::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CResponseQueue::CDeferredResponse::Schema_DynamicBinding(
        const CResponseQueue::CDeferredResponse *const this)
{
  return CResponseQueue::CDeferredResponse::s_pSchemaBinding;
}


// CResponseQueueManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 172, @0x000000000217a300, libserver.so)
void __fastcall CResponseQueueManager::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CResponseQueueManager *const this)
{
  ;
}


// CResponseQueueManager::DoesGameSystemReallocate  (line 172, @0x000000000217a310, libserver.so)
// globals: CResponseQueueManager::sm_Factory
bool __fastcall CResponseQueueManager::DoesGameSystemReallocate(const CResponseQueueManager *const this)
{
  return (*(CResponseQueueManager::sm_Factory->_vptr_IGameSystemFactory + 8))(CResponseQueueManager::sm_Factory);
}


// CResponseQueueManager::SetGameSystemGlobalPtrs  (line 172, @0x000000000217a330, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CResponseQueueManager::sm_Factory
void __fastcall CResponseQueueManager::SetGameSystemGlobalPtrs(CResponseQueueManager *const this, void *pValue)
{
  if ( CResponseQueueManager::sm_Factory != 0 )
    (*(CResponseQueueManager::sm_Factory->_vptr_IGameSystemFactory + 7))(CResponseQueueManager::sm_Factory, pValue);
}


// CAI_ExpresserWithFollowup::Schema_DynamicBinding  (line 246, @0x000000000217a360, libserver.so)
// globals: CAI_ExpresserWithFollowup::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAI_ExpresserWithFollowup::Schema_DynamicBinding(
        const CAI_ExpresserWithFollowup *const this)
{
  return CAI_ExpresserWithFollowup::s_pSchemaBinding;
}


// CMultiplayer_Expresser::Schema_DynamicBinding  (line 272, @0x000000000217a370, libserver.so)
// globals: CMultiplayer_Expresser::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMultiplayer_Expresser::Schema_DynamicBinding(
        const CMultiplayer_Expresser *const this)
{
  return CMultiplayer_Expresser::s_pSchemaBinding;
}


