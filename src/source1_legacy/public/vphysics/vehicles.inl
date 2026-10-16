
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IPhysicsVehicleController::~IPhysicsVehicleController  (line 81, @0x0000000002244ee0, libserver.so)
void __fastcall IPhysicsVehicleController::~IPhysicsVehicleController(IPhysicsVehicleController *const this)
{
  this->_vptr_IPhysicsVehicleController = off_403FFF0;  // vptr: IPhysicsVehicleController
}


// IPhysicsVehicleController::~IPhysicsVehicleController  (line 81, @0x0000000002246690, libserver.so)  // inlines: ~IPhysicsVehicleController
// calls: operator delete
void __fastcall IPhysicsVehicleController::~IPhysicsVehicleController(IPhysicsVehicleController *const this)
{
  this->_vptr_IPhysicsVehicleController = off_403FFF0;  // vptr: IPhysicsVehicleController
  operator delete(this);
}


