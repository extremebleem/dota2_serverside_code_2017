
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// Source1LegacyGameEventList_t::~Source1LegacyGameEventList_t  (line 96, @0x00000000022479f0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList
void __fastcall Source1LegacyGameEventList_t::~Source1LegacyGameEventList_t(Source1LegacyGameEventList_t *const this)
{
  *this = &off_404C7F0;
  CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList(this);
}


// Source1LegacyGameEventList_t::~Source1LegacyGameEventList_t  (line 96, @0x0000000002247a10, libserver.so)  // inlines: ~CNetMessagePB, ~Source1LegacyGameEventList_t
// calls: CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList, operator delete
void __fastcall Source1LegacyGameEventList_t::~Source1LegacyGameEventList_t(Source1LegacyGameEventList_t *const this)
{
  *this = &off_404C7F0;
  CMsgSource1LegacyGameEventList::~CMsgSource1LegacyGameEventList(this);
  operator delete(this);
}


// Source1LegacyGameEvent_t::~Source1LegacyGameEvent_t  (line 98, @0x00000000020f60a0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent
void __fastcall Source1LegacyGameEvent_t::~Source1LegacyGameEvent_t(Source1LegacyGameEvent_t *const this)
{
  *this = &off_3FF7010;
  CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent(this);
}


// Source1LegacyGameEvent_t::~Source1LegacyGameEvent_t  (line 98, @0x00000000020f60c0, libserver.so)  // inlines: ~CNetMessagePB, ~Source1LegacyGameEvent_t
// calls: CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent, operator delete
void __fastcall Source1LegacyGameEvent_t::~Source1LegacyGameEvent_t(Source1LegacyGameEvent_t *const this)
{
  *this = &off_3FF7010;
  CMsgSource1LegacyGameEvent::~CMsgSource1LegacyGameEvent(this);
  operator delete(this);
}


