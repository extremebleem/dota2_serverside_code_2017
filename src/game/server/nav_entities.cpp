// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_entities.cpp:384
class CScriptNavBlocker : public CFuncNavBlocker {
public:

	static datamap_t m_DataMap;

private:

	typedef CFuncNavBlocker BaseClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CScriptNavBlocker(CScriptNavBlocker &);
	CScriptNavBlocker(CScriptNavBlocker &);
	CScriptNavBlocker();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CScriptNavBlocker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[34] GetDataDescMap
	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// sizeof = 1200
};

// src/game/server/nav_entities.cpp:422
class CFuncNavObstruction : public CBaseModelEntity, public INavObstacle {
public:

private:

	static datamap_t m_DataMap;

	bool m_bDisabled;  // +0x488
	typedef CBaseModelEntity BaseClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CFuncNavObstruction(CFuncNavObstruction &);
	CFuncNavObstruction(CFuncNavObstruction &);
	CFuncNavObstruction();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void UpdateOnRemove();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual int32 GetId();
	virtual bool IsNavAvoidanceObstacle();
	virtual bool IsNavAvoidanceObstacleActive();
	virtual float GetNavObstructionHeight();
	virtual void WorldSpaceSurroundingBounds(Vector *, Vector *);
	virtual void WorldSpaceOrientedBounds(Vector *, Vector *, Vector *, QAngle *);
	virtual ~CFuncNavObstruction();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[11] UpdateOnRemove
	// vtable[79] DrawDebugTextOverlays
	// vtable[214] GetId
	// vtable[215] IsNavAvoidanceObstacle
	// vtable[216] IsNavAvoidanceObstacleActive
	// vtable[217] GetNavObstructionHeight
	// vtable[218] WorldSpaceSurroundingBounds
	// vtable[219] WorldSpaceOrientedBounds
	// sizeof = 1168
};

// src/game/server/nav_entities.cpp:685
class IsLadderFreeFunctor {
protected:

	const const CNavLadder & m_rLadder;  // +0x0
	const CBasePlayer * m_pIgnore;  // +0x8
	IsLadderFreeFunctor(const CNavLadder &, const CBasePlayer *);
	bool operator()(CBasePlayer *);

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// NavHullCalcFromGenParamsGameDefaults  (line 38, @0x0000000002ed56f0, libserver.so)  // inlines: NavHullAny, Square<float>
// calls: Warning, NavHull_t::NavHull_t
// callers: GetNavHullForSelectionConstraints
// strings: "Entity hull is too large for navmesh generation parameters.\n", " - Entity radius = %0.2f, entity height = %0.2f.\n"
// globals: NavHullCalcFromGenParamsGameDefaults(float,float)::nWarningsRemaining
float __fastcall NavHullCalcFromGenParamsGameDefaults(float a1, float flNavHullRadius, float flNavHullHeight)
{
  int m_nAgentNumHulls; // r8d
  float v4; // xmm4_4
  __int64 v5; // rax
  uint32 v6; // esi
  float v7; // xmm3_4
  NavHull_t v12; // [rsp+20h] [rbp-20h] BYREF
  NavHull_t v13; // [rsp+30h] [rbp-10h] BYREF

  m_nAgentNumHulls = CNavGenParams::ms_NavGenParamsDefault.m_nAgentNumHulls;
  if ( m_nAgentNumHulls <= 0 )
    goto LABEL_9;
  v4 = 3.4028235e38;
  v5 = 0;
  v6 = 0;
  do
  {
    flNavHullHeight = CNavGenParams::ms_NavGenParamsDefault.m_flAgentRadius[v5];
    v7 = CNavGenParams::ms_NavGenParamsDefault.m_flAgentHeight[v5];
    if ( flNavHullHeight >= a1 && v7 >= flNavHullRadius )
    {
      flNavHullHeight = ((flNavHullHeight - a1) * (flNavHullHeight - a1))
                      + ((v7 - flNavHullRadius) * (v7 - flNavHullRadius));
      if ( v4 > flNavHullHeight )
      {
        v4 = flNavHullHeight;
        v6 = 1 << v5;
      }
    }
    ++v5;
  }
  while ( m_nAgentNumHulls > v5 );
  if ( v6 != 0 )
  {
    NavHull_t::NavHull_t(&v12, flNavHullRadius, flNavHullHeight, v6);
    return v12.m_flHullHeight;
  }
  else
  {
LABEL_9:
    if ( NavHullCalcFromGenParamsGameDefaults(float,float)::nWarningsRemaining-- > 0 )
    {
      Warning("Entity hull is too large for navmesh generation parameters.\n");
      Warning(" - Entity radius = %0.2f, entity height = %0.2f.\n", a1, flNavHullRadius);
    }
    NavHull_t::NavHull_t(&v13, -1.0, flNavHullHeight, 7u);
    return v13.m_flHullHeight;
  }
}


// CNavPhysicsInterface::Nav_CheckAreaOverlappingEntity  (line 81, @0x0000000002ecba50, libserver.so)  // inlines: CGameQueryAttributes, CResourceArray, CResourceArrayBase, CTransform, CrossProduct, DotProduct, GetExtent, GetVert, Init, QuaternionAligned, RnHullBox_t, RnHullTriangle_t, RnHull_t, RnPlane_t, RnQueryAttr_t, RnQueryShapeAttr_t, VectorAdd, VectorAligned, VectorDivide, VectorMax, VectorMin, VectorMultiply, VectorSubtract, WriteDirect, fpmax, fpmin, operator*, operator+, operator-, operator/, operator=
// calls: CGamePhysicsQueryInterface::CheckShapeOverlapAgainstEntity, VectorNormalize
bool __fastcall CNavPhysicsInterface::Nav_CheckAreaOverlappingEntity(
        CNavPhysicsInterface *const this,
        const CNavArea *const rArea,
        const CBaseEntity *const rEntity,
        bool bExtrudeHullHeight)
{
  float z; // xmm4_4
  float x; // xmm8_4
  float y; // xmm7_4
  vec_t v10; // xmm2_4
  float v11; // xmm6_4
  float v12; // xmm5_4
  vec_t v13; // xmm3_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  vec_t w; // xmm6_4
  bool result; // al
  float v18; // xmm4_4
  float v19; // xmm1_4
  float v20; // xmm5_4
  float v21; // xmm2_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm3_4
  vec_t v27; // xmm11_4
  float v28; // xmm4_4
  float v29; // xmm1_4
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm2_4
  float v33; // xmm7_4
  float v34; // xmm8_4
  float v35; // xmm3_4
  float v36; // xmm9_4
  float v37; // [rsp+8h] [rbp-388h]
  float v38; // [rsp+Ch] [rbp-384h]
  float v39; // [rsp+14h] [rbp-37Ch]
  float v40; // [rsp+18h] [rbp-378h]
  float v41; // [rsp+1Ch] [rbp-374h]
  float v42; // [rsp+20h] [rbp-370h]
  float v43; // [rsp+28h] [rbp-368h]
  float v44; // [rsp+28h] [rbp-368h]
  vec_t v45; // [rsp+2Ch] [rbp-364h]
  float v46; // [rsp+2Ch] [rbp-364h]
  vec_t v47; // [rsp+30h] [rbp-360h]
  vec_t v48; // [rsp+34h] [rbp-35Ch]
  float v49; // [rsp+34h] [rbp-35Ch]
  vec_t v50; // [rsp+38h] [rbp-358h]
  float v51; // [rsp+38h] [rbp-358h]
  vec_t v52; // [rsp+3Ch] [rbp-354h]
  float v53; // [rsp+3Ch] [rbp-354h]
  vec_t v54; // [rsp+40h] [rbp-350h]
  float v55; // [rsp+40h] [rbp-350h]
  vec_t v56; // [rsp+44h] [rbp-34Ch]
  RnHull_t *pHull; // [rsp+48h] [rbp-348h]
  float pHulla; // [rsp+48h] [rbp-348h]
  CTransform xform; // [rsp+50h] [rbp-340h] BYREF
  CGameQueryAttributes filter; // [rsp+70h] [rbp-320h] BYREF
  RnHullTriangle_t areaTriangle; // [rsp+A0h] [rbp-2F0h] BYREF
  RnHullBox_t areaBox; // [rsp+1A0h] [rbp-1F0h] BYREF

  filter.m_nHierarchyId = 0;
  memset(&filter, 0, 24);
  filter.m_nEntityIdToIgnore = -1;
  filter.m_nCollisionGroup = 0;
  filter.m_nObjectSetMask = 7;
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  memset(&areaTriangle.m_Vertices, 0, 32);
  memset(&areaBox.m_Vertices, 0, 32);
  if ( bExtrudeHullHeight )
  {
    z = rArea->m_Extent.hi.z;
    x = rArea->m_Extent.lo.x;
    y = rArea->m_Extent.lo.y;
    v10 = rArea->m_Extent.lo.z - 71.0;
    v11 = rArea->m_Extent.hi.x;
    v12 = rArea->m_Extent.hi.y;
    v13 = (x + v11) * 0.5;
    v14 = (y + v12) * 0.5;
    v15 = (z + v10) * 0.5;
    areaBox.m_vCentroid.x = v13;
    areaBox.m_vCentroid.y = v14;
    areaBox.m_vCentroid.z = v15;
    areaBox.m_BoxVertices[0].x = v13 + (v11 - v13);
    areaBox.m_BoxVertices[0].y = v14 + (v12 - v14);
    areaBox.m_BoxVertices[0].z = v15 + (z - v15);
    areaBox.m_BoxVertices[1].y = areaBox.m_BoxVertices[0].y;
    areaBox.m_BoxVertices[1].z = areaBox.m_BoxVertices[0].z;
    areaBox.m_BoxVertices[1].x = v13 - (v11 - v13);
    areaBox.m_BoxVertices[2].x = areaBox.m_BoxVertices[1].x;
    areaBox.m_BoxVertices[2].y = v14 - (v12 - v14);
    areaBox.m_BoxVertices[2].z = areaBox.m_BoxVertices[0].z;
    areaBox.m_BoxVertices[3].x = areaBox.m_BoxVertices[0].x;
    areaBox.m_BoxVertices[3].y = areaBox.m_BoxVertices[2].y;
    areaBox.m_BoxVertices[3].z = areaBox.m_BoxVertices[0].z;
    areaBox.m_BoxVertices[4].x = areaBox.m_BoxVertices[0].x;
    areaBox.m_BoxVertices[4].y = areaBox.m_BoxVertices[0].y;
    areaBox.m_BoxVertices[4].z = v15 - (z - v15);
    areaBox.m_BoxVertices[5].x = areaBox.m_BoxVertices[1].x;
    areaBox.m_BoxVertices[5].y = areaBox.m_BoxVertices[0].y;
    areaBox.m_BoxVertices[5].z = areaBox.m_BoxVertices[4].z;
    areaBox.m_BoxVertices[6].x = areaBox.m_BoxVertices[1].x;
    areaBox.m_BoxVertices[6].y = areaBox.m_BoxVertices[2].y;
    areaBox.m_BoxVertices[6].z = areaBox.m_BoxVertices[4].z;
    areaBox.m_BoxVertices[7].x = areaBox.m_BoxVertices[0].x;
    areaBox.m_BoxVertices[7].y = areaBox.m_BoxVertices[2].y;
    areaBox.m_BoxVertices[7].z = areaBox.m_BoxVertices[4].z;
    areaBox.m_BoxPlanes[0].m_vNormal.y = -0.0;
    areaBox.m_BoxPlanes[0].m_vNormal.z = -0.0;
    areaBox.m_BoxPlanes[2].m_vNormal.x = -0.0;
    areaBox.m_BoxPlanes[2].m_vNormal.z = -0.0;
    areaBox.m_BoxPlanes[4].m_vNormal.x = -0.0;
    areaBox.m_BoxPlanes[4].m_vNormal.y = -0.0;
    areaBox.m_Vertices.m_nOffset = 132;
    areaBox.m_Vertices.m_nCount = 8;
    areaBox.m_BoxPlanes[0].m_vNormal.x = -1.0;
    areaBox.m_BoxPlanes[1].m_vNormal.x = 1.0;
    areaBox.m_BoxPlanes[2].m_vNormal.y = -1.0;
    areaBox.m_BoxPlanes[0].m_flOffset = ((y * -0.0) - x) + (v10 * -0.0);
    areaBox.m_BoxPlanes[1].m_vNormal.y = 0.0;
    areaBox.m_BoxPlanes[1].m_vNormal.z = 0.0;
    areaBox.m_BoxPlanes[3].m_vNormal.x = 0.0;
    areaBox.m_BoxPlanes[3].m_vNormal.z = 0.0;
    areaBox.m_BoxPlanes[5].m_vNormal.x = 0.0;
    areaBox.m_BoxPlanes[5].m_vNormal.y = 0.0;
    areaBox.m_BoxPlanes[3].m_vNormal.y = 1.0;
    areaBox.m_BoxPlanes[4].m_vNormal.z = -1.0;
    areaBox.m_BoxPlanes[4].m_flOffset = ((y * -0.0) + (x * -0.0)) - v10;
    areaBox.m_BoxPlanes[1].m_flOffset = (v11 + (v12 * 0.0)) + (z * 0.0);
    areaBox.m_BoxPlanes[5].m_vNormal.z = 1.0;
    areaBox.m_Planes.m_nOffset = 220;
    areaBox.m_Planes.m_nCount = 6;
    areaBox.m_BoxEdges[0].m_nNext = 2;
    areaBox.m_BoxEdges[0].m_nTwin = 1;
    areaBox.m_BoxEdges[0].m_nOrigin = 2;
    areaBox.m_BoxPlanes[2].m_flOffset = ((x * -0.0) - y) + (v10 * -0.0);
    areaBox.m_BoxPlanes[3].m_flOffset = (v12 + (v11 * 0.0)) + (z * 0.0);
    areaBox.m_BoxPlanes[5].m_flOffset = ((v12 * 0.0) + (v11 * 0.0)) + z;
    areaBox.m_BoxEdges[0].m_nFace = 0;
    areaBox.m_BoxEdges[1].m_nNext = 17;
    areaBox.m_BoxEdges[1].m_nTwin = 0;
    areaBox.m_BoxEdges[1].m_nOrigin = 1;
    areaBox.m_BoxEdges[1].m_nFace = 5;
    areaBox.m_BoxEdges[2].m_nNext = 4;
    areaBox.m_BoxEdges[2].m_nTwin = 3;
    areaBox.m_BoxEdges[2].m_nOrigin = 1;
    areaBox.m_BoxEdges[2].m_nFace = 0;
    areaBox.m_BoxEdges[3].m_nNext = 20;
    areaBox.m_BoxEdges[3].m_nTwin = 2;
    areaBox.m_BoxEdges[3].m_nOrigin = 5;
    areaBox.m_BoxEdges[3].m_nFace = 3;
    areaBox.m_BoxEdges[4].m_nNext = 6;
    areaBox.m_BoxEdges[4].m_nTwin = 5;
    areaBox.m_BoxEdges[4].m_nOrigin = 5;
    areaBox.m_BoxEdges[4].m_nFace = 0;
    areaBox.m_BoxEdges[5].m_nNext = 23;
    areaBox.m_BoxEdges[5].m_nTwin = 4;
    areaBox.m_BoxEdges[5].m_nOrigin = 6;
    areaBox.m_BoxEdges[5].m_nFace = 4;
    areaBox.m_BoxEdges[6].m_nNext = 0;
    areaBox.m_BoxEdges[6].m_nTwin = 7;
    areaBox.m_BoxEdges[6].m_nOrigin = 6;
    areaBox.m_BoxEdges[6].m_nFace = 0;
    areaBox.m_BoxEdges[7].m_nNext = 18;
    areaBox.m_BoxEdges[7].m_nTwin = 6;
    areaBox.m_BoxEdges[7].m_nOrigin = 2;
    areaBox.m_BoxEdges[7].m_nFace = 2;
    strcpy(&areaBox.m_BoxEdges[8], "\n\t");
    areaBox.m_BoxEdges[8].m_nFace = 1;
    areaBox.m_BoxEdges[9].m_nNext = 21;
    areaBox.m_BoxEdges[9].m_nTwin = 8;
    areaBox.m_BoxEdges[9].m_nOrigin = 3;
    areaBox.m_BoxEdges[9].m_nFace = 5;
    areaBox.m_BoxEdges[10].m_nNext = 12;
    areaBox.m_BoxEdges[10].m_nTwin = 11;
    areaBox.m_BoxEdges[10].m_nOrigin = 3;
    areaBox.m_BoxEdges[10].m_nFace = 1;
    areaBox.m_BoxEdges[11].m_nNext = 16;
    areaBox.m_BoxEdges[11].m_nTwin = 10;
    areaBox.m_BoxEdges[11].m_nOrigin = 7;
    areaBox.m_BoxEdges[11].m_nFace = 2;
    areaBox.m_BoxEdges[12].m_nNext = 14;
    areaBox.m_BoxEdges[12].m_nTwin = 13;
    areaBox.m_BoxEdges[12].m_nOrigin = 7;
    areaBox.m_BoxEdges[12].m_nFace = 1;
    areaBox.m_BoxEdges[13].m_nNext = 19;
    areaBox.m_BoxEdges[13].m_nTwin = 12;
    areaBox.m_BoxEdges[13].m_nOrigin = 4;
    areaBox.m_BoxEdges[13].m_nFace = 4;
    areaBox.m_BoxEdges[14].m_nNext = 8;
    areaBox.m_BoxEdges[14].m_nTwin = 15;
    areaBox.m_BoxEdges[14].m_nOrigin = 4;
    areaBox.m_BoxEdges[14].m_nFace = 1;
    areaBox.m_BoxEdges[15].m_nNext = 22;
    areaBox.m_BoxEdges[15].m_nTwin = 14;
    areaBox.m_BoxEdges[15].m_nOrigin = 0;
    areaBox.m_BoxEdges[15].m_nFace = 3;
    areaBox.m_BoxEdges[16].m_nNext = 7;
    areaBox.m_BoxEdges[16].m_nTwin = 17;
    areaBox.m_BoxEdges[16].m_nOrigin = 3;
    areaBox.m_BoxEdges[16].m_nFace = 2;
    areaBox.m_BoxEdges[17].m_nNext = 9;
    areaBox.m_BoxEdges[17].m_nTwin = 16;
    areaBox.m_BoxEdges[17].m_nOrigin = 2;
    areaBox.m_BoxEdges[17].m_nFace = 5;
    areaBox.m_BoxEdges[18].m_nNext = 11;
    areaBox.m_BoxEdges[18].m_nTwin = 19;
    areaBox.m_BoxEdges[18].m_nOrigin = 6;
    areaBox.m_BoxEdges[18].m_nFace = 2;
    areaBox.m_BoxEdges[19].m_nNext = 5;
    areaBox.m_BoxEdges[19].m_nTwin = 18;
    areaBox.m_BoxEdges[19].m_nOrigin = 7;
    areaBox.m_BoxEdges[19].m_nFace = 4;
    areaBox.m_BoxEdges[20].m_nNext = 15;
    areaBox.m_BoxEdges[20].m_nTwin = 21;
    areaBox.m_BoxEdges[20].m_nOrigin = 1;
    areaBox.m_BoxEdges[20].m_nFace = 3;
    areaBox.m_BoxEdges[21].m_nNext = 1;
    areaBox.m_BoxEdges[21].m_nTwin = 20;
    areaBox.m_BoxEdges[21].m_nOrigin = 0;
    areaBox.m_BoxEdges[21].m_nFace = 5;
    areaBox.m_BoxEdges[22].m_nNext = 3;
    areaBox.m_BoxEdges[22].m_nTwin = 23;
    areaBox.m_BoxEdges[22].m_nOrigin = 4;
    areaBox.m_BoxEdges[22].m_nFace = 3;
    areaBox.m_BoxEdges[23].m_nNext = 13;
    areaBox.m_BoxEdges[23].m_nTwin = 22;
    areaBox.m_BoxEdges[23].m_nOrigin = 5;
    areaBox.m_BoxEdges[23].m_nFace = 4;
    areaBox.m_Edges.m_nOffset = 308;
    areaBox.m_Edges.m_nCount = 24;
    areaBox.m_BoxFaces[0].m_nEdge = 0;
    areaBox.m_BoxFaces[1].m_nEdge = 8;
    areaBox.m_BoxFaces[2].m_nEdge = 16;
    areaBox.m_BoxFaces[3].m_nEdge = 20;
    areaBox.m_BoxFaces[4].m_nEdge = 19;
    areaBox.m_BoxFaces[5].m_nEdge = 21;
    areaBox.m_Faces.m_nOffset = 396;
    areaBox.m_Faces.m_nCount = 6;
    areaBox.m_Bounds.m_vMinBounds.x = x;
    areaBox.m_Bounds.m_vMinBounds.y = y;
    areaBox.m_Bounds.m_vMinBounds.z = v10;
    areaBox.m_Bounds.m_vMaxBounds.x = v11;
    areaBox.m_Bounds.m_vMaxBounds.y = v12;
    areaBox.m_Bounds.m_vMaxBounds.z = z;
    pHull = &areaBox;
  }
  else
  {
    v18 = rArea->m_vVerts[1].x;
    areaTriangle.m_Vertices.m_nOffset = 132;
    v19 = rArea->m_vVerts[0].x;
    areaTriangle.m_Vertices.m_nCount = 3;
    v20 = rArea->m_vVerts[2].x;
    areaTriangle.m_TriangleVertices[1].x = v18;
    v21 = rArea->m_vVerts[0].y;
    v49 = v18;
    areaTriangle.m_TriangleVertices[0].x = v19;
    v22 = rArea->m_vVerts[1].y;
    areaTriangle.m_TriangleVertices[0].y = v21;
    v23 = rArea->m_vVerts[2].y;
    areaTriangle.m_TriangleVertices[2].x = v20;
    v24 = rArea->m_vVerts[1].z;
    areaTriangle.m_TriangleVertices[1].y = v22;
    v25 = rArea->m_vVerts[2].z;
    areaTriangle.m_TriangleVertices[0].z = rArea->m_vVerts[0].z;
    areaTriangle.m_TriangleVertices[2].y = v23;
    areaTriangle.m_TriangleVertices[1].z = v24;
    areaTriangle.m_vCentroid.x = ((v18 + v19) + v20) * 0.33333334;
    v43 = v20;
    v46 = v23;
    areaTriangle.m_TriangleVertices[2].z = v25;
    v51 = v19;
    v53 = v22;
    v55 = v21;
    pHulla = areaTriangle.m_TriangleVertices[0].z;
    areaTriangle.m_vCentroid.y = ((v21 + v22) + v23) * 0.33333334;
    areaTriangle.m_vCentroid.z = ((v24 + areaTriangle.m_TriangleVertices[0].z) + v25) * 0.33333334;
    xform.m_vPosition.x = ((v25 - areaTriangle.m_TriangleVertices[0].z) * (v22 - v21))
                        - ((v23 - v21) * (v24 - areaTriangle.m_TriangleVertices[0].z));
    xform.m_vPosition.y = ((v24 - areaTriangle.m_TriangleVertices[0].z) * (v20 - v19))
                        - ((v25 - areaTriangle.m_TriangleVertices[0].z) * (v18 - v19));
    xform.m_vPosition.z = ((v18 - v19) * (v23 - v21)) - ((v22 - v21) * (v20 - v19));
    VectorNormalize(&xform.m_vPosition);
    areaTriangle.m_Planes.m_nOffset = 160;
    areaTriangle.m_TriangleEdges[0].m_nNext = 2;
    areaTriangle.m_TriangleEdges[0].m_nTwin = 1;
    areaTriangle.m_Planes.m_nCount = 2;
    areaTriangle.m_TriangleEdges[0].m_nOrigin = 0;
    v26 = pHulla;
    areaTriangle.m_TrianglePlanes[0].m_vNormal = xform.m_vPosition.Vector;
    areaTriangle.m_TriangleEdges[0].m_nFace = 0;
    areaTriangle.m_TriangleEdges[1].m_nNext = 5;
    areaTriangle.m_TriangleEdges[1].m_nTwin = 0;
    areaTriangle.m_TriangleEdges[1].m_nOrigin = 1;
    areaTriangle.m_TriangleEdges[1].m_nFace = 1;
    areaTriangle.m_TriangleEdges[2].m_nNext = 4;
    areaTriangle.m_TriangleEdges[2].m_nTwin = 3;
    areaTriangle.m_TriangleEdges[2].m_nOrigin = 1;
    areaTriangle.m_TriangleEdges[2].m_nFace = 0;
    areaTriangle.m_TrianglePlanes[0].m_flOffset = ((v51 * xform.m_vPosition.x) + (v55 * xform.m_vPosition.y))
                                                + (pHulla * xform.m_vPosition.z);
    areaTriangle.m_TriangleEdges[3].m_nNext = 1;
    areaTriangle.m_TrianglePlanes[1].m_vNormal.y = -xform.m_vPosition.y;
    areaTriangle.m_TriangleEdges[3].m_nTwin = 2;
    areaTriangle.m_TrianglePlanes[1].m_vNormal.z = -xform.m_vPosition.z;
    areaTriangle.m_TrianglePlanes[1].m_vNormal.x = -xform.m_vPosition.x;
    areaTriangle.m_TriangleEdges[3].m_nOrigin = 2;
    areaTriangle.m_TriangleEdges[3].m_nFace = 1;
    areaTriangle.m_TrianglePlanes[1].m_flOffset = ((-xform.m_vPosition.x * v51) + (-xform.m_vPosition.y * v55))
                                                + (-xform.m_vPosition.z * pHulla);
    areaTriangle.m_TriangleEdges[4].m_nNext = 0;
    areaTriangle.m_TriangleEdges[4].m_nTwin = 5;
    areaTriangle.m_TriangleEdges[4].m_nOrigin = 2;
    areaTriangle.m_TriangleEdges[4].m_nFace = 0;
    areaTriangle.m_TriangleEdges[5].m_nNext = 3;
    areaTriangle.m_TriangleEdges[5].m_nTwin = 4;
    areaTriangle.m_TriangleEdges[5].m_nOrigin = 0;
    areaTriangle.m_TriangleEdges[5].m_nFace = 1;
    areaTriangle.m_TriangleFaces[0].m_nEdge = 0;
    areaTriangle.m_TriangleFaces[1].m_nEdge = 1;
    v27 = fminf(pHulla, fminf(v24, v25));
    pHull = &areaTriangle;
    areaTriangle.m_Edges.m_nOffset = 184;
    areaTriangle.m_Edges.m_nCount = 6;
    areaTriangle.m_Faces.m_nOffset = 200;
    areaTriangle.m_Faces.m_nCount = 2;
    areaTriangle.m_Bounds.m_vMinBounds.y = fminf(v55, fminf(v53, v46));
    areaTriangle.m_Bounds.m_vMinBounds.z = v27;
    areaTriangle.m_Bounds.m_vMaxBounds.z = fmaxf(v26, fmaxf(v24, v25));
    areaTriangle.m_Bounds.m_vMinBounds.x = fminf(v51, fminf(v49, v43));
    areaTriangle.m_Bounds.m_vMaxBounds.y = fmaxf(v55, fmaxf(v53, v46));
    areaTriangle.m_Bounds.m_vMaxBounds.x = fmaxf(v51, fmaxf(v49, v43));
  }
  xform.m_vPosition.w = 0.0;
  v56 = vec3_origin.z;
  v54 = vec3_origin.y;
  xform.m_vPosition.y = v54;
  xform.m_vPosition.z = v56;
  v47 = vec3_origin.x;
  w = quat_identity.w;
  xform.m_vPosition.x = vec3_origin.x;
  v52 = w;
  v50 = quat_identity.z;
  v48 = quat_identity.y;
  v45 = quat_identity.x;
  xform.m_orientation.x = quat_identity.x;
  xform.m_orientation.y = v48;
  xform.m_orientation.z = v50;
  xform.m_orientation.w = w;
  result = CGamePhysicsQueryInterface::CheckShapeOverlapAgainstEntity(g_pPhysicsQuery, &xform, pHull, &filter, rEntity);
  if ( !result && rArea->m_nVerts == 4 && !bExtrudeHullHeight )
  {
    v28 = rArea->m_vVerts[3].x;
    areaTriangle.m_Vertices.m_nOffset = 132;
    v29 = rArea->m_vVerts[2].x;
    areaTriangle.m_Vertices.m_nCount = 3;
    v30 = rArea->m_vVerts[0].x;
    areaTriangle.m_TriangleVertices[1].x = v28;
    v31 = rArea->m_vVerts[3].y;
    areaTriangle.m_TriangleVertices[0].x = v29;
    areaTriangle.m_TriangleVertices[2].x = v30;
    v32 = rArea->m_vVerts[2].y;
    v33 = rArea->m_vVerts[0].y;
    areaTriangle.m_TriangleVertices[1].y = v31;
    v34 = rArea->m_vVerts[3].z;
    v41 = v31;
    v35 = rArea->m_vVerts[2].z;
    areaTriangle.m_TriangleVertices[0].y = v32;
    v36 = rArea->m_vVerts[0].z;
    areaTriangle.m_TriangleVertices[0].z = v35;
    areaTriangle.m_TriangleVertices[2].y = v33;
    areaTriangle.m_TriangleVertices[1].z = v34;
    areaTriangle.m_vCentroid.x = ((v28 + v29) + v30) * 0.33333334;
    v37 = v30;
    v38 = v33;
    areaTriangle.m_TriangleVertices[2].z = v36;
    v39 = v28;
    v40 = v29;
    v42 = v32;
    v44 = v35;
    areaTriangle.m_vCentroid.y = ((v31 + v32) + v33) * 0.33333334;
    areaTriangle.m_vCentroid.z = ((v34 + v35) + v36) * 0.33333334;
    xform.m_vPosition.x = ((v36 - v35) * (v31 - v32)) - ((v33 - v32) * (v34 - v35));
    xform.m_vPosition.y = ((v34 - v35) * (v30 - v29)) - ((v36 - v35) * (v28 - v29));
    xform.m_vPosition.z = ((v28 - v29) * (v33 - v32)) - ((v31 - v32) * (v30 - v29));
    VectorNormalize(&xform.m_vPosition);
    areaTriangle.m_TriangleEdges[0].m_nNext = 2;
    areaTriangle.m_TriangleEdges[0].m_nTwin = 1;
    areaTriangle.m_TrianglePlanes[0].m_vNormal = xform.m_vPosition.Vector;
    areaTriangle.m_Planes.m_nOffset = 160;
    areaTriangle.m_Planes.m_nCount = 2;
    areaTriangle.m_TriangleEdges[0].m_nOrigin = 0;
    areaTriangle.m_TriangleEdges[0].m_nFace = 0;
    areaTriangle.m_TriangleEdges[1].m_nNext = 5;
    areaTriangle.m_TriangleEdges[1].m_nTwin = 0;
    areaTriangle.m_TriangleEdges[1].m_nOrigin = 1;
    areaTriangle.m_TriangleEdges[1].m_nFace = 1;
    areaTriangle.m_TriangleEdges[2].m_nNext = 4;
    areaTriangle.m_TrianglePlanes[0].m_flOffset = ((v40 * xform.m_vPosition.x) + (v42 * xform.m_vPosition.y))
                                                + (v44 * xform.m_vPosition.z);
    areaTriangle.m_TriangleEdges[2].m_nTwin = 3;
    areaTriangle.m_TrianglePlanes[1].m_vNormal.y = -xform.m_vPosition.y;
    areaTriangle.m_TriangleEdges[2].m_nOrigin = 1;
    areaTriangle.m_TrianglePlanes[1].m_vNormal.z = -xform.m_vPosition.z;
    areaTriangle.m_TrianglePlanes[1].m_vNormal.x = -xform.m_vPosition.x;
    areaTriangle.m_TriangleEdges[2].m_nFace = 0;
    areaTriangle.m_TriangleEdges[3].m_nNext = 1;
    areaTriangle.m_TriangleEdges[3].m_nTwin = 2;
    areaTriangle.m_TriangleEdges[3].m_nOrigin = 2;
    areaTriangle.m_TriangleEdges[3].m_nFace = 1;
    areaTriangle.m_TrianglePlanes[1].m_flOffset = ((-xform.m_vPosition.x * v40) + (-xform.m_vPosition.y * v42))
                                                + (-xform.m_vPosition.z * v44);
    areaTriangle.m_TriangleEdges[4].m_nNext = 0;
    areaTriangle.m_TriangleEdges[4].m_nTwin = 5;
    areaTriangle.m_TriangleEdges[4].m_nOrigin = 2;
    areaTriangle.m_TriangleEdges[4].m_nFace = 0;
    areaTriangle.m_TriangleEdges[5].m_nNext = 3;
    areaTriangle.m_TriangleEdges[5].m_nTwin = 4;
    areaTriangle.m_TriangleEdges[5].m_nOrigin = 0;
    areaTriangle.m_TriangleEdges[5].m_nFace = 1;
    areaTriangle.m_TriangleFaces[0].m_nEdge = 0;
    areaTriangle.m_Edges.m_nOffset = 184;
    areaTriangle.m_TriangleFaces[1].m_nEdge = 1;
    areaTriangle.m_Edges.m_nCount = 6;
    areaTriangle.m_Faces.m_nOffset = 200;
    xform.m_vPosition.x = v47;
    areaTriangle.m_Faces.m_nCount = 2;
    xform.m_vPosition.y = v54;
    areaTriangle.m_Bounds.m_vMinBounds.y = fminf(v42, fminf(v41, v38));
    xform.m_vPosition.z = v56;
    areaTriangle.m_Bounds.m_vMinBounds.x = fminf(v40, fminf(v39, v37));
    areaTriangle.m_Bounds.m_vMinBounds.z = fminf(v44, fminf(v34, v36));
    areaTriangle.m_Bounds.m_vMaxBounds.x = fmaxf(v40, fmaxf(v39, v37));
    areaTriangle.m_Bounds.m_vMaxBounds.y = fmaxf(v42, fmaxf(v41, v38));
    areaTriangle.m_Bounds.m_vMaxBounds.z = fmaxf(v44, fmaxf(v34, v36));
    xform.m_vPosition.w = 0.0;
    xform.m_orientation.x = v45;
    xform.m_orientation.y = v48;
    xform.m_orientation.z = v50;
    xform.m_orientation.w = v52;
    return CGamePhysicsQueryInterface::CheckShapeOverlapAgainstEntity(g_pPhysicsQuery, &xform, pHull, &filter, rEntity);
  }
  return result;
}


// CNavPhysicsInterface::Nav_GetEntityWorldSpaceAABB  (line 132, @0x0000000002ec6d70, libserver.so)  // inlines: WorldSpaceAABB, operator=
// calls: CCollisionProperty::CollisionAABBToWorldAABB, CBaseEntity::GetAbsOrigin
void __fastcall CNavPhysicsInterface::Nav_GetEntityWorldSpaceAABB(
        CNavPhysicsInterface *const this,
        const CBaseEntity *const rEntity,
        Vector *pMinsOut,
        Vector *pMaxsOut)
{
  CCollisionProperty *m_pCollision; // rdi
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm0_4

  if ( pMinsOut != 0 && pMaxsOut != 0 )
  {
    m_pCollision = rEntity->m_pCollision;
    if ( m_pCollision != 0 )
    {
      CCollisionProperty::CollisionAABBToWorldAABB(
        m_pCollision,
        &m_pCollision->m_vecMins.m_Value,
        &m_pCollision->m_vecMaxs.m_Value,
        pMinsOut,
        pMaxsOut);
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(rEntity);
      x = AbsOrigin->x;
      *pMinsOut = *AbsOrigin;
      pMaxsOut->x = x;
      pMaxsOut->y = pMinsOut->y;
      pMaxsOut->z = pMinsOut->z;
    }
  }
}


// CFuncNavBlocker::GetDataDescMap  (line 147, @0x0000000002ec67c0, libserver.so)
// globals: CFuncNavBlocker::m_DataMap
datamap_t *__fastcall CFuncNavBlocker::GetDataDescMap(CFuncNavBlocker *const this)
{
  return &CFuncNavBlocker::m_DataMap;
}


// CFuncNavBlocker::AddDatadescMetadataKeys  (line 147, @0x0000000002ed6090, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncNavBlocker::GetEntityClass(void)
void __fastcall CFuncNavBlocker::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncNavBlocker::GetEntityClass);
}


// CFuncNavBlocker::GetBaseMap  (line 147, @0x0000000002ed60b0, libserver.so)
datamap_t *__cdecl CFuncNavBlocker::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncNavBlocker>  (line 147, @0x0000000002ed60c0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_nav_mesh_02.cpp
// strings: "CFuncNavBlocker"
// globals: `guard variable for'DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::nameHolder, CFuncNavBlocker::GetEntityClass(void), CFuncNavBlocker::m_DataMap, DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::nameHolder.m_pszBase = "CFuncNavBlocker";
    DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::nameHolder,
      &_dso_handle);
  }
  CFuncNavBlocker::m_DataMap.dataNumFields = 7;
  CFuncNavBlocker::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CFuncNavBlocker::m_DataMap.dataDesc = &DataMapInit<CFuncNavBlocker>(CFuncNavBlocker *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncNavBlocker::m_DataMap, CFuncNavBlocker::GetEntityClass);
  return &CFuncNavBlocker::m_DataMap;
}


// CFuncNavBlocker::DrawDebugTextOverlays  (line 169, @0x0000000002eeb4c0, libserver.so)  // inlines: CFmtStrN, CUtlMemory, CUtlVector, CUtlVectorBase, Extent, GetExtent, Init, InitExtent, InitQuietTruncation, IsBlockingNav, NavAreaCollector, Purge, RemoveAll, WorldSpaceSurroundingBounds, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NavAreaCollector
// calls: CBaseEntity::DrawDebugTextOverlays, CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>, GetGlobalTeam, CFmtStrN<256, false>::sprintf, CBaseEntity::EntityText, CUtlMemory<CNavArea*, int>::Purge, CBaseEntity::GetAbsOrigin, __stack_chk_fail, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "blocking team %s", "blocking team %d"
int __fastcall CFuncNavBlocker::DrawDebugTextOverlays(
        CFuncNavBlocker *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r13
  char v4; // r12
  int v6; // r15d
  CCollisionProperty *m_pCollision; // rdi
  __int64 v8; // r12
  int v9; // ebx
  CTeam *GlobalTeam; // rax
  const char *v12; // rax
  const char *v13; // rax
  const Vector *AbsOrigin; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  int offset; // [rsp+2Ch] [rbp-1B4h]
  Extent collectorExtent; // [rsp+30h] [rbp-1B0h] BYREF
  Extent areaExtent; // [rsp+50h] [rbp-190h] BYREF
  NavAreaCollector collector; // [rsp+70h] [rbp-170h] BYREF
  CFmtStr str; // [rsp+90h] [rbp-150h] BYREF
  unsigned __int64 v22; // [rsp+1A8h] [rbp-38h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v22 = __readfsqword(0x28u);
  offset = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    str.m_bQuietTruncation = 0;
    v6 = 2;
    str.m_szBuf[0] = 0;
    str._vptr_CFmtStrN = &off_3F6E1A0;
    str.m_nLength = 0;
    do
    {
      if ( this->m_isBlockingNav[v6 & 1] )
      {
        GlobalTeam = GetGlobalTeam(v6);
        if ( GlobalTeam != 0 )
        {
          v12 = (*(GlobalTeam->_vptr_IHandleEntity + 208))(GlobalTeam);
          v13 = CFmtStrN<256,false>::sprintf(&str, "blocking team %s", v12);
        }
        else
        {
          v13 = CFmtStrN<256,false>::sprintf(&str, "blocking team %d", v6);
        }
        CBaseEntity::EntityText(this, offset++, v13, 0.0, 255, 255, 255, 255);
      }
      ++v6;
    }
    while ( v6 != 4 );
    m_pCollision = this->m_pCollision;
    collector.m_Areas.m_Size = 0;
    collector.m_Areas.m_Memory.m_pMemory = 0;
    collector.m_Areas.m_Memory.m_nAllocationCount = 0;
    collector.m_Areas.m_Memory.m_nGrowSize = 0;
    collector.m_bCheckForDuplicates = 1;
    collectorExtent.lo.x = 3.4028235e38;
    collectorExtent.lo.y = 3.4028235e38;
    collectorExtent.lo.z = 3.4028235e38;
    collectorExtent.hi.x = -3.4028235e38;
    collectorExtent.hi.y = -3.4028235e38;
    collectorExtent.hi.z = -3.4028235e38;
    if ( m_pCollision != 0 )
    {
      (*(m_pCollision->_vptr_ICollideable + 10))(m_pCollision, &collectorExtent, &collectorExtent.hi);
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      y = AbsOrigin->y;
      z = AbsOrigin->z;
      collectorExtent.lo.x = AbsOrigin->x;
      collectorExtent.lo.y = y;
      collectorExtent.lo.z = z;
      collectorExtent.hi = collectorExtent.lo;
    }
    CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(TheNavMesh, &collector, &collectorExtent);
    (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 46))(
      debugoverlay,
      &vec3_origin,
      &collectorExtent,
      &collectorExtent.hi,
      &vec3_angle,
      255,
      0.0102300001308322,
      0,
      0,
      10);
    if ( collector.m_Areas.m_Size > 0 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        areaExtent = collector.m_Areas.m_Memory.m_pMemory[v8]->m_Extent;
        (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 46))(
          debugoverlay,
          &vec3_origin,
          &areaExtent,
          &areaExtent.hi,
          &vec3_angle,
          0,
          0.0102300001308322,
          255,
          0,
          10);
        ++v9;
        ++v8;
      }
      while ( collector.m_Areas.m_Size > v9 );
    }
    collector.m_Areas.m_Size = 0;
    if ( (collector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CNavArea *,int>::Purge(&collector.m_Areas.m_Memory);
      if ( (collector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CNavArea *,int>::Purge(&collector.m_Areas.m_Memory);
    }
  }
  return offset;
}


// CFuncNavBlocker::UpdateBlocked  (line 214, @0x0000000002eeb900, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Extent, Init, InitExtent, NavAreaCollector, Purge, RemoveAll, WorldSpaceSurroundingBounds, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NavAreaCollector
// calls: CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>, GetNavObstructionMgr, CNavObstructionManager::UpdateBlockedArea, CUtlMemory<CNavArea*, int>::Purge, CBaseEntity::GetAbsOrigin, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CFuncNavBlocker::UnblockNav
void __fastcall CFuncNavBlocker::UpdateBlocked(CFuncNavBlocker *const this)
{
  CCollisionProperty *m_pCollision; // rax
  __int64 v2; // r12
  int i; // ebx
  CNavArea *v4; // r13
  CNavObstructionManager *NavObstructionMgr; // rax
  const Vector *AbsOrigin; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  Extent blockerExtent; // [rsp+0h] [rbp-60h] BYREF
  NavAreaCollector collector; // [rsp+20h] [rbp-40h] BYREF

  if ( TheNavMesh != 0 )
  {
    m_pCollision = this->m_pCollision;
    collector.m_Areas.m_Size = 0;
    collector.m_Areas.m_Memory.m_pMemory = 0;
    collector.m_Areas.m_Memory.m_nAllocationCount = 0;
    collector.m_Areas.m_Memory.m_nGrowSize = 0;
    collector.m_bCheckForDuplicates = 1;
    blockerExtent.lo.x = 3.4028235e38;
    blockerExtent.lo.y = 3.4028235e38;
    blockerExtent.lo.z = 3.4028235e38;
    blockerExtent.hi.x = -3.4028235e38;
    blockerExtent.hi.y = -3.4028235e38;
    blockerExtent.hi.z = -3.4028235e38;
    if ( m_pCollision != 0 )
    {
      (*(m_pCollision->_vptr_ICollideable + 10))(m_pCollision, &blockerExtent, &blockerExtent.hi);
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      y = AbsOrigin->y;
      z = AbsOrigin->z;
      blockerExtent.lo.x = AbsOrigin->x;
      blockerExtent.lo.y = y;
      blockerExtent.lo.z = z;
      blockerExtent.hi = blockerExtent.lo;
    }
    CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(TheNavMesh, &collector, &blockerExtent);
    v2 = 0;
    for ( i = 0; collector.m_Areas.m_Size > i; ++v2 )
    {
      v4 = collector.m_Areas.m_Memory.m_pMemory[v2];
      NavObstructionMgr = GetNavObstructionMgr();
      CNavObstructionManager::UpdateBlockedArea(NavObstructionMgr, v4, 1, -1);
      ++i;
    }
    collector.m_Areas.m_Size = 0;
    if ( (collector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CNavArea *,int>::Purge(&collector.m_Areas.m_Memory);
      if ( (collector.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CNavArea *,int>::Purge(&collector.m_Areas.m_Memory);
    }
  }
}


// CFuncNavBlocker::UpdateOnRemove  (line 233, @0x0000000002ef7570, libserver.so)  // inlines: Element, Find, FindAndRemove, Free, Next, Remove, operator[]
// calls: CFuncNavBlocker::UnblockNav, CUtlLinkedList<CFuncNavBlocker*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*, short unsigned int>, short unsigned int> >::Unlink, CBaseModelEntity::UpdateOnRemove
// globals: CFuncNavBlocker::gm_NavBlockers
void __fastcall CFuncNavBlocker::UpdateOnRemove(CFuncNavBlocker *const this)
{
  unsigned __int16 m_Head; // dx
  __int64 v3; // rbx
  unsigned __int16 v4; // r13

  CFuncNavBlocker::UnblockNav(this);
  m_Head = CFuncNavBlocker::gm_NavBlockers.m_Head;
  if ( CFuncNavBlocker::gm_NavBlockers.m_Head != 0xFFFF )
  {
    while ( 1 )
    {
      v3 = m_Head;
      if ( this == CFuncNavBlocker::gm_NavBlockers.m_Memory.m_pMemory[v3].m_Element )
        break;
      m_Head = CFuncNavBlocker::gm_NavBlockers.m_Memory.m_pMemory[v3].m_Next;
      if ( m_Head == 0xFFFF )
        goto LABEL_6;
    }
    v4 = m_Head;
    CUtlLinkedList<CFuncNavBlocker *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker *,unsigned short>,unsigned short>>::Unlink(
      &CFuncNavBlocker::gm_NavBlockers,
      m_Head);
    CFuncNavBlocker::gm_NavBlockers.m_Memory.m_pMemory[v3].m_Next = CFuncNavBlocker::gm_NavBlockers.m_FirstFree;
    CFuncNavBlocker::gm_NavBlockers.m_FirstFree = v4;
  }
LABEL_6:
  CBaseModelEntity::UpdateOnRemove(this);
}


// CFuncNavBlocker::Spawn  (line 243, @0x0000000002ef7600, libserver.so)  // inlines: AddToTail, CopyConstruct<CFuncNavBlocker*>, InsertBefore, InternalElement, LinkBefore, SetSolid, operator[]
// calls: CBaseEntity::Spawn, CUtlLinkedList<CFuncNavBlocker*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*, short unsigned int>, short unsigned int> >::AllocInternal, CUtlLinkedList<CFuncNavBlocker*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker*, short unsigned int>, short unsigned int> >::Unlink, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::AddEffects, CCollisionProperty::SetupPhysicsFromUnscaledModel, CBaseEntity::SetMoveType
// callers: CScriptNavBlocker::Spawn
// globals: CFuncNavBlocker::gm_NavBlockers
void __fastcall CFuncNavBlocker::Spawn(CFuncNavBlocker *const this, const CEntityKeyValues *pKeyValues)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // r12
  UtlLinkedListElem_t<CFuncNavBlocker*,short unsigned int> *m_pMemory; // rcx
  UtlLinkedListElem_t<CFuncNavBlocker*,short unsigned int> *v7; // rax
  __int64 m_Tail; // rdx
  bool v9; // zf

  CBaseEntity::Spawn(this, pKeyValues);
  v4 = CUtlLinkedList<CFuncNavBlocker *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker *,unsigned short>,unsigned short>>::AllocInternal(
         &CFuncNavBlocker::gm_NavBlockers,
         0);
  v5 = v4;
  if ( v4 != 0xFFFF )
  {
    CUtlLinkedList<CFuncNavBlocker *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<CFuncNavBlocker *,unsigned short>,unsigned short>>::Unlink(
      &CFuncNavBlocker::gm_NavBlockers,
      v4);
    m_pMemory = CFuncNavBlocker::gm_NavBlockers.m_Memory.m_pMemory;
    v7 = &CFuncNavBlocker::gm_NavBlockers.m_Memory.m_pMemory[v5];
    v7->m_Next = -1;
    m_Tail = CFuncNavBlocker::gm_NavBlockers.m_Tail;
    v9 = CFuncNavBlocker::gm_NavBlockers.m_Tail == 0xFFFF;
    v7->m_Previous = CFuncNavBlocker::gm_NavBlockers.m_Tail;
    CFuncNavBlocker::gm_NavBlockers.m_Tail = v5;
    if ( v9 )
      CFuncNavBlocker::gm_NavBlockers.m_Head = v5;
    else
      m_pMemory[m_Tail].m_Next = v5;
    ++CFuncNavBlocker::gm_NavBlockers.m_ElementCount;
    v7->m_Element = this;
  }
  if ( this->m_blockedTeamNumber == 0 )
    this->m_blockedTeamNumber = -1;
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CBaseEntity::AddEffects(this, 32);
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED,
    1,
    0);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
}


// CFuncNavBlocker::BlockNav  (line 269, @0x0000000002ed6190, libserver.so)  // inlines: _Bind, _Function_base, _Head_base<CFuncNavBlocker*, void>, _M_init_functor, _Tuple_impl, function<std::_Bind<std::_Mem_fn<void (CFuncNavBlocker::*)(CNavArea&)const>(CFuncNavBlocker*, std::_Placeholder<1>)>, void>, tuple, ~_Function_base, ~function
// calls: operator new, CNavMesh::ForAllAreasOverlappingEntity, __stack_chk_fail, _Unwind_Resume
// callers: CFuncNavBlocker::InputBlockNav
// globals: CFuncNavBlocker::BlockArea(CNavArea &), std::_Function_handler<void ()(CNavArea &),std::_Bind<std::_Mem_fn<void (CFuncNavBlocker::*)(CNavArea &)> ()(CFuncNavBlocker*,std::_Placeholder<1>)>>::_M_invoke
void __fastcall CFuncNavBlocker::BlockNav(CFuncNavBlocker *const this)
{
  int m_blockedTeamNumber; // eax
  _QWORD *v3; // rax
  std::function<void(CNavArea&)> bExtrudeHullHeight; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  m_blockedTeamNumber = this->m_blockedTeamNumber;
  if ( m_blockedTeamNumber == -1 )
  {
    this->m_isBlockingNav[0] = 1;
    this->m_isBlockingNav[1] = 1;
  }
  else
  {
    this->m_isBlockingNav[m_blockedTeamNumber % 2] = 1;
  }
  v3 = operator new(0x18u);
  v3[2] = this;
  *v3 = CFuncNavBlocker::BlockArea;
  v3[1] = 0;
  bExtrudeHullHeight._M_functor._M_unused._M_object = v3;
  bExtrudeHullHeight._M_invoker = std::_Function_handler<void ()(CNavArea &),std::_Bind<std::_Mem_fn<void (CFuncNavBlocker::*)(CNavArea &)const> ()(CFuncNavBlocker*,std::_Placeholder<1>)>>::_M_invoke;
  bExtrudeHullHeight._M_manager = std::_Function_base::_Base_manager<std::_Bind<std::_Mem_fn<void (CFuncNavBlocker::*)(CNavArea &)const> ()(CFuncNavBlocker*,std::_Placeholder<1>)>>::_M_manager;
  CNavMesh::ForAllAreasOverlappingEntity(TheNavMesh, this, bExtrudeHullHeight, &bExtrudeHullHeight);
  if ( bExtrudeHullHeight._M_manager != 0 )
    bExtrudeHullHeight._M_manager(&bExtrudeHullHeight, &bExtrudeHullHeight, std::_Manager_operation::__destroy_functor);
}


// CFuncNavBlocker::UnblockNav  (line 295, @0x0000000002eeba80, libserver.so)
// calls: CFuncNavBlocker::UpdateBlocked
// callers: CFuncNavBlocker::InputUnblockNav, CFuncNavBlocker::UpdateOnRemove
void __fastcall CFuncNavBlocker::UnblockNav(CFuncNavBlocker *const this)
{
  int m_blockedTeamNumber; // eax

  m_blockedTeamNumber = this->m_blockedTeamNumber;
  if ( m_blockedTeamNumber == -1 )
  {
    this->m_isBlockingNav[0] = 0;
    this->m_isBlockingNav[1] = 0;
  }
  else
  {
    this->m_isBlockingNav[m_blockedTeamNumber % 2] = 0;
  }
  CFuncNavBlocker::UpdateBlocked(this);
}


// CFuncNavBlocker::BlockArea  (line 315, @0x0000000002edeed0, libserver.so)
// calls: GetNavObstructionMgr, CNavObstructionManager::BlockArea
void __fastcall CFuncNavBlocker::BlockArea(const CFuncNavBlocker *const this, CNavArea *const rArea)
{
  int m_blockedTeamNumber; // r13d
  CNavObstructionManager *NavObstructionMgr; // rax

  m_blockedTeamNumber = this->m_blockedTeamNumber;
  NavObstructionMgr = GetNavObstructionMgr();
  CNavObstructionManager::BlockArea(NavObstructionMgr, rArea, m_blockedTeamNumber, this);
}


// CFuncNavBlocker::operator()  (line 322, @0x0000000002edef10, libserver.so)
// calls: GetNavObstructionMgr, CNavObstructionManager::BlockArea
bool __fastcall CFuncNavBlocker::operator()(CFuncNavBlocker *const this, CNavArea *pArea)
{
  int m_blockedTeamNumber; // r13d
  CNavObstructionManager *NavObstructionMgr; // rax

  m_blockedTeamNumber = this->m_blockedTeamNumber;
  NavObstructionMgr = GetNavObstructionMgr();
  CNavObstructionManager::BlockArea(NavObstructionMgr, pArea, m_blockedTeamNumber, this);
  return 1;
}


// CFuncNavBlocker::CalculateBlocked  (line 330, @0x0000000002ed62c0, libserver.so)  // inlines: Next, operator[]
// calls: IsBoxIntersectingBox
// callers: CNavObstructionManager::UpdateAreaBlockedFromNavBlockers
// globals: CFuncNavBlocker::gm_NavBlockers
CFuncNavBlocker::BlockageType __fastcall CFuncNavBlocker::CalculateBlocked(
        bool *pResultByTeam,
        const Vector *const vecMins,
        const Vector *const vecMaxs)
{
  __int64 m_Head; // r13
  UtlLinkedListElem_t<CFuncNavBlocker*,short unsigned int> *m_pMemory; // rax
  int v5; // r14d
  CFuncNavBlocker::BlockageType v6; // r10d
  bool v8; // al
  __int64 v9; // rbx
  __int64 v10; // r13
  CFuncNavBlocker *m_Element; // r12
  const Vector *p_m_CachedMaxs; // r9
  const Vector *p_m_CachedMins; // r8
  CFuncNavBlocker::BlockageType blockageType; // [rsp+1Ch] [rbp-44h]
  const Vector *v19; // [rsp+20h] [rbp-40h]
  const Vector *v20; // [rsp+28h] [rbp-38h]

  *pResultByTeam = 0;
  pResultByTeam[1] = 0;
  m_Head = CFuncNavBlocker::gm_NavBlockers.m_Head;
  if ( CFuncNavBlocker::gm_NavBlockers.m_Head == 0xFFFF )
    return CFuncNavBlocker::BlockageType::BT_NONE;
  m_pMemory = CFuncNavBlocker::gm_NavBlockers.m_Memory.m_pMemory;
  v5 = 0;
  v6 = CFuncNavBlocker::BlockageType::BT_NONE;
  do
  {
    v10 = m_Head;
    v9 = 0;
    m_Element = m_pMemory[v10].m_Element;
    v8 = 0;
    p_m_CachedMaxs = &m_Element->m_CachedMaxs;
    p_m_CachedMins = &m_Element->m_CachedMins;
    do
    {
      if ( m_Element->m_isBlockingNav[v9] && !pResultByTeam[v9] )
      {
        if ( v8
          || (blockageType = v6,
              v19 = p_m_CachedMaxs,
              v20 = p_m_CachedMins,
              v8 = IsBoxIntersectingBox(p_m_CachedMins, p_m_CachedMaxs, vecMins, vecMaxs),
              p_m_CachedMins = v20,
              p_m_CachedMaxs = v19,
              v6 = blockageType,
              v8) )
        {
          if ( m_Element->m_bAffectsFlow )
          {
            v6 = CFuncNavBlocker::BlockageType::BT_NAV_AND_FLOW;
          }
          else if ( v6 <= CFuncNavBlocker::BlockageType::BT_NAV_ONLY )
          {
            v6 = CFuncNavBlocker::BlockageType::BT_NAV_ONLY;
          }
          pResultByTeam[v9] = 1;
          ++v5;
          v8 = 1;
        }
      }
      ++v9;
    }
    while ( v9 != 2 );
    if ( v5 == 2 )
      break;
    m_pMemory = CFuncNavBlocker::gm_NavBlockers.m_Memory.m_pMemory;
    m_Head = CFuncNavBlocker::gm_NavBlockers.m_Memory.m_pMemory[v10].m_Next;
  }
  while ( m_Head != 0xFFFF );
  return v6;
}


// CFuncNavBlocker::Precache  (line 374, @0x0000000002f035d0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CFuncNavBlocker::Precache(CFuncNavBlocker *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CScriptNavBlocker::~CScriptNavBlocker  (line 384, @0x0000000002f05770, libserver.so)  // inlines: ~CFuncNavBlocker
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CScriptNavBlocker::~CScriptNavBlocker(CScriptNavBlocker *const this)
{
  this->_vptr_IHandleEntity = &off_47AE3D0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CScriptNavBlocker::~CScriptNavBlocker  (line 384, @0x0000000002f05790, libserver.so)  // inlines: ~CFuncNavBlocker, ~CScriptNavBlocker
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CScriptNavBlocker::~CScriptNavBlocker(CScriptNavBlocker *const this)
{
  this->_vptr_IHandleEntity = &off_47AE3D0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CScriptNavBlocker::GetEntityClass  (line 387, @0x0000000002f04e80, libserver.so)
CEntityClass *__cdecl CScriptNavBlocker::GetEntityClass()
{
  return g_pEntityCScriptNavBlockerClass;
}


// CScriptNavBlocker::Schema_DynamicBinding  (line 387, @0x0000000002f04e90, libserver.so)
// globals: CScriptNavBlocker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CScriptNavBlocker::Schema_DynamicBinding(const CScriptNavBlocker *const this)
{
  return CScriptNavBlocker::s_pSchemaBinding;
}


// CScriptNavBlocker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 387, @0x0000000002f04ea0, libserver.so)
// globals: CScriptNavBlocker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CScriptNavBlocker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CScriptNavBlocker::CEntityInstanceEntityClass *const this)
{
  return CScriptNavBlocker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CScriptNavBlocker::CEntityInstanceEntityClass::DestructInstance  (line 387, @0x0000000002f04eb0, libserver.so)  // inlines: Destruct<CScriptNavBlocker>
void __fastcall CScriptNavBlocker::CEntityInstanceEntityClass::DestructInstance(
        CScriptNavBlocker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CScriptNavBlocker::CEntityInstanceEntityClass::FreeInstance  (line 387, @0x0000000002f04ed0, libserver.so)
void __fastcall CScriptNavBlocker::CEntityInstanceEntityClass::FreeInstance(
        CScriptNavBlocker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CScriptNavBlocker::CEntityInstanceEntityClass::CanAllocate  (line 387, @0x0000000002f04ef0, libserver.so)
bool __fastcall CScriptNavBlocker::CEntityInstanceEntityClass::CanAllocate(
        const CScriptNavBlocker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CScriptNavBlocker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 387, @0x0000000002f04f00, libserver.so)
// globals: CScriptNavBlocker::s_pSchemaBinding
const ISchemaBinding *__fastcall CScriptNavBlocker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CScriptNavBlocker::CEntityInstanceEntityClass *const this)
{
  return CScriptNavBlocker::s_pSchemaBinding;
}


// CScriptNavBlocker::CEntityInstanceEntityClass::AllocateInstance  (line 387, @0x0000000002f05610, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CScriptNavBlocker::CEntityInstanceEntityClass::AllocateInstance(
        CScriptNavBlocker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1200);
  memset(v1, 0, 0x4B0u);
  return v1;
}


// CScriptNavBlocker::CEntityInstanceEntityClass::ConstructInstance  (line 387, @0x0000000002f05690, libserver.so)  // inlines: CFuncNavBlocker, CScriptNavBlocker, Construct<CScriptNavBlocker>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CScriptNavBlocker::CEntityInstanceEntityClass::ConstructInstance(
        CScriptNavBlocker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_47AEB10;
  }
  return p;
}


// CScriptNavBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 387, @0x0000000002f06c80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CScriptNavBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CScriptNavBlocker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CScriptNavBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 387, @0x0000000002f06ca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CScriptNavBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CScriptNavBlocker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CScriptNavBlocker::GetEntityClassInternal  (line 387, @0x0000000002f0a970, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_nav_mesh_02.cpp
// strings: "script_nav_blocker", "CScriptNavBlocker", "func_nav_blocker", "CFuncNavBlocker"
// globals: `guard variable for'CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass, CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CScriptNavBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CScriptNavBlocker::GetEntityClassInfo(void)::g_EntityCScriptNavBlockerClassInfo, CScriptNavBlocker::GetEntityClassInfo(void)::g_EntityCScriptNavBlockerClassInfo, `guard variable for'CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo (9 total)
CEntityClass *__cdecl CScriptNavBlocker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass) != 0 )
  {
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_designerName.u.m_Id = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass._vptr_CEntityClass = off_3F79390;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_ComponentOffsets.m_Size = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_AllHelpers.m_Size = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_classInputs.m_Size = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_classOutputs.m_Size = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_requiredEHandle.m_Index = -1;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_hNetworkSerializer = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_pBaseClassInfo = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_pClassInfo = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_flags = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_nAllHelpersFlags = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_pScriptClassDesc = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_pInputs = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_nInputCount = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_pOutputs = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_nOutputCount = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_pGameClass = 0;
    CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass._vptr_CEntityClass = off_47AEA90;
    __cxa_guard_release(&`guard variable for'CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass);
    __cxa_atexit(
      CScriptNavBlocker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass,
      &_dso_handle);
  }
  if ( g_pEntityCScriptNavBlockerClass != 0 )
    return &CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass;
  if ( `guard variable for'CScriptNavBlocker::GetEntityClassInfo(void)::g_EntityCScriptNavBlockerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptNavBlocker::GetEntityClassInfo(void)::g_EntityCScriptNavBlockerClassInfo) != 0 )
  {
    if ( `guard variable for'CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo,
        "CFuncNavBlocker",
        "func_nav_blocker",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CScriptNavBlocker::GetEntityClassInfo(void)::g_EntityCScriptNavBlockerClassInfo,
      "CScriptNavBlocker",
      "script_nav_blocker",
      0,
      &CFuncNavBlocker::GetEntityClassInfo(void)::g_EntityCFuncNavBlockerClassInfo);
    __cxa_guard_release(&`guard variable for'CScriptNavBlocker::GetEntityClassInfo(void)::g_EntityCScriptNavBlockerClassInfo);
  }
  CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_pClassInfo = &CScriptNavBlocker::GetEntityClassInfo(void)::g_EntityCScriptNavBlockerClassInfo;
  CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_pBaseClassInfo = CScriptNavBlocker::GetEntityClassInfo(void)::g_EntityCScriptNavBlockerClassInfo.m_pBaseClassInfo;
  g_pEntityCScriptNavBlockerClass = &CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass;
  CScriptNavBlocker::GetEntityClassInfo(void)::g_EntityCScriptNavBlockerClassInfo.m_pClass = &CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass;
  CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCScriptNavBlockerClass->m_pComponentOverrides = 0;
  return &CScriptNavBlocker::GetEntityClassInternal(void)::g_EntityCScriptNavBlockerClass;
}


// CScriptNavBlocker::Spawn  (line 389, @0x0000000002f0cf20, libserver.so)  // inlines: V3Mul, WorldSpaceAABB, operator-
// calls: CFuncNavBlocker::Spawn, CBaseEntity::GetAbsAngles, VMatrix::SetupMatrixOrgAngles, CCollisionProperty::SetCollisionBounds, CCollisionProperty::CollisionAABBToWorldAABB
void __fastcall CScriptNavBlocker::Spawn(CScriptNavBlocker *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  const QAngle *AbsAngles; // rax
  float x; // xmm2_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  Vector mins; // [rsp+0h] [rbp-60h] BYREF
  VMatrix matEntityToWorld; // [rsp+10h] [rbp-50h] BYREF

  p_m_Collision = &this->m_Collision;
  CFuncNavBlocker::Spawn(this, pKeyValues);
  CBaseEntity::GetAbsAngles(this);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  VMatrix::SetupMatrixOrgAngles(&matEntityToWorld, &vec3_origin, AbsAngles);
  x = this->m_vExtent.x;
  y = this->m_vExtent.y;
  z = this->m_vExtent.z;
  v8 = 1.0
     / ((((matEntityToWorld.m[3][0] * x) + (matEntityToWorld.m[3][1] * y)) + (matEntityToWorld.m[3][2] * z))
      + matEntityToWorld.m[3][3]);
  v9 = ((matEntityToWorld.m[1][0] * x) + (matEntityToWorld.m[1][1] * y)) + (matEntityToWorld.m[1][2] * z);
  v10 = ((((matEntityToWorld.m[2][0] * x) + (matEntityToWorld.m[2][1] * y)) + (matEntityToWorld.m[2][2] * z))
       + matEntityToWorld.m[2][3])
      * v8;
  v11 = ((((x * matEntityToWorld.m[0][0]) + (y * matEntityToWorld.m[0][1])) + (z * matEntityToWorld.m[0][2]))
       + matEntityToWorld.m[0][3])
      * v8;
  v12 = fabs((v9 + matEntityToWorld.m[1][3]) * v8);
  this->m_vExtent.y = v12;
  v13 = fabs(v10);
  this->m_vExtent.z = v13;
  v14 = fabs(v11);
  this->m_vExtent.x = v14;
  mins.y = -v12;
  mins.x = -v14;
  mins.z = -v13;
  CCollisionProperty::SetCollisionBounds(p_m_Collision, &mins, &this->m_vExtent);
  CCollisionProperty::CollisionAABBToWorldAABB(
    p_m_Collision,
    &this->m_Collision.m_vecMins.m_Value,
    &this->m_Collision.m_vecMaxs.m_Value,
    &this->m_CachedMins,
    &this->m_CachedMaxs);
}


// CScriptNavBlocker::GetDataDescMap  (line 411, @0x0000000002ec67d0, libserver.so)
// globals: CScriptNavBlocker::m_DataMap
datamap_t *__fastcall CScriptNavBlocker::GetDataDescMap(CScriptNavBlocker *const this)
{
  return &CScriptNavBlocker::m_DataMap;
}


// CScriptNavBlocker::AddDatadescMetadataKeys  (line 411, @0x0000000002ed6410, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CScriptNavBlocker::GetEntityClass(void)
void __fastcall CScriptNavBlocker::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CScriptNavBlocker::GetEntityClass);
}


// CScriptNavBlocker::GetBaseMap  (line 411, @0x0000000002ed6430, libserver.so)
// globals: CFuncNavBlocker::m_DataMap
datamap_t *__cdecl CScriptNavBlocker::GetBaseMap()
{
  return &CFuncNavBlocker::m_DataMap;
}


// DataMapInit<CScriptNavBlocker>  (line 411, @0x0000000002ed6440, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_nav_mesh_02.cpp
// strings: "CScriptNavBlocker"
// globals: `guard variable for'DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::nameHolder, CFuncNavBlocker::m_DataMap, CScriptNavBlocker::GetEntityClass(void), CScriptNavBlocker::m_DataMap, DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::nameHolder) != 0 )
  {
    DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::nameHolder.m_pszBase = "CScriptNavBlocker";
    DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::nameHolder,
      &_dso_handle);
  }
  CScriptNavBlocker::m_DataMap.dataNumFields = 1;
  CScriptNavBlocker::m_DataMap.baseMap = &CFuncNavBlocker::m_DataMap;
  CScriptNavBlocker::m_DataMap.dataDesc = &DataMapInit<CScriptNavBlocker>(CScriptNavBlocker *)::dataDesc[1];
  AddDatadescMetadataKeys(&CScriptNavBlocker::m_DataMap, CScriptNavBlocker::GetEntityClass);
  return &CScriptNavBlocker::m_DataMap;
}


// CFuncNavObstruction::~CFuncNavObstruction  (line 422, @0x0000000002f05810, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncNavObstruction::~CFuncNavObstruction(CFuncNavObstruction *const this)
{
  this->_vptr_IHandleEntity = &off_47AF250;
  this->_vptr_INavObstacle = &off_47AF940;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncNavObstruction::~CFuncNavObstruction  (line 422, @0x0000000002f05840, libserver.so)  // inlines: ~CFuncNavObstruction
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncNavObstruction::~CFuncNavObstruction(CFuncNavObstruction *const this)
{
  this->_vptr_IHandleEntity = &off_47AF250;
  this->_vptr_INavObstacle = &off_47AF940;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncNavObstruction::GetEntityClass  (line 424, @0x0000000002f04f10, libserver.so)
CEntityClass *__cdecl CFuncNavObstruction::GetEntityClass()
{
  return g_pEntityCFuncNavObstructionClass;
}


// CFuncNavObstruction::Schema_DynamicBinding  (line 424, @0x0000000002f04f20, libserver.so)
// globals: CFuncNavObstruction::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncNavObstruction::Schema_DynamicBinding(
        const CFuncNavObstruction *const this)
{
  return CFuncNavObstruction::s_pSchemaBinding;
}


// CFuncNavObstruction::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 424, @0x0000000002f04f30, libserver.so)
// globals: CFuncNavObstruction::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncNavObstruction::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncNavObstruction::CEntityInstanceEntityClass *const this)
{
  return CFuncNavObstruction::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncNavObstruction::CEntityInstanceEntityClass::DestructInstance  (line 424, @0x0000000002f04f40, libserver.so)  // inlines: Destruct<CFuncNavObstruction>
void __fastcall CFuncNavObstruction::CEntityInstanceEntityClass::DestructInstance(
        CFuncNavObstruction::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncNavObstruction::CEntityInstanceEntityClass::FreeInstance  (line 424, @0x0000000002f04f60, libserver.so)
void __fastcall CFuncNavObstruction::CEntityInstanceEntityClass::FreeInstance(
        CFuncNavObstruction::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncNavObstruction::CEntityInstanceEntityClass::CanAllocate  (line 424, @0x0000000002f04f80, libserver.so)
bool __fastcall CFuncNavObstruction::CEntityInstanceEntityClass::CanAllocate(
        const CFuncNavObstruction::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncNavObstruction::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 424, @0x0000000002f04f90, libserver.so)
// globals: CFuncNavObstruction::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncNavObstruction::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncNavObstruction::CEntityInstanceEntityClass *const this)
{
  return CFuncNavObstruction::s_pSchemaBinding;
}


// CFuncNavObstruction::CEntityInstanceEntityClass::AllocateInstance  (line 424, @0x0000000002f05650, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncNavObstruction::CEntityInstanceEntityClass::AllocateInstance(
        CFuncNavObstruction::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1168);
  memset(v1, 0, 0x490u);
  return v1;
}


// CFuncNavObstruction::CEntityInstanceEntityClass::ConstructInstance  (line 424, @0x0000000002f056c0, libserver.so)  // inlines: CFuncNavObstruction, Construct<CFuncNavObstruction>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncNavObstruction::CEntityInstanceEntityClass::ConstructInstance(
        CFuncNavObstruction::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_47AF250;
    *(p + 144) = &off_47AF940;
  }
  return p;
}


// CFuncNavObstruction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 424, @0x0000000002f06cd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncNavObstruction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncNavObstruction::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncNavObstruction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 424, @0x0000000002f06cf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncNavObstruction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncNavObstruction::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncNavObstruction::GetEntityClassInternal  (line 424, @0x0000000002f0a620, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_nav_mesh_02.cpp
// strings: "func_nav_avoidance_obstacle", "CFuncNavObstruction"
// globals: `guard variable for'CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass, CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncNavObstruction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncNavObstruction::GetEntityClassInfo(void)::g_EntityCFuncNavObstructionClassInfo, CFuncNavObstruction::GetEntityClassInfo(void)::g_EntityCFuncNavObstructionClassInfo
CEntityClass *__cdecl CFuncNavObstruction::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass) != 0 )
  {
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_designerName.u.m_Id = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass._vptr_CEntityClass = off_3F79390;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_ComponentOffsets.m_Size = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_AllHelpers.m_Size = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_classInputs.m_Size = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_classOutputs.m_Size = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_requiredEHandle.m_Index = -1;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_hNetworkSerializer = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_pBaseClassInfo = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_pClassInfo = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_flags = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_nAllHelpersFlags = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_pScriptClassDesc = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_pInputs = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_nInputCount = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_pOutputs = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_nOutputCount = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_pGameClass = 0;
    CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass._vptr_CEntityClass = off_47AF1D0;
    __cxa_guard_release(&`guard variable for'CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass);
    __cxa_atexit(
      CFuncNavObstruction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncNavObstructionClass != 0 )
    return &CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass;
  if ( `guard variable for'CFuncNavObstruction::GetEntityClassInfo(void)::g_EntityCFuncNavObstructionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncNavObstruction::GetEntityClassInfo(void)::g_EntityCFuncNavObstructionClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncNavObstruction::GetEntityClassInfo(void)::g_EntityCFuncNavObstructionClassInfo,
      "CFuncNavObstruction",
      "func_nav_avoidance_obstacle",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncNavObstruction::GetEntityClassInfo(void)::g_EntityCFuncNavObstructionClassInfo);
  }
  CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_pClassInfo = &CFuncNavObstruction::GetEntityClassInfo(void)::g_EntityCFuncNavObstructionClassInfo;
  CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_pBaseClassInfo = CFuncNavObstruction::GetEntityClassInfo(void)::g_EntityCFuncNavObstructionClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncNavObstructionClass = &CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass;
  CFuncNavObstruction::GetEntityClassInfo(void)::g_EntityCFuncNavObstructionClassInfo.m_pClass = &CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass;
  CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncNavObstructionClass->m_pComponentOverrides = 0;
  return &CFuncNavObstruction::GetEntityClassInternal(void)::g_EntityCFuncNavObstructionClass;
}


// CFuncNavObstruction::GetId  (line 439, @0x0000000002f05700, libserver.so)
// calls: CEntityInstance::GetEntityIndex
int32 __fastcall CFuncNavObstruction::GetId(const CFuncNavObstruction *const this)
{
  return CEntityInstance::GetEntityIndex(this).m_Data;
}


// CFuncNavObstruction::IsNavAvoidanceObstacle  (line 440, @0x0000000002f04fa0, libserver.so)
bool __fastcall CFuncNavObstruction::IsNavAvoidanceObstacle(const CFuncNavObstruction *const this)
{
  return 1;
}


// CFuncNavObstruction::IsNavAvoidanceObstacleActive  (line 441, @0x0000000002f04fc0, libserver.so)
bool __fastcall CFuncNavObstruction::IsNavAvoidanceObstacleActive(const CFuncNavObstruction *const this)
{
  return !this->m_bDisabled;
}


// CFuncNavObstruction::GetDataDescMap  (line 452, @0x0000000002ec67e0, libserver.so)
// globals: CFuncNavObstruction::m_DataMap
datamap_t *__fastcall CFuncNavObstruction::GetDataDescMap(CFuncNavObstruction *const this)
{
  return &CFuncNavObstruction::m_DataMap;
}


// CFuncNavObstruction::AddDatadescMetadataKeys  (line 452, @0x0000000002ed6510, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncNavObstruction::GetEntityClass(void)
void __fastcall CFuncNavObstruction::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncNavObstruction::GetEntityClass);
}


// CFuncNavObstruction::GetBaseMap  (line 452, @0x0000000002ed6530, libserver.so)
datamap_t *__cdecl CFuncNavObstruction::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncNavObstruction>  (line 452, @0x0000000002ed6540, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_nav_mesh_02.cpp
// strings: "CFuncNavObstruction"
// globals: `guard variable for'DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::nameHolder, CFuncNavObstruction::GetEntityClass(void), CFuncNavObstruction::m_DataMap, DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::nameHolder.m_pszBase = "CFuncNavObstruction";
    DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::nameHolder,
      &_dso_handle);
  }
  CFuncNavObstruction::m_DataMap.dataNumFields = 1;
  CFuncNavObstruction::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CFuncNavObstruction::m_DataMap.dataDesc = &DataMapInit<CFuncNavObstruction>(CFuncNavObstruction *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncNavObstruction::m_DataMap, CFuncNavObstruction::GetEntityClass);
  return &CFuncNavObstruction::m_DataMap;
}


// CFuncNavObstruction::GetNavObstructionHeight  (line 458, @0x0000000002ec67f0, libserver.so)
float __fastcall CFuncNavObstruction::GetNavObstructionHeight(const CFuncNavObstruction *const this)
{
  return 64.0;
}


// CFuncNavObstruction::WorldSpaceSurroundingBounds  (line 465, @0x0000000002ec6810, libserver.so)
void __fastcall CFuncNavObstruction::WorldSpaceSurroundingBounds(
        const CFuncNavObstruction *const this,
        Vector *pMinsOut,
        Vector *pMaxsOut)
{
  (*(this->m_Collision._vptr_ICollideable + 10))(&this->m_Collision, pMinsOut, pMaxsOut);
}


// CFuncNavObstruction::WorldSpaceOrientedBounds  (line 472, @0x0000000002ec6840, libserver.so)  // inlines: operator=
void __fastcall CFuncNavObstruction::WorldSpaceOrientedBounds(
        const CFuncNavObstruction *const this,
        Vector *pCenter,
        Vector *pMins,
        Vector *pMaxs,
        QAngle *pAngles)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12

  p_m_Collision = &this->m_Collision;
  *pCenter = *(*(this->m_Collision._vptr_ICollideable + 4))(&this->m_Collision);
  *pMins = *(*(this->m_Collision._vptr_ICollideable + 1))(p_m_Collision);
  *pMaxs = *(*(this->m_Collision._vptr_ICollideable + 2))(p_m_Collision);
  *pAngles = *(*(this->m_Collision._vptr_ICollideable + 5))(p_m_Collision);
}


// CFuncNavObstruction::DrawDebugTextOverlays  (line 484, @0x0000000002ec9b70, libserver.so)  // inlines: IsNavObstacleActive
// calls: CBaseEntity::DrawDebugTextOverlays, CBaseEntity::EntityText
// strings: "Obstructing nav", "Not obstructing nav"
int __fastcall CFuncNavObstruction::DrawDebugTextOverlays(
        CFuncNavObstruction *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v5; // bl
  int v6; // r12d

  v3 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) == 0 || (v3 & 0x4000) == 0 )
    return v6;
  if ( (*(this->_vptr_INavObstacle + 4))(&this->INavObstacle) != 0
    || (*(this->_vptr_INavObstacle + 7))(&this->INavObstacle) != 0 )
  {
    CBaseEntity::EntityText(this, v6, "Obstructing nav", 0.01023, 255, 255, 255, 255);
    return v6 + 1;
  }
  else
  {
    CBaseEntity::EntityText(this, v6, "Not obstructing nav", 0.01023, 255, 255, 255, 255);
    return v6 + 1;
  }
}


// CFuncNavObstruction::UpdateOnRemove  (line 505, @0x0000000002efc340, libserver.so)
// calls: GetNavObstructionMgr, CNavObstructionManager::RemoveObstacle, CBaseModelEntity::UpdateOnRemove
void __fastcall CFuncNavObstruction::UpdateOnRemove(CFuncNavObstruction *const this)
{
  CNavObstructionManager *NavObstructionMgr; // rax

  NavObstructionMgr = GetNavObstructionMgr();
  CNavObstructionManager::RemoveObstacle(NavObstructionMgr, &this->INavObstacle);
  CBaseModelEntity::UpdateOnRemove(this);
}


// CFuncNavObstruction::Spawn  (line 513, @0x0000000002ef8b20, libserver.so)  // inlines: SetCollisionGroup, SetSolid
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::AddEffects, CCollisionProperty::SetCollisionGroup, GetNavObstructionMgr, CNavObstructionManager::UpdateObstacle
void __fastcall CFuncNavObstruction::Spawn(CFuncNavObstruction *const this, const CEntityKeyValues *pKeyValues)
{
  CNavObstructionManager *NavObstructionMgr; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CBaseEntity::AddEffects(this, 32);
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, 4);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  if ( !this->m_bDisabled )
  {
    NavObstructionMgr = GetNavObstructionMgr();
    CNavObstructionManager::UpdateObstacle(NavObstructionMgr, &this->INavObstacle);
  }
}


// CFuncNavObstruction::InputEnable  (line 532, @0x0000000002ef8bc0, libserver.so)
// calls: GetNavObstructionMgr, CNavObstructionManager::UpdateObstacle
void __fastcall CFuncNavObstruction::InputEnable(CFuncNavObstruction *const this, inputdata_t *const inputdata)
{
  CNavObstructionManager *NavObstructionMgr; // rax

  this->m_bDisabled = 0;
  if ( TheNavMesh->m_pObstructionManager != 0 )
  {
    NavObstructionMgr = GetNavObstructionMgr();
    CNavObstructionManager::UpdateObstacle(NavObstructionMgr, &this->INavObstacle);
  }
}


// CFuncNavObstruction::InputDisable  (line 543, @0x0000000002efc370, libserver.so)
// calls: GetNavObstructionMgr, CNavObstructionManager::RemoveObstacle
void __fastcall CFuncNavObstruction::InputDisable(CFuncNavObstruction *const this, inputdata_t *const inputdata)
{
  CNavObstructionManager *NavObstructionMgr; // rax

  this->m_bDisabled = 1;
  if ( TheNavMesh->m_pObstructionManager != 0 )
  {
    NavObstructionMgr = GetNavObstructionMgr();
    CNavObstructionManager::RemoveObstacle(NavObstructionMgr, &this->INavObstacle);
  }
}


// CFuncNavConnectionBlocker::Spawn  (line 561, @0x0000000002ec6e10, libserver.so)  // inlines: GetInt, SetSolid
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::AddEffects
void __fastcall CFuncNavConnectionBlocker::Spawn(
        CFuncNavConnectionBlocker *const this,
        const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13

  p_m_Collision = &this->m_Collision;
  CBaseEntity::Spawn(this, pKeyValues);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 1);
  (*(this->m_Collision._vptr_ICollideable + 16))(p_m_Collision);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  if ( nav_show_connectionblockers.m_pParent->m_Value.m_nValue == 0 )
    CBaseEntity::AddEffects(this, 32);
}


// CFuncNavConnectionBlocker::CollideWithRay  (line 577, @0x0000000002ed6610, libserver.so)  // inlines: CGameTrace, RnCollisionAttr_t
// calls: CGameTrace::Init, CGamePhysicsQueryInterface::ClipRayToEntity
// callers: CNavObstructionManager::TestRayToConnectionBlockers
bool __fastcall CFuncNavConnectionBlocker::CollideWithRay(
        CFuncNavConnectionBlocker *const this,
        const Ray_t *const rRay)
{
  bool result; // al
  trace_t trace; // [rsp+0h] [rbp-D0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  CGamePhysicsQueryInterface::ClipRayToEntity(g_pPhysicsQuery, rRay, 0xFFFFFFFFFFFFFFFFLL, this, &trace);
  result = 1;
  if ( !trace.startsolid )
    return trace.fraction != 1.0;
  return result;
}


// UpdateBlockedAreaFromTrace  (line 587, @0x0000000002ed6730, libserver.so)  // inlines: CGameTrace, CTraceFilterWalkableEntities, ClearBlockedAnyRaw, EnableInteractsExclude, EnableInteractsWith, GetCenter, GetTraceMaskSolidBrushOnly, GetVert, Init, LengthSqr, Max<float>, Min<float>, Ray_t, RnCollisionAttr_t, SetBlockedAnyRaw, SetBlockedRaw, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=, operator=
// calls: CEntitySystem::GetActiveSpawnGroupHandle, CWorldGameSystem::GetWorldInfoForSpawnGroup, IsPointInBox, SafeGetViewVectors, CTraceFilterSimple::CTraceFilterSimple, CGameTrace::Init, CGamePhysicsQueryInterface::TraceRay
void __fastcall UpdateBlockedAreaFromTrace(CNavArea *const rArea, bool bForce, int nTeamID, bool bBlockedByNavBlocker)
{
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  vec_t z; // xmm0_4
  int v8; // r15d
  Vector *m_vVerts; // r13
  vec_t v10; // xmm0_4
  vec_t x; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // [rsp+Ch] [rbp-1C4h]
  float v22; // [rsp+24h] [rbp-1ACh]
  float boxMin; // [rsp+28h] [rbp-1A8h]
  Vector vWorldMins; // [rsp+30h] [rbp-1A0h] BYREF
  Vector vWorldMaxs; // [rsp+40h] [rbp-190h] BYREF
  CTraceFilterWalkableEntities filter; // [rsp+50h] [rbp-180h] BYREF
  Ray_t ray; // [rsp+A0h] [rbp-130h] BYREF
  Vector vVert; // [rsp+F0h] [rbp-E0h] BYREF
  char v29; // [rsp+128h] [rbp-A8h]
  __int64 v30; // [rsp+158h] [rbp-78h]
  __int64 v31; // [rsp+160h] [rbp-70h]
  __int64 v32; // [rsp+168h] [rbp-68h]
  int v33; // [rsp+170h] [rbp-60h]
  __int16 v34; // [rsp+174h] [rbp-5Ch]
  char v35; // [rsp+176h] [rbp-5Ah]
  char v36; // [rsp+177h] [rbp-59h]
  Vector m_vCenter; // 0:^1C.12

  m_vCenter = rArea->m_vCenter;
  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, ActiveSpawnGroupHandle);
  vWorldMins = WorldInfoForSpawnGroup->m_WorldMins;
  vWorldMaxs.x = WorldInfoForSpawnGroup->m_WorldMaxs.x;
  vWorldMaxs.y = WorldInfoForSpawnGroup->m_WorldMaxs.y;
  z = WorldInfoForSpawnGroup->m_WorldMaxs.z;
  LODWORD(WorldInfoForSpawnGroup) = rArea->m_nVerts;
  vWorldMaxs.z = z;
  if ( WorldInfoForSpawnGroup <= 0 )
  {
LABEL_6:
    v12 = 16.0;
    v13 = (rArea->m_flDiameterMin * 0.5) - 5.0;
    if ( v13 < 16.0 )
    {
      v12 = 1.0;
      if ( v13 >= 1.0 )
        v12 = (rArea->m_flDiameterMin * 0.5) - 5.0;
    }
    v16 = v12;
    v22 = m_vCenter.z + 35.5;
    boxMin = SafeGetViewVectors()->m_vDuckHullMax.z - 35.5;
    CTraceFilterSimple::CTraceFilterSimple(&filter, 0, 11, 0);
    filter.m_attr.m_nInteractsExclude |= 0xC0000uLL;
    v35 = 0;
    filter._vptr_CTraceFilter = off_3FE6A50;
    v34 = 0;
    filter.m_flags = 7;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v36 = 7;
    v33 = 0;
    CGameTrace::Init(&vVert);
    ray.m_Start.w = 0.0;
    ray.m_Delta.w = 0.0;
    ray.m_StartOffset.w = 0.0;
    ray.m_Delta.z = v22 - v22;
    ray.m_Delta.x = m_vCenter.x - m_vCenter.x;
    ray.m_Delta.y = m_vCenter.y - m_vCenter.y;
    ray.m_Extents.w = 0.0;
    ray.m_flRadius = 0.0;
    ray.m_Extents.z = boxMin * 0.5;
    v14 = (boxMin + 0.0) * 0.5;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    ray.m_Extents.x = (v16 + v16) * 0.5;
    ray.m_Extents.y = ray.m_Extents.x;
    ray.m_Start.z = v22 + v14;
    ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.x * ray.m_Extents.x))
                 + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
    filter.m_attr.m_nInteractsWith |= CNavConfig::ms_TraceMaskSolidBrushOnly;
    v15 = (v16 - v16) * 0.5;
    ray.m_Start.x = m_vCenter.x + v15;
    ray.m_Start.y = m_vCenter.y + v15;
    ray.m_StartOffset.x = -v15;
    ray.m_StartOffset.y = -v15;
    ray.m_StartOffset.z = -v14;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &vVert);
    if ( v29 != 0 )
    {
      if ( bForce )
      {
        if ( nTeamID == -1 )
          rArea->m_isBlockedFlags = 3;
        else
          rArea->m_isBlockedFlags |= 1 << (nTeamID % 2);
      }
    }
    else if ( !bBlockedByNavBlocker )
    {
      rArea->m_isBlockedFlags = 0;
    }
  }
  else
  {
    v8 = 0;
    m_vVerts = rArea->m_vVerts;
    while ( 1 )
    {
      v10 = m_vVerts->z;
      x = m_vVerts->x;
      vVert.y = m_vVerts->y;
      vVert.z = v10;
      vVert.x = x;
      if ( !IsPointInBox(&vVert, &vWorldMins, &vWorldMaxs) )
        break;
      ++v8;
      ++m_vVerts;
      if ( rArea->m_nVerts <= v8 )
        goto LABEL_6;
    }
  }
}


// IsLadderInUse  (line 723, @0x0000000002ee68a0, libserver.so)  // inlines: IsLadderFreeFunctor
// calls: ForEachPlayer<IsLadderFreeFunctor>
bool __fastcall IsLadderInUse(const CNavLadder *const rLadder, const CBasePlayer *pIgnorePlayer)
{
  IsLadderFreeFunctor isLadderFree; // [rsp+0h] [rbp-10h] BYREF

  isLadderFree.m_rLadder = rLadder;
  isLadderFree.m_pIgnore = pIgnorePlayer;
  return !ForEachPlayer<IsLadderFreeFunctor>(&isLadderFree);
}


// CNavEntityInterface::ApplyMarkup  (line 735, @0x0000000002ee78f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, ForAllAreas<std::function<bool(CNavArea*)> >, NavHullAny, Purge, RemoveAll, _Function_base, _M_init_functor, function, function<CNavEntityInterface::ApplyMarkup(CNavMesh&)::__lambda14, void>, function<CNavEntityInterface::ApplyMarkup(CNavMesh&)::__lambda15, void>, operator~, ~CNavAreaFilter, ~CNavVolume, ~CNavVolumeMarkupVolume, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~_Function_base, ~function
// calls: operator new, std::function<bool(CNavArea*)>::operator(), CNavConfig::NavAttributeToName, CMarkupVolumeTagged::Search_HasTag, NavHull_t::NavHull_t, CNavVolumeMarkupVolume::CNavVolumeMarkupVolume, std::_Function_base::_Base_manager<CNavEntityInterface::ApplyMarkup(CNavMesh&)::__lambda15>::_M_manager, CUtlMemory<CNavArea*, int>::Purge, CUtlMemory<CMarkupVolumeTagged*, int>::Purge, __stack_chk_fail, CUtlVectorBase<CNavArea*, CUtlMemory<CNavArea*, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: std::_Function_handler<bool ()(CNavArea *),CNavEntityInterface::ApplyMarkup(CNavMesh &)::{lambda(CNavArea *)#1}>::_M_invoke(std::_Any_data const&,CNavArea *), std::_Function_base::_Base_manager<CNavEntityInterface::ApplyMarkup(CNavMesh &)::{lambda(CNavArea *)#1}>::_M_manager(std::_Any_data &,std::_Any_data const&,std:, std::_Function_handler<void ()(CNavArea &),CNavEntityInterface::ApplyMarkup(CNavMesh &)::{lambda(CNavArea &)#2}>::_M_invoke(std::_Any_data const&,CNavArea &), std::_Function_base::_Base_manager<CNavEntityInterface::ApplyMarkup(CNavMesh &)::{lambda(CNavArea &)#2}>::_M_manager(std::_Any_data &,std::_Any_data const&,std:
void __fastcall CNavEntityInterface::ApplyMarkup(CNavEntityInterface *const this, CNavMesh *const rNavMesh)
{
  __int64 v2; // rdx
  _QWORD *v4; // rax
  int m_Size; // eax
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  const char *v8; // rax
  float v9; // xmm2_4
  unsigned __int64 v10; // r12
  CMarkupVolumeTagged *v11; // rbx
  _QWORD *v12; // rax
  void (__fastcall *v13)(CNavVolumeMarkupVolume *, std::_Any_data *); // r15
  int i; // [rsp+14h] [rbp-20Ch]
  __int64 v15; // [rsp+30h] [rbp-1F0h]
  CNavAttribute unsavedAttributes; // [rsp+40h] [rbp-1E0h] BYREF
  CNavAttribute navAttribute; // [rsp+50h] [rbp-1D0h] BYREF
  NavHull_t v19; // [rsp+60h] [rbp-1C0h]
  NavHull_t v20; // [rsp+70h] [rbp-1B0h] BYREF
  CUtlVector<CMarkupVolumeTagged*,CUtlMemory<CMarkupVolumeTagged*,int> > markupVolumes; // [rsp+80h] [rbp-1A0h] BYREF
  NavAreaVector overlappedAreas; // [rsp+A0h] [rbp-180h] BYREF
  std::function<bool(CNavArea*)> removeAttributes; // [rsp+C0h] [rbp-160h] BYREF
  std::function<void(CNavArea&)> addAttributes; // [rsp+E0h] [rbp-140h] BYREF
  std::_Any_data __dest; // [rsp+100h] [rbp-120h] BYREF
  bool (__fastcall *v26)(std::_Any_data *const, const std::_Any_data *const, std::_Manager_operation); // [rsp+110h] [rbp-110h]
  void (__fastcall *v27)(const std::_Any_data *const, CNavArea *const); // [rsp+118h] [rbp-108h]
  CNavVolumeMarkupVolume volumeMarkupVolume; // [rsp+120h] [rbp-100h] BYREF
  unsigned __int64 v29; // [rsp+1E8h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  if ( rNavMesh->m_NavAreas.m_Size != 0 )
  {
    unsavedAttributes.m_Flags = ~(*(**rNavMesh->m_NavAreas.m_Memory.m_pMemory + 40LL))(
                                   *rNavMesh->m_NavAreas.m_Memory.m_pMemory,
                                   rNavMesh,
                                   v2,
                                   0);
    v4 = operator new(8u);
    *v4 = &unsavedAttributes;
    removeAttributes._M_functor._M_unused._M_object = v4;
    removeAttributes._M_invoker = std::_Function_handler<bool ()(CNavArea *),CNavEntityInterface::ApplyMarkup(CNavMesh &)::{lambda(CNavArea *)#1}>::_M_invoke;
    removeAttributes._M_manager = std::_Function_base::_Base_manager<CNavEntityInterface::ApplyMarkup(CNavMesh &)::{lambda(CNavArea *)#1}>::_M_manager;
    m_Size = rNavMesh->m_NavAreas.m_Size;
    if ( m_Size != 0 )
    {
      v6 = 0;
      v7 = 8LL * (m_Size - 1) + 8;
      do
      {
        if ( !std::function<bool ()(CNavArea *)>::operator()(
                &removeAttributes,
                rNavMesh->m_NavAreas.m_Memory.m_pMemory[v6 / 8]) )
          break;
        v6 += 8LL;
      }
      while ( v6 != v7 );
    }
    markupVolumes.m_Size = 0;
    markupVolumes.m_Memory.m_pMemory = 0;
    markupVolumes.m_Memory.m_nAllocationCount = 0;
    markupVolumes.m_Memory.m_nGrowSize = 0;
    overlappedAreas.m_Size = 0;
    overlappedAreas.m_Memory.m_pMemory = 0;
    overlappedAreas.m_Memory.m_nAllocationCount = 0;
    overlappedAreas.m_Memory.m_nGrowSize = 0;
    for ( i = 0; i != 64; ++i )
    {
      navAttribute.m_Flags = 1LL << i;
      v8 = CNavConfig::NavAttributeToName((1LL << i));
      if ( v8 != 0 )
      {
        CMarkupVolumeTagged::Search_HasTag(&markupVolumes, v8);
        if ( markupVolumes.m_Size != 0 && (unsavedAttributes.m_Flags & navAttribute.m_Flags) != 0 )
        {
          v10 = 0;
          v15 = 8LL * (markupVolumes.m_Size - 1) + 8;
          do
          {
            v11 = markupVolumes.m_Memory.m_pMemory[v10 / 8];
            NavHull_t::NavHull_t(&v20, -1.0, v9, 7u);
            v19 = v20;
            CNavVolumeMarkupVolume::CNavVolumeMarkupVolume(&volumeMarkupVolume, rNavMesh, *&v20.m_hullCategory, v11);
            addAttributes._M_manager = 0;
            v12 = operator new(8u);
            *v12 = &navAttribute;
            addAttributes._M_functor._M_unused._M_object = v12;
            addAttributes._M_invoker = std::_Function_handler<void ()(CNavArea &),CNavEntityInterface::ApplyMarkup(CNavMesh &)::{lambda(CNavArea &)#2}>::_M_invoke;
            addAttributes._M_manager = std::_Function_base::_Base_manager<CNavEntityInterface::ApplyMarkup(CNavMesh &)::{lambda(CNavArea &)#2}>::_M_manager;
            v13 = *(volumeMarkupVolume._vptr_CNavVolume + 6);
            v27 = std::_Function_handler<void ()(CNavArea &),CNavEntityInterface::ApplyMarkup(CNavMesh &)::{lambda(CNavArea &)#2}>::_M_invoke;
            v26 = std::_Function_base::_Base_manager<CNavEntityInterface::ApplyMarkup(CNavMesh &)::{lambda(CNavArea &)#2}>::_M_manager;
            std::_Function_base::_Base_manager<CNavEntityInterface::ApplyMarkup(CNavMesh &)::{lambda(CNavArea &)#2}>::_M_manager(
              &__dest,
              &addAttributes._M_functor,
              std::_Manager_operation::__clone_functor);
            v13(&volumeMarkupVolume, &__dest);
            if ( v26 != 0 )
              v26(&__dest, &__dest, std::_Manager_operation::__destroy_functor);
            if ( addAttributes._M_manager != 0 )
              addAttributes._M_manager(&addAttributes, &addAttributes, std::_Manager_operation::__destroy_functor);
            volumeMarkupVolume._vptr_CNavVolume = &off_47CE530;
            if ( volumeMarkupVolume.m_AreaFilter.m_FilterFunc._M_manager != 0 )
              volumeMarkupVolume.m_AreaFilter.m_FilterFunc._M_manager(
                &volumeMarkupVolume.m_AreaFilter.m_FilterFunc,
                &volumeMarkupVolume.m_AreaFilter.m_FilterFunc,
                std::_Manager_operation::__destroy_functor);
            v10 += 8LL;
          }
          while ( v10 != v15 );
        }
      }
    }
    overlappedAreas.m_Size = 0;
    if ( (overlappedAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CNavArea *,int>::Purge(&overlappedAreas.m_Memory);
      if ( (overlappedAreas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CNavArea *,int>::Purge(&overlappedAreas.m_Memory);
    }
    markupVolumes.m_Size = 0;
    if ( (markupVolumes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CMarkupVolumeTagged *,int>::Purge(&markupVolumes.m_Memory);
      if ( (markupVolumes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CMarkupVolumeTagged *,int>::Purge(&markupVolumes.m_Memory);
    }
    if ( removeAttributes._M_manager != 0 )
      removeAttributes._M_manager(&removeAttributes, &removeAttributes, std::_Manager_operation::__destroy_functor);
  }
}


// CNavEntityInterface::ConnectElevators  (line 787, @0x0000000002ed6f70, libserver.so)  // inlines: Extent, Init
// calls: CGameEntitySystem::FindEntityByClassname, CNavPoly::IsOverlappingExtent, CNavEntityInterface::ConnectElevatorToArea
// strings: "func_elevator"
void __fastcall CNavEntityInterface::ConnectElevators(CNavEntityInterface *const this, CNavMesh *const rNavMesh)
{
  CBaseEntity *v3; // r13
  CBaseEntity *EntityByClassname; // rax
  int (**vptr_IEventRegisterCallback)(...); // rax
  int m_Size; // eax
  unsigned __int64 v7; // r15
  CNavArea *v8; // rbx
  __int64 v10; // [rsp+18h] [rbp-58h]
  Extent elevatorExtent; // [rsp+20h] [rbp-50h] BYREF

  v3 = 0;
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v3, "func_elevator");
    v3 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    if ( SLODWORD(EntityByClassname[1].m_OnUser2._vptr_CEntityIOOutput) > 1 )
    {
      elevatorExtent.lo.x = 3.4028235e38;
      vptr_IEventRegisterCallback = EntityByClassname[1].m_NetworkTransmitComponent._vptr_IEventRegisterCallback;
      elevatorExtent.lo.y = 3.4028235e38;
      elevatorExtent.lo.z = 3.4028235e38;
      elevatorExtent.hi.x = -3.4028235e38;
      elevatorExtent.hi.y = -3.4028235e38;
      elevatorExtent.hi.z = -3.4028235e38;
      vptr_IEventRegisterCallback[10](&v3[1].m_NetworkTransmitComponent, &elevatorExtent, &elevatorExtent.hi);
      m_Size = rNavMesh->m_NavAreas.m_Size;
      if ( m_Size != 0 )
      {
        v7 = 0;
        v10 = 8LL * (m_Size - 1) + 8;
        do
        {
          v8 = rNavMesh->m_NavAreas.m_Memory.m_pMemory[v7 / 8];
          if ( CNavPoly::IsOverlappingExtent(v8, &elevatorExtent) )
            CNavEntityInterface::ConnectElevatorToArea(this, v8, v3, &elevatorExtent);
          v7 += 8LL;
        }
        while ( v7 != v10 );
      }
    }
  }
}


// CNavEntityInterface::ConnectElevatorToArea  (line 816, @0x0000000002ed6ba0, libserver.so)  // inlines: AddToTail, Alloc, AllocateLaddersAndElevatorsStruct, CNavConnectVector, CNavLadderConnectVector, CUtlVectorUltraConservative, Count, EnsureCapacity, Free, GetCenter, GetFloor, GetSize, NavLaddersAndElevators_t, Realloc, RemoveAll, String, operator[]
// calls: Warning, CNavPoly::IsOverlappingExtent, CBaseEntity::GetAbsOrigin, operator new
// callers: CNavEntityInterface::ConnectElevators
// strings: "Multiple elevators overlap navigation area #%d\n", "Floor %d ('%s') of elevator at ( %3.2f, %3.2f, %3.2f ) has no matching navigation areas\n
void __fastcall CNavEntityInterface::ConnectElevatorToArea(
        CNavEntityInterface *const this,
        CNavArea *const rArea,
        CFuncElevator *pElevator,
        Extent *const rElevatorExtent)
{
  NavLaddersAndElevators_t *m_pLaddersAndElevators; // rax
  NavLaddersAndElevators_t *v5; // rbx
  int v6; // edx
  CNavMesh *m_rNavMesh; // rbx
  float z; // xmm2_4
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // r15d
  int v12; // xmm3_4
  NavLaddersAndElevators_t *v13; // rax
  __int64 v14; // r12
  int m_Size; // eax
  unsigned __int64 v16; // r13
  const CNavPoly *v17; // r14
  bool IsOverlappingExtent; // al
  float v19; // xmm0_4
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *m_pData; // rsi
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  int v23; // r9d
  NavLaddersAndElevators_t *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v27; // rsi
  const Vector *AbsOrigin; // rax
  const char *v29; // rdx
  CUtlVectorUltraConservative<CNavConnect,CUtlVectorUltraConservativeAllocator>::Data_t *v30; // rax
  float flFloorAreaSize; // [rsp+4h] [rbp-6Ch]
  CNavArea *pFloorArea; // [rsp+8h] [rbp-68h]
  int pFloorAreaa; // [rsp+8h] [rbp-68h]
  __int64 v36; // [rsp+20h] [rbp-50h]
  int v37; // [rsp+20h] [rbp-50h]
  __int64 v38; // [rsp+28h] [rbp-48h]
  NavLaddersAndElevators_t *v39; // [rsp+28h] [rbp-48h]
  int v40; // [rsp+28h] [rbp-48h]
  double v41; // [rsp+28h] [rbp-48h]
  int v42; // [rsp+28h] [rbp-48h]
  float v44; // [rsp+38h] [rbp-38h]
  int v45; // [rsp+38h] [rbp-38h]
  NavLaddersAndElevators_t *v46; // [rsp+38h] [rbp-38h]
  double y; // [rsp+38h] [rbp-38h]
  NavLaddersAndElevators_t *v48; // [rsp+38h] [rbp-38h]

  m_pLaddersAndElevators = rArea->m_pLaddersAndElevators;
  if ( m_pLaddersAndElevators == 0 )
  {
    m_pLaddersAndElevators = operator new(0x20u);
    m_pLaddersAndElevators->m_ladders[0].m_pData = 0;
    m_pLaddersAndElevators->m_ladders[1].m_pData = 0;
    m_pLaddersAndElevators->m_elevatorAreas.m_pData = 0;
    rArea->m_pLaddersAndElevators = m_pLaddersAndElevators;
  }
  m_pLaddersAndElevators->m_pElevatorEntity = 0;
  v5 = rArea->m_pLaddersAndElevators;
  if ( v5->m_elevatorAreas.m_pData != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
    v5->m_elevatorAreas.m_pData = 0;
  }
  v6 = *(pElevator + 358);
  m_rNavMesh = rArea->m_rNavMesh;
  z = rArea->m_vCenter.z;
  if ( v6 > 0 )
  {
    v9 = *(pElevator + 180);
    v10 = 0;
    v11 = 0;
    v12 = 1106247680;
    while ( (*(v9 + v10) + 30.0) < z || z < (*(v9 + v10) - 30.0) )
    {
      ++v11;
      v10 += 24;
      if ( v11 == v6 )
        return;
    }
    v13 = rArea->m_pLaddersAndElevators;
    if ( v13->m_pElevatorEntity != 0 )
    {
      Warning("Multiple elevators overlap navigation area #%d\n", rArea->m_AreaId);
    }
    else
    {
      v13->m_pElevatorEntity = pElevator;
      if ( *(pElevator + 358) > 0 )
      {
        v14 = 0;
        do
        {
          if ( v14 != v11 )
          {
            v36 = *(pElevator + 180) + 24 * v14;
            m_Size = m_rNavMesh->m_NavAreas.m_Size;
            if ( m_Size == 0 )
              goto LABEL_32;
            v16 = 0;
            flFloorAreaSize = 0.0;
            pFloorArea = 0;
            v38 = 8LL * (m_Size - 1) + 8;
            do
            {
              v44 = *&v12;
              v17 = m_rNavMesh->m_NavAreas.m_Memory.m_pMemory[v16 / 8];
              IsOverlappingExtent = CNavPoly::IsOverlappingExtent(v17, rElevatorExtent);
              v12 = LODWORD(v44);
              if ( IsOverlappingExtent )
              {
                v19 = v17->m_vCenter.z;
                if ( (*v36 + v44) >= v19 && v19 >= (*v36 - v44) && v17->m_flSurfaceArea > flFloorAreaSize )
                {
                  flFloorAreaSize = v17->m_flSurfaceArea;
                  pFloorArea = v17;
                }
              }
              v16 += 8LL;
            }
            while ( v16 != v38 );
            if ( pFloorArea != 0 )
            {
              m_pData = rArea->m_pLaddersAndElevators->m_elevatorAreas.m_pData;
              if ( m_pData != 0 )
              {
                v37 = LODWORD(v44);
                v39 = rArea->m_pLaddersAndElevators;
                v45 = m_pData->m_Size;
                v21 = 16LL * (m_pData->m_Size + 1) + 8;
                v22 = (*(*g_pMemAlloc + 128LL))(g_pMemAlloc);
                v23 = v45;
                v24 = v39;
                v12 = v37;
                if ( v21 > v22 )
                {
                  v27 = v39->m_elevatorAreas.m_pData;
                  v40 = v45;
                  v46 = v24;
                  v25 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v27, v21);
                  v24 = v46;
                  v23 = v40;
                  v12 = v37;
                  v46->m_elevatorAreas.m_pData = v25;
                }
                else
                {
                  v25 = v39->m_elevatorAreas.m_pData;
                }
              }
              else
              {
                v48 = rArea->m_pLaddersAndElevators;
                v42 = v12;
                v30 = (**g_pMemAlloc)(g_pMemAlloc, 24);
                v24 = v48;
                v23 = 0;
                v12 = v42;
                v48->m_elevatorAreas.m_pData = v30;
                v30->m_Size = 0;
                v25 = v48->m_elevatorAreas.m_pData;
              }
              v26 = v25 + 16LL * v23;
              *(v26 + 16) = -1;
              *(v26 + 8) = pFloorArea;
              ++v24->m_elevatorAreas.m_pData->m_Size;
            }
            else
            {
LABEL_32:
              pFloorAreaa = v12;
              v41 = CBaseEntity::GetAbsOrigin(pElevator)->z;
              y = CBaseEntity::GetAbsOrigin(pElevator)->y;
              AbsOrigin = CBaseEntity::GetAbsOrigin(pElevator);
              v29 = "";
              if ( *(v36 + 8) != 0 )
                v29 = *(v36 + 8);
              Warning(
                "Floor %d ('%s') of elevator at ( %3.2f, %3.2f, %3.2f ) has no matching navigation areas\n",
                v14,
                v29,
                AbsOrigin->x,
                y,
                v41);
              v12 = pFloorAreaa;
            }
          }
          ++v14;
        }
        while ( v14 < *(pElevator + 358) );
      }
    }
  }
}


// CZombieBorder::GetDataDescMap  (line 901, @0x0000000002ec6940, libserver.so)
// globals: CZombieBorder::m_DataMap
datamap_t *__fastcall CZombieBorder::GetDataDescMap(CZombieBorder *const this)
{
  return &CZombieBorder::m_DataMap;
}


// CZombieBorder::AddDatadescMetadataKeys  (line 901, @0x0000000002ed7080, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CZombieBorder::GetEntityClass(void)
void __fastcall CZombieBorder::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CZombieBorder::GetEntityClass);
}


// CZombieBorder::GetBaseMap  (line 901, @0x0000000002ed70a0, libserver.so)
datamap_t *__cdecl CZombieBorder::GetBaseMap()
{
  return &CServerOnlyPointEntity::m_DataMap;
}


// DataMapInit<CZombieBorder>  (line 901, @0x0000000002ed70b0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_nav_mesh_02.cpp
// strings: "CZombieBorder"
// globals: `guard variable for'DataMapInit<CZombieBorder>(CZombieBorder *)::nameHolder, CZombieBorder::GetEntityClass(void), CZombieBorder::m_DataMap, DataMapInit<CZombieBorder>(CZombieBorder *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CZombieBorder>(CZombieBorder *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CZombieBorder>(CZombieBorder *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CZombieBorder>(CZombieBorder *)::nameHolder) != 0 )
  {
    DataMapInit<CZombieBorder>(CZombieBorder *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CZombieBorder>(CZombieBorder *)::nameHolder.m_pszBase = "CZombieBorder";
    DataMapInit<CZombieBorder>(CZombieBorder *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CZombieBorder>(CZombieBorder *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CZombieBorder>(CZombieBorder *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CZombieBorder>(CZombieBorder *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CZombieBorder>(CZombieBorder *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CZombieBorder>(CZombieBorder *)::nameHolder,
      &_dso_handle);
  }
  CZombieBorder::m_DataMap.dataNumFields = 4;
  CZombieBorder::m_DataMap.baseMap = &CServerOnlyPointEntity::m_DataMap;
  CZombieBorder::m_DataMap.dataDesc = &DataMapInit<CZombieBorder>(CZombieBorder *)::dataDesc[1];
  AddDatadescMetadataKeys(&CZombieBorder::m_DataMap, CZombieBorder::GetEntityClass);
  return &CZombieBorder::m_DataMap;
}


// CZombieBorder::CZombieBorder  (line 915, @0x0000000002eeeae0, libserver.so)  // inlines: AddToTail, CServerOnlyEntity, CServerOnlyPointEntity, CopyConstruct<CZombieBorder*>, Element, GrowMemory, operator[], ~CServerOnlyEntity, ~CServerOnlyPointEntity
// calls: CBaseEntity::CBaseEntity, CUtlMemory<CZombieBorder*, int>::Grow, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CZombieBorder::CEntityInstanceEntityClass::ConstructInstance
// globals: g_zombieBorders
void __fastcall CZombieBorder::CZombieBorder(CZombieBorder *const this)
{
  __int64 m_Size; // rbx
  int v3; // eax
  CZombieBorder **v4; // rax

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_47B0090;
  m_Size = g_zombieBorders.m_Size;
  v3 = g_zombieBorders.m_Size;
  if ( g_zombieBorders.m_Size == g_zombieBorders.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CZombieBorder *,int>::Grow(&g_zombieBorders.m_Memory, 1);
    v3 = g_zombieBorders.m_Size;
  }
  g_zombieBorders.m_Size = v3 + 1;
  v4 = &g_zombieBorders.m_Memory.m_pMemory[m_Size];
  if ( v4 != 0 )
    *v4 = this;
}


// CZombieBorder::~CZombieBorder  (line 922, @0x0000000002ec9140, libserver.so)  // inlines: Element, Find, FindAndRemove, Remove, ShiftElementsLeft, V_memmove, memmove, operator[], ~CServerOnlyEntity, ~CServerOnlyPointEntity
// calls: CBaseEntity::~CBaseEntity, memmove
// callers: CZombieBorder::~CZombieBorder
// globals: g_zombieBorders
void __fastcall CZombieBorder::~CZombieBorder(CZombieBorder *const this)
{
  int m_Size; // ecx
  CZombieBorder **v3; // rdx
  int v4; // eax

  this->_vptr_IHandleEntity = &off_47B0090;
  m_Size = g_zombieBorders.m_Size;
  if ( g_zombieBorders.m_Size > 0 )
  {
    if ( this == *g_zombieBorders.m_Memory.m_pMemory )
    {
      v4 = 0;
LABEL_8:
      if ( g_zombieBorders.m_Size - v4 - 1 > 0 )
      {
        memmove(
          &g_zombieBorders.m_Memory.m_pMemory[v4],
          &g_zombieBorders.m_Memory.m_pMemory[v4 + 1],
          8LL * (g_zombieBorders.m_Size - v4 - 1));
        m_Size = g_zombieBorders.m_Size;
      }
      g_zombieBorders.m_Size = m_Size - 1;
    }
    else
    {
      v3 = g_zombieBorders.m_Memory.m_pMemory + 1;
      v4 = 0;
      while ( ++v4 != g_zombieBorders.m_Size )
      {
        if ( this == *v3++ )
        {
          if ( v4 == -1 )
            break;
          goto LABEL_8;
        }
      }
    }
  }
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CZombieBorder::~CZombieBorder  (line 922, @0x0000000002ec91f0, libserver.so)
// calls: CZombieBorder::~CZombieBorder, CBaseEntity::operator delete
void __fastcall CZombieBorder::~CZombieBorder(CZombieBorder *const this)
{
  CZombieBorder::~CZombieBorder(this);
  CBaseEntity::operator delete(this);
}


// CZombieBorder::InputEnable  (line 929, @0x0000000002ec6950, libserver.so)
void __fastcall CZombieBorder::InputEnable(CZombieBorder *const this, inputdata_t *const rInputdata)
{
  this->m_bDisabled = 0;
}


// CZombieBorder::InputDisable  (line 936, @0x0000000002ec6960, libserver.so)
void __fastcall CZombieBorder::InputDisable(CZombieBorder *const this, inputdata_t *const rInputdata)
{
  this->m_bDisabled = 1;
}


// CZombieBorder::Spawn  (line 943, @0x0000000002ec6eb0, libserver.so)
// calls: CServerOnlyPointEntity::Spawn, CBaseEntity::GetAbsAngles, AngleVectors
void __fastcall CZombieBorder::Spawn(CZombieBorder *const this, const CEntityKeyValues *pKeyValues)
{
  const QAngle *AbsAngles; // rax

  CServerOnlyPointEntity::Spawn(this, pKeyValues);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AngleVectors(AbsAngles, &this->m_vecForward, 0, 0);
}


// CZombieBorder::IsBehindZombieBorder  (line 952, @0x0000000002ed7180, libserver.so)  // inlines: DotProduct, VectorSubtract, operator-
// calls: CBaseEntity::GetAbsOrigin
// globals: g_zombieBorders
bool __fastcall CZombieBorder::IsBehindZombieBorder(const Vector *const vPos)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rbx
  CZombieBorder **m_pMemory; // rdx
  CZombieBorder *v5; // rdi
  const Vector *AbsOrigin; // rax

  if ( g_zombieBorders.m_Size <= 0 )
    return 0;
  v2 = 8LL * (g_zombieBorders.m_Size - 1) + 8;
  v3 = 0;
  m_pMemory = g_zombieBorders.m_Memory.m_pMemory;
  do
  {
    v5 = m_pMemory[v3 / 8];
    if ( !v5->m_bDisabled )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
      m_pMemory = g_zombieBorders.m_Memory.m_pMemory;
      if ( ((((vPos->x - AbsOrigin->x) * g_zombieBorders.m_Memory.m_pMemory[v3 / 8]->m_vecForward.x)
           + ((vPos->y - AbsOrigin->y) * g_zombieBorders.m_Memory.m_pMemory[v3 / 8]->m_vecForward.y))
          + ((vPos->z - AbsOrigin->z) * g_zombieBorders.m_Memory.m_pMemory[v3 / 8]->m_vecForward.z)) < 0.0 )
        return 1;
    }
    v3 += 8LL;
  }
  while ( v3 != v2 );
  return 0;
}


