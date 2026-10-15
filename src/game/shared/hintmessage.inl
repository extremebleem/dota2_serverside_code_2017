
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CHintMessage::Schema_DynamicBinding  (line 27, @0x000000000227c160, libserver.so)
// calls: CHintMessage::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CHintMessage::Schema_DynamicBinding(const CHintMessage *const this)
{
  CHintMessage::Schema_VerifyBindingIsRegistered();
  return CHintMessage::s_pSchemaBinding;
}


// CHintMessageQueue::Schema_DynamicBinding  (line 51, @0x000000000227c180, libserver.so)
// calls: CHintMessageQueue::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CHintMessageQueue::Schema_DynamicBinding(const CHintMessageQueue *const this)
{
  CHintMessageQueue::Schema_VerifyBindingIsRegistered();
  return CHintMessageQueue::s_pSchemaBinding;
}


