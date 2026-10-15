
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_entityinstance.cpp  (line 0, @0x0000000001a67d50, libserver.so)  // inlines: CFieldPathHuffmanEncoder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixed, CVariantBase, Color, Purge, RemoveAll, SetColor, __static_initialization_and_destruction_0, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixed
// calls: __cxa_atexit, CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup, _Unwind_Resume, CUtlMemory<CFieldPathHuffmanEncoder::composed_t, int>::Purge, CUtlMemory<int, int>::Purge
// globals: UNSPECIFIED_LOGGING_COLOR, `guard variable for'g_HuffmanEncoder, `guard variable for'CEntityKeyValues::sm_EmptyVariant, __dso_handle, CEntityKeyValues::sm_EmptyVariant, CVariantBase<CEntityVariantAllocator>::~CVariantBase(), g_HuffmanEncoder, CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder()
void __cdecl GLOBAL__sub_I_entityinstance_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
  if ( `guard variable for'g_HuffmanEncoder == 0 )
  {
    `guard variable for'g_HuffmanEncoder = 1;
    g_HuffmanEncoder.m_pRoot = 0;
    g_HuffmanEncoder.m_Frequencies.m_Size = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_pMemory = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_nAllocationCount = 0;
    g_HuffmanEncoder.m_Frequencies.m_Memory.m_nGrowSize = 0;
    g_HuffmanEncoder.m_OpCodeToHuffmanLookup.m_Size = 0;
    g_HuffmanEncoder.m_FixedTree.m_Size = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_pMemory = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_nAllocationCount = 0;
    g_HuffmanEncoder.m_FixedTree.m_Memory.m_nGrowSize = 0;
    CFieldPathHuffmanEncoder::BuildOpCodeCodeToHuffmanLookup(&g_HuffmanEncoder);
    __cxa_atexit(CFieldPathHuffmanEncoder::~CFieldPathHuffmanEncoder, &g_HuffmanEncoder, &_dso_handle);
  }
  if ( `guard variable for'CEntityKeyValues::sm_EmptyVariant == 0 )
  {
    `guard variable for'CEntityKeyValues::sm_EmptyVariant = 1;
    CEntityKeyValues::sm_EmptyVariant.m_type = 0;
    CEntityKeyValues::sm_EmptyVariant.m_flags = 0;
    CEntityKeyValues::sm_EmptyVariant.m_uint64 = 0;
    __cxa_atexit(CVariantBase<CEntityVariantAllocator>::~CVariantBase, &CEntityKeyValues::sm_EmptyVariant, &_dso_handle);
  }
}


// GetScriptDesc<CEntityInstance>  (line 17, @0x000000000309eac0, libserver.so)  // inlines: AddParameterType, CUtlMemory, CUtlVector, CUtlVectorBase, Finalize, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CEntityInstance*, CEntityInstance, CEntityHandle>, ScriptDeduceFunctionSignature<CEntityInstance*, CEntityInstance, HSCRIPT__*>, ScriptDeduceFunctionSignature<CEntityInstance*, CEntityInstance, char const*>, ScriptDeduceFunctionSignature<CEntityInstance*, CEntityInstance, int, char const*>, ScriptDeduceFunctionSignature<CEntityInstance*, CEntityInstance, int>, ScriptDeduceFunctionSignature<CEntityInstance*, CEntityInstance, void, char const*, HSCRIPT__*, HSCRIPT__*, const CVariantBase<CVariantDefaultAllocator>&, float>, ScriptDeduceFunctionSignature<CEntityInstance*, CEntityInstance, void, char const*, char const*, HSCRIPT__*>, ScriptDeduceFunctionSignature<CEntityInstance*, CEntityInstance, void, char const*, char const*>, ScriptDeduceFunctionSignature<CEntityInstance*, CEntityInstance, void, char const*, int>, ScriptDeduceFunctionSignature<CEntityInstance*, CEntityInstance, void>, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CBaseEntity::Script_FollowEntity, CTakeDamageInfo::Script_SetAttacker, IsValidEntity, IsMarkedForDeletion, Script_Remove, Script_RemoveImmediate, Script_StopSoundOn, Script_EmitSoundOn, Script_GetPhysAngularVelocity, Script_GetPhysVelocity, Script_SetPhysAngularVelocity, CScriptEntityIterator::Next (154 total)
// strings: "CEntityInstance: Root class for all entities", "CEntityInstance", "Fire an entity output", "ScriptFireOutput", "Delete this entity", "RemoveSelf" (40 total)
// globals: g_pCEntityInstance_ScriptDesc, CMemberScriptBinding5<CEntityInstance *,void (CEntityInstance::*)(char const*,HSCRIPT__ *,HSCRIPT__ *,CVariantBase<CVariantDefaultAllocator> const&,float),void,, CEntityInstance::ScriptFireOutput(char const*,HSCRIPT__ *,HSCRIPT__ *,CVariantBase<CVariantDefaultAllocator> const&,float), CMemberScriptBinding0<CEntityInstance *,void (CEntityInstance::*)(void),void>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVar, CEntityInstance::RemoveSelf(void), CMemberScriptBinding1<CEntityInstance *,int (CEntityInstance::*)(char const*),int,char const*>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,, CEntityInstance::GetIntAttr(char const*), CMemberScriptBinding2<CEntityInstance *,void (CEntityInstance::*)(char const*,int),void,char const*,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocat (28 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CEntityInstance>(CEntityInstance *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // r12
  CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int> > *p_m_FunctionBindings; // rbx
  __int64 v4; // rcx
  char v5; // al
  char v6; // dl
  int v7; // eax
  char v8; // dl
  char v9; // di
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  char v13; // dl
  char v14; // di
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rdx
  int v18; // eax
  char v19; // dl
  char v20; // di
  __int64 v21; // rcx
  char v22; // al
  char v23; // dl
  int v24; // eax
  char v25; // dl
  char v26; // di
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  char v30; // dl
  char v31; // di
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  char v35; // dl
  char v36; // di
  __int64 v37; // rcx
  char v38; // al
  char v39; // dl
  int v40; // eax
  char v41; // dl
  char v42; // di
  __int64 v43; // rcx
  char v44; // al
  char v45; // dl
  int v46; // eax
  char v47; // dl
  char v48; // di
  __int64 v49; // rcx
  char v50; // al
  char v51; // dl
  int v52; // eax
  char v53; // dl
  char v54; // di
  __int64 v55; // rcx
  char v56; // al
  char v57; // dl
  int v58; // eax
  char v59; // dl
  char v60; // di
  __int64 v61; // rcx
  int v62; // edx
  int v63; // edx
  char v64; // al
  char v65; // di
  __int64 v66; // rcx
  int v67; // edx
  int v68; // edx
  char v69; // al
  char v70; // di
  __int64 v71; // rax
  int v72; // edx
  int v73; // edx
  char v74; // cl
  __int64 v75; // rcx
  int v76; // edx
  int v77; // edx
  char v78; // al
  char v79; // di
  __int64 v80; // rax
  int v81; // edx
  int v82; // edx
  char v83; // cl
  __int64 v84; // rcx
  int v85; // edx
  int v86; // edx
  char v87; // al
  char v88; // di
  __int64 v89; // rcx
  int v90; // edx
  int v91; // edx
  char v92; // al
  char v93; // di
  __int64 v94; // rcx
  int v95; // edx
  int v96; // edx
  char v97; // al
  char v98; // di
  __int64 v99; // rcx
  int v100; // edx
  int v101; // edx
  char v102; // al
  char v103; // di
  __int64 v104; // rcx
  int v105; // edx
  int v106; // edx
  char v107; // al
  char v108; // di

  result = g_pCEntityInstance_ScriptDesc;
  if ( g_pCEntityInstance_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    p_m_FunctionBindings = &v2->m_FunctionBindings;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCEntityInstance_ScriptDesc = v2;
    v2->m_pszDescription = "CEntityInstance: Root class for all entities";
    v2->m_pszScriptName = "CEntityInstance";
    v2->m_pszClassname = "CEntityInstance";
    v4 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(&v2->m_FunctionBindings)];
    *(v4 + 24) = 0;
    *(v4 + 16) = "Fire an entity output";
    *v4 = "FireOutput";
    *(v4 + 8) = "ScriptFireOutput";
    v5 = *(v4 + 26);
    *(v4 + v5 + 27) = 30;
    *(v4 + (v5 + 1) + 27) = 31;
    *(v4 + (v5 + 2) + 27) = 31;
    *(v4 + (v5 + 3) + 27) = 32;
    v6 = v5 + 4;
    v5 += 5;
    *(v4 + v6 + 27) = 1;
    *(v4 + 26) = v5;
    v7 = v5 - 1;
    *(v4 + 25) = 0;
    if ( v7 >= 0 && *(v4 + v7 + 27) == 32 )
    {
      v8 = 1;
      do
      {
        --v7;
        v9 = v8;
        if ( v7 == -1 )
        {
          *(v4 + 25) = v8;
          goto LABEL_8;
        }
        ++v8;
      }
      while ( *(v4 + v7 + 27) == 32 );
      *(v4 + 25) = v9;
    }
LABEL_8:
    *(v4 + 64) = 1;
    *(v4 + 48) = CMemberScriptBinding5<CEntityInstance *,void (CEntityInstance::*)(char const*,HSCRIPT__ *,HSCRIPT__ *,CVariantBase<CVariantDefaultAllocator> const&,float),void,char const*,HSCRIPT__ *,HSCRIPT__ *,CVariantBase<CVariantDefaultAllocator> const&,float>::Call;
    *(v4 + 56) = CEntityInstance::ScriptFireOutput;
    v10 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v10 + 24) = 0;
    *(v10 + 16) = "Delete this entity";
    *v10 = "RemoveSelf";
    *(v10 + 8) = "RemoveSelf";
    v11 = *(v10 + 26);
    *(v10 + 25) = 0;
    v12 = v11 - 1;
    if ( v12 >= 0 && *(v10 + v12 + 27) == 32 )
    {
      v13 = 1;
      do
      {
        --v12;
        v14 = v13;
        if ( v12 == -1 )
        {
          *(v10 + 25) = v13;
          goto LABEL_14;
        }
        ++v13;
      }
      while ( *(v10 + v12 + 27) == 32 );
      *(v10 + 25) = v14;
    }
LABEL_14:
    *(v10 + 64) = 1;
    *(v10 + 48) = CMemberScriptBinding0<CEntityInstance *,void (CEntityInstance::*)(void),void>::Call;
    *(v10 + 56) = CEntityInstance::RemoveSelf;
    v15 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v15 + 24) = 5;
    *(v15 + 16) = "Get Integer Attribute";
    *v15 = "GetIntAttr";
    *(v15 + 8) = "GetIntAttr";
    v16 = *(v15 + 26);
    v17 = v16++;
    *(v15 + v17 + 27) = 30;
    *(v15 + 26) = v16;
    v18 = v16 - 1;
    *(v15 + 25) = 0;
    if ( v18 >= 0 && *(v15 + v18 + 27) == 32 )
    {
      v19 = 1;
      do
      {
        --v18;
        v20 = v19;
        if ( v18 == -1 )
        {
          *(v15 + 25) = v19;
          goto LABEL_20;
        }
        ++v19;
      }
      while ( *(v15 + v18 + 27) == 32 );
      *(v15 + 25) = v20;
    }
LABEL_20:
    *(v15 + 64) = 1;
    *(v15 + 48) = CMemberScriptBinding1<CEntityInstance *,int (CEntityInstance::*)(char const*),int,char const*>::Call;
    *(v15 + 56) = CEntityInstance::GetIntAttr;
    v21 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v21 + 24) = 0;
    *(v21 + 16) = "Set Integer Attribute";
    *v21 = "SetIntAttr";
    *(v21 + 8) = "SetIntAttr";
    v22 = *(v21 + 26);
    *(v21 + v22 + 27) = 30;
    v23 = v22 + 1;
    v22 += 2;
    *(v21 + v23 + 27) = 5;
    *(v21 + 26) = v22;
    v24 = v22 - 1;
    *(v21 + 25) = 0;
    if ( v24 >= 0 && *(v21 + v24 + 27) == 32 )
    {
      v25 = 1;
      do
      {
        --v24;
        v26 = v25;
        if ( v24 == -1 )
        {
          *(v21 + 25) = v25;
          goto LABEL_26;
        }
        ++v25;
      }
      while ( *(v21 + v24 + 27) == 32 );
      *(v21 + 25) = v26;
    }
LABEL_26:
    *(v21 + 64) = 1;
    *(v21 + 48) = CMemberScriptBinding2<CEntityInstance *,void (CEntityInstance::*)(char const*,int),void,char const*,int>::Call;
    *(v21 + 56) = CEntityInstance::SetIntAttr;
    v27 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v27 + 24) = 30;
    *(v27 + 16) = "Get the entity name";
    *v27 = "GetName";
    *(v27 + 8) = "GetEntityNameAsCStr";
    v28 = *(v27 + 26);
    *(v27 + 25) = 0;
    v29 = v28 - 1;
    if ( v29 >= 0 && *(v27 + v29 + 27) == 32 )
    {
      v30 = 1;
      do
      {
        --v29;
        v31 = v30;
        if ( v29 == -1 )
        {
          *(v27 + 25) = v30;
          goto LABEL_32;
        }
        ++v30;
      }
      while ( *(v27 + v29 + 27) == 32 );
      *(v27 + 25) = v31;
    }
LABEL_32:
    *(v27 + 64) = 1;
    *(v27 + 48) = CMemberScriptBinding0<CEntityInstance *,char const* (CEntityInstance::*)(void),char const*>::Call;
    *(v27 + 56) = CEntityInstance::GetEntityNameAsCStr;
    v32 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v32 + 24) = 30;
    *(v32 + 16) = "Get the entity name w/help if not defined (i.e. classname/etc)";
    *v32 = "GetDebugName";
    *(v32 + 8) = "GetDebugName";
    v33 = *(v32 + 26);
    *(v32 + 25) = 0;
    v34 = v33 - 1;
    if ( v34 >= 0 && *(v32 + v34 + 27) == 32 )
    {
      v35 = 1;
      do
      {
        --v34;
        v36 = v35;
        if ( v34 == -1 )
        {
          *(v32 + 25) = v35;
          goto LABEL_38;
        }
        ++v35;
      }
      while ( *(v32 + v34 + 27) == 32 );
      *(v32 + 25) = v36;
    }
LABEL_38:
    *(v32 + 64) = 1;
    *(v32 + 48) = CMemberScriptBinding0<CEntityInstance *,char const* (CEntityInstance::*)(void),char const*>::Call;
    *(v32 + 56) = CEntityInstance::GetDebugName;
    v37 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v37 + 24) = 0;
    *(v37 + 16) = "Adds an I/O connection that will call the named function on this entity when the specified output fires.";
    *v37 = "ConnectOutput";
    *(v37 + 8) = "ConnectOutputToScriptSelf";
    v38 = *(v37 + 26);
    *(v37 + v38 + 27) = 30;
    v39 = v38 + 1;
    v38 += 2;
    *(v37 + v39 + 27) = 30;
    *(v37 + 26) = v38;
    v40 = v38 - 1;
    *(v37 + 25) = 0;
    if ( v40 >= 0 && *(v37 + v40 + 27) == 32 )
    {
      v41 = 1;
      do
      {
        --v40;
        v42 = v41;
        if ( v40 == -1 )
        {
          *(v37 + 25) = v41;
          goto LABEL_44;
        }
        ++v41;
      }
      while ( *(v37 + v40 + 27) == 32 );
      *(v37 + 25) = v42;
    }
LABEL_44:
    *(v37 + 64) = 1;
    *(v37 + 48) = CMemberScriptBinding2<CEntityInstance *,void (CEntityInstance::*)(char const*,char const*),void,char const*,char const*>::Call;
    *(v37 + 56) = CEntityInstance::ConnectOutputToScriptSelf;
    v43 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v43 + 24) = 0;
    *(v43 + 16) = "Adds an I/O connection that will call the named function on the passed entity when the specified output fires.";
    *v43 = "RedirectOutput";
    *(v43 + 8) = "ConnectOutputToScript";
    v44 = *(v43 + 26);
    *(v43 + v44 + 27) = 30;
    *(v43 + (v44 + 1) + 27) = 30;
    v45 = v44 + 2;
    v44 += 3;
    *(v43 + v45 + 27) = 31;
    *(v43 + 26) = v44;
    v46 = v44 - 1;
    *(v43 + 25) = 0;
    if ( v46 >= 0 && *(v43 + v46 + 27) == 32 )
    {
      v47 = 1;
      do
      {
        --v46;
        v48 = v47;
        if ( v46 == -1 )
        {
          *(v43 + 25) = v47;
          goto LABEL_50;
        }
        ++v47;
      }
      while ( *(v43 + v46 + 27) == 32 );
      *(v43 + 25) = v48;
    }
LABEL_50:
    *(v43 + 64) = 1;
    *(v43 + 48) = CMemberScriptBinding3<CEntityInstance *,void (CEntityInstance::*)(char const*,char const*,HSCRIPT__ *),void,char const*,char const*,HSCRIPT__ *>::Call;
    *(v43 + 56) = CEntityInstance::ConnectOutputToScript;
    v49 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v49 + 24) = 0;
    *(v49 + 16) = "Removes a connected script function from an I/O event on this entity.";
    *v49 = "DisconnectOutput";
    *(v49 + 8) = "DisconnectOutputFromScriptSelf";
    v50 = *(v49 + 26);
    *(v49 + v50 + 27) = 30;
    v51 = v50 + 1;
    v50 += 2;
    *(v49 + v51 + 27) = 30;
    *(v49 + 26) = v50;
    v52 = v50 - 1;
    *(v49 + 25) = 0;
    if ( v52 >= 0 && *(v49 + v52 + 27) == 32 )
    {
      v53 = 1;
      do
      {
        --v52;
        v54 = v53;
        if ( v52 == -1 )
        {
          *(v49 + 25) = v53;
          goto LABEL_56;
        }
        ++v53;
      }
      while ( *(v49 + v52 + 27) == 32 );
      *(v49 + 25) = v54;
    }
LABEL_56:
    *(v49 + 64) = 1;
    *(v49 + 48) = CMemberScriptBinding2<CEntityInstance *,void (CEntityInstance::*)(char const*,char const*),void,char const*,char const*>::Call;
    *(v49 + 56) = CEntityInstance::DisconnectOutputFromScriptSelf;
    v55 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v55 + 24) = 0;
    *(v55 + 16) = "Removes a connected script function from an I/O event on the passed entity.";
    *v55 = "DisconnectRedirectedOutput";
    *(v55 + 8) = "DisconnectOutputFromScript";
    v56 = *(v55 + 26);
    *(v55 + v56 + 27) = 30;
    *(v55 + (v56 + 1) + 27) = 30;
    v57 = v56 + 2;
    v56 += 3;
    *(v55 + v57 + 27) = 31;
    *(v55 + 26) = v56;
    v58 = v56 - 1;
    *(v55 + 25) = 0;
    if ( v58 >= 0 && *(v55 + v58 + 27) == 32 )
    {
      v59 = 1;
      do
      {
        --v58;
        v60 = v59;
        if ( v58 == -1 )
        {
          *(v55 + 25) = v59;
          goto LABEL_62;
        }
        ++v59;
      }
      while ( *(v55 + v58 + 27) == 32 );
      *(v55 + 25) = v60;
    }
LABEL_62:
    *(v55 + 64) = 1;
    *(v55 + 48) = CMemberScriptBinding3<CEntityInstance *,void (CEntityInstance::*)(char const*,char const*,HSCRIPT__ *),void,char const*,char const*,HSCRIPT__ *>::Call;
    *(v55 + 56) = CEntityInstance::DisconnectOutputFromScript;
    v61 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v62 = *(v61 + 26);
    *(v61 + 24) = 5;
    *(v61 + 16) = "";
    *v61 = "GetEntityIndex";
    *(v61 + 8) = "ScriptGetEntityIndex";
    v63 = v62 - 1;
    *(v61 + 25) = 0;
    if ( v63 >= 0 && *(v61 + v63 + 27) == 32 )
    {
      v64 = 1;
      do
      {
        --v63;
        v65 = v64;
        if ( v63 == -1 )
        {
          *(v61 + 25) = v64;
          goto LABEL_68;
        }
        ++v64;
      }
      while ( *(v61 + v63 + 27) == 32 );
      *(v61 + 25) = v65;
    }
LABEL_68:
    *(v61 + 64) = 1;
    *(v61 + 48) = CMemberScriptBinding0<CEntityInstance *,int (CEntityInstance::*)(void),int>::Call;
    *(v61 + 56) = CEntityInstance::ScriptGetEntityIndex;
    v66 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v67 = *(v66 + 26);
    *(v66 + 24) = 5;
    *(v66 + 16) = "";
    *v66 = "entindex";
    *(v66 + 8) = "ScriptGetEntityIndex";
    v68 = v67 - 1;
    *(v66 + 25) = 0;
    if ( v68 >= 0 && *(v66 + v68 + 27) == 32 )
    {
      v69 = 1;
      do
      {
        --v68;
        v70 = v69;
        if ( v68 == -1 )
        {
          *(v66 + 25) = v69;
          goto LABEL_74;
        }
        ++v69;
      }
      while ( *(v66 + v68 + 27) == 32 );
      *(v66 + 25) = v70;
    }
LABEL_74:
    *(v66 + 64) = 1;
    *(v66 + 48) = CMemberScriptBinding0<CEntityInstance *,int (CEntityInstance::*)(void),int>::Call;
    *(v66 + 56) = CEntityInstance::ScriptGetEntityIndex;
    v71 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v72 = *(v71 + 26);
    *(v71 + 16) = "";
    *v71 = "GetName";
    *(v71 + 8) = "GetEntityNameAsCStr";
    *(v71 + 24) = 30;
    v73 = v72 - 1;
    *(v71 + 25) = 0;
    if ( v73 >= 0 && *(v71 + v73 + 27) == 32 )
    {
      v74 = 0;
      do
      {
        --v73;
        ++v74;
      }
      while ( v73 != -1 && *(v71 + v73 + 27) == 32 );
      *(v71 + 25) = v74;
    }
    *(v71 + 64) = 1;
    *(v71 + 48) = CMemberScriptBinding0<CEntityInstance *,char const* (CEntityInstance::*)(void),char const*>::Call;
    *(v71 + 56) = CEntityInstance::GetEntityNameAsCStr;
    v75 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v76 = *(v75 + 26);
    *(v75 + 24) = 30;
    *(v75 + 16) = "";
    *v75 = "GetClassname";
    *(v75 + 8) = "GetClassNameAsCStr";
    v77 = v76 - 1;
    *(v75 + 25) = 0;
    if ( v77 >= 0 && *(v75 + v77 + 27) == 32 )
    {
      v78 = 1;
      do
      {
        --v77;
        v79 = v78;
        if ( v77 == -1 )
        {
          *(v75 + 25) = v78;
          goto LABEL_86;
        }
        ++v78;
      }
      while ( *(v75 + v77 + 27) == 32 );
      *(v75 + 25) = v79;
    }
LABEL_86:
    *(v75 + 64) = 1;
    *(v75 + 48) = CMemberScriptBinding0<CEntityInstance *,char const* (CEntityInstance::*)(void),char const*>::Call;
    *(v75 + 56) = CEntityInstance::GetClassNameAsCStr;
    v80 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v81 = *(v80 + 26);
    *(v80 + 16) = "Get the entity as an EHANDLE";
    *v80 = "GetEntityHandle";
    *(v80 + 8) = "ScriptGetEHandle";
    *(v80 + 24) = 13;
    v82 = v81 - 1;
    *(v80 + 25) = 0;
    if ( v82 >= 0 && *(v80 + v82 + 27) == 32 )
    {
      v83 = 0;
      do
      {
        --v82;
        ++v83;
      }
      while ( v82 != -1 && *(v80 + v82 + 27) == 32 );
      *(v80 + 25) = v83;
    }
    *(v80 + 64) = 1;
    *(v80 + 48) = CMemberScriptBinding0<CEntityInstance *,CEntityHandle (CEntityInstance::*)(void),CEntityHandle>::Call;
    *(v80 + 56) = CEntityInstance::ScriptGetEHandle;
    v84 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v85 = *(v84 + 26);
    *(v84 + 24) = 0;
    *(v84 + 16) = "";
    *v84 = "Destroy";
    *(v84 + 8) = "RemoveSelf";
    v86 = v85 - 1;
    *(v84 + 25) = 0;
    if ( v86 >= 0 && *(v84 + v86 + 27) == 32 )
    {
      v87 = 1;
      do
      {
        --v86;
        v88 = v87;
        if ( v86 == -1 )
        {
          *(v84 + 25) = v87;
          goto LABEL_98;
        }
        ++v87;
      }
      while ( *(v84 + v86 + 27) == 32 );
      *(v84 + 25) = v88;
    }
LABEL_98:
    *(v84 + 64) = 1;
    *(v84 + 48) = CMemberScriptBinding0<CEntityInstance *,void (CEntityInstance::*)(void),void>::Call;
    *(v84 + 56) = CEntityInstance::RemoveSelf;
    v89 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v90 = *(v89 + 26);
    *(v89 + 24) = 31;
    *(v89 + 16) = "Retrieve the public script-side data associated with an entity";
    *v89 = "GetPublicScriptScope";
    *(v89 + 8) = "ScriptGetPublicScriptScope";
    v91 = v90 - 1;
    *(v89 + 25) = 0;
    if ( v91 >= 0 && *(v89 + v91 + 27) == 32 )
    {
      v92 = 1;
      do
      {
        --v91;
        v93 = v92;
        if ( v91 == -1 )
        {
          *(v89 + 25) = v92;
          goto LABEL_104;
        }
        ++v92;
      }
      while ( *(v89 + v91 + 27) == 32 );
      *(v89 + 25) = v93;
    }
LABEL_104:
    *(v89 + 64) = 1;
    *(v89 + 48) = CMemberScriptBinding0<CEntityInstance *,HSCRIPT__ * (CEntityInstance::*)(void),HSCRIPT__ *>::Call;
    *(v89 + 56) = CEntityInstance::ScriptGetPublicScriptScope;
    v94 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v95 = *(v94 + 26);
    *(v94 + 24) = 31;
    *(v94 + 16) = "Retrieve, creating if necessary, the public script-side data associated with an entity";
    *v94 = "GetOrCreatePublicScriptScope";
    *(v94 + 8) = "ScriptGetOrCreatePublicScriptScope";
    v96 = v95 - 1;
    *(v94 + 25) = 0;
    if ( v96 >= 0 && *(v94 + v96 + 27) == 32 )
    {
      v97 = 1;
      do
      {
        --v96;
        v98 = v97;
        if ( v96 == -1 )
        {
          *(v94 + 25) = v97;
          goto LABEL_110;
        }
        ++v97;
      }
      while ( *(v94 + v96 + 27) == 32 );
      *(v94 + 25) = v98;
    }
LABEL_110:
    *(v94 + 64) = 1;
    *(v94 + 48) = CMemberScriptBinding0<CEntityInstance *,HSCRIPT__ * (CEntityInstance::*)(void),HSCRIPT__ *>::Call;
    *(v94 + 56) = CEntityInstance::ScriptGetOrCreatePublicScriptScope;
    v99 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v100 = *(v99 + 26);
    *(v99 + 24) = 31;
    *(v99 + 16) = "Retrieve the private per-instance script-side data associated with an entity";
    *v99 = "GetPrivateScriptScope";
    *(v99 + 8) = "ScriptGetPrivateScriptScope";
    v101 = v100 - 1;
    *(v99 + 25) = 0;
    if ( v101 >= 0 && *(v99 + v101 + 27) == 32 )
    {
      v102 = 1;
      do
      {
        --v101;
        v103 = v102;
        if ( v101 == -1 )
        {
          *(v99 + 25) = v102;
          goto LABEL_116;
        }
        ++v102;
      }
      while ( *(v99 + v101 + 27) == 32 );
      *(v99 + 25) = v103;
    }
LABEL_116:
    *(v99 + 64) = 1;
    *(v99 + 48) = CMemberScriptBinding0<CEntityInstance *,HSCRIPT__ * (CEntityInstance::*)(void),HSCRIPT__ *>::Call;
    *(v99 + 56) = CEntityInstance::ScriptGetPrivateScriptScope;
    v104 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v105 = *(v104 + 26);
    *(v104 + 24) = 31;
    *(v104 + 16) = "Retrieve, creating if necessary, the private per-instance script-side data associated with an entity";
    *v104 = "GetOrCreatePrivateScriptScope";
    *(v104 + 8) = "ScriptGetOrCreatePrivateScriptScope";
    v106 = v105 - 1;
    *(v104 + 25) = 0;
    if ( v106 >= 0 && *(v104 + v106 + 27) == 32 )
    {
      v107 = 1;
      do
      {
        --v106;
        v108 = v107;
        if ( v106 == -1 )
        {
          *(v104 + 25) = v107;
          goto LABEL_122;
        }
        ++v107;
      }
      while ( *(v104 + v106 + 27) == 32 );
      *(v104 + 25) = v108;
    }
LABEL_122:
    *(v104 + 64) = 1;
    *(v104 + 48) = CMemberScriptBinding0<CEntityInstance *,HSCRIPT__ * (CEntityInstance::*)(void),HSCRIPT__ *>::Call;
    *(v104 + 56) = CEntityInstance::ScriptGetOrCreatePrivateScriptScope;
    return v2;
  }
  return result;
}


// CEntityInstance::GetScriptDesc  (line 17, @0x000000000309f940, libserver.so)
// calls: GetScriptDesc<CEntityInstance>
ScriptClassDesc_t *__fastcall CEntityInstance::GetScriptDesc(CEntityInstance *const this)
{
  return GetScriptDesc<CEntityInstance>(this);
}


// CEntityInstance::InitScriptDesc  (line 17, @0x000000000309f950, libserver.so)
// calls: GetScriptDesc<CEntityInstance>
// callers: CGameEntity::GetEntityClassInternal, CEntityRootClassesInitializer::CEntityRootClassesInitializer
ScriptClassDesc_t *__cdecl CEntityInstance::InitScriptDesc()
{
  return GetScriptDesc<CEntityInstance>(0);
}


// CEntityInstance::GetClassScriptDesc  (line 17, @0x000000000309f960, libserver.so)
// calls: GetScriptDesc<CEntityInstance>
ScriptClassDesc_t *__cdecl CEntityInstance::GetClassScriptDesc()
{
  return GetScriptDesc<CEntityInstance>(0);
}


// CEntityInstance::GetGlobalScriptScope  (line 41, @0x000000000309b580, libserver.so)
const CScriptAccessorT<CEntityFrameScriptAccessorBase,false> *__cdecl CEntityInstance::GetGlobalScriptScope()
{
  return &CEntityScriptFramework::sm_GlobalScriptScope;
}


// CEntityInstance::CEntityInstance  (line 49, @0x000000000309b590, libserver.so)  // inlines: CScriptAccessorT, CUtlStringToken, CUtlSymbolLarge
// callers: CGameEntity::CGameEntity, CEntityClass::ConstructInstance
void __fastcall CEntityInstance::CEntityInstance(CEntityInstance *const this)
{
  this->_vptr_IHandleEntity = &off_47C2DB0;
  this->m_hPrivateScope.m_hScope = 0;
  this->m_iszPrivateVScripts.u.m_Id = 0;
  this->m_worldGroupId.m_nHashCode = 0;
}


// CEntityInstance::~CEntityInstance  (line 70, @0x000000000309b7b0, libserver.so)  // inlines: DestroyPrivateScriptScope, GetVM, Term, operator HSCRIPT, ~CScriptAccessorT, ~IHandleEntity
// calls: CEntityInstance::DestroyPublicScriptScope
// callers: CGameEntity::~CGameEntity, CBaseEntity::CBaseEntity, CBaseEntity::~CBaseEntity, CEntityInstance::~CEntityInstance
void __fastcall CEntityInstance::~CEntityInstance(CEntityInstance *const this)
{
  this->_vptr_IHandleEntity = &off_47C2DB0;
  CEntityInstance::DestroyPublicScriptScope(this);
  if ( this->m_hPrivateScope.m_hScope != 0 && g_pScriptVM != 0 )
    (*(*g_pScriptVM + 136LL))(g_pScriptVM);
  this->m_hPrivateScope.m_hScope = 0;
  this->_vptr_IHandleEntity = &off_47C2D70;
}


// CEntityInstance::~CEntityInstance  (line 70, @0x000000000309b810, libserver.so)
// calls: CEntityInstance::~CEntityInstance, operator delete
void __fastcall CEntityInstance::~CEntityInstance(CEntityInstance *const this)
{
  CEntityInstance::~CEntityInstance(this);
  operator delete(this);
}


// CEntityInstance::GetEntityIndex  (line 95, @0x000000000309b5c0, libserver.so)  // inlines: GetEntityIndex, IdentityIndexInChunk, IdentityToIndex
// callers: CServerAchievementManager::GetPlayerID, CNetworkTransmitComponent::StateChanged, CBaseEntity::MakeTracer, ent_find, CBaseEntity::DrawDebugTextOverlays, CBaseEntity::PrecacheModelFromKeyValues, CBaseEntity::PhysicsDispatchThink, CBaseFlex::FlexControllerLocalToGlobal, CBaseEntityScriptInstanceHelper::ToString, SendToConsole, Script_EmitSoundOnClient, CDecalGameSystem::OnShootDecal (459 total)
CEntityIndex __fastcall CEntityInstance::GetEntityIndex(const CEntityInstance *const this)
{
  CEntityIdentity *m_pEntity; // rcx
  CEntityIndex result; // eax
  CEntityIdentity **m_pIdentityChunks; // rdx
  int v4; // esi
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  char v7; // di

  m_pEntity = this->m_pEntity;
  result.m_Data = -1;
  if ( m_pEntity != 0 )
  {
    m_pIdentityChunks = g_pEntitySystem->m_EntityList.m_pIdentityChunks;
    v4 = 0x4000;
    while ( 1 )
    {
      v5 = *m_pIdentityChunks;
      if ( *m_pIdentityChunks != 0 )
      {
        if ( m_pEntity >= v5 && m_pEntity < &v5[512] && m_pEntity->m_pId != 0 )
        {
          result.m_Data = v4 - 286331153 * ((m_pEntity - v5) >> 3) - 0x4000;
          if ( result.m_Data >= 0 )
            return result;
        }
        v6 = m_pIdentityChunks[32];
        v7 = 0;
        if ( v6 != 0 )
        {
LABEL_9:
          if ( m_pEntity >= v6 && m_pEntity < &v6[512] && m_pEntity->m_pId != 0 )
          {
            result.m_Data = v4 - 286331153 * ((m_pEntity - v6) >> 3);
            if ( result.m_Data >= 0 )
              return result;
          }
          goto LABEL_13;
        }
      }
      else
      {
        v6 = m_pIdentityChunks[32];
        v7 = 1;
        if ( v6 != 0 )
          goto LABEL_9;
      }
      if ( v7 != 0 )
        return -1;
LABEL_13:
      v4 += 512;
      ++m_pIdentityChunks;
      if ( v4 == 0x8000 )
        return -1;
    }
  }
  return result;
}


// CEntityInstance::IsAuthoritative  (line 102, @0x000000000309b6d0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, IsNetworked
// calls: CEntitySystem::IsServerEntitySystem
// callers: CPointEntity::Spawn, CPointCamera::Spawn, CFogController::Spawn, ent_setname, CFogController::Activate, CInfoWorldLayer::DeleteLayerSpawnGroup, CInfoWorldLayer::SpawnLayerEntityLump, CInfoWorldLayer::SetLayerVisibility, CPointCamera::SetActive, CInfoWorldLayer::SpawnGroupCreationComplete, CBodyGameSystem::OnRestoreHierarchically, CModelPointEntity::Spawn (41 total)
bool __fastcall CEntityInstance::IsAuthoritative(const CEntityInstance *const this)
{
  bool IsServerEntitySystem; // al
  bool v3; // dl
  CEntityIdentity *m_pEntity; // rax
  uint32 m_flags; // edx

  IsServerEntitySystem = CEntitySystem::IsServerEntitySystem(g_pEntitySystem);
  v3 = 1;
  if ( IsServerEntitySystem )
    return v3;
  m_pEntity = this->m_pEntity;
  m_flags = m_pEntity->m_flags;
  if ( (m_flags & 0x800) == 0 )
  {
    v3 = 1;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      return (m_pEntity->m_EHandle.m_Index & 0x7FFF) > 0x3FFF;
    return v3;
  }
  return ((m_flags >> 6) ^ 1) & 1;
}


// CEntityInstance::Connect  (line 118, @0x000000000309a970, libserver.so)
// callers: CBaseEntity::Connect
// globals: g_bReceivedChainedConnect
void __fastcall CEntityInstance::Connect(CEntityInstance *const this)
{
  g_bReceivedChainedConnect = 1;
}


// CEntityInstance::AddedToEntityDatabase  (line 127, @0x000000000309a980, libserver.so)
// callers: CBaseEntity::AddedToEntityDatabase
// globals: g_bReceivedChainedAddedToEntityDatabase
void __fastcall CEntityInstance::AddedToEntityDatabase(CEntityInstance *const this)
{
  g_bReceivedChainedAddedToEntityDatabase = 1;
}


// CEntityInstance::Precache  (line 136, @0x000000000309ce60, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*>, Free, GetVM, operator=, ~CVariantBase
// calls: CScriptComponent::Precache, CScriptPrecacheContext::CScriptPrecacheContext, CScriptPrecacheContext::GetHScript, CScriptPrecacheContext::~CScriptPrecacheContext, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBaseEntity::Precache, CPointClientUIDialog::Precache, CDevtestHierarchy2::Precache, CInfoWorldLayer::Precache, CBaseProp::Precache, CParticleSystem::Precache, CDecal::Precache, CProjectedDecal::Precache, CBaseCombatCharacter::Precache, CAmbientGeneric::Precache, CBaseCombatWeapon::Precache, CBeam::Precache (88 total)
// globals: g_bReceivedChainedPrecache
void __fastcall CEntityInstance::Precache(CEntityInstance *const this, const CEntityPrecacheContext *pContext)
{
  CScriptComponent *m_CScriptComponent; // rdi
  HSCRIPT HScript; // rax
  HSCRIPT m_hScope; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  HSCRIPT v9; // [rsp+10h] [rbp-60h] BYREF
  __int16 v10; // [rsp+18h] [rbp-58h]
  __int16 v11; // [rsp+1Ah] [rbp-56h]
  CScriptPrecacheContext context; // [rsp+20h] [rbp-50h] BYREF

  g_bReceivedChainedPrecache = 1;
  m_CScriptComponent = this->m_CScriptComponent;
  if ( m_CScriptComponent != 0 )
    CScriptComponent::Precache(m_CScriptComponent, this, pContext);
  if ( this->m_iszPrivateVScripts.u.m_Id != 0 )
  {
    (*(this->_vptr_IHandleEntity + 25))(this);
    CScriptPrecacheContext::CScriptPrecacheContext(&context, pContext);
    HScript = CScriptPrecacheContext::GetHScript(&context);
    v11 = 0;
    m_hScope = this->m_hPrivateScope.m_hScope;
    v10 = 31;
    v9 = HScript;
    v7 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "Precache", m_hScope, 1);
    v8 = v7;
    if ( v7 != 0 )
    {
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v7, &v9, 1, 0, 0, 1);
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, v8);
    }
    if ( (v11 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9);
    CScriptPrecacheContext::~CScriptPrecacheContext(&context);
  }
}


// CEntityInstance::Spawn  (line 163, @0x000000000309d410, libserver.so)  // inlines: CVariantBase, Call<HSCRIPT__*>, Free, GetVM, operator=, ~CVariantBase
// calls: CScriptComponent::Spawn, CScriptKeyValues::CScriptKeyValues, CScriptKeyValues::GetHScript, CScriptKeyValues::~CScriptKeyValues, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBaseEntity::Spawn
// globals: g_bReceivedChainedSpawn
void __fastcall CEntityInstance::Spawn(CEntityInstance *const this, const CEntityKeyValues *pKeyValues)
{
  CScriptComponent *m_CScriptComponent; // rdi
  HSCRIPT m_hScope; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  CScriptKeyValues scriptKV; // [rsp+10h] [rbp-40h] BYREF
  HSCRIPT HScript; // [rsp+20h] [rbp-30h] BYREF
  __int16 v10; // [rsp+28h] [rbp-28h]
  __int16 v11; // [rsp+2Ah] [rbp-26h]

  g_bReceivedChainedSpawn = 1;
  m_CScriptComponent = this->m_CScriptComponent;
  if ( m_CScriptComponent != 0 )
    CScriptComponent::Spawn(m_CScriptComponent, this, pKeyValues);
  if ( this->m_hPrivateScope.m_hScope != 0 )
  {
    CScriptKeyValues::CScriptKeyValues(&scriptKV, pKeyValues);
    HScript = CScriptKeyValues::GetHScript(&scriptKV);
    v11 = 0;
    m_hScope = this->m_hPrivateScope.m_hScope;
    v10 = 31;
    v6 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "Spawn", m_hScope, 1);
    v7 = v6;
    if ( v6 != 0 )
    {
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v6, &HScript, 1, 0, 0, 1);
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, v7);
    }
    if ( (v11 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, HScript);
    CScriptKeyValues::~CScriptKeyValues(&scriptKV);
  }
}


// CEntityInstance::Activate  (line 184, @0x000000000309b120, libserver.so)  // inlines: Call, GetVM, operator HSCRIPT
// calls: CScriptComponent::Activate
// callers: CBaseEntity::Activate
// globals: g_bReceivedChainedActivate
void __fastcall CEntityInstance::Activate(CEntityInstance *const this, ActivateType_t activateType)
{
  CScriptComponent *m_CScriptComponent; // rdi
  HSCRIPT m_hScope; // rdx
  __int64 v5; // rax
  __int64 v6; // r12

  g_bReceivedChainedActivate = 1;
  m_CScriptComponent = this->m_CScriptComponent;
  if ( m_CScriptComponent != 0 )
    CScriptComponent::Activate(m_CScriptComponent, this);
  m_hScope = this->m_hPrivateScope.m_hScope;
  if ( m_hScope != 0 )
  {
    v5 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "Activate", m_hScope, 1);
    v6 = v5;
    if ( v5 != 0 )
    {
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v5, 0, 0, 0, 0, 1);
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, v6);
    }
  }
}


// CEntityInstance::PostDataUpdate  (line 204, @0x000000000309a990, libserver.so)
// callers: CBaseAnimating::PostDataUpdate
// globals: g_bReceivedChainedPostDataUpdate
void __fastcall CEntityInstance::PostDataUpdate(CEntityInstance *const this, DataUpdateType_t updateType)
{
  g_bReceivedChainedPostDataUpdate = 1;
}


// CEntityInstance::UpdateOnRemove  (line 213, @0x000000000309b830, libserver.so)  // inlines: Call, DestroyPrivateScriptScope, GetVM, Term, operator HSCRIPT
// calls: CScriptComponent::UpdateOnRemove, CEntityInstance::DestroyPublicScriptScope, CEntitySystem::RemoveEntityFromNameMap, CEntityClass::RemoveFromClassList
// callers: CBaseEntity::UpdateOnRemove
// globals: g_bReceivedChainedRemove
void __fastcall CEntityInstance::UpdateOnRemove(CEntityInstance *const this)
{
  CScriptComponent *m_CScriptComponent; // rdi
  HSCRIPT m_hScope; // rdx
  __int64 v4; // rax
  __int64 v5; // r13
  CEntityIdentity *m_pEntity; // r12

  g_bReceivedChainedRemove = 1;
  m_CScriptComponent = this->m_CScriptComponent;
  if ( m_CScriptComponent != 0 )
    CScriptComponent::UpdateOnRemove(m_CScriptComponent, this);
  m_hScope = this->m_hPrivateScope.m_hScope;
  if ( m_hScope != 0 )
  {
    v4 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "UpdateOnRemove", m_hScope, 1);
    v5 = v4;
    if ( v4 != 0 )
    {
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v4, 0, 0, 0, 0, 1);
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, v5);
    }
  }
  CEntityInstance::DestroyPublicScriptScope(this);
  if ( this->m_hPrivateScope.m_hScope != 0 )
  {
    if ( g_pScriptVM != 0 )
      (*(*g_pScriptVM + 136LL))(g_pScriptVM);
    this->m_hPrivateScope.m_hScope = 0;
  }
  m_pEntity = this->m_pEntity;
  if ( (m_pEntity->m_flags & 0x4000) == 0 )
  {
    CEntitySystem::RemoveEntityFromNameMap(g_pEntitySystem, this->m_pEntity);
    CEntityClass::RemoveFromClassList(this->m_pEntity->m_pClass, m_pEntity);
  }
}


// CEntityInstance::OnSetDormant  (line 248, @0x000000000309a9b0, libserver.so)
// calls: CEntitySystem::AddEntityToNameMap, CEntityClass::AddToClassList, CEntitySystem::RemoveEntityFromNameMap, CEntityClass::RemoveFromClassList
// callers: CBaseEntity::OnSetDormant
// globals: g_bReceivedChainedOnSetDormant
void __fastcall CEntityInstance::OnSetDormant(
        CEntityInstance *const this,
        EntityDormancyType_t nPrevDormancyType,
        EntityDormancyType_t nDormancyType)
{
  CEntityIdentity *m_pEntity; // r12
  CEntityIdentity *v5; // rsi

  g_bReceivedChainedOnSetDormant = 1;
  m_pEntity = this->m_pEntity;
  if ( (nPrevDormancyType == EntityDormancyType_t::ENTITY_DORMANT) != (nDormancyType == EntityDormancyType_t::ENTITY_DORMANT) )
  {
    v5 = this->m_pEntity;
    if ( nDormancyType == EntityDormancyType_t::ENTITY_DORMANT )
    {
      CEntitySystem::RemoveEntityFromNameMap(g_pEntitySystem, v5);
      CEntityClass::RemoveFromClassList(this->m_pEntity->m_pClass, m_pEntity);
    }
    else
    {
      CEntitySystem::AddEntityToNameMap(g_pEntitySystem, v5);
      CEntityClass::AddToClassList(this->m_pEntity->m_pClass, m_pEntity);
    }
  }
}


// CEntityInstance::CreatePublicScriptScope  (line 279, @0x000000000309b740, libserver.so)  // inlines: Init
// calls: CEntityScriptFramework::CreatePublicScriptScope
// callers: ent_call, CBaseEntity::DispatchScriptThink, CTakeDamageInfo::Script_GetAttacker, CTakeDamageInfo::Script_GetInflictor, PlayerInstanceFromIndex, CScriptEntityIterator::First, CScriptEntityIterator::FindByClassnameNearest, CScriptEntityIterator::FindByNameNearest, CScriptConvarAccessor::GetCommandClient, EntIndexToHScript, Script_GetListenServerHost, CScriptConvarAccessor::GetDOTACommandClient (145 total)
void __fastcall CEntityInstance::CreatePublicScriptScope(CEntityInstance *const this, const char *pScriptClassName)
{
  this->m_pEntity->m_hPublicScope.m_hScope = CEntityScriptFramework::CreatePublicScriptScope(
                                               &g_EntityScriptFramework,
                                               this,
                                               pScriptClassName);
}


// CEntityInstance::DestroyPublicScriptScope  (line 285, @0x000000000309b770, libserver.so)  // inlines: Term, operator HSCRIPT
// calls: CEntityScriptFramework::DestroyPublicScriptScope
// callers: CEntityInstance::~CEntityInstance, CEntityInstance::UpdateOnRemove
void __fastcall CEntityInstance::DestroyPublicScriptScope(CEntityInstance *const this)
{
  HSCRIPT m_hScope; // rdx

  m_hScope = this->m_pEntity->m_hPublicScope.m_hScope;
  if ( m_hScope != 0 )
  {
    CEntityScriptFramework::DestroyPublicScriptScope(&g_EntityScriptFramework, this, m_hScope);
    this->m_pEntity->m_hPublicScope.m_hScope = 0;
  }
}


// CEntityInstance::GetScriptClassName  (line 294, @0x000000000309b940, libserver.so)  // inlines: CUtlSymbolLarge, GetScriptClassName
string_t __fastcall CEntityInstance::GetScriptClassName(UtlSymLargeId_t *a1, const CEntityInstance *const this)
{
  CScriptComponent::Storage_t m_CScriptComponent; // rdx
  string_t result; // rax

  m_CScriptComponent = this->m_CScriptComponent;
  result.u.m_Id = a1;
  if ( m_CScriptComponent != 0 )
    *a1 = m_CScriptComponent->m_scriptClassName.u.m_Id;
  else
    *a1 = 0;
  return result;
}


// CEntityInstance::ValidatePrivateScriptScope  (line 302, @0x000000000309c230, libserver.so)  // inlines: CVariantBase, CreatePublicScriptScope, Free, Get, GetPublicScriptScope, GetVM, Init, SetValue, ~CVariantBase
// calls: CEntityScriptFramework::CreatePublicScriptScope, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CLogicScript::Spawn, CPointTemplate::Spawn, CPhysicsProp::Spawn, CSceneEntity::StartEvent, CEntityInstance::RunPrivateScriptFile, CEntityInstance::ScriptGetOrCreatePrivateScriptScope, CEntityInstance::RunPrivateScript
// strings: "thisEntity"
void __fastcall CEntityInstance::ValidatePrivateScriptScope(CEntityInstance *const this)
{
  HSCRIPT v2; // rax
  HSCRIPT m_hScope; // rdx
  HSCRIPT v4; // rsi
  HSCRIPT v5; // [rsp+0h] [rbp-20h] BYREF
  __int16 v6; // [rsp+8h] [rbp-18h]
  __int16 v7; // [rsp+Ah] [rbp-16h]

  if ( this->m_hPrivateScope.m_hScope == 0 )
  {
    v2 = (*(*g_pScriptVM + 120LL))(g_pScriptVM, 0, 0);
    this->m_hPrivateScope.m_hScope = v2;
    if ( v2 != 0 )
    {
      m_hScope = this->m_pEntity->m_hPublicScope.m_hScope;
      if ( m_hScope != 0 )
      {
        v4 = v2;
      }
      else
      {
        this->m_pEntity->m_hPublicScope.m_hScope = CEntityScriptFramework::CreatePublicScriptScope(
                                                     &g_EntityScriptFramework,
                                                     this,
                                                     0);
        v4 = this->m_hPrivateScope.m_hScope;
        m_hScope = this->m_pEntity->m_hPublicScope.m_hScope;
      }
      v5 = m_hScope;
      v7 = 0;
      v6 = 31;
      (*(*g_pScriptVM + 240LL))(g_pScriptVM, v4, "thisEntity", &v5);
      if ( (v7 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5);
    }
  }
}


// CEntityInstance::DestroyPrivateScriptScope  (line 316, @0x000000000309b970, libserver.so)  // inlines: GetVM, Term, operator HSCRIPT
void __fastcall CEntityInstance::DestroyPrivateScriptScope(CEntityInstance *const this)
{
  if ( this->m_hPrivateScope.m_hScope != 0 )
  {
    if ( g_pScriptVM != 0 )
      (*(*g_pScriptVM + 136LL))(g_pScriptVM);
    this->m_hPrivateScope.m_hScope = 0;
  }
}


// CEntityInstance::DumpScriptScopes  (line 328, @0x000000000309d540, libserver.so)  // inlines: AsHScript, CVariantBase, Call<int, HSCRIPT__*>, Free, GetDebugName, GetVM, operator HSCRIPT, operator=, ~CVariantBase
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntityIdentity::GetDebugName, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: ent_script_dump
// strings: "__DumpScope", "----End Script Dump\n", "\tPublic script scope:", "\tPrivate script scope:", "\tNone\n", "----Script Dump for entity \"%s\"\n"
void __fastcall CEntityInstance::DumpScriptScopes(CEntityInstance *const this)
{
  __int64 v2; // rdi
  HSCRIPT m_hScope; // rax
  __int64 v4; // rax
  __int64 v5; // r15
  HSCRIPT *v6; // rbx
  HSCRIPT v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 *v10; // rbx
  const char *DebugName; // rax
  int v12; // [rsp+0h] [rbp-60h] BYREF
  __int64 v13; // [rsp+10h] [rbp-50h] BYREF
  __int16 v14; // [rsp+18h] [rbp-48h]
  __int16 v15; // [rsp+1Ah] [rbp-46h]
  HSCRIPT v16; // [rsp+20h] [rbp-40h] BYREF
  __int16 v17; // [rsp+28h] [rbp-38h]
  __int16 v18; // [rsp+2Ah] [rbp-36h]
  char v19; // [rsp+30h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    LoggingSystem_Log(LOG_VSCRIPT, 1, "----Script Dump for entity \"%s\"\n", DebugName);
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "\tPrivate script scope:");
    v2 = LOG_VSCRIPT;
    if ( this->m_hPrivateScope.m_hScope != 0 )
      goto LABEL_5;
  }
  else
  {
    v2 = LOG_VSCRIPT;
    if ( this->m_hPrivateScope.m_hScope != 0 )
    {
LABEL_5:
      if ( LoggingSystem_IsChannelEnabled(v2, 1) != 0 )
        LoggingSystem_Log(LOG_VSCRIPT, 1, "\n");
      m_hScope = this->m_hPrivateScope.m_hScope;
      v17 = 31;
      v15 = 0;
      v18 = 0;
      v14 = 5;
      v13 = 2;
      v16 = m_hScope;
      v4 = (*(*g_pScriptVM + 144LL))(
             g_pScriptVM,
             "__DumpScope",
             CEntityScriptFramework::sm_GlobalScriptScope.m_hScope,
             1);
      v5 = v4;
      if ( v4 != 0 )
      {
        (*(*g_pScriptVM + 160LL))(g_pScriptVM, v4, &v13, 2, 0, 0, 1);
        (*(*g_pScriptVM + 152LL))(g_pScriptVM, v5);
      }
      v6 = &v16;
      do
      {
        if ( (*(v6 + 10) & 1) != 0 )
        {
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v6);
          *(v6 + 5) &= ~1u;
        }
        v6 -= 2;
        v6[2] = 0;
        *(v6 + 12) = 0;
      }
      while ( v6 != &v12 );
      goto LABEL_13;
    }
  }
  if ( LoggingSystem_IsChannelEnabled(v2, 1) != 0 )
    LoggingSystem_Log(LOG_VSCRIPT, 1, "\tNone\n");
LABEL_13:
  if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
    LoggingSystem_Log(LOG_VSCRIPT, 1, "\tPublic script scope:");
  if ( this->m_pEntity->m_hPublicScope.m_hScope != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
      LoggingSystem_Log(LOG_VSCRIPT, 1, "\n");
    v7 = this->m_pEntity->m_hPublicScope.m_hScope;
    v15 = 0;
    v17 = 31;
    v18 = 0;
    v13 = 2;
    v14 = 5;
    v16 = v7;
    v8 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, "__DumpScope", CEntityScriptFramework::sm_GlobalScriptScope.m_hScope, 1);
    v9 = v8;
    if ( v8 != 0 )
    {
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, v8, &v13, 2, 0, 0, 1);
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, v9);
    }
    v10 = &v19;
    do
    {
      v10 -= 2;
      if ( (*(v10 + 10) & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *v10);
        *(v10 + 5) &= ~1u;
      }
      *v10 = 0;
      *(v10 + 4) = 0;
    }
    while ( v10 != &v13 );
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
  {
    LoggingSystem_Log(LOG_VSCRIPT, 1, "\tNone\n");
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 1) != 0 )
    LoggingSystem_Log(LOG_VSCRIPT, 1, "----End Script Dump\n");
}


// CEntityInstance::ReloadPrivateScripts  (line 355, @0x000000000309c3c0, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, GetDebugName, Purge, PurgeAndDeleteElements, RemoveAll, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase
// calls: V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), LoggingSystem_IsChannelEnabled, CEntityIdentity::GetDebugName, LoggingSystem_Log, CEntityInstance::RunPrivateScriptFile, CUtlMemory<char*, int>::Purge, _Unwind_Resume
// callers: CDOTA_Ability_Lua::ReloadPrivateScripts, CDOTA_Item_Lua::ReloadPrivateScripts
// strings: "%s executing script: %s\n"
void __fastcall CEntityInstance::ReloadPrivateScripts(CEntityInstance *const this)
{
  UtlSymLargeId_t m_Id; // rdi
  __int64 v3; // rbx
  int v4; // r12d
  const char *v5; // r15
  const char *DebugName; // rax
  __int64 v7; // r12
  int v8; // ebx
  char *v9; // rsi
  CUtlStringList szScripts; // [rsp+10h] [rbp-50h] BYREF

  if ( this->m_iszPrivateVScripts.u.m_Id != 0 )
  {
    m_Id = this->m_iszPrivateVScripts.u.m_Id;
    szScripts.m_Size = 0;
    szScripts.m_Memory.m_pMemory = 0;
    szScripts.m_Memory.m_nAllocationCount = 0;
    szScripts.m_Memory.m_nGrowSize = 0;
    V_SplitString(m_Id, " ", &szScripts);
    if ( szScripts.m_Size > 0 )
    {
      v3 = 0;
      v4 = 0;
      do
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 0) != 0 )
        {
          v5 = szScripts.m_Memory.m_pMemory[v3];
          DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
          LoggingSystem_Log(LOG_VSCRIPT, 0, "%s executing script: %s\n", DebugName, v5);
        }
        CEntityInstance::RunPrivateScriptFile(this, szScripts.m_Memory.m_pMemory[v3]);
        ++v4;
        ++v3;
      }
      while ( szScripts.m_Size > v4 );
      if ( szScripts.m_Size > 0 )
      {
        v7 = 0;
        v8 = 0;
        do
        {
          ++v8;
          v9 = szScripts.m_Memory.m_pMemory[v7++];
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v9);
        }
        while ( v8 < szScripts.m_Size );
      }
    }
    szScripts.m_Size = 0;
    if ( (szScripts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<char *,int>::Purge(&szScripts.m_Memory);
      if ( (szScripts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<char *,int>::Purge(&szScripts.m_Memory);
    }
  }
}


// CEntityInstance::RunPrivateScript  (line 370, @0x000000000309c9c0, libserver.so)  // inlines: GetDebugName, GetVM
// calls: CEntityInstance::ValidatePrivateScriptScope, LoggingSystem_IsChannelEnabled, CEntityIdentity::GetDebugName, LoggingSystem_Log
// callers: CEntityInstance::InputRunPrivateScript
// strings: "Entity \"%s\" encountered an error in RunPrivateScript()\n"
bool __fastcall CEntityInstance::RunPrivateScript(
        CEntityInstance *const this,
        const char *pScriptText,
        const char *pDebugFilename)
{
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // r14d
  bool result; // al
  const char *DebugName; // rax

  CEntityInstance::ValidatePrivateScriptScope(this);
  v6 = (*(*g_pScriptVM + 88LL))(g_pScriptVM, pScriptText, pDebugFilename);
  v7 = v6;
  if ( v6 == 0 )
    return 1;
  v8 = (*(*g_pScriptVM + 104LL))(g_pScriptVM, v6, this->m_hPrivateScope.m_hScope, 1);
  (*(*g_pScriptVM + 96LL))(g_pScriptVM, v7);
  if ( v8 != -1 )
    return 1;
  result = LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2);
  if ( result )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    LoggingSystem_Log(LOG_VSCRIPT, 2, "Entity \"%s\" encountered an error in RunPrivateScript()\n", DebugName);
    return 0;
  }
  return result;
}


// CEntityInstance::RecreateScriptHooks  (line 388, @0x000000000309c360, libserver.so)  // inlines: CUtlSymbolLarge, CreatePublicScriptScope, GetHammerSpecifiedPrivateScripts, Init
// calls: CEntityInstance::RunPrivateScriptFile, CEntityScriptFramework::CreatePublicScriptScope
void __fastcall CEntityInstance::RecreateScriptHooks(CEntityInstance *const this, const char *pScriptClassName)
{
  const char *m_pAsString; // rsi

  if ( pScriptClassName != 0 && *pScriptClassName != 0 )
    this->m_pEntity->m_hPublicScope.m_hScope = CEntityScriptFramework::CreatePublicScriptScope(
                                                 &g_EntityScriptFramework,
                                                 this,
                                                 pScriptClassName);
  m_pAsString = this->m_iszPrivateVScripts.u.m_pAsString;
  if ( m_pAsString != 0 )
    CEntityInstance::RunPrivateScriptFile(this, m_pAsString);
}


// CEntityInstance::AcceptInput  (line 402, @0x000000000309b9b0, libserver.so)  // inlines: AcceptInput, CUtlSymbolLarge
// calls: CEntitySystem::AllocPooledString, CEntityIdentity::AcceptInput
// callers: CBaseEntity::Script_Trigger, CDynamicProp::HandleAnimEvent, CLoopModeGameToolHooks::OnToolFireEntityInput, CBasePlayer::PlayerUse, CAI_Expresser::FireEntIOFromResponse, CInteractionManager::StartInteraction, CInteractionManager::StopInteraction, ExplosionCreate, CGunTarget::Wait, CSceneManager::PauseActorsScenes, CSceneManager::ResumeActorsScenes, CTankTargetChange::Use (24 total)
bool __fastcall CEntityInstance::AcceptInput(
        CEntityInstance *const this,
        const char *pInputName,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        const CVariant *const value,
        int nOutputID)
{
  CEntityIdentity *m_pEntity; // rdi
  string_t inputName; // [rsp+10h] [rbp-40h]
  string_t v14; // [rsp+20h] [rbp-30h] BYREF

  CEntitySystem::AllocPooledString(g_pEntitySystem, pInputName);
  m_pEntity = this->m_pEntity;
  v14.u.m_Id = inputName.u.m_Id;
  return CEntityIdentity::AcceptInput(m_pEntity, &v14, pActivator, pCaller, value, nOutputID);
}


// CEntityInstance::FireOutputInternal  (line 410, @0x000000000309ba80, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FindEntityIOOutputsByName, FireOutput<CVariantBase<CVariantDefaultAllocator> >, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityIdentity::FindEntityIOOutputsByName, CEntityIOOutput::FireOutputInternal, CUtlMemory<CEntityIOOutput*, int>::Purge, CUtlVectorBase<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CEntityInstance::ScriptFireOutput
void __fastcall CEntityInstance::FireOutputInternal(
        CEntityInstance *const this,
        const char *pOutputName,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        const CVariant *const value,
        float flDelay)
{
  CEntityIdentity *m_pEntity; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // r15
  CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > outputs; // [rsp+10h] [rbp-50h] BYREF

  m_pEntity = this->m_pEntity;
  outputs.m_Size = 0;
  outputs.m_Memory.m_pMemory = 0;
  outputs.m_Memory.m_nAllocationCount = 0;
  outputs.m_Memory.m_nGrowSize = 0;
  CEntityIdentity::FindEntityIOOutputsByName(m_pEntity, pOutputName, &outputs);
  if ( outputs.m_Size > 0 )
  {
    v10 = 0;
    v11 = 8LL * (outputs.m_Size - 1) + 8;
    do
    {
      CEntityIOOutput::FireOutputInternal(outputs.m_Memory.m_pMemory[v10 / 8], pActivator, pCaller, value, flDelay);
      v10 += 8LL;
    }
    while ( v10 != v11 );
  }
  outputs.m_Size = 0;
  if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
    if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
  }
}


// CEntityInstance::CallScriptFunction  (line 452, @0x000000000309cfa0, libserver.so)  // inlines: CVariantBase, Call, Call<CScriptAccessorT<CEntityFrameScriptAccessorBase, true> >, Call<CScriptAccessorT<CEntityFrameScriptAccessorBase, true>, HSCRIPT__*>, Call<HSCRIPT__*>, CreatePublicScriptScope, Free, Get, GetPublicScriptScope, GetVM, Init, IsInitialized, LookupFunction, ReleaseFunction, operator HSCRIPT, operator=, ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, CEntityScriptFramework::CreatePublicScriptScope, _Unwind_Resume
// callers: CBreakableProp::OnBreak, ent_call, CBaseEntity::DrawDebugTextOverlays, CItemGeneric::AutoRemoveThink, CItemGeneric::DoPickup, CItemGeneric::Spawn, CDOTA_Ability_Nian_Roar::OnChannelThink, CDOTA_Ability_Nian_Roar::OnSpellStart, CEntityInstance::InputCallScriptFunction, CEntityInstance::InputCallPrivateScriptFunction, CEntityInstance::InputCallGlobalScriptFunction
bool __fastcall CEntityInstance::CallScriptFunction(
        CEntityInstance *const this,
        CallScriptFunctionBehavior_t behavior,
        const char *pFunctionName,
        ScriptVariant_t *pFunctionReturn,
        HSCRIPT hScriptArgument)
{
  IScriptVM *v5; // rbx
  __int64 v7; // r9
  HSCRIPT m_hScope; // rdx
  __int64 v11; // rax
  __int64 v12; // r15
  IScriptVM *v14; // rdi
  CEntityIdentity *m_pEntity; // rax
  HSCRIPT v16; // rbx
  CVariantBase<CVariantDefaultAllocator> *v17; // rbx
  HSCRIPT v18; // r15
  __int64 v19; // r14
  HSCRIPT v20; // rax
  HSCRIPT v21; // rbx
  CVariantBase<CVariantDefaultAllocator> v24; // [rsp+20h] [rbp-50h] BYREF
  CVariantBase<CVariantDefaultAllocator> v25; // [rsp+30h] [rbp-40h] BYREF
  char v26; // [rsp+40h] [rbp-30h] BYREF

  v5 = g_pScriptVM;
  if ( g_pScriptVM == 0 )
    return 0;
  v7 = behavior;
  if ( behavior == CallScriptFunctionBehavior_t::CALL_SCRIPT_FUNCTION_GLOBAL_ONLY )
  {
    v14 = g_pScriptVM;
    goto LABEL_10;
  }
  m_hScope = this->m_hPrivateScope.m_hScope;
  if ( m_hScope != 0 )
  {
    v11 = (*(*g_pScriptVM + 144LL))(g_pScriptVM, pFunctionName, m_hScope, 1, hScriptArgument, behavior);
    v7 = behavior;
    v12 = v11;
    if ( v11 != 0 )
    {
      if ( hScriptArgument != 0 )
      {
        v24.m_flags = 0;
        v24.m_type = 31;
        v24.m_uint64 = hScriptArgument;
        (*(*g_pScriptVM + 160LL))(g_pScriptVM, v11, &v24, 1, pFunctionReturn, 0, 1);
        if ( (v24.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v24.m_uint64);
      }
      else
      {
        (*(*g_pScriptVM + 160LL))(g_pScriptVM, v11, 0, 0, pFunctionReturn, 0, 1);
      }
LABEL_8:
      (*(*g_pScriptVM + 152LL))(g_pScriptVM, v12);
      return 1;
    }
  }
  if ( v7 != 0 )
  {
    v14 = g_pScriptVM;
LABEL_10:
    v12 = (*(*v14 + 144LL))(
            v14,
            pFunctionName,
            CEntityScriptFramework::sm_GlobalScriptScope.m_hScope,
            1,
            hScriptArgument,
            v7);
    if ( v12 != 0 )
    {
      m_pEntity = this->m_pEntity;
      if ( hScriptArgument != 0 )
      {
        v16 = m_pEntity->m_hPublicScope.m_hScope;
        if ( v16 == 0 )
        {
          this->m_pEntity->m_hPublicScope.m_hScope = CEntityScriptFramework::CreatePublicScriptScope(
                                                       &g_EntityScriptFramework,
                                                       this,
                                                       0);
          v16 = this->m_pEntity->m_hPublicScope.m_hScope;
        }
        v24.m_type = 0;
        v24.m_flags = 0;
        v24.m_uint64 = 0;
        v25.m_type = 0;
        v25.m_flags = 0;
        v25.m_uint64 = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v24);
        v24.m_uint64 = v16;
        v24.m_type = 31;
        CVariantBase<CVariantDefaultAllocator>::Free(&v25);
        v25.m_uint64 = hScriptArgument;
        v25.m_type = 31;
        (*(*g_pScriptVM + 160LL))(g_pScriptVM, v12, &v24, 2, pFunctionReturn, 0, 1);
        v17 = &v26;
        do
        {
          --v17;
          if ( (v17->m_flags & 1) != 0 )
          {
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v17->m_uint64);
            v17->m_flags &= ~1u;
          }
          v17->m_uint64 = 0;
          v17->m_type = 0;
        }
        while ( v17 != &v24 );
      }
      else
      {
        v20 = m_pEntity->m_hPublicScope.m_hScope;
        if ( v20 != 0 )
        {
          v21 = v20;
        }
        else
        {
          this->m_pEntity->m_hPublicScope.m_hScope = CEntityScriptFramework::CreatePublicScriptScope(
                                                       &g_EntityScriptFramework,
                                                       this,
                                                       0);
          v21 = this->m_pEntity->m_hPublicScope.m_hScope;
        }
        v24.m_uint64 = 0;
        v24.m_type = 0;
        v24.m_flags = 0;
        CVariantBase<CVariantDefaultAllocator>::Free(&v24);
        v24.m_uint64 = v21;
        v24.m_type = 31;
        (*(*g_pScriptVM + 160LL))(g_pScriptVM, v12, &v24, 1, pFunctionReturn, 0, 1);
        CVariantBase<CVariantDefaultAllocator>::Free(&v24);
      }
      goto LABEL_8;
    }
  }
  v18 = this->m_pEntity->m_hPublicScope.m_hScope;
  if ( v18 == 0 )
    return 0;
  v19 = (*(*v5 + 144LL))(v5, pFunctionName, v18, 0);
  if ( v19 == 0 )
    return 0;
  if ( hScriptArgument != 0 )
  {
    v24.m_uint64 = 0;
    v24.m_type = 0;
    v24.m_flags = 0;
    CVariantBase<CVariantDefaultAllocator>::Free(&v24);
    v24.m_uint64 = hScriptArgument;
    v24.m_type = 31;
    (*(*v5 + 160LL))(v5, v19, &v24, 1, pFunctionReturn, v18, 1);
    CVariantBase<CVariantDefaultAllocator>::Free(&v24);
  }
  else
  {
    (*(*v5 + 160LL))(v5, v19, 0, 0, pFunctionReturn, v18, 1);
  }
  (*(*v5 + 152LL))(v5, v19);
  return 1;
}


// CEntityInstance::RunPrivateScriptFile  (line 538, @0x000000000309c310, libserver.so)  // inlines: Get, GetPrivateScriptScope
// calls: CEntityScriptFramework::RunScript, CEntityInstance::ValidatePrivateScriptScope
// callers: CEntityInstance::RecreateScriptHooks, CEntityInstance::ReloadPrivateScripts, CEntityInstance::InputRunPrivateScriptFile
bool __fastcall CEntityInstance::RunPrivateScriptFile(CEntityInstance *const this, const char *pScriptFile)
{
  HSCRIPT m_hScope; // rdx
  const char *pScriptFilea; // [rsp+8h] [rbp-18h]

  m_hScope = this->m_hPrivateScope.m_hScope;
  if ( m_hScope == 0 )
  {
    pScriptFilea = pScriptFile;
    CEntityInstance::ValidatePrivateScriptScope(this);
    m_hScope = this->m_hPrivateScope.m_hScope;
    pScriptFile = pScriptFilea;
  }
  return CEntityScriptFramework::RunScript(&g_EntityScriptFramework, pScriptFile, m_hScope, 1);
}


// CEntityInstance::ScriptFireOutput  (line 544, @0x000000000309fbd0, libserver.so)  // inlines: HScriptToEntity<CEntityInstance>
// calls: GetScriptDesc<CEntityInstance>, CEntityInstance::FireOutputInternal
void __fastcall CEntityInstance::ScriptFireOutput(
        CEntityInstance *const this,
        const char *pOutputName,
        HSCRIPT hActivator,
        HSCRIPT hCaller,
        const CVariant *const value,
        float flDelay)
{
  __int64 (__fastcall *v9)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *Script; // rax
  __int64 v11; // rax
  CEntityInstance *v12; // rbx
  __int64 (__fastcall *v13)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r13
  ScriptClassDesc_t *v14; // rax
  __int64 v15; // rax
  CEntityInstance *v16; // rcx
  float flDelaya; // [rsp+Ch] [rbp-44h]
  float flDelayb; // [rsp+Ch] [rbp-44h]

  if ( hActivator != 0 )
  {
    flDelaya = flDelay;
    v9 = *(*g_pScriptVM + 208LL);
    Script = GetScriptDesc<CEntityInstance>(0);
    v11 = v9(g_pScriptVM, hActivator, Script);
    flDelay = flDelaya;
    v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  if ( hCaller != 0 )
  {
    flDelayb = flDelay;
    v13 = *(*g_pScriptVM + 208LL);
    v14 = GetScriptDesc<CEntityInstance>(0);
    v15 = v13(g_pScriptVM, hCaller, v14);
    flDelay = flDelayb;
    v16 = v15;
  }
  else
  {
    v16 = 0;
  }
  if ( v12 == 0 )
    v12 = this;
  if ( v16 == 0 )
    v16 = this;
  CEntityInstance::FireOutputInternal(this, pOutputName, v12, v16, value, flDelay);
}


// CEntityInstance::RemoveSelf  (line 561, @0x000000000309aa30, libserver.so)  // inlines: GetClassNameAsCStr, GetEHandle, GetEntityIndex, GetEntryIndex, IdentityIndexInChunk, IdentityToIndex, IsNetworked, String
// calls: CEntitySystem::IsServerEntitySystem, CEntitySystem::QueueDestroyEntity, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "Tried to destroy (from script) a networked entity (%d/%s) on the client, the server contr
void __fastcall CEntityInstance::RemoveSelf(CEntityInstance *const this)
{
  CEntityIdentity *m_pEntity; // rdx
  uint32 m_flags; // eax
  CEntityIdentity *v4; // rdx
  const char *m_pAsString; // r8
  int v6; // esi
  CEntityIdentity **m_pIdentityChunks; // rax
  CEntityIdentity *v8; // rcx
  int v9; // ecx
  CEntityIdentity *v10; // rcx
  char v11; // di

  if ( CEntitySystem::IsServerEntitySystem(g_pEntitySystem) )
    goto LABEL_5;
  m_pEntity = this->m_pEntity;
  m_flags = m_pEntity->m_flags;
  if ( (m_flags & 0x800) != 0 )
  {
    if ( (m_flags & 0x40) == 0 )
    {
LABEL_5:
      CEntitySystem::QueueDestroyEntity(g_pEntitySystem, this);
      return;
    }
  }
  else if ( m_pEntity->m_EHandle.m_Index == -1 || (m_pEntity->m_EHandle.m_Index & 0x7FFF) > 0x3FFF )
  {
    goto LABEL_5;
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) == 0 )
    return;
  v4 = this->m_pEntity;
  m_pAsString = "";
  if ( v4->m_designerName.u.m_Id != 0 )
    m_pAsString = v4->m_designerName.u.m_pAsString;
  v6 = 0x4000;
  m_pIdentityChunks = g_pEntitySystem->m_EntityList.m_pIdentityChunks;
  do
  {
    v8 = *m_pIdentityChunks;
    if ( *m_pIdentityChunks != 0 )
    {
      if ( v4 >= v8 && v4 < &v8[512] && v4->m_pId != 0 )
      {
        v9 = v6 - 286331153 * ((v4 - v8) >> 3) - 0x4000;
        if ( v9 >= 0 )
          goto LABEL_23;
      }
      v10 = m_pIdentityChunks[32];
      v11 = 0;
      if ( v10 != 0 )
      {
LABEL_17:
        if ( v4 >= v10 && v4 < &v10[512] && v4->m_pId != 0 )
        {
          v9 = v6 - 286331153 * ((v4 - v10) >> 3);
          if ( v9 >= 0 )
            goto LABEL_23;
        }
        goto LABEL_21;
      }
    }
    else
    {
      v10 = m_pIdentityChunks[32];
      v11 = 1;
      if ( v10 != 0 )
        goto LABEL_17;
    }
    if ( v11 != 0 )
      break;
LABEL_21:
    v6 += 512;
    ++m_pIdentityChunks;
  }
  while ( v6 != 0x8000 );
  v9 = -1;
LABEL_23:
  LoggingSystem_Log(
    LOG_VSCRIPT,
    2,
    "Tried to destroy (from script) a networked entity (%d/%s) on the client, the server controls lifespan, ignoring\n",
    v9,
    m_pAsString);
}


// CEntityInstance::GetIntAttr  (line 574, @0x000000000309aeb0, libserver.so)  // inlines: Attribute_GetIntValue, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, Compare, FindEntry_Inline, Find_Inline, GetEntityAttributes, GetIntValue, GetValue<int>, Hash, Head, MakeStringToken
// calls: MurmurHash2LowerCase, operator new, RegisterStringToken
int __fastcall CEntityInstance::GetIntAttr(CEntityInstance *const this, const char *pAttrName)
{
  int v4; // ebx
  CEntityIdentity *m_pEntity; // r12
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *m_pAttributes; // rax
  int m_nCurrentTableSize; // r13d
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v8; // r11
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *i; // r12
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::HashTable_t *v10; // rdi
  int v11; // edx
  int m_key; // ecx
  __int64 m_value; // rdx
  int v14; // ecx
  uint32 v16; // eax
  uint32 v17; // [rsp+Ch] [rbp-24h]

  v4 = 0;
  if ( pAttrName != 0 && *pAttrName != 0 )
  {
    v16 = MurmurHash2LowerCase(pAttrName, 0x31415926u);
    if ( g_bUpdateStringTokenDatabase )
    {
      v17 = v16;
      RegisterStringToken(v16, pAttrName, 0, 1);
      v16 = v17;
    }
    m_pEntity = this->m_pEntity;
    v4 = v16 & 0x7FFFFFF;
    m_pAttributes = m_pEntity->m_pAttributes;
    if ( m_pAttributes != 0 )
      goto LABEL_4;
    goto LABEL_22;
  }
  m_pEntity = this->m_pEntity;
  m_pAttributes = m_pEntity->m_pAttributes;
  if ( m_pAttributes == 0 )
  {
LABEL_22:
    m_pAttributes = operator new(0x38u);
    m_pAttributes->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    m_pAttributes->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    m_pAttributes->m_hashTable.m_nNumKeysDeleted = 0;
    m_pAttributes->m_hashTable.m_nCurrentTableSize = 64;
    m_pAttributes->m_hashTable.m_nDeletedKeyValue = -1;
    m_pAttributes->m_hashTable.m_nEmptyKeyValue = -2;
    m_pAttributes->m_pParentTable = 0;
    m_pEntity->m_pAttributes = m_pAttributes;
  }
LABEL_4:
  m_nCurrentTableSize = m_pAttributes->m_hashTable.m_nCurrentTableSize;
  v8 = m_pAttributes;
  for ( i = m_pAttributes->m_hashTable.m_tables.m_pHead; ; i = v8->m_hashTable.m_tables.m_pHead )
  {
LABEL_5:
    v10 = i;
    if ( i != 0 )
    {
      while ( 2 )
      {
        v11 = (m_nCurrentTableSize - 1) & v4;
        do
        {
          m_key = v10->m_entries[v11].m_key;
          if ( ((m_key ^ v4) & 0x7FFFFFF) == 0 )
          {
            m_value = v10->m_entries[v11].m_value;
            if ( m_key < 0 )
              return *(&m_pAttributes->m_pOwningObject->m_pInstance + m_value);
            if ( m_key == v4 )
              return m_value;
            v14 = m_key & 0x78000000;
            if ( v14 == 0 )
              return m_value;
            if ( v14 != 0x8000000 )
              goto LABEL_5;
            return *&m_value;
          }
          if ( m_key == v8->m_hashTable.m_nEmptyKeyValue )
            break;
          v11 = (m_nCurrentTableSize - 1) & (v11 + 1);
        }
        while ( ((m_nCurrentTableSize - 1) & v4) != v11 );
        v10 = v10->m_pNext;
        if ( v10 != 0 )
          continue;
        break;
      }
    }
    v8 = v8->m_pParentTable;
    if ( v8 == 0 )
      break;
    m_nCurrentTableSize = v8->m_hashTable.m_nCurrentTableSize;
  }
  return 0;
}


// CEntityInstance::SetIntAttr  (line 581, @0x000000000309e9c0, libserver.so)  // inlines: Attribute_SetIntValue, CThreadFastMutex, CUtlIntrusiveList, CUtlTSOpenHash, CUtlTSOpenHashConcurrencyModelLockFree, GetEntityAttributes, MakeStringToken, SetIntValue, SetValue<int>
// calls: CUtlTSOpenHash<unsigned int, unsigned int, 64, CUtlMaskedIntHashMethod, CUtlTSOpenHashConcurrencyModelLockFree>::Insert, MurmurHash2LowerCase, operator new, RegisterStringToken
void __fastcall CEntityInstance::SetIntAttr(CEntityInstance *const this, const char *pAttrName, int val)
{
  unsigned int v6; // esi
  CEntityIdentity *m_pEntity; // rbx
  size_t m_pAttributes; // rdi
  uint32 v9; // eax
  CUtlObjectAttributeTable<CEntityIdentity,CUtlStringToken> *v10; // rax
  unsigned int v11; // [rsp+Ch] [rbp-24h]
  uint32 v12; // [rsp+Ch] [rbp-24h]

  v6 = 0;
  if ( pAttrName == 0 || *pAttrName == 0 )
  {
    m_pEntity = this->m_pEntity;
    m_pAttributes = m_pEntity->m_pAttributes;
    if ( m_pAttributes != 0 )
      goto LABEL_4;
LABEL_8:
    LOBYTE(m_pAttributes) = 56;
    v11 = v6;
    v10 = operator new(m_pAttributes);
    v6 = v11;
    v10->m_hashTable.m_tables.m_pHead = 0;
    m_pAttributes = v10;
    v10->m_hashTable.m_concurrencyModel.m_mutex.m_ownerID = 0;
    v10->m_hashTable.m_concurrencyModel.m_mutex.m_depth = 0;
    v10->m_hashTable.m_nNumKeysDeleted = 0;
    v10->m_hashTable.m_nCurrentTableSize = 64;
    v10->m_hashTable.m_nDeletedKeyValue = -1;
    v10->m_hashTable.m_nEmptyKeyValue = -2;
    v10->m_pParentTable = 0;
    m_pEntity->m_pAttributes = v10;
    goto LABEL_4;
  }
  v9 = MurmurHash2LowerCase(pAttrName, 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
  {
    v12 = v9;
    RegisterStringToken(v9, pAttrName, 0, 1);
    v9 = v12;
  }
  m_pEntity = this->m_pEntity;
  v6 = v9 & 0x7FFFFFF;
  m_pAttributes = m_pEntity->m_pAttributes;
  if ( m_pAttributes == 0 )
    goto LABEL_8;
LABEL_4:
  CUtlTSOpenHash<unsigned int,unsigned int,64,CUtlMaskedIntHashMethod,CUtlTSOpenHashConcurrencyModelLockFree>::Insert(
    (m_pAttributes + 8),
    v6,
    val,
    0);
}


// CEntityInstance::ConnectOutputToScriptSelf  (line 587, @0x000000000309fbc0, libserver.so)
// calls: CEntityInstance::ConnectOutputToScript
void __fastcall CEntityInstance::ConnectOutputToScriptSelf(
        CEntityInstance *const this,
        const char *pszOutput,
        const char *pszScriptFunc)
{
  CEntityInstance::ConnectOutputToScript(this, pszOutput, pszScriptFunc, 0);
}


// CEntityInstance::ConnectOutputToScript  (line 594, @0x000000000309f970, libserver.so)  // inlines: AddConnection, CEntityHandle, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, EntityIOConnectionDesc_t, EntityIOConnection_t, FindEntityIOOutputsByName, GetEHandle, GetEntryIndex, GetSerialNumber, HScriptToEntity<CEntityInstance>, Purge, RemoveAll, Set, memcpy, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityIdentity::FindEntityIOOutputsByName, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, EntityIOConnectionDesc_t::EntityIOConnectionDesc_t, GetScriptDesc<CEntityInstance>, operator new, CUtlMemory<CEntityIOOutput*, int>::Purge, CUtlVectorBase<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CEntityInstance::ConnectOutputToScriptSelf
// strings: "Script failed to find output \"%s\"\n", "CallScriptFunction"
void __fastcall CEntityInstance::ConnectOutputToScript(
        CEntityInstance *const this,
        const char *pszOutput,
        const char *pszScriptFunc,
        HSCRIPT hEntity)
{
  CEntityIdentity *m_pEntity; // rdi
  CEntityIOOutput *v8; // r12
  __int64 (__fastcall *v9)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int16 v14; // cx
  EntityIOConnection_t *v15; // rax
  __int64 v16; // rdx
  CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > outputs; // [rsp+0h] [rbp-80h] BYREF
  EntityIOConnectionDesc_t desc; // [rsp+20h] [rbp-60h] BYREF

  outputs.m_Size = 0;
  m_pEntity = this->m_pEntity;
  outputs.m_Memory.m_pMemory = 0;
  outputs.m_Memory.m_nAllocationCount = 0;
  outputs.m_Memory.m_nGrowSize = 0;
  CEntityIdentity::FindEntityIOOutputsByName(m_pEntity, pszOutput, &outputs);
  if ( outputs.m_Size != 0 )
  {
    v8 = *outputs.m_Memory.m_pMemory;
    EntityIOConnectionDesc_t::EntityIOConnectionDesc_t(
      &desc,
      EntityIOTargetType_t::ENTITY_IO_TARGET_EHANDLE,
      0,
      "CallScriptFunction",
      pszScriptFunc,
      -1,
      0.0);
    if ( hEntity != 0 )
    {
      v9 = *(*g_pScriptVM + 208LL);
      Script = GetScriptDesc<CEntityInstance>(0);
      v11 = v9(g_pScriptVM, hEntity, Script);
      if ( v11 != 0 && (v12 = *(v11 + 8)) != 0 )
      {
        v13 = (*(v12 + 16) >> 15) - (*(v12 + 48) & 1);
        v14 = 0x7FFF;
        if ( *(v12 + 16) != -1 )
          v14 = *(v12 + 16) & 0x7FFF;
        LOWORD(desc.m_hTarget.m_Index) = v14 | desc.m_hTarget.m_Index & 0x8000;
        desc.m_hTarget.m_Index = (v13 << 15) | desc.m_hTarget.m_Index & 0x7FFF;
      }
      else
      {
        desc.m_hTarget.m_Index = -1;
      }
    }
    v15 = operator new(0x38u);
    v15->m_targetDesc.u.m_Id = 0;
    v15->m_targetInput.u.m_Id = 0;
    v15->m_valueOverride.u.m_Id = 0;
    v15->m_hTarget.m_Index = -1;
    v15->m_targetDesc.u.m_Id = desc.m_targetDesc.u.m_Id;
    outputs.m_Size = 0;
    v15->m_targetInput.u.m_Id = desc.m_targetInput.u.m_Id;
    v15->m_valueOverride.u.m_Id = desc.m_valueOverride.u.m_Id;
    *&v15->m_hTarget.m_Index = *&desc.m_hTarget.m_Index;
    v16 = *&desc.m_nTimesToFire;
    v15->m_bMarkedForRemoval = 0;
    *&v15->m_nTimesToFire = v16;
    v15->m_pNext = v8->m_pConnections;
    v8->m_pConnections = v15;
    if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
      if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_14;
    }
  }
  else
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 0) != 0 )
      LoggingSystem_Log(LOG_VSCRIPT, 0, "Script failed to find output \"%s\"\n", pszOutput);
    outputs.m_Size = 0;
    if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
      if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_14:
        CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
    }
  }
}


// CEntityInstance::DisconnectOutputFromScriptSelf  (line 622, @0x00000000030a0020, libserver.so)
// calls: CEntityInstance::DisconnectOutputFromScript
void __fastcall CEntityInstance::DisconnectOutputFromScriptSelf(
        CEntityInstance *const this,
        const char *pszOutput,
        const char *pszScriptFunc)
{
  CEntityInstance::DisconnectOutputFromScript(this, pszOutput, pszScriptFunc, 0);
}


// CEntityInstance::DisconnectOutputFromScript  (line 629, @0x000000000309fcb0, libserver.so)  // inlines: CEntityHandle, CGameString, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, FindEntityIOOutputsByName, Get, GetEHandle, GetEntryIndex, GetSerialNumber, HScriptToEntity<CEntityInstance>, Init, IsNullString, IsValid, Purge, RemoveAll, Set, String, _V_strcmp, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityIdentity::FindEntityIOOutputsByName, GetScriptDesc<CEntityInstance>, CEntityIOOutput::GetActionForTargetEntity, CEntitySystem::AllocPooledString, strcmp, CEntityIOOutput::RemoveConnection, CUtlMemory<CEntityIOOutput*, int>::Purge, DevMsg, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit, CUtlVectorBase<CEntityIOOutput*, CUtlMemory<CEntityIOOutput*, int> >::~CUtlVectorBase (13 total)
// callers: CEntityInstance::DisconnectOutputFromScriptSelf
// strings: "Script failed to find output \"%s\"\n", "CallScriptFunction"
// globals: `guard variable for'CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc, CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc, __dso_handle, CGameString::~CGameString()
void __fastcall CEntityInstance::DisconnectOutputFromScript(
        CEntityInstance *const this,
        const char *pszOutput,
        const char *pszScriptFunc,
        HSCRIPT hEntity)
{
  CEntityIdentity *m_pEntity; // rdi
  int m_Size; // eax
  __int64 v8; // rbx
  int v9; // r12d
  __int64 (__fastcall *v10)(IScriptVM *, HSCRIPT, ScriptClassDesc_t *); // r15
  ScriptClassDesc_t *Script; // rax
  CEntityInstance *v12; // rax
  CEntityIdentity *v13; // rdx
  int v14; // eax
  __int16 v15; // cx
  int v16; // eax
  EntityIOConnectionHandle_t ActionForTargetEntity; // r13
  UtlSymLargeId_t m_Id; // rax
  const char *v19; // rdi
  UtlSymLargeId_t v22; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > outputs; // [rsp+30h] [rbp-50h] BYREF

  m_pEntity = this->m_pEntity;
  outputs.m_Size = 0;
  outputs.m_Memory.m_pMemory = 0;
  outputs.m_Memory.m_nAllocationCount = 0;
  outputs.m_Memory.m_nGrowSize = 0;
  CEntityIdentity::FindEntityIOOutputsByName(m_pEntity, pszOutput, &outputs);
  m_Size = outputs.m_Size;
  if ( outputs.m_Size == 0 )
  {
    DevMsg(2, "Script failed to find output \"%s\"\n", pszOutput);
    outputs.m_Size = 0;
    if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      goto LABEL_30;
    return;
  }
  if ( `guard variable for'CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc == 0 )
  {
    if ( __cxa_guard_acquire(&`guard variable for'CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc) != 0 )
    {
      CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc.m_iszString.u.m_Id = 0;
      CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc.m_pszString = "CallScriptFunction";
      *(&CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc + 4) &= 0x80000000;
      __cxa_guard_release(&`guard variable for'CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc);
      __cxa_atexit(
        CGameString::~CGameString,
        &CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc,
        &_dso_handle);
    }
    m_Size = outputs.m_Size;
  }
  if ( m_Size <= 0 )
  {
LABEL_26:
    outputs.m_Size = 0;
    if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
      if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        goto LABEL_28;
    }
    return;
  }
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    if ( hEntity != 0 )
    {
      v10 = *(*g_pScriptVM + 208LL);
      Script = GetScriptDesc<CEntityInstance>(0);
      v12 = v10(g_pScriptVM, hEntity, Script);
      if ( v12 == 0 )
        goto LABEL_23;
    }
    else
    {
      v12 = this;
    }
    v13 = v12->m_pEntity;
    if ( v13 == 0 )
    {
LABEL_23:
      v16 = -1;
      goto LABEL_12;
    }
    v14 = (v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1);
    v15 = 0x7FFF;
    if ( v13->m_EHandle.m_Index != -1 )
      v15 = v13->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v22) = v15 | v22 & 0x8000;
    v16 = (v14 << 15) | v22 & 0x7FFF;
LABEL_12:
    LODWORD(v22) = v16;
    ActionForTargetEntity = CEntityIOOutput::GetActionForTargetEntity(outputs.m_Memory.m_pMemory[v8], &v22);
    if ( ActionForTargetEntity != 0 )
    {
      m_Id = CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc.m_iszString.u.m_Id;
      if ( CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc.m_iszString.u.m_Id == 0
        || (*(&CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc + 4)
          & 0x7FFFFFFF) != CGameString::gm_iSerialNumber )
      {
        if ( CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc.m_pszString != 0 )
        {
          CEntitySystem::AllocPooledString(
            g_pEntitySystem,
            CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc.m_pszString);
          CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc.m_iszString.u.m_Id = v22;
          *(&CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc + 4) = CGameString::gm_iSerialNumber & 0x7FFFFFFF | *(&CEntityInstance::DisconnectOutputFromScript(char const*,char const*,HSCRIPT__ *)::scriptFunc + 4) & 0x80000000;
          m_Id = v22;
        }
        else
        {
          m_Id = 0;
        }
      }
      if ( m_Id == *(ActionForTargetEntity + 1) )
      {
        v19 = *(ActionForTargetEntity + 2);
        if ( v19 == 0 )
          v19 = "";
        if ( strcmp(v19, pszScriptFunc) == 0 )
          break;
      }
    }
    ++v9;
    ++v8;
    if ( outputs.m_Size <= v9 )
      goto LABEL_26;
  }
  CEntityIOOutput::RemoveConnection(outputs.m_Memory.m_pMemory[v8], ActionForTargetEntity);
  outputs.m_Size = 0;
  if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return;
LABEL_30:
  CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
  if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_28:
    CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
}


// CEntityInstance::ScriptGetEHandle  (line 655, @0x000000000309b050, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init
int *__fastcall CEntityInstance::ScriptGetEHandle(int *a1, CEntityInstance *const this)
{
  int *result; // rax
  CEntityIdentity *m_pEntity; // rcx
  int v4; // edx
  __int16 v5; // si
  __int64 v6; // [rsp-8h] [rbp-8h]

  result = a1;
  if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
  {
    v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v5 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    *(&v6 - 8) = v5 | *(&v6 - 2) & 0x8000;
    *a1 = (v4 << 15) | *(&v6 - 2) & 0x7FFF;
  }
  else
  {
    *a1 = -1;
  }
  return result;
}


// CEntityInstance::ScriptGetEntityIndex  (line 662, @0x000000000309b1c0, libserver.so)  // inlines: GetEntityIndex, IdentityIndexInChunk, IdentityToIndex
int __fastcall CEntityInstance::ScriptGetEntityIndex(CEntityInstance *const this)
{
  CEntityIdentity *m_pEntity; // rcx
  int result; // eax
  CEntityIdentity **m_pIdentityChunks; // rdx
  int v4; // esi
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  char v7; // di

  m_pEntity = this->m_pEntity;
  result = -1;
  if ( m_pEntity != 0 )
  {
    m_pIdentityChunks = g_pEntitySystem->m_EntityList.m_pIdentityChunks;
    v4 = 0x4000;
    while ( 1 )
    {
      v5 = *m_pIdentityChunks;
      if ( *m_pIdentityChunks != 0 )
      {
        if ( m_pEntity >= v5 && m_pEntity < &v5[512] && m_pEntity->m_pId != 0 )
        {
          result = v4 - 286331153 * ((m_pEntity - v5) >> 3) - 0x4000;
          if ( result >= 0 )
            return result;
        }
        v6 = m_pIdentityChunks[32];
        v7 = 0;
        if ( v6 != 0 )
        {
LABEL_9:
          if ( m_pEntity >= v6 && m_pEntity < &v6[512] && m_pEntity->m_pId != 0 )
          {
            result = v4 - 286331153 * ((m_pEntity - v6) >> 3);
            if ( result >= 0 )
              return result;
          }
          goto LABEL_13;
        }
      }
      else
      {
        v6 = m_pIdentityChunks[32];
        v7 = 1;
        if ( v6 != 0 )
          goto LABEL_9;
      }
      if ( v7 != 0 )
        return -1;
LABEL_13:
      v4 += 512;
      ++m_pIdentityChunks;
      if ( v4 == 0x8000 )
        return -1;
    }
  }
  return result;
}


// CEntityInstance::ScriptGetPublicScriptScope  (line 667, @0x000000000309b0c0, libserver.so)  // inlines: operator HSCRIPT
HSCRIPT __fastcall CEntityInstance::ScriptGetPublicScriptScope(CEntityInstance *const this)
{
  return this->m_pEntity->m_hPublicScope.m_hScope;
}


// CEntityInstance::ScriptGetOrCreatePublicScriptScope  (line 673, @0x000000000309b0d0, libserver.so)  // inlines: CreatePublicScriptScope, Get, GetPublicScriptScope, Init
// calls: CEntityScriptFramework::CreatePublicScriptScope
HSCRIPT __fastcall CEntityInstance::ScriptGetOrCreatePublicScriptScope(CEntityInstance *const this)
{
  HSCRIPT result; // rax

  result = this->m_pEntity->m_hPublicScope.m_hScope;
  if ( result == 0 )
  {
    this->m_pEntity->m_hPublicScope.m_hScope = CEntityScriptFramework::CreatePublicScriptScope(
                                                 &g_EntityScriptFramework,
                                                 this,
                                                 0);
    return this->m_pEntity->m_hPublicScope.m_hScope;
  }
  return result;
}


// CEntityInstance::ScriptGetPrivateScriptScope  (line 679, @0x000000000309a9a0, libserver.so)
HSCRIPT __fastcall CEntityInstance::ScriptGetPrivateScriptScope(CEntityInstance *const this)
{
  return this->m_hPrivateScope.m_hScope;
}


// CEntityInstance::ScriptGetOrCreatePrivateScriptScope  (line 685, @0x000000000309c990, libserver.so)  // inlines: Get, GetPrivateScriptScope
// calls: CEntityInstance::ValidatePrivateScriptScope
HSCRIPT __fastcall CEntityInstance::ScriptGetOrCreatePrivateScriptScope(CEntityInstance *const this)
{
  HSCRIPT result; // rax

  result = this->m_hPrivateScope.m_hScope;
  if ( result == 0 )
  {
    CEntityInstance::ValidatePrivateScriptScope(this);
    return this->m_hPrivateScope.m_hScope;
  }
  return result;
}


// CEntityInstance::InputAddOutput  (line 740, @0x000000000309bb80, libserver.so)  // inlines: AddConnection, AssignTo, CEntityHandle, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, EntityIOConnectionDesc_t, EntityIOConnection_t, FindEntityIOOutputsByName, GetDebugName, ParseAddOutputParam, Purge, RemoveAll, TempString, ToString, V_strcpy_safe<260ul>, VariantFieldTypeName, atoi, memcpy, strchr, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: _V_strncpy, strchr, V_atof, strtol, EntityIOConnectionDesc_t::Init, CEntityIdentity::FindEntityIOOutputsByName, operator new, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, V_snprintf, Warning, CUtlMemory<CEntityIOOutput*, int>::Purge (16 total)
// strings: "AddOutput fired with bad string. Format: outputname>targetname>inputname>parameter>delay>, "%g %g %g %g", "js_array", "No conversion from %s to string at the moment!\n", "AddOutput fired on entity \"%s\" with unknown output name \"%s\"\n", "true" (25 total)
// globals: jpt_309BBCF, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_309C0E3
void __fastcall CEntityInstance::InputAddOutput(CEntityInstance *const this, inputdata2_t *const inputdata)
{
  const CVariant *value; // rdx
  int16 m_type; // ax
  float *m_uint64; // rsi
  char *v6; // rax
  const char *v7; // r13
  char *v8; // rax
  const char *v9; // r14
  char *v10; // rax
  char *v11; // rax
  char *v12; // rax
  char *v13; // rbx
  int v14; // eax
  CEntityIdentity *m_pEntity; // rdi
  unsigned __int64 v16; // r12
  __int64 v17; // r15
  CEntityIOOutput *v18; // r14
  EntityIOConnection_t *v19; // rax
  __int64 v20; // rdx
  const char *v21; // rsi
  const char *DebugName; // rax
  double m_float; // xmm0_8
  const char *v24; // rcx
  const char *v25; // rdx
  bool v26; // zf
  char *flDelay; // [rsp+10h] [rbp-1A0h]
  float flDelaya; // [rsp+10h] [rbp-1A0h]
  char *pValueOverride; // [rsp+18h] [rbp-198h]
  CUtlVector<CEntityIOOutput*,CUtlMemory<CEntityIOOutput*,int> > outputs; // [rsp+20h] [rbp-190h] BYREF
  EntityIOConnectionDesc_t desc; // [rsp+40h] [rbp-170h] BYREF
  char pOutputName[264]; // [rsp+70h] [rbp-140h] BYREF
  unsigned __int64 v33; // [rsp+178h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  value = inputdata->value;
  m_type = value->m_type;
  if ( m_type == 30 )
  {
    m_uint64 = value->m_uint64;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_20;
      case 1:
        m_float = value->m_float;
        goto LABEL_26;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *value->m_pszString,
          *(value->m_uint64 + 4),
          *(value->m_uint64 + 8));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *value->m_pszString,
          *(value->m_uint64 + 4),
          *(value->m_uint64 + 8),
          *(value->m_uint64 + 12));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", value->m_uint);
        goto LABEL_33;
      case 6:
        v26 = value->m_char == 0;
        v24 = "true";
        v25 = "%s";
        if ( v26 )
          v24 = "false";
        goto LABEL_28;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", value->m_char);
        goto LABEL_33;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          value->m_int,
          BYTE1(value->m_int),
          BYTE2(value->m_int),
          HIBYTE(value->m_int));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *value->m_pszString,
          *(value->m_uint64 + 4));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", value->m_uint64);
        goto LABEL_29;
      case 33:
        v24 = value->m_uint64;
        v25 = "%llu";
LABEL_28:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v25, v24);
LABEL_29:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = value->m_float64;
LABEL_26:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", value->m_uint);
LABEL_33:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        switch ( m_type )
        {
          case 0:
            v21 = "void";
            break;
          case 1:
            v21 = "float";
            break;
          case 3:
            v21 = "vector";
            break;
          case 4:
            v21 = "quaternion";
            break;
          case 5:
            v21 = "integer";
            break;
          case 6:
            v21 = "boolean";
            break;
          case 8:
            v21 = "character";
            break;
          case 9:
            v21 = "color";
            break;
          case 13:
            v21 = "ehandle";
            break;
          case 25:
            v21 = "vector2d";
            break;
          case 26:
            v21 = "int64";
            break;
          case 27:
            v21 = "vector4d";
            break;
          case 28:
            v21 = "resourcehandle";
            break;
          case 31:
            v21 = "hscript";
            break;
          case 32:
            v21 = "variant";
            break;
          case 33:
            v21 = "uint64";
            break;
          case 34:
            v21 = "float64";
            break;
          case 37:
            v21 = "unsigned";
            break;
          case 38:
            v21 = "utlstringtoken";
            break;
          case 39:
            v21 = "qangle";
            break;
          case 48:
            v21 = "hscript_lightbinding";
            break;
          case 49:
            v21 = "js_value";
            break;
          case 50:
            v21 = "js_object";
            break;
          case 51:
            v21 = "js_array";
            break;
          case 52:
            v21 = "js_raw_args";
            break;
          default:
            v21 = "unknown_variant_type";
            break;
        }
        Warning("No conversion from %s to string at the moment!\n", v21);
LABEL_20:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  _V_strncpy(pOutputName, m_uint64, 260);
  memset(&desc, 0, 24);
  desc.m_hTarget.m_Index = -1;
  v6 = strchr(pOutputName, 62);
  if ( v6 == 0 )
    goto LABEL_14;
  v7 = v6 + 1;
  *v6 = 0;
  v8 = strchr(v6 + 1, 62);
  if ( v8 == 0 )
    goto LABEL_14;
  v9 = v8 + 1;
  *v8 = 0;
  v10 = strchr(v8 + 1, 62);
  if ( v10 == 0 )
    goto LABEL_14;
  *v10 = 0;
  pValueOverride = v10 + 1;
  v11 = strchr(v10 + 1, 62);
  if ( v11 != 0 && (*v11 = 0, flDelay = v11 + 1, v12 = strchr(v11 + 1, 62), v13 = v12, v12 != 0) )
  {
    *v12 = 0;
    flDelaya = V_atof(flDelay);
    v14 = strtol(v13 + 1, 0, 10);
    EntityIOConnectionDesc_t::Init(
      &desc,
      EntityIOTargetType_t::ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME,
      v7,
      v9,
      pValueOverride,
      v14,
      flDelaya);
    m_pEntity = this->m_pEntity;
    outputs.m_Size = 0;
    outputs.m_Memory.m_pMemory = 0;
    outputs.m_Memory.m_nAllocationCount = 0;
    outputs.m_Memory.m_nGrowSize = 0;
    CEntityIdentity::FindEntityIOOutputsByName(m_pEntity, pOutputName, &outputs);
    if ( outputs.m_Size <= 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
      {
        DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
        LoggingSystem_Log(
          LOG_ENTITY_SYSTEM,
          2,
          "AddOutput fired on entity \"%s\" with unknown output name \"%s\"\n",
          DebugName,
          pOutputName);
      }
    }
    else
    {
      v16 = 0;
      v17 = 8LL * (outputs.m_Size - 1) + 8;
      do
      {
        v18 = outputs.m_Memory.m_pMemory[v16 / 8];
        v19 = operator new(0x38u);
        v19->m_targetDesc.u.m_Id = 0;
        v16 += 8LL;
        v19->m_targetInput.u.m_Id = 0;
        v19->m_valueOverride.u.m_Id = 0;
        v19->m_hTarget.m_Index = -1;
        v19->m_targetDesc.u.m_Id = desc.m_targetDesc.u.m_Id;
        v19->m_targetInput.u.m_Id = desc.m_targetInput.u.m_Id;
        v19->m_valueOverride.u.m_Id = desc.m_valueOverride.u.m_Id;
        *&v19->m_hTarget.m_Index = *&desc.m_hTarget.m_Index;
        v20 = *&desc.m_nTimesToFire;
        v19->m_bMarkedForRemoval = 0;
        *&v19->m_nTimesToFire = v20;
        v19->m_pNext = v18->m_pConnections;
        v18->m_pConnections = v19;
      }
      while ( v16 != v17 );
    }
    outputs.m_Size = 0;
    if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
      if ( (outputs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIOOutput *,int>::Purge(&outputs.m_Memory);
    }
  }
  else
  {
LABEL_14:
    if ( LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        2,
        "AddOutput fired with bad string. Format: outputname>targetname>inputname>parameter>delay>max times to fire (-1 == infinite)\n");
  }
}


// CEntityInstance::InputRunPrivateScriptFile  (line 774, @0x000000000309c590, libserver.so)  // inlines: AssignTo, TempString, ToString, VariantFieldTypeName
// calls: CEntityInstance::RunPrivateScriptFile, V_snprintf, Warning
// strings: "%g %g %g %g", "js_array", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false" (23 total)
// globals: jpt_309C5C5, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_309C858
void __fastcall CEntityInstance::InputRunPrivateScriptFile(CEntityInstance *const this, inputdata2_t *const inputdata)
{
  const CVariant *value; // rdx
  int16 m_type; // ax
  const char *m_uint64; // rsi
  const char *v6; // rsi
  const char *v7; // rcx
  double m_float; // xmm0_8

  value = inputdata->value;
  m_type = value->m_type;
  if ( m_type != 30 )
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_9;
      case 1:
        m_float = value->m_float;
        goto LABEL_20;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *value->m_pszString,
          *(value->m_uint64 + 4),
          *(value->m_uint64 + 8));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *value->m_pszString,
          *(value->m_uint64 + 4),
          *(value->m_uint64 + 8),
          *(value->m_uint64 + 12));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 5:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", value->m_uint);
        goto LABEL_12;
      case 6:
        v7 = "true";
        if ( value->m_char == 0 )
          v7 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v7);
        goto LABEL_12;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", value->m_char);
        goto LABEL_12;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          value->m_int,
          BYTE1(value->m_int),
          BYTE2(value->m_int),
          HIBYTE(value->m_int));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *value->m_pszString,
          *(value->m_uint64 + 4));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 26:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", value->m_uint64);
        goto LABEL_12;
      case 33:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", value->m_uint64);
        goto LABEL_12;
      case 34:
        m_float = value->m_float64;
LABEL_20:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 37:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", value->m_uint);
LABEL_12:
        CEntityInstance::RunPrivateScriptFile(this, &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf);
        return;
      default:
        switch ( m_type )
        {
          case 0:
            v6 = "void";
            break;
          case 1:
            v6 = "float";
            break;
          case 3:
            v6 = "vector";
            break;
          case 4:
            v6 = "quaternion";
            break;
          case 5:
            v6 = "integer";
            break;
          case 6:
            v6 = "boolean";
            break;
          case 8:
            v6 = "character";
            break;
          case 9:
            v6 = "color";
            break;
          case 13:
            v6 = "ehandle";
            break;
          case 25:
            v6 = "vector2d";
            break;
          case 26:
            v6 = "int64";
            break;
          case 27:
            v6 = "vector4d";
            break;
          case 28:
            v6 = "resourcehandle";
            break;
          case 31:
            v6 = "hscript";
            break;
          case 32:
            v6 = "variant";
            break;
          case 33:
            v6 = "uint64";
            break;
          case 34:
            v6 = "float64";
            break;
          case 37:
            v6 = "unsigned";
            break;
          case 38:
            v6 = "utlstringtoken";
            break;
          case 39:
            v6 = "qangle";
            break;
          case 48:
            v6 = "hscript_lightbinding";
            break;
          case 49:
            v6 = "js_value";
            break;
          case 50:
            v6 = "js_object";
            break;
          case 51:
            v6 = "js_array";
            break;
          case 52:
            v6 = "js_raw_args";
            break;
          default:
            v6 = "unknown_variant_type";
            break;
        }
        Warning("No conversion from %s to string at the moment!\n", v6);
LABEL_9:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
    }
  }
  m_uint64 = value->m_uint64;
LABEL_4:
  CEntityInstance::RunPrivateScriptFile(this, m_uint64);
}


// CEntityInstance::InputRunPrivateScript  (line 783, @0x000000000309ca70, libserver.so)  // inlines: AssignTo, TempString, ToString, VariantFieldTypeName
// calls: CEntityInstance::RunPrivateScript, V_snprintf, Warning
// strings: "InputRunPrivateScript", "%g %g %g %g", "js_array", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true" (24 total)
// globals: jpt_309CAA5, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_309CD28
void __fastcall CEntityInstance::InputRunPrivateScript(CEntityInstance *const this, inputdata2_t *const inputdata)
{
  const CVariant *value; // rdx
  int16 m_type; // ax
  float *m_uint64; // rsi
  const char *v6; // rsi
  const char *v7; // rcx
  double m_float; // xmm0_8

  value = inputdata->value;
  m_type = value->m_type;
  if ( m_type == 30 )
  {
    m_uint64 = value->m_uint64;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_9;
      case 1:
        m_float = value->m_float;
        goto LABEL_20;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *value->m_pszString,
          *(value->m_uint64 + 4),
          *(value->m_uint64 + 8));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *value->m_pszString,
          *(value->m_uint64 + 4),
          *(value->m_uint64 + 8),
          *(value->m_uint64 + 12));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", value->m_uint);
        goto LABEL_12;
      case 6:
        v7 = "true";
        if ( value->m_char == 0 )
          v7 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v7);
        goto LABEL_16;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", value->m_char);
        goto LABEL_12;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          value->m_int,
          BYTE1(value->m_int),
          BYTE2(value->m_int),
          HIBYTE(value->m_int));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *value->m_pszString,
          *(value->m_uint64 + 4));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", value->m_uint64);
        goto LABEL_16;
      case 33:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", value->m_uint64);
LABEL_16:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = value->m_float64;
LABEL_20:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", value->m_uint);
LABEL_12:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        switch ( m_type )
        {
          case 0:
            v6 = "void";
            break;
          case 1:
            v6 = "float";
            break;
          case 3:
            v6 = "vector";
            break;
          case 4:
            v6 = "quaternion";
            break;
          case 5:
            v6 = "integer";
            break;
          case 6:
            v6 = "boolean";
            break;
          case 8:
            v6 = "character";
            break;
          case 9:
            v6 = "color";
            break;
          case 13:
            v6 = "ehandle";
            break;
          case 25:
            v6 = "vector2d";
            break;
          case 26:
            v6 = "int64";
            break;
          case 27:
            v6 = "vector4d";
            break;
          case 28:
            v6 = "resourcehandle";
            break;
          case 31:
            v6 = "hscript";
            break;
          case 32:
            v6 = "variant";
            break;
          case 33:
            v6 = "uint64";
            break;
          case 34:
            v6 = "float64";
            break;
          case 37:
            v6 = "unsigned";
            break;
          case 38:
            v6 = "utlstringtoken";
            break;
          case 39:
            v6 = "qangle";
            break;
          case 48:
            v6 = "hscript_lightbinding";
            break;
          case 49:
            v6 = "js_value";
            break;
          case 50:
            v6 = "js_object";
            break;
          case 51:
            v6 = "js_array";
            break;
          case 52:
            v6 = "js_raw_args";
            break;
          default:
            v6 = "unknown_variant_type";
            break;
        }
        Warning("No conversion from %s to string at the moment!\n", v6);
LABEL_9:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  CEntityInstance::RunPrivateScript(this, m_uint64, "InputRunPrivateScript");
}


// CEntityInstance::PutInputDataInScriptTable  (line 792, @0x000000000309dd80, libserver.so)  // inlines: AssignTo, CVariantBase, CreatePublicScriptScope, CreateTableFromKeyValues, Free, Get, GetPublicScriptScope, GetVM, Init, TempString, ToString, V_memcpy, VariantFieldTypeName, memcpy, strchr, ~CVariantBase
// calls: strchr, memcpy, V_sprintf_safe<1024ul>, KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromBuffer, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, KeyValues::deleteThis, Recursive_ConvertKeyValuesToTable, V_snprintf, Warning (18 total)
// callers: CEntityInstance::InputCallScriptFunction, CEntityInstance::InputCallPrivateScriptFunction, CEntityInstance::InputCallGlobalScriptFunction
// strings: "value { %s }", "outputid", "Encountered malformed keys in call to CallScriptFunction : \"%s\"!\n", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true" (26 total)
// globals: jpt_309DDDC, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_309E588
void __fastcall CEntityInstance::PutInputDataInScriptTable(
        CEntityInstance *const this,
        inputdata2_t *const inputdata,
        bool bIgnoreValue,
        CEntityInstance::InputDataForScriptTable_t *pData)
{
  const CVariant *v6; // rdx
  IScriptVM *v7; // rbx
  int16 m_type; // ax
  float *m_uint64; // r13
  char *v10; // rax
  char *v11; // r14
  int v12; // r8d
  const char *v13; // rax
  HSCRIPT v14; // r14
  CEntityInstance *pActivator; // rax
  HSCRIPT m_hScope; // rax
  CEntityInstance *pCaller; // rax
  HSCRIPT v18; // rax
  int nOutputID; // edx
  void (__fastcall *v20)(IScriptVM *, HSCRIPT, const char *, HSCRIPT *); // rax
  bool v21; // zf
  const CVariant *v22; // rdi
  const char *v23; // rcx
  const char *v24; // rsi
  double m_float; // xmm0_8
  const char *v26; // rcx
  const char *v27; // rdx
  CEntityInstance *pInstance; // [rsp+18h] [rbp-498h]
  void (__fastcall *v29)(IScriptVM *, HSCRIPT, char *, HSCRIPT *); // [rsp+20h] [rbp-490h]
  void (__fastcall *v30)(IScriptVM *, HSCRIPT, const char *, HSCRIPT *); // [rsp+20h] [rbp-490h]
  HSCRIPT hValue; // [rsp+28h] [rbp-488h]
  CEntityInstance *v32; // [rsp+30h] [rbp-480h]
  __int64 nCounta; // [rsp+38h] [rbp-478h]
  KeyValues *nCount; // [rsp+38h] [rbp-478h]
  ScriptVariant_t value; // [rsp+40h] [rbp-470h] BYREF
  ScriptVariant_t table; // [rsp+50h] [rbp-460h] BYREF
  HSCRIPT v37; // [rsp+60h] [rbp-450h] BYREF
  __int16 v38; // [rsp+68h] [rbp-448h]
  __int16 v39; // [rsp+6Ah] [rbp-446h]
  char pTempBuf2[1024]; // [rsp+70h] [rbp-440h] BYREF
  unsigned __int64 v41; // [rsp+478h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  v6 = inputdata->value;
  v7 = g_pScriptVM;
  m_type = v6->m_type;
  if ( m_type == 30 )
  {
    m_uint64 = v6->m_uint64;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_37;
      case 1:
        m_float = v6->m_float;
        goto LABEL_43;
      case 3:
      case 39:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *v6->m_pszString,
          *(v6->m_uint64 + 4),
          *(v6->m_uint64 + 8));
        break;
      case 4:
      case 27:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *v6->m_pszString,
          *(v6->m_uint64 + 4),
          *(v6->m_uint64 + 8),
          *(v6->m_uint64 + 12));
        break;
      case 5:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", v6->m_uint);
        goto LABEL_51;
      case 6:
        v21 = v6->m_char == 0;
        v26 = "true";
        v27 = "%s";
        if ( v21 )
          v26 = "false";
        goto LABEL_47;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", v6->m_char);
        goto LABEL_51;
      case 9:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          v6->m_int,
          BYTE1(v6->m_int),
          BYTE2(v6->m_int),
          HIBYTE(v6->m_int));
        break;
      case 25:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *v6->m_pszString,
          *(v6->m_uint64 + 4));
        break;
      case 26:
        v26 = v6->m_uint64;
        v27 = "%lld";
LABEL_47:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v27, v26);
        goto LABEL_48;
      case 33:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", v6->m_uint64);
LABEL_48:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = v6->m_float64;
LABEL_43:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", v6->m_uint);
LABEL_51:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        switch ( m_type )
        {
          case 0:
            v24 = "void";
            break;
          case 1:
            v24 = "float";
            break;
          case 3:
            v24 = "vector";
            break;
          case 4:
            v24 = "quaternion";
            break;
          case 5:
            v24 = "integer";
            break;
          case 6:
            v24 = "boolean";
            break;
          case 8:
            v24 = "character";
            break;
          case 9:
            v24 = "color";
            break;
          case 13:
            v24 = "ehandle";
            break;
          case 25:
            v24 = "vector2d";
            break;
          case 26:
            v24 = "int64";
            break;
          case 27:
            v24 = "vector4d";
            break;
          case 28:
            v24 = "resourcehandle";
            break;
          case 31:
            v24 = "hscript";
            break;
          case 32:
            v24 = "variant";
            break;
          case 33:
            v24 = "uint64";
            break;
          case 34:
            v24 = "float64";
            break;
          case 37:
            v24 = "unsigned";
            break;
          case 38:
            v24 = "utlstringtoken";
            break;
          case 39:
            v24 = "qangle";
            break;
          case 48:
            v24 = "hscript_lightbinding";
            break;
          case 49:
            v24 = "js_value";
            break;
          case 50:
            v24 = "js_object";
            break;
          case 51:
            v24 = "js_array";
            break;
          case 52:
            v24 = "js_raw_args";
            break;
          default:
            v24 = "unknown_variant_type";
            break;
        }
        Warning("No conversion from %s to string at the moment!\n", v24);
LABEL_37:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  pData->m_pFunctionName = m_uint64;
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  v10 = strchr(m_uint64, 59);
  v11 = v10;
  if ( v10 != 0 )
  {
    v12 = v10 - m_uint64;
    if ( v10 - m_uint64 < 0 )
      __debugbreak();
    nCounta = v12;
    v13 = memcpy(pData->m_pTempBuf, m_uint64, v12);
    pData->m_pTempBuf[nCounta] = 0;
    pData->m_pFunctionName = v13;
    V_sprintf_safe<1024ul>(pTempBuf2, "value { %s }", v11 + 1);
    nCount = KeyValues::operator new(0x14u);
    KeyValues::KeyValues(nCount, "");
    if ( KeyValues::LoadFromBuffer(nCount, "value", pTempBuf2, 0, 0, 0, 0) )
    {
      if ( nCount != 0 )
      {
        (*(*v7 + 264LL))(v7, &value);
        hValue = 0;
        if ( value.m_uint64 != 0 )
        {
          Recursive_ConvertKeyValuesToTable(nCount, v7, value.m_hScript);
          hValue = value.m_uint64;
        }
      }
      else
      {
        hValue = 0;
      }
    }
    else
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_VSCRIPT, 2) != 0 )
      {
        v22 = inputdata->value;
        if ( v22->m_type == 30 )
        {
          v23 = v22->m_uint64;
        }
        else
        {
          CVariantBase<CVariantDefaultAllocator>::AssignTo(
            v22,
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            0x200u);
          v23 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        }
        LoggingSystem_Log(LOG_VSCRIPT, 2, "Encountered malformed keys in call to CallScriptFunction : \"%s\"!\n", v23);
      }
      KeyValues::deleteThis(nCount);
      nCount = 0;
      hValue = 0;
    }
  }
  else
  {
    hValue = 0;
    nCount = 0;
  }
  table.m_type = 0;
  table.m_flags = 0;
  table.m_uint64 = 0;
  (*(*v7 + 264LL))(v7, &table);
  v14 = table.m_uint64;
  v29 = *(*v7 + 240LL);
  pActivator = inputdata->pActivator;
  v32 = pActivator;
  if ( pActivator != 0 )
  {
    m_hScope = pActivator->m_pEntity->m_hPublicScope.m_hScope;
    if ( m_hScope == 0 )
    {
      v32->m_pEntity->m_hPublicScope.m_hScope = CEntityScriptFramework::CreatePublicScriptScope(
                                                  &g_EntityScriptFramework,
                                                  v32,
                                                  0);
      m_hScope = v32->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  else
  {
    m_hScope = 0;
  }
  v37 = m_hScope;
  v38 = 31;
  v39 = 0;
  v29(v7, v14, "activator", &v37);
  if ( (v39 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v37);
  v30 = *(*v7 + 240LL);
  pCaller = inputdata->pCaller;
  pInstance = pCaller;
  if ( pCaller != 0 )
  {
    v18 = pCaller->m_pEntity->m_hPublicScope.m_hScope;
    if ( v18 == 0 )
    {
      pInstance->m_pEntity->m_hPublicScope.m_hScope = CEntityScriptFramework::CreatePublicScriptScope(
                                                        &g_EntityScriptFramework,
                                                        pInstance,
                                                        0);
      v18 = pInstance->m_pEntity->m_hPublicScope.m_hScope;
    }
  }
  else
  {
    v18 = 0;
  }
  v37 = v18;
  v38 = 31;
  v39 = 0;
  v30(v7, v14, "caller", &v37);
  if ( (v39 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v37);
  (*(*v7 + 240LL))(v7, v14, "value", &value);
  nOutputID = inputdata->nOutputID;
  v20 = *(*v7 + 240LL);
  v38 = 5;
  v39 = 0;
  LODWORD(v37) = nOutputID;
  v20(v7, v14, "outputid", &v37);
  if ( (v39 & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v37);
  pData->m_hTable = v14;
  v21 = (table.m_flags & 1) == 0;
  pData->m_hValue = hValue;
  pData->m_pKeyValues = nCount;
  if ( !v21 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, table.m_uint64);
    table.m_flags &= ~1u;
  }
  table.m_uint64 = 0;
  table.m_type = 0;
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CEntityInstance::CleanupInputDataForScriptTable  (line 843, @0x000000000309ba20, libserver.so)  // inlines: GetVM
// calls: KeyValues::deleteThis
// callers: CEntityInstance::InputCallScriptFunction, CEntityInstance::InputCallPrivateScriptFunction, CEntityInstance::InputCallGlobalScriptFunction
void __fastcall CEntityInstance::CleanupInputDataForScriptTable(
        CEntityInstance *const this,
        CEntityInstance::InputDataForScriptTable_t *pData)
{
  IScriptVM *v3; // rbx
  KeyValues *m_pKeyValues; // rdi

  v3 = g_pScriptVM;
  (*(*g_pScriptVM + 136LL))(g_pScriptVM, pData->m_hTable);
  (*(*v3 + 136LL))(v3, pData->m_hValue);
  m_pKeyValues = pData->m_pKeyValues;
  if ( m_pKeyValues != 0 )
    KeyValues::deleteThis(m_pKeyValues);
}


// CEntityInstance::InputCallScriptFunction  (line 857, @0x000000000309e750, libserver.so)  // inlines: GetDebugName, GetVM
// calls: CEntityInstance::PutInputDataInScriptTable, CEntityInstance::CallScriptFunction, CEntityInstance::CleanupInputDataForScriptTable, LoggingSystem_IsChannelEnabled, CEntityIdentity::GetDebugName, LoggingSystem_Log, __stack_chk_fail
// strings: "Entity I/O attempted to invoke unknown private or global script function \"%s\" on entity
void __fastcall CEntityInstance::InputCallScriptFunction(CEntityInstance *const this, inputdata2_t *const inputdata)
{
  const char *DebugName; // rax
  CEntityInstance::InputDataForScriptTable_t data; // [rsp+0h] [rbp-150h] BYREF
  unsigned __int64 v5; // [rsp+128h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  if ( g_pScriptVM != 0 )
  {
    CEntityInstance::PutInputDataInScriptTable(this, inputdata, 1, &data);
    if ( !CEntityInstance::CallScriptFunction(
            this,
            CallScriptFunctionBehavior_t::CALL_SCRIPT_FUNCTION_PRIVATE_AND_GLOBAL,
            data.m_pFunctionName,
            0,
            data.m_hTable)
      && LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
    {
      DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
      LoggingSystem_Log(
        LOG_ENTITY_SYSTEM,
        2,
        "Entity I/O attempted to invoke unknown private or global script function \"%s\" on entity \"%s\"!\n",
        data.m_pFunctionName,
        DebugName);
    }
    CEntityInstance::CleanupInputDataForScriptTable(this, &data);
  }
}


// CEntityInstance::InputCallPrivateScriptFunction  (line 874, @0x000000000309e830, libserver.so)  // inlines: GetDebugName
// calls: CEntityInstance::PutInputDataInScriptTable, CEntityInstance::CallScriptFunction, CEntityInstance::CleanupInputDataForScriptTable, LoggingSystem_IsChannelEnabled, CEntityIdentity::GetDebugName, LoggingSystem_Log, __stack_chk_fail
// strings: "Entity I/O attempted to invoke unknown private script function \"%s\" on entity \"%s\"!\n
void __fastcall CEntityInstance::InputCallPrivateScriptFunction(
        CEntityInstance *const this,
        inputdata2_t *const inputdata)
{
  const char *DebugName; // rax
  CEntityInstance::InputDataForScriptTable_t data; // [rsp+0h] [rbp-150h] BYREF
  unsigned __int64 v5; // [rsp+128h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  CEntityInstance::PutInputDataInScriptTable(this, inputdata, 1, &data);
  if ( !CEntityInstance::CallScriptFunction(
          this,
          CallScriptFunctionBehavior_t::CALL_SCRIPT_FUNCTION_PRIVATE_ONLY,
          data.m_pFunctionName,
          0,
          data.m_hTable)
    && LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    LoggingSystem_Log(
      LOG_ENTITY_SYSTEM,
      2,
      "Entity I/O attempted to invoke unknown private script function \"%s\" on entity \"%s\"!\n",
      data.m_pFunctionName,
      DebugName);
  }
  CEntityInstance::CleanupInputDataForScriptTable(this, &data);
}


// CEntityInstance::InputCallGlobalScriptFunction  (line 887, @0x000000000309e900, libserver.so)
// calls: CEntityInstance::PutInputDataInScriptTable, CEntityInstance::CallScriptFunction, CEntityInstance::CleanupInputDataForScriptTable, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, __stack_chk_fail
// strings: "Entity I/O attempted to invoke unknown global script function \"%s\"!\n"
void __fastcall CEntityInstance::InputCallGlobalScriptFunction(
        CEntityInstance *const this,
        inputdata2_t *const inputdata)
{
  CEntityInstance::InputDataForScriptTable_t data; // [rsp+0h] [rbp-150h] BYREF
  unsigned __int64 v4; // [rsp+128h] [rbp-28h]

  v4 = __readfsqword(0x28u);
  CEntityInstance::PutInputDataInScriptTable(this, inputdata, 1, &data);
  if ( !CEntityInstance::CallScriptFunction(
          this,
          CallScriptFunctionBehavior_t::CALL_SCRIPT_FUNCTION_GLOBAL_ONLY,
          data.m_pFunctionName,
          0,
          data.m_hTable)
    && LoggingSystem_IsChannelEnabled(LOG_ENTITY_SYSTEM, 2) != 0 )
  {
    LoggingSystem_Log(
      LOG_ENTITY_SYSTEM,
      2,
      "Entity I/O attempted to invoke unknown global script function \"%s\"!\n",
      data.m_pFunctionName);
  }
  CEntityInstance::CleanupInputDataForScriptTable(this, &data);
}


