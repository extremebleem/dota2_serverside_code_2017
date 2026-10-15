// Reconstructed from DWARF by pahole; not original source.

// src/public/vphysics2/intersection_controller_interface.h:10
class IPhysIntersectionDictionary {
	int ()() * * _vptr.IPhysIntersectionDictionary;  // +0x0
	IPhysIntersectionDictionary();
	virtual ~IPhysIntersectionDictionary();
	virtual CollisionGroupIndex AcquireCollisionGroupName(const CUtlStringToken &, const char *, bool);
	virtual CollisionGroupIndex GetCollisionGroup(const CUtlStringToken &);
	virtual CUtlStringToken GetCollisionGroupName(CollisionGroupIndex);
	virtual const char * GetCollisionGroupNameAsString(CollisionGroupIndex);
	virtual int GetCollisionGroupNameCapacity();
	virtual IntersectionLayerIndex AcquireInteractionLayer(const CUtlStringToken &, const char *);
	virtual IntersectionLayerIndex GetInteractionLayer(const CUtlStringToken &);
	virtual CUtlStringToken GetInteractionLayerName(IntersectionLayerIndex);
	virtual const char * GetInteractionLayerNameAsString(IntersectionLayerIndex);
	virtual int GetInteractionLayerNameCapacity();
	virtual bool AcquirePreindexedCollisionGroupName(const CUtlStringToken &, const char *, int);
	virtual IntersectionLayerIndex AcquirePreindexedInteractionLayer(const CUtlStringToken &, const char *, int);
	virtual void InitializeToGameDefault();
	virtual void DumpStatus();
	void Serialize(CRnSerializer *);
	void Serialize(CRnObjectStats *);
	void Unserialize(CRnUnserializer *);
	void Snoop(CRnSnooper *, const void *);
	bool AcquirePreindexedCollisionGroupName<11>(char &, int);
	bool AcquirePreindexedCollisionGroupName<13>(char &, int);
	IntersectionLayerIndex AcquirePreindexedInteractionLayer<11>(char &, int);
	IntersectionLayerIndex AcquirePreindexedInteractionLayer<7>(char &, int);
	IntersectionLayerIndex AcquirePreindexedInteractionLayer<14>(char &, int);
	bool AcquirePreindexedCollisionGroupName<8>(char &, int);
	bool AcquirePreindexedCollisionGroupName<7>(char &, int);
	bool AcquirePreindexedCollisionGroupName<19>(char &, int);
	bool AcquirePreindexedCollisionGroupName<12>(char &, int);
	bool AcquirePreindexedCollisionGroupName<16>(char &, int);
	bool AcquirePreindexedCollisionGroupName<4>(char &, int);
	bool AcquirePreindexedCollisionGroupName<14>(char &, int);
	bool AcquirePreindexedCollisionGroupName<9>(char &, int);
	bool AcquirePreindexedCollisionGroupName<10>(char &, int);
	bool AcquirePreindexedCollisionGroupName<6>(char &, int);
	IntersectionLayerIndex AcquirePreindexedInteractionLayer<8>(char &, int);
	IntersectionLayerIndex AcquirePreindexedInteractionLayer<9>(char &, int);
	IntersectionLayerIndex AcquirePreindexedInteractionLayer<10>(char &, int);
	IntersectionLayerIndex AcquirePreindexedInteractionLayer<6>(char &, int);
	IntersectionLayerIndex AcquirePreindexedInteractionLayer<12>(char &, int);
	IntersectionLayerIndex AcquirePreindexedInteractionLayer<4>(char &, int);
	IntersectionLayerIndex AcquirePreindexedInteractionLayer<13>(char &, int);
	IntersectionLayerIndex AcquirePreindexedInteractionLayer<18>(char &, int);
	IntersectionLayerIndex AcquirePreindexedInteractionLayer<5>(char &, int);

	// vtable[2] AcquireCollisionGroupName
	// vtable[3] GetCollisionGroup
	// vtable[4] GetCollisionGroupName
	// vtable[5] GetCollisionGroupNameAsString
	// vtable[6] GetCollisionGroupNameCapacity
	// vtable[7] AcquireInteractionLayer
	// vtable[8] GetInteractionLayer
	// vtable[9] GetInteractionLayerName
	// vtable[10] GetInteractionLayerNameAsString
	// vtable[11] GetInteractionLayerNameCapacity
	// vtable[12] AcquirePreindexedCollisionGroupName
	// vtable[13] AcquirePreindexedInteractionLayer
	// vtable[14] InitializeToGameDefault
	// vtable[15] DumpStatus
	// sizeof = 8
};

// src/public/vphysics2/intersection_controller_interface.h:53
class IPhysIntersectionController {
	int ()() * * _vptr.IPhysIntersectionController;  // +0x0
	IPhysIntersectionController();
	virtual ~IPhysIntersectionController();
	virtual void SetCollisionGroupPairFlags(CollisionGroupIndex, CollisionGroupIndex, IntersectionLayerPairFlags);
	virtual IntersectionLayerPairFlags GetCollisionGroupPairFlags(CollisionGroupIndex, CollisionGroupIndex);
	virtual void EnableCollisionGroupPairFlags(CollisionGroupIndex, CollisionGroupIndex, IntersectionLayerPairFlags);
	virtual void DisableCollisionGroupPairFlags(CollisionGroupIndex, CollisionGroupIndex, IntersectionLayerPairFlags);
	virtual IntersectionLayerIndex AcquirePreindexedCollisionGroup(const CUtlStringToken &, const char *, int);
	virtual CollisionGroupIndex AcquireCollisionGroup(const CUtlStringToken &, const char *, bool);
	virtual void CopyCollisionGroupFlagsAllPairs(CollisionGroupIndex, CollisionGroupIndex);
	virtual uint16 TestSimulation(const RnCollisionAttr_t &, const RnCollisionAttr_t &);
	virtual void InitializeToGameDefault();
	virtual void DumpStatus();
	virtual uint16 TestQuery(const RnQueryShapeAttr_t &, const RnCollisionAttr_t &);
	virtual IPhysIntersectionDictionary * GetDictionary();

	// vtable[2] SetCollisionGroupPairFlags
	// vtable[3] GetCollisionGroupPairFlags
	// vtable[4] EnableCollisionGroupPairFlags
	// vtable[5] DisableCollisionGroupPairFlags
	// vtable[6] AcquirePreindexedCollisionGroup
	// vtable[7] AcquireCollisionGroup
	// vtable[8] CopyCollisionGroupFlagsAllPairs
	// vtable[9] TestSimulation
	// vtable[10] InitializeToGameDefault
	// vtable[11] DumpStatus
	// vtable[12] TestQuery
	// vtable[13] GetDictionary
	// sizeof = 8
};
