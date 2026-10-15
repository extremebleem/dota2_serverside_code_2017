// Reconstructed from DWARF by pahole; not original source.

// src/game/server/util.h:367
class EntityMatrix : public VMatrix {
public:

	EntityMatrix();
	void InitFromEntity(CBaseEntity *);
	void InitFromEntityAttachmentName(CBaseEntity *, CUtlStringToken);
	void InitFromEntityAttachmentHandle(CBaseEntity *, AttachmentHandle_t);
	void InitFromEntityLocal(CBaseEntity *);
	Vector LocalToWorld(const Vector &);
	Vector WorldToLocal(const Vector &);
	Vector LocalToWorldRotation(const Vector &);
	Vector WorldToLocalRotation(const Vector &);

	// sizeof = 64
};
