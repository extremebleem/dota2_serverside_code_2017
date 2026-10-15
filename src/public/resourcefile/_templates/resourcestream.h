// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcefile/resourcestream.h:57
class CLockedResource<unsigned char> {
private:

	unsigned char * m_pData;  // +0x0
	uint m_nCount;  // +0x8
	CLockedResource();
	CLockedResource(unsigned char *, uint);
	CLockedResource<unsigned char> operator+(int);
	const unsigned char * operator unsigned char const*();
	unsigned char * operator unsigned char*();
	unsigned char * operator->();
	const unsigned char * operator->();
	uint Count();

	// sizeof = 16
};

// src/public/resourcefile/resourcestream.h:57
class CLockedResource<char> {
private:

	char * m_pData;  // +0x0
	uint m_nCount;  // +0x8
	CLockedResource();
	CLockedResource(char *, uint);
	CLockedResource<char> operator+(int);
	const char * operator char const*();
	char * operator char*();
	char * operator->();
	const char * operator->();
	uint Count();

	// sizeof = 16
};

// src/public/resourcefile/resourcestream.h:57
class CLockedResource<float> {
private:

	float * m_pData;  // +0x0
	uint m_nCount;  // +0x8
	CLockedResource();
	CLockedResource(float *, uint);
	CLockedResource<float> operator+(int);
	const float * operator float const*();
	float * operator float*();
	float * operator->();
	const float * operator->();
	uint Count();

	// sizeof = 16
};

// src/public/resourcefile/resourcestream.h:83
class CUnlockedResource<char> {
private:

	uint32 m_nOffset;  // +0x8
	uint32 m_nCount;  // +0xc
	CUnlockedResource();
	CUnlockedResource(CResourceStream *, char *, uint);
	bool IsValid();
	void Reset();
	CUnlockedResource<char> operator+(int);
	const char * operator char const*();
	char * operator char*();
	char * operator->();
	const char * operator->();
	uint Count();
	char * GetPtr();
	const char * GetPtr();

	// sizeof = 16
};

// src/public/resourcefile/resourcestream.h:83
class CUnlockedResource<CResourceString> {
private:

	uint32 m_nOffset;  // +0x8
	uint32 m_nCount;  // +0xc
	CUnlockedResource();
	CUnlockedResource(CResourceStream *, CResourceString *, uint);
	bool IsValid();
	void Reset();
	CUnlockedResource<CResourceString> operator+(int);
	const CResourceString * operator const CResourceString*();
	CResourceString * operator CResourceString*();
	CResourceString * operator->();
	const CResourceString * operator->();
	uint Count();
	CResourceString * GetPtr();
	const CResourceString * GetPtr();

	// sizeof = 16
};

// src/public/resourcefile/resourcestream.h:83
class CUnlockedResource<short int> {
private:

	uint32 m_nOffset;  // +0x8
	uint32 m_nCount;  // +0xc
	CUnlockedResource();
	CUnlockedResource(CResourceStream *, short int *, uint);
	bool IsValid();
	void Reset();
	CUnlockedResource<short int> operator+(int);
	const short int * operator short int const*();
	short int * operator short int*();
	short int * operator->();
	const short int * operator->();
	uint Count();
	short int * GetPtr();
	const short int * GetPtr();

	// sizeof = 16
};

// src/public/resourcefile/resourcestream.h:199
class CResourcePointer<char> : public CResourcePointerBase {
public:

	CResourcePointer();
	const char * GetUncheckedPtr();
	const char * GetPtr();
	const char * operator char const*();
	const char * operator->();
	void operator=(const char *);
	void SetPtr(const char *);
	char * GetUncheckedPtr();
	char * GetPtr();
	char * operator char*();
	char * operator->();
	void Unsafe_OutOfBoundsAllocate();
	void Unsafe_OutOfBoundsFree();
	void SwapBytes();

	// sizeof = 4
};

// src/public/resourcefile/resourcestream.h:199
class CResourcePointer<RenderSkeletonData_t> : public CResourcePointerBase {
public:

	CResourcePointer();
	const RenderSkeletonData_t * GetUncheckedPtr();
	const RenderSkeletonData_t * GetPtr();
	const RenderSkeletonData_t * operator const RenderSkeletonData_t*();
	const RenderSkeletonData_t * operator->();
	void operator=(const RenderSkeletonData_t *);
	void SetPtr(const RenderSkeletonData_t *);
	RenderSkeletonData_t * GetUncheckedPtr();
	RenderSkeletonData_t * GetPtr();
	RenderSkeletonData_t * operator RenderSkeletonData_t*();
	RenderSkeletonData_t * operator->();
	void Unsafe_OutOfBoundsAllocate();
	void Unsafe_OutOfBoundsFree();
	void SwapBytes();

	// sizeof = 4
};

// src/public/resourcefile/resourcestream.h:199
class CResourcePointer<VpropBreakablePartData_t> : public CResourcePointerBase {
public:

	CResourcePointer();
	const VpropBreakablePartData_t * GetUncheckedPtr();
	const VpropBreakablePartData_t * GetPtr();
	const VpropBreakablePartData_t * operator const VpropBreakablePartData_t*();
	const VpropBreakablePartData_t * operator->();
	void operator=(const VpropBreakablePartData_t *);
	void SetPtr(const VpropBreakablePartData_t *);
	VpropBreakablePartData_t * GetUncheckedPtr();
	VpropBreakablePartData_t * GetPtr();
	VpropBreakablePartData_t * operator VpropBreakablePartData_t*();
	VpropBreakablePartData_t * operator->();
	void Unsafe_OutOfBoundsAllocate();
	void Unsafe_OutOfBoundsFree();
	void SwapBytes();

	// sizeof = 4
};

// src/public/resourcefile/resourcestream.h:363
class CResourceArray<CResourceString> : public CResourceArrayBase {
public:

	CResourceArray();

private:

	CResourceArray(const CResourceArray<CResourceString> &);
	const CResourceString & operator[](int);
	CResourceString & operator[](int);
	const CResourceString & Element(int);
	CResourceString & Element(int);
	CResourceArray<CResourceString> & operator=(const CLockedResource<CResourceString> &);
	CResourceArray<CResourceString> & operator=(const CResourceArray<CResourceString> &);
	const CResourceString * GetPtr();
	CResourceString * GetPtr();
	const CResourceString * Base();
	CResourceString * Base();
	bool IsEmpty();
	CLockedResource<CResourceString> operator CLockedResource<CResourceString>();
	CLockedResource<const CResourceString> operator CLockedResource<const CResourceString>();
	void Unsafe_OutOfBoundsAllocate(int);
	void Unsafe_OutOfBoundsPurgeAndFreeRPs();
	void CoalescePointerArrayInPlace();
	CResourceString * begin();
	const CResourceString * begin();
	CResourceString * end();
	const CResourceString * end();
	uint GetDataSize();

	// sizeof = 8
};

// src/public/resourcefile/resourcestream.h:363
class CResourceArray<unsigned char> : public CResourceArrayBase {
public:

	CResourceArray();

private:

	CResourceArray(const CResourceArray<unsigned char> &);
	const unsigned char & operator[](int);
	unsigned char & operator[](int);
	const unsigned char & Element(int);
	unsigned char & Element(int);
	CResourceArray<unsigned char> & operator=(const CLockedResource<unsigned char> &);
	CResourceArray<unsigned char> & operator=(const CResourceArray<unsigned char> &);
	const unsigned char * GetPtr();
	unsigned char * GetPtr();
	const unsigned char * Base();
	unsigned char * Base();
	bool IsEmpty();
	CLockedResource<unsigned char> operator CLockedResource<unsigned char>();
	CLockedResource<unsigned char const> operator CLockedResource<unsigned char const>();
	void Unsafe_OutOfBoundsAllocate(int);
	void Unsafe_OutOfBoundsPurgeAndFreeRPs();
	void CoalescePointerArrayInPlace();
	unsigned char * begin();
	const unsigned char * begin();
	unsigned char * end();
	const unsigned char * end();
	uint GetDataSize();

	// sizeof = 8
};

// src/public/resourcefile/resourcestream.h:363
class CResourceArray<unsigned int> : public CResourceArrayBase {
public:

	CResourceArray();

private:

	CResourceArray(const CResourceArray<unsigned int> &);
	const unsigned int & operator[](int);
	unsigned int & operator[](int);
	const unsigned int & Element(int);
	unsigned int & Element(int);
	CResourceArray<unsigned int> & operator=(const CLockedResource<unsigned int> &);
	CResourceArray<unsigned int> & operator=(const CResourceArray<unsigned int> &);
	const unsigned int * GetPtr();
	unsigned int * GetPtr();
	const unsigned int * Base();
	unsigned int * Base();
	bool IsEmpty();
	CLockedResource<unsigned int> operator CLockedResource<unsigned int>();
	CLockedResource<unsigned int const> operator CLockedResource<unsigned int const>();
	void Unsafe_OutOfBoundsAllocate(int);
	void Unsafe_OutOfBoundsPurgeAndFreeRPs();
	void CoalescePointerArrayInPlace();
	unsigned int * begin();
	const unsigned int * begin();
	unsigned int * end();
	const unsigned int * end();
	uint GetDataSize();

	// sizeof = 8
};

// src/public/resourcefile/resourcestream.h:508
struct CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > : public IAtomicManipulator {
public:

	CAtomicManipulator(CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > *, CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > &);
	CAtomicManipulator(CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > *, const CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > &);
	CAtomicManipulator(CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > *);
	IAtomicManipulator * Get();
	virtual int GetSizeOf(CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > *);
	virtual int GetAlignOf(CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > *);
	virtual bool CanAllocate(const CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > *);
	virtual void * Allocate(CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > *);
	virtual void * AllocateAndCopy(CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > *, const void *);
	virtual void Copy(CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > *, void *, const void *);
	virtual void Deallocate(CAtomicManipulator<CResourceArray<VPhysXCollisionAttributes_t> > *, void *);

	// vtable[0] GetSizeOf
	// vtable[1] GetAlignOf
	// vtable[2] CanAllocate
	// vtable[3] Allocate
	// vtable[4] AllocateAndCopy
	// vtable[5] Copy
	// vtable[6] Deallocate
	// sizeof = 8
};

// src/public/resourcefile/resourcestream.h:508
struct CAtomicManipulator<CResourceArray<VPhysXJoint_t> > : public IAtomicManipulator {
public:

	CAtomicManipulator(CAtomicManipulator<CResourceArray<VPhysXJoint_t> > *, CAtomicManipulator<CResourceArray<VPhysXJoint_t> > &);
	CAtomicManipulator(CAtomicManipulator<CResourceArray<VPhysXJoint_t> > *, const CAtomicManipulator<CResourceArray<VPhysXJoint_t> > &);
	CAtomicManipulator(CAtomicManipulator<CResourceArray<VPhysXJoint_t> > *);
	IAtomicManipulator * Get();
	virtual int GetSizeOf(CAtomicManipulator<CResourceArray<VPhysXJoint_t> > *);
	virtual int GetAlignOf(CAtomicManipulator<CResourceArray<VPhysXJoint_t> > *);
	virtual bool CanAllocate(const CAtomicManipulator<CResourceArray<VPhysXJoint_t> > *);
	virtual void * Allocate(CAtomicManipulator<CResourceArray<VPhysXJoint_t> > *);
	virtual void * AllocateAndCopy(CAtomicManipulator<CResourceArray<VPhysXJoint_t> > *, const void *);
	virtual void Copy(CAtomicManipulator<CResourceArray<VPhysXJoint_t> > *, void *, const void *);
	virtual void Deallocate(CAtomicManipulator<CResourceArray<VPhysXJoint_t> > *, void *);

	// vtable[0] GetSizeOf
	// vtable[1] GetAlignOf
	// vtable[2] CanAllocate
	// vtable[3] Allocate
	// vtable[4] AllocateAndCopy
	// vtable[5] Copy
	// vtable[6] Deallocate
	// sizeof = 8
};

// src/public/resourcefile/resourcestream.h:508
struct CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > : public IAtomicManipulator {
public:

	CAtomicManipulator(CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > *, CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > &);
	CAtomicManipulator(CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > *, const CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > &);
	CAtomicManipulator(CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > *);
	IAtomicManipulator * Get();
	virtual int GetSizeOf(CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > *);
	virtual int GetAlignOf(CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > *);
	virtual bool CanAllocate(const CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > *);
	virtual void * Allocate(CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > *);
	virtual void * AllocateAndCopy(CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > *, const void *);
	virtual void Copy(CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > *, void *, const void *);
	virtual void Deallocate(CAtomicManipulator<CResourceArray<VPhysXConstraint2_t> > *, void *);

	// vtable[0] GetSizeOf
	// vtable[1] GetAlignOf
	// vtable[2] CanAllocate
	// vtable[3] Allocate
	// vtable[4] AllocateAndCopy
	// vtable[5] Copy
	// vtable[6] Deallocate
	// sizeof = 8
};

// src/public/resourcefile/resourcestream.h:1047
class CSchemaTypeOf<CResourcePointer<VpropBreakablePartData_t> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/resourcefile/resourcestream.h:1047
class CSchemaTypeOf<CResourcePointer<PhysFeModelDesc_t> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/resourcefile/resourcestream.h:1047
class CSchemaTypeOf<CResourcePointer<RenderSkeletonData_t> > {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// CLockedResource: 115 more instantiations (full list in INDEX.tsv)
//   CLockedResource<long long unsigned int>
//   CLockedResource<unsigned int>
//   CLockedResource<short unsigned int>
//   CLockedResource<Vector>
//   CLockedResource<const Vector>
//   CLockedResource<RnPlane_t>
//   CLockedResource<const RnPlane_t>
//   CLockedResource<RnHalfEdge_t>
//   CLockedResource<const RnHalfEdge_t>
//   CLockedResource<RnFace_t>
//   CLockedResource<const RnFace_t>
//   CLockedResource<CResourceString>
//   CLockedResource<CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > >
//   CLockedResource<short int>
//   CLockedResource<Quaternion>
//   CLockedResource<ModelBoneFlexDriverControl_t>
//   CLockedResource<PermModelExtPart_t>
//   CLockedResource<CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> > >
//   CLockedResource<CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > >
//   CLockedResource<CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > >
//   CLockedResource<MaterialGroup_t>
//   CLockedResource<ModelBoneFlexDriver_t>
//   CLockedResource<ModelSkeletonData_t>
//   CLockedResource<PermModelData_t>
//   CLockedResource<matrix3x4a_t>
//   CLockedResource<SkeletonBoneBbox_t>
//   CLockedResource<RenderBufferBinding_t>
//   CLockedResource<MaterialDrawDescriptor_t>
//   CLockedResource<HitBox_t>
//   CLockedResource<ConstraintSlave_t>
//   CLockedResource<ConstraintTarget_t>
//   CLockedResource<SceneObjectData_t>
//   CLockedResource<AttachmentData_t>
//   CLockedResource<HitBoxSet_t>
//   CLockedResource<BaseConstraint_t>
//   CLockedResource<RenderSkeletonData_t>
//   CLockedResource<PermRenderMeshData_t>
//   CLockedResource<const CResourceString>
//   CLockedResource<unsigned char const>
//   CLockedResource<unsigned int const>
//   CLockedResource<short unsigned int const>
//   CLockedResource<CTransform>
//   CLockedResource<const CTransform>
//   CLockedResource<RnSphereDesc_t>
//   CLockedResource<const RnSphereDesc_t>
//   CLockedResource<RnCapsuleDesc_t>
//   CLockedResource<const RnCapsuleDesc_t>
//   CLockedResource<RnHullDesc_t>
//   CLockedResource<const RnHullDesc_t>
//   CLockedResource<RnMeshDesc_t>
//   CLockedResource<const RnMeshDesc_t>
//   CLockedResource<RnSoftbodyParticle_t>
//   CLockedResource<const RnSoftbodyParticle_t>
//   CLockedResource<RnSoftbodySpring_t>
//   CLockedResource<const RnSoftbodySpring_t>
//   CLockedResource<RnSoftbodyCapsule_t>
//   CLockedResource<const RnSoftbodyCapsule_t>
//   CLockedResource<const matrix3x4a_t>
//   CLockedResource<VPhysXBodyPart_t>
//   CLockedResource<const VPhysXBodyPart_t>
//   CLockedResource<VPhysXConstraint2_t>
//   CLockedResource<const VPhysXConstraint2_t>
//   CLockedResource<VPhysXJoint_t>
//   CLockedResource<const VPhysXJoint_t>
//   CLockedResource<VPhysXCollisionAttributes_t>
//   CLockedResource<const VPhysXCollisionAttributes_t>
//   CLockedResource<CResourceArray<unsigned char> >
//   CLockedResource<const CResourceArray<unsigned char> >
//   CLockedResource<const SkeletonBoneBbox_t>
//   CLockedResource<float const>
//   CLockedResource<const RenderBufferBinding_t>
//   CLockedResource<RenderInputLayoutField_t>
//   CLockedResource<const RenderInputLayoutField_t>
//   CLockedResource<const MaterialDrawDescriptor_t>
//   CLockedResource<const HitBox_t>
//   CLockedResource<const ConstraintSlave_t>
//   CLockedResource<const ConstraintTarget_t>
//   CLockedResource<const SceneObjectData_t>
//   CLockedResource<const AttachmentData_t>
//   CLockedResource<const HitBoxSet_t>
//   CLockedResource<const BaseConstraint_t>
//   CLockedResource<OnDiskBufferData_t>
//   CLockedResource<const OnDiskBufferData_t>
//   CLockedResource<const CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > >
//   CLockedResource<short int const>
//   CLockedResource<const Quaternion>
//   CLockedResource<const ModelBoneFlexDriverControl_t>
//   CLockedResource<const PermModelExtPart_t>
//   CLockedResource<const CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> > >
//   CLockedResource<long long unsigned int const>
//   CLockedResource<const CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > >
//   CLockedResource<const CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > >
//   CLockedResource<CResourceExtReference<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> > >
//   CLockedResource<const CResourceExtReference<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> > >
//   CLockedResource<const MaterialGroup_t>
//   CLockedResource<const ModelBoneFlexDriver_t>
//   CLockedResource<FlexOp_t>
//   CLockedResource<const FlexOp_t>
//   CLockedResource<BundleData_t>
//   CLockedResource<const BundleData_t>
//   CLockedResource<MorphRectData_t>
//   CLockedResource<const MorphRectData_t>
//   CLockedResource<BundleType_t>
//   CLockedResource<const BundleType_t>
//   CLockedResource<MorphData_t>
//   CLockedResource<const MorphData_t>
//   CLockedResource<FlexDesc_t>
//   CLockedResource<const FlexDesc_t>
//   CLockedResource<FlexController_t>
//   CLockedResource<const FlexController_t>
//   CLockedResource<FlexRule_t>
//   CLockedResource<const FlexRule_t>
//   CLockedResource<CPhysAggregateData>
//   CLockedResource<matrix3x4_t>
//   CLockedResource<ResourceBlockEntry_t>

// CUnlockedResource: 37 more instantiations (full list in INDEX.tsv)
//   CUnlockedResource<float>
//   CUnlockedResource<unsigned int>
//   CUnlockedResource<Vector>
//   CUnlockedResource<Quaternion>
//   CUnlockedResource<ModelSkeletonData_t>
//   CUnlockedResource<PermModelExtPart_t>
//   CUnlockedResource<CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> > >
//   CUnlockedResource<long long unsigned int>
//   CUnlockedResource<unsigned char>
//   CUnlockedResource<CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > >
//   CUnlockedResource<CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > >
//   CUnlockedResource<MaterialGroup_t>
//   CUnlockedResource<CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > >
//   CUnlockedResource<short unsigned int>
//   CUnlockedResource<ModelBoneFlexDriver_t>
//   CUnlockedResource<ModelBoneFlexDriverControl_t>
//   CUnlockedResource<PermModelData_t>
//   CUnlockedResource<matrix3x4a_t>
//   CUnlockedResource<SkeletonBoneBbox_t>
//   CUnlockedResource<RenderBufferBinding_t>
//   CUnlockedResource<MaterialDrawDescriptor_t>
//   CUnlockedResource<HitBox_t>
//   CUnlockedResource<SceneObjectData_t>
//   CUnlockedResource<RenderSkeletonData_t>
//   CUnlockedResource<AttachmentData_t>
//   CUnlockedResource<HitBoxSet_t>
//   CUnlockedResource<BaseConstraint_t>
//   CUnlockedResource<PermRenderMeshData_t>
//   CUnlockedResource<ConstraintSlave_t>
//   CUnlockedResource<ConstraintTarget_t>
//   CUnlockedResource<CPhysAggregateData>
//   CUnlockedResource<VPhysXBodyPart_t>
//   CUnlockedResource<RnSphereDesc_t>
//   CUnlockedResource<RnHullDesc_t>
//   CUnlockedResource<RnCapsuleDesc_t>
//   CUnlockedResource<RnMeshDesc_t>
//   CUnlockedResource<matrix3x4_t>

// CResourcePointer: 2 more instantiations (full list in INDEX.tsv)
//   CResourcePointer<PhysFeModelDesc_t>
//   CResourcePointer<void>

// CResourceArray: 116 more instantiations (full list in INDEX.tsv)
//   CResourceArray<short unsigned int>
//   CResourceArray<matrix3x4a_t>
//   CResourceArray<SkeletonBoneBbox_t>
//   CResourceArray<float>
//   CResourceArray<RenderBufferBinding_t>
//   CResourceArray<RenderInputLayoutField_t>
//   CResourceArray<MaterialDrawDescriptor_t>
//   CResourceArray<HitBox_t>
//   CResourceArray<ConstraintSlave_t>
//   CResourceArray<ConstraintTarget_t>
//   CResourceArray<SceneObjectData_t>
//   CResourceArray<AttachmentData_t>
//   CResourceArray<HitBoxSet_t>
//   CResourceArray<BaseConstraint_t>
//   CResourceArray<OnDiskBufferData_t>
//   CResourceArray<Vector>
//   CResourceArray<RnPlane_t>
//   CResourceArray<RnHalfEdge_t>
//   CResourceArray<RnFace_t>
//   CResourceArray<RnNode_t>
//   CResourceArray<RnTriangle_t>
//   CResourceArray<FeNodeBase_t>
//   CResourceArray<FeSimdNodeBase_t>
//   CResourceArray<FeQuad_t>
//   CResourceArray<FeSimdQuad_t>
//   CResourceArray<FeSimdTri_t>
//   CResourceArray<FeSimdRodConstraint_t>
//   CResourceArray<CTransform>
//   CResourceArray<FeRodConstraint_t>
//   CResourceArray<FeAxialEdgeBend_t>
//   CResourceArray<FeCtrlOffset_t>
//   CResourceArray<FeCtrlOsOffset_t>
//   CResourceArray<FeFollowNode_t>
//   CResourceArray<FeCollisionSphere_t>
//   CResourceArray<FeCollisionPlane_t>
//   CResourceArray<FeNodeIntegrator_t>
//   CResourceArray<FeSpringIntegrator_t>
//   CResourceArray<FeSimdSpringIntegrator_t>
//   CResourceArray<FeWorldCollisionParams_t>
//   CResourceArray<FeTaperedCapsuleStretch_t>
//   CResourceArray<FeTaperedCapsuleRigid_t>
//   CResourceArray<FeSphereRigid_t>
//   CResourceArray<FeTreeChildren_t>
//   CResourceArray<FeFitMatrix_t>
//   CResourceArray<FeSimdFitMatrices_t>
//   CResourceArray<FeFitWeight_t>
//   CResourceArray<FeNodeReverseOffset_t>
//   CResourceArray<RnSphereDesc_t>
//   CResourceArray<RnCapsuleDesc_t>
//   CResourceArray<RnHullDesc_t>
//   CResourceArray<RnMeshDesc_t>
//   CResourceArray<VPhysXCollisionAttributes_t>
//   CResourceArray<VPhysXBodyPart_t>
//   CResourceArray<VPhysXConstraint2_t>
//   CResourceArray<VPhysXJoint_t>
//   CResourceArray<IrradVolume_t>
//   CResourceArray<SheetSequenceFrame_t>
//   CResourceArray<SequenceFloatParam_t>
//   CResourceArray<SheetFrameImage_t>
//   CResourceArray<SheetSequence_t>
//   CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > >
//   CResourceArray<short int>
//   CResourceArray<Quaternion>
//   CResourceArray<ModelBoneFlexDriverControl_t>
//   CResourceArray<PermModelExtPart_t>
//   CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> > >
//   CResourceArray<long long unsigned int>
//   CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > >
//   CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > >
//   CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> > >
//   CResourceArray<MaterialGroup_t>
//   CResourceArray<ModelBoneFlexDriver_t>
//   CResourceArray<int>
//   CResourceArray<AnimResourceIKTargetInfo_t>
//   CResourceArray<AnimResourceIKLink_t>
//   CResourceArray<AnimResourceBone_t>
//   CResourceArray<AnimResourceUser_t>
//   CResourceArray<AnimResourceIKChain_t>
//   CResourceArray<AnimResourceDataChannel_t>
//   CResourceArray<AnimationRetargetElementData_t>
//   CResourceArray<AnimationRetargetChainData_t>
//   CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationResourceData_t> > >
//   CResourceArray<RenderMeshInputLayoutField_t>
//   CResourceArray<RenderMeshBufferData_t>
//   CResourceArray<FlexOp_t>
//   CResourceArray<BundleData_t>
//   CResourceArray<MorphRectData_t>
//   CResourceArray<BundleType_t>
//   CResourceArray<MorphData_t>
//   CResourceArray<FlexDesc_t>
//   CResourceArray<FlexController_t>
//   CResourceArray<FlexRule_t>
//   CResourceArray<RnSoftbodyParticle_t>
//   CResourceArray<RnSoftbodySpring_t>
//   CResourceArray<RnSoftbodyCapsule_t>
//   CResourceArray<CResourceArray<unsigned char> >
//   CResourceArray<ResourceBlockEntry_t>
//   CResourceArray<MaterialParamInt_t>
//   CResourceArray<MaterialParamFloat_t>
//   CResourceArray<MaterialParamVector_t>
//   CResourceArray<MaterialParamTexture_t>
//   CResourceArray<MaterialParamBuffer_t>
//   CResourceArray<MaterialParamString_t>
//   CResourceArray<ResourceReferenceInfo_t>
//   CResourceArray<ResourceInputDependency_t>
//   CResourceArray<ResourceArgumentDependency_t>
//   CResourceArray<ResourceSpecialDependency_t>
//   CResourceArray<ResourceCustomDependency_t>
//   CResourceArray<ResourceAdditionalRelatedFile_t>
//   CResourceArray<ResourceEditIntData_t>
//   CResourceArray<ResourceEditFloatData_t>
//   CResourceArray<ResourceEditStringData_t>
//   CResourceArray<CResourceDiskStructField>
//   CResourceArray<CResourceDiskEnumValue>
//   CResourceArray<CResourceDiskStruct>
//   CResourceArray<CResourceDiskEnum>

// CAtomicManipulator: 49 more instantiations (full list in INDEX.tsv)
//   CAtomicManipulator<CResourceArray<VPhysXBodyPart_t> >
//   CAtomicManipulator<CResourceArray<matrix3x4a_t> >
//   CAtomicManipulator<CResourceArray<CTransform> >
//   CAtomicManipulator<CResourceArray<RnSoftbodyCapsule_t> >
//   CAtomicManipulator<CResourceArray<RnSoftbodySpring_t> >
//   CAtomicManipulator<CResourceArray<RnSoftbodyParticle_t> >
//   CAtomicManipulator<CResourceArray<CResourceString> >
//   CAtomicManipulator<CResourceArray<unsigned int> >
//   CAtomicManipulator<CResourceArray<unsigned char> >
//   CAtomicManipulator<CResourceArray<short unsigned int> >
//   CAtomicManipulator<CResourceArray<RnMeshDesc_t> >
//   CAtomicManipulator<CResourceArray<RnHullDesc_t> >
//   CAtomicManipulator<CResourceArray<RnCapsuleDesc_t> >
//   CAtomicManipulator<CResourceArray<RnSphereDesc_t> >
//   CAtomicManipulator<CResourceArray<CResourceArray<unsigned char> > >
//   CAtomicManipulator<CResourceArray<OnDiskBufferData_t> >
//   CAtomicManipulator<CResourceArray<BaseConstraint_t> >
//   CAtomicManipulator<CResourceArray<HitBoxSet_t> >
//   CAtomicManipulator<CResourceArray<AttachmentData_t> >
//   CAtomicManipulator<CResourceArray<SceneObjectData_t> >
//   CAtomicManipulator<CResourceArray<ConstraintTarget_t> >
//   CAtomicManipulator<CResourceArray<ConstraintSlave_t> >
//   CAtomicManipulator<CResourceArray<HitBox_t> >
//   CAtomicManipulator<CResourceArray<MaterialDrawDescriptor_t> >
//   CAtomicManipulator<CResourceArray<RenderInputLayoutField_t> >
//   CAtomicManipulator<CResourceArray<RenderBufferBinding_t> >
//   CAtomicManipulator<CResourceArray<float> >
//   CAtomicManipulator<CResourceArray<SkeletonBoneBbox_t> >
//   CAtomicManipulator<CResourceArray<ModelBoneFlexDriver_t> >
//   CAtomicManipulator<CResourceArray<MaterialGroup_t> >
//   CAtomicManipulator<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> > > 
//   CAtomicManipulator<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > >
//   CAtomicManipulator<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > > >
//   CAtomicManipulator<CResourceArray<long long unsigned int> >
//   CAtomicManipulator<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> > > >
//   CAtomicManipulator<CResourceArray<PermModelExtPart_t> >
//   CAtomicManipulator<CResourceArray<ModelBoneFlexDriverControl_t> >
//   CAtomicManipulator<CResourceArray<Quaternion> >
//   CAtomicManipulator<CResourceArray<Vector> >
//   CAtomicManipulator<CResourceArray<short int> >
//   CAtomicManipulator<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > > >
//   CAtomicManipulator<CResourceArray<FlexRule_t> >
//   CAtomicManipulator<CResourceArray<FlexController_t> >
//   CAtomicManipulator<CResourceArray<FlexDesc_t> >
//   CAtomicManipulator<CResourceArray<MorphData_t> >
//   CAtomicManipulator<CResourceArray<BundleType_t> >
//   CAtomicManipulator<CResourceArray<MorphRectData_t> >
//   CAtomicManipulator<CResourceArray<BundleData_t> >
//   CAtomicManipulator<CResourceArray<FlexOp_t> >

// CSchemaTypeOf: 53 more instantiations (full list in INDEX.tsv)
//   CSchemaTypeOf<CResourceArray<RnSphereDesc_t> >
//   CSchemaTypeOf<CResourceArray<RnCapsuleDesc_t> >
//   CSchemaTypeOf<CResourceArray<RnHullDesc_t> >
//   CSchemaTypeOf<CResourceArray<RnMeshDesc_t> >
//   CSchemaTypeOf<CResourceArray<short unsigned int> >
//   CSchemaTypeOf<CResourceArray<unsigned char> >
//   CSchemaTypeOf<CResourceArray<unsigned int> >
//   CSchemaTypeOf<CResourceArray<CResourceString> >
//   CSchemaTypeOf<CResourceArray<RnSoftbodyParticle_t> >
//   CSchemaTypeOf<CResourceArray<RnSoftbodySpring_t> >
//   CSchemaTypeOf<CResourceArray<RnSoftbodyCapsule_t> >
//   CSchemaTypeOf<CResourceArray<CTransform> >
//   CSchemaTypeOf<CResourceArray<matrix3x4a_t> >
//   CSchemaTypeOf<CResourceArray<VPhysXBodyPart_t> >
//   CSchemaTypeOf<CResourceArray<VPhysXConstraint2_t> >
//   CSchemaTypeOf<CResourceArray<VPhysXJoint_t> >
//   CSchemaTypeOf<CResourceArray<VPhysXCollisionAttributes_t> >
//   CSchemaTypeOf<CResourceArray<CResourceArray<unsigned char> > >
//   CSchemaTypeOf<CResourceArray<SkeletonBoneBbox_t> >
//   CSchemaTypeOf<CResourceArray<float> >
//   CSchemaTypeOf<CResourceArray<RenderBufferBinding_t> >
//   CSchemaTypeOf<CResourceArray<RenderInputLayoutField_t> >
//   CSchemaTypeOf<CResourceArray<MaterialDrawDescriptor_t> >
//   CSchemaTypeOf<CResourceArray<HitBox_t> >
//   CSchemaTypeOf<CResourceArray<ConstraintSlave_t> >
//   CSchemaTypeOf<CResourceArray<ConstraintTarget_t> >
//   CSchemaTypeOf<CResourceArray<SceneObjectData_t> >
//   CSchemaTypeOf<CResourceArray<AttachmentData_t> >
//   CSchemaTypeOf<CResourceArray<HitBoxSet_t> >
//   CSchemaTypeOf<CResourceArray<BaseConstraint_t> >
//   CSchemaTypeOf<CResourceArray<OnDiskBufferData_t> >
//   CSchemaTypeOf<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeIMaterial2> > > >
//   CSchemaTypeOf<CResourceArray<short int> >
//   CSchemaTypeOf<CResourceArray<Vector> >
//   CSchemaTypeOf<CResourceArray<Quaternion> >
//   CSchemaTypeOf<CResourceArray<ModelBoneFlexDriverControl_t> >
//   CSchemaTypeOf<CResourceArray<PermModelExtPart_t> >
//   CSchemaTypeOf<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeCRenderMesh> > > >
//   CSchemaTypeOf<CResourceArray<long long unsigned int> >
//   CSchemaTypeOf<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeCPhysAggregateData> > > >
//   CSchemaTypeOf<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeAnimationGroupResourceData_t> > > >
//   CSchemaTypeOf<CResourceArray<CResourceExtReference<CWeakHandle<InfoForResourceTypeSequenceGroupResourceData_t> > > >
//   CSchemaTypeOf<CResourceArray<MaterialGroup_t> >
//   CSchemaTypeOf<CResourceArray<ModelBoneFlexDriver_t> >
//   CSchemaTypeOf<CResourceArray<FlexOp_t> >
//   CSchemaTypeOf<CResourceArray<BundleData_t> >
//   CSchemaTypeOf<CResourceArray<MorphRectData_t> >
//   CSchemaTypeOf<CResourceArray<BundleType_t> >
//   CSchemaTypeOf<CResourceArray<MorphData_t> >
//   CSchemaTypeOf<CResourceArray<FlexDesc_t> >
//   CSchemaTypeOf<CResourceArray<FlexController_t> >
//   CSchemaTypeOf<CResourceArray<FlexRule_t> >
//   CSchemaTypeOf<CResourceString>
