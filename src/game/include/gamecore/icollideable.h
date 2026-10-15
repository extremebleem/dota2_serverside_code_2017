// Reconstructed from DWARF by pahole; not original source.

// src/game/include/gamecore/icollideable.h:25
class ICollideable {
	int ()() * * _vptr.ICollideable;  // +0x0
	ICollideable(ICollideable &);
	ICollideable(const ICollideable &);
	ICollideable & operator=(ICollideable &);
	ICollideable & operator=(const ICollideable &);
	ICollideable();
	virtual CBaseEntity * GetEntity();
	virtual const Vector & OBBMins();
	virtual const Vector & OBBMaxs();
	virtual void WorldSpaceTriggerBounds(Vector *, Vector *);
	virtual const Vector & GetCollisionOrigin();
	virtual const QAngle & GetCollisionAngles();
	virtual const matrix3x4_t & CollisionToWorldTransform();
	virtual SolidType_t GetSolid();
	virtual int GetSolidFlags();
	virtual int GetCollisionGroup();
	virtual void WorldSpaceSurroundingBounds(Vector *, Vector *);
	virtual bool ShouldTouchTrigger(const RnCollisionAttr_t &);
	virtual IPhysicsObject * GetVPhysicsObject();
	virtual const RnCollisionAttr_t & GetCollisionAttributes();
	virtual bool IsCollisionEnabled();
	virtual bool EnableAllCollisions();
	virtual bool DisableAllCollisions();
	virtual bool EnableSolidCollisions();
	virtual bool DisableSolidCollisions();
	virtual Vector OBBCenter();
	virtual const RnCollisionAttr_t & UpdateCollisionAttributes();
	virtual void MarkPartitionHandleDirty();
	virtual bool DoesRotationInvalidateSurroundingBox();
	virtual bool DoesVPhysicsInvalidateSurroundingBox();
	virtual bool DoesSequenceChangeInvalidateSurroundingBox();
	virtual void MarkSurroundingBoundsDirty();
	virtual void SetSolid(SolidType_t);
	virtual float GetCollisionScale();

	// vtable[0] GetEntity
	// vtable[1] OBBMins
	// vtable[2] OBBMaxs
	// vtable[3] WorldSpaceTriggerBounds
	// vtable[4] GetCollisionOrigin
	// vtable[5] GetCollisionAngles
	// vtable[6] CollisionToWorldTransform
	// vtable[7] GetSolid
	// vtable[8] GetSolidFlags
	// vtable[9] GetCollisionGroup
	// vtable[10] WorldSpaceSurroundingBounds
	// vtable[11] ShouldTouchTrigger
	// vtable[12] GetVPhysicsObject
	// vtable[13] GetCollisionAttributes
	// vtable[14] IsCollisionEnabled
	// vtable[15] EnableAllCollisions
	// vtable[16] DisableAllCollisions
	// vtable[17] EnableSolidCollisions
	// vtable[18] DisableSolidCollisions
	// vtable[19] OBBCenter
	// vtable[20] UpdateCollisionAttributes
	// vtable[21] MarkPartitionHandleDirty
	// vtable[22] DoesRotationInvalidateSurroundingBox
	// vtable[23] DoesVPhysicsInvalidateSurroundingBox
	// vtable[24] DoesSequenceChangeInvalidateSurroundingBox
	// vtable[25] MarkSurroundingBoundsDirty
	// vtable[26] SetSolid
	// vtable[27] GetCollisionScale
	// sizeof = 8
};
