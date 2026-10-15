// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/collisionproperty.h:52
class CSchemaTypeOf<SurroundingBoundsType_t> {
	CSchemaType * Get(ISchemaSystemTypeScope *);
	const char * GetEnumName();

	// sizeof = 1
};

// src/game/shared/collisionproperty.h:395
class CCollisionAttributeWriter<RnCollisionAttr_t> {
private:

	bool m_bReleased;  // +0x30
	CCollisionAttributeWriter(CCollisionProperty *);
	~CCollisionAttributeWriter();
	void Release();
	RnCollisionAttr_t & GetForModify();
	void CopyRaw(const VPhysicsCollisionAttribute_t *);

	// sizeof = 56
};
