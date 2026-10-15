// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/bodycomponent.cpp:43
class CEntityComponentHelperFactory_CBodyComponent : CEntityComponentHelpers {
	CEntityComponentHelperFactory_CBodyComponent();

	// sizeof = 1
};

// src/game/shared/bodycomponent.cpp:45
class CEntityComponentHelperFactory_CBodyComponentSkeletonInstance : CEntityComponentHelpers {
	CEntityComponentHelperFactory_CBodyComponentSkeletonInstance();

	// sizeof = 1
};

// src/game/shared/bodycomponent.cpp:47
class CEntityComponentHelperFactory_CBodyComponentPoint : CEntityComponentHelpers {
	CEntityComponentHelperFactory_CBodyComponentPoint();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GetScriptDesc<CBodyComponent>  (line 23, @0x0000000001ebd8e0, libserver.so)  // inlines: AddParameterType, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<ScriptFunctionBinding_t>, Element, Finalize, GrowMemory, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CBodyComponent*, CBodyComponent, HSequence, char const*>, ScriptDeduceFunctionSignature<CBodyComponent*, CBodyComponent, HSequence>, ScriptDeduceFunctionSignature<CBodyComponent*, CBodyComponent, bool>, ScriptDeduceFunctionSignature<CBodyComponent*, CBodyComponent, float, char const*>, ScriptDeduceFunctionSignature<CBodyComponent*, CBodyComponent, void, CUtlStringToken>, ScriptDeduceFunctionSignature<CBodyComponent*, CBodyComponent, void, char const*>, ScriptDeduceFunctionSignature<CBodyComponent*, CBodyComponent, void, const Vector&, const Vector&>, ScriptDeduceFunctionSignature<CBodyComponent*, CBodyComponent, void, const Vector&>, ScriptDeduceFunctionSignature<CBodyComponent*, CBodyComponent, void>, ScriptDeduceFunctionSignatureInternal<CBodyComponent*, CBodyComponent, void, char const*>, ScriptFuncDescriptor_t, ScriptFunctionBinding_t, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlMemory<ScriptFunctionBinding_t, int>::Grow, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CEntityComponentHelperInit_CBodyComponent
// strings: "Body Component Scriptdesc", "Add linear and angular velocity to the physics object", "AddVelocity", "Apply an impulse at a worldspace position to the physics", "AddImpulseAtPosition", "SetAngularVelocity" (20 total)
// globals: g_pCBodyComponent_ScriptDesc, CMemberScriptBinding2<CBodyComponent *,void (CBodyComponent::*)(Vector const&,Vector const&),void,Vector const&,Vector const&>::Call(void *,void *,CVariantBase<, CBodyComponent::AddVelocity(Vector const&,Vector const&), CBodyComponent::AddImpulseAtPosition(Vector const&,Vector const&), CMemberScriptBinding1<CBodyComponent *,void (CBodyComponent::*)(Vector const&),void,Vector const&>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,, CBodyComponent::SetVelocity(Vector const&), CBodyComponent::SetAngularVelocity(Vector const&), CMemberScriptBinding1<CBodyComponent *,void (CBodyComponent::*)(char const*),void,char const*>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int, (21 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CBodyComponent>(CBodyComponent *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // rbx
  CUtlMemory<ScriptFunctionBinding_t,int> *p_m_Memory; // r12
  CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int> > *p_m_FunctionBindings; // r13
  ScriptFunctionBinding_t *m_pMemory; // rdx
  int8 m_nNumParameters; // al
  char v7; // cl
  int v8; // eax
  char v9; // cl
  char v10; // di
  __int64 v11; // rcx
  char v12; // al
  char v13; // dl
  int v14; // eax
  char v15; // dl
  char v16; // di
  __int64 m_Size; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rdx
  int v22; // eax
  char v23; // dl
  char v24; // di
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // al
  __int64 v29; // rdx
  int v30; // eax
  char v31; // dl
  char v32; // di
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rcx
  char v36; // al
  __int64 v37; // rdx
  int v38; // eax
  char v39; // dl
  char v40; // di
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rcx
  char v44; // al
  __int64 v45; // rdx
  int v46; // eax
  char v47; // dl
  char v48; // di
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // rcx
  char v52; // al
  __int64 v53; // rdx
  int v54; // eax
  char v55; // dl
  char v56; // di
  __int64 v57; // r14
  __int64 v58; // rax
  __int64 v59; // rcx
  char v60; // al
  __int64 v61; // rdx
  int v62; // eax
  char v63; // dl
  char v64; // di
  __int64 v65; // r14
  __int64 v66; // rax
  __int64 v67; // rcx
  int v68; // eax
  int v69; // eax
  char v70; // dl
  char v71; // di
  __int64 v72; // rcx
  int v73; // eax
  int v74; // eax
  char v75; // dl
  char v76; // di
  __int64 v77; // r13
  __int64 v78; // rax
  __int64 v79; // rcx
  int v80; // eax
  int v81; // eax
  char v82; // dl
  char v83; // di
  __int64 v84; // r13
  __int64 v85; // rax
  __int64 v86; // rcx
  char v87; // al
  __int64 v88; // rdx
  int v89; // eax
  char v90; // dl
  char v91; // di

  result = g_pCBodyComponent_ScriptDesc;
  if ( g_pCBodyComponent_ScriptDesc == 0 )
  {
    v2 = operator new(0x50u);
    v2->m_pBaseDesc = 0;
    v2->m_FunctionBindings.m_Size = 0;
    p_m_Memory = &v2->m_FunctionBindings.m_Memory;
    v2->m_FunctionBindings.m_Memory.m_pMemory = 0;
    p_m_FunctionBindings = &v2->m_FunctionBindings;
    v2->m_FunctionBindings.m_Memory.m_nAllocationCount = 0;
    v2->m_FunctionBindings.m_Memory.m_nGrowSize = 0;
    v2->m_pfnConstruct = 0;
    v2->m_pfnDestruct = 0;
    v2->pHelper = 0;
    g_pCBodyComponent_ScriptDesc = v2;
    v2->m_pszDescription = "Body Component Scriptdesc";
    v2->m_pszScriptName = "CBodyComponent";
    v2->m_pszClassname = "CBodyComponent";
    CUtlMemory<ScriptFunctionBinding_t,int>::Grow(&v2->m_FunctionBindings.m_Memory, 1);
    m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    ++v2->m_FunctionBindings.m_Size;
    if ( m_pMemory != 0 )
    {
      m_pMemory->m_desc.m_pszScriptName = 0;
      m_pMemory->m_desc.m_pszFunction = 0;
      m_pMemory->m_desc.m_pszDescription = 0;
      m_pMemory->m_desc.m_ReturnType = 29;
      m_pMemory->m_desc.m_nOptionalParameters = -1;
      m_pMemory->m_desc.m_nNumParameters = 0;
      m_pMemory->m_desc.m_pPackedParameterNames = 0;
      m_pMemory = v2->m_FunctionBindings.m_Memory.m_pMemory;
    }
    m_pMemory->m_desc.m_ReturnType = 0;
    m_pMemory->m_desc.m_pszDescription = "Add linear and angular velocity to the physics object";
    m_pMemory->m_desc.m_pszScriptName = "AddVelocity";
    m_pMemory->m_desc.m_pszFunction = "AddVelocity";
    m_nNumParameters = m_pMemory->m_desc.m_nNumParameters;
    m_pMemory->m_desc.m_ParameterTypes[m_nNumParameters] = 3;
    v7 = m_nNumParameters + 1;
    m_nNumParameters += 2;
    m_pMemory->m_desc.m_ParameterTypes[v7] = 3;
    m_pMemory->m_desc.m_nNumParameters = m_nNumParameters;
    v8 = m_nNumParameters - 1;
    m_pMemory->m_desc.m_nOptionalParameters = 0;
    if ( v8 >= 0 && m_pMemory->m_desc.m_ParameterTypes[v8] == 32 )
    {
      v9 = 1;
      do
      {
        --v8;
        v10 = v9;
        if ( v8 == -1 )
        {
          m_pMemory->m_desc.m_nOptionalParameters = v9;
          goto LABEL_10;
        }
        ++v9;
      }
      while ( m_pMemory->m_desc.m_ParameterTypes[v8] == 32 );
      m_pMemory->m_desc.m_nOptionalParameters = v10;
    }
LABEL_10:
    m_pMemory->m_flags = 1;
    m_pMemory->m_pfnBinding = CMemberScriptBinding2<CBodyComponent *,void (CBodyComponent::*)(Vector const&,Vector const&),void,Vector const&,Vector const&>::Call;
    m_pMemory->m_pFunction = CBodyComponent::AddVelocity;
    v11 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v11 + 24) = 0;
    *(v11 + 16) = "Apply an impulse at a worldspace position to the physics";
    *v11 = "AddImpulseAtPosition";
    *(v11 + 8) = "AddImpulseAtPosition";
    v12 = *(v11 + 26);
    *(v11 + v12 + 27) = 3;
    v13 = v12 + 1;
    v12 += 2;
    *(v11 + v13 + 27) = 3;
    *(v11 + 26) = v12;
    v14 = v12 - 1;
    *(v11 + 25) = 0;
    if ( v14 >= 0 && *(v11 + v14 + 27) == 32 )
    {
      v15 = 1;
      do
      {
        --v14;
        v16 = v15;
        if ( v14 == -1 )
        {
          *(v11 + 25) = v15;
          goto LABEL_16;
        }
        ++v15;
      }
      while ( *(v11 + v14 + 27) == 32 );
      *(v11 + 25) = v16;
    }
LABEL_16:
    *(v11 + 64) = 1;
    *(v11 + 48) = CMemberScriptBinding2<CBodyComponent *,void (CBodyComponent::*)(Vector const&,Vector const&),void,Vector const&,Vector const&>::Call;
    *(v11 + 56) = CBodyComponent::AddImpulseAtPosition;
    m_Size = v2->m_FunctionBindings.m_Size;
    if ( m_Size == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v18 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    if ( v18 != 0 )
    {
      *v18 = 0;
      *(v18 + 8) = 0;
      *(v18 + 16) = 0;
      *(v18 + 24) = 29;
      *(v18 + 25) = -1;
      *(v18 + 26) = 0;
      *(v18 + 40) = 0;
      v19 = &v2->m_FunctionBindings.m_Memory.m_pMemory[m_Size];
    }
    else
    {
      v19 = 0;
    }
    *(v19 + 24) = 0;
    *(v19 + 16) = "";
    *v19 = "SetVelocity";
    *(v19 + 8) = "SetVelocity";
    v20 = *(v19 + 26);
    v21 = v20++;
    *(v19 + v21 + 27) = 3;
    *(v19 + 26) = v20;
    v22 = v20 - 1;
    *(v19 + 25) = 0;
    if ( v22 >= 0 && *(v19 + v22 + 27) == 32 )
    {
      v23 = 1;
      do
      {
        --v22;
        v24 = v23;
        if ( v22 == -1 )
        {
          *(v19 + 25) = v23;
          goto LABEL_26;
        }
        ++v23;
      }
      while ( *(v19 + v22 + 27) == 32 );
      *(v19 + 25) = v24;
    }
LABEL_26:
    *(v19 + 64) = 1;
    *(v19 + 48) = CMemberScriptBinding1<CBodyComponent *,void (CBodyComponent::*)(Vector const&),void,Vector const&>::Call;
    *(v19 + 56) = CBodyComponent::SetVelocity;
    v25 = v2->m_FunctionBindings.m_Size;
    if ( v25 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v26 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v25];
    if ( v26 != 0 )
    {
      *v26 = 0;
      *(v26 + 8) = 0;
      *(v26 + 16) = 0;
      *(v26 + 24) = 29;
      *(v26 + 25) = -1;
      *(v26 + 26) = 0;
      *(v26 + 40) = 0;
      v27 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v25];
    }
    else
    {
      v27 = 0;
    }
    *(v27 + 24) = 0;
    *(v27 + 16) = "";
    *v27 = "SetAngularVelocity";
    *(v27 + 8) = "SetAngularVelocity";
    v28 = *(v27 + 26);
    v29 = v28++;
    *(v27 + v29 + 27) = 3;
    *(v27 + 26) = v28;
    v30 = v28 - 1;
    *(v27 + 25) = 0;
    if ( v30 >= 0 && *(v27 + v30 + 27) == 32 )
    {
      v31 = 1;
      do
      {
        --v30;
        v32 = v31;
        if ( v30 == -1 )
        {
          *(v27 + 25) = v31;
          goto LABEL_36;
        }
        ++v31;
      }
      while ( *(v27 + v30 + 27) == 32 );
      *(v27 + 25) = v32;
    }
LABEL_36:
    *(v27 + 64) = 1;
    *(v27 + 48) = CMemberScriptBinding1<CBodyComponent *,void (CBodyComponent::*)(Vector const&),void,Vector const&>::Call;
    *(v27 + 56) = CBodyComponent::SetAngularVelocity;
    v33 = v2->m_FunctionBindings.m_Size;
    if ( v33 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v34 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v33];
    if ( v34 != 0 )
    {
      *v34 = 0;
      *(v34 + 8) = 0;
      *(v34 + 16) = 0;
      *(v34 + 24) = 29;
      *(v34 + 25) = -1;
      *(v34 + 26) = 0;
      *(v34 + 40) = 0;
      v35 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v33];
    }
    else
    {
      v35 = 0;
    }
    *(v35 + 24) = 0;
    *(v35 + 16) = "";
    *v35 = "SetBodyGroup";
    *(v35 + 8) = "SetBodyGroup";
    v36 = *(v35 + 26);
    v37 = v36++;
    *(v35 + v37 + 27) = 30;
    *(v35 + 26) = v36;
    v38 = v36 - 1;
    *(v35 + 25) = 0;
    if ( v38 >= 0 && *(v35 + v38 + 27) == 32 )
    {
      v39 = 1;
      do
      {
        --v38;
        v40 = v39;
        if ( v38 == -1 )
        {
          *(v35 + 25) = v39;
          goto LABEL_46;
        }
        ++v39;
      }
      while ( *(v35 + v38 + 27) == 32 );
      *(v35 + 25) = v40;
    }
LABEL_46:
    *(v35 + 64) = 1;
    *(v35 + 48) = CMemberScriptBinding1<CBodyComponent *,void (CBodyComponent::*)(char const*),void,char const*>::Call;
    *(v35 + 56) = CBodyComponent::SetBodyGroup;
    v41 = v2->m_FunctionBindings.m_Size;
    if ( v41 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v42 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v41];
    if ( v42 != 0 )
    {
      *v42 = 0;
      *(v42 + 8) = 0;
      *(v42 + 16) = 0;
      *(v42 + 24) = 29;
      *(v42 + 25) = -1;
      *(v42 + 26) = 0;
      *(v42 + 40) = 0;
      v43 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v41];
    }
    else
    {
      v43 = 0;
    }
    *(v43 + 24) = 0;
    *(v43 + 16) = "";
    *v43 = "SetMaterialGroup";
    *(v43 + 8) = "SetMaterialGroup";
    v44 = *(v43 + 26);
    v45 = v44++;
    *(v43 + v45 + 27) = 38;
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
          goto LABEL_56;
        }
        ++v47;
      }
      while ( *(v43 + v46 + 27) == 32 );
      *(v43 + 25) = v48;
    }
LABEL_56:
    *(v43 + 64) = 1;
    *(v43 + 48) = CMemberScriptBinding1<CBodyComponent *,void (CBodyComponent::*)(CUtlStringToken),void,CUtlStringToken>::Call;
    *(v43 + 56) = CBodyComponent::SetMaterialGroup;
    v49 = v2->m_FunctionBindings.m_Size;
    if ( v49 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v50 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v49];
    if ( v50 != 0 )
    {
      *v50 = 0;
      *(v50 + 8) = 0;
      *(v50 + 16) = 0;
      *(v50 + 24) = 29;
      *(v50 + 25) = -1;
      *(v50 + 26) = 0;
      *(v50 + 40) = 0;
      v51 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v49];
    }
    else
    {
      v51 = 0;
    }
    *(v51 + 24) = 0;
    *(v51 + 16) = "Pass string for the animation to play on this model";
    *v51 = "SetAnimation";
    *(v51 + 8) = "SetAnimationSequence";
    v52 = *(v51 + 26);
    v53 = v52++;
    *(v51 + v53 + 27) = 30;
    *(v51 + 26) = v52;
    v54 = v52 - 1;
    *(v51 + 25) = 0;
    if ( v54 >= 0 && *(v51 + v54 + 27) == 32 )
    {
      v55 = 1;
      do
      {
        --v54;
        v56 = v55;
        if ( v54 == -1 )
        {
          *(v51 + 25) = v55;
          goto LABEL_66;
        }
        ++v55;
      }
      while ( *(v51 + v54 + 27) == 32 );
      *(v51 + 25) = v56;
    }
LABEL_66:
    *(v51 + 56) = 17;
    *(v51 + 48) = CMemberScriptBinding1<CBodyComponent *,void (CBodyComponent::*)(char const*),void,char const*>::Call;
    *(v51 + 64) = 1;
    v57 = v2->m_FunctionBindings.m_Size;
    if ( v57 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v58 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v57];
    if ( v58 != 0 )
    {
      *v58 = 0;
      *(v58 + 8) = 0;
      *(v58 + 16) = 0;
      *(v58 + 24) = 29;
      *(v58 + 25) = -1;
      *(v58 + 26) = 0;
      *(v58 + 40) = 0;
      v59 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v57];
    }
    else
    {
      v59 = 0;
    }
    *(v59 + 24) = 1;
    *(v59 + 16) = "Returns the duration in seconds of the specified sequence";
    *v59 = "SequenceDuration";
    *(v59 + 8) = "SequenceDuration";
    v60 = *(v59 + 26);
    v61 = v60++;
    *(v59 + v61 + 27) = 30;
    *(v59 + 26) = v60;
    v62 = v60 - 1;
    *(v59 + 25) = 0;
    if ( v62 >= 0 && *(v59 + v62 + 27) == 32 )
    {
      v63 = 1;
      do
      {
        --v62;
        v64 = v63;
        if ( v62 == -1 )
        {
          *(v59 + 25) = v63;
          goto LABEL_76;
        }
        ++v63;
      }
      while ( *(v59 + v62 + 27) == 32 );
      *(v59 + 25) = v64;
    }
LABEL_76:
    *(v59 + 64) = 1;
    *(v59 + 48) = CMemberScriptBinding1<CBodyComponent *,float (CBodyComponent::*)(char const*),float,char const*>::Call;
    *(v59 + 56) = CBodyComponent::SequenceDuration;
    v65 = v2->m_FunctionBindings.m_Size;
    if ( v65 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v66 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v65];
    if ( v66 != 0 )
    {
      *v66 = 0;
      *(v66 + 8) = 0;
      *(v66 + 16) = 0;
      *(v66 + 24) = 29;
      *(v66 + 25) = -1;
      *(v66 + 26) = 0;
      *(v66 + 40) = 0;
      v67 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v65];
    }
    else
    {
      v67 = 0;
    }
    *(v67 + 24) = 0;
    *(v67 + 16) = "Detach from its parent";
    *v67 = "DetachFromParent";
    *(v67 + 8) = "DetachFromParent";
    v68 = *(v67 + 26);
    *(v67 + 25) = 0;
    v69 = v68 - 1;
    if ( v69 >= 0 && *(v67 + v69 + 27) == 32 )
    {
      v70 = 1;
      do
      {
        --v69;
        v71 = v70;
        if ( v69 == -1 )
        {
          *(v67 + 25) = v70;
          goto LABEL_86;
        }
        ++v70;
      }
      while ( *(v67 + v69 + 27) == 32 );
      *(v67 + 25) = v71;
    }
LABEL_86:
    *(v67 + 64) = 1;
    *(v67 + 48) = CMemberScriptBinding0<CBodyComponent *,void (CBodyComponent::*)(void),void>::Call;
    *(v67 + 56) = CBodyComponent::DetachFromParent;
    v72 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v72 + 24) = 6;
    *(v72 + 16) = "Is attached to parent";
    *v72 = "IsAttachedToParent";
    *(v72 + 8) = "IsAttachedToParent";
    v73 = *(v72 + 26);
    *(v72 + 25) = 0;
    v74 = v73 - 1;
    if ( v74 >= 0 && *(v72 + v74 + 27) == 32 )
    {
      v75 = 1;
      do
      {
        --v74;
        v76 = v75;
        if ( v74 == -1 )
        {
          *(v72 + 25) = v75;
          goto LABEL_92;
        }
        ++v75;
      }
      while ( *(v72 + v74 + 27) == 32 );
      *(v72 + 25) = v76;
    }
LABEL_92:
    *(v72 + 64) = 1;
    *(v72 + 48) = CMemberScriptBinding0<CBodyComponent *,bool (CBodyComponent::*)(void),bool>::Call;
    *(v72 + 56) = CBodyComponent::IsAttachedToParent;
    v77 = v2->m_FunctionBindings.m_Size;
    if ( v77 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v78 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v77];
    if ( v78 != 0 )
    {
      *v78 = 0;
      *(v78 + 8) = 0;
      *(v78 + 16) = 0;
      *(v78 + 24) = 29;
      *(v78 + 25) = -1;
      *(v78 + 26) = 0;
      *(v78 + 40) = 0;
      v79 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v77];
    }
    else
    {
      v79 = 0;
    }
    *(v79 + 24) = 29;
    *(v79 + 16) = "Returns the active sequence\n";
    *v79 = "GetSequence";
    *(v79 + 8) = "GetSequence";
    v80 = *(v79 + 26);
    *(v79 + 25) = 0;
    v81 = v80 - 1;
    if ( v81 >= 0 && *(v79 + v81 + 27) == 32 )
    {
      v82 = 1;
      do
      {
        --v81;
        v83 = v82;
        if ( v81 == -1 )
        {
          *(v79 + 25) = v82;
          goto LABEL_102;
        }
        ++v82;
      }
      while ( *(v79 + v81 + 27) == 32 );
      *(v79 + 25) = v83;
    }
LABEL_102:
    *(v79 + 64) = 1;
    *(v79 + 48) = CMemberScriptBinding0<CBodyComponent *,HSequence (CBodyComponent::*)(void),HSequence>::Call;
    *(v79 + 56) = CBodyComponent::GetSequence;
    v84 = v2->m_FunctionBindings.m_Size;
    if ( v84 == v2->m_FunctionBindings.m_Memory.m_nAllocationCount )
      CUtlMemory<ScriptFunctionBinding_t,int>::Grow(p_m_Memory, 1);
    ++v2->m_FunctionBindings.m_Size;
    v85 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v84];
    if ( v85 != 0 )
    {
      *v85 = 0;
      *(v85 + 8) = 0;
      *(v85 + 16) = 0;
      *(v85 + 24) = 29;
      *(v85 + 25) = -1;
      *(v85 + 26) = 0;
      *(v85 + 40) = 0;
      v86 = &v2->m_FunctionBindings.m_Memory.m_pMemory[v84];
    }
    else
    {
      v86 = 0;
    }
    *(v86 + 24) = 29;
    *(v86 + 16) = "Returns a sequence id given a name\n";
    *v86 = "LookupSequence";
    *(v86 + 8) = "LookupSequence";
    v87 = *(v86 + 26);
    v88 = v87++;
    *(v86 + v88 + 27) = 30;
    *(v86 + 26) = v87;
    v89 = v87 - 1;
    *(v86 + 25) = 0;
    if ( v89 >= 0 && *(v86 + v89 + 27) == 32 )
    {
      v90 = 1;
      do
      {
        --v89;
        v91 = v90;
        if ( v89 == -1 )
        {
          *(v86 + 25) = v90;
          goto LABEL_112;
        }
        ++v90;
      }
      while ( *(v86 + v89 + 27) == 32 );
      *(v86 + 25) = v91;
    }
LABEL_112:
    *(v86 + 64) = 1;
    *(v86 + 48) = CMemberScriptBinding1<CBodyComponent *,HSequence (CBodyComponent::*)(char const*),HSequence,char const*>::Call;
    *(v86 + 56) = CBodyComponent::LookupSequence;
    return v2;
  }
  return result;
}


// CBodyComponent::GetEntComponentInfo  (line 43, @0x0000000001eb6500, libserver.so)  // inlines: HashStringFastCaseless, HashToShort
// calls: __cxa_guard_acquire, HashString, MurmurHash2LowerCase, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CBodyComponent
// strings: "CBodyComponentReferenced", "CBodyComponentReferencedPtr"
// globals: CBodyComponent::s_EntComponentInfo, `guard variable for'CBodyComponent::GetEntComponentInfo(void)::UUID_CBodyComponent, CBodyComponent::GetEntComponentInfo(void)::UUID_CBodyComponent
EntComponentInfo_t *__cdecl CBodyComponent::GetEntComponentInfo()
{
  unsigned int v1; // eax
  uint32 v2; // eax

  if ( CBodyComponent::s_EntComponentInfo.m_pName != 0 )
    return &CBodyComponent::s_EntComponentInfo;
  if ( `guard variable for'CBodyComponent::GetEntComponentInfo(void)::UUID_CBodyComponent == 0
    && __cxa_guard_acquire(&`guard variable for'CBodyComponent::GetEntComponentInfo(void)::UUID_CBodyComponent) != 0 )
  {
    CBodyComponent::GetEntComponentInfo(void)::UUID_CBodyComponent.Data1 = 2124709785;
    v1 = HashString("CBodyComponent");
    CBodyComponent::GetEntComponentInfo(void)::UUID_CBodyComponent.Data2 = HIWORD(v1) ^ v1;
    v2 = MurmurHash2LowerCase("CBodyComponent", 0x3501A674u);
    CBodyComponent::GetEntComponentInfo(void)::UUID_CBodyComponent.Data3 = HIWORD(v2) ^ v2;
    __cxa_guard_release(&`guard variable for'CBodyComponent::GetEntComponentInfo(void)::UUID_CBodyComponent);
  }
  CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex = -1;
  CBodyComponent::s_EntComponentInfo.m_nFlags = 18;
  CBodyComponent::s_EntComponentInfo.m_id = CBodyComponent::GetEntComponentInfo(void)::UUID_CBodyComponent;
  CBodyComponent::s_EntComponentInfo.m_pName = "BodyComponent";
  CBodyComponent::s_EntComponentInfo.m_pCPPClassname = "CBodyComponent";
  CBodyComponent::s_EntComponentInfo.m_pNetworkDataReferencedDescription = "CBodyComponentReferenced";
  CBodyComponent::s_EntComponentInfo.m_pNetworkDataReferencedPtrPropDescription = "CBodyComponentReferencedPtr";
  return &CBodyComponent::s_EntComponentInfo;
}


// CEntityComponentHelperInit_CBodyComponent  (line 43, @0x0000000001ebe580, libserver.so)  // inlines: CEntityComponentHelper, CEntityComponentHelperReferenced, CEntityComponentHelperT, GetBaseComponentHelper, GetComponentScriptDesc, SetPriority
// calls: CBodyComponent::GetEntComponentInfo, CEntityComponentHelperInit_CEntityComponent, GetScriptDesc<CBodyComponent>, __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CBodyComponentSkeletonInstance, CEntityComponentHelperInit_CBodyComponentPoint, CEntityComponentHelperFactory_CBodyComponent::CEntityComponentHelperFactory_CBodyComponent, _GLOBAL__sub_I__unity_components_01.cpp
// globals: `guard variable for'CEntityComponentHelperInit_CBodyComponent(void)::componentHelper, CEntityComponentHelperInit_CBodyComponent(void)::s_bIsInitialized, CEntityComponentHelperInit_CBodyComponent(void)::componentHelper
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CBodyComponent()
{
  EntComponentInfo_t *EntComponentInfo; // rbx
  ScriptClassDesc_t *Script; // rax

  if ( `guard variable for'CEntityComponentHelperInit_CBodyComponent(void)::componentHelper == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityComponentHelperInit_CBodyComponent(void)::componentHelper) != 0 )
  {
    CEntityComponentHelperInit_CBodyComponent(void)::componentHelper.m_flags = 0;
    CEntityComponentHelperInit_CBodyComponent(void)::componentHelper.m_pInfo = 0;
    CEntityComponentHelperInit_CBodyComponent(void)::componentHelper.m_nPriority = 0;
    CEntityComponentHelperInit_CBodyComponent(void)::componentHelper._vptr_CEntityComponentHelper = &off_3FB4E50;
    CEntityComponentHelperInit_CBodyComponent(void)::componentHelper.m_pInfo = CBodyComponent::GetEntComponentInfo();
    CEntityComponentHelperInit_CBodyComponent(void)::componentHelper.m_bFinalized = 0;
    __cxa_guard_release(&`guard variable for'CEntityComponentHelperInit_CBodyComponent(void)::componentHelper);
  }
  if ( !CEntityComponentHelperInit_CBodyComponent(void)::s_bIsInitialized )
  {
    CEntityComponentHelperInit_CBodyComponent(void)::s_bIsInitialized = 1;
    EntComponentInfo = CBodyComponent::GetEntComponentInfo();
    EntComponentInfo->m_pBaseClassComponentHelper = CEntityComponentHelperInit_CEntityComponent();
    Script = GetScriptDesc<CBodyComponent>(0);
    CEntityComponentHelperInit_CBodyComponent(void)::componentHelper.m_nPriority = 17407;
    EntComponentInfo->m_pScriptClassDesc = Script;
  }
  return &CEntityComponentHelperInit_CBodyComponent(void)::componentHelper;
}


// CEntityComponentHelperFactory_CBodyComponent::CEntityComponentHelperFactory_CBodyComponent  (line 43, @0x0000000001ebe660, libserver.so)  // inlines: AddToList
// calls: CEntityComponentHelperInit_CBodyComponent
// globals: CEntityComponentHelpers::GetList(void)::g_pList
void __fastcall CEntityComponentHelperFactory_CBodyComponent::CEntityComponentHelperFactory_CBodyComponent(
        CEntityComponentHelperFactory_CBodyComponent *const this)
{
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  inited = CEntityComponentHelperInit_CBodyComponent();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
}


// CBodyComponentSkeletonInstance::GetEntComponentInfo  (line 45, @0x0000000001eb6620, libserver.so)  // inlines: HashStringFastCaseless, HashToShort
// calls: __cxa_guard_acquire, HashString, MurmurHash2LowerCase, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CBodyComponentSkeletonInstance
// strings: "CBodyComponentSkeletonInstance", "CBodyComponentSkeletonInstanceReferenced", "CBodyComponentSkeletonInstanceReferencedPtr"
// globals: CBodyComponentSkeletonInstance::s_EntComponentInfo, `guard variable for'CBodyComponentSkeletonInstance::GetEntComponentInfo(void)::UUID_CBodyComponentSkeletonInstance, CBodyComponentSkeletonInstance::GetEntComponentInfo(void)::UUID_CBodyComponentSkeletonInstance
EntComponentInfo_t *__cdecl CBodyComponentSkeletonInstance::GetEntComponentInfo()
{
  unsigned int v1; // eax
  uint32 v2; // eax

  if ( CBodyComponentSkeletonInstance::s_EntComponentInfo.m_pName != 0 )
    return &CBodyComponentSkeletonInstance::s_EntComponentInfo;
  if ( `guard variable for'CBodyComponentSkeletonInstance::GetEntComponentInfo(void)::UUID_CBodyComponentSkeletonInstance == 0
    && __cxa_guard_acquire(&`guard variable for'CBodyComponentSkeletonInstance::GetEntComponentInfo(void)::UUID_CBodyComponentSkeletonInstance) != 0 )
  {
    CBodyComponentSkeletonInstance::GetEntComponentInfo(void)::UUID_CBodyComponentSkeletonInstance.Data1 = 233361919;
    v1 = HashString("CBodyComponentSkeletonInstance");
    CBodyComponentSkeletonInstance::GetEntComponentInfo(void)::UUID_CBodyComponentSkeletonInstance.Data2 = HIWORD(v1) ^ v1;
    v2 = MurmurHash2LowerCase("CBodyComponentSkeletonInstance", 0x3501A674u);
    CBodyComponentSkeletonInstance::GetEntComponentInfo(void)::UUID_CBodyComponentSkeletonInstance.Data3 = HIWORD(v2) ^ v2;
    __cxa_guard_release(&`guard variable for'CBodyComponentSkeletonInstance::GetEntComponentInfo(void)::UUID_CBodyComponentSkeletonInstance);
  }
  CBodyComponentSkeletonInstance::s_EntComponentInfo.m_nRuntimeIndex = -1;
  CBodyComponentSkeletonInstance::s_EntComponentInfo.m_nFlags = 2;
  CBodyComponentSkeletonInstance::s_EntComponentInfo.m_id = CBodyComponentSkeletonInstance::GetEntComponentInfo(void)::UUID_CBodyComponentSkeletonInstance;
  CBodyComponentSkeletonInstance::s_EntComponentInfo.m_pName = "BodyComponentSkeletonInstance";
  CBodyComponentSkeletonInstance::s_EntComponentInfo.m_pCPPClassname = "CBodyComponentSkeletonInstance";
  CBodyComponentSkeletonInstance::s_EntComponentInfo.m_pNetworkDataReferencedDescription = "CBodyComponentSkeletonInstanceReferenced";
  CBodyComponentSkeletonInstance::s_EntComponentInfo.m_pNetworkDataReferencedPtrPropDescription = "CBodyComponentSkeleton"
                                                                                                  "InstanceReferencedPtr";
  return &CBodyComponentSkeletonInstance::s_EntComponentInfo;
}


// CEntityComponentHelperInit_CBodyComponentSkeletonInstance  (line 45, @0x0000000001eb6740, libserver.so)  // inlines: CEntityComponentHelper, CEntityComponentHelperReferenced, CEntityComponentHelperT, GetBaseComponentHelper, SetPriority
// calls: CBodyComponentSkeletonInstance::GetEntComponentInfo, CEntityComponentHelperInit_CBodyComponent, __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperFactory_CBodyComponentSkeletonInstance::CEntityComponentHelperFactory_CBodyComponentSkeletonInstance, _GLOBAL__sub_I__unity_components_01.cpp, CEntityComponentHelperInit_CBodyComponentBaseAnimating, CEntityComponentHelperInit_CBodyComponentBaseAnimatingOverlay, CEntityComponentHelperInit_CBodyComponentBaseModelEntity
// globals: `guard variable for'CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper, CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::s_bIsInitialized, CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CBodyComponentSkeletonInstance()
{
  EntComponentInfo_t *EntComponentInfo; // rbx
  CEntityComponentHelper *inited; // rax

  if ( `guard variable for'CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper) != 0 )
  {
    CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper.m_flags = 0;
    CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper.m_pInfo = 0;
    CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper.m_nPriority = 0;
    CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper._vptr_CEntityComponentHelper = &off_3FB4ED0;
    CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper.m_pInfo = CBodyComponentSkeletonInstance::GetEntComponentInfo();
    CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper.m_bFinalized = 0;
    __cxa_guard_release(&`guard variable for'CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper);
  }
  if ( !CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::s_bIsInitialized )
  {
    CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::s_bIsInitialized = 1;
    EntComponentInfo = CBodyComponentSkeletonInstance::GetEntComponentInfo();
    inited = CEntityComponentHelperInit_CBodyComponent();
    EntComponentInfo->m_pScriptClassDesc = 0;
    EntComponentInfo->m_pBaseClassComponentHelper = inited;
    CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper.m_nPriority = 17407;
  }
  return &CEntityComponentHelperInit_CBodyComponentSkeletonInstance(void)::componentHelper;
}


// CEntityComponentHelperFactory_CBodyComponentSkeletonInstance::CEntityComponentHelperFactory_CBodyComponentSkeletonInstance  (line 45, @0x0000000001eb6820, libserver.so)  // inlines: AddToList
// calls: CEntityComponentHelperInit_CBodyComponentSkeletonInstance
// globals: CEntityComponentHelpers::GetList(void)::g_pList
void __fastcall CEntityComponentHelperFactory_CBodyComponentSkeletonInstance::CEntityComponentHelperFactory_CBodyComponentSkeletonInstance(
        CEntityComponentHelperFactory_CBodyComponentSkeletonInstance *const this)
{
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  inited = CEntityComponentHelperInit_CBodyComponentSkeletonInstance();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
}


// CBodyComponentPoint::GetEntComponentInfo  (line 47, @0x0000000001eb6840, libserver.so)  // inlines: HashStringFastCaseless, HashToShort
// calls: __cxa_guard_acquire, HashString, MurmurHash2LowerCase, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CBodyComponentPoint
// strings: "CBodyComponentPoint", "CBodyComponentPointReferenced", "CBodyComponentPointReferencedPtr"
// globals: CBodyComponentPoint::s_EntComponentInfo, `guard variable for'CBodyComponentPoint::GetEntComponentInfo(void)::UUID_CBodyComponentPoint, CBodyComponentPoint::GetEntComponentInfo(void)::UUID_CBodyComponentPoint
EntComponentInfo_t *__cdecl CBodyComponentPoint::GetEntComponentInfo()
{
  unsigned int v1; // eax
  uint32 v2; // eax

  if ( CBodyComponentPoint::s_EntComponentInfo.m_pName != 0 )
    return &CBodyComponentPoint::s_EntComponentInfo;
  if ( `guard variable for'CBodyComponentPoint::GetEntComponentInfo(void)::UUID_CBodyComponentPoint == 0
    && __cxa_guard_acquire(&`guard variable for'CBodyComponentPoint::GetEntComponentInfo(void)::UUID_CBodyComponentPoint) != 0 )
  {
    CBodyComponentPoint::GetEntComponentInfo(void)::UUID_CBodyComponentPoint.Data1 = -115477337;
    v1 = HashString("CBodyComponentPoint");
    CBodyComponentPoint::GetEntComponentInfo(void)::UUID_CBodyComponentPoint.Data2 = HIWORD(v1) ^ v1;
    v2 = MurmurHash2LowerCase("CBodyComponentPoint", 0x3501A674u);
    CBodyComponentPoint::GetEntComponentInfo(void)::UUID_CBodyComponentPoint.Data3 = HIWORD(v2) ^ v2;
    __cxa_guard_release(&`guard variable for'CBodyComponentPoint::GetEntComponentInfo(void)::UUID_CBodyComponentPoint);
  }
  CBodyComponentPoint::s_EntComponentInfo.m_nRuntimeIndex = -1;
  CBodyComponentPoint::s_EntComponentInfo.m_nFlags = 2;
  CBodyComponentPoint::s_EntComponentInfo.m_id = CBodyComponentPoint::GetEntComponentInfo(void)::UUID_CBodyComponentPoint;
  CBodyComponentPoint::s_EntComponentInfo.m_pName = "BodyComponentPoint";
  CBodyComponentPoint::s_EntComponentInfo.m_pCPPClassname = "CBodyComponentPoint";
  CBodyComponentPoint::s_EntComponentInfo.m_pNetworkDataReferencedDescription = "CBodyComponentPointReferenced";
  CBodyComponentPoint::s_EntComponentInfo.m_pNetworkDataReferencedPtrPropDescription = "CBodyComponentPointReferencedPtr";
  return &CBodyComponentPoint::s_EntComponentInfo;
}


// CEntityComponentHelperInit_CBodyComponentPoint  (line 47, @0x0000000001eb6960, libserver.so)  // inlines: CEntityComponentHelper, CEntityComponentHelperReferenced, CEntityComponentHelperT, GetBaseComponentHelper, SetPriority
// calls: CBodyComponentPoint::GetEntComponentInfo, CEntityComponentHelperInit_CBodyComponent, __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperFactory_CBodyComponentPoint::CEntityComponentHelperFactory_CBodyComponentPoint, _GLOBAL__sub_I__unity_components_01.cpp
// globals: `guard variable for'CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper, CEntityComponentHelperInit_CBodyComponentPoint(void)::s_bIsInitialized, CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CBodyComponentPoint()
{
  EntComponentInfo_t *EntComponentInfo; // rbx
  CEntityComponentHelper *inited; // rax

  if ( `guard variable for'CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper) != 0 )
  {
    CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper.m_flags = 0;
    CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper.m_pInfo = 0;
    CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper.m_nPriority = 0;
    CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper._vptr_CEntityComponentHelper = &off_3FB4F50;
    CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper.m_pInfo = CBodyComponentPoint::GetEntComponentInfo();
    CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper.m_bFinalized = 0;
    __cxa_guard_release(&`guard variable for'CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper);
  }
  if ( !CEntityComponentHelperInit_CBodyComponentPoint(void)::s_bIsInitialized )
  {
    CEntityComponentHelperInit_CBodyComponentPoint(void)::s_bIsInitialized = 1;
    EntComponentInfo = CBodyComponentPoint::GetEntComponentInfo();
    inited = CEntityComponentHelperInit_CBodyComponent();
    EntComponentInfo->m_pScriptClassDesc = 0;
    EntComponentInfo->m_pBaseClassComponentHelper = inited;
    CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper.m_nPriority = 17407;
  }
  return &CEntityComponentHelperInit_CBodyComponentPoint(void)::componentHelper;
}


// CEntityComponentHelperFactory_CBodyComponentPoint::CEntityComponentHelperFactory_CBodyComponentPoint  (line 47, @0x0000000001eb6a40, libserver.so)  // inlines: AddToList
// calls: CEntityComponentHelperInit_CBodyComponentPoint
// globals: CEntityComponentHelpers::GetList(void)::g_pList
void __fastcall CEntityComponentHelperFactory_CBodyComponentPoint::CEntityComponentHelperFactory_CBodyComponentPoint(
        CEntityComponentHelperFactory_CBodyComponentPoint *const this)
{
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  inited = CEntityComponentHelperInit_CBodyComponentPoint();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
}


// CBodyComponent::GetDataDescMap  (line 53, @0x0000000001eb5690, libserver.so)
// globals: CBodyComponent::m_DataMap
datamap_t *__fastcall CBodyComponent::GetDataDescMap(CBodyComponent *const this)
{
  return &CBodyComponent::m_DataMap;
}


// CBodyComponent::AddDatadescMetadataKeys  (line 53, @0x0000000001eb6a60, libserver.so)
void __fastcall CBodyComponent::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CBodyComponent::GetBaseMap  (line 53, @0x0000000001eb6a70, libserver.so)
datamap_t *__cdecl CBodyComponent::GetBaseMap()
{
  return 0;
}


// DataMapInit<CBodyComponent>  (line 53, @0x0000000001eb6a80, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_components_01.cpp
// globals: `guard variable for'DataMapInit<CBodyComponent>(CBodyComponent *)::nameHolder, CBodyComponent::m_DataMap, DataMapInit<CBodyComponent>(CBodyComponent *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBodyComponent>(CBodyComponent *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBodyComponent>(CBodyComponent *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBodyComponent>(CBodyComponent *)::nameHolder) != 0 )
  {
    DataMapInit<CBodyComponent>(CBodyComponent *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBodyComponent>(CBodyComponent *)::nameHolder.m_pszBase = "CBodyComponent";
    DataMapInit<CBodyComponent>(CBodyComponent *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBodyComponent>(CBodyComponent *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBodyComponent>(CBodyComponent *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBodyComponent>(CBodyComponent *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBodyComponent>(CBodyComponent *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBodyComponent>(CBodyComponent *)::nameHolder,
      &_dso_handle);
  }
  CBodyComponent::m_DataMap.baseMap = 0;
  CBodyComponent::m_DataMap.dataDesc = &DataMapInit<CBodyComponent>(CBodyComponent *)::dataDesc[1];
  CBodyComponent::m_DataMap.dataNumFields = 2;
  return &CBodyComponent::m_DataMap;
}


// CBodyComponent::SetLocalPosition  (line 58, @0x0000000001eb6b40, libserver.so)
// calls: CGameSceneNode::SetLocalOrigin
void __fastcall CBodyComponent::SetLocalPosition(CBodyComponent *const this, const Vector *const parentSpacePosition)
{
  CGameSceneNode::SetLocalOrigin(this->m_pSceneNode, parentSpacePosition);
}


// CBodyComponent::SetLocalAngles  (line 63, @0x0000000001eb6b50, libserver.so)
// calls: CGameSceneNode::SetLocalAngles
void __fastcall CBodyComponent::SetLocalAngles(CBodyComponent *const this, const QAngle *const parentSpaceAngles)
{
  CGameSceneNode::SetLocalAngles(this->m_pSceneNode, parentSpaceAngles);
}


// CBodyComponent::SetLocalOrientation  (line 68, @0x0000000001eb6b60, libserver.so)
// calls: CGameSceneNode::SetLocalOrientation
void __fastcall CBodyComponent::SetLocalOrientation(
        CBodyComponent *const this,
        const Quaternion *const parentSpaceOrientation)
{
  CGameSceneNode::SetLocalOrientation(this->m_pSceneNode, parentSpaceOrientation);
}


// CBodyComponent::GetAbsAngles  (line 73, @0x0000000001eb6b70, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsAngles, Load
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
const QAngle *__fastcall CBodyComponent::GetAbsAngles(const CBodyComponent *const this)
{
  CGameSceneNode *m_pSceneNode; // rbx

  m_pSceneNode = this->m_pSceneNode;
  if ( m_pSceneNode->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(this->m_pSceneNode);
  return &m_pSceneNode->m_angAbsRotation;
}


// CBodyComponent::CBodyComponent  (line 82, @0x0000000001eb6ba0, libserver.so)  // inlines: CEntityOwnerPtr, CNetworkVarChainer, CSmartPtr, CUtlMemoryConservative, CUtlVectorBase, CUtlVectorConservative, ChangeAccessorFieldPathIndex_t, operator=
// callers: CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity>::Allocate, CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Allocate, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Allocate
void __fastcall CBodyComponent::CBodyComponent(CBodyComponent *const this, CGameSceneNode *pSceneNode)
{
  CEntityInstance *v2; // rax

  this->_vptr_CBodyComponent = &off_3FB4F90;
  this->m_pSceneNode = pSceneNode;
  this->m_GameSceneNodeRegistry.m_Size = 0;
  this->m_GameSceneNodeRegistry.m_Memory.m_pMemory = 0;
  v2 = CEntitySpawnHelper::gm_pCurEntityPtr;
  this->m_GameSceneNodeRegistry.m_Memory.m_nCurAllocSize = 0;
  this->__m_pChainEntity.m_pObj = 0;
  if ( v2 != 0 )
  {
    this->__m_pChainEntity.m_pObj = v2;
    this->__m_pChainEntity.m_PathIndex.m_Value = -1;
    this->__m_pChainEntity.m_pPropagationList = 0;
    this->m_pOwner.m_pObj = v2;
  }
  else
  {
    this->__m_pChainEntity.m_pPropagationList = 0;
    this->__m_pChainEntity.m_PathIndex.m_Value = -1;
    this->m_pOwner.m_pObj = 0;
  }
}


// CBodyComponent::~CBodyComponent  (line 87, @0x0000000001eb6c20, libserver.so)  // inlines: Purge, RememberAllocSize, RemoveAll, ~CUtlVectorBase, ~CUtlVectorConservative
// callers: CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity>::Free, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Free, CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity>::Allocate, CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Free, CEntityComponentHelperReferenced<CBodyComponentBaseAnimatingOverlay>::Allocate, CEntityComponentHelperReferenced<CBodyComponentBaseAnimating>::Allocate
void __fastcall CBodyComponent::~CBodyComponent(CBodyComponent *const this)
{
  this->_vptr_CBodyComponent = &off_3FB4F90;
  this->m_GameSceneNodeRegistry.m_Size = 0;
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_GameSceneNodeRegistry.m_Memory.m_pMemory);
  this->m_GameSceneNodeRegistry.m_Memory.m_nCurAllocSize = 0;
  this->m_GameSceneNodeRegistry.m_Memory.m_pMemory = 0;
}


// CBodyComponent::Connect  (line 92, @0x0000000001eb6c70, libserver.so)
// callers: CBaseEntity::Connect
bool __fastcall CBodyComponent::Connect(CBodyComponent *const this, CEntityInstance *pEntity)
{
  (*(this->m_pSceneNode->_vptr_CGameSceneNode + 4))(this->m_pSceneNode, 0, pEntity);
  return 1;
}


// CBodyComponent::AddedToEntityDatabase  (line 98, @0x0000000001eb6c90, libserver.so)
// callers: CBaseEntity::AddedToEntityDatabase
void __fastcall CBodyComponent::AddedToEntityDatabase(CBodyComponent *const this, CEntityInstance *pEntity)
{
  (*(this->m_pSceneNode->_vptr_CGameSceneNode + 3))(this->m_pSceneNode, pEntity);
}


// CBodyComponent::Spawn  (line 106, @0x0000000001eb6cb0, libserver.so)
// callers: CBodyGameSystem::Spawn
bool __fastcall CBodyComponent::Spawn(
        CBodyComponent *const this,
        CEntityInstance *pEntity,
        const CEntityKeyValues *pKeyValues)
{
  (*(this->m_pSceneNode->_vptr_CGameSceneNode + 5))(this->m_pSceneNode, pEntity, 0, pKeyValues);
  return 1;
}


// CBodyComponent::Activate  (line 117, @0x0000000001eb6cd0, libserver.so)
// callers: CGameEntitySystem::Activate
bool __fastcall CBodyComponent::Activate(
        CBodyComponent *const this,
        CEntityInstance *pEntity,
        ActivateType_t activateType)
{
  (*(this->m_pSceneNode->_vptr_CGameSceneNode + 6))(this->m_pSceneNode, pEntity, activateType);
  return 1;
}


// CBodyComponent::DeclareGameSceneNode  (line 128, @0x0000000001eb6cf0, libserver.so)  // inlines: AddToTail, CopyConstruct<CGameSceneNode*>, Element, Grow, GrowMemory, NumAllocated, ReAlloc, RememberAllocSize, operator[]
// callers: CGameSceneNode::Connect
bool __fastcall CBodyComponent::DeclareGameSceneNode(CBodyComponent *const this, CGameSceneNode *pGameSceneNode)
{
  __int64 m_Size; // r12
  CGameSceneNode **m_pMemory; // rax
  int v6; // edx
  CGameSceneNode **v7; // rax

  m_Size = this->m_GameSceneNodeRegistry.m_Size;
  if ( m_Size == (this->m_GameSceneNodeRegistry.m_Memory.m_nCurAllocSize >> 3) )
  {
    m_pMemory = (*(*g_pMemAlloc + 8LL))(
                  g_pMemAlloc,
                  this->m_GameSceneNodeRegistry.m_Memory.m_pMemory,
                  8LL * (m_Size + 1));
    this->m_GameSceneNodeRegistry.m_Memory.m_nCurAllocSize = 8LL * (m_Size + 1);
    v6 = this->m_GameSceneNodeRegistry.m_Size;
    this->m_GameSceneNodeRegistry.m_Memory.m_pMemory = m_pMemory;
  }
  else
  {
    m_pMemory = this->m_GameSceneNodeRegistry.m_Memory.m_pMemory;
    v6 = this->m_GameSceneNodeRegistry.m_Size;
  }
  v7 = &m_pMemory[m_Size];
  this->m_GameSceneNodeRegistry.m_Size = v6 + 1;
  if ( v7 != 0 )
    *v7 = pGameSceneNode;
  return 1;
}


// CBodyComponent::UndeclareGameSceneNode  (line 145, @0x0000000001eb6d70, libserver.so)  // inlines: Element, FastRemove, Find, FindAndFastRemove, memcpy, operator[]
// callers: CGameSceneNode::UpdateOnRemove
bool __fastcall CBodyComponent::UndeclareGameSceneNode(CBodyComponent *const this, CGameSceneNode *pGameSceneNode)
{
  int m_Size; // ecx
  CGameSceneNode **m_pMemory; // r8
  CGameSceneNode **v4; // rdx
  int v5; // eax
  int v7; // ecx

  m_Size = this->m_GameSceneNodeRegistry.m_Size;
  if ( m_Size <= 0 )
    return 0;
  m_pMemory = this->m_GameSceneNodeRegistry.m_Memory.m_pMemory;
  if ( *m_pMemory != pGameSceneNode )
  {
    v4 = m_pMemory + 1;
    v5 = 0;
    while ( ++v5 != m_Size )
    {
      if ( *v4++ == pGameSceneNode )
      {
        if ( v5 != -1 )
          goto LABEL_8;
        return 0;
      }
    }
    return 0;
  }
  v5 = 0;
LABEL_8:
  v7 = m_Size - 1;
  if ( v5 != v7 )
  {
    m_pMemory[v5] = m_pMemory[v7];
    v7 = this->m_GameSceneNodeRegistry.m_Size - 1;
  }
  this->m_GameSceneNodeRegistry.m_Size = v7;
  return 0;
}


// CBodyComponent::LookupGameSceneNode  (line 151, @0x0000000001eb6de0, libserver.so)
// callers: CBodyComponent::LookupAttachment, CBaseEntity::IsFollowingEntity, CDecalGameSystem::GetSkeletonInstance, CDecalGameSystem::OnShootDecal, CDecalGameSystem::OnClearEntityDecals, CDecalSaveRestoreBlockHandler::Restore, CGameSceneNodeHandle::Get
CGameSceneNode *__fastcall CBodyComponent::LookupGameSceneNode(CBodyComponent *const this, CUtlStringToken name)
{
  int m_Size; // ecx
  CGameSceneNode **m_pMemory; // rdx
  CGameSceneNode *result; // rax
  CGameSceneNode **v5; // rdx
  CGameSceneNode **v6; // rcx

  if ( name.m_nHashCode == 0 )
    return this->m_pSceneNode;
  m_Size = this->m_GameSceneNodeRegistry.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_GameSceneNodeRegistry.m_Memory.m_pMemory;
    result = *m_pMemory;
    if ( name.m_nHashCode == (*m_pMemory)->m_name.m_Value.m_nHashCode )
      return result;
    v5 = m_pMemory + 1;
    v6 = &v5[m_Size - 1];
    while ( v5 != v6 )
    {
      result = *v5++;
      if ( name.m_nHashCode == result->m_name.m_Value.m_nHashCode )
        return result;
    }
  }
  return 0;
}


// CBodyComponent::SetMotionType  (line 169, @0x0000000001eb6e40, libserver.so)  // inlines: SetMotionType
// calls: CModelState::SetMotionType
// callers: CBaseEntity::InputSetKinematic, CBaseEntity::SetMoveType, CCollisionProperty::SetupPhysicsFromUnscaledModel, CCollisionProperty::SetupPhysicsFromUnscaledAABB, CCollisionProperty::SetupPhysicsFromUnscaledOBB, CCollisionProperty::SetupPhysicsFromUnscaledCapsule, CBasePlayer::OnNewModel
void __fastcall CBodyComponent::SetMotionType(CBodyComponent *const this, VPhysicsMotionType_t nMotionType)
{
  __int64 i; // rbx
  CGameSceneNode *v5; // rdi
  __int64 v6; // rax

  for ( i = 0; this->m_GameSceneNodeRegistry.m_Size > i; ++i )
  {
    v5 = this->m_GameSceneNodeRegistry.m_Memory.m_pMemory[i];
    v6 = (*(v5->_vptr_CGameSceneNode + 9))(v5);
    if ( v6 != 0 )
      CModelState::SetMotionType((v6 + 320), nMotionType);
  }
}


// CBodyComponent::AttachToParent  (line 185, @0x0000000001eb6ea0, libserver.so)
// calls: CGameSceneNode::AttachToParent
// callers: CBaseEntity::SetParent
AttachToParentResult_t __fastcall CBodyComponent::AttachToParent(
        CBodyComponent *const this,
        CBodyComponent *pParentBody,
        CUtlStringToken nBoneOrAttachName,
        const matrix3x4a_t *pOffsetTransform)
{
  if ( pParentBody != 0 )
    return CGameSceneNode::AttachToParent(
             this->m_pSceneNode,
             pParentBody->m_pSceneNode,
             nBoneOrAttachName,
             pOffsetTransform);
  else
    return CGameSceneNode::AttachToParent(this->m_pSceneNode, 0, nBoneOrAttachName, pOffsetTransform);
}


// CBodyComponent::DetachFromParent  (line 193, @0x0000000001eb5860, libserver.so)
// calls: CGameSceneNode::DetachFromParent
void __fastcall CBodyComponent::DetachFromParent(CBodyComponent *const this)
{
  CGameSceneNode *m_pSceneNode; // rdi

  m_pSceneNode = this->m_pSceneNode;
  if ( m_pSceneNode != 0 )
    CGameSceneNode::DetachFromParent(m_pSceneNode);
}


// CBodyComponent::GetParent  (line 202, @0x0000000001eb6ed0, libserver.so)
// callers: CSource2GameEntities::CheckEntities
CEntityInstance *__fastcall CBodyComponent::GetParent(const CBodyComponent *const this)
{
  CGameSceneNode *m_pSceneNode; // rax
  CGameSceneNode *m_pParent; // rax

  m_pSceneNode = this->m_pSceneNode;
  if ( m_pSceneNode != 0 && (m_pParent = m_pSceneNode->m_pParent) != 0 )
    return m_pParent->m_pOwner;
  else
    return 0;
}


// CBodyComponent::IsAttachedToParent  (line 213, @0x0000000001eb56a0, libserver.so)  // inlines: GetParent
bool __fastcall CBodyComponent::IsAttachedToParent(const CBodyComponent *const this)
{
  CGameSceneNode *m_pSceneNode; // rax
  CGameSceneNode *m_pParent; // rax

  m_pSceneNode = this->m_pSceneNode;
  return m_pSceneNode != 0 && (m_pParent = m_pSceneNode->m_pParent) != 0 && m_pParent->m_pOwner != 0;
}


// CBodyComponent::ComputeBoneOrAttachmentToWorld  (line 222, @0x0000000001eb6f00, libserver.so)
// calls: CGameSceneNode::ComputeBoneOrAttachmentToWorld
// callers: CDevtestHierarchy::ResetDynamicChildPosition, CBaseEntity::GetParentToWorldTransform
void __fastcall CBodyComponent::ComputeBoneOrAttachmentToWorld(
        const CBodyComponent *const this,
        CUtlStringToken nBoneOrAttachName,
        matrix3x4a_t *pBoneToWorld)
{
  CGameSceneNode *m_pSceneNode; // rdi
  __int64 v4; // rax

  m_pSceneNode = this->m_pSceneNode;
  if ( m_pSceneNode != 0 )
  {
    CGameSceneNode::ComputeBoneOrAttachmentToWorld(m_pSceneNode, nBoneOrAttachName, pBoneToWorld);
  }
  else
  {
    *&pBoneToWorld->m_flMatVal[0][0] = *&g_MatrixIdentity.m_flMatVal[0][0];
    *&pBoneToWorld->m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
    *&pBoneToWorld->m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
    v4 = *&g_MatrixIdentity.m_flMatVal[2][2];
    *&pBoneToWorld->m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
    *&pBoneToWorld->m_flMatVal[2][2] = v4;
  }
}


// CBodyComponent::LookupAttachment  (line 239, @0x0000000001eb6f50, libserver.so)  // inlines: LookupSkeletonInstance
// calls: CBodyComponent::LookupGameSceneNode, CSkeletonInstance::LookupAttachment
SkeletonAttachmentHandle_t __fastcall CBodyComponent::LookupAttachment(
        CBodyComponent *const this,
        CUtlStringToken skeletonName,
        CUtlStringToken attachmentName)
{
  CGameSceneNode *v4; // rax
  const CSkeletonInstance *v5; // rax
  CSkeletonInstance *v6; // rbx
  AttachmentHandle_t v7; // cl
  SkeletonAttachmentHandle_t result; // 0:rax.9

  v4 = CBodyComponent::LookupGameSceneNode(this, skeletonName);
  if ( v4 != 0 && (v5 = (*(v4->_vptr_CGameSceneNode + 9))(v4), v6 = v5, v5 != 0) )
  {
    v7 = CSkeletonInstance::LookupAttachment(v5, attachmentName);
    result.m_pSkeletonInstance = v6;
    result.m_hAttachmentHandle = v7;
    if ( v7 == 0 )
    {
      result.m_pSkeletonInstance = 0;
      result.m_hAttachmentHandle = 0;
    }
  }
  else
  {
    result.m_pSkeletonInstance = 0;
    result.m_hAttachmentHandle = 0;
  }
  return result;
}


// CBodyComponent::SetupAttachmentTransform  (line 252, @0x0000000001eb6fc0, libserver.so)  // inlines: IsValid
// calls: CSkeletonInstance::SetupAttachmentTransform, SetIdentityTransform
void __fastcall CBodyComponent::SetupAttachmentTransform(
        CBodyComponent *this,
        SkeletonAttachmentHandle_t a2,
        CTransform *a3,
        CTransform *a4,
        CTransform *a5)
{
  AttachmentHandle_t m_hAttachmentHandle; // r12
  CSkeletonInstance *m_pSkeletonInstance; // rbx

  m_hAttachmentHandle = a2.m_hAttachmentHandle;
  m_pSkeletonInstance = a2.m_pSkeletonInstance;
  if ( a2.m_pSkeletonInstance == 0 || a2.m_hAttachmentHandle == 0 )
    SetIdentityTransform(a5);
  CSkeletonInstance::SetupAttachmentTransform(m_pSkeletonInstance, m_hAttachmentHandle, a3, a4, a5);
}


// CBodyComponent::SetBodyGroup  (line 262, @0x0000000001eb61d0, libserver.so)  // inlines: GetSkeletonInstance, MakeStringToken
// calls: CSkeletonInstance::SetSingleMeshGroup, MurmurHash2LowerCase, RegisterStringToken
// callers: CBaseAnimating::InputSetBodyGroup
void __fastcall CBodyComponent::SetBodyGroup(CBodyComponent *const this, const char *pBodyGroupName)
{
  CSkeletonInstance *v3; // rbx
  CUtlStringToken v4; // esi
  uint32 v5; // eax
  uint32 v6; // [rsp+Ch] [rbp-14h]

  v3 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v3 != 0 )
  {
    v4.m_nHashCode = 0;
    if ( pBodyGroupName != 0 && *pBodyGroupName != 0 )
    {
      v5 = MurmurHash2LowerCase(pBodyGroupName, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
      {
        v6 = v5;
        RegisterStringToken(v5, pBodyGroupName, 0, 1);
        v4.m_nHashCode = v6;
      }
      else
      {
        v4.m_nHashCode = v5;
      }
    }
    CSkeletonInstance::SetSingleMeshGroup(v3, v4);
  }
}


// CBodyComponent::SetModel  (line 274, @0x0000000001eb7020, libserver.so)  // inlines: CWeakHandle, GetSkeletonInstance, Init
// calls: CSkeletonInstance::SetModel
// callers: CBaseModelEntity::SetModel
void __fastcall CBodyComponent::SetModel(CBodyComponent *const this, HModel hModel)
{
  CSkeletonInstance *v3; // rax
  HModel hModela; // [rsp+0h] [rbp-20h] BYREF

  v3 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v3 != 0 )
  {
    hModela.m_pBinding = hModel.m_pBinding->m_pData;
    CSkeletonInstance::SetModel(v3, &hModela);
  }
}


// CBodyComponent::SetModelAsync  (line 283, @0x0000000001eb7060, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::SetModelAsync
// callers: CBaseModelEntity::SetModelAsync
void __fastcall CBodyComponent::SetModelAsync(CBodyComponent *const this, const char *pBodyModelName)
{
  CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v3 != 0 )
    CSkeletonInstance::SetModelAsync(v3, pBodyModelName);
}


// CBodyComponent::EyeHeight  (line 292, @0x0000000001eb70a0, libserver.so)
float __fastcall CBodyComponent::EyeHeight(const CBodyComponent *const this)
{
  return 64.0;
}


// CBodyComponent::SetEntityToWorldTransform  (line 297, @0x0000000001eb70b0, libserver.so)
// calls: CGameSceneNode::SetNodeToWorldTransform
void __fastcall CBodyComponent::SetEntityToWorldTransform(
        CBodyComponent *const this,
        const matrix3x4a_t *const entityToWorld)
{
  CGameSceneNode::SetNodeToWorldTransform(this->m_pSceneNode, entityToWorld, 0);
}


// CBodyComponent::AddVelocity  (line 303, @0x0000000001eb56d0, libserver.so)  // inlines: GetSkeletonInstance
void __fastcall CBodyComponent::AddVelocity(
        CBodyComponent *const this,
        const Vector *const vVelocity,
        const Vector *const vAngVel)
{
  __int64 v4; // rax
  __int64 v5; // r14
  int v6; // r13d
  unsigned int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rbx

  v4 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v4 != 0 )
  {
    v5 = *(v4 + 536);
    if ( v5 != 0 )
    {
      v6 = (*(*v5 + 72LL))(v5);
      if ( v6 > 0 )
      {
        v7 = 0;
        do
        {
          v8 = v7++;
          v9 = (*(*v5 + 80LL))(v5, v8);
          (*(*v9 + 552LL))(v9, vVelocity);
          (*(*v9 + 584LL))(v9, vAngVel);
        }
        while ( v7 != v6 );
      }
    }
  }
}


// CBodyComponent::AddImpulseAtPosition  (line 322, @0x0000000001eb5770, libserver.so)  // inlines: GetSkeletonInstance
// callers: CDecalGameSystem::OnShootDecal
void __fastcall CBodyComponent::AddImpulseAtPosition(
        CBodyComponent *const this,
        const Vector *const vLinear,
        const Vector *const vPosition)
{
  __int64 v5; // r15
  int v6; // r12d
  unsigned int i; // ebx
  __int64 v8; // rsi
  __int64 v9; // rax

  v5 = *((*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode) + 536);
  if ( v5 != 0 )
  {
    v6 = (*(*v5 + 72LL))(v5);
    if ( v6 > 0 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = i;
        v9 = (*(*v5 + 80LL))(v5, v8);
        (*(*v9 + 648LL))(v9, vLinear, vPosition);
      }
    }
  }
}


// CBodyComponent::AddImpulseAtCenter  (line 335, @0x0000000001eb70c0, libserver.so)  // inlines: GetSkeletonInstance
void __fastcall CBodyComponent::AddImpulseAtCenter(CBodyComponent *const this, const Vector *const vLinear)
{
  __int64 v3; // r12
  int v4; // r13d
  unsigned int i; // ebx
  __int64 v6; // rsi
  __int64 v7; // rax

  v3 = *((*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode) + 536);
  if ( v3 != 0 )
  {
    v4 = (*(*v3 + 72LL))(v3);
    if ( v4 > 0 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = i;
        v7 = (*(*v3 + 80LL))(v3, v6);
        (*(*v7 + 640LL))(v7, vLinear);
      }
    }
  }
}


// CBodyComponent::SetVelocity  (line 349, @0x0000000001eb5880, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::SetVelocity
void __fastcall CBodyComponent::SetVelocity(CBodyComponent *const this, const Vector *const vVelocity)
{
  CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v3 != 0 )
    CSkeletonInstance::SetVelocity(v3, vVelocity);
}


// CBodyComponent::SetAngularVelocity  (line 358, @0x0000000001eb58c0, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::SetAngularVelocity
void __fastcall CBodyComponent::SetAngularVelocity(CBodyComponent *const this, const Vector *const vAngVel)
{
  CSkeletonInstance *v3; // rax

  v3 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v3 != 0 )
    CSkeletonInstance::SetAngularVelocity(v3, vAngVel);
}


// CBodyComponent::WorldSpaceCenter  (line 367, @0x0000000001eb7130, libserver.so)  // inlines: CalcAbsolutePosition, EntityToWorldTransform, GetCenter, GetSkeletonInstance, Load, NodeToWorldTransform, VectorAdd, VectorDivide, operator+, operator/
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
Vector __fastcall CBodyComponent::WorldSpaceCenter(const CBodyComponent *const this)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  CGameSceneNode *m_pSceneNode; // rbx
  __int64 v7; // [rsp+10h] [rbp-40h]
  float v8; // [rsp+18h] [rbp-38h]
  AABB_t bbox; // [rsp+20h] [rbp-30h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v2 != 0 && (v3 = *(v2 + 536)) != 0 )
  {
    (*(*v3 + 344LL))(v3, &bbox);
    *(&v7 + 1) = (bbox.m_vMaxBounds.y + bbox.m_vMinBounds.y) * 0.5;
    v8 = (bbox.m_vMaxBounds.z + bbox.m_vMinBounds.z) * 0.5;
    *&v7 = (bbox.m_vMaxBounds.x + bbox.m_vMinBounds.x) * 0.5;
  }
  else
  {
    m_pSceneNode = this->m_pSceneNode;
    if ( m_pSceneNode->m_bDirtyAbsTransform.m_value )
      CGameSceneNode::CalcAbsolutePositionWhenDirty(m_pSceneNode);
    HIDWORD(v7) = LODWORD(m_pSceneNode->m_mNodeToWorld.m_flMatVal[1][3]);
    v8 = m_pSceneNode->m_mNodeToWorld.m_flMatVal[2][3];
    *&v7 = m_pSceneNode->m_mNodeToWorld.m_flMatVal[0][3];
  }
  *&result.x = v7;
  result.z = v8;
  return result;
}


// CBodyComponent::CollisionToWorldTransform  (line 384, @0x0000000001eb7200, libserver.so)  // inlines: CalcAbsolutePosition, GetAbsOrigin, Load, MatrixSetColumn, PositionMatrix, SetColumn
// calls: CGameSceneNode::CalcAbsolutePositionWhenDirty
// callers: IDebugOverlay::CollisionToWorldTransform, IDebugOverlay::EntityText, IDebugOverlay::EntityBounds
matrix3x4a_t *__fastcall CBodyComponent::CollisionToWorldTransform(
        matrix3x4a_t *__return_ptr retstr,
        const CBodyComponent *const this)
{
  CGameSceneNode *m_pSceneNode; // r12
  __int64 v4; // rax

  m_pSceneNode = this->m_pSceneNode;
  *&retstr->m_flMatVal[0][0] = *&g_MatrixIdentity.m_flMatVal[0][0];
  *&retstr->m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
  *&retstr->m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
  v4 = *&g_MatrixIdentity.m_flMatVal[2][2];
  *&retstr->m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
  *&retstr->m_flMatVal[2][2] = v4;
  if ( m_pSceneNode->m_bDirtyAbsTransform.m_value )
    CGameSceneNode::CalcAbsolutePositionWhenDirty(m_pSceneNode);
  retstr->m_flMatVal[0][3] = m_pSceneNode->m_vecAbsOrigin.x;
  retstr->m_flMatVal[1][3] = m_pSceneNode->m_vecAbsOrigin.y;
  retstr->m_flMatVal[2][3] = m_pSceneNode->m_vecAbsOrigin.z;
  return retstr;
}


// CBodyComponent::GetOBB  (line 395, @0x0000000001eb7290, libserver.so)  // inlines: GetSkeletonInstance, Init
// calls: CSkeletonInstance::GetOBB
void __fastcall CBodyComponent::GetOBB(const CBodyComponent *const this, Vector *pMins, Vector *pMaxs)
{
  const CSkeletonInstance *v5; // rax

  v5 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v5 != 0 )
  {
    CSkeletonInstance::GetOBB(v5, pMins, pMaxs);
  }
  else
  {
    pMins->x = 0.0;
    pMins->y = 0.0;
    pMins->z = 0.0;
    pMaxs->x = 0.0;
    pMaxs->y = 0.0;
    pMaxs->z = 0.0;
  }
}


// CBodyComponent::GetWorldSpaceAABB  (line 409, @0x0000000001eb7300, libserver.so)  // inlines: GetSkeletonInstance, Init
// calls: CSkeletonInstance::GetWorldSpaceAABB
void __fastcall CBodyComponent::GetWorldSpaceAABB(const CBodyComponent *const this, Vector *pMins, Vector *pMaxs)
{
  const CSkeletonInstance *v5; // rax

  v5 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v5 != 0 )
  {
    CSkeletonInstance::GetWorldSpaceAABB(v5, pMins, pMaxs);
  }
  else
  {
    pMins->x = 0.0;
    pMins->y = 0.0;
    pMins->z = 0.0;
    pMaxs->x = 0.0;
    pMaxs->y = 0.0;
    pMaxs->z = 0.0;
  }
}


// CBodyComponent::OBBMins  (line 423, @0x0000000001eb7370, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::OBBMins
// callers: IDebugOverlay::EntityText, IDebugOverlay::EntityBounds
Vector __fastcall CBodyComponent::OBBMins(const CBodyComponent *const this)
{
  const CSkeletonInstance *v1; // rax
  Vector v4; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v1 != 0 )
  {
    v4 = CSkeletonInstance::OBBMins(v1);
    *&result.x = *&v4.x;
    result.z = v4.z;
  }
  else
  {
    *&result.x = *&vec3_origin.x;
    result.z = vec3_origin.z;
  }
  return result;
}


// CBodyComponent::OBBMaxs  (line 431, @0x0000000001eb73d0, libserver.so)  // inlines: GetSkeletonInstance
// calls: CSkeletonInstance::OBBMaxs
// callers: IDebugOverlay::EntityText, IDebugOverlay::EntityBounds
Vector __fastcall CBodyComponent::OBBMaxs(const CBodyComponent *const this)
{
  const CSkeletonInstance *v1; // rax
  Vector v4; // 0:kr00_12.12
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v1 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v1 != 0 )
  {
    v4 = CSkeletonInstance::OBBMaxs(v1);
    *&result.x = *&v4.x;
    result.z = v4.z;
  }
  else
  {
    *&result.x = *&vec3_origin.x;
    result.z = vec3_origin.z;
  }
  return result;
}


// CBodyComponent::GetRenderBoundsWorldSpace  (line 439, @0x0000000001eb7430, libserver.so)  // inlines: GetSkeletonInstance, Init
// calls: CSkeletonInstance::GetRenderBoundsWorldSpace
// callers: CNetworkTransmitComponent::CalcPhysicalSpawnGroupHandle
void __fastcall CBodyComponent::GetRenderBoundsWorldSpace(
        const CBodyComponent *const this,
        Vector *pMins,
        Vector *pMaxs)
{
  const CSkeletonInstance *v5; // rax

  v5 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v5 != 0 )
  {
    CSkeletonInstance::GetRenderBoundsWorldSpace(v5, pMins, pMaxs);
  }
  else
  {
    pMins->x = 0.0;
    pMins->y = 0.0;
    pMins->z = 0.0;
    pMaxs->x = 0.0;
    pMaxs->y = 0.0;
    pMaxs->z = 0.0;
  }
}


// CBodyComponent::GetRenderBounds  (line 454, @0x0000000001eb74a0, libserver.so)  // inlines: GetSkeletonInstance, Init
// calls: CSkeletonInstance::GetRenderBounds
void __fastcall CBodyComponent::GetRenderBounds(const CBodyComponent *const this, Vector *pMins, Vector *pMaxs)
{
  const CSkeletonInstance *v5; // rax

  v5 = (*(this->m_pSceneNode->_vptr_CGameSceneNode + 9))(this->m_pSceneNode);
  if ( v5 != 0 )
  {
    CSkeletonInstance::GetRenderBounds(v5, pMins, pMaxs);
  }
  else
  {
    pMins->x = 0.0;
    pMins->y = 0.0;
    pMins->z = 0.0;
    pMaxs->x = 0.0;
    pMaxs->y = 0.0;
    pMaxs->z = 0.0;
  }
}


// CBodyComponent::SetPlaybackRate  (line 469, @0x0000000001eb7510, libserver.so)
void __fastcall CBodyComponent::SetPlaybackRate(CBodyComponent *const this, double a2, float value)
{
  __int64 v3; // rax
  float valuea; // [rsp+Ch] [rbp-4h]

  valuea = *&a2;
  v3 = (*this->_vptr_CBodyComponent)(this, a2, value);
  (*(*v3 + 176LL))(v3, valuea);
}


// CBodyComponent::SetAnimationSequence  (line 474, @0x0000000001eb57f0, libserver.so)
void __fastcall CBodyComponent::SetAnimationSequence(CBodyComponent *const this, HSequence hSequence)
{
  __int64 v3; // rax

  v3 = (*this->_vptr_CBodyComponent)(this);
  (*(*v3 + 184LL))(v3, hSequence.m_Data, 1);
}


// CBodyComponent::SetAnimationSequence  (line 479, @0x0000000001eb5900, libserver.so)
// calls: CSkeletonAnimationController::SetSequence
void __fastcall CBodyComponent::SetAnimationSequence(CBodyComponent *const this, const char *pSequenceName)
{
  CSkeletonAnimationController *v3; // rax

  v3 = (*this->_vptr_CBodyComponent)(this);
  CSkeletonAnimationController::SetSequence(v3, pSequenceName, SetSequenceBehavior_t::SET_SEQUENCE_RESET_CYCLE);
}


// CBodyComponent::GetSequence  (line 484, @0x0000000001eb5820, libserver.so)  // inlines: GetAnimationController
HSequence __fastcall CBodyComponent::GetSequence(const CBodyComponent *const this)
{
  __int64 v1; // rax

  v1 = (*this->_vptr_CBodyComponent)(this);
  return (*(*v1 + 192LL))(v1);
}


// CBodyComponent::SequenceDuration  (line 489, @0x0000000001eb5930, libserver.so)  // inlines: GetAnimationController
// calls: CSkeletonAnimationController::SequenceDuration
float __fastcall CBodyComponent::SequenceDuration(const CBodyComponent *const this, const char *pSequenceName)
{
  const CSkeletonAnimationController *v3; // rax

  v3 = (*this->_vptr_CBodyComponent)(this);
  return CSkeletonAnimationController::SequenceDuration(v3, pSequenceName);
}


// CBodyComponent::LookupSequence  (line 494, @0x0000000001eb5960, libserver.so)  // inlines: GetAnimationController, LookupSequence
// calls: CSkeletonInstance::LookupSequence
// callers: CBodyComponentBaseAnimating::SetAnimationSequence
HSequence __fastcall CBodyComponent::LookupSequence(const CBodyComponent *const this, const char *pSequenceName)
{
  __int64 v3; // rax

  v3 = (*this->_vptr_CBodyComponent)(this);
  return CSkeletonInstance::LookupSequence(*(v3 + 8), pSequenceName);
}


