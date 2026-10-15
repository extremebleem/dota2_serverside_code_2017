// Reconstructed from DWARF by pahole; not original source.

// src/public/particles/particles.h:75
struct HProjectedTexture__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/particles/particles.h:76
struct HDeferredLight__ {
	int unused;  // +0x0

	// sizeof = 4
};

// src/public/particles/particles.h:142
struct ParticleCollectionPerf_t {
	const char * szStageName;  // +0x0
	uint32 nScopeEnd;  // +0x10
	ParticleCollectionPerf_t();

	// sizeof = 24
};

// src/public/particles/particles.h:177
class IParticleSnapshot {
	int ()() * * _vptr.IParticleSnapshot;  // +0x0
	typedef CUtlVector<IParticleSnapshot::AttributeMap, CUtlMemory<IParticleSnapshot::AttributeMap, int> > AttributeMapVector;
	IParticleSnapshot();
	virtual bool Unserialize(const char *);
	virtual bool Serialize(const char *, bool);
	virtual bool Serialize(CUtlBuffer *, bool);
	virtual bool Init(int, int, int, const AttributeMapVector &);
	/* tag__fprintf: const_type tag not supported! */;
	virtual bool Init(int, int, int, ...);
	virtual void InitFromVertices(int, const Vector *, const Vector *, const Vector *);
	virtual float * ElementPointerf(int, int, int, int);
	virtual FourVectors * ElementPointer4V(int, int, int, int);
	virtual CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > & GetBoneNameList();

protected:

	virtual ~IParticleSnapshot();

	// vtable[0] Unserialize
	// vtable[1] Serialize
	// vtable[2] Serialize
	// vtable[3] Init
	// vtable[4] Init
	// vtable[5] InitFromVertices
	// vtable[6] ElementPointerf
	// vtable[7] ElementPointer4V
	// vtable[8] GetBoneNameList
	// sizeof = 8
};

// src/public/particles/particles.h:279
class IParticleCollection {
	enum KillCompactionMethod_t {
		KCM_SHIFT = 0,
		KCM_FASTREMOVE = 0x1,
	};

	int ()() * * _vptr.IParticleCollection;  // +0x0
private:

protected:

	IParticleCollection();

private:

	virtual void * GetOwner();
	virtual void SetAssociatedObject(void *);
	virtual void * GetAssociatedObject();
	virtual bool IsValid();
	virtual bool IsFullyValid();
	virtual HParticleSystemDefinition GetDefinition();
	const IParticleSystemDefinition * GetDefinitionPtr();
	virtual IParticleCollection * GetParentCollection();
	virtual IParticleCollection * GetFirstChildCollection();
	virtual IParticleCollection * GetNextSiblingCollection();
	virtual IParticleCollection * GetNextCollectionUsingSameDef();
	virtual bool UsesPowerOfTwoFrameBufferTexture(bool);
	virtual bool UsesFullFrameBufferTexture(bool);
	virtual bool IsTranslucent();
	virtual bool IsTwoPass();
	virtual bool IsBatchable();
	virtual int GetHighestControlPoint();
	virtual void SetControlPointParent(int, int);
	virtual void SetControlPoint(int, const Vector &);
	virtual int GetControlPointIndexFromName(CUtlStringToken);
	virtual void SetControlPoint(CUtlStringToken, const Vector &);
	virtual void SetControlPointObject(int, void *);
	virtual void SetControlPointOrientation(int, const Vector &, const Vector &, const Vector &);
	void SetControlPointOrientationFLU(int, const Vector &, const Vector &, const Vector &);
	virtual void SetControlPointForwardVector(int, const Vector &);
	virtual void SetControlPointUpVector(int, const Vector &);
	virtual void SetControlPointRightVector(int, const Vector &);
	void SetControlPointLeftVector(int, const Vector &);
	virtual void SetControlPointOrientation(int, const Quaternion &);
	virtual void SetControlPointSnapshot(int, IParticleSnapshot *);
	virtual const Vector & GetControlPointPosition(int);
	virtual bool IsControlPointSet(int);
	virtual void GetControlPointOrientation(int, Vector *, Vector *, Vector *);
	void GetControlPointOrientationFLU(int, Vector *, Vector *, Vector *);
	virtual int GetControlPointParent(int);
	virtual void * GetControlPointObject(int);
	virtual const CModelHitBoxesInfo & ControlPointHitBox(int);
	virtual bool UsesParticleModelCPData();
	virtual bool ReadsControlPoint(int);
	virtual bool IsNonPositionalControlPoint(int);
	virtual bool ResetOnControlPointChange(int);
	virtual void Restart(EParticleRestartMode_t);
	virtual void FullRestart();
	virtual void Simulate(float);
	virtual void SleepingSimulate(float);
	virtual void SkipToTime(float);
	virtual float GetSimulationTime();
	virtual bool IsFinished();
	virtual bool DependsOnSystem(HParticleSystemDefinition);
	virtual float GetNextSleepTime();
	virtual void UpdateNextSleepTime();
	virtual float GetFloatAttributeValue(int, int);
	virtual int GetIntAttributeValue(int, int);
	virtual Vector GetVectorAttributeValue(int, int);
	virtual void SetFloatAttributeValue(int, int, float);
	virtual void SetIntAttributeValue(int, int, int);
	virtual void SetVectorAttributeValue(int, int, const Vector &);
	virtual Vector SumVectorAttribute(int);
	virtual float SumFloatAttribute(int);
	virtual Vector SumOfTintTimesAlpha();
	virtual HRenderTexture GetStatusEffectTexture(int, int);
	virtual bool IsBoundsValid();
	virtual const Vector & MinBounds();
	virtual const Vector & MaxBounds();
	virtual const Vector & MinUnbloatedBounds();
	virtual const Vector & MaxUnbloatedBounds();
	virtual void SetMinBounds(Vector);
	virtual void SetMaxBounds(Vector);
	void SetMinMaxBoundsToPoint(Vector);
	virtual bool BloatBoundsUsingControlPoint();
	virtual void DrawDebug(IRenderContext *, const ISceneView *, ISceneLayer *, int);
	virtual void StartEmission(bool);
	virtual void StopEmission(bool, bool, bool, bool);
	virtual bool IsEmissionStopped();
	virtual bool IsEmitting();
	virtual float GetMinimumTimeStepModifier();
	virtual void StartQueuedEmission();
	virtual void SetDormant(bool);
	virtual bool IsDormant();
	virtual int ActiveParticleCount(bool);
	virtual int AllocatedParticleCount();
	virtual int GetMaxAllowedParticleCount();
	virtual int AddActiveParticles(int);
	virtual KillCompactionMethod_t KillParticleIndices(int *, int);
	virtual void VisualizeOperator(const DmObjectId_t *);
	virtual float GetDefCullRadius();
	virtual int GetDefCullControlPoint();
	virtual void GetControlPointAtTime(int, float, Vector *);
	virtual void SetQueuedStartEmission(bool);
	virtual bool GetQueuedStartEmission();
	virtual bool IsFrozen();
	virtual void SetFrozen(bool);
	virtual void SetSnapshot(const char *);
	virtual void SetLayerMatchID(CUtlStringToken);

protected:

	virtual ~IParticleCollection();
	virtual void SetRenderableOwner(void *);
	virtual void SetQueryInterface(IParticleSystemQuery *);
	virtual void SetAttributeToConstant(int, float);
	virtual void SetAttributeToConstant(int, float, float, float);
	virtual void SetOverrideTexture(HRenderTexture);
	virtual void SetOwningSceneObject(CSceneParticleObject *);
	virtual CSceneParticleObject * GetOwningSceneObject();
	virtual void SetMaterialOverride(HMaterial);
	virtual bool GetRenderingEnabled();
	virtual void SetRenderingEnabled(bool);
	virtual bool InEndCap();
	virtual ParticleCollectionFlags_t GetFlags();
	virtual void SetFlags(ParticleCollectionFlags_t);
	virtual void RemoveFlags(ParticleCollectionFlags_t);
	virtual void GetSecondarySceneObjects(CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > &);
	virtual bool HasAttribute(int);
	virtual void SetMinimumTimeStepModifier(float);
	virtual int GetPerformanceData(ParticleCollectionPerf_t * *);
	virtual void OnSleepingStateChanged(bool);
	virtual bool ValidateSystem(bool *, CUtlString *);
	virtual int GetSystemParticleCount();
	virtual int GetSystemMaxParticleCount();
	virtual int GetTotalSystemCount();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] GetOwner
	// vtable[2] SetAssociatedObject
	// vtable[3] GetAssociatedObject
	// vtable[4] IsValid
	// vtable[5] IsFullyValid
	// vtable[6] GetDefinition
	// vtable[7] GetParentCollection
	// vtable[8] GetFirstChildCollection
	// vtable[9] GetNextSiblingCollection
	// vtable[10] GetNextCollectionUsingSameDef
	// vtable[11] UsesPowerOfTwoFrameBufferTexture
	// vtable[12] UsesFullFrameBufferTexture
	// vtable[13] IsTranslucent
	// vtable[14] IsTwoPass
	// vtable[15] IsBatchable
	// vtable[16] GetHighestControlPoint
	// vtable[17] SetControlPointParent
	// vtable[18] SetControlPoint
	// vtable[19] GetControlPointIndexFromName
	// vtable[20] SetControlPoint
	// vtable[21] SetControlPointObject
	// vtable[22] SetControlPointOrientation
	// vtable[23] SetControlPointForwardVector
	// vtable[24] SetControlPointUpVector
	// vtable[25] SetControlPointRightVector
	// vtable[26] SetControlPointOrientation
	// vtable[27] SetControlPointSnapshot
	// vtable[28] GetControlPointPosition
	// vtable[29] IsControlPointSet
	// vtable[30] GetControlPointOrientation
	// vtable[31] GetControlPointParent
	// vtable[32] GetControlPointObject
	// vtable[33] ControlPointHitBox
	// vtable[34] UsesParticleModelCPData
	// vtable[35] ReadsControlPoint
	// vtable[36] IsNonPositionalControlPoint
	// vtable[37] ResetOnControlPointChange
	// vtable[38] Restart
	// vtable[39] FullRestart
	// vtable[40] Simulate
	// vtable[41] SleepingSimulate
	// vtable[42] SkipToTime
	// vtable[43] GetSimulationTime
	// vtable[44] IsFinished
	// vtable[45] DependsOnSystem
	// vtable[46] GetNextSleepTime
	// vtable[47] UpdateNextSleepTime
	// vtable[48] GetFloatAttributeValue
	// vtable[49] GetIntAttributeValue
	// vtable[50] GetVectorAttributeValue
	// vtable[51] SetFloatAttributeValue
	// vtable[52] SetIntAttributeValue
	// vtable[53] SetVectorAttributeValue
	// vtable[54] SumVectorAttribute
	// vtable[55] SumFloatAttribute
	// vtable[56] SumOfTintTimesAlpha
	// vtable[57] GetStatusEffectTexture
	// vtable[58] IsBoundsValid
	// vtable[59] MinBounds
	// vtable[60] MaxBounds
	// vtable[61] MinUnbloatedBounds
	// vtable[62] MaxUnbloatedBounds
	// vtable[63] SetMinBounds
	// vtable[64] SetMaxBounds
	// vtable[65] BloatBoundsUsingControlPoint
	// vtable[66] DrawDebug
	// vtable[67] StartEmission
	// vtable[68] StopEmission
	// vtable[69] IsEmissionStopped
	// vtable[70] IsEmitting
	// vtable[71] GetMinimumTimeStepModifier
	// vtable[72] StartQueuedEmission
	// vtable[73] SetDormant
	// vtable[74] IsDormant
	// vtable[75] ActiveParticleCount
	// vtable[76] AllocatedParticleCount
	// vtable[77] GetMaxAllowedParticleCount
	// vtable[78] AddActiveParticles
	// vtable[79] KillParticleIndices
	// vtable[80] VisualizeOperator
	// vtable[81] GetDefCullRadius
	// vtable[82] GetDefCullControlPoint
	// vtable[83] GetControlPointAtTime
	// vtable[84] SetQueuedStartEmission
	// vtable[85] GetQueuedStartEmission
	// vtable[86] IsFrozen
	// vtable[87] SetFrozen
	// vtable[88] SetSnapshot
	// vtable[89] SetLayerMatchID
	// vtable[92] SetRenderableOwner
	// vtable[93] SetQueryInterface
	// vtable[94] SetAttributeToConstant
	// vtable[95] SetAttributeToConstant
	// vtable[96] SetOverrideTexture
	// vtable[97] SetOwningSceneObject
	// vtable[98] GetOwningSceneObject
	// vtable[99] SetMaterialOverride
	// vtable[100] GetRenderingEnabled
	// vtable[101] SetRenderingEnabled
	// vtable[102] InEndCap
	// vtable[103] GetFlags
	// vtable[104] SetFlags
	// vtable[105] RemoveFlags
	// vtable[106] GetSecondarySceneObjects
	// vtable[107] HasAttribute
	// vtable[108] SetMinimumTimeStepModifier
	// vtable[109] GetPerformanceData
	// vtable[110] OnSleepingStateChanged
	// vtable[111] ValidateSystem
	// vtable[112] GetSystemParticleCount
	// vtable[113] GetSystemMaxParticleCount
	// vtable[114] GetTotalSystemCount
	// sizeof = 16
};

// src/public/particles/particles.h:616
class IControlPointEditorData {
	int ()() * * _vptr.IControlPointEditorData;  // +0x0
private:

	IControlPointEditorData();

	virtual ~IControlPointEditorData();
	virtual bool GetDefaultValuesForControlPoint(int, Vector &);
	virtual ControlPointType_t GetControlPointType(int, int);
	virtual const char * GetControlPointLabel(int, int);
	virtual bool ContentsEqual(const IControlPointEditorData *);
	virtual void CopyFrom(const IControlPointEditorData *);
	virtual bool HasActiveControlPoint(int);

	// vtable[0] Schema_DynamicBinding
	// vtable[3] GetDefaultValuesForControlPoint
	// vtable[4] GetControlPointType
	// vtable[5] GetControlPointLabel
	// vtable[6] ContentsEqual
	// vtable[7] CopyFrom
	// vtable[8] HasActiveControlPoint
	// sizeof = 8
};

// src/public/particles/particles.h:1072
struct ModelHitBoxInfo_t {
	ModelHitBoxInfo_t();

	// sizeof = 72
};

// src/public/particles/particles.h:1079
class CModelHitBoxesInfo {
	float m_flLastUpdateTime;  // +0x0
	float m_flPrevLastUpdateTime;  // +0x4
	int m_nLastQueryEconSlot;  // +0xc
	bool m_bLastQueryOriginalModel;  // +0x10
	bool m_bLastQueryGenerateHitBoxesFromBones;  // +0x11

	int m_nAllocatedHitBoxCount;  // +0x14
	int16 m_nNumHitBoxes;  // +0x18
	int16 m_nNumPrevHitBoxes;  // +0x1a

	bool CurAndPrevValid();
	CModelHitBoxesInfo();
	~CModelHitBoxesInfo();

	// sizeof = 48
};

// src/public/particles/particles.h:1158
struct ParticleModelQueryInfo_t {
	HModel m_hModel;  // +0x0
	MeshGroupMask_t m_meshGroupMask;  // +0x8
	ParticleModelQueryInfo_t();

	// sizeof = 16
};

// src/public/particles/particles.h:1164
struct ParticleProjectedTextureInfo_t {
	HMaterial m_hMaterial;  // +0x8
	float m_flRadius;  // +0x1c
	float m_flRotation;  // +0x20
	float m_flNearZ;  // +0x24
	float m_flFarZ;  // +0x28
	int m_nSequence;  // +0x3c
	float m_flFalloffCenter;  // +0x40
	bool m_bFlipHorizontal;  // +0x44
	bool m_bProjectOnWorld;  // +0x45
	bool m_bProjectOnCharacters;  // +0x46
	bool m_bProjectOnWater;  // +0x47
	ParticleProjectedTextureInfo_t();

	// sizeof = 72
};

// src/public/particles/particles.h:1183
class IParticleSystemQuery {
	int ()() * * _vptr.IParticleSystemQuery;  // +0x0
	IParticleSystemQuery(IParticleSystemQuery &);
	IParticleSystemQuery(const IParticleSystemQuery &);
	IParticleSystemQuery();
	virtual bool IsEditor();
	virtual void GetLightingAtPoint(const Vector &, Color &);
	virtual void TraceLine(const Vector &, const Vector &, uint64, const CBaseEntity *, int, CBaseTrace *, bool);
	virtual bool ArePointsInControllingObjectHitBoxes(IParticleCollection *, int, int, Vector *, bool *, bool, const char *);
	virtual int GetRayTraceEnvironmentFromName(const char *);
	virtual int GetCollisionGroupFromName(const char *);
	virtual void GetClosestControllingObjectHitBox(IParticleCollection *, int, int, float, Vector *, Vector *, int *, int, const char *);
	virtual int GetControllingObjectHitBoxTransforms(IParticleCollection *, int, const CHitBoxSet *, int, matrix3x4a_t *);
	virtual int GetControllingObjectBoneInfo(IParticleCollection *, int, int, ModelHitBoxInfo_t *);
	virtual void GetControllingObjectOBBox(IParticleCollection *, int, Vector &, Vector &);
	virtual matrix3x4_t GetControllingObjectBoneTransform(IParticleCollection *, int, int);
	virtual void TraceAgainstRayTraceEnv(int, const FourRays &, fltx4, fltx4, RayTracingResult_t *, int32);
	virtual Vector GetLocalPlayerPos();
	virtual void GetLocalPlayerEyeVectors(Vector *, Vector *, Vector *);
	void GetLocalPlayerEyeVectorsFLU(Vector *, Vector *, Vector *);
	virtual int GetActivityCount();
	virtual const char * GetActivityNameFromIndex(int);
	virtual HSequence GetActivityNumber(HModel, const char *);
	virtual HSequence GetSequenceFromModel(IParticleCollection *, int, float *);
	virtual float GetScaleFromCPObject(IParticleCollection *, int);
	virtual float GetPointVisibilityPercentage(Vector &, float &);
	virtual void DebugDrawLine(const Vector &, const Vector &, int, int, int, bool, float);
	virtual void GetModelFromCPObject(IParticleCollection *, int, int, bool, ParticleModelQueryInfo_t *);
	virtual void UpdateProjectedTexture(const ParticleProjectedTextureInfo_t &, HProjectedTexture &);
	virtual void DeleteProjectedTexture(HProjectedTexture);
	virtual CSceneObject * UpdateDeferredLight(ISceneWorld *, HRenderTexture, Vector &, float, Vector4D &, float, float, float, Vector, float, float, float, float, float, HDeferredLight &);
	virtual void DeleteDeferredLight(HDeferredLight);
	virtual void UpdateSoundPatch(const char *, Vector &, float, float, float, float, int, void * &);
	virtual void DeleteParticleSound(void * &);
	virtual void SetClothForceVector(ClothForceVector_t, Vector &, void * &);
	virtual void SetClothForceFloat(ClothForceFloat_t, float, void * &);
	virtual void ForceBoneSetup(IParticleCollection *, int);
	virtual void ScreenShakeGlobal(const Vector &, float, float, float, float);
	virtual void ScreenShakeLocal(Vector, float, float, float, IParticleCollection *, int);
	virtual int GetEconLoadoutTypeCount();
	virtual const char * GetEconSlotName(int);
	virtual int GetEconLoadoutSlotType(const char *);
	virtual Vector GetWindVelocityAtLocation(const Vector &);
	virtual float32 GetAnimDecodeRealTime();
	virtual Vector GetTimeOfDayValue(CUtlStringToken, const Vector &);
	virtual void GetControllingObjectRenderBounds(IParticleCollection *, int, Vector *, Vector *, matrix3x4_t *);
	virtual bool IsPointUnderWater(IParticleCollection *, Vector, float &);
	virtual void AddGrassFlattenEvent(ISceneWorld *, const Vector &, float, const Vector &, float);
	virtual void AddShakeTreesInRadiusEvent(const Vector &, const Vector &, float, float, float, float, float, float, float);

	// vtable[0] IsEditor
	// vtable[1] GetLightingAtPoint
	// vtable[2] TraceLine
	// vtable[3] ArePointsInControllingObjectHitBoxes
	// vtable[4] GetRayTraceEnvironmentFromName
	// vtable[5] GetCollisionGroupFromName
	// vtable[6] GetClosestControllingObjectHitBox
	// vtable[7] GetControllingObjectHitBoxTransforms
	// vtable[8] GetControllingObjectBoneInfo
	// vtable[9] GetControllingObjectOBBox
	// vtable[10] GetControllingObjectBoneTransform
	// vtable[11] TraceAgainstRayTraceEnv
	// vtable[12] GetLocalPlayerPos
	// vtable[13] GetLocalPlayerEyeVectors
	// vtable[14] GetActivityCount
	// vtable[15] GetActivityNameFromIndex
	// vtable[16] GetActivityNumber
	// vtable[17] GetSequenceFromModel
	// vtable[18] GetScaleFromCPObject
	// vtable[19] GetPointVisibilityPercentage
	// vtable[20] DebugDrawLine
	// vtable[21] GetModelFromCPObject
	// vtable[22] UpdateProjectedTexture
	// vtable[23] DeleteProjectedTexture
	// vtable[24] UpdateDeferredLight
	// vtable[25] DeleteDeferredLight
	// vtable[26] UpdateSoundPatch
	// vtable[27] DeleteParticleSound
	// vtable[28] SetClothForceVector
	// vtable[29] SetClothForceFloat
	// vtable[30] ForceBoneSetup
	// vtable[31] ScreenShakeGlobal
	// vtable[32] ScreenShakeLocal
	// vtable[33] GetEconLoadoutTypeCount
	// vtable[34] GetEconSlotName
	// vtable[35] GetEconLoadoutSlotType
	// vtable[36] GetWindVelocityAtLocation
	// vtable[37] GetAnimDecodeRealTime
	// vtable[38] GetTimeOfDayValue
	// vtable[39] GetControllingObjectRenderBounds
	// vtable[40] IsPointUnderWater
	// vtable[41] AddGrassFlattenEvent
	// vtable[42] AddShakeTreesInRadiusEvent
	// sizeof = 16
};

// src/public/particles/particles.h:1392
class MParticleOperatorType {
	const char * TagName();
	bool IsPresent(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool IsPresent(FieldIntrospectionHandle_t);
	bool IsPresent(StaticFieldIntrospectionHandle_t);
	bool IsPresent(EnumIntrospectionHandle_t);
	bool IsPresent(EnumeratorIntrospectionHandle_t);
	bool IsPresent(AtomicTypeIntrospectionHandle_t);
	bool IsPresent(MetadataIntrospectionHandle_t);
	bool IsPresent(FieldIteratorHandle_t);
	void FindBindingsWithTag(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsWithTag(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *);
	ParticleOperatorId_t * GetPtr(ClassIntrospectionHandle_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void GetAllPtrs(ClassIntrospectionHandle_t, CUtlVector<ParticleOperatorId_t*, CUtlMemory<ParticleOperatorId_t*, int> > &, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	ParticleOperatorId_t GetValue(ClassIntrospectionHandle_t, ParticleOperatorId_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	bool TestAndGetValue(ClassIntrospectionHandle_t, ParticleOperatorId_t *, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	ParticleOperatorId_t * GetPtr(FieldIntrospectionHandle_t);
	void GetAllPtrs(FieldIntrospectionHandle_t, CUtlVector<ParticleOperatorId_t*, CUtlMemory<ParticleOperatorId_t*, int> > &);
	ParticleOperatorId_t GetValue(FieldIntrospectionHandle_t, ParticleOperatorId_t);
	bool TestAndGetValue(FieldIntrospectionHandle_t, ParticleOperatorId_t *);
	ParticleOperatorId_t * GetPtr(StaticFieldIntrospectionHandle_t);
	void GetAllPtrs(StaticFieldIntrospectionHandle_t, CUtlVector<ParticleOperatorId_t*, CUtlMemory<ParticleOperatorId_t*, int> > &);
	ParticleOperatorId_t GetValue(StaticFieldIntrospectionHandle_t, ParticleOperatorId_t);
	bool TestAndGetValue(StaticFieldIntrospectionHandle_t, ParticleOperatorId_t *);
	ParticleOperatorId_t * GetPtr(EnumIntrospectionHandle_t);
	void GetAllPtrs(EnumIntrospectionHandle_t, CUtlVector<ParticleOperatorId_t*, CUtlMemory<ParticleOperatorId_t*, int> > &);
	ParticleOperatorId_t GetValue(EnumIntrospectionHandle_t, ParticleOperatorId_t);
	bool TestAndGetValue(EnumIntrospectionHandle_t, ParticleOperatorId_t *);
	ParticleOperatorId_t * GetPtr(EnumeratorIntrospectionHandle_t);
	void GetAllPtrs(EnumeratorIntrospectionHandle_t, CUtlVector<ParticleOperatorId_t*, CUtlMemory<ParticleOperatorId_t*, int> > &);
	ParticleOperatorId_t GetValue(EnumeratorIntrospectionHandle_t, ParticleOperatorId_t);
	bool TestAndGetValue(EnumeratorIntrospectionHandle_t, ParticleOperatorId_t *);
	ParticleOperatorId_t * GetPtr(AtomicTypeIntrospectionHandle_t);
	void GetAllPtrs(AtomicTypeIntrospectionHandle_t, CUtlVector<ParticleOperatorId_t*, CUtlMemory<ParticleOperatorId_t*, int> > &);
	ParticleOperatorId_t GetValue(AtomicTypeIntrospectionHandle_t, ParticleOperatorId_t);
	bool TestAndGetValue(AtomicTypeIntrospectionHandle_t, ParticleOperatorId_t *);
	ParticleOperatorId_t * GetPtr(MetadataIntrospectionHandle_t);
	void GetAllPtrs(MetadataIntrospectionHandle_t, CUtlVector<ParticleOperatorId_t*, CUtlMemory<ParticleOperatorId_t*, int> > &);
	ParticleOperatorId_t GetValue(MetadataIntrospectionHandle_t, ParticleOperatorId_t);
	bool TestAndGetValue(MetadataIntrospectionHandle_t, ParticleOperatorId_t *);
	ParticleOperatorId_t * GetPtr(FieldIteratorHandle_t);
	void GetAllPtrs(FieldIteratorHandle_t, CUtlVector<ParticleOperatorId_t*, CUtlMemory<ParticleOperatorId_t*, int> > &);
	ParticleOperatorId_t GetValue(FieldIteratorHandle_t, ParticleOperatorId_t);
	bool TestAndGetValue(FieldIteratorHandle_t, ParticleOperatorId_t *);
	void FindBindingsMatching(CUtlVector<const CSchemaClassInfo*, CUtlMemory<const CSchemaClassInfo*, int> > *, ParticleOperatorId_t, SchemaBaseClassTraversal_t, ClassIntrospectionHandle_t);
	void FindBindingsMatching(CUtlVector<const CSchemaEnumInfo*, CUtlMemory<const CSchemaEnumInfo*, int> > *, ParticleOperatorId_t);
	int MetaFlags();

	// sizeof = 1
};
