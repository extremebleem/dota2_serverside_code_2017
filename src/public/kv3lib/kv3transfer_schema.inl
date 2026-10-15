
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// KV3TransferSchema_AllocateClassInstance<CBaseConstraint>  (line 17, @0x0000000003178fa0, libserver.so)  // inlines: As<CSchemaType_DeclaredClass>, Get, InternalAs, SchemaTypeOf<CBaseConstraint>, SchemaTypeScope
// calls: GetNameOfModule, CKV3TransferBlockAllocator::AllocBlockBytes
// callers: CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >::LoadValue<CUtlVector<CBaseConstraint*> >
// strings: "CBaseConstraint"
// globals: SchemaTypeOf<CBaseConstraint>(void)::s_pTypeOf
CBaseConstraint *__fastcall KV3TransferSchema_AllocateClassInstance<CBaseConstraint>(
        CKV3TransferBlockAllocator *pBlockAllocator,
        const char *pDerivedClassName)
{
  __int64 (__fastcall *v4)(ISchemaSystem *, const char *); // r14
  const char *NameOfModule; // rax
  __int64 v6; // rax
  _QWORD *v7; // rbx
  __int64 v9; // rbx
  uint8 *v10; // r12
  __int64 (__fastcall *v11)(ISchemaSystem *, const char *); // r13
  const char *v12; // rax
  __int64 v13; // rax

  if ( pDerivedClassName != 0 )
  {
    v4 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v6 = v4(g_pSchemaSystem, NameOfModule);
    v7 = (*(*v6 + 88LL))(v6, pDerivedClassName);
  }
  else
  {
    v7 = SchemaTypeOf<CBaseConstraint>(void)::s_pTypeOf;
    if ( SchemaTypeOf<CBaseConstraint>(void)::s_pTypeOf == 0 )
    {
      v11 = *(*g_pSchemaSystem + 104LL);
      v12 = GetNameOfModule();
      v13 = v11(g_pSchemaSystem, v12);
      v7 = (*(*v13 + 88LL))(v13, "CBaseConstraint");
      SchemaTypeOf<CBaseConstraint>(void)::s_pTypeOf = v7;
    }
  }
  if ( (**v7)(v7) != 5 )
    return 0;
  if ( (*(*v7 + 48LL))(v7) != 4 )
    return 0;
  if ( v7 == 0 )
    return 0;
  v9 = v7[6];
  if ( v9 == 0 || (*(**(v9 + 176) + 120LL))(*(v9 + 176)) != 0 )
    return 0;
  if ( pBlockAllocator == 0 )
    return (*(**(v9 + 176) + 56LL))(*(v9 + 176));
  v10 = CKV3TransferBlockAllocator::AllocBlockBytes(pBlockAllocator, *(v9 + 24), *(v9 + 28));
  (*(**(v9 + 176) + 88LL))(*(v9 + 176), v10);
  return v10;
}


// KV3Transfer_EnumeratorNameFromValue<RenderPrimitiveType_t>  (line 74, @0x0000000003179ab0, libserver.so)  // inlines: As<CSchemaType_DeclaredEnum>, Get, GetEnum, GetName, InternalAs, LookupEnum, SchemaTypeOf<RenderPrimitiveType_t>, SchemaTypeScope
// calls: CSchemaEnumInfo::FindMemberByValue, GetNameOfModule, CUtlString::Get
// callers: CMaterialDrawDescriptor::KV3TransferSave_CMaterialDrawDescriptor
// strings: "RenderPrimitiveType_t"
// globals: SchemaTypeOf<RenderPrimitiveType_t>(void)::s_pTypeOf
std::enable_if<true,char const*>::type __fastcall KV3Transfer_EnumeratorNameFromValue<RenderPrimitiveType_t>(
        RenderPrimitiveType_t nValue)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  const CSchemaEnumInfo *v4; // rdi
  const CSchemaEnumeratorInfo *MemberByValue; // rax
  __int64 (__fastcall *v7)(ISchemaSystem *, const char *); // r12
  const char *NameOfModule; // rax
  __int64 v9; // rax
  void (__fastcall *v10)(_QWORD, __int64, const char *); // rbx
  const char *v11; // rax

  v2 = SchemaTypeOf<RenderPrimitiveType_t>(void)::s_pTypeOf;
  if ( SchemaTypeOf<RenderPrimitiveType_t>(void)::s_pTypeOf == 0 )
  {
    v7 = *(*g_pSchemaSystem + 104LL);
    NameOfModule = GetNameOfModule();
    v9 = v7(g_pSchemaSystem, NameOfModule);
    v2 = (*(*v9 + 96LL))(v9, "RenderPrimitiveType_t");
    SchemaTypeOf<RenderPrimitiveType_t>(void)::s_pTypeOf = v2;
  }
  v3 = 0;
  if ( (**v2)(v2) == 6 && (*(*v2 + 48LL))(v2) == 4 )
    v3 = v2;
  v4 = *(v3 + 48);
  if ( v4 == 0 )
  {
    v10 = *(**(v3 + 40) + 288LL);
    v11 = CUtlString::Get((v3 + 8));
    v10(*(v3 + 40), v3 + 48, v11);
    v4 = *(v3 + 48);
  }
  MemberByValue = CSchemaEnumInfo::FindMemberByValue(v4, nValue);
  if ( MemberByValue != 0 )
    return MemberByValue->m_Name.m_pImplChars;
  else
    return 0;
}


