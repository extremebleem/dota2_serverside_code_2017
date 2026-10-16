
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IWatcherCallback::~IWatcherCallback  (line 19, @0x0000000002302fa0, libserver.so)
void __fastcall IWatcherCallback::~IWatcherCallback(IWatcherCallback *const this)
{
  this->_vptr_IWatcherCallback = off_4074030;  // vptr: IWatcherCallback
}


// IWatcherCallback::~IWatcherCallback  (line 19, @0x0000000002305680, libserver.so)  // inlines: ~IWatcherCallback
// calls: operator delete
void __fastcall IWatcherCallback::~IWatcherCallback(IWatcherCallback *const this)
{
  this->_vptr_IWatcherCallback = off_4074030;  // vptr: IWatcherCallback
  operator delete(this);
}


// IPositionWatcher::~IPositionWatcher  (line 22, @0x00000000023a8bf0, libserver.so)  // inlines: ~IWatcherCallback
void __fastcall IPositionWatcher::~IPositionWatcher(IPositionWatcher *const this)
{
  this->_vptr_IWatcherCallback = off_4074030;  // vptr: IWatcherCallback
}


// IPositionWatcher::~IPositionWatcher  (line 22, @0x00000000023aa3c0, libserver.so)  // inlines: ~IPositionWatcher, ~IWatcherCallback
// calls: operator delete
void __fastcall IPositionWatcher::~IPositionWatcher(IPositionWatcher *const this)
{
  this->_vptr_IWatcherCallback = off_4074030;  // vptr: IWatcherCallback
  operator delete(this);
}


// IVPhysicsWatcher::~IVPhysicsWatcher  (line 38, @0x00000000023047a0, libserver.so)  // inlines: ~IWatcherCallback
void __fastcall IVPhysicsWatcher::~IVPhysicsWatcher(IVPhysicsWatcher *const this)
{
  this->_vptr_IWatcherCallback = off_4074030;  // vptr: IWatcherCallback
}


// IVPhysicsWatcher::~IVPhysicsWatcher  (line 38, @0x00000000023056c0, libserver.so)  // inlines: ~IVPhysicsWatcher, ~IWatcherCallback
// calls: operator delete
void __fastcall IVPhysicsWatcher::~IVPhysicsWatcher(IVPhysicsWatcher *const this)
{
  this->_vptr_IWatcherCallback = off_4074030;  // vptr: IWatcherCallback
  operator delete(this);
}


// IVPhysicsWatcher::NotifyMotionState  (line 42, @0x0000000002302fb0, libserver.so)
void __fastcall IVPhysicsWatcher::NotifyMotionState(
        IVPhysicsWatcher *const this,
        CBaseEntity *pEntity,
        bool bMotionEnabled)
{
  ;
}


