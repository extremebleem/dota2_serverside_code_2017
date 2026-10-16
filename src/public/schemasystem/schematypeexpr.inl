
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// SchemaTypeOf<char*>  (line 18, @0x0000000001ef2860, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: InitDataDescSchema
// globals: SchemaTypeOf<char *>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<char *>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64); // r12
  __int64 v5; // rax

  result = SchemaTypeOf<char *>(void)::s_pTypeOf;
  if ( SchemaTypeOf<char *>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    v4 = *(*v3 + 48LL);
    v5 = (*(*v3 + 40LL))(v3, 2);
    result = v4(v3, v5);
    SchemaTypeOf<char *>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<Vector>  (line 18, @0x0000000001f89930, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CRenderGameSystem::BuildEntityRenderAttrGatherTable, CBaseEntity::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CBaseModelEntity::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CGameSceneNode::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CSkeletonInstance::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CShadowControl::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// globals: SchemaTypeOf<Vector>(void)::s_pTypeOf, CSchemaManipulator<Vector>::StaticAccessor(void)::m, CAtomicManipulator<Vector>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<Vector>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<Vector>(void)::s_pTypeOf;
  if ( SchemaTypeOf<Vector>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 56LL))(
               v3,
               "Vector",
               2010,
               CAtomicManipulator<Vector>::Get(void)::val,
               CSchemaManipulator<Vector>::StaticAccessor(void)::m);
    SchemaTypeOf<Vector>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<Vector4D>  (line 18, @0x0000000001f899a0, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CRenderGameSystem::BuildEntityRenderAttrGatherTable, CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// strings: "Vector4D"
// globals: SchemaTypeOf<Vector4D>(void)::s_pTypeOf, CSchemaManipulator<Vector4D>::StaticAccessor(void)::m, CAtomicManipulator<Vector4D>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<Vector4D>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<Vector4D>(void)::s_pTypeOf;
  if ( SchemaTypeOf<Vector4D>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 56LL))(
               v3,
               "Vector4D",
               2002,
               CAtomicManipulator<Vector4D>::Get(void)::val,
               &CSchemaManipulator<Vector4D>::StaticAccessor(void)::m);
    SchemaTypeOf<Vector4D>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<int>  (line 18, @0x0000000001fc52d0, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CAmbientGeneric::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CBaseEntity::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CBaseModelEntity::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CBaseProp::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CDynamicProp::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CEnvLaser::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CBreakable::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CRopeKeyframe::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CFuncTrackTrain::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CBlood::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CDynamicLight::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CEnvShooter::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE (17 total)
// globals: SchemaTypeOf<int>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<int>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<int>(void)::s_pTypeOf;
  if ( SchemaTypeOf<int>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 40LL))(v3, 7);
    SchemaTypeOf<int>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<CUtlStringToken>  (line 18, @0x0000000001fc5440, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CBaseAnimating::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// strings: "CUtlStringToken"
// globals: SchemaTypeOf<CUtlStringToken>(void)::s_pTypeOf, CSchemaManipulator<CUtlStringToken>::StaticAccessor(void)::m, CAtomicManipulator<CUtlStringToken>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<CUtlStringToken>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<CUtlStringToken>(void)::s_pTypeOf;
  if ( SchemaTypeOf<CUtlStringToken>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 56LL))(
               v3,
               "CUtlStringToken",
               3010,
               CAtomicManipulator<CUtlStringToken>::Get(void)::val,
               CSchemaManipulator<CUtlStringToken>::StaticAccessor(void)::m);
    SchemaTypeOf<CUtlStringToken>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<QAngle>  (line 18, @0x0000000001fc54b0, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CBaseEntity::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CVGuiScreen::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CShadowControl::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// strings: "QAngle"
// globals: SchemaTypeOf<QAngle>(void)::s_pTypeOf, CSchemaManipulator<QAngle>::StaticAccessor(void)::m, CAtomicManipulator<QAngle>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<QAngle>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<QAngle>(void)::s_pTypeOf;
  if ( SchemaTypeOf<QAngle>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 56LL))(
               v3,
               "QAngle",
               2005,
               CAtomicManipulator<QAngle>::Get(void)::val,
               CSchemaManipulator<QAngle>::StaticAccessor(void)::m);
    SchemaTypeOf<QAngle>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<CStrongHandle<InfoForResourceTypeCModel> >  (line 18, @0x0000000001fc5520, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CBaseEntity::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE
// strings: "InfoForResourceTypeCModel", "CStrongHandle"
// globals: SchemaTypeOf<CStrongHandle<InfoForResourceTypeCModel>>(void)::s_pTypeOf, CSchemaManipulator<CStrongHandle<InfoForResourceTypeCModel>>::StaticAccessor(void)::m, CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel>>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<CStrongHandle<InfoForResourceTypeCModel>>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, const char *, __int64, __int64 (__fastcall ***)(), __int64 (__fastcall ***)(), __int64); // r12
  __int64 v5; // rax

  result = SchemaTypeOf<CStrongHandle<InfoForResourceTypeCModel>>(void)::s_pTypeOf;
  if ( SchemaTypeOf<CStrongHandle<InfoForResourceTypeCModel>>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    v4 = *(*v3 + 64LL);
    v5 = (*(*v3 + 88LL))(v3, "InfoForResourceTypeCModel");
    result = v4(
               v3,
               "CStrongHandle",
               4000,
               &CAtomicManipulator<CStrongHandle<InfoForResourceTypeCModel>>::Get(void)::val,
               CSchemaManipulator<CStrongHandle<InfoForResourceTypeCModel>>::StaticAccessor(void)::m,
               v5);
    SchemaTypeOf<CStrongHandle<InfoForResourceTypeCModel>>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<CUtlString>  (line 18, @0x0000000001fc55a0, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CBaseEntity::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CEnvLaser::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CNetworkedSequenceOperation::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CRopeKeyframe::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CVGuiScreen::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CEnvShooter::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CLogicNavigation::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CLogicScript::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CChangeLevel::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// strings: "CUtlString"
// globals: SchemaTypeOf<CUtlString>(void)::s_pTypeOf, CSchemaManipulator<CUtlString>::StaticAccessor(void)::m, CAtomicManipulator<CUtlString>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<CUtlString>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<CUtlString>(void)::s_pTypeOf;
  if ( SchemaTypeOf<CUtlString>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 56LL))(
               v3,
               "CUtlString",
               3003,
               CAtomicManipulator<CUtlString>::Get(void)::val,
               CSchemaManipulator<CUtlString>::StaticAccessor(void)::m);
    SchemaTypeOf<CUtlString>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<float>  (line 18, @0x0000000001fc5610, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CBaseEntity::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CFishPool::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CEnvLaser::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CFuncRotating::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CLight::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CItemGeneric::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CGameSceneNode::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CSkeletonInstance::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CDynamicLight::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CPointAngleSensor::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CBasePlatTrain::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE
// globals: SchemaTypeOf<float>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<float>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<float>(void)::s_pTypeOf;
  if ( SchemaTypeOf<float>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 40LL))(v3, 11);
    SchemaTypeOf<float>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<Color>  (line 18, @0x0000000001fc5c00, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CBaseModelEntity::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CDynamicLight::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CGameText::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CShadowControl::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// globals: SchemaTypeOf<Color>(void)::s_pTypeOf, CSchemaManipulator<Color>::StaticAccessor(void)::m, CAtomicManipulator<Color>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<Color>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<Color>(void)::s_pTypeOf;
  if ( SchemaTypeOf<Color>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 56LL))(
               v3,
               "Color",
               2000,
               CAtomicManipulator<Color>::Get(void)::val,
               CSchemaManipulator<Color>::StaticAccessor(void)::m);
    SchemaTypeOf<Color>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<CEntityHandle>  (line 18, @0x0000000001ff08d0, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CGameSceneNode::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// strings: "CEntityHandle"
// globals: SchemaTypeOf<CEntityHandle>(void)::s_pTypeOf, CSchemaManipulator<CEntityHandle>::StaticAccessor(void)::m, CAtomicManipulator<CEntityHandle>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<CEntityHandle>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<CEntityHandle>(void)::s_pTypeOf;
  if ( SchemaTypeOf<CEntityHandle>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 56LL))(
               v3,
               "CEntityHandle",
               5000,
               CAtomicManipulator<CEntityHandle>::Get(void)::val,
               CSchemaManipulator<CEntityHandle>::StaticAccessor(void)::m);
    SchemaTypeOf<CEntityHandle>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<bool>  (line 18, @0x0000000001ff0940, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CGameSceneNode::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CBaseTrigger::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CDOTA_SimpleObstruction::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE
// globals: SchemaTypeOf<bool>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<bool>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<bool>(void)::s_pTypeOf;
  if ( SchemaTypeOf<bool>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 40LL))(v3, 13);
    SchemaTypeOf<bool>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<CHandle<CBaseEntity> >  (line 18, @0x0000000002977ad0, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CDOTA_BaseNPC::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CDOTA_BaseNPC_Effigy_Statue::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE, CDOTA_BaseNPC_Effigy_BattleCup::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE
// strings: "CBaseEntity", "CHandle"
// globals: SchemaTypeOf<CHandle<CBaseEntity>>(void)::s_pTypeOf, CSchemaManipulator<CHandle<CBaseEntity>>::StaticAccessor(void)::m, CAtomicManipulator<CHandle<CBaseEntity>>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<CHandle<CBaseEntity>>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, const char *, __int64, __int64 (__fastcall ***)(), __int64 (__fastcall ***)(), __int64); // r12
  __int64 v5; // rax

  result = SchemaTypeOf<CHandle<CBaseEntity>>(void)::s_pTypeOf;
  if ( SchemaTypeOf<CHandle<CBaseEntity>>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    v4 = *(*v3 + 64LL);
    v5 = (*(*v3 + 88LL))(v3, "CBaseEntity");
    result = v4(
               v3,
               "CHandle",
               5003,
               CAtomicManipulator<CHandle<CBaseEntity>>::Get(void)::val,
               &CSchemaManipulator<CHandle<CBaseEntity>>::StaticAccessor(void)::m,
               v5);
    SchemaTypeOf<CHandle<CBaseEntity>>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<signed char>  (line 18, @0x0000000003097af0, libserver.so)  // inlines: Get, SchemaTypeScope
// also named: char> (identical code folded)
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey
// globals: SchemaTypeOf<signed char>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<signed char>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<signed char>(void)::s_pTypeOf;
  if ( SchemaTypeOf<signed char>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 40LL))(v3, 3);
    SchemaTypeOf<signed char>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<unsigned char>  (line 18, @0x0000000003097b40, libserver.so)  // inlines: Get, SchemaTypeScope
// also named: char> (identical code folded)
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey
// globals: SchemaTypeOf<uchar>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<unsigned char>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<unsigned char>(void)::s_pTypeOf;
  if ( SchemaTypeOf<unsigned char>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 40LL))(v3, 4);
    SchemaTypeOf<unsigned char>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<short int>  (line 18, @0x0000000003097b90, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey
// globals: SchemaTypeOf<short>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<short>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<short>(void)::s_pTypeOf;
  if ( SchemaTypeOf<short>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 40LL))(v3, 5);
    SchemaTypeOf<short>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<short unsigned int>  (line 18, @0x0000000003097be0, libserver.so)  // inlines: Get, SchemaTypeScope
// also named: short> (identical code folded)
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey
// globals: SchemaTypeOf<ushort>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<unsigned short>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<unsigned short>(void)::s_pTypeOf;
  if ( SchemaTypeOf<unsigned short>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 40LL))(v3, 6);
    SchemaTypeOf<unsigned short>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<unsigned int>  (line 18, @0x0000000003097c30, libserver.so)  // inlines: Get, SchemaTypeScope
// also named: int> (identical code folded)
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey
// globals: SchemaTypeOf<uint>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<unsigned int>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<unsigned int>(void)::s_pTypeOf;
  if ( SchemaTypeOf<unsigned int>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 40LL))(v3, 8);
    SchemaTypeOf<unsigned int>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<long long int>  (line 18, @0x0000000003097c80, libserver.so)  // inlines: Get, SchemaTypeScope
// also named: long> (identical code folded)
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey
// globals: SchemaTypeOf<long long>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<long long>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<long long>(void)::s_pTypeOf;
  if ( SchemaTypeOf<long long>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 40LL))(v3, 9);
    SchemaTypeOf<long long>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<long long unsigned int>  (line 18, @0x0000000003097cd0, libserver.so)  // inlines: Get, SchemaTypeScope
// also named: long> (identical code folded)
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey
// globals: SchemaTypeOf<ulong long>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<unsigned long long>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<unsigned long long>(void)::s_pTypeOf;
  if ( SchemaTypeOf<unsigned long long>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 40LL))(v3, 10);
    SchemaTypeOf<unsigned long long>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<Quaternion>  (line 18, @0x0000000003097d20, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// globals: SchemaTypeOf<Quaternion>(void)::s_pTypeOf, CSchemaManipulator<Quaternion>::StaticAccessor(void)::m, CAtomicManipulator<Quaternion>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<Quaternion>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<Quaternion>(void)::s_pTypeOf;
  if ( SchemaTypeOf<Quaternion>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 56LL))(
               v3,
               "Quaternion",
               2006,
               CAtomicManipulator<Quaternion>::Get(void)::val,
               &CSchemaManipulator<Quaternion>::StaticAccessor(void)::m);
    SchemaTypeOf<Quaternion>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<char>  (line 18, @0x0000000003097d90, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// globals: SchemaTypeOf<char>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<char>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<char>(void)::s_pTypeOf;
  if ( SchemaTypeOf<char>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 40LL))(v3, 2);
    SchemaTypeOf<char>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<CUtlSymbolLarge>  (line 18, @0x0000000003097de0, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// strings: "CUtlSymbolLarge"
// globals: SchemaTypeOf<CUtlSymbolLarge>(void)::s_pTypeOf, CSchemaManipulator<CUtlSymbolLarge>::StaticAccessor(void)::m, CAtomicManipulator<CUtlSymbolLarge>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<CUtlSymbolLarge>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<CUtlSymbolLarge>(void)::s_pTypeOf;
  if ( SchemaTypeOf<CUtlSymbolLarge>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 56LL))(
               v3,
               "CUtlSymbolLarge",
               3007,
               CAtomicManipulator<CUtlSymbolLarge>::Get(void)::val,
               &CSchemaManipulator<CUtlSymbolLarge>::StaticAccessor(void)::m);
    SchemaTypeOf<CUtlSymbolLarge>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<RadianEuler>  (line 18, @0x0000000003097e50, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// strings: "RadianEuler"
// globals: SchemaTypeOf<RadianEuler>(void)::s_pTypeOf, CSchemaManipulator<RadianEuler>::StaticAccessor(void)::m, CAtomicManipulator<RadianEuler>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<RadianEuler>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<RadianEuler>(void)::s_pTypeOf;
  if ( SchemaTypeOf<RadianEuler>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 56LL))(
               v3,
               "RadianEuler",
               2015,
               CAtomicManipulator<RadianEuler>::Get(void)::val,
               &CSchemaManipulator<RadianEuler>::StaticAccessor(void)::m);
    SchemaTypeOf<RadianEuler>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<DegreeEuler>  (line 18, @0x0000000003097ec0, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// strings: "DegreeEuler"
// globals: SchemaTypeOf<DegreeEuler>(void)::s_pTypeOf, CSchemaManipulator<DegreeEuler>::StaticAccessor(void)::m, CAtomicManipulator<DegreeEuler>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<DegreeEuler>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<DegreeEuler>(void)::s_pTypeOf;
  if ( SchemaTypeOf<DegreeEuler>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 56LL))(
               v3,
               "DegreeEuler",
               2022,
               CAtomicManipulator<DegreeEuler>::Get(void)::val,
               CSchemaManipulator<DegreeEuler>::StaticAccessor(void)::m);
    SchemaTypeOf<DegreeEuler>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<Vector2D>  (line 18, @0x0000000003097f30, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// strings: "Vector2D"
// globals: SchemaTypeOf<Vector2D>(void)::s_pTypeOf, CSchemaManipulator<Vector2D>::StaticAccessor(void)::m, CAtomicManipulator<Vector2D>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<Vector2D>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<Vector2D>(void)::s_pTypeOf;
  if ( SchemaTypeOf<Vector2D>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 56LL))(
               v3,
               "Vector2D",
               2001,
               CAtomicManipulator<Vector2D>::Get(void)::val,
               CSchemaManipulator<Vector2D>::StaticAccessor(void)::m);
    SchemaTypeOf<Vector2D>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<CVariantBase<CVariantDefaultAllocator> >  (line 18, @0x0000000003097fa0, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CEntityClass::UnserializeKey, ConvertTextDataToNewKeyValues
// strings: "CVariantDefaultAllocator", "CVariantBase"
// globals: SchemaTypeOf<CVariantBase<CVariantDefaultAllocator>>(void)::s_pTypeOf, CSchemaManipulator<CVariantBase<CVariantDefaultAllocator>>::StaticAccessor(void)::m, CAtomicManipulator<CVariantBase<CVariantDefaultAllocator>>::Get(void)::val
CSchemaType *__cdecl SchemaTypeOf<CVariantBase<CVariantDefaultAllocator>>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, const char *, __int64, __int64 (__fastcall ***)(), __int64 (__fastcall ***)(), __int64); // r12
  __int64 v5; // rax

  result = SchemaTypeOf<CVariantBase<CVariantDefaultAllocator>>(void)::s_pTypeOf;
  if ( SchemaTypeOf<CVariantBase<CVariantDefaultAllocator>>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    v4 = *(*v3 + 64LL);
    v5 = (*(*v3 + 88LL))(v3, "CVariantDefaultAllocator");
    result = v4(
               v3,
               "CVariantBase",
               5005,
               CAtomicManipulator<CVariantBase<CVariantDefaultAllocator>>::Get(void)::val,
               CSchemaManipulator<CVariantBase<CVariantDefaultAllocator>>::StaticAccessor(void)::m,
               v5);
    SchemaTypeOf<CVariantBase<CVariantDefaultAllocator>>(void)::s_pTypeOf = result;
  }
  return result;
}


// SchemaTypeOf<CEntityIOOutput>  (line 18, @0x00000000030c15b0, libserver.so)  // inlines: Get, SchemaTypeScope
// calls: GetNameOfModule
// callers: CEntitySystem::AddComponentFieldUnserializer
// strings: "CEntityIOOutput"
// globals: SchemaTypeOf<CEntityIOOutput>(void)::s_pTypeOf
CSchemaType *__cdecl SchemaTypeOf<CEntityIOOutput>()
{
  CSchemaType *result; // rax
  __int64 (__fastcall *v1)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v3; // rax

  result = SchemaTypeOf<CEntityIOOutput>(void)::s_pTypeOf;
  if ( SchemaTypeOf<CEntityIOOutput>(void)::s_pTypeOf == 0 )
  {
    v1 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v3 = v1(g_pSchemaSystem, NameOfModule);
    result = (*(*v3 + 88LL))(v3, "CEntityIOOutput");
    SchemaTypeOf<CEntityIOOutput>(void)::s_pTypeOf = result;
  }
  return result;
}


// CSchemaTypeOf<KeyValues*>::Get  (line 89, @0x0000000002573140, libserver.so)  // inlines: Get
// callers: CDOTAGamerules::RegisterClassSchema_N__MISSING_DECL_MEANS_MACRO__UNRESOLVED_EXT_MEANS_SCHEMA_GENERATED_CODE
// globals: CSchemaManipulator<KeyValues>::StaticAccessor(void)::m, CAtomicManipulator<KeyValues>::Get(void)::val
CSchemaType *__fastcall CSchemaTypeOf<KeyValues *>::Get(ISchemaSystemTypeScope *pTypeScope)
{
  CSchemaType *(__fastcall *v2)(ISchemaSystemTypeScope *, __int64); // r12
  __int64 v3; // rax

  v2 = *(*pTypeScope + 48LL);
  v3 = (*(*pTypeScope + 56LL))(
         pTypeScope,
         "KeyValues",
         3008,
         CAtomicManipulator<KeyValues>::Get(void)::val,
         &CSchemaManipulator<KeyValues>::StaticAccessor(void)::m);
  return v2(pTypeScope, v3);
}


