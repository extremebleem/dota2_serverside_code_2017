
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// MResourceBlockType::CValueSearchTester_ClassIntrospectionHandle_t::Test  (line 46, @0x0000000003267fc0, libserver.so)  // inlines: GetPtr, MetaTagEqualityTest<char const*>, SchemaMetaGetPtr2, _V_strcmp
// calls: CSchemaClassInfo::MetaGetPtr, strcmp
// strings: "MResourceBlockType"
bool __fastcall MResourceBlockType::CValueSearchTester_ClassIntrospectionHandle_t::Test(
        MResourceBlockType::CValueSearchTester_ClassIntrospectionHandle_t *const this,
        ClassIntrospectionHandle_t pObj)
{
  const char **Ptr; // rax

  Ptr = CSchemaClassInfo::MetaGetPtr(pObj, "MResourceBlockType", this->nBaseClassTraversal, this->classToSkip);
  return Ptr != 0 && strcmp(*Ptr, this->m_Value) == 0;
}


