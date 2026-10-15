// Reconstructed from DWARF by pahole; not original source.

// src/public/kv3lib/kv3transfer.h:447
struct CKV3TransferValHelper<SkeletonBoneBounds_t> {
	void LoadValue<SkeletonBoneBounds_t>(CKV3TransferLoadContext *, const KeyValues3 *, SkeletonBoneBounds_t &, type *);
	void SaveValue<SkeletonBoneBounds_t>(CKV3TransferSaveContext *, KeyValues3 *, const SkeletonBoneBounds_t &, type *);

	// sizeof = 1
};

// src/public/kv3lib/kv3transfer.h:447
struct CKV3TransferValHelper<RenderPrimitiveType_t> {
	void SaveValue<RenderPrimitiveType_t>(CKV3TransferSaveContext *, KeyValues3 *, const RenderPrimitiveType_t &, type *);
	void LoadValue<RenderPrimitiveType_t>(CKV3TransferLoadContext *, const KeyValues3 *, RenderPrimitiveType_t &, type *);

	// sizeof = 1
};

// src/public/kv3lib/kv3transfer.h:447
struct CKV3TransferValHelper<CRenderBufferBinding> {
	void LoadValue<CRenderBufferBinding>(CKV3TransferLoadContext *, const KeyValues3 *, CRenderBufferBinding &, type *);
	void SaveValue<CRenderBufferBinding>(CKV3TransferSaveContext *, KeyValues3 *, const CRenderBufferBinding &, type *);

	// sizeof = 1
};

// src/public/kv3lib/kv3transfer.h:899
struct CKV3TransferValHelperAsFloats<Vector, 3, false> {
	void SaveValue<Vector>(CKV3TransferSaveContext *, KeyValues3 *, const Vector &);
	void LoadValue<Vector>(CKV3TransferLoadContext *, const KeyValues3 *, Vector &);
	void LoadDefault<Vector>(CKV3TransferLoadContext *, const char *, Vector &);

	// sizeof = 1
};

// src/public/kv3lib/kv3transfer.h:899
struct CKV3TransferValHelperAsFloats<Vector4D, 4, false> {
	void SaveValue<Vector4D>(CKV3TransferSaveContext *, KeyValues3 *, const Vector4D &);
	void LoadValue<Vector4D>(CKV3TransferLoadContext *, const KeyValues3 *, Vector4D &);

	// sizeof = 1
};

// src/public/kv3lib/kv3transfer.h:899
struct CKV3TransferValHelperAsFloats<Quaternion, 4, false> {
	void SaveValue<Quaternion>(CKV3TransferSaveContext *, KeyValues3 *, const Quaternion &);
	void LoadValue<Quaternion>(CKV3TransferLoadContext *, const KeyValues3 *, Quaternion &);

	// sizeof = 1
};

// src/public/kv3lib/kv3transfer.h:1003
struct CKV3TransferValHelperAsUint8s<Color, 4> {
	void SaveValue<Color>(CKV3TransferSaveContext *, KeyValues3 *, const Color &);
	void LoadValue<Color>(CKV3TransferLoadContext *, const KeyValues3 *, Color &);

	// sizeof = 1
};

// CKV3TransferValHelper: 37 more instantiations (full list in INDEX.tsv)
//   CKV3TransferValHelper<CRenderSkeleton>
//   CKV3TransferValHelper<RenderSkeletonBone_t>
//   CKV3TransferValHelper<CMaterialDrawDescriptor>
//   CKV3TransferValHelper<CHitBox>
//   CKV3TransferValHelper<CHitBoxSet>
//   CKV3TransferValHelper<CSceneObjectData>
//   CKV3TransferValHelper<CConstraintSlave>
//   CKV3TransferValHelper<CConstraintTarget>
//   CKV3TransferValHelper<CPhysSurfacePropertiesPhysics>
//   CKV3TransferValHelper<CPhysSurfacePropertiesSoundNames>
//   CKV3TransferValHelper<CPhysSurfacePropertiesAudio>
//   CKV3TransferValHelper<CPhysSurfacePropertiesGame>
//   CKV3TransferValHelper<CBaseConstraint*>
//   CKV3TransferValHelper<CPhysSurfaceProperties*>
//   CKV3TransferValHelper<bool>
//   CKV3TransferValHelper<unsigned char>
//   CKV3TransferValHelper<short unsigned int>
//   CKV3TransferValHelper<int>
//   CKV3TransferValHelper<unsigned int>
//   CKV3TransferValHelper<long long unsigned int>
//   CKV3TransferValHelper<float>
//   CKV3TransferValHelper<CUtlVector<RenderSkeletonBone_t, CUtlMemory<RenderSkeletonBone_t, int> > >
//   CKV3TransferValHelper<CUtlVector<int, CUtlMemory<int, int> > >
//   CKV3TransferValHelper<CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> > >
//   CKV3TransferValHelper<CUtlVector<CHitBox, CUtlMemory<CHitBox, int> > >
//   CKV3TransferValHelper<CUtlVector<CHitBoxSet, CUtlMemory<CHitBoxSet, int> > >
//   CKV3TransferValHelper<CUtlVector<CBaseConstraint*, CUtlMemory<CBaseConstraint*, int> > >
//   CKV3TransferValHelper<CUtlVector<CConstraintSlave, CUtlMemory<CConstraintSlave, int> > >
//   CKV3TransferValHelper<CUtlVector<CConstraintTarget, CUtlMemory<CConstraintTarget, int> > >
//   CKV3TransferValHelper<CUtlVector<CPhysSurfaceProperties*, CUtlMemory<CPhysSurfaceProperties*, int> > >
//   CKV3TransferValHelper<CUtlVectorFixedGrowable<CSceneObjectData, 1ul> >
//   CKV3TransferValHelper<CUtlString>
//   CKV3TransferValHelper<CUtlString [3]>
//   CKV3TransferValHelper<Vector [3]>
//   CKV3TransferValHelper<Quaternion [3]>
//   CKV3TransferValHelper<float [3]>
//   CKV3TransferValHelper<bool [3]>

// CKV3TransferValHelperAsFloats: 1 more instantiations (full list in INDEX.tsv)
//   CKV3TransferValHelperAsFloats<matrix3x4_t, 12, false>
