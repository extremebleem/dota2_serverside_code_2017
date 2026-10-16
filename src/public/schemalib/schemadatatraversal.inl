
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSchemaFieldVisitor::VisitRelevantClass  (line 64, @0x000000000326ac90, libserver.so)
void __fastcall CSchemaFieldVisitor::VisitRelevantClass(
        CSchemaFieldVisitor *const this,
        void *pClassInstance,
        ClassIntrospectionHandle_t pClass)
{
  ;
}


// CSchemaFieldVisitorInfoMap<CExtrefTraversal>::~CSchemaFieldVisitorInfoMap  (line 112, @0x000000000326b9e0, libserver.so)
// calls: CSchemaVisitorInfoMapBase::~CSchemaVisitorInfoMapBase
void __fastcall CSchemaFieldVisitorInfoMap<CExtrefTraversal>::~CSchemaFieldVisitorInfoMap(
        CSchemaFieldVisitorInfoMap<CExtrefTraversal> *const this)
{
  this->_vptr_CSchemaVisitorInfoMapBase = off_47D12F0;  // vptr: CSchemaFieldVisitorInfoMap<CExtrefTraversal>
  CSchemaVisitorInfoMapBase::~CSchemaVisitorInfoMapBase(this);
}


// CSchemaFieldVisitorInfoMap<CExtrefTraversal>::IsRelevantFieldType  (line 115, @0x000000000326ba00, libserver.so)
// calls: CExtrefTraversal::IsRelevantFieldType
bool __fastcall CSchemaFieldVisitorInfoMap<CExtrefTraversal>::IsRelevantFieldType(
        CSchemaFieldVisitorInfoMap<CExtrefTraversal> *const this,
        const CSchemaType *pType)
{
  return CExtrefTraversal::IsRelevantFieldType(pType);
}


// CSchemaFieldVisitorInfoMap<CExtrefTraversal>::IsRelevantClassType  (line 119, @0x000000000326b9d0, libserver.so)
bool __fastcall CSchemaFieldVisitorInfoMap<CExtrefTraversal>::IsRelevantClassType(
        CSchemaFieldVisitorInfoMap<CExtrefTraversal> *const this,
        ClassIntrospectionHandle_t pClass)
{
  return 0;
}


