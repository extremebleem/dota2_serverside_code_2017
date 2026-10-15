// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotknownentity.h:17
class CKnownEntity {
	int ()() * * _vptr.CKnownEntity;  // +0x0
private:

	bool m_hasLastKnownPositionBeenSeen;  // +0x18

	float m_whenLastSeen;  // +0x28
	float m_whenLastBecameVisible;  // +0x2c
	float m_whenLastKnown;  // +0x30
	float m_whenBecameKnown;  // +0x34
	bool m_isVisible;  // +0x38
	CKnownEntity(const CKnownEntity &);
	CKnownEntity(CBaseEntity *);
	virtual ~CKnownEntity();
	virtual void Destroy();
	virtual void UpdatePosition();
	virtual CBaseEntity * GetEntity();
	virtual const Vector & GetLastKnownPosition();
	virtual bool HasLastKnownPositionBeenSeen();
	virtual void MarkLastKnownPositionAsSeen();
	virtual const CNavArea * GetLastKnownArea();
	virtual float GetTimeSinceLastKnown();
	virtual float GetTimeSinceBecameKnown();
	virtual void UpdateVisibilityStatus(bool);
	virtual bool IsVisible();
	virtual float GetTimeSinceBecameVisible();
	virtual float GetTimeWhenBecameVisible();
	virtual float GetTimeSinceLastSeen();
	virtual bool WasEverVisible();
	virtual bool IsObsolete();
	virtual bool operator==(const CKnownEntity &);

	// vtable[2] Destroy
	// vtable[3] UpdatePosition
	// vtable[4] GetEntity
	// vtable[5] GetLastKnownPosition
	// vtable[6] HasLastKnownPositionBeenSeen
	// vtable[7] MarkLastKnownPositionAsSeen
	// vtable[8] GetLastKnownArea
	// vtable[9] GetTimeSinceLastKnown
	// vtable[10] GetTimeSinceBecameKnown
	// vtable[11] UpdateVisibilityStatus
	// vtable[12] IsVisible
	// vtable[13] GetTimeSinceBecameVisible
	// vtable[14] GetTimeWhenBecameVisible
	// vtable[15] GetTimeSinceLastSeen
	// vtable[16] WasEverVisible
	// vtable[17] IsObsolete
	// sizeof = 64
};
