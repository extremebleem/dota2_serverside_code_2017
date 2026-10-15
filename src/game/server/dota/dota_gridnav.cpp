// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_gridnav.cpp:797
class RegionBounds {
private:

	int m_nMinX;  // +0x0
	int m_nMinY;  // +0x4
	int m_nMaxX;  // +0x8
	int m_nMaxY;  // +0xc
	RegionBounds(int, int, int, int);
	bool OutOfBounds(int, int);

	// sizeof = 16
};

// src/game/server/dota/dota_gridnav.cpp:1133
class CGridNavOpenList {
	struct GridNavHeapEntry_t {
		unsigned int m_nScore;  // +0x0
		unsigned int m_nIndex;  // +0x4

		// sizeof = 16
	};

	class CGridNavHeapLessFunc {
		bool operator()(const GridNavHeapEntry_t &, const GridNavHeapEntry_t &, bool (*)(const GridNavHeapEntry_t &, const GridNavHeapEntry_t &));

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CGridNavSetHeapEntryIndex {
		void SetIndex(GridNavHeapEntry_t &, int);

		// sizeof = 1
	};

private:

	unsigned int m_nTotalNodesAdded;  // +0x8020
	CGridNavOpenList();
	CGridNavNode * RemoveFirst();
	void AddNode(CGridNavNode *);
	void UpdateNodeCost(const CGridNavNode *);
	int Count();
	~CGridNavOpenList();

	// sizeof = 32808
};

// src/game/server/dota/dota_gridnav.cpp:2271
class CHeightMapSceneObject : public CSceneObject {
public:

private:

	int m_nNumVertices;  // +0xa0

	VertexBufferHandle_t m_hVertexBuffer;  // +0xa8
	CHeightMapSceneObject(const CHeightMapSceneObject &);
	CHeightMapSceneObject();
	virtual ~CHeightMapSceneObject();
	void ConstructVertexBuffer(const CHeightCellGrid &);
	void Draw(IRenderContext *, ISceneLayer *);
	void BuildVertexList(const CHeightCellGrid &, CUtlVector<VertexColorPos_t, CUtlMemory<VertexColorPos_t, int> > *);

	// sizeof = 176
};

// src/game/server/dota/dota_gridnav.cpp:2512
class CGridSceneObjectDescriptor : public ISceneObjectDescBase<CHeightMapSceneObject> {
public:

	CGridSceneObjectDescriptor(CGridSceneObjectDescriptor &);
	CGridSceneObjectDescriptor(const CGridSceneObjectDescriptor &);
	CGridSceneObjectDescriptor();

private:

	virtual CSceneObject * Create();
	virtual void DrawArray(IRenderContext *, CMeshDrawPrimitive_t *, int, const ISceneView *, ISceneLayer *, SceneSystemPerFrameStats_t &);

	// vtable[15] Create
	// vtable[0] DrawArray
	// sizeof = 8
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGridNav::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 20, @0x00000000024d5d90, libserver.so)
void __cdecl CGridNav::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// GetScriptDesc<CGridNav>  (line 22, @0x00000000024f0170, libserver.so)  // inlines: AddParameterType, CUtlMemory, CUtlVector, CUtlVectorBase, Finalize, ScriptClassDesc_t, ScriptDeduceFunctionSignature<CGridNav*, CGridNav, CVariantBase<CVariantDefaultAllocator>, Vector, float, bool>, ScriptDeduceFunctionSignature<CGridNav*, CGridNav, bool, Vector, Vector>, ScriptDeduceFunctionSignature<CGridNav*, CGridNav, bool, Vector, float, bool>, ScriptDeduceFunctionSignature<CGridNav*, CGridNav, float, Vector, Vector>, ScriptDeduceFunctionSignature<CGridNav*, CGridNav, void, Vector, float, bool>, ScriptDeduceFunctionSignature<CGridNav*, CGridNav, void>, ScriptDeduceFunctionSignature<CGridNav*, CGridNavBase, bool, const Vector&>, ScriptDeduceFunctionSignature<CGridNav*, CGridNavBase, float, int>, ScriptDeduceFunctionSignature<CGridNav*, CGridNavBase, int, float>, SetDescription, SetFunctionName, SetReturnType, SetScriptName, operator[]
// calls: operator new, CUtlVectorBase<ScriptFunctionBinding_t, CUtlMemory<ScriptFunctionBinding_t, int> >::AddToTail
// callers: CDOTAVScriptGameSystem::InstallScriptBindings
// strings: "!The grid navigation system", "CGridNav", "Get the X index of a given world X position", "WorldToGridPosX", "Get the Y index of a given world Y position", "WorldToGridPosY" (27 total)
// globals: g_pCGridNav_ScriptDesc, CMemberScriptBinding1<CGridNav *,int (CGridNavBase::*)(float),int,float>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantD, CGridNavBase::WorldToGridPosX(float), CGridNavBase::WorldToGridPosY(float), CMemberScriptBinding1<CGridNav *,float (CGridNavBase::*)(int),float,int>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVariantBase<CVariantD, CGridNavBase::GridPosToWorldCenterX(int), CGridNavBase::GridPosToWorldCenterY(int), CMemberScriptBinding1<CGridNav *,bool (CGridNavBase::*)(Vector const&),bool,Vector const&>::Call(void *,void *,CVariantBase<CVariantDefaultAllocator> *,int,CVar (22 total)
ScriptClassDesc_t *__fastcall GetScriptDesc<CGridNav>(CGridNav *pScriptDescObjectInstance)
{
  ScriptClassDesc_t *result; // rax
  ScriptClassDesc_t *v2; // r12
  CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int> > *p_m_FunctionBindings; // rbx
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rdx
  int v7; // eax
  char v8; // dl
  char v9; // di
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rdx
  int v13; // eax
  char v14; // dl
  char v15; // di
  __int64 v16; // rcx
  char v17; // dl
  __int64 v18; // rax
  int v19; // edx
  char v20; // al
  char v21; // di
  __int64 v22; // rcx
  char v23; // dl
  __int64 v24; // rax
  int v25; // edx
  char v26; // al
  char v27; // di
  __int64 v28; // rcx
  char v29; // dl
  __int64 v30; // rax
  int v31; // edx
  char v32; // al
  char v33; // di
  __int64 v34; // rcx
  char v35; // dl
  __int64 v36; // rax
  int v37; // edx
  char v38; // al
  char v39; // di
  __int64 v40; // rcx
  char v41; // dl
  char v42; // al
  int v43; // edx
  char v44; // al
  char v45; // di
  __int64 v46; // rax
  char v47; // dl
  char v48; // cl
  int v49; // edx
  char v50; // cl
  __int64 v51; // rcx
  char v52; // dl
  char v53; // al
  int v54; // edx
  char v55; // al
  char v56; // di
  __int64 v57; // rcx
  int v58; // edx
  int v59; // edx
  char v60; // al
  char v61; // di
  __int64 v62; // rcx
  char v63; // dl
  char v64; // al
  int v65; // edx
  char v66; // al
  char v67; // di
  __int64 v68; // rcx
  char v69; // dl
  char v70; // al
  int v71; // edx
  char v72; // al
  char v73; // di

  result = g_pCGridNav_ScriptDesc;
  if ( g_pCGridNav_ScriptDesc == 0 )
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
    g_pCGridNav_ScriptDesc = v2;
    v2->m_pszDescription = "!The grid navigation system";
    v2->m_pszScriptName = "GridNav";
    v2->m_pszClassname = "CGridNav";
    v4 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(&v2->m_FunctionBindings)];
    *(v4 + 24) = 5;
    *(v4 + 16) = "Get the X index of a given world X position";
    *v4 = "WorldToGridPosX";
    *(v4 + 8) = "WorldToGridPosX";
    v5 = *(v4 + 26);
    v6 = v5++;
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
    *(v4 + 48) = CMemberScriptBinding1<CGridNav *,int (CGridNavBase::*)(float),int,float>::Call;
    *(v4 + 56) = CGridNavBase::WorldToGridPosX;
    v10 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    *(v10 + 24) = 5;
    *(v10 + 16) = "Get the Y index of a given world Y position";
    *v10 = "WorldToGridPosY";
    *(v10 + 8) = "WorldToGridPosY";
    v11 = *(v10 + 26);
    v12 = v11++;
    *(v10 + v12 + 27) = 1;
    *(v10 + 26) = v11;
    v13 = v11 - 1;
    *(v10 + 25) = 0;
    if ( v13 >= 0 && *(v10 + v13 + 27) == 32 )
    {
      v14 = 1;
      do
      {
        --v13;
        v15 = v14;
        if ( v13 == -1 )
        {
          *(v10 + 25) = v14;
          goto LABEL_14;
        }
        ++v14;
      }
      while ( *(v10 + v13 + 27) == 32 );
      *(v10 + 25) = v15;
    }
LABEL_14:
    *(v10 + 64) = 1;
    *(v10 + 48) = CMemberScriptBinding1<CGridNav *,int (CGridNavBase::*)(float),int,float>::Call;
    *(v10 + 56) = CGridNavBase::WorldToGridPosY;
    v16 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v17 = *(v16 + 26);
    *(v16 + 24) = 1;
    *(v16 + 16) = "Get the X position of the center of a given X index";
    *v16 = "GridPosToWorldCenterX";
    *(v16 + 8) = "GridPosToWorldCenterX";
    v18 = v17++;
    *(v16 + v18 + 27) = 5;
    *(v16 + 26) = v17;
    v19 = v17 - 1;
    *(v16 + 25) = 0;
    if ( v19 >= 0 && *(v16 + v19 + 27) == 32 )
    {
      v20 = 1;
      do
      {
        --v19;
        v21 = v20;
        if ( v19 == -1 )
        {
          *(v16 + 25) = v20;
          goto LABEL_20;
        }
        ++v20;
      }
      while ( *(v16 + v19 + 27) == 32 );
      *(v16 + 25) = v21;
    }
LABEL_20:
    *(v16 + 64) = 1;
    *(v16 + 48) = CMemberScriptBinding1<CGridNav *,float (CGridNavBase::*)(int),float,int>::Call;
    *(v16 + 56) = CGridNavBase::GridPosToWorldCenterX;
    v22 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v23 = *(v22 + 26);
    *(v22 + 24) = 1;
    *(v22 + 16) = "Get the Y position of the center of a given Y index";
    *v22 = "GridPosToWorldCenterY";
    *(v22 + 8) = "GridPosToWorldCenterY";
    v24 = v23++;
    *(v22 + v24 + 27) = 5;
    *(v22 + 26) = v23;
    v25 = v23 - 1;
    *(v22 + 25) = 0;
    if ( v25 >= 0 && *(v22 + v25 + 27) == 32 )
    {
      v26 = 1;
      do
      {
        --v25;
        v27 = v26;
        if ( v25 == -1 )
        {
          *(v22 + 25) = v26;
          goto LABEL_26;
        }
        ++v26;
      }
      while ( *(v22 + v25 + 27) == 32 );
      *(v22 + 25) = v27;
    }
LABEL_26:
    *(v22 + 64) = 1;
    *(v22 + 48) = CMemberScriptBinding1<CGridNav *,float (CGridNavBase::*)(int),float,int>::Call;
    *(v22 + 56) = CGridNavBase::GridPosToWorldCenterY;
    v28 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v29 = *(v28 + 26);
    *(v28 + 24) = 6;
    *(v28 + 16) = "Checks whether the given position is blocked";
    *v28 = "IsBlocked";
    *(v28 + 8) = "IsBlocked";
    v30 = v29++;
    *(v28 + v30 + 27) = 3;
    *(v28 + 26) = v29;
    v31 = v29 - 1;
    *(v28 + 25) = 0;
    if ( v31 >= 0 && *(v28 + v31 + 27) == 32 )
    {
      v32 = 1;
      do
      {
        --v31;
        v33 = v32;
        if ( v31 == -1 )
        {
          *(v28 + 25) = v32;
          goto LABEL_32;
        }
        ++v32;
      }
      while ( *(v28 + v31 + 27) == 32 );
      *(v28 + 25) = v33;
    }
LABEL_32:
    *(v28 + 64) = 1;
    *(v28 + 48) = CMemberScriptBinding1<CGridNav *,bool (CGridNavBase::*)(Vector const&),bool,Vector const&>::Call;
    *(v28 + 56) = CGridNavBase::IsBlocked;
    v34 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v35 = *(v34 + 26);
    *(v34 + 24) = 6;
    *(v34 + 16) = "Checks whether the given position is traversable";
    *v34 = "IsTraversable";
    *(v34 + 8) = "IsTraversable";
    v36 = v35++;
    *(v34 + v36 + 27) = 3;
    *(v34 + 26) = v35;
    v37 = v35 - 1;
    *(v34 + 25) = 0;
    if ( v37 >= 0 && *(v34 + v37 + 27) == 32 )
    {
      v38 = 1;
      do
      {
        --v37;
        v39 = v38;
        if ( v37 == -1 )
        {
          *(v34 + 25) = v38;
          goto LABEL_38;
        }
        ++v38;
      }
      while ( *(v34 + v37 + 27) == 32 );
      *(v34 + 25) = v39;
    }
LABEL_38:
    *(v34 + 64) = 1;
    *(v34 + 48) = CMemberScriptBinding1<CGridNav *,bool (CGridNavBase::*)(Vector const&),bool,Vector const&>::Call;
    *(v34 + 56) = CGridNavBase::IsTraversable;
    v40 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v41 = *(v40 + 26);
    *(v40 + 24) = 6;
    *(v40 + 16) = "Determine if it is possible to reach the specified end point from the specified start point. bool (vStart, vEnd)";
    *v40 = "CanFindPath";
    *(v40 + 8) = "CanFindPath";
    *(v40 + v41 + 27) = 3;
    v42 = v41 + 1;
    v41 += 2;
    *(v40 + v42 + 27) = 3;
    *(v40 + 26) = v41;
    v43 = v41 - 1;
    *(v40 + 25) = 0;
    if ( v43 >= 0 && *(v40 + v43 + 27) == 32 )
    {
      v44 = 1;
      do
      {
        --v43;
        v45 = v44;
        if ( v43 == -1 )
        {
          *(v40 + 25) = v44;
          goto LABEL_44;
        }
        ++v44;
      }
      while ( *(v40 + v43 + 27) == 32 );
      *(v40 + 25) = v45;
    }
LABEL_44:
    *(v40 + 64) = 1;
    *(v40 + 48) = CMemberScriptBinding2<CGridNav *,bool (CGridNav::*)(Vector,Vector),bool,Vector,Vector>::Call;
    *(v40 + 56) = CGridNav::CanFindPath;
    v46 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v47 = *(v46 + 26);
    *(v46 + 16) = "Find a path between the two points an return the length of the path. If there is not a path between th"
                  "e points the returned value will be -1. float (vStart, vEnd )";
    *v46 = "FindPathLength";
    *(v46 + 8) = "FindPathLength";
    *(v46 + 24) = 1;
    *(v46 + v47 + 27) = 3;
    v48 = v47 + 1;
    v47 += 2;
    *(v46 + v48 + 27) = 3;
    *(v46 + 26) = v47;
    v49 = v47 - 1;
    *(v46 + 25) = 0;
    if ( v49 >= 0 && *(v46 + v49 + 27) == 32 )
    {
      v50 = 0;
      do
      {
        --v49;
        ++v50;
      }
      while ( v49 != -1 && *(v46 + v49 + 27) == 32 );
      *(v46 + 25) = v50;
    }
    *(v46 + 64) = 1;
    *(v46 + 48) = CMemberScriptBinding2<CGridNav *,float (CGridNav::*)(Vector,Vector),float,Vector,Vector>::Call;
    *(v46 + 56) = CGridNav::FindPathLength;
    v51 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v52 = *(v51 + 26);
    *(v51 + 24) = 6;
    *(v51 + 16) = "(position, radius, checkFullTreeRadius?) Checks whether there are any trees overlapping the given point";
    *v51 = "IsNearbyTree";
    *(v51 + 8) = "IsNearbyTree";
    *(v51 + v52 + 27) = 3;
    *(v51 + (v52 + 1) + 27) = 1;
    v53 = v52 + 2;
    v52 += 3;
    *(v51 + v53 + 27) = 6;
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
          goto LABEL_56;
        }
        ++v55;
      }
      while ( *(v51 + v54 + 27) == 32 );
      *(v51 + 25) = v56;
    }
LABEL_56:
    *(v51 + 64) = 1;
    *(v51 + 48) = CMemberScriptBinding3<CGridNav *,bool (CGridNav::*)(Vector,float,bool),bool,Vector,float,bool>::Call;
    *(v51 + 56) = CGridNav::IsNearbyTree;
    v57 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v58 = *(v57 + 26);
    *(v57 + 24) = 0;
    *(v57 + 16) = "Causes all trees in the map to regrow";
    *v57 = "RegrowAllTrees";
    *(v57 + 8) = "RegrowAllTrees";
    v59 = v58 - 1;
    *(v57 + 25) = 0;
    if ( v59 >= 0 && *(v57 + v59 + 27) == 32 )
    {
      v60 = 1;
      do
      {
        --v59;
        v61 = v60;
        if ( v59 == -1 )
        {
          *(v57 + 25) = v60;
          goto LABEL_62;
        }
        ++v60;
      }
      while ( *(v57 + v59 + 27) == 32 );
      *(v57 + 25) = v61;
    }
LABEL_62:
    *(v57 + 64) = 1;
    *(v57 + 48) = CMemberScriptBinding0<CGridNav *,void (CGridNav::*)(void),void>::Call;
    *(v57 + 56) = CGridNav::RegrowAllTrees;
    v62 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v63 = *(v62 + 26);
    *(v62 + 24) = 0;
    *(v62 + 16) = "Destroy all trees in the area(vPosition, flRadius, bFullCollision";
    *v62 = "DestroyTreesAroundPoint";
    *(v62 + 8) = "Script_DestroyTreesAroundPoint";
    *(v62 + v63 + 27) = 3;
    *(v62 + (v63 + 1) + 27) = 1;
    v64 = v63 + 2;
    v63 += 3;
    *(v62 + v64 + 27) = 6;
    *(v62 + 26) = v63;
    v65 = v63 - 1;
    *(v62 + 25) = 0;
    if ( v65 >= 0 && *(v62 + v65 + 27) == 32 )
    {
      v66 = 1;
      do
      {
        --v65;
        v67 = v66;
        if ( v65 == -1 )
        {
          *(v62 + 25) = v66;
          goto LABEL_68;
        }
        ++v66;
      }
      while ( *(v62 + v65 + 27) == 32 );
      *(v62 + 25) = v67;
    }
LABEL_68:
    *(v62 + 64) = 1;
    *(v62 + 48) = CMemberScriptBinding3<CGridNav *,void (CGridNav::*)(Vector,float,bool),void,Vector,float,bool>::Call;
    *(v62 + 56) = CGridNav::Script_DestroyTreesAroundPoint;
    v68 = &v2->m_FunctionBindings.m_Memory.m_pMemory[CUtlVectorBase<ScriptFunctionBinding_t,CUtlMemory<ScriptFunctionBinding_t,int>>::AddToTail(p_m_FunctionBindings)];
    v69 = *(v68 + 26);
    *(v68 + 24) = 32;
    *(v68 + 16) = "Returns a table full of tree HSCRIPTS (vPosition, flRadius, bFullCollision).";
    *v68 = "GetAllTreesAroundPoint";
    *(v68 + 8) = "Script_GetAllTreesAroundPoint";
    *(v68 + v69 + 27) = 3;
    *(v68 + (v69 + 1) + 27) = 1;
    v70 = v69 + 2;
    v69 += 3;
    *(v68 + v70 + 27) = 6;
    *(v68 + 26) = v69;
    v71 = v69 - 1;
    *(v68 + 25) = 0;
    if ( v71 >= 0 && *(v68 + v71 + 27) == 32 )
    {
      v72 = 1;
      do
      {
        --v71;
        v73 = v72;
        if ( v71 == -1 )
        {
          *(v68 + 25) = v72;
          goto LABEL_74;
        }
        ++v72;
      }
      while ( *(v68 + v71 + 27) == 32 );
      *(v68 + 25) = v73;
    }
LABEL_74:
    *(v68 + 64) = 1;
    *(v68 + 48) = CMemberScriptBinding3<CGridNav *,CVariantBase<CVariantDefaultAllocator> (CGridNav::*)(Vector,float,bool),CVariantBase<CVariantDefaultAllocator>,Vector,float,bool>::Call;
    *(v68 + 56) = CGridNav::Script_GetAllTreesAroundPoint;
    return v2;
  }
  return result;
}


// CGridNavCell::ComputeStepCost  (line 42, @0x00000000024d5da0, libserver.so)  // inlines: GetInt
// callers: CGridNav::ComputePortalConnectionCost, CGridNav::FloodFillRegion, CGridNav::BuildPath
int __fastcall CGridNavCell::ComputeStepCost(const CGridNavCell *const this, const CGridNavCell *const stepCell)
{
  int m_nGridPosX; // r9d
  int result; // eax
  int v4; // ecx
  int m_nValue; // edx
  CGridNavNode *m_pParent; // r8
  int m_nGridPosY; // edi
  int v8; // edx

  m_nGridPosX = stepCell->m_nGridPosX;
  result = 10;
  v4 = this->m_nGridPosX;
  if ( v4 != m_nGridPosX )
    result = 4 * (this->m_nGridPosY != stepCell->m_nGridPosY) + 10;
  m_nValue = dota_gridnav_direction_cost.m_pParent->m_Value.m_nValue;
  if ( m_nValue != 0 )
  {
    m_pParent = this->m_pParent;
    if ( m_pParent != 0 && !m_pParent->m_bIsPortal )
    {
      m_nGridPosY = this->m_nGridPosY;
      if ( v4 - *(&m_pParent->m_bIsPortal + 1) != m_nGridPosX - v4 )
        result += m_nValue;
      v8 = result + m_nValue;
      if ( m_nGridPosY - m_pParent[1].m_nListID != stepCell->m_nGridPosY - m_nGridPosY )
        return v8;
    }
  }
  return result;
}


// CGridNavNode::CGridNavNode  (line 65, @0x00000000024d5e20, libserver.so)
void __fastcall CGridNavNode::CGridNavNode(CGridNavNode *const this, bool bIsPortal)
{
  this->m_nListID = 0;
  this->m_pParent = 0;
  this->m_pOpenListNext = 0;
  this->m_nHeuristic = 0;
  this->m_nCost = 0;
  this->m_bIsPortal = bIsPortal;
}


// CGridNavCell::CGridNavCell  (line 76, @0x00000000024d5e50, libserver.so)  // inlines: CGridNavNode
void __fastcall CGridNavCell::CGridNavCell(CGridNavCell *const this)
{
  this->m_nListID = 0;
  this->m_pParent = 0;
  this->m_pOpenListNext = 0;
  this->m_nHeuristic = 0;
  this->m_nCost = 0;
  this->m_bIsPortal = 0;
  this->m_nGridPosX = 0;
  this->m_nGridPosY = 0;
}


// CGridNavSector::CGridNavSector  (line 84, @0x00000000024dc2b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37>::OnFileLoaded
void __fastcall CGridNavSector::CGridNavSector(CGridNavSector *const this)
{
  CGridNavSector *v1; // rax
  CUtlVectorBase<CGridNavSectorPortal,CUtlMemory<CGridNavSectorPortal,int> >::CAllocator *p_m_Memory; // rcx
  CGridNavSector *v3; // rdx
  signed __int64 v4; // rdx

  v1 = this;
  p_m_Memory = &this->m_Portals[0].m_Memory;
  do
  {
    v1->m_Portals[0].m_Size = 0;
    v3 = v1;
    v1 = (v1 + 24);
    v4 = v3 - this;
    *(&p_m_Memory->m_pMemory + v4) = 0;
    *(&p_m_Memory->m_nAllocationCount + v4) = 0;
    *(&p_m_Memory->m_nGrowSize + v4) = 0;
  }
  while ( v1 != &this->m_nSectorX );
  this->m_nSectorX = 0;
  this->m_nSectorY = 0;
  this->m_nBaseRegionID = 0;
  this->m_bDirty = 1;
}


// CGridNavSectorPortal::CGridNavSectorPortal  (line 93, @0x00000000024d5e90, libserver.so)  // inlines: CGridNavNode, CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CGridNav::BuildSector
void __fastcall CGridNavSectorPortal::CGridNavSectorPortal(CGridNavSectorPortal *const this)
{
  this->m_nListID = 0;
  this->m_pParent = 0;
  this->m_pOpenListNext = 0;
  this->m_nHeuristic = 0;
  this->m_nCost = 0;
  this->m_bIsPortal = 1;
  this->m_Connections.m_Size = 0;
  this->m_Connections.m_Memory.m_pMemory = 0;
  this->m_Connections.m_Memory.m_nAllocationCount = 0;
  this->m_Connections.m_Memory.m_nGrowSize = 0;
  this->m_pSector = 0;
}


// CGridNav::CGridNav  (line 100, @0x00000000024d7010, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CGridNavBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGridNavBase::CGridNavBase, C2DGridObstructionManager::C2DGridObstructionManager, IGameSystem::~IGameSystem, _Unwind_Resume, CUtlMemory<unsigned char, int>::Purge
// callers: _GLOBAL__sub_I__unity_dota_03.cpp
void __fastcall CGridNav::CGridNav(CGridNav *const this)
{
  CGridNavBase::CGridNavBase(this);
  this->_vptr_IGameSystem = &off_40FD850;
  C2DGridObstructionManager::C2DGridObstructionManager(&this->m_ObstructionManager);
  this->m_bLoaded = 0;
  this->m_bSectorsInitialized = 0;
  this->m_nSectorWidth = 0;
  this->m_nSectorHeight = 0;
  this->m_pCells = 0;
  this->m_pSectors = 0;
}


// CGridNav::~CGridNav  (line 111, @0x00000000024dc420, libserver.so)  // inlines: Purge, RemoveAll, ~CAutoGameSystem, ~CGridNavBase, ~CGridNavSector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete [], CUtlVectorBase<CGridNavSectorPortal, CUtlMemory<CGridNavSectorPortal, int> >::RemoveAll, CUtlMemory<CGridNavSectorPortal, int>::Purge, C2DGridObstructionManager::DeInit, C2DGridObstructionManager::~C2DGridObstructionManager, IGameSystem::~IGameSystem, CUtlMemory<unsigned char, int>::Purge
// callers: CGridNav::~CGridNav
void __fastcall CGridNav::~CGridNav(CGridNav *const this)
{
  CGridNavCell *m_pCells; // rdi
  CGridNavSector *m_pSectors; // rax
  CGridNavSector *v4; // r12
  CUtlVectorBase<CGridNavSectorPortal,CUtlMemory<CGridNavSectorPortal,int> > *p_m_nSectorX; // rbx
  bool v6; // zf

  this->_vptr_IGameSystem = &off_40FD850;
  m_pCells = this->m_pCells;
  if ( m_pCells != 0 )
  {
    operator delete[](m_pCells);
    this->m_pCells = 0;
  }
  m_pSectors = this->m_pSectors;
  if ( m_pSectors != 0 )
  {
    v4 = &m_pSectors[*&m_pSectors[-1].m_nBaseRegionID];
    while ( v4 != m_pSectors )
    {
      while ( --v4 != 0 )
      {
        p_m_nSectorX = &v4->m_nSectorX;
        do
        {
          while ( 1 )
          {
            CUtlVectorBase<CGridNavSectorPortal,CUtlMemory<CGridNavSectorPortal,int>>::RemoveAll(--p_m_nSectorX);
            if ( (p_m_nSectorX->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<CGridNavSectorPortal,int>::Purge(&p_m_nSectorX->m_Memory);
              if ( (p_m_nSectorX->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                break;
            }
            if ( v4 == p_m_nSectorX )
              goto LABEL_12;
          }
          CUtlMemory<CGridNavSectorPortal,int>::Purge(&p_m_nSectorX->m_Memory);
        }
        while ( v4 != p_m_nSectorX );
LABEL_12:
        m_pSectors = this->m_pSectors;
        if ( v4 == m_pSectors )
          goto LABEL_13;
      }
    }
LABEL_13:
    operator delete[](&v4[-1].m_nBaseRegionID);
    this->m_pSectors = 0;
  }
  C2DGridObstructionManager::DeInit(&this->m_ObstructionManager);
  C2DGridObstructionManager::~C2DGridObstructionManager(&this->m_ObstructionManager);
  v6 = (this->m_CellFlags.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = off_40F6C10;
  this->m_CellFlags.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<unsigned char,int>::Purge(&this->m_CellFlags.m_Memory);
    if ( (this->m_CellFlags.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned char,int>::Purge(&this->m_CellFlags.m_Memory);
  }
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CGridNav::~CGridNav  (line 111, @0x00000000024dc560, libserver.so)
// calls: CGridNav::~CGridNav, operator delete
void __fastcall CGridNav::~CGridNav(CGridNav *const this)
{
  CGridNav::~CGridNav(this);
  operator delete(this);
}


// CGridNav::Init  (line 129, @0x00000000024b46e0, libserver.so)
bool __fastcall CGridNav::Init(CGridNav *const this)
{
  return 1;
}


// CGridNav::GameInit  (line 135, @0x00000000024dc310, libserver.so)  // inlines: Purge, ~CGridNavSector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGridNavBase::ClearData, operator delete [], CUtlVectorBase<CGridNavSectorPortal, CUtlMemory<CGridNavSectorPortal, int> >::RemoveAll, CUtlMemory<CGridNavSectorPortal, int>::Purge, C2DGridObstructionManager::DeInit
void __fastcall CGridNav::GameInit(CGridNav *const this, const EventGameInit_t *const msg)
{
  CGridNavCell *m_pCells; // rdi
  CGridNavSector *m_pSectors; // rax
  CGridNavSector *v5; // r12
  CUtlVectorBase<CGridNavSectorPortal,CUtlMemory<CGridNavSectorPortal,int> > *p_m_nSectorX; // rbx

  CGridNavBase::ClearData(this);
  m_pCells = this->m_pCells;
  if ( m_pCells != 0 )
  {
    operator delete[](m_pCells);
    m_pSectors = this->m_pSectors;
    this->m_pCells = 0;
    if ( m_pSectors != 0 )
    {
      v5 = &m_pSectors[*&m_pSectors[-1].m_nBaseRegionID];
      while ( v5 != m_pSectors )
      {
        while ( --v5 != 0 )
        {
          p_m_nSectorX = &v5->m_nSectorX;
          do
          {
            while ( 1 )
            {
              CUtlVectorBase<CGridNavSectorPortal,CUtlMemory<CGridNavSectorPortal,int>>::RemoveAll(--p_m_nSectorX);
              if ( (p_m_nSectorX->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<CGridNavSectorPortal,int>::Purge(&p_m_nSectorX->m_Memory);
                if ( (p_m_nSectorX->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  break;
              }
              if ( v5 == p_m_nSectorX )
                goto LABEL_11;
            }
            CUtlMemory<CGridNavSectorPortal,int>::Purge(&p_m_nSectorX->m_Memory);
          }
          while ( v5 != p_m_nSectorX );
LABEL_11:
          m_pSectors = this->m_pSectors;
          if ( v5 == m_pSectors )
            goto LABEL_12;
        }
      }
LABEL_12:
      operator delete[](&v5[-1].m_nBaseRegionID);
    }
    this->m_bLoaded = 0;
    this->m_pSectors = 0;
    this->m_bSectorsInitialized = 0;
    this->m_nSectorWidth = 0;
    this->m_nSectorHeight = 0;
    C2DGridObstructionManager::DeInit(&this->m_ObstructionManager);
  }
}


// CGridNav::GameActivate  (line 158, @0x00000000024b46f0, libserver.so)  // inlines: CUtlDelegate<CGridNav, CGridNav>, Convert<CGridNav, void (CGridNav::*)(CCallQueue&), void (detail::GenericClass::*)()>, FastDelegate1<CGridNav, CGridNav>, UtlMakeDelegate<CGridNav, CGridNav, CCallQueue&, void>, bindmemfunc<CGridNav, void (CGridNav::*)(CCallQueue&)>
// globals: CGridNav::UpdateDebugSceneObjects(CCallQueue &)
void __fastcall CGridNav::GameActivate(CGridNav *const this, const EventGameActivate_t *const msg)
{
  __int64 v2; // rdx
  _QWORD v3[4]; // [rsp+0h] [rbp-20h] BYREF

  v2 = *g_pDebugDrawQueueMgr;
  v3[0] = this;
  v3[1] = CGridNav::UpdateDebugSceneObjects;
  v3[2] = 0;
  (*(v2 + 88))(g_pDebugDrawQueueMgr, v3);
}


// CGridNav::GameDeactivate  (line 166, @0x00000000024f7de0, libserver.so)  // inlines: CUtlDelegate<CGridNav, CGridNav>, Convert<CGridNav, void (CGridNav::*)(CCallQueue&), void (detail::GenericClass::*)()>, FastDelegate1<CGridNav, CGridNav>, UtlMakeDelegate<CGridNav, CGridNav, CCallQueue&, void>, bindmemfunc<CGridNav, void (CGridNav::*)(CCallQueue&)>
// calls: CGridNav::ShowHeightMap
// globals: CGridNav::UpdateDebugSceneObjects(CCallQueue &)
void __fastcall CGridNav::GameDeactivate(CGridNav *const this, const EventGameDeactivate_t *const msg)
{
  __int64 v3; // rax
  _QWORD v4[6]; // [rsp+0h] [rbp-30h] BYREF

  v3 = *g_pDebugDrawQueueMgr;
  v4[1] = CGridNav::UpdateDebugSceneObjects;
  v4[0] = this;
  v4[2] = 0;
  (*(v3 + 96))(g_pDebugDrawQueueMgr, v4);
  CGridNav::ShowHeightMap(this, 0);
}


// CGridNav::SpawnGroupPrecache  (line 174, @0x00000000024b8d40, libserver.so)  // inlines: <lambda>, AsyncReadFile, CAsyncFileLoadPrerequisite, CAsyncFileLoadPrerequisiteLambda, CMemberFuncProxy0, CMemberFuncProxyBase, CMemberFunctor0, CRefCountServiceBase, CRefCounted1, CUtlString, CreateFunctor<CAsyncFileLoadPrerequisite*, CAsyncFileLoadPrerequisite, void>, IPrerequisite, Init, IsEmpty, Reset, SpawnGroupHasWorldGeomemtry, StartAsyncFileLoadPrerequisiteLambda<CGridNav::SpawnGroupPrecache(const EventSpawnGroupPrecache_t&)::__lambda37>, ~<lambda>, ~CAsyncFileLoadPrerequisite, ~CUtlString, ~IPrerequisite
// calls: CUtlString::Get, V_stricmp_fast, CUtlString::Set, V_snprintf, operator new, CUtlString::FreeMemoryBlock, __stack_chk_fail, operator delete, _Unwind_Resume
// strings: "<empty>", "maps/%s.gnv"
void __fastcall CGridNav::SpawnGroupPrecache(CGridNav *const this, const EventSpawnGroupPrecache_t *const msg)
{
  char *m_pString; // rax
  const char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  CUtlString *v10; // rax
  CUtlString *v11; // rbx
  CGridNav *v12; // rax
  const char *v13; // rax
  char *v14; // rsi
  IAsyncFileSystem *v15; // rdi
  __int64 v16; // r12
  void (__fastcall *v17)(char *, _DWORD *); // r12
  _DWORD *v18; // rax
  ISpawnGroupPrerequisiteRegistry *m_pRegistry; // [rsp+18h] [rbp-168h]
  CUtlString worldName; // [rsp+20h] [rbp-160h] BYREF
  CGridNav *v21; // [rsp+30h] [rbp-150h]
  CUtlString v22; // [rsp+38h] [rbp-148h] BYREF
  char pFileName[264]; // [rsp+40h] [rbp-140h] BYREF
  unsigned __int64 v24; // [rsp+148h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  if ( msg->m_SpawnGroupName.m_pString != 0 && *msg->m_SpawnGroupName.m_pString != 0 )
  {
    m_pString = msg->m_EntityLumpName.m_pString;
    if ( m_pString == 0 || *m_pString == 0 )
    {
      v5 = CUtlString::Get(&msg->m_SpawnGroupName);
      if ( V_stricmp_fast(v5, "start") != 0 )
      {
        v6 = CUtlString::Get(&msg->m_SpawnGroupName);
        if ( V_stricmp_fast(v6, "<empty>") != 0 )
        {
          worldName.m_pString = 0;
          v7 = CUtlString::Get(&msg->m_SpawnGroupName);
          CUtlString::Set(&worldName, v7);
          v8 = CUtlString::Get(&worldName);
          V_snprintf(pFileName, 260, "maps/%s.gnv", v8);
          v21 = this;
          v22.m_pString = 0;
          v9 = CUtlString::Get(&worldName);
          CUtlString::Set(&v22, v9);
          m_pRegistry = msg->m_pRegistry;
          v10 = operator new(0x48u);
          LODWORD(v10[1].m_pString) = 0;
          v11 = v10;
          v10[2].m_pString = 0;
          LODWORD(v10[3].m_pString) = -1;
          v10[4].m_pString = 0;
          v10[5].m_pString = 0;
          LODWORD(v10[6].m_pString) = 0;
          v10->m_pString = &off_40EE770;
          v12 = v21;
          v11[8].m_pString = 0;
          v11[7].m_pString = v12;
          v13 = CUtlString::Get(&v22);
          CUtlString::Set(v11 + 8, v13);
          v14 = v11[2].m_pString;
          if ( v14 != 0 )
          {
            (*(*g_pAsyncFileSystem + 112LL))(g_pAsyncFileSystem, v14, 0);
            v11[2].m_pString = 0;
          }
          if ( v11[4].m_pString != 0 )
          {
            (*(*g_pAsyncFileSystem + 200LL))(g_pAsyncFileSystem);
            v11[4].m_pString = 0;
            v11[5].m_pString = 0;
          }
          v15 = g_pAsyncFileSystem;
          LODWORD(v11[3].m_pString) = -1;
          v16 = (*(*v15 + 88LL))(v15);
          (*(*v16 + 136LL))(v16, pFileName, "GAME");
          (*(*v16 + 208LL))(v16);
          (*(*v16 + 72LL))(v16, 1);
          v11[2].m_pString = v16;
          v17 = *(*v16 + 8LL);
          v18 = operator new(0x38u);
          v18[6] = 1;
          *v18 = off_40FDA90;
          *(v18 + 2) = off_40FDAC8;
          *(v18 + 4) = 57;
          *(v18 + 5) = 0;
          *(v18 + 6) = v11;
          v17(v11[2].m_pString, v18);
          (*(*g_pAsyncFileSystem + 120LL))(g_pAsyncFileSystem, v11[2].m_pString);
          (**m_pRegistry)(m_pRegistry, v11);
          if ( v22.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&v22);
          if ( worldName.m_pString != 0 )
            CUtlString::FreeMemoryBlock(&worldName);
        }
      }
    }
  }
}


// CGridNav::ShowGridNavSectors  (line 436, @0x00000000024d6580, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, EnableInteractsWith, GetFloat, GetSector, GetSectorEdges, GridPosToSectorX, GridPosToSectorY, GridPosToWorldCenterX, GridPosToWorldCenterY, HitStaticOnlyByContents, Init, LengthSqr, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, SetObjectSetMask, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAligned, VectorClear, VectorCopy, VectorSubtract, WorldToGridPosX, WorldToGridPosY
// calls: UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin, floorf, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGridNavSector::GetPortal, NDebugOverlay::Line
// callers: CGridNav::PreClientUpdate
void __fastcall CGridNav::ShowGridNavSectors(CGridNav *const this)
{
  CBasePlayer *v2; // rax
  const Vector *AbsOrigin; // rbx
  float v4; // xmm0_4
  float v5; // xmm0_4
  float m_fValue; // xmm0_4
  int v7; // r15d
  int v8; // ebx
  float v9; // xmm1_4
  float v10; // xmm0_4
  int m_nMinX; // edi
  int m_nMinY; // esi
  float v13; // xmm1_4
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  CGridNavSector *v18; // r14
  int v19; // r13d
  int v20; // edi
  int m_nMaxX; // edx
  int v22; // ecx
  Vector *v23; // r14
  float v24; // xmm2_4
  int v25; // esi
  int m_nMaxY; // eax
  int v27; // edx
  CGridNav *v28; // rsi
  int v29; // ecx
  int v30; // r12d
  CGridNav *v31; // rbx
  __int64 v32; // rax
  CGridNavSectorPortal *Portal; // rax
  const Vector *v34; // rdi
  __int64 v35; // rdx
  float v36; // xmm0_4
  float v37; // xmm0_4
  CGridNav *v38; // rax
  int v39; // [rsp+4h] [rbp-1ACh]
  float v40; // [rsp+8h] [rbp-1A8h]
  float v41; // [rsp+Ch] [rbp-1A4h]
  int v42; // [rsp+Ch] [rbp-1A4h]
  int v43; // [rsp+10h] [rbp-1A0h]
  float v44; // [rsp+14h] [rbp-19Ch]
  float m_flEdgeSize; // [rsp+30h] [rbp-180h]
  float v46; // [rsp+30h] [rbp-180h]
  CGridNavSector *v47; // [rsp+30h] [rbp-180h]
  float x; // [rsp+38h] [rbp-178h]
  float v49; // [rsp+38h] [rbp-178h]
  float y; // [rsp+3Ch] [rbp-174h]
  __int64 pTestEdges; // [rsp+40h] [rbp-170h] BYREF
  __int64 nBottom; // [rsp+48h] [rbp-168h]
  __int64 v53; // [rsp+50h] [rbp-160h]
  uint32 v54; // [rsp+58h] [rbp-158h]
  uint16 v55; // [rsp+5Ch] [rbp-154h]
  char v56; // [rsp+5Eh] [rbp-152h]
  char v57; // [rsp+5Fh] [rbp-151h]
  int v58; // [rsp+60h] [rbp-150h]
  int pTestCoordinate[4]; // [rsp+80h] [rbp-130h] BYREF
  float v60; // [rsp+90h] [rbp-120h]
  float v61; // [rsp+94h] [rbp-11Ch]
  int v62; // [rsp+98h] [rbp-118h]
  int v63; // [rsp+9Ch] [rbp-114h]
  int v64; // [rsp+A0h] [rbp-110h]
  int v65; // [rsp+A4h] [rbp-10Ch]
  int v66; // [rsp+A8h] [rbp-108h]
  int v67; // [rsp+ACh] [rbp-104h]
  int v68; // [rsp+B0h] [rbp-100h]
  int v69; // [rsp+B4h] [rbp-FCh]
  int v70; // [rsp+B8h] [rbp-F8h]
  int v71; // [rsp+BCh] [rbp-F4h]
  float v72; // [rsp+C0h] [rbp-F0h]
  char v73; // [rsp+C4h] [rbp-ECh]
  bool v74; // [rsp+C5h] [rbp-EBh]
  Vector pInnerCorners[4]; // [rsp+D0h] [rbp-E0h] BYREF
  __int64 v76; // [rsp+138h] [rbp-78h]
  __int64 v77; // [rsp+140h] [rbp-70h]
  __int64 v78; // [rsp+148h] [rbp-68h]
  int v79; // [rsp+150h] [rbp-60h]
  __int16 v80; // [rsp+154h] [rbp-5Ch]
  char v81; // [rsp+156h] [rbp-5Ah]
  char v82; // [rsp+157h] [rbp-59h]

  v2 = UTIL_PlayerByIndex(1);
  if ( v2 != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v2);
    m_flEdgeSize = this->m_flEdgeSize;
    x = AbsOrigin->x;
    v4 = floorf(((AbsOrigin->x - this->m_flOffsetX) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
    y = AbsOrigin->y;
    v39 = v4;
    v5 = floorf(((y - this->m_flOffsetY) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
    v80 = 0;
    LODWORD(AbsOrigin) = v5;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    v81 = 0;
    v82 = 7;
    v79 = 0;
    CGameTrace::Init(pInnerCorners);
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    v61 = y - y;
    *pTestCoordinate = x;
    v72 = m_fValue;
    *&pTestCoordinate[1] = y;
    pTestCoordinate[3] = 0;
    v63 = 0;
    v60 = x - x;
    v67 = 0;
    v71 = 0;
    v62 = -956301312;
    v70 = 0;
    v69 = 0;
    v68 = 0;
    v73 = 1;
    v66 = 0;
    v65 = 0;
    v64 = 0;
    pTestCoordinate[2] = 1182793728;
    v74 = (((v60 * v60) + (v61 * v61)) + 1073741800.0) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&pTestEdges, 0, 4, 0);
    nBottom |= 0x7021uLL;
    v7 = AbsOrigin + 4;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, pTestCoordinate, &pTestEdges, pInnerCorners);
    v43 = AbsOrigin + 20;
    while ( 1 )
    {
      if ( this->m_nMinY <= v7 && this->m_nMaxY >= v7 )
      {
        v8 = v39 - 15;
        v49 = (v7 * this->m_flEdgeSize) + this->m_flOffsetY;
        if ( v39 - 15 <= v39 + 15 )
          break;
      }
LABEL_24:
      if ( v43 < ++v7 )
        return;
    }
    while ( 1 )
    {
      if ( this->m_nMinX > v8 )
        goto LABEL_23;
      if ( this->m_nMaxX < v8 )
        goto LABEL_24;
      v80 = 0;
      v76 = 0;
      v77 = 0;
      v9 = v8 * this->m_flEdgeSize;
      v81 = 0;
      v78 = 0;
      v82 = 7;
      v79 = 0;
      v46 = v9 + this->m_flOffsetX;
      CGameTrace::Init(pInnerCorners);
      v55 = 0;
      nBottom = 0;
      v53 = 0;
      v54 = -1;
      v56 = 3;
      v57 = v57 & 0xF0 | 9;
      v58 = 1;
      pTestEdges = 28673;
      v54 = EntityIDFromBaseEntity(0);
      v55 = HierarchyIDFromBaseEntity(0);
      v10 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      v61 = v49 - v49;
      *pTestCoordinate = v46;
      v72 = v10;
      pTestCoordinate[3] = 0;
      v63 = 0;
      v67 = 0;
      v60 = v46 - v46;
      v71 = 0;
      v62 = -956301312;
      v70 = 0;
      v69 = 0;
      v68 = 0;
      v73 = 1;
      v66 = 0;
      v65 = 0;
      v64 = 0;
      *&pTestCoordinate[1] = v49;
      pTestCoordinate[2] = 1182793728;
      v74 = (((v60 * v60) + (v61 * v61)) + 1073741800.0) != 0.0;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, pTestCoordinate, &pTestEdges, pInnerCorners);
      m_nMinX = this->m_nMinX;
      m_nMinY = this->m_nMinY;
      v13 = v46;
      v14 = v8 - m_nMinX + 15;
      if ( v8 - m_nMinX >= 0 )
        v14 = v8 - m_nMinX;
      v15 = v7 - m_nMinY + 15;
      v16 = v14 >> 4;
      if ( v7 - m_nMinY >= 0 )
        v15 = v7 - m_nMinY;
      v17 = v15 >> 4;
      v18 = &this->m_pSectors[v16 + v17 * this->m_nSectorWidth];
      if ( v18->m_bDirty )
        goto LABEL_23;
      v19 = 1;
      v20 = 16 * v16 + m_nMinX;
      pTestCoordinate[1] = v8;
      m_nMaxX = this->m_nMaxX;
      v22 = v20 + 15;
      pTestCoordinate[3] = v8;
      v47 = v18;
      HIDWORD(nBottom) = v20;
      v23 = pInnerCorners;
      v24 = (pInnerCorners[3].z * -32768.0) + 16384.0;
      pTestCoordinate[0] = v7;
      pTestCoordinate[2] = v7;
      if ( v20 + 15 > m_nMaxX )
        v22 = m_nMaxX;
      v44 = v13;
      v25 = 16 * v17 + m_nMinY;
      m_nMaxY = this->m_nMaxY;
      v27 = v25 + 15;
      LODWORD(nBottom) = v25;
      v28 = this;
      HIDWORD(pTestEdges) = v22;
      v29 = 0;
      v30 = v8;
      v31 = v28;
      if ( v27 > m_nMaxY )
        v27 = m_nMaxY;
      LODWORD(pTestEdges) = v27;
      if ( v27 == v7 )
      {
LABEL_20:
        v41 = v24;
        Portal = CGridNavSector::GetPortal(v47, v30, v7, v29);
        v24 = v41;
        if ( Portal != 0 )
        {
          v34 = v23;
          v35 = v19 & 3;
          v36 = 0.5 * v31->m_flEdgeSize;
          v42 = v19++;
          ++v23;
          pInnerCorners[0].z = v24;
          v37 = v36 * 0.60000002;
          pInnerCorners[1].z = v24;
          pInnerCorners[2].z = v24;
          pInnerCorners[3].z = v24;
          v40 = v24;
          pInnerCorners[0].y = v49 + v37;
          pInnerCorners[1].y = v49 + v37;
          pInnerCorners[0].x = v44 - v37;
          pInnerCorners[1].x = v44 + v37;
          pInnerCorners[2].x = v44 + v37;
          pInnerCorners[2].y = v49 - v37;
          pInnerCorners[3].x = v44 - v37;
          pInnerCorners[3].y = v49 - v37;
          NDebugOverlay::Line(v34, &pInnerCorners[v35], 0xFFu, 0xFFu, 0xFFu, 1, 0.01023);
          v32 = v42;
          v24 = v40;
          if ( v19 == 5 )
            goto LABEL_22;
          goto LABEL_19;
        }
      }
      while ( 1 )
      {
        v32 = v19++;
        ++v23;
        if ( v19 == 5 )
          break;
LABEL_19:
        v29 = v19 - 1;
        if ( *(&pTestEdges + v32) == pTestCoordinate[v32] )
          goto LABEL_20;
      }
LABEL_22:
      v38 = v31;
      v8 = v30;
      this = v38;
LABEL_23:
      if ( ++v8 > v39 + 15 )
        goto LABEL_24;
    }
  }
}


// CGridNav::ShowObjectObstructions  (line 526, @0x00000000024dba50, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CheckForCollisions, ConvertToExternalMemory, GetBool, GetInt, IsExternallyAllocated, Purge, Purge_FixedGrowable, QAngle, RemoveAll, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin, CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions, GetPositionOnGround, NDebugOverlay::Circle, CUtlMemory<IntersectionRecord_t, int>::Purge, CUtlVectorBase<IntersectionRecord_t, CUtlMemoryFixedGrowable<IntersectionRecord_t, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume, NDebugOverlay::Box, __stack_chk_fail
// callers: CGridNav::PreClientUpdate
void __fastcall CGridNav::ShowObjectObstructions(CGridNav *const this)
{
  CBasePlayer *v2; // rax
  const Vector *AbsOrigin; // rax
  float x; // r13d
  __m128i v5; // xmm2
  float v6; // ebx
  float v7; // xmm2_4
  __int64 v8; // r12
  int v9; // ebx
  IntersectionRecord_t *v10; // r13
  const ObstructionRecord_t *m_pObsRec; // rax
  const ObstructionRecord_t *v12; // rax
  float v13; // ecx
  float m_fRadius; // xmm0_4
  uint32 v15; // eax
  float v16; // xmm2_4
  unsigned int r; // [rsp+1Ch] [rbp-1F4h]
  Vector vGround; // [rsp+20h] [rbp-1F0h] BYREF
  QAngle ignoreHandle; // [rsp+30h] [rbp-1E0h] BYREF
  CollisionResultList_t intersections; // [rsp+40h] [rbp-1D0h] BYREF
  unsigned __int64 v21; // [rsp+1D8h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  v2 = UTIL_PlayerByIndex(1);
  if ( v2 == 0 )
    return;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v2);
  x = AbsOrigin->x;
  intersections.m_Size = 0;
  v5 = _mm_cvtsi32_si128(0x447A0000u);
  *v5.m128i_i32 = *v5.m128i_i32 + AbsOrigin->y;
  intersections.m_Memory.m_nAllocationCount = 16;
  intersections.m_Memory.m_nGrowSize = 0x80000000;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  intersections.m_Memory.m_pMemory = &intersections.m_Memory.m_FixedMemory;
  CGridNav::PrepareObstructionManager(
    this,
    1500.0,
    0,
    0,
    ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
    0.0);
  ignoreHandle.x = NAN;
  CGridNav::CheckForCollisions(this, x, v6, &intersections, &ignoreHandle, 0);
  if ( intersections.m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = &intersections.m_Memory.m_pMemory[v8];
      m_pObsRec = intersections.m_Memory.m_pMemory[v8].m_pObsRec;
      if ( m_pObsRec == 0 )
        goto LABEL_9;
      if ( m_pObsRec->m_pObstructionObject != 0 )
      {
        if ( dota_show_object_obstructions.m_pParent->m_Value.m_nValue != 0 )
        {
          if ( m_pObsRec->m_ObsType != 1 )
            goto LABEL_8;
          r = 0;
          goto LABEL_23;
        }
LABEL_9:
        ++v9;
        ++v8;
        if ( intersections.m_Size <= v9 )
          break;
      }
      else
      {
        if ( dota_show_nav_obstructions.m_pParent->m_Value.m_nValue == 0 )
          goto LABEL_9;
        if ( m_pObsRec->m_ObsType != 1 )
        {
LABEL_8:
          vGround = GetPositionOnGround(m_pObsRec->m_fY, v7, 0);
          v12 = v10->m_pObsRec;
          v13 = *&v12->m_ObjectProperties;
          m_fRadius = v12->m_fRadius;
          ignoreHandle.x = -90.0;
          ignoreHandle.y = 0.0;
          ignoreHandle.z = 0.0;
          NDebugOverlay::Circle(&vGround, &ignoreHandle, m_fRadius, 0, -(LOBYTE(v13) & 1), 0xFFu, 255, 0.01023, 1);
          goto LABEL_9;
        }
        r = 255;
LABEL_23:
        ignoreHandle = GetPositionOnGround(m_pObsRec->m_fYMax, v7, 0);
        vGround = GetPositionOnGround(v10->m_pObsRec->m_fYMin, v16, 0);
        NDebugOverlay::Box(&vec3_origin, &vGround, &ignoreHandle, r, 255, 0, 0.01023, 255);
        ++v9;
        ++v8;
        if ( intersections.m_Size <= v9 )
          break;
      }
    }
  }
  intersections.m_Size = 0;
  if ( intersections.m_Memory.m_nAllocationCount < 0 )
  {
    v15 = intersections.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v15 = intersections.m_Memory.m_nGrowSize & 0xC0000000;
    if ( intersections.m_Memory.m_pMemory != &intersections.m_Memory.m_FixedMemory )
    {
      if ( intersections.m_Memory.m_pMemory != 0 && v15 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v15 == 0 )
    CUtlMemory<IntersectionRecord_t,int>::Purge(&intersections.m_Memory);
}


// CGridNav::PreClientUpdate  (line 578, @0x00000000024f6060, libserver.so)  // inlines: GetBool, GetInt
// calls: CGridNav::UpdateSectors, UTIL_PlayerByIndex, CBaseEntity::GetAbsOrigin, CGridNavBase::ShowGridNav, CGridNav::ShowGridNavSectors, CGridNav::ShowObjectObstructions
void __fastcall CGridNav::PreClientUpdate(CGridNav *const this, const EventServerPreClientUpdate_t *const msg)
{
  CBasePlayer *v3; // rax
  const Vector *AbsOrigin; // rax

  if ( this->m_bLoaded )
  {
    CGridNav::UpdateSectors(this);
    if ( dota_gridnav_show.m_pParent->m_Value.m_nValue > 0 )
    {
      v3 = UTIL_PlayerByIndex(1);
      if ( v3 != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
        CGridNavBase::ShowGridNav(this, dota_gridnav_show.m_pParent->m_Value.m_nValue, AbsOrigin);
        CGridNav::ShowGridNavSectors(this);
      }
    }
    if ( dota_show_object_obstructions.m_pParent->m_Value.m_nValue != 0
      || dota_show_nav_obstructions.m_pParent->m_Value.m_nValue != 0 )
    {
      CGridNav::ShowObjectObstructions(this);
    }
  }
}


// CGridNav::UpdateDebugSceneObjects  (line 603, @0x00000000024f7dc0, libserver.so)  // inlines: GetBool, GetInt
// calls: CGridNav::ShowHeightMap
void __fastcall CGridNav::UpdateDebugSceneObjects(CGridNav *const this, CCallQueue *const workList)
{
  CGridNav::ShowHeightMap(this, dota_show_heightmap.m_pParent->m_Value.m_nValue != 0);
}


// CGridNav::UpdateSectors  (line 609, @0x00000000024f5fa0, libserver.so)  // inlines: GetSector
// calls: AppIsDedicatedServer, CGridNav::BuildSector
// callers: CGridNav::PreClientUpdate
void __fastcall CGridNav::UpdateSectors(CGridNav *const this)
{
  bool v2; // r12
  int m_nSectorHeight; // r8d
  int m_nSectorWidth; // eax
  int v5; // r14d
  int v6; // ebx
  CGridNavSector *v7; // rsi

  v2 = !AppIsDedicatedServer() || this->m_bSectorsInitialized;
  m_nSectorHeight = this->m_nSectorHeight;
  this->m_bSectorsInitialized = 1;
  if ( m_nSectorHeight > 0 )
  {
    m_nSectorWidth = this->m_nSectorWidth;
    v5 = 0;
    while ( m_nSectorWidth <= 0 )
    {
LABEL_11:
      if ( this->m_nSectorHeight <= ++v5 )
        return;
    }
    v6 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = &this->m_pSectors[v6 + m_nSectorWidth * v5];
        if ( v7->m_bDirty )
          break;
        if ( m_nSectorWidth <= ++v6 )
          goto LABEL_11;
      }
      CGridNav::BuildSector(this, v7);
      if ( v2 )
        break;
      m_nSectorWidth = this->m_nSectorWidth;
      if ( m_nSectorWidth <= ++v6 )
        goto LABEL_11;
    }
  }
}


// CGridNav::BuildSector  (line 635, @0x00000000024f5880, libserver.so)  // inlines: AddToTail, Construct<CGridNavSectorPortal>, Element, GetCellFlags, GetCellIndex, GetMidpointXY, GetSectorEdges, GrowMemory, IsCellPassable, OutOfBounds, operator&, operator[]
// calls: CUtlVectorBase<CGridNavSectorPortal, CUtlMemory<CGridNavSectorPortal, int> >::RemoveAll, CGridNavSectorPortal::CGridNavSectorPortal, CGridNav::ComputePortalConnectionCost, CUtlMemory<CGridNavSectorPortalConnection, int>::Grow, CGridNav::FloodFillRegion, CUtlMemory<CGridNavSectorPortal, int>::Grow
// callers: CGridNav::UpdateSectors
// globals: g_GridDirectionToDX, g_GridDirectionToDY
void __fastcall CGridNav::BuildSector(CGridNav *const this, CGridNavSector *const sector)
{
  CUtlVectorBase<CGridNavSectorPortal,CUtlMemory<CGridNavSectorPortal,int> >::CAllocator *p_m_Memory; // r15
  int m_nMaxX; // eax
  int v6; // esi
  int m_nMaxY; // eax
  char v8; // dl
  int v9; // r14d
  int v10; // r13d
  int m_nMinX; // ecx
  int m_nMinY; // esi
  int v13; // eax
  int v14; // ebx
  bool v15; // r8
  unsigned __int8 v16; // al
  int v17; // edi
  int v18; // eax
  int m_nWidth; // r11d
  unsigned __int8 *m_pMemory; // r10
  int v21; // edx
  int v22; // eax
  int v23; // r9d
  int v24; // edi
  unsigned __int8 v25; // al
  unsigned __int8 v26; // al
  __int64 m_nAllocationCount; // rax
  int v28; // edx
  int v29; // ecx
  CGridNavSectorPortal *v30; // rdx
  CGridNavSectorPortal *v31; // rdi
  CGridNavSectorPortal *v32; // rax
  unsigned __int8 v33; // dl
  __int64 v34; // r15
  int v35; // eax
  int v36; // r12d
  CGridNavSector *v37; // r15
  __int64 v38; // r14
  __int64 v39; // rax
  CGridNavSector *v40; // r14
  __int64 v41; // r13
  __int64 v42; // r15
  __int64 v43; // rbx
  int v44; // ecx
  int v45; // r8d
  int v46; // ecx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  int v52; // eax
  CGridNavSectorPortal *v53; // rdx
  __int64 v54; // rbx
  int v55; // ecx
  CGridNavSectorPortal *v56; // rax
  int v57; // ecx
  CGridNavSectorPortal *v58; // rdi
  CGridNavSectorPortal *v59; // rax
  int nCurRegionID; // [rsp+24h] [rbp-9Ch]
  CGridNavSector *v62; // [rsp+30h] [rbp-90h]
  CGridNavSector *v63; // [rsp+38h] [rbp-88h]
  CUtlMemory<CGridNavSectorPortalConnection,int> *v64; // [rsp+40h] [rbp-80h]
  int v65; // [rsp+40h] [rbp-80h]
  int v66; // [rsp+48h] [rbp-78h]
  int v67; // [rsp+4Ch] [rbp-74h]
  __int64 nDir; // [rsp+50h] [rbp-70h]
  CUtlVector<CGridNavSectorPortal,CUtlMemory<CGridNavSectorPortal,int> > *nDira; // [rsp+50h] [rbp-70h]
  int nCost; // [rsp+60h] [rbp-60h]
  int nCosta; // [rsp+60h] [rbp-60h]
  int nCostb; // [rsp+60h] [rbp-60h]
  int nPortalStart; // [rsp+64h] [rbp-5Ch]
  int nPortalStarta; // [rsp+64h] [rbp-5Ch]
  int p; // [rsp+68h] [rbp-58h]
  __int64 pa; // [rsp+68h] [rbp-58h]
  int v78; // [rsp+70h] [rbp-50h]
  int v79; // [rsp+70h] [rbp-50h]
  int iy; // [rsp+74h] [rbp-4Ch]
  int nRight; // [rsp+78h] [rbp-48h]
  int nInnerSide; // [rsp+7Ch] [rbp-44h]
  int nInnerSidea; // [rsp+7Ch] [rbp-44h]
  int dx_0; // [rsp+80h] [rbp-40h]
  int dx_0a; // [rsp+80h] [rbp-40h]
  int nStartY; // [rsp+84h] [rbp-3Ch]
  int ix; // [rsp+88h] [rbp-38h]
  int nInnerSide_0; // [rsp+8Ch] [rbp-34h]
  int nInnerSide_0a; // [rsp+8Ch] [rbp-34h]

  p_m_Memory = &sector->m_Portals[0].m_Memory;
  m_nMaxX = this->m_nMaxX;
  nDir = 0;
  ix = this->m_nMinX + 16 * sector->m_nSectorX;
  if ( ix + 15 <= m_nMaxX )
    m_nMaxX = ix + 15;
  v6 = m_nMaxX;
  nRight = m_nMaxX;
  m_nMaxY = this->m_nMaxY;
  nStartY = this->m_nMinY + 16 * sector->m_nSectorY;
  if ( nStartY + 15 <= m_nMaxY )
    m_nMaxY = nStartY + 15;
  iy = m_nMaxY;
  nCost = m_nMaxY - nStartY;
  v67 = v6 - ix;
  do
  {
    while ( 1 )
    {
      CUtlVectorBase<CGridNavSectorPortal,CUtlMemory<CGridNavSectorPortal,int>>::RemoveAll(&p_m_Memory[-1].m_nAllocationCount);
      dx_0 = g_GridDirectionToDX[nDir];
      v8 = g_GridDirectionToDY[nDir];
      if ( nDir == 2 )
      {
        v9 = nRight;
        v10 = nCost + 1;
        nInnerSide_0 = nStartY;
      }
      else if ( nDir == 4 )
      {
        v9 = ix;
        v10 = v67 + 1;
        nInnerSide_0 = nStartY;
      }
      else
      {
        v9 = ix;
        if ( nDir != 0 )
        {
          v10 = nCost + 1;
          nInnerSide_0 = nStartY;
        }
        else
        {
          v10 = v67 + 1;
          nInnerSide_0 = iy;
        }
      }
      m_nMinX = this->m_nMinX;
      if ( v9 + dx_0 >= m_nMinX && v9 + dx_0 <= this->m_nMaxX )
      {
        m_nMinY = this->m_nMinY;
        v78 = v8;
        v13 = v8 + nInnerSide_0;
        if ( v13 >= m_nMinY && v13 <= this->m_nMaxY && v10 > 0 )
          break;
      }
LABEL_35:
      nDir += 2;
      p_m_Memory = (p_m_Memory + 24);
      if ( nDir == 8 )
        goto LABEL_36;
    }
    v14 = 0;
    nPortalStart = 0;
    v15 = 0;
    nInnerSide = abs8(v8);
    p = abs8(g_GridDirectionToDX[nDir]);
    while ( 1 )
    {
      m_nWidth = this->m_nWidth;
      m_pMemory = this->m_CellFlags.m_Memory.m_pMemory;
      v21 = v9 + v14 * nInnerSide;
      v22 = nInnerSide_0 + v14 * p;
      v23 = v21 + dx_0;
      v24 = v22 + v78;
      v25 = m_pMemory[v21 - m_nMinX + m_nWidth * (v22 - m_nMinY)];
      if ( v15 )
        break;
      if ( (v25 & 1) != 0 && (v25 & 2) == 0 )
      {
        v16 = m_pMemory[v23 - m_nMinX + (v24 - m_nMinY) * m_nWidth];
        if ( (v16 & 1) != 0 )
        {
          v17 = nPortalStart;
          v18 = v16 & 2;
          v15 = v18 == 0;
          if ( v18 == 0 )
            v17 = v14;
          nPortalStart = v17;
        }
      }
LABEL_22:
      if ( ++v14 == v10 )
        goto LABEL_34;
LABEL_23:
      m_nMinX = this->m_nMinX;
      m_nMinY = this->m_nMinY;
    }
    if ( (v25 & 1) != 0 && (v25 & 2) == 0 )
    {
      v26 = m_pMemory[v23 - m_nMinX + (v24 - m_nMinY) * m_nWidth];
      if ( (v26 & 1) != 0 && (v26 & 2) == 0 )
        goto LABEL_22;
    }
    m_nAllocationCount = p_m_Memory[-1].m_nAllocationCount;
    if ( m_nAllocationCount == p_m_Memory->m_nAllocationCount )
    {
      v65 = p_m_Memory[-1].m_nAllocationCount;
      CUtlMemory<CGridNavSectorPortal,int>::Grow(p_m_Memory, 1);
      v28 = p_m_Memory[-1].m_nAllocationCount;
      m_nAllocationCount = v65;
    }
    else
    {
      v28 = p_m_Memory[-1].m_nAllocationCount;
    }
    v29 = v28 + 1;
    v30 = p_m_Memory->m_pMemory;
    p_m_Memory[-1].m_nAllocationCount = v29;
    v31 = &v30[m_nAllocationCount];
    if ( v31 != 0 )
    {
      CGridNavSectorPortal::CGridNavSectorPortal(v31);
      v29 = p_m_Memory[-1].m_nAllocationCount;
      v30 = p_m_Memory->m_pMemory;
    }
    v15 = 0;
    v32 = &v30[v29 - 1];
    v32->m_nStartIndex = nPortalStart;
    v33 = v14++ - 1;
    v32->m_nEndIndex = v33;
    v32->m_nRegionID = -1;
    v32->m_pSector = sector;
    if ( v14 != v10 )
      goto LABEL_23;
LABEL_34:
    if ( !v15 )
      goto LABEL_35;
    v54 = p_m_Memory[-1].m_nAllocationCount;
    v55 = p_m_Memory[-1].m_nAllocationCount;
    if ( v54 == p_m_Memory->m_nAllocationCount )
    {
      CUtlMemory<CGridNavSectorPortal,int>::Grow(p_m_Memory, 1);
      v55 = p_m_Memory[-1].m_nAllocationCount;
    }
    v56 = p_m_Memory->m_pMemory;
    v57 = v55 + 1;
    p_m_Memory[-1].m_nAllocationCount = v57;
    v58 = &v56[v54];
    if ( v58 != 0 )
    {
      CGridNavSectorPortal::CGridNavSectorPortal(v58);
      v57 = p_m_Memory[-1].m_nAllocationCount;
      v56 = p_m_Memory->m_pMemory;
    }
    nDir += 2;
    p_m_Memory = (p_m_Memory + 24);
    v59 = &v56[v57 - 1];
    v59->m_nStartIndex = nPortalStart;
    v59->m_nEndIndex = v10 - 1;
    v59->m_nRegionID = -1;
    v59->m_pSector = sector;
  }
  while ( nDir != 8 );
LABEL_36:
  nInnerSidea = 0;
  nCurRegionID = 0;
  v63 = sector;
  do
  {
    if ( v63->m_Portals[0].m_Size <= 0 )
    {
      v62 = &v63->m_Portals[1];
    }
    else
    {
      pa = 0;
      v66 = 2 * nInnerSidea;
      v62 = &v63->m_Portals[1];
      do
      {
        v34 = &v63->m_Portals[0].m_Memory.m_pMemory[pa];
        if ( *(v34 + 36) == -1 )
        {
          v53 = &v63->m_Portals[0].m_Memory.m_pMemory[pa];
          *(v34 + 36) = nCurRegionID;
          CGridNav::FloodFillRegion(this, sector, v53, ix, nRight, nStartY, iy, nCurRegionID++, nInnerSidea, pa);
          v52 = pa + 1;
        }
        else
        {
          v35 = (*(v34 + 72) + *(v34 + 73)) >> 1;
          if ( v66 == 2 )
          {
            v79 = nStartY + v35;
            nPortalStarta = nRight;
          }
          else if ( v66 == 4 )
          {
            nPortalStarta = ix + v35;
            v79 = nStartY;
          }
          else if ( v66 != 0 )
          {
            v79 = nStartY + v35;
            nPortalStarta = ix;
          }
          else
          {
            nPortalStarta = ix + v35;
            v79 = iy;
          }
          dx_0a = 2 * nInnerSidea;
          v36 = pa + 1;
          nInnerSide_0a = nInnerSidea;
          v64 = (v34 + 48);
          v37 = v63;
          v38 = &v63->m_Portals[0].m_Memory.m_pMemory[pa];
          for ( nDira = &v63->m_Portals[1]; ; ++nDira )
          {
            if ( v36 < v37->m_Portals[0].m_Size )
            {
              v39 = v38;
              v40 = v37;
              v41 = v36;
              v42 = v39;
              do
              {
                while ( 1 )
                {
                  v43 = &v40->m_Portals[0].m_Memory.m_pMemory[v41];
                  if ( *(v43 + 36) == *(v42 + 36) )
                    break;
                  ++v36;
                  ++v41;
                  if ( v40->m_Portals[0].m_Size <= v36 )
                    goto LABEL_58;
                }
                v44 = (*(v43 + 73) + *(v43 + 72)) >> 1;
                if ( dx_0a == 2 )
                {
                  v45 = nStartY + v44;
                  v46 = nRight;
                }
                else if ( dx_0a == 4 )
                {
                  v46 = ix + v44;
                  v45 = nStartY;
                }
                else if ( dx_0a != 0 )
                {
                  v45 = nStartY + v44;
                  v46 = ix;
                }
                else
                {
                  v46 = ix + v44;
                  v45 = iy;
                }
                v47 = CGridNav::ComputePortalConnectionCost(this, nPortalStarta, v79, v46, v45, ix, nRight, nStartY, iy);
                v48 = *(v42 + 40);
                if ( v48 == *(v42 + 56) )
                {
                  nCosta = v47;
                  CUtlMemory<CGridNavSectorPortalConnection,int>::Grow(v64, 1);
                  v48 = *(v42 + 40);
                  v47 = nCosta;
                }
                *(v42 + 40) = v48 + 1;
                v49 = *(v42 + 48) + 8 * v48;
                *v49 = v47;
                *(v49 + 4) = nInnerSide_0a;
                *(v49 + 5) = v36;
                v50 = *(v43 + 40);
                if ( v50 == *(v43 + 56) )
                {
                  nCostb = v47;
                  CUtlMemory<CGridNavSectorPortalConnection,int>::Grow((v43 + 48), 1);
                  v50 = *(v43 + 40);
                  v47 = nCostb;
                }
                ++v36;
                ++v41;
                *(v43 + 40) = v50 + 1;
                v51 = *(v43 + 48) + 8 * v50;
                *v51 = v47;
                *(v51 + 4) = nInnerSidea;
                *(v51 + 5) = pa;
              }
              while ( v40->m_Portals[0].m_Size > v36 );
LABEL_58:
              v38 = v42;
            }
            ++nInnerSide_0a;
            dx_0a += 2;
            if ( nInnerSide_0a == 4 )
              break;
            v36 = 0;
            v37 = nDira;
            if ( nInnerSide_0a == nInnerSidea )
              v36 = pa + 1;
          }
          v52 = pa + 1;
        }
        ++pa;
      }
      while ( v63->m_Portals[0].m_Size > v52 );
    }
    ++nInnerSidea;
    v63 = v62;
  }
  while ( nInnerSidea != 4 );
  sector->m_bDirty = 0;
}


// CGridNav::FloodFillRegion  (line 812, @0x00000000024f5300, libserver.so)  // inlines: AddToTail, GetCell, GetCellFlags, GetCellIndex, GetMidpointXY, GrowMemory, IsCellPassable, OutOfBounds, operator[]
// calls: CGridNavCell::ComputeStepCost, CUtlMemory<CGridNavSectorPortalConnection, int>::Grow
// callers: CGridNav::BuildSector
// globals: g_GridDirectionToDY, CGridNavNode::sm_nListIDBase, g_GridDirectionToDX
void __fastcall CGridNav::FloodFillRegion(
        CGridNav *const this,
        CGridNavSector *const sector,
        CGridNavSectorPortal *const portal,
        int nLeft,
        int nRight,
        int nBottom,
        int nTop,
        int nRegionID,
        int nWhichEdge,
        int nEdgeID)
{
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  const char *v16; // r11
  int v17; // eax
  CGridNavCell *v18; // r13
  CGridNavNode **p_pOpenList; // rdi
  int m_nCost; // esi
  CGridNavNode::lambda *p_m_pOpenListNext; // rcx
  CGridNavNode *m_pOpenListNext; // rax
  CGridNavNode *v23; // rax
  int v24; // ecx
  int m_nGridPosX; // r14d
  const CGridNavCell *v26; // r10
  int m_nGridPosY; // eax
  int v28; // r13d
  int i; // eax
  int v30; // edi
  int m_nMinY; // esi
  int m_nWidth; // edx
  int m_nMinX; // ecx
  __int64 v34; // r8
  CGridNavCell *v35; // r12
  unsigned __int8 *m_pMemory; // rdi
  unsigned __int8 v37; // r8
  int v38; // eax
  int v39; // eax
  CGridNavNode *v40; // rax
  int v41; // r8d
  __int64 v42; // r8
  int v43; // r8d
  int v44; // r9d
  unsigned __int8 v45; // r8
  __int64 v46; // rax
  int v47; // r8d
  int v48; // eax
  int v49; // r8d
  unsigned __int8 v50; // dl
  CGridNavSectorPortal *v51; // r9
  int v52; // edx
  int v53; // r8d
  CUtlVector<CGridNavSectorPortal,CUtlMemory<CGridNavSectorPortal,int> > *v54; // r15
  int v55; // eax
  int v56; // ecx
  __int64 v57; // r13
  int j; // r12d
  CGridNavSectorPortal *v59; // r14
  int v60; // esi
  int v61; // edi
  int v62; // esi
  CGridNavCell *v63; // rsi
  int v64; // r11d
  __int64 m_Size; // rsi
  __int64 v66; // rsi
  __int64 v67; // rsi
  __int64 v68; // rsi
  int pBestPrevLinka; // [rsp+18h] [rbp-78h]
  int pBestPrevLink; // [rsp+18h] [rbp-78h]
  const char *v73; // [rsp+20h] [rbp-70h]
  int v74; // [rsp+20h] [rbp-70h]
  int v75; // [rsp+20h] [rbp-70h]
  CGridNavCell *curCella; // [rsp+28h] [rbp-68h]
  char curCell; // [rsp+28h] [rbp-68h]
  CGridNavCell *curCellc; // [rsp+28h] [rbp-68h]
  CGridNavCell *curCellb; // [rsp+28h] [rbp-68h]
  int v80; // [rsp+34h] [rbp-5Ch]
  int v81; // [rsp+34h] [rbp-5Ch]
  int v82; // [rsp+34h] [rbp-5Ch]
  int nBottomc; // [rsp+38h] [rbp-58h]
  int nBottomb; // [rsp+38h] [rbp-58h]
  int nPosY; // [rsp+3Ch] [rbp-54h]
  int nPosYb; // [rsp+3Ch] [rbp-54h]
  int nPosYa; // [rsp+3Ch] [rbp-54h]
  int OPEN_LIST; // [rsp+40h] [rbp-50h]
  int CLOSED_LIST; // [rsp+4Ch] [rbp-44h]
  int CLOSED_LISTb; // [rsp+4Ch] [rbp-44h]
  int CLOSED_LISTa; // [rsp+4Ch] [rbp-44h]
  CGridNavNode *pOpenList; // [rsp+58h] [rbp-38h] BYREF

  v12 = 2 * nWhichEdge;
  v13 = (portal->m_nStartIndex + portal->m_nEndIndex) >> 1;
  if ( 2 * nWhichEdge == 2 )
  {
    v14 = nBottom + v13;
    v15 = nRight;
  }
  else if ( v12 == 4 )
  {
    v15 = nLeft + v13;
    v14 = nBottom;
  }
  else if ( v12 != 0 )
  {
    v14 = nBottom + v13;
    v15 = nLeft;
  }
  else
  {
    v15 = nLeft + v13;
    v14 = nTop;
  }
  v16 = g_GridDirectionToDY;
  v17 = v15 - this->m_nMinX + this->m_nWidth * (v14 - this->m_nMinY);
  OPEN_LIST = CGridNavNode::sm_nListIDBase + 1;
  CGridNavNode::sm_nListIDBase += 2;
  CLOSED_LIST = CGridNavNode::sm_nListIDBase;
  v18 = &this->m_pCells[v17];
  v18->m_nListID = OPEN_LIST;
  v18->m_nCost = 0;
  v18->m_pOpenListNext = 0;
  pOpenList = v18;
  while ( 2 )
  {
    v23 = 0;
    p_pOpenList = &pOpenList;
LABEL_11:
    *p_pOpenList = v23;
    v24 = nLeft;
    m_nGridPosX = v18->m_nGridPosX;
    v26 = v18;
    v18->m_nListID = CLOSED_LIST;
    m_nGridPosY = v18->m_nGridPosY;
    v28 = v24;
    nPosY = m_nGridPosY;
    for ( i = 0; i != 8; ++i )
    {
      while ( 1 )
      {
        v41 = m_nGridPosX + g_GridDirectionToDX[i];
        if ( v28 > v41 )
          break;
        if ( nRight < v41 )
          break;
        v30 = nPosY + v16[i];
        if ( nBottom > v30 )
          break;
        if ( nTop < v30 )
          break;
        m_nMinY = this->m_nMinY;
        m_nWidth = this->m_nWidth;
        m_nMinX = this->m_nMinX;
        v34 = m_nWidth * (v30 - m_nMinY) + v41 - m_nMinX;
        v35 = &this->m_pCells[v34];
        if ( v35->m_nListID == CLOSED_LIST )
          break;
        if ( OPEN_LIST == v35->m_nListID )
          break;
        m_pMemory = this->m_CellFlags.m_Memory.m_pMemory;
        v37 = m_pMemory[v34];
        if ( (v37 & 1) == 0 || (v37 & 2) != 0 )
          break;
        if ( (i & 1) != 0 )
        {
          v80 = i + 1;
          v42 = (i + 1) & 7;
          curCell = g_GridDirectionToDY[v42];
          v43 = m_nGridPosX + g_GridDirectionToDX[v42];
          if ( v28 <= v43 && nRight >= v43 )
          {
            v44 = nPosY + curCell;
            if ( nBottom <= v44 && nTop >= v44 )
            {
              v45 = m_pMemory[m_nWidth * (v44 - m_nMinY) + v43 - m_nMinX];
              if ( (v45 & 1) == 0 || (v45 & 2) != 0 )
              {
                ++i;
                goto LABEL_22;
              }
            }
          }
          v46 = (i + 7) & 7;
          v47 = v16[v46];
          v48 = m_nGridPosX + g_GridDirectionToDX[v46];
          if ( v28 <= v48 && nRight >= v48 )
          {
            v49 = nPosY + v47;
            if ( nBottom <= v49 && nTop >= v49 )
            {
              v50 = m_pMemory[(v49 - m_nMinY) * m_nWidth + v48 - m_nMinX];
              i = v80;
              if ( (v50 & 1) == 0 || (v50 & 2) != 0 )
                goto LABEL_22;
            }
          }
        }
        else
        {
          v80 = i + 1;
        }
        v73 = v16;
        curCella = v26;
        v38 = CGridNavCell::ComputeStepCost(v26, v35);
        v26 = curCella;
        v16 = v73;
        v39 = curCella->m_nCost + v38;
        v35->m_nListID = OPEN_LIST;
        v35->m_nCost = v39;
        v40 = pOpenList;
        pOpenList = v35;
        v35->m_pOpenListNext = v40;
        i = v80;
LABEL_22:
        if ( i == 8 )
          goto LABEL_25;
      }
    }
LABEL_25:
    nLeft = v28;
    v18 = pOpenList;
    if ( pOpenList != 0 )
    {
      m_pOpenListNext = pOpenList->m_pOpenListNext;
      p_m_pOpenListNext = &pOpenList->m_pOpenListNext;
      m_nCost = pOpenList->m_nCost;
      if ( m_pOpenListNext == 0 )
        continue;
      p_pOpenList = &pOpenList;
      do
      {
        if ( m_pOpenListNext->m_nCost < m_nCost )
        {
          v18 = m_pOpenListNext;
          p_pOpenList = &p_m_pOpenListNext->m_pOpenListNext;
          m_nCost = m_pOpenListNext->m_nCost;
        }
        p_m_pOpenListNext = &m_pOpenListNext->m_pOpenListNext;
        m_pOpenListNext = m_pOpenListNext->m_pOpenListNext;
      }
      while ( m_pOpenListNext != 0 );
      v23 = v18->m_pOpenListNext;
      goto LABEL_11;
    }
    break;
  }
  if ( nWhichEdge <= 3 )
  {
    v51 = portal;
    v52 = nWhichEdge;
    v53 = nBottom;
    v54 = &sector->m_Portals[nWhichEdge];
    v55 = 2 * nWhichEdge;
    v56 = CLOSED_LIST;
    do
    {
      v57 = 0;
      for ( j = 0; v54->m_Size > j; *(v68 + 5) = nEdgeID )
      {
        while ( 1 )
        {
          v59 = &v54->m_Memory.m_pMemory[v57];
          if ( v59->m_nRegionID == -1 )
          {
            v60 = (v59->m_nStartIndex + v59->m_nEndIndex) >> 1;
            if ( v55 == 2 )
            {
              v61 = v53 + v60;
              v62 = nRight;
            }
            else if ( v55 == 4 )
            {
              v62 = nLeft + v60;
              v61 = v53;
            }
            else if ( v55 != 0 )
            {
              v61 = v53 + v60;
              v62 = nLeft;
            }
            else
            {
              v62 = nLeft + v60;
              v61 = nTop;
            }
            v63 = &this->m_pCells[v62 - this->m_nMinX + this->m_nWidth * (v61 - this->m_nMinY)];
            if ( v63->m_nListID == v56 )
              break;
          }
          ++j;
          ++v57;
          if ( v54->m_Size <= j )
            goto LABEL_59;
        }
        v59->m_nRegionID = nRegionID;
        v64 = v63->m_nCost;
        m_Size = v51->m_Connections.m_Size;
        if ( m_Size == v51->m_Connections.m_Memory.m_nAllocationCount )
        {
          pBestPrevLink = v53;
          v75 = nLeft;
          curCellb = v51;
          v82 = v55;
          nBottomb = v56;
          nPosYa = v52;
          CLOSED_LISTa = v64;
          CUtlMemory<CGridNavSectorPortalConnection,int>::Grow(&portal->m_Connections.m_Memory, 1);
          v51 = curCellb;
          v53 = pBestPrevLink;
          nLeft = v75;
          v55 = v82;
          m_Size = curCellb->m_nGridPosY;
          v56 = nBottomb;
          v52 = nPosYa;
          v64 = CLOSED_LISTa;
        }
        v51->m_Connections.m_Size = m_Size + 1;
        v66 = &v51->m_Connections.m_Memory.m_pMemory[m_Size];
        *v66 = v64;
        *(v66 + 4) = v52;
        *(v66 + 5) = j;
        v67 = v59->m_Connections.m_Size;
        if ( v67 == v59->m_Connections.m_Memory.m_nAllocationCount )
        {
          pBestPrevLinka = v53;
          v74 = nLeft;
          curCellc = v51;
          v81 = v55;
          nBottomc = v56;
          nPosYb = v52;
          CLOSED_LISTb = v64;
          CUtlMemory<CGridNavSectorPortalConnection,int>::Grow(&v59->m_Connections.m_Memory, 1);
          v67 = v59->m_Connections.m_Size;
          v53 = pBestPrevLinka;
          nLeft = v74;
          v51 = curCellc;
          v55 = v81;
          v56 = nBottomc;
          v52 = nPosYb;
          v64 = CLOSED_LISTb;
        }
        ++j;
        ++v57;
        v59->m_Connections.m_Size = v67 + 1;
        v68 = &v59->m_Connections.m_Memory.m_pMemory[v67];
        *v68 = v64;
        *(v68 + 4) = nWhichEdge;
      }
LABEL_59:
      ++v52;
      ++v54;
      v55 += 2;
    }
    while ( v52 != 4 );
  }
}


// CalculateHeuristic  (line 962, @0x00000000024d5ef0, libserver.so)
// callers: CGridNav::ComputePortalConnectionCost, AddNodeToOpenList, CGridNav::BuildPath
int __fastcall CalculateHeuristic(int x, int y, int nGoalXMin, int nGoalXMax, int nGoalYMin, int nGoalYMax)
{
  int v6; // ecx
  int v7; // eax

  if ( x <= nGoalXMax )
  {
    v6 = 0;
    if ( x < nGoalXMin )
      v6 = nGoalXMin - x;
  }
  else
  {
    v6 = x - nGoalXMax;
  }
  if ( y <= nGoalYMax )
  {
    v7 = 0;
    if ( y < nGoalYMin )
      v7 = nGoalYMin - y;
    if ( v6 > v7 )
      return 14 * v7 + 10 * (v6 - v7);
  }
  else
  {
    v7 = y - nGoalYMax;
    if ( v6 > y - nGoalYMax )
      return 14 * v7 + 10 * (v6 - v7);
  }
  return 14 * v6 + 10 * (v7 - v6);
}


// CGridNav::ComputePortalConnectionCost  (line 995, @0x00000000024d5f60, libserver.so)  // inlines: GetCell, GetCellFlags, GetCellIndex, IsCellPassable, OutOfBounds
// calls: CalculateHeuristic, CGridNavCell::ComputeStepCost
// callers: CGridNav::BuildSector
// globals: CGridNavNode::sm_nListIDBase, g_GridDirectionToDX, g_GridDirectionToDY
int __fastcall CGridNav::ComputePortalConnectionCost(
        CGridNav *const this,
        int nStartX,
        int nStartY,
        int nGoalX,
        int nGoalY,
        int nLeft,
        int nRight,
        int nBottom,
        int nTop)
{
  int m_nMinY; // edx
  int m_nMinX; // ecx
  CGridNavCell *m_pCells; // r10
  int v17; // ebx
  int v18; // r12d
  int m_nWidth; // eax
  CGridNavNode *v20; // rbx
  CGridNavNode *v21; // r13
  int v22; // eax
  CGridNavNode::lambda *p_m_pOpenListNext; // rsi
  CGridNavNode *m_pOpenListNext; // rax
  int v25; // ecx
  CGridNavNode **p_pOpenList; // rdi
  int v27; // edx
  const char *v28; // r11
  int v29; // r14d
  int v30; // r13d
  int v31; // edi
  int v32; // eax
  int v33; // esi
  __int64 v34; // r9
  CGridNavCell *v35; // rbx
  unsigned __int8 *m_pMemory; // r8
  unsigned __int8 v37; // r9
  int v38; // r10d
  int v39; // r10d
  CGridNavNode *v40; // rax
  int v41; // r12d
  __int64 v42; // r9
  int v43; // r9d
  int v44; // r10d
  unsigned __int8 v45; // r9
  __int64 v46; // rdx
  int v47; // r9d
  int v48; // edx
  int v49; // r9d
  int v50; // eax
  unsigned __int8 v51; // al
  CGridNavCell *v55; // [rsp+10h] [rbp-68h]
  const char *v56; // [rsp+18h] [rbp-60h]
  int OPEN_LIST; // [rsp+20h] [rbp-58h]
  int nCosta; // [rsp+24h] [rbp-54h]
  int nCostb; // [rsp+24h] [rbp-54h]
  char nCost; // [rsp+24h] [rbp-54h]
  int v61; // [rsp+28h] [rbp-50h]
  int nPosY; // [rsp+2Ch] [rbp-4Ch]
  CGridNavCell *pCurCell; // [rsp+30h] [rbp-48h]
  int v64; // [rsp+38h] [rbp-40h]
  CGridNavNode *pOpenList; // [rsp+48h] [rbp-30h] BYREF

  m_nMinY = this->m_nMinY;
  m_nMinX = this->m_nMinX;
  m_pCells = this->m_pCells;
  v17 = CGridNavNode::sm_nListIDBase + 1;
  CGridNavNode::sm_nListIDBase += 2;
  v18 = v17;
  v64 = CGridNavNode::sm_nListIDBase;
  m_nWidth = this->m_nWidth;
  OPEN_LIST = v17;
  v55 = &m_pCells[nGoalX - m_nMinX + m_nWidth * (nGoalY - m_nMinY)];
  v20 = &m_pCells[nStartX - m_nMinX + (nStartY - m_nMinY) * m_nWidth];
  v20->m_nListID = v18;
  v21 = v20;
  v22 = CalculateHeuristic(nStartX, nStartY, nGoalX, nGoalX, nGoalY, nGoalY);
  v20->m_nCost = 0;
  v20->m_nHeuristic = v22;
  v20->m_pOpenListNext = 0;
  v20->m_pParent = 0;
  pOpenList = v20;
  while ( 2 )
  {
    p_m_pOpenListNext = &v21->m_pOpenListNext;
    m_pOpenListNext = v21->m_pOpenListNext;
    v25 = v21->m_nCost + v21->m_nHeuristic;
    if ( m_pOpenListNext != 0 )
    {
      p_pOpenList = &pOpenList;
      do
      {
        if ( m_pOpenListNext->m_nHeuristic + m_pOpenListNext->m_nCost < v25 )
        {
          v21 = m_pOpenListNext;
          p_pOpenList = &p_m_pOpenListNext->m_pOpenListNext;
          v25 = m_pOpenListNext->m_nHeuristic + m_pOpenListNext->m_nCost;
        }
        p_m_pOpenListNext = &m_pOpenListNext->m_pOpenListNext;
        m_pOpenListNext = m_pOpenListNext->m_pOpenListNext;
      }
      while ( m_pOpenListNext != 0 );
      *p_pOpenList = v21->m_pOpenListNext;
      v21->m_nListID = v64;
      if ( v21 != v55 )
        goto LABEL_8;
      return v21->m_nCost;
    }
    pOpenList = 0;
    v21->m_nListID = v64;
    if ( v21 == v55 )
      return v21->m_nCost;
LABEL_8:
    v27 = 0;
    pCurCell = v21;
    v28 = g_GridDirectionToDX;
    v29 = *(&v21->m_bIsPortal + 1);
    nPosY = v21[1].m_nListID;
    do
    {
      while ( 1 )
      {
        v41 = v29 + v28[v27];
        if ( nLeft > v41 )
          break;
        if ( nRight < v41 )
          break;
        v30 = nPosY + g_GridDirectionToDY[v27];
        if ( nBottom > v30 )
          break;
        if ( nTop < v30 )
          break;
        v31 = this->m_nMinY;
        v32 = this->m_nWidth;
        v33 = this->m_nMinX;
        v34 = v41 - v33 + v32 * (v30 - v31);
        v35 = &this->m_pCells[v34];
        if ( v35->m_nListID == v64 )
          break;
        m_pMemory = this->m_CellFlags.m_Memory.m_pMemory;
        v37 = m_pMemory[v34];
        if ( (v37 & 1) == 0 || (v37 & 2) != 0 )
          break;
        if ( (v27 & 1) == 0 )
        {
          v61 = v27 + 1;
LABEL_17:
          v56 = v28;
          nCosta = v35->m_nListID;
          v38 = CGridNavCell::ComputeStepCost(pCurCell, v35);
          v28 = v56;
          v39 = pCurCell->m_nCost + v38;
          if ( OPEN_LIST == nCosta )
          {
            v27 = v61;
            if ( v39 < v35->m_nCost )
            {
              v35->m_nCost = v39;
              v35->m_pParent = pCurCell;
            }
          }
          else
          {
            nCostb = v39;
            v35->m_nHeuristic = CalculateHeuristic(v41, v30, nGoalX, nGoalX, nGoalY, nGoalY);
            v27 = v61;
            v35->m_nListID = OPEN_LIST;
            v28 = v56;
            v40 = pOpenList;
            v35->m_pParent = pCurCell;
            v35->m_nCost = nCostb;
            pOpenList = v35;
            v35->m_pOpenListNext = v40;
          }
          goto LABEL_19;
        }
        v61 = v27 + 1;
        v42 = (v27 + 1) & 7;
        nCost = g_GridDirectionToDY[v42];
        v43 = v29 + g_GridDirectionToDX[v42];
        if ( nLeft > v43
          || nRight < v43
          || (v44 = nPosY + nCost, nBottom > v44)
          || nTop < v44
          || ((v45 = m_pMemory[v32 * (v44 - v31) + v43 - v33]) & 1) != 0 && (v45 & 2) == 0 )
        {
          v46 = (v27 + 7) & 7;
          v47 = g_GridDirectionToDY[v46];
          v48 = v29 + v28[v46];
          if ( nLeft <= v48 && nRight >= v48 )
          {
            v49 = nPosY + v47;
            if ( nBottom <= v49 && nTop >= v49 )
            {
              v50 = v48 - v33 + (v49 - v31) * v32;
              v27 = v61;
              v51 = m_pMemory[v50];
              if ( (v51 & 1) == 0 || (v51 & 2) != 0 )
                goto LABEL_19;
            }
          }
          goto LABEL_17;
        }
        ++v27;
LABEL_19:
        if ( v27 == 8 )
          goto LABEL_22;
      }
      ++v27;
    }
    while ( v27 != 8 );
LABEL_22:
    if ( pOpenList != 0 )
    {
      v21 = pOpenList;
      continue;
    }
    return 99999;
  }
}


// AddNodeToOpenList  (line 1225, @0x00000000024fcef0, libserver.so)  // inlines: AddNode, AddToTail, Element, GrowMemory, Insert, PercolateDown, PercolateUp, RevaluateElement, SetIndex, Swap, UpdateNodeCost, operator(), operator[]
// calls: CalculateHeuristic, CUtlMemory<CGridNavOpenList::GridNavHeapEntry_t, int>::Grow
// callers: CGridNav::BuildPath
void __fastcall AddNodeToOpenList(
        CGridNavNode *pNodeToAdd,
        CGridNavNode *pCurrentNode,
        int nStepCost,
        CGridNavOpenList *const openList,
        int nOpenListID,
        int nPosX,
        int nPosY,
        int nGoalMinX,
        int nGoalMaxX,
        int nGoalMinY,
        int nGoalMaxY,
        int nMaxCost,
        CGridNavNode **const pClosestNode,
        int *const nBestHeuristic,
        int *const nCloseScore,
        bool *const bBeenCloseToGoal)
{
  int v17; // r12d
  int v21; // eax
  int v22; // r13d
  int m_Size; // r12d
  unsigned int m_nTotalNodesAdded; // r14d
  int v25; // edx
  __int64 v26; // rdx
  CGridNavOpenList::GridNavHeapEntry_t *v27; // rcx
  int m_nHeapIndex; // r13d
  int v29; // r8d
  int v30; // r12d
  int v31; // edx
  int v32; // eax
  CGridNavOpenList::GridNavHeapEntry_t *v33; // r15
  __int64 v34; // rcx
  unsigned __int64 v35; // rsi
  unsigned int v36; // r11d
  unsigned int v37; // r10d
  CGridNavNode *v38; // r9
  CGridNavOpenList::GridNavHeapEntry_t *v39; // rdi
  int v40; // ecx
  CGridNavOpenList::GridNavHeapEntry_t *v41; // r9
  CGridNavOpenList::GridNavHeapEntry_t *v42; // rsi
  CGridNavOpenList::GridNavHeapEntry_t *v43; // rdi
  bool v44; // r11
  CGridNavOpenList::GridNavHeapEntry_t *v45; // r9
  CGridNavOpenList::GridNavHeapEntry_t *v46; // rsi
  CGridNavOpenList::GridNavHeapEntry_t *v47; // rdi
  bool v48; // r11
  CGridNavOpenList *v49; // r10
  CGridNavNode *m_pNode; // rbx
  __int64 v51; // rcx
  unsigned int m_nIndex; // r14d
  CGridNavNode *v53; // r11
  CGridNavOpenList::GridNavHeapEntry_t *v54; // rcx
  __int64 v55; // rdx
  CGridNavOpenList::GridNavHeapEntry_t *m_pMemory; // rcx
  int v57; // r8d
  __int64 v58; // rdi
  CGridNavOpenList::GridNavHeapEntry_t *v59; // rsi
  CGridNavOpenList::GridNavHeapEntry_t *v60; // rcx
  unsigned int m_nScore; // r9d
  bool v62; // bl
  __int64 i; // r9
  CGridNavNode *v64; // rdx
  __int64 v65; // rax
  unsigned int v66; // r11d
  CGridNavNode *v67; // r10
  CGridNavOpenList::GridNavHeapEntry_t *v68; // rax
  __int64 v69; // r9
  CGridNavOpenList::GridNavHeapEntry_t *v70; // rax
  int v71; // edi
  __int64 v72; // rsi
  CGridNavOpenList::GridNavHeapEntry_t *v73; // rcx
  CGridNavOpenList::GridNavHeapEntry_t *v74; // rax
  unsigned int v75; // r8d
  bool v76; // r10
  int nHeuristic; // [rsp+Ch] [rbp-34h]

  v17 = nStepCost + pCurrentNode->m_nCost;
  if ( v17 > nMaxCost )
    return;
  if ( pNodeToAdd->m_nListID != nOpenListID )
  {
    v21 = CalculateHeuristic(nPosX, nPosY, nGoalMinX, nGoalMaxX, nGoalMinY, nGoalMaxY);
    pNodeToAdd->m_pParent = pCurrentNode;
    pNodeToAdd->m_nListID = nOpenListID;
    v22 = v17 + v21;
    pNodeToAdd->m_nHeuristic = v21;
    pNodeToAdd->m_nCost = v17;
    pNodeToAdd->m_nHeapIndex = -1;
    m_Size = openList->m_Heap.m_heap.m_Size;
    m_nTotalNodesAdded = openList->m_nTotalNodesAdded;
    v25 = openList->m_Heap.m_heap.m_Size;
    if ( openList->m_Heap.m_heap.m_Size == openList->m_Heap.m_heap.m_Memory.m_nAllocationCount )
    {
      nHeuristic = v21;
      CUtlMemory<CGridNavOpenList::GridNavHeapEntry_t,int>::Grow(&openList->m_Heap.m_heap.m_Memory, 1);
      v25 = openList->m_Heap.m_heap.m_Size;
      v21 = nHeuristic;
    }
    openList->m_Heap.m_heap.m_Size = v25 + 1;
    v26 = m_Size;
    v27 = &openList->m_Heap.m_heap.m_Memory.m_pMemory[m_Size];
    v27->m_nScore = v22;
    v27->m_nIndex = m_nTotalNodesAdded;
    v27->m_pNode = pNodeToAdd;
    openList->m_Heap.m_heap.m_Memory.m_pMemory[m_Size].m_pNode->m_nHeapIndex = m_Size;
    if ( openList->m_Heap.m_heap.m_Size > m_Size && m_Size != 0 )
    {
      v49 = openList;
      while ( 1 )
      {
        v55 = v26;
        m_pMemory = v49->m_Heap.m_heap.m_Memory.m_pMemory;
        v57 = (m_Size + 1) / 2 - 1;
        v58 = v57;
        v59 = &m_pMemory[v58];
        v60 = &m_pMemory[v55];
        m_nScore = v59->m_nScore;
        v62 = v60->m_nScore > v59->m_nScore;
        if ( v60->m_nScore == v59->m_nScore )
          v62 = v60->m_nIndex < v59->m_nIndex;
        if ( v62 )
          break;
        m_pNode = v60->m_pNode;
        v51 = *&v60->m_nScore;
        m_nIndex = v59->m_nIndex;
        v53 = v59->m_pNode;
        v59->m_pNode = m_pNode;
        *&v59->m_nScore = v51;
        v54 = &v49->m_Heap.m_heap.m_Memory.m_pMemory[v55];
        v54->m_nScore = m_nScore;
        v54->m_nIndex = m_nIndex;
        v54->m_pNode = v53;
        v49->m_Heap.m_heap.m_Memory.m_pMemory[v58].m_pNode->m_nHeapIndex = v57;
        v49->m_Heap.m_heap.m_Memory.m_pMemory[v55].m_pNode->m_nHeapIndex = m_Size;
        if ( (m_Size + 1) / 2 == 1 )
          break;
        m_Size = (m_Size + 1) / 2 - 1;
        v26 = v57;
      }
      ++v49->m_nTotalNodesAdded;
      if ( v21 >= *nBestHeuristic )
        goto LABEL_8;
    }
    else
    {
      ++openList->m_nTotalNodesAdded;
      if ( v21 >= *nBestHeuristic )
        goto LABEL_8;
    }
    *nBestHeuristic = v21;
    *pClosestNode = pNodeToAdd;
LABEL_8:
    if ( !*bBeenCloseToGoal && v21 <= 79 )
    {
      *bBeenCloseToGoal = 1;
      *nCloseScore = v22;
    }
    return;
  }
  if ( v17 >= pNodeToAdd->m_nCost )
    return;
  pNodeToAdd->m_nCost = v17;
  pNodeToAdd->m_pParent = pCurrentNode;
  m_nHeapIndex = pNodeToAdd->m_nHeapIndex;
  if ( m_nHeapIndex < 0 )
    return;
  openList->m_Heap.m_heap.m_Memory.m_pMemory[m_nHeapIndex].m_nScore = pNodeToAdd->m_nHeuristic + v17;
  v29 = openList->m_Heap.m_heap.m_Size;
  v30 = openList->m_Heap.m_heap.m_Size / 2;
  if ( m_nHeapIndex >= v30 )
    goto LABEL_41;
  v31 = m_nHeapIndex;
  do
  {
    v40 = 2 * v31 + 2;
    v32 = 2 * v31 + 1;
    if ( v29 <= v32 )
    {
      v32 = v31;
      if ( v29 <= v40 )
        goto LABEL_17;
LABEL_25:
      v45 = openList->m_Heap.m_heap.m_Memory.m_pMemory;
      v46 = &v45[v32];
      v47 = &v45[v40];
      v48 = v46->m_nScore > v47->m_nScore;
      if ( v46->m_nScore == v47->m_nScore )
        v48 = v46->m_nIndex < v47->m_nIndex;
      if ( v48 )
        v32 = 2 * v31 + 2;
      goto LABEL_17;
    }
    v41 = openList->m_Heap.m_heap.m_Memory.m_pMemory;
    v42 = &v41[v31];
    v43 = &v41[v32];
    v44 = v42->m_nScore > v43->m_nScore;
    if ( v42->m_nScore == v43->m_nScore )
      v44 = v42->m_nIndex < v43->m_nIndex;
    if ( !v44 )
      v32 = v31;
    if ( v29 > v40 )
      goto LABEL_25;
LABEL_17:
    if ( v31 == v32 )
      break;
    v33 = openList->m_Heap.m_heap.m_Memory.m_pMemory;
    v34 = v32;
    v35 = v31;
    v36 = v33[v35].m_nScore;
    v37 = v33[v35].m_nIndex;
    v38 = v33[v35].m_pNode;
    v33[v35] = _mm_loadu_si128(&v33[v34]);
    v39 = &openList->m_Heap.m_heap.m_Memory.m_pMemory[v34];
    v39->m_nScore = v36;
    v39->m_nIndex = v37;
    v39->m_pNode = v38;
    openList->m_Heap.m_heap.m_Memory.m_pMemory[v35].m_pNode->m_nHeapIndex = v31;
    openList->m_Heap.m_heap.m_Memory.m_pMemory[v34].m_pNode->m_nHeapIndex = v32;
    v31 = v32;
  }
  while ( v30 > v32 );
  if ( m_nHeapIndex == v31 )
  {
    v29 = openList->m_Heap.m_heap.m_Size;
LABEL_41:
    if ( m_nHeapIndex < v29 && m_nHeapIndex != 0 )
    {
      for ( i = m_nHeapIndex; ; i = v71 )
      {
        v69 = i;
        v70 = openList->m_Heap.m_heap.m_Memory.m_pMemory;
        v71 = (m_nHeapIndex + 1) / 2 - 1;
        v72 = v71;
        v73 = &v70[v72];
        v74 = &v70[v69];
        v75 = v73->m_nScore;
        v76 = v74->m_nScore > v73->m_nScore;
        if ( v74->m_nScore == v73->m_nScore )
          v76 = v74->m_nIndex < v73->m_nIndex;
        if ( v76 )
          break;
        v64 = v74->m_pNode;
        v65 = *&v74->m_nScore;
        v66 = v73->m_nIndex;
        v67 = v73->m_pNode;
        v73->m_pNode = v64;
        *&v73->m_nScore = v65;
        v68 = &openList->m_Heap.m_heap.m_Memory.m_pMemory[v69];
        v68->m_nScore = v75;
        v68->m_nIndex = v66;
        v68->m_pNode = v67;
        openList->m_Heap.m_heap.m_Memory.m_pMemory[v72].m_pNode->m_nHeapIndex = v71;
        openList->m_Heap.m_heap.m_Memory.m_pMemory[v69].m_pNode->m_nHeapIndex = m_nHeapIndex;
        if ( (m_nHeapIndex + 1) / 2 == 1 )
          break;
        m_nHeapIndex = (m_nHeapIndex + 1) / 2 - 1;
      }
    }
  }
}


// CGridNav::BuildPath  (line 1275, @0x00000000024fd330, libserver.so)  // inlines: AddNode, AddToTail, Base, CGridNavOpenList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlPriorityQueue, CUtlVector, CUtlVectorBase, ConvertToExternalMemory, Element, EnsureCapacity, FastRemove, GetBool, GetCell, GetCellFlags, GetCellIndex, GetInt, GetMidpointXY, GetSector, GetSectorEdges, GridPosToSectorX, GridPosToSectorY, GrowMemory, Insert, IsCellPassableForFlags, LeafCodeInfo_t, OutOfBounds, PercolateDown, PercolateUp, Purge, Purge_FixedGrowable, RemoveAll, RemoveAtHead, RemoveFirst, SetCount, SetIndex, Square<float>, Swap, memcpy, operator&, operator(), operator[], ~CGridNavOpenList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlPriorityQueue, ~CUtlVector, ~CUtlVectorBase
// calls: CGridNavBase::ComputePassabilityFlagsForUnit, CGridNav::IsEnclosed, CalculateHeuristic, CGridNavSector::GetPortal, AddNodeToOpenList, CGridNavCell::ComputeStepCost, CUtlMemory<CGridNavOpenList::GridNavHeapEntry_t, int>::Purge, CUtlMemory<CGridNavOpenList::GridNavHeapEntry_t, int>::Grow, CUtlVectorBase<CGridNavOpenList::GridNavHeapEntry_t, CUtlMemoryFixedGrowable<CGridNavOpenList::GridNavHeapEntry_t, 2048ul, int> >::~CUtlVectorBase, _Unwind_Resume, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors (16 total)
// callers: CGridNav::CanFindPath, CGridNav::FindPathLength, TimePathBuilding, CGridNavPath::Build, CDOTA_Commander::DoPassabilityGridAnalysis
// strings: "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow"
// globals: CGridNavNode::sm_nListIDBase, g_GridDirectionToDX, g_GridDirectionToDY
__int64 __fastcall CGridNav::BuildPath(
        CGridNav *const this,
        int nStartGridPosX,
        int nStartGridPosY,
        int nGoalGridPosX,
        int nGoalGridPosY,
        GridNavDirectionVec_t *const path,
        float flAllowableDistance,
        bool bUse2x2Goal,
        CDOTA_BaseNPC *pUnit,
        int nMaxCost,
        bool *pOutReachedGoal)
{
  int v14; // eax
  int m_nMaxX; // r15d
  int v16; // eax
  int v17; // edx
  int v18; // esi
  int v19; // edx
  int v20; // ebx
  int v21; // ebx
  int v22; // r13d
  int v23; // r14d
  int v24; // r8d
  int v25; // ecx
  int m_nMinY; // edx
  int v27; // eax
  int m_nSectorWidth; // r13d
  int v29; // r9d
  CGridNavSector *m_pSectors; // rbx
  int v31; // esi
  int v32; // r11d
  int v33; // r15d
  const CGridNavCell *v34; // rdi
  __int64 v35; // rax
  CGridNavSector *v36; // rdx
  CGridNavSector **v37; // rax
  __int64 v38; // rax
  CGridNavNode *v39; // r13
  int v40; // ebx
  int v41; // eax
  int m_Size; // ebx
  unsigned int v43; // r14d
  int v44; // eax
  unsigned int m_nTotalNodesAdded; // r15d
  __int64 v46; // rdx
  CGridNavOpenList::GridNavHeapEntry_t *v47; // rax
  int v48; // r9d
  CGridNavOpenList::GridNavHeapEntry_t *m_pMemory; // rax
  __int64 m_pNode; // rcx
  CGridNavSector **v51; // rbx
  CGridNavOpenList::GridNavHeapEntry_t *v52; // rax
  CGridNavNode *v53; // r13
  __int64 *v54; // rdx
  bool v55; // zf
  int i; // edx
  int v57; // eax
  __int64 v58; // rsi
  unsigned int m_nScore; // r11d
  unsigned int m_nIndex; // r10d
  CGridNavNode *v61; // r8
  char *v62; // rdi
  CGridNavOpenList::GridNavHeapEntry_t *v63; // rdi
  CGridNavOpenList::GridNavHeapEntry_t *v64; // rsi
  CGridNavOpenList::GridNavHeapEntry_t *v65; // rdi
  bool v66; // r11
  CGridNavOpenList::GridNavHeapEntry_t *v67; // rsi
  CGridNavOpenList::GridNavHeapEntry_t *v68; // rdi
  bool v69; // r11
  const CGridNavCell **v70; // rax
  int m_nMinX; // r8d
  float v72; // xmm0_4
  signed int v73; // eax
  CGridNavNode *v74; // rax
  int v75; // r14d
  int v76; // edx
  int v77; // r9d
  int v78; // r11d
  int v79; // edi
  __int64 v80; // rsi
  CGridNavCell *v81; // r10
  int v82; // esi
  bool v83; // r14
  CGridNavNode *v84; // rbx
  CGridNavNode *v85; // rax
  unsigned int v86; // r15d
  int v87; // r12d
  char v88; // dl
  int v89; // esi
  __int64 v90; // rdi
  int v91; // eax
  int m_nMaxY; // eax
  __int64 v93; // r14
  __int64 v94; // rax
  int v95; // r10d
  int v96; // edx
  __int64 v97; // rax
  int v98; // r8d
  int v99; // eax
  int v100; // r8d
  int v101; // edi
  int v102; // r8d
  int v103; // r9d
  int v104; // ecx
  int v105; // r8d
  int v106; // edi
  int v107; // eax
  int v108; // esi
  int v109; // eax
  int v110; // edi
  CGridNavSector *v111; // rdi
  CGridNavSector **v112; // rax
  CGridNavSectorPortal *v113; // rax
  int v114; // esi
  int v115; // edx
  __int64 v116; // rdx
  int v117; // ecx
  int v118; // edx
  unsigned int v119; // edx
  CGridNavSector *v120; // rax
  CGridNavSector *v121; // rdx
  CGridNavSector **v122; // rax
  CGridNavSectorPortal *Portal; // rax
  int v124; // eax
  __int64 v125; // rdx
  int v126; // ecx
  int v127; // edx
  unsigned int v128; // edx
  unsigned __int64 m_nAllocated; // rax
  __int64 v130; // rdx
  int v131; // r13d
  int v132; // r12d
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::IndexType_t *v134; // rdx
  CGridNavNode *m_pParent; // rdx
  int m_nListID; // r9d
  int v137; // edi
  bool v138; // cc
  unsigned __int64 v139; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::IndexType_t *v140; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::IndexType_t *v141; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::IndexType_t *v142; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::IndexType_t *v143; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::IndexType_t *v144; // rdx
  uint32 v145; // eax
  CGridNavSectorPortal *v146; // rax
  CGridNavCell *v147; // rdi
  int v148; // edx
  int v149; // r9d
  int v150; // eax
  int v151; // ecx
  CGridNavNode *v152; // rdx
  __int64 v153; // rax
  unsigned int v154; // r11d
  CGridNavNode *v155; // r10
  CGridNavOpenList::GridNavHeapEntry_t *v156; // rax
  __int64 v157; // r8
  int v158; // esi
  __int64 v159; // rdi
  CGridNavOpenList::GridNavHeapEntry_t *v160; // rax
  unsigned int v161; // r9d
  bool v162; // dl
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rdi
  __int64 v166; // rsi
  void *v167; // rcx
  unsigned __int64 v168; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::ElemType_t *m_Data; // rsi
  CGridNavCell *v170; // [rsp+58h] [rbp-81C8h]
  int v171; // [rsp+60h] [rbp-81C0h]
  int v172; // [rsp+64h] [rbp-81BCh]
  int nTestPosX; // [rsp+68h] [rbp-81B8h]
  CGridNavSector *v174; // [rsp+70h] [rbp-81B0h]
  float v175; // [rsp+78h] [rbp-81A8h]
  bool bGoalIsEnclosed; // [rsp+7Fh] [rbp-81A1h]
  int nDirLeft; // [rsp+90h] [rbp-8190h]
  int nDirLefta; // [rsp+90h] [rbp-8190h]
  char nDirLeftb; // [rsp+90h] [rbp-8190h]
  int v180; // [rsp+94h] [rbp-818Ch]
  CGridNavNode *pFirstInRangeNode; // [rsp+A8h] [rbp-8178h]
  int nNumGoalCells; // [rsp+B4h] [rbp-816Ch]
  int nPortalY; // [rsp+C0h] [rbp-8160h]
  int nPortalYa; // [rsp+C0h] [rbp-8160h]
  int nRight; // [rsp+C4h] [rbp-815Ch]
  int nRighta; // [rsp+C4h] [rbp-815Ch]
  unsigned __int8 *nStepCost; // [rsp+C8h] [rbp-8158h]
  int nStepCosta; // [rsp+C8h] [rbp-8158h]
  CGridNavSector *nStepCostb; // [rsp+C8h] [rbp-8158h]
  int nStepCostc; // [rsp+C8h] [rbp-8158h]
  int nPosY; // [rsp+D0h] [rbp-8150h]
  int nPosYa; // [rsp+D0h] [rbp-8150h]
  int nPosYb; // [rsp+D0h] [rbp-8150h]
  int nTestEdge; // [rsp+D4h] [rbp-814Ch]
  int nTestEdgea; // [rsp+D4h] [rbp-814Ch]
  int nTestEdgeb; // [rsp+D4h] [rbp-814Ch]
  int v199; // [rsp+D8h] [rbp-8148h]
  int v200; // [rsp+D8h] [rbp-8148h]
  int m_nWidth; // [rsp+E8h] [rbp-8138h]
  bool *m_pCells; // [rsp+F0h] [rbp-8130h]
  int nGoalXMax; // [rsp+F8h] [rbp-8128h]
  int OPEN_LIST; // [rsp+FCh] [rbp-8124h]
  int OPEN_LISTa; // [rsp+FCh] [rbp-8124h]
  int nGoalXMin; // [rsp+100h] [rbp-8120h]
  int nGoalYMax; // [rsp+104h] [rbp-811Ch]
  int nGoalYMin; // [rsp+110h] [rbp-8110h]
  int nBottom; // [rsp+114h] [rbp-810Ch]
  int nBottoma; // [rsp+114h] [rbp-810Ch]
  int nBottomb; // [rsp+114h] [rbp-810Ch]
  int nPortalX; // [rsp+118h] [rbp-8108h]
  int nPortalXa; // [rsp+118h] [rbp-8108h]
  CGridNavSectorPortal *nPortalXb; // [rsp+118h] [rbp-8108h]
  CGridNavNode *nPortalXc; // [rsp+118h] [rbp-8108h]
  int nTestPosY; // [rsp+120h] [rbp-8100h]
  int nPosX; // [rsp+128h] [rbp-80F8h]
  int nPosXa; // [rsp+128h] [rbp-80F8h]
  __int64 nPosXb; // [rsp+128h] [rbp-80F8h]
  float m_flEdgeSize; // [rsp+130h] [rbp-80F0h]
  int nGoalGridPosYb; // [rsp+138h] [rbp-80E8h]
  int nGoalGridPosYc; // [rsp+138h] [rbp-80E8h]
  int x; // [rsp+13Ch] [rbp-80E4h]
  int xa; // [rsp+13Ch] [rbp-80E4h]
  int xb; // [rsp+13Ch] [rbp-80E4h]
  bool bBeenCloseToGoal; // [rsp+147h] [rbp-80D9h] BYREF
  GridNavCellFlags_t nRequiredFlags; // [rsp+148h] [rbp-80D8h] BYREF
  GridNavCellFlags_t nBlockingFlags; // [rsp+14Ch] [rbp-80D4h] BYREF
  int nBestHeuristic; // [rsp+150h] [rbp-80D0h] BYREF
  int nCloseScore; // [rsp+154h] [rbp-80CCh] BYREF
  CGridNavNode *pFinalNode; // [rsp+158h] [rbp-80C8h] BYREF
  LeafCodeInfo_t v233; // [rsp+160h] [rbp-80C0h] BYREF
  const CGridNavCell *pGoalCells[4]; // [rsp+180h] [rbp-80A0h] BYREF
  CGridNavSector *pGoalSectors[4]; // [rsp+1A0h] [rbp-8080h] BYREF
  CGridNavOpenList openList; // [rsp+1C0h] [rbp-8060h] BYREF
  unsigned __int64 v237; // [rsp+81E8h] [rbp-38h]
  int nMaxCosta; // [rsp+8240h] [rbp+20h]

  v237 = __readfsqword(0x28u);
  if ( pOutReachedGoal != 0 )
    *pOutReachedGoal = 0;
  m_flEdgeSize = this->m_flEdgeSize;
  if ( this->m_bLoaded )
  {
    v14 = 0x7FFFFFFF;
    m_nMaxX = this->m_nMaxX;
    nRequiredFlags = GridNavCellFlags_t::GRIDNAV_CELL_FLAG_EMPTY;
    nBlockingFlags = GridNavCellFlags_t::GRIDNAV_CELL_FLAG_EMPTY;
    if ( nMaxCost > 0 )
      v14 = nMaxCost;
    if ( nStartGridPosX > m_nMaxX )
      nStartGridPosX = m_nMaxX;
    nMaxCosta = v14;
    nPosX = this->m_nMinX;
    if ( nStartGridPosX < nPosX )
      nStartGridPosX = this->m_nMinX;
    nPortalX = nStartGridPosX;
    nTestPosY = this->m_nMinY;
    x = this->m_nMaxY;
    if ( nStartGridPosY > x )
      nStartGridPosY = this->m_nMaxY;
    if ( nStartGridPosY < this->m_nMinY )
      nStartGridPosY = this->m_nMinY;
    m_pCells = this->m_pCells;
    nBottom = nStartGridPosY;
    m_nWidth = this->m_nWidth;
    CGridNavBase::ComputePassabilityFlagsForUnit(this, pUnit, &nRequiredFlags, &nBlockingFlags);
    v16 = x;
    if ( nRequiredFlags == (nRequiredFlags
                          & this->m_CellFlags.m_Memory.m_pMemory[nPortalX
                                                               - this->m_nMinX
                                                               + this->m_nWidth * (nBottom - this->m_nMinY)])
      && (nBlockingFlags
        & this->m_CellFlags.m_Memory.m_pMemory[nPortalX - this->m_nMinX + this->m_nWidth * (nBottom - this->m_nMinY)]) == 0 )
    {
      v17 = m_nMaxX;
      if ( nGoalGridPosX <= m_nMaxX )
        v17 = nGoalGridPosX;
      if ( v17 < nPosX )
        v17 = nPosX;
      v18 = v17;
      nGoalXMin = v17;
      v19 = x;
      if ( nGoalGridPosY <= x )
        v19 = nGoalGridPosY;
      if ( v19 < nTestPosY )
        v19 = nTestPosY;
      v20 = bUse2x2Goal + nGoalGridPosX;
      if ( v20 <= m_nMaxX )
        m_nMaxX = v20;
      v21 = v18;
      nGoalYMin = v19;
      if ( m_nMaxX < nPosX )
        m_nMaxX = nPosX;
      if ( bUse2x2Goal + nGoalGridPosY <= x )
        v16 = bUse2x2Goal + nGoalGridPosY;
      nGoalXMax = m_nMaxX;
      if ( v16 < nTestPosY )
        v16 = nTestPosY;
      v22 = v19;
      v23 = v16;
      nGoalYMax = v16;
      bGoalIsEnclosed = CGridNav::IsEnclosed(this, v18, v19, pUnit);
      if ( m_nMaxX >= v21 )
      {
        v24 = 0;
        nGoalGridPosYb = m_nMaxX + 1;
        xa = v21;
        nNumGoalCells = 0;
        OPEN_LIST = v23 - v22 + 1;
        while ( 1 )
        {
          if ( nGoalYMin > nGoalYMax )
            goto LABEL_45;
          v25 = this->m_nWidth;
          m_nMinY = this->m_nMinY;
          v27 = xa - this->m_nMinX;
          m_nSectorWidth = this->m_nSectorWidth;
          v29 = nNumGoalCells;
          m_pSectors = this->m_pSectors;
          v31 = nGoalYMin - m_nMinY;
          v32 = v27 / 16;
          v33 = v23 + 1 - m_nMinY;
          v34 = &this->m_pCells[(nGoalYMin - m_nMinY) * v25 + v27];
          do
          {
            v35 = v29++;
            pGoalCells[v35] = v34;
            v36 = &m_pSectors[v32 + m_nSectorWidth * (v31 / 16)];
            if ( v24 != 0 )
            {
              if ( pGoalSectors[0] == v36 )
                goto LABEL_43;
              v37 = &pGoalSectors[1];
              while ( v37 != &pGoalSectors[(v24 - 1) + 1] )
              {
                if ( *v37++ == v36 )
                  goto LABEL_43;
              }
            }
            v38 = v24++;
            pGoalSectors[v38] = v36;
LABEL_43:
            ++v31;
            v34 += v25;
          }
          while ( v31 != v33 );
          nNumGoalCells += OPEN_LIST;
LABEL_45:
          if ( ++xa == nGoalGridPosYb )
          {
            nGoalGridPosYc = v24;
            goto LABEL_47;
          }
        }
      }
      nGoalGridPosYc = 0;
      nNumGoalCells = 0;
LABEL_47:
      openList.m_Heap.m_LessFunc = 0;
      openList.m_Heap.m_heap.m_Size = 0;
      openList.m_Heap.m_heap.m_Memory.m_nAllocationCount = 2048;
      openList.m_Heap.m_heap.m_Memory.m_nGrowSize = 0x80000000;
      v39 = &m_pCells[48 * (nPortalX - nPosX) + 48 * m_nWidth * (nBottom - nTestPosY)];
      v40 = CGridNavNode::sm_nListIDBase + 1;
      CGridNavNode::sm_nListIDBase += 2;
      xb = CGridNavNode::sm_nListIDBase;
      openList.m_Heap.m_heap.m_Memory.m_pMemory = &openList.m_Heap.m_heap.m_Memory.m_FixedMemory;
      v39->m_nListID = v40;
      OPEN_LISTa = v40;
      v41 = CalculateHeuristic(nPortalX, nBottom, nGoalXMin, nGoalXMax, nGoalYMin, nGoalYMax);
      m_Size = openList.m_Heap.m_heap.m_Size;
      v39->m_nHeapIndex = -1;
      v39->m_pParent = 0;
      v43 = v41;
      v39->m_nHeuristic = v41;
      v39->m_nCost = 0;
      v44 = m_Size;
      m_nTotalNodesAdded = openList.m_nTotalNodesAdded;
      if ( m_Size == openList.m_Heap.m_heap.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CGridNavOpenList::GridNavHeapEntry_t,int>::Grow(&openList.m_Heap.m_heap.m_Memory, 1);
        v44 = openList.m_Heap.m_heap.m_Size;
      }
      v46 = m_Size;
      openList.m_Heap.m_heap.m_Size = v44 + 1;
      v47 = &openList.m_Heap.m_heap.m_Memory.m_pMemory[m_Size];
      v47->m_nScore = v43;
      v47->m_nIndex = m_nTotalNodesAdded;
      v48 = openList.m_Heap.m_heap.m_Size;
      v47->m_pNode = v39;
      m_pMemory = openList.m_Heap.m_heap.m_Memory.m_pMemory;
      m_pNode = openList.m_Heap.m_heap.m_Memory.m_pMemory[m_Size].m_pNode;
      *(m_pNode + 16) = m_Size;
      if ( v48 > m_Size && m_Size != 0 )
      {
        while ( 1 )
        {
          v157 = v46;
          v158 = (m_Size + 1) / 2 - 1;
          v159 = v158;
          m_pNode = &m_pMemory[v159];
          v160 = &m_pMemory[v46];
          v161 = *m_pNode;
          v162 = v160->m_nScore > *m_pNode;
          if ( v160->m_nScore == *m_pNode )
            v162 = v160->m_nIndex < *(m_pNode + 4);
          if ( v162 )
            break;
          v152 = v160->m_pNode;
          v153 = *&v160->m_nScore;
          v154 = *(m_pNode + 4);
          v155 = *(m_pNode + 8);
          *(m_pNode + 8) = v152;
          *m_pNode = v153;
          v156 = &openList.m_Heap.m_heap.m_Memory.m_pMemory[v157];
          v156->m_nScore = v161;
          v156->m_nIndex = v154;
          v156->m_pNode = v155;
          m_pMemory = openList.m_Heap.m_heap.m_Memory.m_pMemory;
          openList.m_Heap.m_heap.m_Memory.m_pMemory[v159].m_pNode->m_nHeapIndex = v158;
          m_pMemory[v157].m_pNode->m_nHeapIndex = m_Size;
          if ( (m_Size + 1) / 2 == 1 )
            break;
          m_Size = (m_Size + 1) / 2 - 1;
          v46 = v158;
        }
        v48 = openList.m_Heap.m_heap.m_Size;
      }
      ++openList.m_nTotalNodesAdded;
      pFinalNode = &m_pCells[48 * (nPortalX - nPosX) + 48 * m_nWidth * (nBottom - nTestPosY)];
      bBeenCloseToGoal = 0;
      nCloseScore = 0;
      pFirstInRangeNode = 0;
      nBestHeuristic = v39->m_nHeuristic;
      v175 = (flAllowableDistance / m_flEdgeSize) * (flAllowableDistance / m_flEdgeSize);
      v51 = &pGoalSectors[(nGoalGridPosYc - 1) + 1];
      while ( v48 != 0 )
      {
        v52 = openList.m_Heap.m_heap.m_Memory.m_pMemory;
        v53 = openList.m_Heap.m_heap.m_Memory.m_pMemory->m_pNode;
        if ( v48 > 0 )
        {
          if ( v48 == 1 )
          {
            openList.m_Heap.m_heap.m_Size = 0;
            goto LABEL_73;
          }
          v54 = &openList.m_Heap.m_heap.m_Memory.m_pMemory[v48 - 1];
          m_pNode = *v54;
          *openList.m_Heap.m_heap.m_Memory.m_pMemory = *v54;
          v52->m_pNode = v54[1];
          v55 = openList.m_Heap.m_heap.m_Size-- == 1;
          v48 = openList.m_Heap.m_heap.m_Size;
          if ( openList.m_Heap.m_heap.m_Size >= 0 && !v55 )
            openList.m_Heap.m_heap.m_Memory.m_pMemory->m_pNode->m_nHeapIndex = 0;
        }
        if ( v48 / 2 > 0 )
        {
          for ( i = 0; ; i = v57 )
          {
            m_pNode = (2 * i + 2);
            v57 = 2 * i + 1;
            if ( v48 <= v57 )
            {
              v57 = i;
              if ( v48 <= m_pNode )
                goto LABEL_59;
            }
            else
            {
              v64 = &openList.m_Heap.m_heap.m_Memory.m_pMemory[i];
              v65 = &openList.m_Heap.m_heap.m_Memory.m_pMemory[v57];
              v66 = v64->m_nScore > v65->m_nScore;
              if ( v64->m_nScore == v65->m_nScore )
                v66 = v64->m_nIndex < v65->m_nIndex;
              if ( !v66 )
                v57 = i;
              if ( v48 <= m_pNode )
              {
LABEL_59:
                if ( i == v57 )
                  break;
                goto LABEL_60;
              }
            }
            v67 = &openList.m_Heap.m_heap.m_Memory.m_pMemory[v57];
            v68 = &openList.m_Heap.m_heap.m_Memory.m_pMemory[m_pNode];
            v69 = v67->m_nScore > v68->m_nScore;
            if ( v67->m_nScore == v68->m_nScore )
              v69 = v67->m_nIndex < v68->m_nIndex;
            if ( v69 )
              v57 = 2 * i + 2;
            if ( i == v57 )
              break;
LABEL_60:
            m_pNode = 16LL * v57;
            v58 = i;
            m_nScore = openList.m_Heap.m_heap.m_Memory.m_pMemory[v58].m_nScore;
            m_nIndex = openList.m_Heap.m_heap.m_Memory.m_pMemory[v58].m_nIndex;
            v61 = openList.m_Heap.m_heap.m_Memory.m_pMemory[v58].m_pNode;
            openList.m_Heap.m_heap.m_Memory.m_pMemory[v58] = _mm_loadu_si128((openList.m_Heap.m_heap.m_Memory.m_pMemory
                                                                            + m_pNode));
            v62 = openList.m_Heap.m_heap.m_Memory.m_pMemory + m_pNode;
            *v62 = m_nScore;
            *(v62 + 1) = m_nIndex;
            *(v62 + 1) = v61;
            v63 = openList.m_Heap.m_heap.m_Memory.m_pMemory;
            openList.m_Heap.m_heap.m_Memory.m_pMemory[v58].m_pNode->m_nHeapIndex = i;
            (*(&v63->m_pNode + m_pNode))->m_nHeapIndex = v57;
            if ( v48 / 2 <= v57 )
              break;
          }
        }
LABEL_73:
        v53->m_nListID = xb;
        if ( nNumGoalCells > 0 )
        {
          if ( pGoalCells[0] == v53 )
          {
LABEL_99:
            v83 = 1;
            goto LABEL_100;
          }
          v70 = &pGoalCells[1];
          while ( v70 != &pGoalCells[(nNumGoalCells - 1) + 1] )
          {
            if ( *v70++ == v53 )
              goto LABEL_99;
          }
        }
        if ( bGoalIsEnclosed && bBeenCloseToGoal && v53->m_nCost + v53->m_nHeuristic > nCloseScore + 250 )
          break;
        if ( !v53->m_bIsPortal )
        {
          m_nMinX = this->m_nMinX;
          nPosXa = *(&v53->m_bIsPortal + 1);
          m_pNode = v53[1].m_nListID;
          nPosY = v53[1].m_nListID;
          nPortalY = (nPosXa - m_nMinX) / 16;
          v180 = (m_pNode - this->m_nMinY) / 16;
          if ( v175 > 0.0 )
          {
            v72 = (abs32(nPosXa - nGoalXMin) + 1);
            v73 = abs32(m_pNode - nGoalYMin) + 1;
            if ( v175 > ((v72 * v72) + (v73 * v73)) )
            {
              v74 = pFirstInRangeNode;
              if ( pFirstInRangeNode != 0 )
              {
                if ( pFirstInRangeNode->m_nCost > v53->m_nCost )
                  v74 = v53;
                pFirstInRangeNode = v74;
              }
              else
              {
                pFirstInRangeNode = v53;
              }
            }
          }
          v75 = 0;
          while ( 1 )
          {
            v76 = g_GridDirectionToDY[v75];
            v77 = nPosXa + g_GridDirectionToDX[v75];
            if ( v77 < m_nMinX )
              goto LABEL_96;
            v78 = this->m_nMaxX;
            if ( v77 > v78 )
              goto LABEL_96;
            nBottoma = nPosY + v76;
            v199 = this->m_nMinY;
            if ( nPosY + v76 < v199 )
              goto LABEL_96;
            nRight = this->m_nMaxY;
            if ( nBottoma > nRight )
              goto LABEL_96;
            v79 = this->m_nWidth;
            m_pNode = (v77 - m_nMinX);
            v80 = m_pNode + (nBottoma - v199) * v79;
            v81 = &this->m_pCells[v80];
            if ( v81->m_nListID == xb )
              goto LABEL_96;
            v82 = this->m_CellFlags.m_Memory.m_pMemory[v80];
            nStepCost = this->m_CellFlags.m_Memory.m_pMemory;
            if ( nRequiredFlags != (v82 & nRequiredFlags) || (v82 & nBlockingFlags) != 0 )
              goto LABEL_96;
            v114 = m_pNode / 16;
            m_pNode = v75 & 1;
            v115 = (nBottoma - v199) / 16;
            if ( v180 != v115 || nPortalY != v114 )
              break;
            if ( m_pNode == 0 )
              goto LABEL_165;
            v116 = (v75 + 1) & 7;
            nDirLeft = (v75 + 7) & 7;
            v117 = nPosXa + g_GridDirectionToDX[v116];
            if ( v117 < m_nMinX
              || v117 > v78
              || (v118 = nPosY + g_GridDirectionToDY[v116]) < v199
              || v118 > nRight
              || (v119 = nStepCost[v117 - m_nMinX + v79 * (v118 - v199)],
                  m_pNode = nRequiredFlags & v119,
                  nRequiredFlags == m_pNode)
              && (v119 & nBlockingFlags) == 0 )
            {
              v125 = nDirLeft;
              nDirLeftb = g_GridDirectionToDY[nDirLeft];
              v126 = nPosXa + g_GridDirectionToDX[v125];
              if ( v126 < m_nMinX )
                goto LABEL_165;
              if ( v126 > v78 )
                goto LABEL_165;
              v127 = nPosY + nDirLeftb;
              if ( v127 < v199 )
                goto LABEL_165;
              if ( v127 > nRight )
                goto LABEL_165;
              v128 = nStepCost[v126 - m_nMinX + v79 * (v127 - v199)];
              m_pNode = nRequiredFlags & v128;
              if ( nRequiredFlags == m_pNode && (v128 & nBlockingFlags) == 0 )
                goto LABEL_165;
            }
            ++v75;
LABEL_97:
            if ( v75 == 8 )
              goto LABEL_98;
            m_nMinX = this->m_nMinX;
          }
          if ( m_pNode == 0 )
          {
            nDirLefta = this->m_nSectorWidth;
            v174 = this->m_pSectors;
            v120 = &v174[v114 + nDirLefta * v115];
            v121 = v120;
            nStepCostb = v120;
            if ( nGoalGridPosYc != 0 )
            {
              if ( pGoalSectors[0] == v120 )
                goto LABEL_165;
              v122 = &pGoalSectors[1];
              while ( v122 != v51 )
              {
                if ( *v122++ == v121 )
                  goto LABEL_165;
              }
            }
            if ( nStepCostb->m_bDirty )
            {
LABEL_165:
              v200 = v77;
              nPortalXc = v81;
              v124 = CGridNavCell::ComputeStepCost(v53, v81);
              AddNodeToOpenList(
                nPortalXc,
                v53,
                v124,
                &openList,
                OPEN_LISTa,
                v200,
                nBottoma,
                nGoalXMin,
                nGoalXMax,
                nGoalYMin,
                nGoalYMax,
                nMaxCosta,
                &pFinalNode,
                &nBestHeuristic,
                &nCloseScore,
                &bBeenCloseToGoal);
            }
            else
            {
              v171 = m_nMinX;
              v170 = v81;
              nTestEdgea = ((v75 >> 1) + 2) & 3;
              v172 = this->m_nMaxX;
              nTestPosX = nPosXa + g_GridDirectionToDX[v75];
              nPortalXb = CGridNavSector::GetPortal(nStepCostb, v77, nBottoma, nTestEdgea);
              Portal = CGridNavSector::GetPortal(&v174[v180 * nDirLefta + nPortalY], nPosXa, nPosY, v75 >> 1);
              v77 = nTestPosX;
              v81 = v170;
              if ( nPortalXb->m_nListID != xb )
              {
                if ( dota_gridnav_disable_sectors.m_pParent->m_Value.m_nValue != 0
                  || v53->m_nCost <= 299
                  && (Portal == 0 || Portal->m_nListID != OPEN_LISTa && xb != Portal->m_nListID)
                  && OPEN_LISTa != nPortalXb->m_nListID )
                {
                  if ( Portal != 0 )
                    Portal->m_nListID = xb;
                  nPortalXb->m_nListID = xb;
                  goto LABEL_165;
                }
                v148 = (nPortalXb->m_nStartIndex + nPortalXb->m_nEndIndex) >> 1;
                v149 = v171 + 16 * nStepCostb->m_nSectorX;
                v150 = v199 + 16 * nStepCostb->m_nSectorY;
                v151 = 2 * nTestEdgea;
                if ( 2 * nTestEdgea == 2 )
                {
                  v149 += 15;
                  if ( v149 > v172 )
                    v149 = v172;
                  v150 += v148;
                }
                else if ( v151 == 4 )
                {
                  v149 += v148;
                }
                else if ( v151 != 0 )
                {
                  v150 += v148;
                }
                else
                {
                  v150 += 15;
                  if ( v150 > nRight )
                    v150 = nRight;
                  v149 += v148;
                }
                AddNodeToOpenList(
                  nPortalXb,
                  v53,
                  10,
                  &openList,
                  OPEN_LISTa,
                  v149,
                  v150,
                  nGoalXMin,
                  nGoalXMax,
                  nGoalYMin,
                  nGoalYMax,
                  nMaxCosta,
                  &pFinalNode,
                  &nBestHeuristic,
                  &nCloseScore,
                  &bBeenCloseToGoal);
              }
            }
          }
LABEL_96:
          ++v75;
          goto LABEL_97;
        }
        m_pNode = this->m_nMinX;
        v89 = this->m_nMinY;
        v90 = *&v53[1].m_nHeuristic;
        nPosXb = v90;
        nPortalXa = m_pNode + 16 * *(v90 + 96);
        v91 = this->m_nMaxX;
        if ( nPortalXa + 15 <= v91 )
          v91 = m_pNode + 16 * *(v90 + 96) + 15;
        nRighta = v91;
        nBottomb = v89 + 16 * *(v90 + 100);
        m_nMaxY = this->m_nMaxY;
        if ( nBottomb + 15 <= m_nMaxY )
          m_nMaxY = v89 + 16 * *(v90 + 100) + 15;
        nPortalYa = m_nMaxY;
        if ( v53[1].m_nListID > 0 )
        {
          v93 = 0;
          while ( 1 )
          {
            v94 = v53[1].m_pParent + 8 * v93;
            v95 = *v94 + 10;
            v96 = *(v94 + 4);
            v97 = *(nPosXb + 24LL * *(v94 + 4) + 8) + 80LL * *(v94 + 5);
            v98 = *(v97 + 73) + *(v97 + 72);
            v99 = 2 * v96;
            v100 = v98 >> 1;
            if ( 2 * v96 == 2 )
            {
              v101 = v100 + nBottomb;
              v102 = nRighta;
            }
            else if ( v99 == 4 )
            {
              v102 = nPortalXa + v100;
              v101 = nBottomb;
            }
            else if ( v99 != 0 )
            {
              v101 = v100 + nBottomb;
              v102 = nPortalXa;
            }
            else
            {
              v102 = nPortalXa + v100;
              v101 = nPortalYa;
            }
            v103 = v102 + g_GridDirectionToDX[v99];
            v104 = v103 - m_pNode;
            v105 = v101 + g_GridDirectionToDY[v99];
            v106 = v104 + 15;
            v107 = v105 - v89;
            if ( v104 >= 0 )
              v106 = v104;
            v108 = v105 - v89;
            v109 = v107 + 15;
            v110 = v106 >> 4;
            if ( v108 >= 0 )
              v109 = v108;
            v111 = &this->m_pSectors[this->m_nSectorWidth * (v109 >> 4) + v110];
            if ( nGoalGridPosYc != 0 )
            {
              if ( pGoalSectors[0] == v111 )
              {
LABEL_239:
                if ( !v111->m_bDirty )
                {
                  nStepCostc = v95;
                  nPosYb = v105;
                  nTestEdgeb = v103;
                  v146 = CGridNavSector::GetPortal(v111, v103, v105, (v96 + 2) & 3);
                  v103 = nTestEdgeb;
                  v105 = nPosYb;
                  v95 = nStepCostc;
                  v146->m_nListID = xb;
                  v104 = nTestEdgeb - this->m_nMinX;
                  v108 = nPosYb - this->m_nMinY;
                }
                goto LABEL_241;
              }
              v112 = &pGoalSectors[1];
              while ( v51 != v112 )
              {
                if ( *v112++ == v111 )
                  goto LABEL_239;
              }
            }
            if ( !v111->m_bDirty )
            {
              nStepCosta = v95;
              nPosYa = v105;
              nTestEdge = v103;
              v113 = CGridNavSector::GetPortal(v111, v103, v105, (v96 + 2) & 3);
              if ( v113->m_nListID != xb )
                AddNodeToOpenList(
                  v113,
                  v53,
                  nStepCosta,
                  &openList,
                  OPEN_LISTa,
                  nTestEdge,
                  nPosYa,
                  nGoalXMin,
                  nGoalXMax,
                  nGoalYMin,
                  nGoalYMax,
                  nMaxCosta,
                  &pFinalNode,
                  &nBestHeuristic,
                  &nCloseScore,
                  &bBeenCloseToGoal);
              goto LABEL_132;
            }
LABEL_241:
            m_pNode = this->m_nWidth * v108 + v104;
            v147 = &this->m_pCells[m_pNode];
            if ( v147->m_nListID != xb )
              AddNodeToOpenList(
                v147,
                v53,
                v95,
                &openList,
                OPEN_LISTa,
                v103,
                v105,
                nGoalXMin,
                nGoalXMax,
                nGoalYMin,
                nGoalYMax,
                nMaxCosta,
                &pFinalNode,
                &nBestHeuristic,
                &nCloseScore,
                &bBeenCloseToGoal);
LABEL_132:
            if ( v53[1].m_nListID <= ++v93 )
              break;
            LODWORD(m_pNode) = this->m_nMinX;
            v89 = this->m_nMinY;
          }
        }
LABEL_98:
        v48 = openList.m_Heap.m_heap.m_Size;
      }
      v83 = 0;
LABEL_100:
      v84 = pFinalNode;
      if ( pFirstInRangeNode != 0 )
      {
        if ( pFinalNode->m_nCost > (pFirstInRangeNode->m_nCost + ((flAllowableDistance / this->m_flEdgeSize) * 10.0)) )
        {
          v83 = 0;
          pFinalNode = pFirstInRangeNode;
          v84 = pFirstInRangeNode;
        }
LABEL_103:
        v85 = v84;
        v86 = 0;
        v87 = -1;
        v88 = 0;
        m_pNode = 0;
        do
        {
          if ( v88 != 0 )
          {
            if ( !v85->m_bIsPortal )
            {
              v84 = v85;
              v87 = 0;
              v88 = 0;
            }
          }
          else
          {
            ++v87;
            if ( v85->m_bIsPortal )
            {
              v86 = 1;
              v87 = 0;
              v88 = 1;
              v84 = 0;
            }
          }
          v85 = v85->m_pParent;
        }
        while ( v85 != 0 );
      }
      else
      {
        if ( pFinalNode != 0 )
          goto LABEL_103;
        v84 = 0;
        v86 = 0;
        v87 = -1;
      }
      m_nAllocated = path->m_nAllocated;
      if ( m_nAllocated < v87 )
      {
        v130 = v87;
        LOWORD(v131) = v87;
        if ( v87 > 0xCC )
        {
          if ( v87 > 0x7FFF )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_268;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v165, v166, v163, v164) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_268:
              v233.m_szFile = "../../public/tier1/utlleanvector.h";
              v233.m_szFunction = "EnsureCapacity";
              v233.m_nLine = 104;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v233,
                "%s allocation count overflow",
                "EnsureCapacity");
            }
          }
          v131 = path->m_nAllocated;
          while ( 1 )
          {
            v130 = v131;
            if ( v130 >= v87 )
              break;
            if ( v131 <= 16382 )
            {
              m_pNode = (2 * v131);
              v131 = 32;
              if ( 2 * v130 > 31 )
                v131 = m_pNode;
            }
            else
            {
              v131 = 0x7FFF;
            }
          }
        }
        if ( m_nAllocated > 0xCC )
        {
          path->m_pElements = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, path->m_pElements, v131, m_pNode);
        }
        else if ( v131 > 0xCC )
        {
          v167 = (**g_pMemAlloc)(g_pMemAlloc, v131, v130, m_pNode);
          v168 = path->m_nAllocated;
          if ( v168 != 0 )
          {
            if ( v168 <= 0xCC )
              m_Data = path->m_FixedAlloc.m_Data;
            else
              m_Data = path->m_pElements;
          }
          else
          {
            m_Data = 0;
          }
          m_pNode = memcpy(v167, m_Data, path->m_nCount);
          path->m_pElements = m_pNode;
        }
        path->m_nAllocated = v131;
      }
      path->m_nCount = v87;
      v132 = v87 - 1;
      if ( v132 >= 0 )
      {
        m_pNode = v132;
        for ( j = v132 - 1LL; ; --j )
        {
          m_pParent = v84->m_pParent;
          m_nListID = v84[1].m_nListID;
          v137 = m_pParent[1].m_nListID;
          v138 = *(&v84->m_bIsPortal + 1) < *(&m_pParent->m_bIsPortal + 1);
          v139 = path->m_nAllocated;
          if ( v138 )
          {
            if ( m_nListID < v137 )
            {
              if ( v139 != 0 )
                v142 = v139 <= 0xCC ? &path->m_nAllocAllocated + 1 : path->m_pElements;
              else
                v142 = 0;
              *(v142 + m_pNode) = 5;
            }
            else if ( m_nListID <= v137 )
            {
              if ( v139 != 0 )
                v141 = v139 <= 0xCC ? &path->m_nAllocAllocated + 1 : path->m_pElements;
              else
                v141 = 0;
              *(v141 + m_pNode) = 6;
            }
            else
            {
              if ( v139 != 0 )
                v134 = v139 <= 0xCC ? &path->m_nAllocAllocated + 1 : path->m_pElements;
              else
                v134 = 0;
              *(v134 + m_pNode) = 7;
            }
          }
          else if ( m_nListID < v137 )
          {
            if ( v139 != 0 )
              v144 = v139 <= 0xCC ? &path->m_nAllocAllocated + 1 : path->m_pElements;
            else
              v144 = 0;
            *(v144 + m_pNode) = 3;
          }
          else if ( m_nListID <= v137 )
          {
            if ( v139 != 0 )
              v143 = v139 <= 0xCC ? &path->m_nAllocAllocated + 1 : path->m_pElements;
            else
              v143 = 0;
            *(v143 + m_pNode) = 2;
          }
          else
          {
            if ( v139 != 0 )
              v140 = v139 <= 0xCC ? &path->m_nAllocAllocated + 1 : path->m_pElements;
            else
              v140 = 0;
            *(v140 + m_pNode) = 1;
          }
          v84 = v84->m_pParent;
          m_pNode = j;
          if ( j == v132 - 1LL - v132 )
            break;
        }
      }
      if ( pOutReachedGoal != 0 )
        *pOutReachedGoal = v83;
      openList.m_Heap.m_heap.m_Size = 0;
      v145 = openList.m_Heap.m_heap.m_Memory.m_nGrowSize & 0xC0000000;
      if ( openList.m_Heap.m_heap.m_Memory.m_nAllocationCount < 0
        || openList.m_Heap.m_heap.m_Memory.m_pMemory == &openList.m_Heap.m_heap.m_Memory.m_FixedMemory )
      {
        if ( v145 != 0 )
          return v86;
        CUtlMemory<CGridNavOpenList::GridNavHeapEntry_t,int>::Purge(&openList.m_Heap.m_heap.m_Memory);
        return v86;
      }
      else
      {
        if ( openList.m_Heap.m_heap.m_Memory.m_pMemory != 0 && v145 == 0 )
          (*(*g_pMemAlloc + 16LL))(
            g_pMemAlloc,
            openList.m_Heap.m_heap.m_Memory.m_pMemory,
            &openList.m_Heap.m_heap.m_Memory.m_FixedMemory,
            m_pNode);
        return v86;
      }
    }
  }
  return 2;
}


// CGridNav::IsEnclosed  (line 1741, @0x00000000024d7890, libserver.so)  // inlines: GetCell, GetCellIndex, OutOfBounds
// calls: CGridNavBase::IsCellPassableForUnit
// callers: CGridNav::BuildPath, CDOTA_Commander::DoPassabilityGridAnalysis, CDOTABehaviorPet::RecalculateThreat, CDOTABehaviorPet::Reappear, CDOTABehaviorPet::Update, CDOTA_Bot_AbilityUsage_BlinkDagger::GetCurrentUsageDesire
// globals: CGridNavNode::sm_nListIDBase, g_GridDirectionToDX, g_GridDirectionToDY
bool __fastcall CGridNav::IsEnclosed(CGridNav *const this, int nTestPosX, int nTestPosY, CDOTA_BaseNPC *pUnit)
{
  int v7; // r14d
  int m_nMinX; // r15d
  int m_nWidth; // eax
  bool IsCellPassableForUnit; // al
  int v11; // r8d
  int v12; // r10d
  CGridNavCell *m_pOpenListNext; // r15
  const char *v14; // r9
  int v15; // eax
  const char *v16; // r10
  CGridNavCell *v17; // rbx
  int m_nGridPosX; // r14d
  int m_nGridPosY; // r11d
  __int64 i; // rbx
  int v21; // eax
  int v22; // esi
  int v23; // edi
  int v24; // edx
  CGridNavCell *v25; // r12
  bool v26; // al
  int v29; // [rsp+8h] [rbp-48h]
  int v30; // [rsp+Ch] [rbp-44h]
  int v31; // [rsp+10h] [rbp-40h]
  const char *v32; // [rsp+10h] [rbp-40h]
  CGridNavCell *m_pCells; // [rsp+18h] [rbp-38h]
  const char *v34; // [rsp+18h] [rbp-38h]
  int m_nMinY; // [rsp+20h] [rbp-30h]
  int v36; // [rsp+20h] [rbp-30h]
  int CLOSED_LISTa; // [rsp+24h] [rbp-2Ch]
  int CLOSED_LIST; // [rsp+24h] [rbp-2Ch]

  v7 = CGridNavNode::sm_nListIDBase;
  m_nMinX = this->m_nMinX;
  m_pCells = this->m_pCells;
  m_nWidth = this->m_nWidth;
  CGridNavNode::sm_nListIDBase += 2;
  CLOSED_LISTa = CGridNavNode::sm_nListIDBase;
  v31 = m_nWidth;
  m_nMinY = this->m_nMinY;
  IsCellPassableForUnit = CGridNavBase::IsCellPassableForUnit(this, nTestPosX, nTestPosY, pUnit);
  v11 = CLOSED_LISTa;
  if ( IsCellPassableForUnit )
  {
    v29 = 60;
    v12 = nTestPosX - m_nMinX;
    m_pOpenListNext = 0;
    CLOSED_LIST = v7 + 1;
    v14 = g_GridDirectionToDX;
    v15 = v12 + (nTestPosY - m_nMinY) * v31;
    v16 = g_GridDirectionToDY;
    v17 = &m_pCells[v15];
    v17->m_nListID = v7 + 1;
    v17->m_pOpenListNext = 0;
    while ( 1 )
    {
      m_nGridPosX = v17->m_nGridPosX;
      v17->m_nListID = v11;
      m_nGridPosY = v17->m_nGridPosY;
      for ( i = 0; i != 8; i += 2 )
      {
        v21 = this->m_nMinX;
        v22 = m_nGridPosX + v14[i];
        if ( v22 >= v21 && v22 <= this->m_nMaxX )
        {
          v23 = this->m_nMinY;
          v24 = m_nGridPosY + v16[i];
          if ( v24 >= v23 && v24 <= this->m_nMaxY )
          {
            v25 = &this->m_pCells[v22 - v21 + this->m_nWidth * (v24 - v23)];
            if ( v25->m_nListID != v11 && CLOSED_LIST != v25->m_nListID )
            {
              v30 = m_nGridPosY;
              v36 = v11;
              v32 = v16;
              v34 = v14;
              v26 = CGridNavBase::IsCellPassableForUnit(this, v22, v24, pUnit);
              v14 = v34;
              v16 = v32;
              v11 = v36;
              m_nGridPosY = v30;
              if ( v26 )
              {
                v25->m_pOpenListNext = m_pOpenListNext;
                m_pOpenListNext = v25;
                v25->m_nListID = CLOSED_LIST;
              }
            }
          }
        }
      }
      if ( m_pOpenListNext == 0 )
        break;
      if ( --v29 == 0 )
        return 0;
      v17 = m_pOpenListNext;
      m_pOpenListNext = m_pOpenListNext->m_pOpenListNext;
    }
  }
  return 1;
}


// CGridNav::CanFindPath  (line 1806, @0x00000000024fec10, libserver.so)  // inlines: Base, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, Purge, RemoveAll, WorldToGridPosX, WorldToGridPosY, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl
// calls: floorf, CGridNav::BuildPath, __stack_chk_fail, CUtlLeanVectorFixedGrowableBase<unsigned char, 200u, short int>::Purge, _Unwind_Resume
_BOOL8 __fastcall CGridNav::CanFindPath(CGridNav *const this, double a2, double a3, double a4)
{
  float m_flEdgeSize; // xmm5_4
  float m_flOffsetX; // xmm7_4
  float v7; // xmm0_4
  _BOOL4 v8; // ebx
  void (__fastcall *v10)(_QWORD *, CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::ElemType_t *); // rax
  float v11; // [rsp+28h] [rbp-138h]
  float v12; // [rsp+2Ch] [rbp-134h]
  float v13; // [rsp+30h] [rbp-130h]
  float v14; // [rsp+34h] [rbp-12Ch]
  float v15; // [rsp+38h] [rbp-128h]
  float v16; // [rsp+3Ch] [rbp-124h]
  float vStart_4; // [rsp+54h] [rbp-10Ch]
  bool bReachedGoal; // [rsp+6Fh] [rbp-F1h] BYREF
  GridNavDirectionVec_t path; // [rsp+70h] [rbp-F0h] BYREF
  unsigned __int64 v21; // [rsp+148h] [rbp-18h]

  m_flEdgeSize = this->m_flEdgeSize;
  vStart_4 = *(&a2 + 1);
  m_flOffsetX = this->m_flOffsetX;
  v21 = __readfsqword(0x28u);
  v14 = m_flOffsetX;
  v16 = m_flEdgeSize;
  v15 = 0.5 * m_flEdgeSize;
  v11 = floorf(((*&a2 - m_flOffsetX) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
  v12 = floorf(((vStart_4 - this->m_flOffsetY) + v15) / v16);
  v13 = floorf(((*&a4 - v14) + v15) / v16);
  v7 = floorf(((*(&a4 + 1) - v14) + v15) / v16);
  path.0 = 13369344;
  bReachedGoal = 0;
  CGridNav::BuildPath(this, v11, v12, v13, v7, &path, 0.0, 0, 0, -1, &bReachedGoal);
  v8 = bReachedGoal;
  path.m_nCount = 0;
  if ( path.m_nAllocated > 0xCC )
  {
    v10 = *(*g_pMemAlloc + 16LL);
    if ( path.m_nAllocated != 0 )
      v10(g_pMemAlloc, path.m_pElements);
    else
      v10(g_pMemAlloc, 0);
  }
  return v8;
}


// CGridNav::FindPathLength  (line 1821, @0x00000000024fee40, libserver.so)  // inlines: Base, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, Element, Purge, RemoveAll, WorldToGridPosX, WorldToGridPosY, operator[], ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl
// calls: floorf, CGridNav::BuildPath, sqrtf, CUtlLeanVectorFixedGrowableBase<unsigned char, 200u, short int>::Purge, _Unwind_Resume, __stack_chk_fail
float __fastcall CGridNav::FindPathLength(CGridNav *const this, double a2, double a3, double a4)
{
  float m_flEdgeSize; // xmm4_4
  float m_flOffsetX; // xmm7_4
  __m128i v7; // xmm0
  float v8; // ebx
  __m128i v9; // xmm0
  float v10; // r13d
  float v11; // xmm0_4
  __int64 v12; // rax
  int v13; // ebx
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::ElemType_t *m_Data; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::ElemType_t v15; // dl
  float result; // xmm0_4
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::ElemType_t *m_pElements; // rsi
  float v18; // [rsp+20h] [rbp-140h]
  float v19; // [rsp+24h] [rbp-13Ch]
  float v20; // [rsp+28h] [rbp-138h]
  float v21; // [rsp+2Ch] [rbp-134h]
  float v22; // [rsp+2Ch] [rbp-134h]
  float vStart_4; // [rsp+44h] [rbp-11Ch]
  bool bReachedGoal; // [rsp+5Fh] [rbp-101h] BYREF
  GridNavDirectionVec_t path; // [rsp+60h] [rbp-100h] BYREF
  unsigned __int64 v27; // [rsp+138h] [rbp-28h]

  m_flEdgeSize = this->m_flEdgeSize;
  vStart_4 = *(&a2 + 1);
  m_flOffsetX = this->m_flOffsetX;
  v27 = __readfsqword(0x28u);
  v19 = m_flOffsetX;
  v21 = m_flEdgeSize;
  v20 = 0.5 * m_flEdgeSize;
  *v7.m128i_i32 = floorf(((*&a2 - m_flOffsetX) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  *v9.m128i_i32 = floorf(((vStart_4 - this->m_flOffsetY) + v20) / v21);
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
  v18 = floorf(((*&a4 - v19) + v20) / v21);
  v11 = floorf(((*(&a4 + 1) - v19) + v20) / v21);
  path.0 = 13369344;
  bReachedGoal = 0;
  CGridNav::BuildPath(this, v8, v10, v18, v11, &path, 0.0, 0, 0, -1, &bReachedGoal);
  if ( bReachedGoal )
  {
    if ( path.m_nCount <= 0 )
    {
      v13 = 0;
    }
    else
    {
      v12 = 0;
      v13 = 0;
      do
      {
        if ( path.m_nAllocated != 0 )
        {
          m_Data = path.m_FixedAlloc.m_Data;
          if ( path.m_nAllocated > 0xCC )
            m_Data = path.m_pElements;
        }
        else
        {
          m_Data = 0;
        }
        v15 = m_Data[v12++];
        v13 += v15 & 1;
      }
      while ( path.m_nCount > v12 );
    }
    result = ((path.m_nCount - v13) * this->m_flEdgeSize)
           + (v13 * fsqrt((this->m_flEdgeSize + this->m_flEdgeSize) * this->m_flEdgeSize));
  }
  else
  {
    result = -1.0;
  }
  path.m_nCount = 0;
  if ( path.m_nAllocated > 0xCC )
  {
    if ( path.m_nAllocated != 0 )
      m_pElements = path.m_pElements;
    else
      m_pElements = 0;
    v22 = result;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, m_pElements);
    return v22;
  }
  return result;
}


// CGridNav::SetSimpleObstructionBlocked  (line 1854, @0x00000000024d7650, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, CGridNav::SetPositionBlocked2x2, C2DGridObstructionManager::UpdateObjectObstruction, C2DGridObstructionManager::RemoveObjectObstruction
// callers: CDOTA_SimpleObstruction::SetGridNavBlocked, CDOTA_SimpleObstruction::SetEnabled
void __fastcall CGridNav::SetSimpleObstructionBlocked(
        CGridNav *const this,
        CDOTA_SimpleObstruction *pObstruction,
        bool bBlock)
{
  CObstructionObject *v6; // rsi
  C2DGridObstructionManager *p_m_ObstructionManager; // rdi
  Vector vPosition; // [rsp+0h] [rbp-30h] BYREF

  vPosition = *CBaseEntity::GetAbsOrigin(pObstruction);
  CGridNav::SetPositionBlocked2x2(this, &vPosition, bBlock);
  v6 = 0;
  p_m_ObstructionManager = &this->m_ObstructionManager;
  if ( pObstruction != 0 )
    v6 = &pObstruction->CObstructionObject;
  if ( bBlock )
    C2DGridObstructionManager::UpdateObjectObstruction(p_m_ObstructionManager, v6);
  else
    C2DGridObstructionManager::RemoveObjectObstruction(p_m_ObstructionManager, v6);
}


// CGridNav::SetTreeBlocked  (line 1871, @0x00000000024d76d0, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, CGridNav::SetPositionBlocked2x2, C2DGridObstructionManager::RemoveObjectObstruction, C2DGridObstructionManager::UpdateObjectObstruction
// callers: CDOTA_MapTree::Spawn, CDOTA_MapTree::UpdateOnRemove, CDOTA_MapTree::CutDownEx, CDOTA_MapTree::GrowBack
void __fastcall CGridNav::SetTreeBlocked(CGridNav *const this, CDOTA_Tree *pTree, bool bBlock)
{
  const CBaseEntity *v6; // rax
  C2DGridObstructionManager *p_m_ObstructionManager; // rdi
  Vector vTreePos; // [rsp+0h] [rbp-30h] BYREF

  v6 = (*(pTree->_vptr_CObstructionObject + 8))(pTree);
  vTreePos = *CBaseEntity::GetAbsOrigin(v6);
  CGridNav::SetPositionBlocked2x2(this, &vTreePos, bBlock);
  p_m_ObstructionManager = &this->m_ObstructionManager;
  if ( bBlock )
    C2DGridObstructionManager::UpdateObjectObstruction(p_m_ObstructionManager, pTree);
  else
    C2DGridObstructionManager::RemoveObjectObstruction(p_m_ObstructionManager, pTree);
}


// CGridNav::SetPositionBlocked2x2  (line 1889, @0x00000000024d7530, libserver.so)  // inlines: VectorAdd, operator+
// calls: CGridNav::SetPositionBlocked
// callers: CGridNav::SetSimpleObstructionBlocked, CGridNav::SetTreeBlocked, CGridNavPath::Build
void __fastcall CGridNav::SetPositionBlocked2x2(CGridNav *const this, const Vector *const vBlockedPos, bool bBlock)
{
  float v6; // xmm0_4
  vec_t v7; // xmm2_4
  vec_t v8; // xmm3_4
  vec_t v9; // xmm2_4
  vec_t v10; // xmm1_4
  vec_t v11; // xmm2_4
  vec_t v12; // xmm3_4
  vec_t v13; // xmm1_4
  vec_t v14; // xmm2_4
  float d; // [rsp+0h] [rbp-3Ch]
  Vector v16[4]; // [rsp+4h] [rbp-38h] BYREF

  v6 = 0.5 * this->m_flEdgeSize;
  v7 = vBlockedPos->y + v6;
  d = v6;
  v8 = v6 + vBlockedPos->x;
  v16[0].z = vBlockedPos->z + 0.0;
  v16[0].y = v7;
  v16[0].x = v8;
  CGridNav::SetPositionBlocked(this, v16, bBlock);
  v9 = vBlockedPos->z + 0.0;
  v10 = vBlockedPos->x - d;
  v16[0].y = vBlockedPos->y + d;
  v16[0].z = v9;
  v16[0].x = v10;
  CGridNav::SetPositionBlocked(this, v16, bBlock);
  v11 = vBlockedPos->z + 0.0;
  v12 = vBlockedPos->x + d;
  v16[0].y = vBlockedPos->y - d;
  v16[0].z = v11;
  v16[0].x = v12;
  CGridNav::SetPositionBlocked(this, v16, bBlock);
  v13 = vBlockedPos->y - d;
  v14 = vBlockedPos->x - d;
  v16[0].z = vBlockedPos->z + 0.0;
  v16[0].y = v13;
  v16[0].x = v14;
  CGridNav::SetPositionBlocked(this, v16, bBlock);
}


// CGridNav::SetPositionBlocked  (line 1899, @0x00000000024d7390, libserver.so)  // inlines: GetSector, GridPosToSectorX, GridPosToSectorY, OutOfBounds, WorldToGridPosX, WorldToGridPosY
// calls: floorf, CGridNavBase::SetCellBlocked
// callers: CGridNav::SetPositionBlocked2x2
void __fastcall CGridNav::SetPositionBlocked(CGridNav *const this, const Vector *const vBlockedPos, bool bBlock)
{
  int v6; // r12d
  int v7; // r13d
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // esi
  __int64 i; // rax
  int m_nMinX; // edi
  int v15; // esi
  int m_nMinY; // edx
  int v17; // ecx
  float m_flEdgeSize; // [rsp+Ch] [rbp-44h]
  int dx_0[4]; // [rsp+10h] [rbp-40h]
  int dy[12]; // [rsp+20h] [rbp-30h]

  m_flEdgeSize = this->m_flEdgeSize;
  v6 = floorf(((vBlockedPos->x - this->m_flOffsetX) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
  v7 = floorf(((vBlockedPos->y - this->m_flOffsetY) + (0.5 * m_flEdgeSize)) / m_flEdgeSize);
  if ( CGridNavBase::SetCellBlocked(this, v6, v7, bBlock) )
  {
    dx_0[0] = 0;
    v8 = v6 - this->m_nMinX;
    dx_0[1] = 1;
    dx_0[2] = 0;
    dx_0[3] = -1;
    dy[0] = 1;
    v9 = v8 + 15;
    dy[1] = 0;
    if ( v8 >= 0 )
      v9 = v8;
    dy[2] = -1;
    v10 = v7 - this->m_nMinY;
    dy[3] = 0;
    v11 = 1;
    v12 = 0;
    this->m_pSectors[(v9 >> 4) + this->m_nSectorWidth * (v10 / 16)].m_bDirty = 1;
    for ( i = 0; ; v11 = dy[i] )
    {
      m_nMinX = this->m_nMinX;
      v15 = v6 + v12;
      if ( v15 >= m_nMinX && v15 <= this->m_nMaxX )
      {
        m_nMinY = this->m_nMinY;
        v17 = v7 + v11;
        if ( v17 >= m_nMinY && v17 <= this->m_nMaxY )
          this->m_pSectors[(v15 - m_nMinX) / 16 + this->m_nSectorWidth * ((v17 - m_nMinY) / 16)].m_bDirty = 1;
      }
      if ( ++i == 4 )
        break;
      v12 = dx_0[i];
    }
  }
}


// CGridNav::DestroyTreesAroundPoint  (line 1930, @0x00000000024f63e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, DOTAGameRules, Purge, RemoveAll, VectorAdd, operator+, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CGridNav::GetStandingTreesAroundPoint, CDOTA_CombatLog::AddTreeCutDownEvent, CDOTAGamerules::IsCheatMode, RandomInt, DOTA_CreateItem, RandomFloat, CBaseEntity::GetAbsOrigin, CreateItemOnPositionSync, CUtlMemory<CDOTA_Tree*, int>::Purge, CUtlVectorBase<CDOTA_Tree*, CUtlMemory<CDOTA_Tree*, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_ActionRunner::PerformAction_DestroyTrees, CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateVerticalMotion, CDOTA_Modifier_LootDrop_Thinker::OnIntervalThink, CDOTA_Modifier_Lesser_NightCrawler_Pounce::UpdateHorizontalMotion, CGridNav::Script_DestroyTreesAroundPoint, CDOTA_Modifier_Knockback::UpdateHorizontalMotion, CDOTA_Modifier_Greevil_Miniboss_Orange_LightStrikeArray_Thinker::OnIntervalThink, CDOTABehaviorNeutralHome::Update, CDOTA_Modifier_Morphling_Adaptive_Strike::UpdateHorizontalMotion, CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::OnDestroy, CDOTA_Modifier_Kunkka_GhostShip_Knockback::OnDestroy, CDOTA_Modifier_Lina_LightStrikeArray_Thinker::OnIntervalThink (73 total)
// strings: "item_banana"
void __fastcall CGridNav::DestroyTreesAroundPoint(
        CGridNav *const this,
        bool bFullCollision,
        unsigned int nPlayerID,
        Vector a4,
        float a5,
        float flRadius)
{
  __int64 v7; // rbx
  int v8; // r12d
  CDOTA_Item *Item; // r14
  const CBaseEntity *v10; // rax
  Vector v11; // [rsp+0h] [rbp-D0h]
  GridNavTreeStackVec_t trees; // [rsp+30h] [rbp-A0h] BYREF
  unsigned __int64 v13; // [rsp+98h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  trees.m_Size = 0;
  trees.m_Memory.m_nAllocationCount = 10;
  trees.m_Memory.m_nGrowSize = 0x80000000;
  trees.m_Memory.m_pMemory = &trees.m_FixedMemory;
  CGridNav::GetStandingTreesAroundPoint(this, a4, a5, bFullCollision, &trees);
  if ( trees.m_Size > 0 )
  {
    CDOTA_CombatLog::AddTreeCutDownEvent(&g_DOTACombatLog, nPlayerID, trees.m_Size);
    if ( trees.m_Size > 0 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        (*(trees.m_Memory.m_pMemory[v7]->_vptr_CObstructionObject + 9))(
          trees.m_Memory.m_pMemory[v7],
          nPlayerID,
          0xFFFFFFFFLL);
        if ( g_pGameRules != 0 && CDOTAGamerules::IsCheatMode() && RandomInt(1, 100) <= 4 )
        {
          Item = DOTA_CreateItem("item_banana", 0, -1);
          if ( Item != 0 )
          {
            RandomFloat(-50.0, 50.0);
            v11.z = RandomFloat(-50.0, 50.0);
            v10 = (*(trees.m_Memory.m_pMemory[v7]->_vptr_CObstructionObject + 8))(trees.m_Memory.m_pMemory[v7]);
            CBaseEntity::GetAbsOrigin(v10);
            CreateItemOnPositionSync(v11, Item, 0);
          }
        }
        ++v8;
        ++v7;
      }
      while ( trees.m_Size > v8 );
    }
  }
  trees.m_Size = 0;
  if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
    if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
  }
}


// CGridNav::Script_DestroyTreesAroundPoint  (line 1962, @0x00000000024f6620, libserver.so)
// calls: CGridNav::DestroyTreesAroundPoint
void __fastcall CGridNav::Script_DestroyTreesAroundPoint(
        CGridNav *const this,
        bool bFullCollision,
        Vector a3,
        float a4,
        float flRadius)
{
  CGridNav::DestroyTreesAroundPoint(this, bFullCollision, 0xFFFFFFFF, a3, a4, flRadius);
}


// CGridNav::RegrowAllTrees  (line 1967, @0x00000000024b8920, libserver.so)  // inlines: GetBinaryObject
// calls: CDOTA_BinaryObjectSystem::ClearPendingActivateList
// callers: dota_treerespawn
void __fastcall CGridNav::RegrowAllTrees(CGridNav *const this)
{
  __int64 v1; // r12
  int v2; // ebx
  CDOTA_BinaryObject *v3; // rdi

  v1 = 0;
  v2 = 0;
  CDOTA_BinaryObjectSystem::ClearPendingActivateList(&g_CDOTA_BinaryObjectSystem);
  if ( g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size > 0 )
  {
    do
    {
      v3 = g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Memory.m_pMemory[v1];
      if ( v3 != 0 && !v3->m_bActive )
        (*(v3->_vptr_IHandleEntity + 207))(v3, 1, 0xFFFFFFFFLL);
      ++v2;
      ++v1;
    }
    while ( v2 < g_CDOTA_BinaryObjectSystem.m_BinaryObjects.m_Size );
  }
}


// CGridNav::IsNearbyTree  (line 1981, @0x00000000024f6640, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CGridNav::GetStandingTreesAroundPoint, CUtlMemory<CDOTA_Tree*, int>::Purge, __stack_chk_fail, CUtlVectorBase<CDOTA_Tree*, CUtlMemory<CDOTA_Tree*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Modifier_Treant_NaturesGuise::OnIntervalThink
__int64 __fastcall CGridNav::IsNearbyTree(
        CGridNav *const this,
        bool bFullCollision,
        Vector a3,
        float a4,
        float flRadius)
{
  unsigned int v5; // r12d
  int m_Size; // eax
  GridNavTreeStackVec_t trees; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int64 v9; // [rsp+78h] [rbp-18h]

  v9 = __readfsqword(0x28u);
  trees.m_Size = 0;
  trees.m_Memory.m_nAllocationCount = 10;
  trees.m_Memory.m_nGrowSize = 0x80000000;
  trees.m_Memory.m_pMemory = &trees.m_FixedMemory;
  CGridNav::GetStandingTreesAroundPoint(this, a3, a4, bFullCollision, &trees);
  m_Size = trees.m_Size;
  trees.m_Size = 0;
  LOBYTE(v5) = m_Size > 0;
  if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
    if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
  }
  return v5;
}


// CGridNav::GetNearbyTrees  (line 1989, @0x00000000024f6710, libserver.so)
// calls: CGridNav::GetStandingTreesAroundPoint
// callers: CDOTA_Modifier_MonkeyKing_Transform::OnCreated
bool __fastcall CGridNav::GetNearbyTrees(
        CGridNav *const this,
        bool bFullCollision,
        GridNavTreeStackVec_t *const trees,
        Vector a4,
        float a5,
        float flRadius)
{
  CGridNav::GetStandingTreesAroundPoint(this, a4, a5, bFullCollision, trees);
  return trees->m_Size > 0;
}


// CGridNav::GetStandingTreesAroundPoint  (line 1994, @0x00000000024f6110, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CheckForCollisions, ConvertToExternalMemory, CopyConstruct<CDOTA_Tree*>, Element, FastSqrt, GrowMemory, IsExternallyAllocated, Length2D, Purge, Purge_FixedGrowable, RemoveAll, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions, __dynamic_cast, CBaseEntity::GetAbsOrigin, CUtlMemory<CDOTA_Tree*, int>::Grow, CUtlMemory<IntersectionRecord_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<IntersectionRecord_t, CUtlMemoryFixedGrowable<IntersectionRecord_t, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGridNav::DestroyTreesAroundPoint, CGridNav::IsNearbyTree, CGridNav::GetNearbyTrees, CDOTA_Bot_AbilityUsage_Windrunner_Shackleshot::IsGoodShackle, CDOTA_BaseNPC_Creature::GetDesiredOffensiveAbility, CDOTA_Ability_Windrunner_Shackleshot::OnProjectileHit, CDOTA_Ability_NianCharge::OnProjectileThink_ExtraData, CDOTA_Ability_Furion_ForceOfNature::CastFilterResult, CDOTA_Ability_Furion_ForceOfNature::OnSpellStart, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnProjectileThink_ExtraData, CDOTA_Ability_Shredder_TimberChain::OnProjectileThink, CDOTA_Ability_Shredder_WhirlingDeath::OnSpellStart (14 total)
void __fastcall CGridNav::GetStandingTreesAroundPoint(
        CGridNav *const this,
        Vector vPosition,
        float flRadius,
        bool bFullCollision,
        CUtlVector<CDOTA_Tree*,CUtlMemory<CDOTA_Tree*,int> > *const trees)
{
  __int64 v7; // r12
  int v8; // ebx
  CDOTA_Tree *v9; // r13
  const CBaseEntity *v10; // rax
  const Vector *AbsOrigin; // rax
  __int64 m_Size; // r15
  CDOTA_Tree **v13; // rax
  CObstructionObject *m_pObstructionObject; // rdi
  const void *v15; // rax
  uint32 v16; // eax
  __int64 x; // [rsp+20h] [rbp-200h]
  EHANDLE ignoreHandle; // [rsp+40h] [rbp-1E0h] BYREF
  CollisionResultList_t intersectionRecords; // [rsp+50h] [rbp-1D0h] BYREF
  unsigned __int64 v22; // [rsp+1E8h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  x = *&vPosition.x;
  intersectionRecords.m_Size = 0;
  intersectionRecords.m_Memory.m_nAllocationCount = 16;
  intersectionRecords.m_Memory.m_nGrowSize = 0x80000000;
  intersectionRecords.m_Memory.m_pMemory = &intersectionRecords.m_Memory.m_FixedMemory;
  CGridNav::PrepareObstructionManager(
    this,
    flRadius,
    0x20u,
    0,
    ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
    0.0);
  ignoreHandle.m_Index = -2;
  CGridNav::CheckForCollisions(this, *&x, *(&x + 1), &intersectionRecords, &ignoreHandle.m_Index, 0);
  if ( intersectionRecords.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      m_pObstructionObject = intersectionRecords.m_Memory.m_pMemory[v7].m_pObsRec->m_pObstructionObject;
      v15 = (*(m_pObstructionObject->_vptr_CObstructionObject + 6))(m_pObstructionObject);
      if ( v15 != 0 )
        v9 = __dynamic_cast(v15, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
      else
        v9 = 0;
      if ( v9->m_bStanding )
      {
        if ( bFullCollision
          || (v10 = (*(v9->_vptr_CObstructionObject + 8))(v9),
              AbsOrigin = CBaseEntity::GetAbsOrigin(v10),
              fsqrt(
                ((AbsOrigin->x - *&x) * (AbsOrigin->x - *&x))
              + ((AbsOrigin->y - *(&x + 1)) * (AbsOrigin->y - *(&x + 1)))) <= flRadius) )
        {
          m_Size = trees->m_Size;
          if ( m_Size == trees->m_Memory.m_nAllocationCount )
            CUtlMemory<CDOTA_Tree *,int>::Grow(&trees->m_Memory, 1);
          ++trees->m_Size;
          v13 = &trees->m_Memory.m_pMemory[m_Size];
          if ( v13 != 0 )
            *v13 = v9;
        }
      }
      ++v8;
      ++v7;
    }
    while ( intersectionRecords.m_Size > v8 );
  }
  intersectionRecords.m_Size = 0;
  if ( intersectionRecords.m_Memory.m_nAllocationCount < 0 )
  {
    v16 = intersectionRecords.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v16 = intersectionRecords.m_Memory.m_nGrowSize & 0xC0000000;
    if ( intersectionRecords.m_Memory.m_pMemory != &intersectionRecords.m_Memory.m_FixedMemory )
    {
      if ( intersectionRecords.m_Memory.m_pMemory != 0 && v16 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v16 == 0 )
    CUtlMemory<IntersectionRecord_t,int>::Purge(&intersectionRecords.m_Memory);
}


// CGridNav::GetAllTreesAroundPoint  (line 2024, @0x00000000024f6740, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CheckForCollisions, ConvertToExternalMemory, CopyConstruct<CDOTA_Tree*>, Element, FastSqrt, GrowMemory, IsExternallyAllocated, Length2D, Purge, Purge_FixedGrowable, RemoveAll, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions, __dynamic_cast, CBaseEntity::GetAbsOrigin, CUtlMemory<CDOTA_Tree*, int>::Grow, CUtlMemory<IntersectionRecord_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<IntersectionRecord_t, CUtlMemoryFixedGrowable<IntersectionRecord_t, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGridNav::Script_GetAllTreesAroundPoint
void __fastcall CGridNav::GetAllTreesAroundPoint(
        CGridNav *const this,
        Vector vPosition,
        float flRadius,
        bool bFullCollision,
        CUtlVector<CDOTA_Tree*,CUtlMemory<CDOTA_Tree*,int> > *const trees)
{
  __int64 v7; // r13
  int v8; // r12d
  CDOTA_Tree *v9; // r15
  const CBaseEntity *v10; // rax
  const Vector *AbsOrigin; // rax
  __int64 m_Size; // r14
  CDOTA_Tree **v13; // rax
  CObstructionObject *m_pObstructionObject; // rdi
  const void *v15; // rax
  uint32 v16; // eax
  __int64 x; // [rsp+20h] [rbp-200h]
  EHANDLE ignoreHandle; // [rsp+40h] [rbp-1E0h] BYREF
  CollisionResultList_t intersectionRecords; // [rsp+50h] [rbp-1D0h] BYREF
  unsigned __int64 v22; // [rsp+1E8h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  x = *&vPosition.x;
  intersectionRecords.m_Size = 0;
  intersectionRecords.m_Memory.m_nAllocationCount = 16;
  intersectionRecords.m_Memory.m_nGrowSize = 0x80000000;
  intersectionRecords.m_Memory.m_pMemory = &intersectionRecords.m_Memory.m_FixedMemory;
  CGridNav::PrepareObstructionManager(
    this,
    flRadius,
    0x20u,
    0,
    ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
    0.0);
  ignoreHandle.m_Index = -2;
  CGridNav::CheckForCollisions(this, *&x, *(&x + 1), &intersectionRecords, &ignoreHandle.m_Index, 0);
  if ( intersectionRecords.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      m_pObstructionObject = intersectionRecords.m_Memory.m_pMemory[v7].m_pObsRec->m_pObstructionObject;
      v15 = (*(m_pObstructionObject->_vptr_CObstructionObject + 6))(m_pObstructionObject);
      if ( v15 != 0 )
        v9 = __dynamic_cast(v15, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2);
      else
        v9 = 0;
      if ( bFullCollision
        || (v10 = (*(v9->_vptr_CObstructionObject + 8))(v9),
            AbsOrigin = CBaseEntity::GetAbsOrigin(v10),
            fsqrt(((AbsOrigin->x - *&x) * (AbsOrigin->x - *&x)) + ((AbsOrigin->y - *(&x + 1))
                                                                 * (AbsOrigin->y - *(&x + 1)))) <= flRadius) )
      {
        m_Size = trees->m_Size;
        if ( m_Size == trees->m_Memory.m_nAllocationCount )
          CUtlMemory<CDOTA_Tree *,int>::Grow(&trees->m_Memory, 1);
        ++trees->m_Size;
        v13 = &trees->m_Memory.m_pMemory[m_Size];
        if ( v13 != 0 )
          *v13 = v9;
      }
      ++v8;
      ++v7;
    }
    while ( intersectionRecords.m_Size > v8 );
  }
  intersectionRecords.m_Size = 0;
  if ( intersectionRecords.m_Memory.m_nAllocationCount < 0 )
  {
    v16 = intersectionRecords.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v16 = intersectionRecords.m_Memory.m_nGrowSize & 0xC0000000;
    if ( intersectionRecords.m_Memory.m_pMemory != &intersectionRecords.m_Memory.m_FixedMemory )
    {
      if ( intersectionRecords.m_Memory.m_pMemory != 0 && v16 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v16 == 0 )
    CUtlMemory<IntersectionRecord_t,int>::Purge(&intersectionRecords.m_Memory);
}


// CGridNav::Script_GetAllTreesAroundPoint  (line 2051, @0x00000000024f6a00, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, EntityToHScript, Free, Get, GetPublicScriptScope, Purge, RemoveAll, TakeOwnership, ToHScript, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CGridNav::GetAllTreesAroundPoint, CEntityInstance::CreatePublicScriptScope, CUtlMemory<CDOTA_Tree*, int>::Purge, CVariantBase<CVariantDefaultAllocator>::Free, CUtlVectorBase<CDOTA_Tree*, CUtlMemory<CDOTA_Tree*, int> >::~CUtlVectorBase, _Unwind_Resume
__int64 *__fastcall CGridNav::Script_GetAllTreesAroundPoint(
        __int64 *a1,
        CGridNav *const this,
        bool bFullCollision,
        double a4,
        double a5,
        __m128i a6,
        float flRadius)
{
  float v10; // ebx
  __int64 v11; // rax
  __int64 v12; // r13
  int i; // ebx
  HSCRIPT m_hScope; // rax
  void (__fastcall *v15)(IScriptVM *, __int64, _QWORD, HSCRIPT *); // r15
  __int64 v16; // rax
  CEntityInstance *v17; // r12
  __int64 varTable_8; // [rsp+10h] [rbp-80h]
  HSCRIPT v21; // [rsp+30h] [rbp-60h] BYREF
  __int16 v22; // [rsp+38h] [rbp-58h]
  __int16 v23; // [rsp+3Ah] [rbp-56h]
  CUtlVector<CDOTA_Tree*,CUtlMemory<CDOTA_Tree*,int> > trees; // [rsp+40h] [rbp-50h] BYREF
  Vector vPositiona; // 0:^20.12

  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(a6));
  *a1 = 0;
  *(a1 + 4) = 0;
  *(a1 + 5) = 0;
  *&vPositiona.x = a4;
  vPositiona.z = *&a5;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, a1, a4, a5, *a6.m128i_i64, flRadius);
  v11 = *a1;
  trees.m_Size = 0;
  trees.m_Memory.m_pMemory = 0;
  trees.m_Memory.m_nAllocationCount = 0;
  varTable_8 = v11;
  trees.m_Memory.m_nGrowSize = 0;
  CGridNav::GetAllTreesAroundPoint(this, vPositiona, v10, bFullCollision, &trees);
  v12 = 0;
  for ( i = 0; trees.m_Size > i; ++v12 )
  {
    v15 = *(*g_pScriptVM + 248LL);
    v16 = (*(trees.m_Memory.m_pMemory[v12]->_vptr_CObstructionObject + 8))(trees.m_Memory.m_pMemory[v12]);
    v17 = v16;
    if ( v16 != 0 )
    {
      m_hScope = *(*(v16 + 8) + 40LL);
      if ( m_hScope == 0 )
      {
        CEntityInstance::CreatePublicScriptScope(v17, 0);
        m_hScope = v17->m_pEntity->m_hPublicScope.m_hScope;
      }
    }
    else
    {
      m_hScope = 0;
    }
    v22 = 31;
    v23 = 0;
    v21 = m_hScope;
    v15(g_pScriptVM, varTable_8, i, &v21);
    if ( (v23 & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v21);
    ++i;
  }
  if ( *(a1 + 4) == 31 )
    *(a1 + 4) = 36;
  trees.m_Size = 0;
  if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
    if ( (trees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Tree *,int>::Purge(&trees.m_Memory);
  }
  return a1;
}


// CGridNav::ResolveNPCPositions  (line 2068, @0x00000000024dbdb0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CheckForCollisions, ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, ToDOTABaseNPC, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CUtlMemory<IntersectionRecord_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<IntersectionRecord_t, CUtlMemoryFixedGrowable<IntersectionRecord_t, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: Script_ResolveNPCPositions, CDOTA_Ability_Furion_Sprout::OnSpellStart, CDOTA_Ability_Rattletrap_PowerCogs::OnSpellStart, CDOTA_Ability_Tusk_IceShards::CreateShards, CDOTA_Item_IronwoodBranch::OnSpellStart
void __fastcall CGridNav::ResolveNPCPositions(
        CGridNav *const this,
        bool bIgnoreRoshan,
        double a3,
        double a4,
        float a5,
        float flRadius)
{
  __int64 v8; // rbx
  int v9; // r12d
  CObstructionObject *m_pObstructionObject; // rdi
  __int64 v11; // rax
  __int64 v12; // r15
  int v13; // eax
  uint32 v14; // eax
  EHANDLE ignoreHandle; // [rsp+10h] [rbp-1E0h] BYREF
  CollisionResultList_t intersectionRecords; // [rsp+20h] [rbp-1D0h] BYREF
  unsigned __int64 v18; // [rsp+1B8h] [rbp-38h]
  Vector v20; // 0:xmm0_8.8,8:xmm1_4.4

  v18 = __readfsqword(0x28u);
  intersectionRecords.m_Size = 0;
  intersectionRecords.m_Memory.m_nAllocationCount = 16;
  intersectionRecords.m_Memory.m_nGrowSize = 0x80000000;
  intersectionRecords.m_Memory.m_pMemory = &intersectionRecords.m_Memory.m_FixedMemory;
  CGridNav::PrepareObstructionManager(
    this,
    a5,
    0x10u,
    2u,
    ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
    0.0);
  ignoreHandle.m_Index = -2;
  CGridNav::CheckForCollisions(this, *&a3, *(&a3 + 1), &intersectionRecords, &ignoreHandle.m_Index, 0);
  if ( intersectionRecords.m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      m_pObstructionObject = intersectionRecords.m_Memory.m_pMemory[v8].m_pObsRec->m_pObstructionObject;
      v11 = (*(m_pObstructionObject->_vptr_CObstructionObject + 6))(m_pObstructionObject);
      if ( v11 != 0 && *(v11 + 339) != 0 )
        v12 = v11;
      else
        v12 = 0;
      v13 = *(v12 + 2088);
      if ( ((v13 & 3) != 0 || (v13 & 0x180) != 0)
        && (!bIgnoreRoshan || (*(*v12 + 3224LL))(v12) == 0)
        && *(v12 + 2787) >= 0 )
      {
        v20 = *CBaseEntity::GetAbsOrigin(v12);
        FindClearSpaceForUnit(v12, v20, 0);
      }
      ++v9;
      ++v8;
    }
    while ( intersectionRecords.m_Size > v9 );
  }
  intersectionRecords.m_Size = 0;
  if ( intersectionRecords.m_Memory.m_nAllocationCount < 0 )
  {
    v14 = intersectionRecords.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    v14 = intersectionRecords.m_Memory.m_nGrowSize & 0xC0000000;
    if ( intersectionRecords.m_Memory.m_pMemory != &intersectionRecords.m_Memory.m_FixedMemory )
    {
      if ( intersectionRecords.m_Memory.m_pMemory != 0 && v14 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v14 == 0 )
    CUtlMemory<IntersectionRecord_t,int>::Purge(&intersectionRecords.m_Memory);
}


// CGridNav::GetSectorEdges  (line 2099, @0x00000000024d6350, libserver.so)
void __fastcall CGridNav::GetSectorEdges(
        CGridNav *const this,
        int *const nLeft,
        int *const nRight,
        int *const nBottom,
        int *const nTop,
        int nSectorX,
        int nSectorY)
{
  int v7; // r9d
  int m_nMaxX; // r9d
  int v9; // eax
  int m_nMaxY; // eax

  v7 = this->m_nMinX + 16 * nSectorX;
  *nLeft = v7;
  m_nMaxX = v7 + 15;
  if ( m_nMaxX > this->m_nMaxX )
    m_nMaxX = this->m_nMaxX;
  *nRight = m_nMaxX;
  v9 = this->m_nMinY + 16 * nSectorY;
  *nBottom = v9;
  m_nMaxY = v9 + 15;
  if ( m_nMaxY > this->m_nMaxY )
    m_nMaxY = this->m_nMaxY;
  *nTop = m_nMaxY;
}


// CGridNav::GetNPCsInRange  (line 2108, @0x00000000024e9b60, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, CopyConstruct<CDOTA_BaseNPC*>, Element, EnsureCapacity, GrowMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, memcpy, operator[], ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CGridNav::PrepareObstructionManager, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::CheckForCollisionsWithNPCs, CUtlMemory<CDOTA_BaseNPC*, int>::Grow, CUtlMemory<IntersectionRecord_t, int>::Purge, memcpy, CUtlVectorBase<IntersectionRecord_t, CUtlMemoryFixedGrowable<IntersectionRecord_t, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_BaseNPC::IsEnemyInAgressiveStanceRange, CDOTA_BaseNPC::FindWakingEnemy, CDOTA_BaseNPC::AngerNearbyUnits, CDOTA_BaseNPC::GetBestEnemy, CDOTA_BaseNPC::AlertNearbyUnits
void __fastcall CGridNav::GetNPCsInRange(
        CGridNav *const this,
        CDOTA_BaseNPC *pNPC,
        float flSearchRadius,
        CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > *const outNPCs)
{
  const Vector *AbsOrigin; // rax
  int v7; // ebx
  uint32 m_nGrowSize; // eax
  CDOTA_BaseNPC **v9; // rsi
  __int64 v10; // rax
  CDOTA_BaseNPC **v11; // rax
  __int64 v12; // r13
  int v13; // r12d
  CDOTA_BaseNPC *v14; // rbx
  __int64 v15; // rax
  __int64 m_Size; // r15
  int v17; // eax
  CDOTA_BaseNPC **v18; // rax
  unsigned int v19; // eax
  CDOTA_BaseNPC **m_pMemory; // r12
  CDOTA_BaseNPC **v21; // rax
  int v22; // [rsp-8h] [rbp-1D8h] BYREF
  CollisionResultList_t intersections; // [rsp+0h] [rbp-1D0h] BYREF

  v22 = 0;
  *&intersections.m_Memory.m_FixedMemory.m_Data[376] = __readfsqword(0x28u);
  intersections.m_Memory.m_pMemory = 0x8000000000000010LL;
  *&intersections.m_Size = &intersections.m_Memory.m_nAllocationCount;
  CGridNav::PrepareObstructionManager(
    this,
    fmaxf(0.0, flSearchRadius),
    0x10u,
    0x42u,
    ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
    0.0);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pNPC);
  CDOTA_BaseNPC::CheckForCollisionsWithNPCs(pNPC, AbsOrigin, &v22, 1, 0);
  v7 = v22;
  if ( v22 > outNPCs->m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = outNPCs->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = outNPCs->m_Memory.m_pMemory;
        v21 = (**g_pMemAlloc)(g_pMemAlloc, 8LL * v22);
        outNPCs->m_Memory.m_pMemory = v21;
        if ( m_pMemory != 0 )
          memcpy(v21, m_pMemory, 8LL * outNPCs->m_Memory.m_nAllocationCount);
        outNPCs->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v9 = outNPCs->m_Memory.m_pMemory;
        v10 = *g_pMemAlloc;
        if ( v9 != 0 )
          v11 = (*(v10 + 8))(g_pMemAlloc, v9, 8LL * v22);
        else
          v11 = (*v10)(g_pMemAlloc, 8LL * v22);
        outNPCs->m_Memory.m_pMemory = v11;
      }
      outNPCs->m_Memory.m_nAllocationCount = v7;
      v7 = v22;
    }
  }
  v12 = 0;
  v13 = 0;
  if ( v7 > 0 )
  {
    do
    {
      v14 = 0;
      v15 = *(*(*&intersections.m_Size + v12 + 8) + 8LL);
      if ( v15 != 0 )
        v14 = (v15 - 2056);
      if ( !v14->m_bIsPhantom.m_Value )
      {
        m_Size = outNPCs->m_Size;
        v17 = outNPCs->m_Size;
        if ( m_Size == outNPCs->m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&outNPCs->m_Memory, 1);
          v17 = outNPCs->m_Size;
        }
        outNPCs->m_Size = v17 + 1;
        v18 = &outNPCs->m_Memory.m_pMemory[m_Size];
        if ( v18 != 0 )
          *v18 = v14;
      }
      ++v13;
      v12 += 24;
    }
    while ( v22 > v13 );
  }
  v22 = 0;
  if ( SLODWORD(intersections.m_Memory.m_pMemory) < 0 )
  {
    v19 = HIDWORD(intersections.m_Memory.m_pMemory) & 0xC0000000;
  }
  else
  {
    v19 = HIDWORD(intersections.m_Memory.m_pMemory) & 0xC0000000;
    if ( *&intersections.m_Size != &intersections.m_Memory.m_nAllocationCount )
    {
      if ( *&intersections.m_Size != 0 && v19 == 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return;
    }
  }
  if ( v19 == 0 )
    CUtlMemory<IntersectionRecord_t,int>::Purge(&intersections);
}


// CGridNav::PrepareObstructionManager  (line 2133, @0x00000000024d6390, libserver.so)  // inlines: SetObstructionPropertyMaskAll, SetObstructionPropertyMaskNone
// calls: C2DGridObstructionManager::SetCollisionRadius, C2DGridObstructionManager::SetSearcherRelationship
// callers: CGridNav::ShowObjectObstructions, CGridNav::ResolveNPCPositions, IsPositionValidForWard, CGridNav::GetNPCsInRange, CGridNav::GetStandingTreesAroundPoint, CGridNav::GetAllTreesAroundPoint, CDOTA_Modifier_IceSlide::UpdateHorizontalMotion, CGridNavPath::TrySkipAhead, CDOTA_SimpleObstruction::SetEnabled, CGridNavPath::ComputeShortPath, CGridNavPath::Build, CDOTA_ProjectileManager::FrameUpdatePostEntityThink (20 total)
void __fastcall CGridNav::PrepareObstructionManager(
        CGridNav *const this,
        float flSearcherRadius,
        uint nPropertyMaskAll,
        uint nPropertyMaskNone,
        ObstructionRelationshipClass_t searcherRelationshipClass,
        float flRelaitonshipRadiusAdjustment)
{
  C2DGridObstructionManager *p_m_ObstructionManager; // r14
  uint v11; // edx

  p_m_ObstructionManager = &this->m_ObstructionManager;
  C2DGridObstructionManager::SetCollisionRadius(
    &this->m_ObstructionManager,
    flSearcherRadius > 0.0,
    flRelaitonshipRadiusAdjustment);
  v11 = nPropertyMaskNone;
  this->m_ObstructionManager.m_nObjectPropertiesMaskAll = nPropertyMaskAll;
  BYTE1(v11) = BYTE1(nPropertyMaskNone) | 0x80;
  this->m_ObstructionManager.m_nObjectPropertiesMaskNone = nPropertyMaskNone;
  this->m_ObstructionManager.m_nObjectPropertiesMaskMerged = nPropertyMaskAll | v11;
  C2DGridObstructionManager::SetSearcherRelationship(
    p_m_ObstructionManager,
    searcherRelationshipClass,
    flRelaitonshipRadiusAdjustment);
}


// CGridNav::CheckForCollisions  (line 2144, @0x00000000024db8a0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: C2DGridObstructionManager::CheckForCollisions, CUtlMemory<IntersectionRecord_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<IntersectionRecord_t, CUtlMemoryFixedGrowable<IntersectionRecord_t, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CGridNav::CheckForCollisions, CGridNav::ShowObjectObstructions, CGridNav::ResolveNPCPositions, IsPositionValidForWard, CGridNav::GetStandingTreesAroundPoint, CGridNav::GetAllTreesAroundPoint, CDOTA_Modifier_IceSlide::UpdateHorizontalMotion, FindClearSpaceForUnit
bool __fastcall CGridNav::CheckForCollisions(
        CGridNav *const this,
        float x,
        float y,
        CollisionResultList_t *resultList,
        uint32 *ignoreHandle,
        bool bIncludeNotVisible)
{
  bool result; // al
  uint32 v7; // eax
  uint32 v8; // edx
  bool v9; // [rsp+Ch] [rbp-1C4h]
  bool v10; // [rsp+Ch] [rbp-1C4h]
  EHANDLE ignoreHandlea; // [rsp+10h] [rbp-1C0h] BYREF
  CollisionResultList_t unusedResults; // [rsp+20h] [rbp-1B0h] BYREF
  unsigned __int64 v13; // [rsp+1B8h] [rbp-18h]

  v13 = __readfsqword(0x28u);
  if ( resultList != 0 )
  {
    ignoreHandlea.m_Index = *ignoreHandle;
    return C2DGridObstructionManager::CheckForCollisions(
             &this->m_ObstructionManager,
             x,
             y,
             x,
             y,
             resultList,
             &ignoreHandlea,
             !bIncludeNotVisible ? 2 : 18,
             -1);
  }
  else
  {
    unusedResults.m_Memory.m_pMemory = &unusedResults.m_Memory.m_FixedMemory;
    v7 = *ignoreHandle;
    unusedResults.m_Size = 0;
    unusedResults.m_Memory.m_nAllocationCount = 16;
    unusedResults.m_Memory.m_nGrowSize = 0x80000000;
    ignoreHandlea.m_Index = v7;
    result = C2DGridObstructionManager::CheckForCollisions(
               &this->m_ObstructionManager,
               x,
               y,
               x,
               y,
               &unusedResults,
               &ignoreHandlea,
               !bIncludeNotVisible ? 2 : 18,
               1);
    unusedResults.m_Size = 0;
    v8 = unusedResults.m_Memory.m_nGrowSize & 0xC0000000;
    if ( unusedResults.m_Memory.m_nAllocationCount < 0
      || unusedResults.m_Memory.m_pMemory == &unusedResults.m_Memory.m_FixedMemory )
    {
      if ( v8 == 0 )
      {
        v10 = result;
        CUtlMemory<IntersectionRecord_t,int>::Purge(&unusedResults.m_Memory);
        return v10;
      }
    }
    else if ( unusedResults.m_Memory.m_pMemory != 0 && v8 == 0 )
    {
      v9 = result;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return v9;
    }
  }
  return result;
}


// CGridNav::CheckForCollisions  (line 2155, @0x00000000024dba20, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CGridNav::CheckForCollisions
// callers: CDOTA_SimpleObstruction::SetEnabled, CGridNavPath::Build, CDOTA_ProjectileManager::FrameUpdatePostEntityThink, CDOTA_MapTree::GrowBack, FindSpaceBehindOrNearUnit, FindUnitsInRadius, CDOTALocomotor::UpdateStandardMovement, CDOTA_BaseNPC::DoesUnitCollideAtPosition, CDOTA_BaseNPC::CheckForCollisionsWithNPCs
bool __fastcall CGridNav::CheckForCollisions(
        CGridNav *const this,
        const Vector *const p,
        CollisionResultList_t *resultList,
        uint32 *ignoreHandle,
        bool bIncludeNotVisible)
{
  float y; // xmm1_4
  float x; // xmm0_4
  EHANDLE ignoreHandlea; // [rsp+0h] [rbp-10h] BYREF

  y = p->y;
  x = p->x;
  ignoreHandlea.m_Index = *ignoreHandle;
  return CGridNav::CheckForCollisions(this, x, y, resultList, &ignoreHandlea.m_Index, 0);
}


// CGridNav::CheckForCollisionsWithLine  (line 2162, @0x00000000024d6410, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: C2DGridObstructionManager::CheckForCollisions
// callers: TestCollision, Script_FindUnitsInLine
bool __fastcall CGridNav::CheckForCollisionsWithLine(
        CGridNav *const this,
        const Vector *const v1,
        const Vector *const v2,
        CollisionResultList_t *resultList,
        uint32 *ignoreHandle,
        uint checkFlags)
{
  float y; // xmm3_4
  float x; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  EHANDLE ignoreHandlea; // [rsp+0h] [rbp-10h] BYREF

  y = v2->y;
  x = v2->x;
  v8 = v1->y;
  v9 = v1->x;
  ignoreHandlea.m_Index = *ignoreHandle;
  return C2DGridObstructionManager::CheckForCollisions(
           &this->m_ObstructionManager,
           v9,
           v8,
           x,
           y,
           resultList,
           &ignoreHandlea,
           checkFlags,
           -1);
}


// CGridNav::AdvanceAroundObstruction  (line 2167, @0x00000000024d6460, libserver.so)
// calls: C2DGridObstructionManager::AdvanceAroundObstruction
// callers: CShortPathProbe::Advance
__int64 __fastcall CGridNav::AdvanceAroundObstruction(
        __int64 a1,
        CGridNav *const this,
        const Vector2D *const p,
        const ObstructionRecord_t *pObstruction,
        bool bClockwise)
{
  C2DGridObstructionManager::AdvanceAroundObstruction(&this->m_ObstructionManager, p, pObstruction, bClockwise);
  return a1;
}


// CGridNavSectorPortal::GetMidpointXY  (line 2174, @0x00000000024d6490, libserver.so)
void __fastcall CGridNavSectorPortal::GetMidpointXY(
        const CGridNavSectorPortal *const this,
        int *const x,
        int *const y,
        int nWhichEdge,
        int nLeft,
        int nRight,
        int nBottom,
        int nTop)
{
  int v8; // ecx
  int v9; // eax

  v8 = 2 * nWhichEdge;
  v9 = (this->m_nEndIndex + this->m_nStartIndex) >> 1;
  if ( v8 == 2 )
  {
    *x = nRight;
    *y = nBottom + v9;
  }
  else if ( v8 == 4 )
  {
    *x = nLeft + v9;
    *y = nBottom;
  }
  else if ( v8 != 0 )
  {
    *x = nLeft;
    *y = nBottom + v9;
  }
  else
  {
    *x = nLeft + v9;
    *y = nTop;
  }
}


// CGridNavSector::GetPortal  (line 2199, @0x00000000024d64f0, libserver.so)  // inlines: SectorToMinGridPosX, SectorToMinGridPosY
// callers: CGridNav::ShowGridNavSectors, CGridNav::BuildPath
CGridNavSectorPortal *__fastcall CGridNavSector::GetPortal(
        CGridNavSector *const this,
        int nGridPosX,
        int nGridPosY,
        int nWhichEdge)
{
  int v4; // edx
  CUtlVector<CGridNavSectorPortal,CUtlMemory<CGridNavSectorPortal,int> > *v5; // rax
  int m_Size; // ecx
  CGridNavSectorPortal *result; // rax
  CGridNavSectorPortal *v8; // rsi

  if ( this->m_bDirty )
    return 0;
  v4 = (nWhichEdge & 1) != 0
     ? nGridPosY - (16 * this->m_nSectorY + g_GridNav.m_nMinY)
     : nGridPosX - (16 * this->m_nSectorX + g_GridNav.m_nMinX);
  v5 = &this->m_Portals[nWhichEdge];
  m_Size = v5->m_Size;
  if ( v5->m_Size <= 0 )
    return 0;
  result = v5->m_Memory.m_pMemory;
  v8 = &result[(m_Size - 1) + 1];
  while ( v4 < result->m_nStartIndex || v4 > result->m_nEndIndex )
  {
    if ( ++result == v8 )
      return 0;
  }
  return result;
}


// IsPositionValidForWard  (line 2223, @0x00000000024dc000, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, CheckForCollisions, ConvertToExternalMemory, GetCellFlags, GetCellIndex, OutOfBounds, Purge, Purge_FixedGrowable, RemoveAll, ToDOTABaseNPC, WorldToGridPosX, WorldToGridPosY, operator&, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: floorf, CGridNav::PrepareObstructionManager, CGridNav::CheckForCollisions, CUtlMemory<IntersectionRecord_t, int>::Purge, __stack_chk_fail, CUtlVectorBase<IntersectionRecord_t, CUtlMemoryFixedGrowable<IntersectionRecord_t, 16ul, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Item_IronwoodBranch::CastFilterResult
// globals: g_GridNav
bool __fastcall IsPositionValidForWard(const Vector *const vPosition)
{
  int v2; // r12d
  float v3; // xmm0_4
  bool result; // al
  int v5; // edx
  float x; // xmm0_4
  float y; // xmm1_4
  __int64 v8; // rbx
  int v9; // r12d
  const ObstructionRecord_t *m_pObsRec; // rax
  CObstructionObject *m_pObstructionObject; // rdi
  _BYTE *v12; // rax
  uint32 v13; // edx
  float v14; // [rsp+8h] [rbp-1D8h]
  float m_flEdgeSize; // [rsp+Ch] [rbp-1D4h]
  bool v16; // [rsp+Ch] [rbp-1D4h]
  bool v17; // [rsp+Ch] [rbp-1D4h]
  EHANDLE ignoreHandle; // [rsp+10h] [rbp-1D0h] BYREF
  CollisionResultList_t results; // [rsp+20h] [rbp-1C0h] BYREF
  unsigned __int64 v20; // [rsp+1B8h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  m_flEdgeSize = g_GridNav.m_flEdgeSize;
  v14 = 0.5 * g_GridNav.m_flEdgeSize;
  v2 = floorf(((vPosition->x - g_GridNav.m_flOffsetX) + (0.5 * g_GridNav.m_flEdgeSize)) / g_GridNav.m_flEdgeSize);
  v3 = floorf(((vPosition->y - g_GridNav.m_flOffsetY) + v14) / m_flEdgeSize);
  if ( v2 < g_GridNav.m_nMinX )
    return 0;
  if ( v2 > g_GridNav.m_nMaxX )
    return 0;
  v5 = v3;
  if ( v3 < g_GridNav.m_nMinY || v5 > g_GridNav.m_nMaxY )
    return 0;
  result = 0;
  if ( (g_GridNav.m_CellFlags.m_Memory.m_pMemory[v2 - g_GridNav.m_nMinX + g_GridNav.m_nWidth * (v5 - g_GridNav.m_nMinY)]
      & 0x12) == 0 )
  {
    CGridNav::PrepareObstructionManager(
      &g_GridNav,
      0.1,
      0,
      0,
      ObstructionRelationshipClass_t::DOTA_OBSTRUCTION_RELATIONSHIP_NONE,
      0.0);
    x = vPosition->x;
    y = vPosition->y;
    results.m_Size = 0;
    results.m_Memory.m_nAllocationCount = 16;
    results.m_Memory.m_nGrowSize = 0x80000000;
    results.m_Memory.m_pMemory = &results.m_Memory.m_FixedMemory;
    ignoreHandle.m_Index = -2;
    CGridNav::CheckForCollisions(&g_GridNav, x, y, &results, &ignoreHandle.m_Index, 0);
    if ( results.m_Size <= 0 )
    {
LABEL_26:
      result = 1;
    }
    else
    {
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        m_pObsRec = results.m_Memory.m_pMemory[v8].m_pObsRec;
        if ( m_pObsRec != 0 )
        {
          if ( (m_pObsRec->m_ObjectProperties & 0x20) != 0 )
            break;
          m_pObstructionObject = m_pObsRec->m_pObstructionObject;
          if ( m_pObstructionObject != 0 )
          {
            v12 = (*(m_pObstructionObject->_vptr_CObstructionObject + 6))(m_pObstructionObject);
            if ( v12 != 0 && v12[339] != 0 && (v12[2088] & 0x10) != 0 && (*(*v12 + 3264LL))(v12) != 0 )
              break;
          }
        }
        ++v9;
        ++v8;
        if ( results.m_Size <= v9 )
          goto LABEL_26;
      }
      result = 0;
    }
    results.m_Size = 0;
    v13 = results.m_Memory.m_nGrowSize & 0xC0000000;
    if ( results.m_Memory.m_nAllocationCount < 0 || results.m_Memory.m_pMemory == &results.m_Memory.m_FixedMemory )
    {
      if ( v13 == 0 )
      {
        v17 = result;
        CUtlMemory<IntersectionRecord_t,int>::Purge(&results.m_Memory);
        return v17;
      }
    }
    else if ( results.m_Memory.m_pMemory != 0 && v13 == 0 )
    {
      v16 = result;
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      return v16;
    }
  }
  return result;
}


// CHeightMapSceneObject::CHeightMapSceneObject  (line 2292, @0x00000000024d6cf0, libserver.so)  // inlines: CSceneObject, CUtlStringToken, ~IGenericInterface
// calls: _Unwind_Resume
// callers: CGridSceneObjectDescriptor::Create
void __fastcall CHeightMapSceneObject::CHeightMapSceneObject(CHeightMapSceneObject *const this)
{
  this->_vptr_IGenericInterface = off_3F794B0;
  this->m_pPVS = 0;
  this->m_nLayerMatchID.m_nHashCode = 0;
  (*(*g_pSceneSystem + 792LL))(g_pSceneSystem, this);
  this->m_nNumVertices = 0;
  this->_vptr_IGenericInterface = off_40FD9B0;
  this->m_hVertexBuffer = 0;
}


// CHeightMapSceneObject::~CHeightMapSceneObject  (line 2302, @0x00000000024b8660, libserver.so)  // inlines: ~CSceneObject, ~IGenericInterface
// callers: CHeightMapSceneObject::~CHeightMapSceneObject
void __fastcall CHeightMapSceneObject::~CHeightMapSceneObject(CHeightMapSceneObject *const this)
{
  this->_vptr_IGenericInterface = off_40FD9B0;
  (*(*g_pRenderDevice + 272LL))(g_pRenderDevice, this->m_hVertexBuffer);
  this->_vptr_IGenericInterface = off_3F794B0;
  (*(*g_pSceneSystem + 800LL))(g_pSceneSystem, this);
  this->_vptr_IGenericInterface = off_3F79210;
}


// CHeightMapSceneObject::~CHeightMapSceneObject  (line 2302, @0x00000000024b86d0, libserver.so)
// calls: CHeightMapSceneObject::~CHeightMapSceneObject, operator delete
void __fastcall CHeightMapSceneObject::~CHeightMapSceneObject(CHeightMapSceneObject *const this)
{
  CHeightMapSceneObject::~CHeightMapSceneObject(this);
  operator delete(this);
}


// AddVertexToList  (line 2310, @0x00000000024f6c00, libserver.so)  // inlines: AddToTail, AsUint32, Element, GrowMemory, operator=, operator[]
// calls: CUtlMemory<VertexColorPos_t, int>::Grow
// callers: CHeightMapSceneObject::BuildVertexList
void __fastcall AddVertexToList(
        CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int> > *pOutVertices,
        const Vector *const position,
        const VertexColor_t *const color)
{
  int m_Size; // r13d
  int v6; // eax
  VertexColorPos_t *v7; // rax
  const VertexColor_t *colora; // [rsp+8h] [rbp-28h]

  m_Size = pOutVertices->m_Size;
  v6 = pOutVertices->m_Size;
  if ( pOutVertices->m_Size == pOutVertices->m_Memory.m_nAllocationCount )
  {
    colora = color;
    CUtlMemory<VertexColorPos_t,int>::Grow(&pOutVertices->m_Memory, 1);
    v6 = pOutVertices->m_Size;
    color = colora;
  }
  pOutVertices->m_Size = v6 + 1;
  v7 = &pOutVertices->m_Memory.m_pMemory[m_Size];
  v7->m_vecPos.x = position->x;
  v7->m_vecPos.y = position->y;
  v7->m_vecPos.z = position->z;
  v7->m_color = color->color;
}


// CHeightMapSceneObject::BuildVertexList  (line 2321, @0x00000000024f6c90, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, EnsureCapacity, GetNumTotalSamplesPerCell, IsGrowable, Purge, RemoveAll, Vector, VectorAdd, VertexColor_t, memcpy, operator+, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CHeightCellGrid::GetNumCells, CHeightCellGrid::GetCellConstantHeight, __cxa_guard_acquire, __cxa_guard_release, CUtlVectorBase<VertexColorPos_t, CUtlMemory<VertexColorPos_t, int> >::RemoveAll, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::SetCount, AddVertexToList, CHeightCellGrid::GetCellSecondaryHeight, CHeightCellGrid::GetCellCorners, CHeightCellGrid::ComputeCellsSamplePoints, _Unwind_Resume, CUtlMemory<Vector, int>::Purge (13 total)
// callers: CHeightMapSceneObject::ConstructVertexBuffer
// globals: `guard variable for'CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffse, CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset
void __fastcall CHeightMapSceneObject::BuildVertexList(
        CHeightMapSceneObject *const this,
        const CHeightCellGrid *const heightmap,
        CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int> > *pOutVertices)
{
  int v4; // r15d
  int v5; // ebx
  int i; // r14d
  bool CellConstantHeight; // al
  int v8; // edx
  int v9; // ebx
  VertexColorPos_t *v10; // rsi
  __int64 v11; // rax
  __m128i v12; // xmm2
  vec_t v13; // ebx
  __m128i v14; // xmm7
  vec_t v15; // r12d
  __m128i v16; // xmm3
  vec_t v17; // r15d
  __m128i v18; // xmm4
  vec_t v19; // r12d
  Vector *v20; // rbx
  unsigned int *v21; // r12
  __m128 y_low; // xmm9
  __m128 x_low; // xmm8
  float v24; // xmm6_4
  float v25; // xmm13_4
  __m128 v26; // xmm0
  __m128 v27; // xmm5
  __m128 v28; // xmm6
  __m128 v29; // xmm1
  __m128 v30; // xmm14
  VertexColorPos_t *m_pMemory; // r14
  VertexColorPos_t *v32; // rax
  Vector *pOutSamplePoints; // [rsp+18h] [rbp-138h]
  float v34; // [rsp+20h] [rbp-130h]
  float v35; // [rsp+24h] [rbp-12Ch]
  float v36; // [rsp+28h] [rbp-128h]
  float v37; // [rsp+2Ch] [rbp-124h]
  int m_nCellSamplesPerAxis; // [rsp+40h] [rbp-110h]
  int iCellY; // [rsp+44h] [rbp-10Ch]
  int iCellX; // [rsp+48h] [rbp-108h]
  float v42; // [rsp+4Ch] [rbp-104h]
  __int64 v43; // [rsp+58h] [rbp-F8h]
  unsigned int *v44; // [rsp+60h] [rbp-F0h]
  int v45; // [rsp+6Ch] [rbp-E4h]
  unsigned int *v46; // [rsp+70h] [rbp-E0h]
  int v47; // [rsp+78h] [rbp-D8h]
  float x; // [rsp+7Ch] [rbp-D4h]
  float y; // [rsp+80h] [rbp-D0h]
  float z; // [rsp+84h] [rbp-CCh]
  float v51; // [rsp+88h] [rbp-C8h]
  float v52; // [rsp+8Ch] [rbp-C4h]
  float vC_4; // [rsp+94h] [rbp-BCh]
  float vC_8; // [rsp+98h] [rbp-B8h]
  float v55; // [rsp+9Ch] [rbp-B4h]
  VertexColor_t baseColor; // [rsp+A0h] [rbp-B0h] BYREF
  VertexColor_t waterColor; // [rsp+B0h] [rbp-A0h] BYREF
  int nNumCellsX; // [rsp+C0h] [rbp-90h] BYREF
  int nNumCellsY; // [rsp+C4h] [rbp-8Ch] BYREF
  float flConstantHeight_0; // [rsp+C8h] [rbp-88h] BYREF
  float flWaterHeight; // [rsp+CCh] [rbp-84h] BYREF
  Vector2D vCellMin; // [rsp+D0h] [rbp-80h] BYREF
  Vector2D vCellMax; // [rsp+E0h] [rbp-70h] BYREF
  Vector position; // [rsp+F0h] [rbp-60h] BYREF
  float flConstantHeight; // [rsp+100h] [rbp-50h] BYREF
  CUtlMemory<Vector,int> v66[4]; // [rsp+108h] [rbp-48h] BYREF

  baseColor.color = -1;
  waterColor.color = -32736;
  if ( `guard variable for'CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset == 0
    && __cxa_guard_acquire(&`guard variable for'CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset) != 0 )
  {
    CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.x = 0.0;
    CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.y = 0.0;
    CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.z = 1.0;
    __cxa_guard_release(&`guard variable for'CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset);
  }
  nNumCellsX = 0;
  nNumCellsY = 0;
  CHeightCellGrid::GetNumCells(heightmap, &nNumCellsX, &nNumCellsY);
  m_nCellSamplesPerAxis = heightmap->m_nCellSamplesPerAxis;
  if ( nNumCellsY <= 0 )
  {
    v5 = 0;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    do
    {
      if ( nNumCellsX > 0 )
      {
        for ( i = 0; i < nNumCellsX; ++i )
        {
          flConstantHeight = 0.0;
          CellConstantHeight = CHeightCellGrid::GetCellConstantHeight(heightmap, i, v4, &flConstantHeight);
          v8 = v5 + 8;
          v9 = 4 * (m_nCellSamplesPerAxis - 1) * (m_nCellSamplesPerAxis - 1) + v5;
          if ( !CellConstantHeight )
            v8 = v9;
          v5 = v8 + 8;
        }
      }
      ++v4;
    }
    while ( nNumCellsY > v4 );
  }
  CUtlVectorBase<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>>::RemoveAll(pOutVertices);
  if ( pOutVertices->m_Memory.m_nAllocationCount < v5 && (pOutVertices->m_Memory.m_nGrowSize & 0x40000000) == 0 )
  {
    if ( (pOutVertices->m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    {
      m_pMemory = pOutVertices->m_Memory.m_pMemory;
      v32 = (**g_pMemAlloc)(g_pMemAlloc, 16LL * v5);
      pOutVertices->m_Memory.m_pMemory = v32;
      if ( m_pMemory != 0 )
        memcpy(v32, m_pMemory, 16LL * pOutVertices->m_Memory.m_nAllocationCount);
      pOutVertices->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
    }
    else
    {
      v10 = pOutVertices->m_Memory.m_pMemory;
      v11 = *g_pMemAlloc;
      if ( v10 != 0 )
        pOutVertices->m_Memory.m_pMemory = (*(v11 + 8))(g_pMemAlloc, v10, 16LL * v5);
      else
        pOutVertices->m_Memory.m_pMemory = (*v11)(g_pMemAlloc, 16LL * v5);
    }
    pOutVertices->m_Memory.m_nAllocationCount = v5;
  }
  flConstantHeight = 0.0;
  v66[0].m_pMemory = 0;
  v66[0].m_nAllocationCount = 0;
  v66[0].m_nGrowSize = 0;
  CUtlVectorBase<Vector,CUtlMemory<Vector,int>>::SetCount(
    &flConstantHeight,
    m_nCellSamplesPerAxis * m_nCellSamplesPerAxis);
  pOutSamplePoints = v66[0].m_pMemory;
  if ( nNumCellsY > 0 )
  {
    iCellY = 0;
    v43 = m_nCellSamplesPerAxis;
    do
    {
      if ( nNumCellsX > 0 )
      {
        for ( iCellX = 0; iCellX < nNumCellsX; ++iCellX )
        {
          CHeightCellGrid::GetCellCorners(heightmap, iCellX, iCellY, &vCellMin, &vCellMax);
          flConstantHeight_0 = 0.0;
          v37 = vCellMin.x
              + CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.x;
          v35 = CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.x
              + vCellMax.x;
          v36 = vCellMin.y
              + CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.y;
          v34 = CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.y
              + vCellMax.y;
          v42 = CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.z
              + 0.0;
          if ( CHeightCellGrid::GetCellConstantHeight(heightmap, iCellX, iCellY, &flConstantHeight_0) )
          {
            position.x = v37 + 0.0;
            position.y = v36 + 0.0;
            position.z = v42 + flConstantHeight_0;
            AddVertexToList(pOutVertices, &position, &baseColor);
            v12 = 0;
            *v12.m128i_i32 = v35 + 0.0;
            v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
            position.x = v35 + 0.0;
            position.y = v36 + 0.0;
            position.z = v42 + flConstantHeight_0;
            AddVertexToList(pOutVertices, &position, &baseColor);
            position.x = v13;
            position.y = v36 + 0.0;
            position.z = v42 + flConstantHeight_0;
            AddVertexToList(pOutVertices, &position, &baseColor);
            v14 = 0;
            position.x = v13;
            *v14.m128i_i32 = v34 + 0.0;
            v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
            position.y = v34 + 0.0;
            position.z = v42 + flConstantHeight_0;
            AddVertexToList(pOutVertices, &position, &baseColor);
            position.x = v13;
            position.y = v15;
            position.z = v42 + flConstantHeight_0;
            AddVertexToList(pOutVertices, &position, &baseColor);
            position.y = v15;
            position.z = v42 + flConstantHeight_0;
            position.x = v37 + 0.0;
            AddVertexToList(pOutVertices, &position, &baseColor);
            position.y = v15;
            position.z = v42 + flConstantHeight_0;
            position.x = v37 + 0.0;
            AddVertexToList(pOutVertices, &position, &baseColor);
            position.x = v37 + 0.0;
            position.y = v36 + 0.0;
            position.z = v42 + flConstantHeight_0;
            AddVertexToList(pOutVertices, &position, &baseColor);
          }
          else
          {
            v20 = pOutSamplePoints;
            CHeightCellGrid::ComputeCellsSamplePoints(heightmap, iCellX, iCellY, pOutSamplePoints);
            if ( m_nCellSamplesPerAxis - 1 > 0 )
            {
              v47 = 1;
              while ( 1 )
              {
                v45 = v47;
                v46 = &v20[(m_nCellSamplesPerAxis - 2) + 1];
                v44 = &v20[v43];
                v21 = &v20[v43];
                do
                {
                  y_low = LODWORD(v20->y);
                  z = v20->z;
                  x_low = LODWORD(v20->x);
                  y = v20->y;
                  v24 = v20[1].z;
                  x = v20->x;
                  v25 = *(v21 + 2);
                  v26.m128_i32[0] = fabs(z - v24);
                  v27 = _mm_cmpge_ss(0x43800000u, v26);
                  LODWORD(v55) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v27, LODWORD(z)).m128_f32[0])
                               | LODWORD(v24) & v27.m128_i32[0];
                  v28 = v27;
                  LODWORD(vC_4) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v28, x_low).m128_f32[0])
                                | LODWORD(v20[1].x) & v28.m128_i32[0];
                  LODWORD(vC_8) = _mm_andnot_ps(v28, y_low).m128_u32[0] | LODWORD(v20[1].y) & v28.m128_i32[0];
                  v29.m128_i32[0] = fabs(z - v25);
                  v30 = _mm_cmpge_ss(0x43800000u, v29);
                  LODWORD(v52) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v30, y_low).m128_f32[0]) | v21[1] & v30.m128_i32[0];
                  LODWORD(v51) = _mm_andnot_ps(v30, x_low).m128_u32[0] | *v21 & v30.m128_i32[0];
                  position.z = CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.z
                             + z;
                  position.x = CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.x
                             + x_low.m128_f32[0];
                  position.y = CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.y
                             + y_low.m128_f32[0];
                  AddVertexToList(pOutVertices, &position, &baseColor);
                  position.y = vC_8
                             + CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.y;
                  position.z = v55
                             + CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.z;
                  position.x = vC_4
                             + CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.x;
                  AddVertexToList(pOutVertices, &position, &baseColor);
                  position.y = y
                             + CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.y;
                  position.z = z
                             + CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.z;
                  position.x = x
                             + CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.x;
                  AddVertexToList(pOutVertices, &position, &baseColor);
                  position.y = v52
                             + CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.y;
                  position.z = COERCE_FLOAT(_mm_andnot_ps(v30, LODWORD(z)).m128_u32[0] | LODWORD(v25) & v30.m128_i32[0])
                             + CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.z;
                  position.x = v51
                             + CHeightMapSceneObject::BuildVertexList(CHeightCellGrid const&,CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>> *)::vHeightOffset.x;
                  AddVertexToList(pOutVertices, &position, &baseColor);
                  ++v20;
                  v21 += 3;
                }
                while ( v20 != v46 );
                ++v47;
                if ( m_nCellSamplesPerAxis - 1 <= v45 )
                  break;
                v20 = v44;
              }
            }
          }
          flWaterHeight = 0.0;
          CHeightCellGrid::GetCellSecondaryHeight(heightmap, iCellX, iCellY, &flWaterHeight);
          v16 = 0;
          *v16.m128i_i32 = v37 + 0.0;
          v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
          position.x = v17;
          position.z = v42 + flWaterHeight;
          position.y = v36 + 0.0;
          AddVertexToList(pOutVertices, &position, &waterColor);
          v18 = 0;
          *v18.m128i_i32 = v35 + 0.0;
          v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
          position.x = v35 + 0.0;
          position.y = v36 + 0.0;
          position.z = v42 + flWaterHeight;
          AddVertexToList(pOutVertices, &position, &waterColor);
          position.x = v19;
          position.y = v36 + 0.0;
          position.z = v42 + flWaterHeight;
          AddVertexToList(pOutVertices, &position, &waterColor);
          position.x = v19;
          position.y = v34 + 0.0;
          position.z = v42 + flWaterHeight;
          AddVertexToList(pOutVertices, &position, &waterColor);
          position.x = v19;
          position.y = v34 + 0.0;
          position.z = v42 + flWaterHeight;
          AddVertexToList(pOutVertices, &position, &waterColor);
          position.x = v17;
          position.y = v34 + 0.0;
          position.z = v42 + flWaterHeight;
          AddVertexToList(pOutVertices, &position, &waterColor);
          position.x = v17;
          position.y = v34 + 0.0;
          position.z = v42 + flWaterHeight;
          AddVertexToList(pOutVertices, &position, &waterColor);
          position.x = v17;
          position.y = v36 + 0.0;
          position.z = v42 + flWaterHeight;
          AddVertexToList(pOutVertices, &position, &waterColor);
        }
      }
      ++iCellY;
    }
    while ( nNumCellsY > iCellY );
  }
  flConstantHeight = 0.0;
  if ( (v66[0].m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(v66);
    if ( (v66[0].m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(v66);
  }
}


// CHeightMapSceneObject::ConstructVertexBuffer  (line 2439, @0x00000000024f7820, libserver.so)  // inlines: AsUint32, CRenderContextPtr, CRenderContextPtr<>, CUtlMemory, CUtlVector, CUtlVectorBase, CWeakHandle, Clear, Init, InitPreallocated, Max, Min, Purge, Release, RenderTargetDesc_t, SetBounds, operator=, operator[], ~CRenderContextPtr, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CHeightMapSceneObject::BuildVertexList, CUtlVectorBase<VertexColorPos_t, CUtlMemory<VertexColorPos_t, int> >::RemoveAll, CUtlMemory<VertexColorPos_t, int>::Purge, Warning, _Unwind_Resume
// callers: CreateHeightMapSceneObject
// strings: "HeightMapGrid", "WARNING: Trying to create a CRenderContextPtr without a valid context.\n"
void __fastcall CHeightMapSceneObject::ConstructVertexBuffer(
        CHeightMapSceneObject *const this,
        const CHeightCellGrid *const heightCellGrid)
{
  bool v3; // cc
  unsigned int v4; // eax
  int m_nNumVertices; // edx
  VertexBufferHandle_t__ *v6; // rax
  IRenderDevice *v7; // r14
  __int64 i; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  VertexColorPos_t *m_pMemory; // rcx
  _DWORD *v12; // rax
  int v13; // edx
  int v14; // esi
  unsigned __int64 v15; // rdi
  char *v16; // rdx
  _DWORD *v17; // rcx
  float *v18; // rdx
  vec_t v19; // xmm1_4
  vec_t v20; // xmm0_4
  vec_t v21; // xmm2_4
  vec_t v22; // xmm1_4
  vec_t v23; // xmm0_4
  LockDesc_t vbLock; // [rsp+0h] [rbp-110h] BYREF
  Vector vMin; // [rsp+10h] [rbp-100h] BYREF
  Vector vMax; // [rsp+20h] [rbp-F0h] BYREF
  CUtlVector<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int> > vertices; // [rsp+30h] [rbp-E0h] BYREF
  BufferDesc_t vertexBufferDesc; // [rsp+50h] [rbp-C0h] BYREF
  _QWORD v29[13]; // [rsp+70h] [rbp-A0h] BYREF
  int v30; // [rsp+D8h] [rbp-38h]
  __int16 v31; // [rsp+DCh] [rbp-34h]
  char v32; // [rsp+DEh] [rbp-32h]
  char v33; // [rsp+DFh] [rbp-31h]

  vertices.m_Size = 0;
  vertices.m_Memory.m_pMemory = 0;
  vertices.m_Memory.m_nAllocationCount = 0;
  vertices.m_Memory.m_nGrowSize = 0;
  CHeightMapSceneObject::BuildVertexList(this, heightCellGrid, &vertices);
  v3 = vertices.m_Size <= 0;
  this->m_nNumVertices = vertices.m_Size;
  if ( v3 )
  {
    CUtlVectorBase<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>>::RemoveAll(&vertices);
    if ( (vertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<VertexColorPos_t,int>::Purge(&vertices.m_Memory);
      if ( (vertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<VertexColorPos_t,int>::Purge(&vertices.m_Memory);
    }
  }
  else
  {
    v4 = (*(*g_pSceneSystem + 336LL))(g_pSceneSystem, 17, 0);
    m_nNumVertices = this->m_nNumVertices;
    vertexBufferDesc.m_pDebugName = "HeightMapGrid";
    vertexBufferDesc.m_pBudgetGroupName = "HeightMapGrid";
    vertexBufferDesc.m_nElementSizeInBytes = 16;
    vertexBufferDesc.m_nElementCount = m_nNumVertices;
    v6 = (*(*g_pRenderDevice + 264LL))(g_pRenderDevice, 0, &vertexBufferDesc, v4);
    v7 = g_pRenderDevice;
    this->m_hVertexBuffer = v6;
    memset(v29, 0, 64);
    for ( i = 0; i != 8; ++i )
    {
      v29[i] = 0;
      *(&v29[9] + i * 4) = 0;
    }
    v33 &= ~1u;
    v29[8] = 0;
    v31 = 0;
    v30 = 0;
    v32 = 0;
    v9 = (*(*v7 + 368LL))(v7, 0, 0, 0);
    v10 = v9;
    if ( v9 != 0 )
    {
      (*(*v9 + 8LL))(v9, v29);
    }
    else
    {
      Warning("WARNING: Trying to create a CRenderContextPtr without a valid context.\n");
      v10 = 0;
    }
    (*(*v10 + 408LL))(v10, this->m_hVertexBuffer, (16 * this->m_nNumVertices), &vbLock);
    m_pMemory = vertices.m_Memory.m_pMemory;
    v12 = vbLock.m_pMemory;
    vMin = vertices.m_Memory.m_pMemory->VertexPos_t;
    vMax = vertices.m_Memory.m_pMemory->VertexPos_t;
    v13 = this->m_nNumVertices;
    if ( v13 > 1 )
    {
      v14 = 1;
      v15 = 16 - vbLock.m_pMemory;
      do
      {
        v16 = v12 + v15;
        ++v14;
        v12 += 4;
        v17 = (&m_pMemory->m_vecPos.x + v16);
        *v12 = *v17;
        v12[1] = v17[1];
        v12[2] = v17[2];
        v12[3] = v17[3];
        m_pMemory = vertices.m_Memory.m_pMemory;
        v18 = (&vertices.m_Memory.m_pMemory->m_vecPos.x + v16);
        v19 = fminf(vMin.y, v18[1]);
        v20 = fminf(vMin.z, v18[2]);
        vMin.x = fminf(vMin.x, *v18);
        vMin.y = v19;
        vMin.z = v20;
        v21 = fmaxf(vMax.x, *v18);
        v22 = fmaxf(vMax.y, v18[1]);
        v23 = fmaxf(vMax.z, v18[2]);
        v13 = this->m_nNumVertices;
        vMax.x = v21;
        vMax.y = v22;
        vMax.z = v23;
      }
      while ( v13 > v14 );
    }
    (*(*v10 + 416LL))(v10, this->m_hVertexBuffer, (16 * v13), &vbLock);
    (*(*g_pSceneSystem + 232LL))(g_pSceneSystem, this, &vMin, &vMax);
    (*(*v10 + 48LL))(v10);
    (*(*v7 + 384LL))(v7, v10);
    CUtlVectorBase<VertexColorPos_t,CUtlMemory<VertexColorPos_t,int>>::RemoveAll(&vertices);
    if ( (vertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<VertexColorPos_t,int>::Purge(&vertices.m_Memory);
      if ( (vertices.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<VertexColorPos_t,int>::Purge(&vertices.m_Memory);
    }
  }
}


// CHeightMapSceneObject::Draw  (line 2483, @0x00000000024d6d70, libserver.so)  // inlines: CUtlStringToken
// callers: CGridSceneObjectDescriptor::DrawArray
void __fastcall CHeightMapSceneObject::Draw(
        const CHeightMapSceneObject *const this,
        IRenderContext *pRenderContext,
        ISceneLayer *pLayer)
{
  unsigned int v5; // r13d
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, MaterialRenderablePass_t *); // rdx
  __int64 v8; // rax
  int v9; // eax
  MaterialRenderablePass_t *v10; // r15
  MaterialRenderablePass_t *v11; // r8
  MaterialRenderablePass_t *v12; // [rsp+18h] [rbp-138h]
  MaterialRenderablePass_t passes[8]; // [rsp+20h] [rbp-130h] BYREF

  if ( this->m_hVertexBuffer != 0 )
  {
    v5 = (*(*g_pSceneSystem + 336LL))(g_pSceneSystem, 17, 0);
    v6 = (*(*g_pSceneSystem + 360LL))(g_pSceneSystem, 17);
    if ( v6 != 0 )
    {
      v7 = *(*v6 + 24LL);
      LODWORD(passes[0].pLayer) = 0;
      v8 = v7(v6, passes);
      if ( v8 != 0 )
      {
        v9 = (*(*v8 + 16LL))(v8, 0, pRenderContext, passes, 8);
        if ( v9 > 0 )
        {
          v10 = passes;
          v12 = &passes[(v9 - 1) + 1];
          do
          {
            v11 = v10++;
            (*(*g_pMaterialSystem2 + 128LL))(g_pMaterialSystem2, 0, pRenderContext, v5, v11, 0, 0x7FFFFFFF, 0);
            (*(pRenderContext->_vptr_IRenderContext + 61))(pRenderContext, 0, this->m_hVertexBuffer, 0, 0xFFFFFFFFLL);
            (*(pRenderContext->_vptr_IRenderContext + 71))(pRenderContext, 1, 0, this->m_nNumVertices);
          }
          while ( v10 != v12 );
        }
      }
    }
  }
}


// CGridSceneObjectDescriptor::Create  (line 2514, @0x000000000256af10, libserver.so)
// calls: operator new, CHeightMapSceneObject::CHeightMapSceneObject, operator delete, _Unwind_Resume
// strings: "HeightMap"
CSceneObject *__fastcall CGridSceneObjectDescriptor::Create(CGridSceneObjectDescriptor *const this)
{
  CHeightMapSceneObject *v1; // rbx
  void (__fastcall *v2)(ISceneSystem *, CHeightMapSceneObject *, _QWORD); // r13
  unsigned __int8 v3; // al

  v1 = operator new(0xB0u);
  CHeightMapSceneObject::CHeightMapSceneObject(v1);
  v2 = *(*g_pSceneSystem + 768LL);
  v3 = (*(*g_pSceneSystem + 760LL))(g_pSceneSystem, "HeightMap");
  v2(g_pSceneSystem, v1, v3);
  return v1;
}


// CGridSceneObjectDescriptor::DrawArray  (line 2521, @0x000000000256af90, libserver.so)
// calls: CHeightMapSceneObject::Draw
void __fastcall CGridSceneObjectDescriptor::DrawArray(
        CGridSceneObjectDescriptor *const this,
        IRenderContext *pCtx,
        CMeshDrawPrimitive_t *pRenderList,
        int nNumRenderablesToDraw,
        const ISceneView *pView,
        ISceneLayer *pLayer,
        SceneSystemPerFrameStats_t *const stats)
{
  CMeshDrawPrimitive_t *v8; // r12
  CMeshDrawPrimitive_t *v10; // rbx
  const CHeightMapSceneObject *m_pObject; // rdi

  if ( nNumRenderablesToDraw > 0 )
  {
    v8 = &pRenderList[(nNumRenderablesToDraw - 1) + 1];
    v10 = pRenderList;
    do
    {
      m_pObject = v10->m_pObject;
      if ( m_pObject != 0 )
        CHeightMapSceneObject::Draw(m_pObject, pCtx, pLayer);
      ++v10;
    }
    while ( v10 != v8 );
  }
}


// CreateHeightMapSceneObject  (line 2544, @0x00000000024f7c50, libserver.so)  // inlines: EnableRendering, MirrorFlags, SetProcedural
// calls: CHeightMapSceneObject::ConstructVertexBuffer
// callers: CGridNav::ShowHeightMap
// globals: s_GridSceneObjectDescriptor
CHeightMapSceneObject *__fastcall CreateHeightMapSceneObject(
        ISceneWorld *pSceneWorld,
        const CHeightCellGrid *pHeightmap)
{
  CHeightMapSceneObject *v3; // rbx
  CHeightMapSceneObject *result; // rax
  ISceneSystem *v5; // rdi

  if ( pHeightmap == 0 )
    return 0;
  v3 = (*(*g_pSceneSystem + 88LL))(g_pSceneSystem, &s_GridSceneObjectDescriptor, 0x2000064000000002LL, pSceneWorld, 0);
  result = 0;
  if ( v3 != 0 )
  {
    CHeightMapSceneObject::ConstructVertexBuffer(v3, pHeightmap);
    v5 = g_pSceneSystem;
    v3->m_nObjectTypeFlags |= 1u;
    v3->m_nRenderableFlags &= ~0x1000000000000000uLL;
    (*(*v5 + 1080LL))(v5, v3);
    return v3;
  }
  return result;
}


// CGridNav::ShowHeightMap  (line 2566, @0x00000000024f7cf0, libserver.so)  // inlines: GetMapDataForSpawnGroup
// calls: CEntitySystem::GetActiveSpawnGroupHandle, CWorldGameSystem::GetWorldInfoForSpawnGroup, CreateHeightMapSceneObject
// callers: CGridNav::UpdateDebugSceneObjects, CGridNav::GameDeactivate
// globals: CGridNav::ShowHeightMap(bool)::pHeightMapSceneObject
void __fastcall CGridNav::ShowHeightMap(const CGridNav *const this, bool bShow)
{
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  __int64 m_mapDataHandle; // rsi
  const CHeightCellGrid *v5; // rbx
  ISceneWorld *v6; // rax

  if ( bShow )
  {
    if ( CGridNav::ShowHeightMap(bool)const::pHeightMapSceneObject == 0 )
    {
      ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
      WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, ActiveSpawnGroupHandle);
      m_mapDataHandle = -1;
      if ( WorldInfoForSpawnGroup != 0 )
        m_mapDataHandle = WorldInfoForSpawnGroup->m_mapDataHandle;
      v5 = (*(*g_pDotaMapUtils + 144LL))(g_pDotaMapUtils, m_mapDataHandle);
      v6 = (*(*g_pRenderService + 240LL))(g_pRenderService);
      CGridNav::ShowHeightMap(bool)const::pHeightMapSceneObject = CreateHeightMapSceneObject(v6, v5);
    }
  }
  else if ( CGridNav::ShowHeightMap(bool)const::pHeightMapSceneObject != 0 )
  {
    (*(*g_pSceneSystem + 136LL))(g_pSceneSystem);
    CGridNav::ShowHeightMap(bool)const::pHeightMapSceneObject = 0;
  }
}


// PickRandomTraversableCell  (line 2591, @0x00000000024d6ec0, libserver.so)  // inlines: GetCellFlags, GetCellIndex
// calls: RandomInt
// callers: TimePathBuilding
bool __fastcall PickRandomTraversableCell(int nMaxTries, int *pOutX, int *pOutY)
{
  int v3; // r14d
  unsigned int m_nMinX; // r15d
  int v8; // eax
  unsigned int m_nMaxY; // [rsp+4h] [rbp-3Ch]
  unsigned int m_nMaxX; // [rsp+8h] [rbp-38h]
  unsigned int m_nMinY; // [rsp+Ch] [rbp-34h]

  v3 = 0;
  *pOutX = 0;
  *pOutY = 0;
  m_nMinX = g_GridNav.m_nMinX;
  m_nMinY = g_GridNav.m_nMinY;
  m_nMaxX = g_GridNav.m_nMaxX;
  m_nMaxY = g_GridNav.m_nMaxY;
  if ( nMaxTries <= 0 )
    return 0;
  while ( 1 )
  {
    *pOutX = RandomInt(m_nMinX, m_nMaxX);
    v8 = RandomInt(m_nMinY, m_nMaxY);
    *pOutY = v8;
    if ( (g_GridNav.m_CellFlags.m_Memory.m_pMemory[*pOutX
                                                 - g_GridNav.m_nMinX
                                                 + g_GridNav.m_nWidth * (v8 - g_GridNav.m_nMinY)]
        & 1) != 0 )
      break;
    if ( ++v3 == nMaxTries )
      return 0;
  }
  return 1;
}


// TimePathBuilding  (line 2617, @0x00000000024ff130, libserver.so)  // inlines: Base, CCycleCount, CUtlLeanVectorFixedGrowable, CUtlLeanVectorFixedGrowableBase, CUtlLeanVectorImpl, End, GetMicroseconds64, GetMilliseconds64, Init, PLAT_CPU_TIME, Plat_TickDiffMicroSec, Plat_TickDiffMilliSec, Purge, RemoveAll, Sample, Start, operator+=, ~CUtlLeanVectorFixedGrowable, ~CUtlLeanVectorFixedGrowableBase, ~CUtlLeanVectorImpl
// calls: CDOTA_PlayerResource::GetNthCourierForTeam, LoggingSystem_IsChannelEnabled, RandomSeed, PickRandomTraversableCell, CGridNav::BuildPath, Plat_GetCPUFrequency, LoggingSystem_Log, CDOTA_PlayerResource::GetPlayer, CDOTAPlayer::GetAssignedHero, CUtlLeanVectorFixedGrowableBase<unsigned char, 200u, short int>::Purge, _Unwind_Resume, __stack_chk_fail
// callers: CmdDotaGridnavPerfTest
// strings: "Took %llums to find %i paths\n", " Averge time per path: %lluus\n", "  Average path length: %.2f\n", "  Max path path length: %i\n", "Performing perf test on %i paths.\n", " Paths successful: %i\n"
// globals: g_GridNav
void __fastcall TimePathBuilding(int nNumPathsToTest)
{
  unsigned __int64 v1; // r14
  int m_nCount; // r13d
  int v3; // r12d
  int v4; // r15d
  int v5; // ecx
  unsigned __int64 v6; // rbx
  int v7; // ecx
  unsigned __int64 v8; // rax
  unsigned __int64 CPUFrequency; // rax
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(_QWORD *, CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::ElemType_t *); // rdx
  CDOTAPlayer *Player; // rax
  CDOTA_BaseNPC *pNPC; // [rsp+48h] [rbp-138h]
  int nTotalPathLength; // [rsp+50h] [rbp-130h]
  int nStartX; // [rsp+60h] [rbp-120h] BYREF
  int nStartY; // [rsp+64h] [rbp-11Ch] BYREF
  int nGoalX; // [rsp+68h] [rbp-118h] BYREF
  int nGoalY; // [rsp+6Ch] [rbp-114h] BYREF
  GridNavDirectionVec_t path; // [rsp+70h] [rbp-110h] BYREF
  unsigned __int64 v21; // [rsp+148h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( !g_GridNav.m_bLoaded )
    return;
  if ( g_pDOTAPlayerResource == 0 )
  {
LABEL_28:
    pNPC = 0;
    goto LABEL_4;
  }
  pNPC = CDOTA_PlayerResource::GetNthCourierForTeam(g_pDOTAPlayerResource, 0, 2);
  if ( pNPC == 0 )
  {
    Player = CDOTA_PlayerResource::GetPlayer(g_pDOTAPlayerResource, 0);
    if ( Player != 0 )
    {
      pNPC = CDOTAPlayer::GetAssignedHero(Player);
      goto LABEL_4;
    }
    goto LABEL_28;
  }
LABEL_4:
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    LoggingSystem_Log(LOG_SERVER, 1, "Performing perf test on %i paths.\n", nNumPathsToTest);
  v1 = 0;
  m_nCount = 0;
  RandomSeed(1);
  nStartX = 0;
  path.0 = 13369344;
  nStartY = 0;
  nGoalX = 0;
  nGoalY = 0;
  if ( nNumPathsToTest <= 0 )
  {
    nTotalPathLength = 0;
    v4 = 0;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    nTotalPathLength = 0;
    do
    {
      PickRandomTraversableCell(100, &nStartX, &nStartY);
      PickRandomTraversableCell(100, &nGoalX, &nGoalY);
      v5 = nGoalX;
      v6 = __rdtsc();
      v7 = CGridNav::BuildPath(&g_GridNav, nStartX, nStartY, v5, nGoalY, &path, 0.0, 0, pNPC, -1, 0);
      v8 = __rdtsc();
      v1 += (v8 | (HIDWORD(v8) << 32)) - v6;
      if ( v7 != 2 )
      {
        if ( m_nCount < path.m_nCount )
          m_nCount = path.m_nCount;
        ++v4;
        nTotalPathLength += m_nCount;
      }
      ++v3;
    }
    while ( v3 != nNumPathsToTest );
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    CPUFrequency = Plat_GetCPUFrequency();
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      "Took %llums to find %i paths\n",
      1000 * (v1 % CPUFrequency) / CPUFrequency + 1000 * (v1 / CPUFrequency),
      nNumPathsToTest);
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
  {
    v10 = Plat_GetCPUFrequency();
    LoggingSystem_Log(
      LOG_SERVER,
      1,
      " Averge time per path: %lluus\n",
      (1000000 * (v1 / v10) + 1000000 * (v1 % v10) / v10) / nNumPathsToTest);
  }
  if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    LoggingSystem_Log(LOG_SERVER, 1, " Paths successful: %i\n", v4);
  if ( v4 != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      LoggingSystem_Log(LOG_SERVER, 1, "  Average path length: %.2f\n", (nTotalPathLength / v4));
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      LoggingSystem_Log(LOG_SERVER, 1, "  Max path path length: %i\n", m_nCount);
  }
  path.m_nCount = 0;
  if ( path.m_nAllocated > 0xCC )
  {
    v11 = *(*g_pMemAlloc + 16LL);
    if ( path.m_nAllocated != 0 )
      v11(g_pMemAlloc, path.m_pElements);
    else
      v11(g_pMemAlloc, 0);
  }
}


// CmdDotaGridnavPerfTest  (line 2689, @0x00000000024ff680, libserver.so)  // inlines: atoi
// calls: strtol, TimePathBuilding, Msg
// strings: "Usage: dota_gridnav_perf_test < numPaths >\n"
void __fastcall CmdDotaGridnavPerfTest(const CCommandContext *const a1, const CCommand *const args)
{
  int v2; // eax

  if ( args->m_nArgc <= 1 )
  {
    Msg("Usage: dota_gridnav_perf_test < numPaths >\n");
  }
  else
  {
    v2 = strtol(args->m_ppArgv[1], 0, 10);
    TimePathBuilding(v2);
  }
}


