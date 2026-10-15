
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_fnphysicsjoint.cpp  (line 0, @0x0000000001a6d060, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_fnphysicsjoint_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// CFnPhysicsJoint<IFnPhysicsWeldJoint>::CFnPhysicsJoint  (line 8, @0x00000000031afbe0, libserver.so)
// callers: CPhysicsGameSystem::UpdateHierarchyJoint, CPhysicsGameSystem::UpdateHierarchyConstraint
void __fastcall CFnPhysicsJoint<IFnPhysicsWeldJoint>::CFnPhysicsJoint(
        CFnPhysicsJoint<IFnPhysicsWeldJoint> *const this,
        IPhysicsJoint *pJoint)
{
  void (__fastcall ***v3)(_QWORD, IPhysicsJoint *); // rax

  v3 = (*(g_pVPhysics2->_vptr_IAppSystem + 66))(g_pVPhysics2, this, 16);
  (**v3)(v3, pJoint);
}


// CFnPhysicsJoint<IFnPhysicsPrismaticJoint>::CFnPhysicsJoint  (line 13, @0x00000000031afc20, libserver.so)
void __fastcall CFnPhysicsJoint<IFnPhysicsPrismaticJoint>::CFnPhysicsJoint(
        CFnPhysicsJoint<IFnPhysicsPrismaticJoint> *const this,
        IPhysicsJoint *pJoint)
{
  void (__fastcall ***v3)(_QWORD, IPhysicsJoint *); // rax

  v3 = (*(g_pVPhysics2->_vptr_IAppSystem + 67))(g_pVPhysics2, this, 16);
  (**v3)(v3, pJoint);
}


// CFnPhysicsJoint<IFnPhysicsRevoluteJoint>::CFnPhysicsJoint  (line 19, @0x00000000031afc60, libserver.so)
// callers: CPhysHinge::InputSetMaxLimit, CPhysHinge::InputSetMinLimit, CPhysHinge::NotifyMotionState
void __fastcall CFnPhysicsJoint<IFnPhysicsRevoluteJoint>::CFnPhysicsJoint(
        CFnPhysicsJoint<IFnPhysicsRevoluteJoint> *const this,
        IPhysicsJoint *pJoint)
{
  void (__fastcall ***v3)(_QWORD, IPhysicsJoint *); // rax

  v3 = (*(g_pVPhysics2->_vptr_IAppSystem + 68))(g_pVPhysics2, this, 16);
  (**v3)(v3, pJoint);
}


// CFnPhysicsJoint<IFnPhysicsConicalJoint>::CFnPhysicsJoint  (line 26, @0x00000000031afca0, libserver.so)
void __fastcall CFnPhysicsJoint<IFnPhysicsConicalJoint>::CFnPhysicsJoint(
        CFnPhysicsJoint<IFnPhysicsConicalJoint> *const this,
        IPhysicsJoint *pJoint)
{
  void (__fastcall ***v3)(_QWORD, IPhysicsJoint *); // rax

  v3 = (*(g_pVPhysics2->_vptr_IAppSystem + 69))(g_pVPhysics2, this, 16);
  (**v3)(v3, pJoint);
}


// CFnPhysicsJoint<IFnPhysicsSpringJoint>::CFnPhysicsJoint  (line 33, @0x00000000031afce0, libserver.so)
void __fastcall CFnPhysicsJoint<IFnPhysicsSpringJoint>::CFnPhysicsJoint(
        CFnPhysicsJoint<IFnPhysicsSpringJoint> *const this,
        IPhysicsJoint *pJoint)
{
  void (__fastcall ***v3)(_QWORD, IPhysicsJoint *); // rax

  v3 = (*(g_pVPhysics2->_vptr_IAppSystem + 70))(g_pVPhysics2, this, 16);
  (**v3)(v3, pJoint);
}


// CFnPhysicsJoint<IFnPhysicsBevelGearJoint>::CFnPhysicsJoint  (line 40, @0x00000000031afd20, libserver.so)
void __fastcall CFnPhysicsJoint<IFnPhysicsBevelGearJoint>::CFnPhysicsJoint(
        CFnPhysicsJoint<IFnPhysicsBevelGearJoint> *const this,
        IPhysicsJoint *pJoint)
{
  void (__fastcall ***v3)(_QWORD, IPhysicsJoint *); // rax

  v3 = (*(g_pVPhysics2->_vptr_IAppSystem + 71))(g_pVPhysics2, this, 16);
  (**v3)(v3, pJoint);
}


