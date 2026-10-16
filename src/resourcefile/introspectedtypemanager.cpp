
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_introspectedtypemanager.cpp  (line 0, @0x0000000001a6ee00, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// calls: LoggingSystem_RegisterLoggingChannel
// strings: "TypeManager"
// globals: UNSPECIFIED_LOGGING_COLOR, LOG_TYPEMANAGER
void __cdecl GLOBAL__sub_I_introspectedtypemanager_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  LOG_TYPEMANAGER = LoggingSystem_RegisterLoggingChannel("TypeManager", 0, 0, 2, *&UNSPECIFIED_LOGGING_COLOR);
}


// CBaseIntrospectedTypeManager::CBaseIntrospectedTypeManager  (line 23, @0x0000000003268db0, libserver.so)
void __fastcall CBaseIntrospectedTypeManager::CBaseIntrospectedTypeManager(
        CBaseIntrospectedTypeManager *const this,
        ResourceType_t nResourceType)
{
  this->_vptr_IResourceTypeManager = &off_47D11B0;
  this->m_nResourceType = nResourceType;
  this->m_pDiskDataClassBinding = 0;
  this->m_bRequiresExtRefFixup = 0;
  this->m_bRequiredSpecificResourceVersion = 0;
  this->m_nRequiredResourceVersion = 0;
  this->m_pResourceSystemUtils = 0;
}


// CBaseIntrospectedTypeManager::SetDiskDataBinding  (line 35, @0x0000000003268df0, libserver.so)  // inlines: Count, GetPtr, GetValue, IsPresent, MetaGetPtr, MetaIsPresent, NumBasesToTraverse, SchemaMetaGetPtr2, SchemaMetaIsPresent2, _V_strcmp
// calls: DoesClassRequireExtrefFixup, CSchemaClassInfo::MetaIsPresent, CSchemaClassInfo::MetaGetPtr
// strings: "MResourceVersion"
void __fastcall CBaseIntrospectedTypeManager::SetDiskDataBinding(
        CBaseIntrospectedTypeManager *const this,
        const CSchemaClassBindingBase *pDiskDataClassBinding)
{
  CSchemaClassInfo *m_pClassInfo_N; // rbx
  unsigned int v3; // edx
  const char **m_pImplElements; // rax
  __int64 v5; // r9
  CSchemaClassInfo *v6; // r8
  unsigned int v7; // edx
  char *v8; // rax
  __int64 v9; // r10
  uint16 *Ptr; // rax
  uint16 v11; // ax
  CSchemaClassInfo *v12; // rdi
  unsigned int v13; // edx
  const char **v14; // rax
  __int64 v15; // r9
  unsigned int v16; // eax
  char *v17; // rdx
  const CSchemaClassInfo *const *v18; // r12
  __int64 v19; // r13
  unsigned int v20; // edx
  __int64 v21; // r10
  unsigned int v22; // eax
  char *v23; // rdx
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // edx
  __int64 v32; // rax
  __int64 v33; // r10
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r10
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // r9
  unsigned int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r10
  unsigned int v43; // edx
  __int64 v44; // rax
  __int64 v45; // r9
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r10
  unsigned int v49; // edx
  __int64 v50; // rax
  __int64 v51; // r9
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // r10
  unsigned int v55; // edx
  __int64 v56; // rax
  __int64 v57; // r9
  unsigned int v58; // eax
  __int64 v59; // rdx
  __int64 *v60; // r13
  __int64 v61; // r10
  unsigned int v62; // edx
  __int64 v63; // rax
  __int64 v64; // r9
  unsigned int v65; // eax
  __int64 v66; // rdx
  __int64 *v67; // rbx
  __int64 v68; // r10
  unsigned int v69; // edx
  __int64 v70; // rax
  __int64 v71; // r9
  unsigned int v72; // eax
  __int64 v73; // rdx
  const CSchemaClassInfo *const *v74; // r12
  __int64 v75; // r14
  unsigned int v76; // edx
  __int64 v77; // r9
  unsigned int v78; // edx
  __int64 v79; // r9
  unsigned int v80; // edx
  __int64 v81; // r9
  unsigned int v82; // edx
  __int64 v83; // r9
  unsigned int v84; // edx
  __int64 v85; // r9
  unsigned int v86; // edx
  __int64 v87; // r9
  unsigned int v88; // edx
  __int64 v89; // r10
  unsigned int v90; // ecx
  __int64 v91; // r9
  __int64 v92; // [rsp+0h] [rbp-B0h]
  __int64 v93; // [rsp+8h] [rbp-A8h]
  __int64 v94; // [rsp+10h] [rbp-A0h]
  __int64 v95; // [rsp+18h] [rbp-98h]
  __int64 v96; // [rsp+20h] [rbp-90h]
  __int64 v98; // [rsp+30h] [rbp-80h]
  __int64 *v100; // [rsp+40h] [rbp-70h]
  __int64 *v101; // [rsp+48h] [rbp-68h]
  __int64 *v102; // [rsp+50h] [rbp-60h]
  __int64 *v103; // [rsp+58h] [rbp-58h]
  __int64 v104; // [rsp+60h] [rbp-50h]
  __int64 *v105; // [rsp+68h] [rbp-48h]
  __int64 v106; // [rsp+70h] [rbp-40h]
  __int64 *v107; // [rsp+78h] [rbp-38h]

  this->m_pDiskDataClassBinding = pDiskDataClassBinding;
  m_pClassInfo_N = pDiskDataClassBinding->m_pClassInfo_N;
  if ( m_pClassInfo_N == 0 )
  {
    v12 = 0;
    goto LABEL_14;
  }
  v3 = abs32(m_pClassInfo_N->m_Metadata.m_StaticEntries.m_Data.m_nImplLength);
  if ( v3 != 0 )
  {
    m_pImplElements = m_pClassInfo_N->m_Metadata.m_StaticEntries.m_Data.m_pImplElements;
    v5 = &m_pImplElements[4 * v3];
    while ( strcmp(*m_pImplElements, "MResourceVersion") != 0 )
    {
      m_pImplElements += 4;
      if ( m_pImplElements == v5 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    v13 = abs32(m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength);
    if ( v13 != 0 )
    {
      v14 = m_pClassInfo_N->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
      v15 = &v14[4 * v13];
      while ( strcmp(*v14, "MResourceVersion") != 0 )
      {
        v14 += 4;
        if ( v14 == v15 )
          goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      v16 = abs32(m_pClassInfo_N->m_BaseClasses.m_Data.m_nImplLength);
      if ( v16 == 0 )
      {
LABEL_25:
        v12 = m_pClassInfo_N;
        goto LABEL_14;
      }
      v17 = m_pClassInfo_N->m_BaseClasses.m_Data.m_pImplElements;
      v18 = (v17 + 8);
      v19 = &v17[16 * v16 + 8];
      while ( !CSchemaClassInfo::MetaIsPresent(
                 *v18,
                 "MResourceVersion",
                 SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
                 0) )
      {
        v18 += 2;
        if ( v18 == v19 )
          goto LABEL_25;
      }
    }
  }
  this->m_bRequiredSpecificResourceVersion = 1;
  v6 = pDiskDataClassBinding->m_pClassInfo_N;
  if ( v6 == 0 )
  {
LABEL_108:
    v11 = 0;
    goto LABEL_13;
  }
  v7 = abs32(v6->m_Metadata.m_StaticEntries.m_Data.m_nImplLength);
  if ( v7 != 0 )
  {
    v8 = v6->m_Metadata.m_StaticEntries.m_Data.m_pImplElements;
    v9 = &v8[32 * v7];
    while ( strcmp(*v8, "MResourceVersion") != 0 )
    {
      v8 += 32;
      if ( v8 == v9 )
        goto LABEL_27;
    }
  }
  else
  {
LABEL_27:
    v20 = abs32(v6->m_Metadata.m_DynamicEntries.m_Data.m_nImplLength);
    if ( v20 == 0 )
      goto LABEL_32;
    v8 = v6->m_Metadata.m_DynamicEntries.m_Data.m_pImplElements;
    v21 = &v8[32 * v20];
    while ( strcmp(*v8, "MResourceVersion") != 0 )
    {
      v8 += 32;
      if ( v8 == v21 )
        goto LABEL_32;
    }
  }
  Ptr = *(v8 + 3);
  if ( Ptr != 0 )
    goto LABEL_12;
LABEL_32:
  v22 = abs32(v6->m_BaseClasses.m_Data.m_nImplLength);
  if ( v22 == 0 )
    goto LABEL_108;
  v23 = v6->m_BaseClasses.m_Data.m_pImplElements;
  v101 = (v23 + 8);
  v96 = &v23[16 * v22 + 8];
  while ( 1 )
  {
    v24 = *v101;
    if ( *v101 != 0 )
      break;
LABEL_107:
    v101 += 2;
    if ( v101 == v96 )
      goto LABEL_108;
  }
  v25 = abs32(*(v24 + 136));
  if ( v25 != 0 )
  {
    v26 = *(v24 + 128);
    v27 = v26 + 32LL * (v25 - 1) + 32;
    while ( strcmp(*v26, "MResourceVersion") != 0 )
    {
      v26 += 32;
      if ( v26 == v27 )
        goto LABEL_144;
    }
  }
  else
  {
LABEL_144:
    v90 = abs32(*(v24 + 152));
    if ( v90 == 0 )
      goto LABEL_40;
    v26 = *(v24 + 144);
    v91 = v26 + 32LL * (v90 - 1) + 32;
    while ( strcmp(*v26, "MResourceVersion") != 0 )
    {
      v26 += 32;
      if ( v26 == v91 )
        goto LABEL_40;
    }
  }
  Ptr = *(v26 + 24);
  if ( Ptr != 0 )
    goto LABEL_12;
LABEL_40:
  v28 = abs32(*(v24 + 72));
  if ( v28 == 0 )
    goto LABEL_107;
  v29 = *(v24 + 64);
  v102 = (v29 + 8);
  v95 = v29 + 16LL * (v28 - 1) + 24;
  while ( 1 )
  {
    v30 = *v102;
    if ( *v102 != 0 )
      break;
LABEL_106:
    v102 += 2;
    if ( v102 == v95 )
      goto LABEL_107;
  }
  v31 = abs32(*(v30 + 136));
  if ( v31 != 0 )
  {
    v32 = *(v30 + 128);
    v33 = v32 + 32LL * (v31 - 1) + 32;
    while ( strcmp(*v32, "MResourceVersion") != 0 )
    {
      v32 += 32;
      if ( v32 == v33 )
        goto LABEL_139;
    }
LABEL_47:
    Ptr = *(v32 + 24);
    if ( Ptr != 0 )
      goto LABEL_12;
  }
  else
  {
LABEL_139:
    v88 = abs32(*(v30 + 152));
    if ( v88 != 0 )
    {
      v32 = *(v30 + 144);
      v89 = v32 + 32LL * (v88 - 1) + 32;
      while ( strcmp(*v32, "MResourceVersion") != 0 )
      {
        v32 += 32;
        if ( v32 == v89 )
          goto LABEL_48;
      }
      goto LABEL_47;
    }
  }
LABEL_48:
  v34 = abs32(*(v30 + 72));
  if ( v34 == 0 )
    goto LABEL_106;
  v35 = *(v30 + 64);
  v100 = (v35 + 8);
  v94 = v35 + 16LL * (v34 - 1) + 24;
  while ( 1 )
  {
    v36 = *v100;
    if ( *v100 != 0 )
      break;
LABEL_105:
    v100 += 2;
    if ( v100 == v94 )
      goto LABEL_106;
  }
  v37 = abs32(*(v36 + 136));
  if ( v37 != 0 )
  {
    v38 = *(v36 + 128);
    v39 = v38 + 32LL * (v37 - 1) + 32;
    while ( strcmp(*v38, "MResourceVersion") != 0 )
    {
      v38 += 32;
      if ( v38 == v39 )
        goto LABEL_134;
    }
LABEL_55:
    Ptr = *(v38 + 24);
    if ( Ptr != 0 )
      goto LABEL_12;
  }
  else
  {
LABEL_134:
    v86 = abs32(*(v36 + 152));
    if ( v86 != 0 )
    {
      v38 = *(v36 + 144);
      v87 = v38 + 32LL * (v86 - 1) + 32;
      while ( strcmp(*v38, "MResourceVersion") != 0 )
      {
        v38 += 32;
        if ( v38 == v87 )
          goto LABEL_56;
      }
      goto LABEL_55;
    }
  }
LABEL_56:
  v40 = abs32(*(v36 + 72));
  if ( v40 == 0 )
    goto LABEL_105;
  v41 = *(v36 + 64);
  v103 = (v41 + 8);
  v93 = v41 + 16LL * (v40 - 1) + 24;
  while ( 1 )
  {
    v42 = *v103;
    if ( *v103 != 0 )
      break;
LABEL_104:
    v103 += 2;
    if ( v103 == v93 )
      goto LABEL_105;
  }
  v43 = abs32(*(v42 + 136));
  if ( v43 != 0 )
  {
    v44 = *(v42 + 128);
    v45 = v44 + 32LL * (v43 - 1) + 32;
    while ( strcmp(*v44, "MResourceVersion") != 0 )
    {
      v44 += 32;
      if ( v44 == v45 )
        goto LABEL_129;
    }
LABEL_63:
    Ptr = *(v44 + 24);
    if ( Ptr != 0 )
      goto LABEL_12;
  }
  else
  {
LABEL_129:
    v84 = abs32(*(v42 + 152));
    if ( v84 != 0 )
    {
      v44 = *(v42 + 144);
      v85 = v44 + 32LL * (v84 - 1) + 32;
      while ( strcmp(*v44, "MResourceVersion") != 0 )
      {
        v44 += 32;
        if ( v44 == v85 )
          goto LABEL_64;
      }
      goto LABEL_63;
    }
  }
LABEL_64:
  v46 = abs32(*(v42 + 72));
  if ( v46 == 0 )
    goto LABEL_104;
  v47 = *(v42 + 64);
  v105 = (v47 + 8);
  v92 = v47 + 16LL * (v46 - 1) + 24;
  while ( 1 )
  {
    v48 = *v105;
    if ( *v105 != 0 )
      break;
LABEL_103:
    v105 += 2;
    if ( v105 == v92 )
      goto LABEL_104;
  }
  v49 = abs32(*(v48 + 136));
  if ( v49 != 0 )
  {
    v50 = *(v48 + 128);
    v51 = v50 + 32LL * (v49 - 1) + 32;
    while ( strcmp(*v50, "MResourceVersion") != 0 )
    {
      v50 += 32;
      if ( v50 == v51 )
        goto LABEL_124;
    }
LABEL_71:
    Ptr = *(v50 + 24);
    if ( Ptr != 0 )
      goto LABEL_12;
  }
  else
  {
LABEL_124:
    v82 = abs32(*(v48 + 152));
    if ( v82 != 0 )
    {
      v50 = *(v48 + 144);
      v83 = v50 + 32LL * (v82 - 1) + 32;
      while ( strcmp(*v50, "MResourceVersion") != 0 )
      {
        v50 += 32;
        if ( v50 == v83 )
          goto LABEL_72;
      }
      goto LABEL_71;
    }
  }
LABEL_72:
  v52 = abs32(*(v48 + 72));
  if ( v52 == 0 )
    goto LABEL_103;
  v53 = *(v48 + 64);
  v107 = (v53 + 8);
  v98 = v53 + 16LL * (v52 - 1) + 24;
  while ( 1 )
  {
    v54 = *v107;
    if ( *v107 != 0 )
      break;
LABEL_102:
    v107 += 2;
    if ( v107 == v98 )
      goto LABEL_103;
  }
  v55 = abs32(*(v54 + 136));
  if ( v55 != 0 )
  {
    v56 = *(v54 + 128);
    v57 = v56 + 32LL * (v55 - 1) + 32;
    while ( strcmp(*v56, "MResourceVersion") != 0 )
    {
      v56 += 32;
      if ( v56 == v57 )
        goto LABEL_119;
    }
LABEL_79:
    Ptr = *(v56 + 24);
    if ( Ptr != 0 )
      goto LABEL_12;
  }
  else
  {
LABEL_119:
    v80 = abs32(*(v54 + 152));
    if ( v80 != 0 )
    {
      v56 = *(v54 + 144);
      v81 = v56 + 32LL * (v80 - 1) + 32;
      while ( strcmp(*v56, "MResourceVersion") != 0 )
      {
        v56 += 32;
        if ( v56 == v81 )
          goto LABEL_80;
      }
      goto LABEL_79;
    }
  }
LABEL_80:
  v58 = abs32(*(v54 + 72));
  if ( v58 == 0 )
    goto LABEL_102;
  v59 = *(v54 + 64);
  v60 = (v59 + 8);
  v104 = v59 + 16LL * (v58 - 1) + 24;
  while ( 1 )
  {
    v61 = *v60;
    if ( *v60 != 0 )
      break;
LABEL_101:
    v60 += 2;
    if ( v60 == v104 )
      goto LABEL_102;
  }
  v62 = abs32(*(v61 + 136));
  if ( v62 != 0 )
  {
    v63 = *(v61 + 128);
    v64 = v63 + 32LL * (v62 - 1) + 32;
    while ( strcmp(*v63, "MResourceVersion") != 0 )
    {
      v63 += 32;
      if ( v63 == v64 )
        goto LABEL_114;
    }
LABEL_87:
    Ptr = *(v63 + 24);
    if ( Ptr != 0 )
      goto LABEL_12;
  }
  else
  {
LABEL_114:
    v78 = abs32(*(v61 + 152));
    if ( v78 != 0 )
    {
      v63 = *(v61 + 144);
      v79 = v63 + 32LL * (v78 - 1) + 32;
      while ( strcmp(*v63, "MResourceVersion") != 0 )
      {
        v63 += 32;
        if ( v63 == v79 )
          goto LABEL_88;
      }
      goto LABEL_87;
    }
  }
LABEL_88:
  v65 = abs32(*(v61 + 72));
  if ( v65 == 0 )
    goto LABEL_101;
  v66 = *(v61 + 64);
  v67 = (v66 + 8);
  v106 = v66 + 16LL * (v65 - 1) + 24;
  while ( 1 )
  {
    v68 = *v67;
    if ( *v67 != 0 )
      break;
LABEL_100:
    v67 += 2;
    if ( v67 == v106 )
      goto LABEL_101;
  }
  v69 = abs32(*(v68 + 136));
  if ( v69 != 0 )
  {
    v70 = *(v68 + 128);
    v71 = v70 + 32LL * (v69 - 1) + 32;
    while ( strcmp(*v70, "MResourceVersion") != 0 )
    {
      v70 += 32;
      if ( v70 == v71 )
        goto LABEL_109;
    }
    goto LABEL_95;
  }
LABEL_109:
  v76 = abs32(*(v68 + 152));
  if ( v76 != 0 )
  {
    v70 = *(v68 + 144);
    v77 = v70 + 32LL * (v76 - 1) + 32;
    while ( strcmp(*v70, "MResourceVersion") != 0 )
    {
      v70 += 32;
      if ( v70 == v77 )
        goto LABEL_96;
    }
LABEL_95:
    Ptr = *(v70 + 24);
    if ( Ptr != 0 )
      goto LABEL_12;
  }
LABEL_96:
  v72 = abs32(*(v68 + 72));
  if ( v72 == 0 )
    goto LABEL_100;
  v73 = *(v68 + 64);
  v74 = (v73 + 8);
  v75 = v73 + 16LL * (v72 - 1) + 24;
  while ( 1 )
  {
    Ptr = CSchemaClassInfo::MetaGetPtr(
            *v74,
            "MResourceVersion",
            SchemaBaseClassTraversal_t::SCHEMA_BASE_TRAVERSAL_FULL,
            0);
    if ( Ptr != 0 )
      break;
    v74 += 2;
    if ( v74 == v75 )
      goto LABEL_100;
  }
LABEL_12:
  v11 = *Ptr;
LABEL_13:
  this->m_nRequiredResourceVersion = v11;
  v12 = pDiskDataClassBinding->m_pClassInfo_N;
LABEL_14:
  this->m_bRequiresExtRefFixup = DoesClassRequireExtrefFixup(v12);
}


// CBaseIntrospectedTypeManager::Init  (line 51, @0x0000000003268d20, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// strings: "introspectedtypemanager.cpp", "Init", "Failed to call CBaseIntrospectedTypeManager::SetDiskDataBinding"
bool __fastcall CBaseIntrospectedTypeManager::Init(
        CBaseIntrospectedTypeManager *const this,
        IResourceSystemUtils *pUtils)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  bool v4; // zf
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  LeafCodeInfo_t v12; // [rsp-38h] [rbp-38h] BYREF
  __int64 v13; // [rsp-10h] [rbp-10h]
  __int64 v14; // [rsp-8h] [rbp-8h]

  v4 = this->m_pDiskDataClassBinding == 0;
  this->m_pResourceSystemUtils = pUtils;
  if ( v4 )
  {
    v14 = v3;
    v13 = v2;
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v8, v9, v6, v7) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_7:
      v12.m_szFile = "introspectedtypemanager.cpp";
      v12.m_szFunction = "Init";
      v12.m_nLine = 57;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v12,
        "Failed to call CBaseIntrospectedTypeManager::SetDiskDataBinding",
        v10,
        v11);
    }
  }
  return 1;
}


// CBaseIntrospectedTypeManager::Shutdown  (line 66, @0x0000000003268c90, libserver.so)
void __fastcall CBaseIntrospectedTypeManager::Shutdown(CBaseIntrospectedTypeManager *const this)
{
  ;
}


// CBaseIntrospectedTypeManager::Allocate  (line 73, @0x0000000003268ca0, libserver.so)
void *__fastcall CBaseIntrospectedTypeManager::Allocate(
        CBaseIntrospectedTypeManager *const this,
        const void *pDataFromDisk,
        IResourceAllocatorUtils *pUtils)
{
  return pUtils->AssumeControl(pDataFromDisk);
}


// CBaseIntrospectedTypeManager::Deallocate  (line 81, @0x0000000003268ce0, libserver.so)
void __fastcall CBaseIntrospectedTypeManager::Deallocate(
        CBaseIntrospectedTypeManager *const this,
        void *pData,
        IResourceDeallocatorUtils *pUtils)
{
  if ( pData != 0 && (*(pUtils->_vptr_IResourceDeallocatorUtils + 1))(pUtils) != 0 )
    pUtils->ReleaseControl(pData);
}


// CBaseIntrospectedTypeManager::Reallocate  (line 95, @0x0000000003268cb0, libserver.so)
void *__fastcall CBaseIntrospectedTypeManager::Reallocate(
        CBaseIntrospectedTypeManager *const this,
        const void *pNewData,
        IResourceAllocatorUtils *pAllocUtils,
        void *pOldData)
{
  return (*(this->_vptr_IResourceTypeManager + 15))(this, pNewData, pAllocUtils, pOldData);
}


// CBaseIntrospectedTypeManager::NotifyManifestResourceFinished  (line 103, @0x0000000003268cc0, libserver.so)
void __fastcall CBaseIntrospectedTypeManager::NotifyManifestResourceFinished(
        CBaseIntrospectedTypeManager *const this,
        ResourceHandle_t hResource,
        ResourceLoadType_t nLoadType)
{
  ;
}


// CBaseIntrospectedTypeManager::AllocateResource  (line 110, @0x000000000326a640, libserver.so)  // inlines: CIntrospectedResourceDataHandler, CRelativeTickCount, CRelativeTickTimer, CResourceAllocatorUtils, CResourceProfileEventSpanScope, CResourceSystemProfileScope, End, Init, LeafCodeInfo_t, PrepareAllocatorUtils, ResourceId_t, Sample, Start, ThreadInterlockedExchangeAdd64, ThreadInterlockedIncrement, operator++, operator+=, ~CResourceProfileEventSpanScope, ~CResourceSystemProfileScope
// calls: CIntrospectedResourceDataHandler::InitAndFixup, Plat_RelativeTicks, CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), CResourceProfileEventSpanScope::~CResourceProfileEventSpanScope, _Unwind_Resume, CResourceSystemProfileScope::~CResourceSystemProfileScope
// strings: "introspectedtypemanager.cpp", "AllocateResource", "Failed to call CBaseIntrospectedTypeManager::Init"
void __fastcall CBaseIntrospectedTypeManager::AllocateResource(
        CBaseIntrospectedTypeManager *const this,
        ResourceHandle_t hResource,
        ResourceId_t nId,
        const ResourceFileHeader_t *pHeader,
        IRD_RegisterResourceDataUtils *pUtils)
{
  __int64 v8; // rax
  __int64 v9; // rax
  bool m_bRequiredSpecificResourceVersion; // si
  bool m_bRequiresExtRefFixup; // di
  const CSchemaClassBindingBase *m_pDiskDataClassBinding; // r8
  ResourceType_t m_nResourceType; // r14
  void (__fastcall ***v14)(_QWORD, ResourceHandle_t, __int64, __int64); // rax
  __int64 (__fastcall *v15)(CBaseIntrospectedTypeManager *const, void *, CResourceAllocatorUtils *, void *); // r8
  uint16 m_nResourceVersion; // di
  size_t m_nNonStreamingSize; // rdx
  void *m_pData; // rcx
  __int64 v19; // rax
  void (__fastcall ***v20)(_QWORD, ResourceHandle_t, __int64, __int64); // rax
  __int64 (__fastcall *v21)(CBaseIntrospectedTypeManager *const, void *, CResourceAllocatorUtils *); // rcx
  uint16 v22; // di
  size_t v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  ResourceSystemStats_t *pRS_STATS_LocalPtrToStats; // [rsp+8h] [rbp-F8h]
  __int64 profileHelper_Allocate; // [rsp+30h] [rbp-D0h]
  volatile signed __int64 *profileHelper_Allocate_8; // [rsp+38h] [rbp-C8h]
  char profileHelper_Allocate_16; // [rsp+40h] [rbp-C0h]
  CIntrospectedResourceDataHandler dataHandler; // [rsp+50h] [rbp-B0h] BYREF

  if ( this->m_pResourceSystemUtils == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_18;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v26, v27, v24, v25) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_18:
      dataHandler.m_nResourceType = "introspectedtypemanager.cpp";
      *&dataHandler.m_bRequiresExtRefFixup = "AllocateResource";
      LODWORD(dataHandler.m_pDiskDataClassBinding) = 114;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &dataHandler,
        "Failed to call CBaseIntrospectedTypeManager::Init");
    }
  }
  v8 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
  v9 = (*(*v8 + 8LL))(v8);
  m_bRequiredSpecificResourceVersion = this->m_bRequiredSpecificResourceVersion;
  m_bRequiresExtRefFixup = this->m_bRequiresExtRefFixup;
  pRS_STATS_LocalPtrToStats = v9;
  m_pDiskDataClassBinding = this->m_pDiskDataClassBinding;
  dataHandler.m_AllocatorUtils._vptr_IResourceAllocatorUtils = &off_47D1130;
  m_nResourceType = this->m_nResourceType;
  LOWORD(v9) = this->m_nRequiredResourceVersion;
  dataHandler.m_bRequiredSpecificResourceVersion = m_bRequiredSpecificResourceVersion;
  dataHandler.m_bRequiresExtRefFixup = m_bRequiresExtRefFixup;
  dataHandler.m_pDiskDataClassBinding = m_pDiskDataClassBinding;
  memset(&dataHandler.m_ResourceId, 0, 24);
  memset(&dataHandler.m_AllocatorUtils.m_pData, 0, 22);
  memset(&dataHandler.m_AllocatorUtils.m_nStreamingDataOffset, 0, 18);
  dataHandler.m_nResourceType = m_nResourceType;
  memset(&dataHandler.m_pLoadedData, 0, 19);
  dataHandler.m_nRequiredResourceVersion = v9;
  if ( CIntrospectedResourceDataHandler::InitAndFixup(&dataHandler, hResource, nId, pHeader, pUtils) )
  {
    v14 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    (**v14)(v14, hResource, 10, 1);
    profileHelper_Allocate = 0;
    if ( m_nResourceType == 0 || m_nResourceType == 1717792886 )
    {
      profileHelper_Allocate_8 = &pRS_STATS_LocalPtrToStats->m_nCyclesSpent_Allocate;
      _InterlockedAdd(&pRS_STATS_LocalPtrToStats->m_nCount_Allocate, 1u);
      profileHelper_Allocate = Plat_RelativeTicks();
      profileHelper_Allocate_16 = 1;
    }
    else
    {
      profileHelper_Allocate_16 = 0;
    }
    if ( (*(*pUtils + 8LL))(pUtils) != 0 )
    {
      v15 = *(this->_vptr_IResourceTypeManager + 17);
      m_nResourceVersion = dataHandler.m_pHeader->m_nResourceVersion;
      m_nNonStreamingSize = dataHandler.m_pHeader->m_nNonStreamingSize;
      dataHandler.m_AllocatorUtils.m_hResource = dataHandler.m_hResource;
      dataHandler.m_AllocatorUtils.m_pData = dataHandler.m_pLoadedData;
      m_pData = hResource->m_pData;
      dataHandler.m_AllocatorUtils.m_nAlignment = 16;
      dataHandler.m_AllocatorUtils.m_nResourceVersion = m_nResourceVersion;
      dataHandler.m_AllocatorUtils.m_nStreamingDataOffset = m_nNonStreamingSize;
      dataHandler.m_AllocatorUtils.m_nSize = dataHandler.m_nLoadedDataSize;
      dataHandler.m_AllocatorUtils.m_bMustCopy = !dataHandler.m_bConversionCreatedSeparateAllocation;
      dataHandler.m_AllocatorUtils.m_bAssumedControl = 0;
      v19 = v15(this, dataHandler.m_pLoadedData, &dataHandler.m_AllocatorUtils, m_pData);
    }
    else
    {
      v21 = *(this->_vptr_IResourceTypeManager + 15);
      v22 = dataHandler.m_pHeader->m_nResourceVersion;
      v23 = dataHandler.m_pHeader->m_nNonStreamingSize;
      dataHandler.m_AllocatorUtils.m_hResource = dataHandler.m_hResource;
      dataHandler.m_AllocatorUtils.m_pData = dataHandler.m_pLoadedData;
      dataHandler.m_AllocatorUtils.m_nAlignment = 16;
      dataHandler.m_AllocatorUtils.m_nResourceVersion = v22;
      dataHandler.m_AllocatorUtils.m_nStreamingDataOffset = v23;
      dataHandler.m_AllocatorUtils.m_nSize = dataHandler.m_nLoadedDataSize;
      dataHandler.m_AllocatorUtils.m_bMustCopy = !dataHandler.m_bConversionCreatedSeparateAllocation;
      dataHandler.m_AllocatorUtils.m_bAssumedControl = 0;
      v19 = v21(this, dataHandler.m_pLoadedData, &dataHandler.m_AllocatorUtils);
    }
    (*(*pUtils + 16LL))(pUtils, v19);
    if ( profileHelper_Allocate_16 != 0 )
      _InterlockedAdd64(profileHelper_Allocate_8, Plat_RelativeTicks() - profileHelper_Allocate);
    v20 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    (**v20)(v20, hResource, 10, 2);
    CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler(&dataHandler);
  }
  else
  {
    (**pUtils)(pUtils);
    CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler(&dataHandler);
  }
}


// CBaseIntrospectedTypeManager::DeallocateResource  (line 148, @0x0000000003269a10, libserver.so)
// calls: CBaseIntrospectedTypeManager::DestroyResourceData
void __fastcall CBaseIntrospectedTypeManager::DeallocateResource(
        CBaseIntrospectedTypeManager *const this,
        void *pResourceData,
        IResourceDeallocatorUtils *pDeallocUtils)
{
  void *v5; // r13
  const ResourceBindingBase_t *v6; // rax

  (*(this->_vptr_IResourceTypeManager + 16))(this, pResourceData);
  v5 = (*(pDeallocUtils->_vptr_IResourceDeallocatorUtils + 4))(pDeallocUtils);
  if ( v5 != 0 )
  {
    v6 = (*(pDeallocUtils->_vptr_IResourceDeallocatorUtils + 2))(pDeallocUtils);
    CBaseIntrospectedTypeManager::DestroyResourceData(this, v5, v6);
  }
}


// CBaseIntrospectedTypeManager::DestroyResourceData  (line 162, @0x00000000032699b0, libserver.so)
// calls: CBaseIntrospectedTypeManager::CleanupResourceReferences
// callers: CBaseIntrospectedTypeManager::DeallocateResource
void __fastcall CBaseIntrospectedTypeManager::DestroyResourceData(
        CBaseIntrospectedTypeManager *const this,
        void *pResourceData,
        ResourceHandle_t hOriginatingResource)
{
  __int64 v5; // rax

  CBaseIntrospectedTypeManager::CleanupResourceReferences(
    this,
    pResourceData,
    hOriginatingResource,
    this->m_pDiskDataClassBinding);
  v5 = (*(*g_pSchemaSystem + 264LL))(g_pSchemaSystem);
  (*(*v5 + 32LL))(v5, pResourceData, this->m_pDiskDataClassBinding);
  (*(*g_pAsyncFileSystem + 200LL))(g_pAsyncFileSystem, pResourceData);
}


// CBaseIntrospectedTypeManager::CleanupResourceReferences  (line 172, @0x0000000003269930, libserver.so)  // inlines: ~CExtrefTraversal, ~CReferenceCleanupTraversal, ~CSchemaFieldVisitor, ~CSchemaVisitorBase, ~CUtlScalarHash
// calls: CReferenceCleanupTraversal::CReferenceCleanupTraversal, CSchemaVisitorBase::TraverseClass, operator delete [], _Unwind_Resume
// callers: CBaseIntrospectedTypeManager::DestroyResourceData
void __fastcall CBaseIntrospectedTypeManager::CleanupResourceReferences(
        CBaseIntrospectedTypeManager *const this,
        void *pResourceData,
        ResourceHandle_t hOriginatingResource,
        const CSchemaClassBindingBase *pBinding)
{
  CReferenceCleanupTraversal cleanupTraversal; // [rsp+0h] [rbp-60h] BYREF

  CReferenceCleanupTraversal::CReferenceCleanupTraversal(&cleanupTraversal, hOriginatingResource, this->m_nResourceType);
  CSchemaVisitorBase::TraverseClass(&cleanupTraversal, pResourceData, pBinding->m_pClassInfo_N);
  cleanupTraversal._vptr_CSchemaVisitorBase = &off_47D1170;
  if ( cleanupTraversal.m_VisitedClasses.m_pData != 0 )
    operator delete[](cleanupTraversal.m_VisitedClasses.m_pData);
}


// CBaseIntrospectedTypeManager::RequiresPostLoadFixup  (line 181, @0x0000000003268cd0, libserver.so)
bool __fastcall CBaseIntrospectedTypeManager::RequiresPostLoadFixup(CBaseIntrospectedTypeManager *const this)
{
  return 1;
}


// CIntrospectedResourceDataHandler::CIntrospectedResourceDataHandler  (line 189, @0x0000000003269a70, libserver.so)  // inlines: CResourceAllocatorUtils, ResourceId_t
// callers: GetMeshMaterialInfo
void __fastcall CIntrospectedResourceDataHandler::CIntrospectedResourceDataHandler(
        CIntrospectedResourceDataHandler *const this,
        ResourceType_t nResourceType,
        const CSchemaClassBindingBase *pDiskDataClassBinding,
        bool bRequiresExtRefFixup,
        bool bRequiredSpecificResourceVersion,
        uint16 nRequiredResourceVersion)
{
  this->m_ResourceId.m_Data = 0;
  this->m_AllocatorUtils._vptr_IResourceAllocatorUtils = &off_47D1130;
  this->m_AllocatorUtils.m_hResource = 0;
  this->m_AllocatorUtils.m_pData = 0;
  this->m_AllocatorUtils.m_nSize = 0;
  this->m_AllocatorUtils.m_nAlignment = 0;
  this->m_AllocatorUtils.m_bMustCopy = 0;
  this->m_AllocatorUtils.m_bAssumedControl = 0;
  this->m_AllocatorUtils.m_nStreamingDataOffset = 0;
  this->m_AllocatorUtils.m_nResourceVersion = 0;
  this->m_nResourceType = nResourceType;
  this->m_pDiskDataClassBinding = pDiskDataClassBinding;
  this->m_bRequiresExtRefFixup = bRequiresExtRefFixup;
  this->m_pLoadedData = 0;
  this->m_nLoadedDataSize = 0;
  this->m_bConversionCreatedSeparateAllocation = 0;
  this->m_hResource = 0;
  this->m_pHeader = 0;
  this->m_bRequiredSpecificResourceVersion = bRequiredSpecificResourceVersion;
  this->m_nRequiredResourceVersion = nRequiredResourceVersion;
  this->m_bExternalAssumedControlOfMemory = 0;
  this->m_bDidExtrefFixup = 0;
}


// CIntrospectedResourceDataHandler::InitNoFixup  (line 209, @0x0000000003269b00, libserver.so)  // inlines: CRelativeTickCount, CRelativeTickTimer, CResourceNameGetter, CResourceProfileEventSpanScope, CResourceSystemProfileScope, End, GetPtr, Init, ResolveOffset, ResourceGetName, ResourceGetName<512ul>, Resource_GetBlock<CResourceIntrospectionManifest>, Sample, Start, String, ThreadInterlockedExchangeAdd64, ThreadInterlockedIncrement, V_strncpy<int>, operator++, operator+=, ~CResourceProfileEventSpanScope, ~CResourceSystemProfileScope
// calls: _V_strncpy, LoggingSystem_IsChannelEnabled, Resource_GetBlock, Resource_GetBlockEntry, Plat_RelativeTicks, LoggingSystem_Log, LoggingSystem_Log(int,LoggingSeverity_t,Color,char const*,...), __stack_chk_fail, CResourceProfileEventSpanScope::~CResourceProfileEventSpanScope, _Unwind_Resume, CResourceSystemProfileScope::~CResourceSystemProfileScope
// callers: GetMeshMaterialInfo, CIntrospectedResourceDataHandler::InitAndFixup
// strings: "Error loading resource \"%s\" (Invalid resource version: %d != %d)\n", "WARNING: Missing data block for file: %s\n", "ERROR: Problem allocating permanent data for resource in file '%s'. See above for reason(, "WARNING: Missing introspection manifest for file: %s\n"
// globals: LOG_TYPEMANAGER
bool __fastcall CIntrospectedResourceDataHandler::InitNoFixup(
        CIntrospectedResourceDataHandler *const this,
        ResourceHandle_t hResource,
        ResourceId_t nId,
        const ResourceFileHeader_t *pHeader)
{
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // zf
  ResourceType_t m_nResourceType; // r15
  ResourceNameHandle_t v11; // rax
  const char *v12; // rsi
  bool result; // al
  const ResourceBlockEntry_t *BlockEntry; // rax
  __int64 m_nOffset; // rdx
  char *v16; // rdx
  IResourceSystem *v17; // rdi
  void (__fastcall ***v18)(_QWORD, ResourceHandle_t, __int64, __int64); // rax
  __int64 v19; // r13
  ResourceNameHandle_t m_Name; // rax
  const char *m_Id; // rsi
  int v22; // r13d
  void (__fastcall ***v23)(_QWORD, ResourceHandle_t, __int64, __int64); // rax
  ResourceNameHandle_t v24; // rax
  const char *v25; // rsi
  __int64 v26; // rdi
  ResourceNameHandle_t v27; // rax
  const char *v28; // rsi
  ResourceNameHandle_t v29; // rax
  const char *v30; // rsi
  ResourceSystemStats_t *pRS_STATS_LocalPtrToStats; // [rsp+0h] [rbp-280h]
  ResourceSystemStats_t *pRS_STATS_LocalPtrToStatsa; // [rsp+0h] [rbp-280h]
  const CResourceIntrospectionManifest *pIntrospectionManifest; // [rsp+8h] [rbp-278h]
  __int64 profileHelper_Autoconvert; // [rsp+20h] [rbp-260h]
  volatile signed __int64 *profileHelper_Autoconvert_8; // [rsp+28h] [rbp-258h]
  char profileHelper_Autoconvert_16; // [rsp+30h] [rbp-250h]
  CResourceNameGetter resourceName; // [rsp+40h] [rbp-240h] BYREF
  unsigned __int64 v39; // [rsp+248h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  v7 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
  v8 = (*(*v7 + 8LL))(v7);
  this->m_hResource = hResource;
  v9 = !this->m_bRequiredSpecificResourceVersion;
  pRS_STATS_LocalPtrToStats = v8;
  m_nResourceType = this->m_nResourceType;
  this->m_pHeader = pHeader;
  this->m_ResourceId = nId;
  if ( v9 || pHeader->m_nResourceVersion == this->m_nRequiredResourceVersion )
  {
    pIntrospectionManifest = Resource_GetBlock(pHeader, 0x4F52544Eu);
    if ( pIntrospectionManifest != 0 )
    {
      BlockEntry = Resource_GetBlockEntry(pHeader, 0x41544144u);
      if ( BlockEntry != 0 )
      {
        m_nOffset = BlockEntry->m_pBlockData.m_nOffset;
        if ( m_nOffset != 0 )
          v16 = &BlockEntry->m_pBlockData + m_nOffset;
        else
          v16 = 0;
        this->m_pLoadedData = v16;
        v17 = g_pResourceSystem;
        this->m_nLoadedDataSize = BlockEntry->m_nBlockSize;
        v18 = (*(*v17 + 528LL))(v17);
        (**v18)(v18, hResource, 8, 1);
        profileHelper_Autoconvert = 0;
        if ( m_nResourceType == 0 || m_nResourceType == 1717792886 )
        {
          profileHelper_Autoconvert_8 = &pRS_STATS_LocalPtrToStats->m_nCyclesSpent_Autoconvert;
          _InterlockedAdd(&pRS_STATS_LocalPtrToStats->m_nCount_Autoconvert, 1u);
          profileHelper_Autoconvert = Plat_RelativeTicks();
          profileHelper_Autoconvert_16 = 1;
        }
        else
        {
          profileHelper_Autoconvert_16 = 0;
        }
        v19 = (*(*g_pSchemaSystem + 264LL))(g_pSchemaSystem);
        pRS_STATS_LocalPtrToStatsa = *(*v19 + 24LL);
        if ( hResource != 0 && (m_Name = hResource->m_Name) != 0 )
        {
          m_Id = "";
          if ( m_Name->m_ResourceNameSymbol.u.m_Id != 0 )
            m_Id = m_Name->m_ResourceNameSymbol.u.m_Id;
          _V_strncpy(&resourceName, m_Id, 512);
        }
        else
        {
          _V_strncpy(&resourceName, "", 512);
        }
        v22 = (pRS_STATS_LocalPtrToStatsa)(
                v19,
                &this->m_pLoadedData,
                &this->m_nLoadedDataSize,
                this->m_pDiskDataClassBinding,
                pIntrospectionManifest,
                &resourceName);
        if ( profileHelper_Autoconvert_16 != 0 )
          _InterlockedAdd64(profileHelper_Autoconvert_8, Plat_RelativeTicks() - profileHelper_Autoconvert);
        v23 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
        (**v23)(v23, hResource, 8, 2);
        if ( v22 != 0 )
        {
          result = 1;
          this->m_bConversionCreatedSeparateAllocation = v22 == 2;
        }
        else
        {
          v26 = LOG_TYPEMANAGER;
          this->m_pLoadedData = 0;
          result = LoggingSystem_IsChannelEnabled(v26, 2);
          if ( result )
          {
            if ( hResource != 0 && (v27 = hResource->m_Name) != 0 )
            {
              v28 = "";
              if ( v27->m_ResourceNameSymbol.u.m_Id != 0 )
                v28 = v27->m_ResourceNameSymbol.u.m_Id;
              _V_strncpy(&resourceName, v28, 512);
            }
            else
            {
              _V_strncpy(&resourceName, "", 512);
            }
            LoggingSystem_Log(
              LOG_TYPEMANAGER,
              LoggingSeverity_t::LS_WARNING,
              -16776961,
              "ERROR: Problem allocating permanent data for resource in file '%s'. See above for reason(s)\n",
              resourceName.m_Buffer);
            return 0;
          }
        }
      }
      else
      {
        if ( hResource != 0 && (v24 = hResource->m_Name) != 0 )
        {
          v25 = "";
          if ( v24->m_ResourceNameSymbol.u.m_Id != 0 )
            v25 = v24->m_ResourceNameSymbol.u.m_Id;
          _V_strncpy(&resourceName, v25, 512);
        }
        else
        {
          _V_strncpy(&resourceName, "", 512);
        }
        if ( LoggingSystem_IsChannelEnabled(LOG_TYPEMANAGER, 2) == 0 )
          return 0;
        LoggingSystem_Log(LOG_TYPEMANAGER, 2, "WARNING: Missing data block for file: %s\n", resourceName.m_Buffer);
        return 0;
      }
    }
    else
    {
      if ( hResource != 0 && (v29 = hResource->m_Name) != 0 )
      {
        v30 = "";
        if ( v29->m_ResourceNameSymbol.u.m_Id != 0 )
          v30 = v29->m_ResourceNameSymbol.u.m_Id;
        _V_strncpy(&resourceName, v30, 512);
      }
      else
      {
        _V_strncpy(&resourceName, "", 512);
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_TYPEMANAGER, 2) == 0 )
        return 0;
      LoggingSystem_Log(
        LOG_TYPEMANAGER,
        2,
        "WARNING: Missing introspection manifest for file: %s\n",
        resourceName.m_Buffer);
      return 0;
    }
  }
  else
  {
    if ( hResource != 0 && (v11 = hResource->m_Name) != 0 )
    {
      v12 = "";
      if ( v11->m_ResourceNameSymbol.u.m_Id != 0 )
        v12 = v11->m_ResourceNameSymbol.u.m_Id;
      _V_strncpy(&resourceName, v12, 512);
    }
    else
    {
      _V_strncpy(&resourceName, "", 512);
    }
    if ( LoggingSystem_IsChannelEnabled(LOG_TYPEMANAGER, 2) == 0 )
      return 0;
    LoggingSystem_Log(
      LOG_TYPEMANAGER,
      2,
      "Error loading resource \"%s\" (Invalid resource version: %d != %d)\n",
      resourceName.m_Buffer,
      pHeader->m_nResourceVersion,
      this->m_nRequiredResourceVersion);
    return 0;
  }
  return result;
}


// CIntrospectedResourceDataHandler::FixupExternalReferences  (line 274, @0x000000000326a060, libserver.so)  // inlines: CRelativeTickCount, CRelativeTickTimer, CResourceNameGetter, CResourceProfileEventSpanScope, CResourceSystemProfileScope, End, Init, MarkInvalid, Purge, RemoveAll, ResourceGetName, ResourceGetName<512ul>, Sample, Start, String, ThreadInterlockedExchangeAdd64, ThreadInterlockedIncrement, V_strncpy<int>, operator++, operator+=, ~CExtrefTraversal, ~CResourceProfileEventSpanScope, ~CResourceRefTable, ~CResourceReferenceFixupTraversal, ~CResourceSystemProfileScope, ~CSchemaFieldVisitor, ~CSchemaVisitorBase, ~CUtlHashtable, ~CUtlMemory, ~CUtlScalarHash
// calls: CResourceReferenceFixupTraversal::CResourceReferenceFixupTraversal, CSchemaVisitorBase::TraverseClass, CResourceReferenceFixupTraversal::InvalidReferencesEncountered, _V_strncpy, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, operator delete [], Plat_RelativeTicks, __stack_chk_fail, CResourceProfileEventSpanScope::~CResourceProfileEventSpanScope, _Unwind_Resume, CResourceReferenceFixupTraversal::~CResourceReferenceFixupTraversal (13 total)
// callers: CIntrospectedResourceDataHandler::InitAndFixup
// strings: "WARNING: Problems encounted with external references in resource '%s'. See above for reas
// globals: LOG_TYPEMANAGER
bool __fastcall CIntrospectedResourceDataHandler::FixupExternalReferences(
        CIntrospectedResourceDataHandler *const this,
        IRD_RegisterResourceDataUtils *pRegisterUtils)
{
  __int64 v4; // rax
  __int64 v5; // rax
  ResourceType_t m_nResourceType; // r14
  __int64 v8; // r15
  void (__fastcall ***v9)(_QWORD, ResourceHandle_t, __int64, __int64); // rax
  ResourceHandle_t m_hResource; // rax
  const char **m_Name; // rax
  const char *v12; // rsi
  void (__fastcall ***v13)(_QWORD, ResourceHandle_t, __int64, __int64); // rax
  int m_nUsed; // ecx
  int v15; // edx
  CUtlHashtableEntry<ResourceId_t,char const*> *v16; // rax
  void (__fastcall ***v17)(_QWORD, ResourceHandle_t, __int64, __int64); // rax
  ResourceHandle_t resourceProfileEventSpan; // [rsp+0h] [rbp-300h]
  __int64 profileHelper_ExtrefFixup; // [rsp+10h] [rbp-2F0h]
  volatile signed __int64 *profileHelper_ExtrefFixup_8; // [rsp+18h] [rbp-2E8h]
  char profileHelper_ExtrefFixup_16; // [rsp+20h] [rbp-2E0h]
  CResourceReferenceFixupTraversal fixupTraversal; // [rsp+30h] [rbp-2D0h] BYREF
  CResourceNameGetter resourceName; // [rsp+C0h] [rbp-240h] BYREF
  unsigned __int64 v24; // [rsp+2C8h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  v4 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
  v5 = (*(*v4 + 8LL))(v4);
  m_nResourceType = this->m_nResourceType;
  if ( this->m_bRequiresExtRefFixup )
  {
    v8 = v5;
    resourceProfileEventSpan = this->m_hResource;
    v9 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    (**v9)(v9, resourceProfileEventSpan, 9, 1);
    profileHelper_ExtrefFixup = 0;
    if ( m_nResourceType == 0 || m_nResourceType == 1717792886 )
    {
      profileHelper_ExtrefFixup_8 = (v8 + 32);
      _InterlockedAdd((v8 + 40), 1u);
      profileHelper_ExtrefFixup = Plat_RelativeTicks();
      profileHelper_ExtrefFixup_16 = 1;
    }
    else
    {
      profileHelper_ExtrefFixup_16 = 0;
    }
    CResourceReferenceFixupTraversal::CResourceReferenceFixupTraversal(
      &fixupTraversal,
      pRegisterUtils,
      this->m_pHeader,
      this->m_hResource,
      this->m_nResourceType);
    CSchemaVisitorBase::TraverseClass(
      &fixupTraversal,
      this->m_pLoadedData,
      this->m_pDiskDataClassBinding->m_pClassInfo_N);
    if ( CResourceReferenceFixupTraversal::InvalidReferencesEncountered(&fixupTraversal) )
    {
      m_hResource = this->m_hResource;
      if ( m_hResource != 0 && (m_Name = m_hResource->m_Name) != 0 )
      {
        v12 = "";
        if ( *m_Name != 0 )
          v12 = *m_Name;
        _V_strncpy(&resourceName, v12, 512);
      }
      else
      {
        _V_strncpy(&resourceName, "", 512);
      }
      if ( LoggingSystem_IsChannelEnabled(LOG_TYPEMANAGER, 2) != 0 )
        LoggingSystem_Log(
          LOG_TYPEMANAGER,
          2,
          "WARNING: Problems encounted with external references in resource '%s'. See above for reason(s)\n",
          resourceName.m_Buffer);
    }
    v13 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    (**v13)(v13, this->m_hResource, 9, 2);
    m_nUsed = fixupTraversal.m_RefTable.m_ExtrefLookup.m_nUsed;
    fixupTraversal._vptr_CSchemaVisitorBase = &off_47D1350;
    if ( fixupTraversal.m_RefTable.m_ExtrefLookup.m_nUsed != 0 )
    {
      v15 = fixupTraversal.m_RefTable.m_ExtrefLookup.m_table.m_nAllocationCount - 1;
      if ( fixupTraversal.m_RefTable.m_ExtrefLookup.m_table.m_nAllocationCount - 1 >= 0 )
      {
        v16 = &fixupTraversal.m_RefTable.m_ExtrefLookup.m_table.m_pMemory[v15];
        do
        {
          if ( v16->flags_and_hash >= 0 )
          {
            --m_nUsed;
            v16->flags_and_hash = 0x80000000;
            if ( m_nUsed == 0 )
              break;
          }
          --v15;
          --v16;
        }
        while ( v15 != -1 );
      }
      fixupTraversal.m_RefTable.m_ExtrefLookup.m_nUsed = 0;
    }
    if ( (fixupTraversal.m_RefTable.m_ExtrefLookup.m_table.m_nGrowSize & 0xC0000000) == 0 )
    {
      if ( fixupTraversal.m_RefTable.m_ExtrefLookup.m_table.m_pMemory != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        fixupTraversal.m_RefTable.m_ExtrefLookup.m_table.m_pMemory = 0;
      }
      fixupTraversal.m_RefTable.m_ExtrefLookup.m_table.m_nAllocationCount = 0;
    }
    fixupTraversal._vptr_CSchemaVisitorBase = &off_47D1170;
    if ( fixupTraversal.m_VisitedClasses.m_pData != 0 )
      operator delete[](fixupTraversal.m_VisitedClasses.m_pData);
    if ( profileHelper_ExtrefFixup_16 != 0 )
      _InterlockedAdd64(profileHelper_ExtrefFixup_8, Plat_RelativeTicks() - profileHelper_ExtrefFixup);
    v17 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
    (**v17)(v17, resourceProfileEventSpan, 9, 2);
  }
  this->m_bDidExtrefFixup = 1;
  return 1;
}


// CIntrospectedResourceDataHandler::InitAndFixup  (line 304, @0x000000000326a3c0, libserver.so)
// calls: CIntrospectedResourceDataHandler::InitNoFixup, CIntrospectedResourceDataHandler::FixupExternalReferences
// callers: CBaseIntrospectedTypeManager::AllocateResource
bool __fastcall CIntrospectedResourceDataHandler::InitAndFixup(
        CIntrospectedResourceDataHandler *const this,
        ResourceHandle_t hResource,
        ResourceId_t nId,
        const ResourceFileHeader_t *pHeader,
        IRD_RegisterResourceDataUtils *pRegisterUtils)
{
  return CIntrospectedResourceDataHandler::InitNoFixup(this, hResource, nId, pHeader)
      && CIntrospectedResourceDataHandler::FixupExternalReferences(this, pRegisterUtils);
}


// CIntrospectedResourceDataHandler::PrepareAllocatorUtils  (line 315, @0x000000000326a3f0, libserver.so)  // inlines: Init
CResourceAllocatorUtils *__fastcall CIntrospectedResourceDataHandler::PrepareAllocatorUtils(
        CIntrospectedResourceDataHandler *const this)
{
  const ResourceFileHeader_t *m_pHeader; // rdx
  size_t m_nLoadedDataSize; // rsi
  void *m_pLoadedData; // r8
  uint16 m_nResourceVersion; // cx
  const ResourceBindingBase_t *m_hResource; // r9
  size_t m_nNonStreamingSize; // rdx

  m_pHeader = this->m_pHeader;
  m_nLoadedDataSize = this->m_nLoadedDataSize;
  m_pLoadedData = this->m_pLoadedData;
  m_nResourceVersion = m_pHeader->m_nResourceVersion;
  m_hResource = this->m_hResource;
  m_nNonStreamingSize = m_pHeader->m_nNonStreamingSize;
  this->m_AllocatorUtils.m_bMustCopy = !this->m_bConversionCreatedSeparateAllocation;
  this->m_AllocatorUtils.m_pData = m_pLoadedData;
  this->m_AllocatorUtils.m_nSize = m_nLoadedDataSize;
  this->m_AllocatorUtils.m_hResource = m_hResource;
  this->m_AllocatorUtils.m_nAlignment = 16;
  this->m_AllocatorUtils.m_bAssumedControl = 0;
  this->m_AllocatorUtils.m_nStreamingDataOffset = m_nNonStreamingSize;
  this->m_AllocatorUtils.m_nResourceVersion = m_nResourceVersion;
  return &this->m_AllocatorUtils;
}


// CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler  (line 325, @0x000000000326a610, libserver.so)
// calls: CIntrospectedResourceDataHandler::CleanupAllocation
// callers: CSisterResourceBlockLoader::~CSisterResourceBlockLoader, LoadSisterMaterialResourceForMesh, GetVsSignatureFromResourceHeader, GetMeshMaterialInfo, CBaseIntrospectedTypeManager::AllocateResource
void __fastcall CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler(
        CIntrospectedResourceDataHandler *const this)
{
  if ( !this->m_bExternalAssumedControlOfMemory && !this->m_AllocatorUtils.m_bAssumedControl )
    CIntrospectedResourceDataHandler::CleanupAllocation(this);
}


// CIntrospectedResourceDataHandler::CleanupAllocation  (line 336, @0x000000000326a440, libserver.so)  // inlines: CResourceProfileEventSpanScope, ~CExtrefTraversal, ~CReferenceCleanupTraversal, ~CResourceProfileEventSpanScope, ~CSchemaFieldVisitor, ~CSchemaVisitorBase, ~CUtlScalarHash
// calls: CReferenceCleanupTraversal::CReferenceCleanupTraversal, CSchemaVisitorBase::TraverseClass, operator delete [], CResourceProfileEventSpanScope::~CResourceProfileEventSpanScope, _Unwind_Resume
// callers: CIntrospectedResourceDataHandler::~CIntrospectedResourceDataHandler
void __fastcall CIntrospectedResourceDataHandler::CleanupAllocation(CIntrospectedResourceDataHandler *const this)
{
  void (__fastcall ***v2)(_QWORD, ResourceHandle_t, _QWORD, __int64); // rax
  __int64 v3; // rax
  void (__fastcall ***v4)(_QWORD, ResourceHandle_t, _QWORD, __int64); // rax
  void (__fastcall ***v5)(_QWORD, ResourceHandle_t, __int64, __int64); // rax
  void (__fastcall ***v6)(_QWORD, ResourceHandle_t, __int64, __int64); // rax
  ResourceHandle_t resourceProfileEventSpan; // [rsp+0h] [rbp-70h]
  CResourceProfileEventSpanScope resourceProfileEventSpan_0; // [rsp+10h] [rbp-60h] BYREF
  void *pMem; // [rsp+20h] [rbp-50h]

  if ( this->m_pLoadedData != 0 )
  {
    if ( this->m_bDidExtrefFixup )
    {
      resourceProfileEventSpan = this->m_hResource;
      v5 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
      (**v5)(v5, resourceProfileEventSpan, 11, 1);
      CReferenceCleanupTraversal::CReferenceCleanupTraversal(
        &resourceProfileEventSpan_0,
        this->m_hResource,
        this->m_nResourceType);
      CSchemaVisitorBase::TraverseClass(
        &resourceProfileEventSpan_0,
        this->m_pLoadedData,
        this->m_pDiskDataClassBinding->m_pClassInfo_N);
      resourceProfileEventSpan_0.m_hResource = &off_47D1170;
      if ( pMem != 0 )
        operator delete[](pMem);
      v6 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
      (**v6)(v6, resourceProfileEventSpan, 11, 2);
    }
    if ( this->m_bConversionCreatedSeparateAllocation )
    {
      resourceProfileEventSpan_0.m_nEvent = RMSG_EventType_t::RMSG_RESOURCE_DEALLOCATE;
      resourceProfileEventSpan_0.m_hResource = this->m_hResource;
      v2 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
      (**v2)(v2, resourceProfileEventSpan_0.m_hResource, resourceProfileEventSpan_0.m_nEvent, 1);
      v3 = (*(*g_pSchemaSystem + 264LL))(g_pSchemaSystem);
      (*(*v3 + 32LL))(v3, this->m_pLoadedData, this->m_pDiskDataClassBinding);
      (*(*g_pAsyncFileSystem + 200LL))(g_pAsyncFileSystem, this->m_pLoadedData);
      v4 = (*(*g_pResourceSystem + 528LL))(g_pResourceSystem);
      (**v4)(v4, resourceProfileEventSpan_0.m_hResource, resourceProfileEventSpan_0.m_nEvent, 2);
    }
  }
}


// CIntrospectedResourceDataHandler::GetData  (line 367, @0x000000000326aa30, libserver.so)
// callers: GetMeshMaterialInfo
void *__fastcall CIntrospectedResourceDataHandler::GetData(CIntrospectedResourceDataHandler *const this)
{
  return this->m_pLoadedData;
}


// CIntrospectedResourceDataHandler::DataIsSeparateAllocation  (line 375, @0x000000000326aa40, libserver.so)
bool __fastcall CIntrospectedResourceDataHandler::DataIsSeparateAllocation(
        CIntrospectedResourceDataHandler *const this)
{
  return this->m_bConversionCreatedSeparateAllocation;
}


// CIntrospectedResourceDataHandler::AssumeControlOfMemory  (line 383, @0x000000000326aa50, libserver.so)
void __fastcall CIntrospectedResourceDataHandler::AssumeControlOfMemory(CIntrospectedResourceDataHandler *const this)
{
  this->m_bExternalAssumedControlOfMemory = 1;
}


