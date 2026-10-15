// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/vr_core/entity_interactions.h:28
struct interactions_data_t {
	const char * pszSelfClassname;  // +0x0
	const char * pszOtherClassname;  // +0x8
	const char * pszSelfAttachmentStart;  // +0x10
	const char * pszSelfAttachmentStartAlternate;  // +0x18
	const char * pszSelfAttachmentAdvance;  // +0x20
	const char * pszSelfAttachmentRetreat;  // +0x28
	bool bSelfMustBeHeld;  // +0x30
	bool bReleaseSelfOnSuccess;  // +0x31

	const char * pszOtherAttachmentStart;  // +0x38
	const char * pszOtherAttachmentStartAlternate;  // +0x40
	const char * pszOtherAttachmentAdvance;  // +0x48
	const char * pszOtherAttachmentRetreat;  // +0x50
	bool bOtherMustBeHeld;  // +0x58
	bool bReleaseOtherOnSuccess;  // +0x59

	// sizeof = 96
};

// src/game/shared/vr_core/entity_interactions.h:49
struct prevent_interaction_t {
	int ()() * * _vptr.prevent_interaction_t;  // +0x0
private:

	static datamap_t m_DataMap;

	EHANDLE m_hEntity;  // +0x8
	float m_flUntilTime;  // +0xc
	~prevent_interaction_t();
	prevent_interaction_t(prevent_interaction_t &);
	prevent_interaction_t(const prevent_interaction_t &);
	prevent_interaction_t();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	prevent_interaction_t & operator=(const prevent_interaction_t &);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 16
};

// src/game/shared/vr_core/entity_interactions.h:63
class CInteractionManager {
	int ()() * * _vptr.CInteractionManager;  // +0x0
private:

	static datamap_t m_DataMap;

	float m_flInteractionLerp;  // +0xa8
	bool m_bSelfInteractionRequirementMet[4];  // +0xac
	bool m_bInteractionsDisabled[4];  // +0xb0
	bool m_bAllInteractionsDisabled;  // +0xb4

	CInteractionManager(CInteractionManager &);
	CInteractionManager(const CInteractionManager &);
	~CInteractionManager();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	CInteractionManager();
	void SetPlayer(CBasePlayer *);
	void SetSelfObject(CBaseAnimating *, CBaseEntity *);
	CBaseAnimating * GetSelfObject();
	CBaseAnimating * GetTargetObject();
	void SetInteractionDisabled(interactions_t, bool);
	void PreventInteractionsWith(CBaseEntity *, float);
	void SetHoldTransform(matrix3x4_t);
	void Think();
	float GetInteractionLerp();
	matrix3x4_t GetInteractionTransformTarget();
	bool HasActiveInteraction();
	void LookForInteractions();
	void StartInteraction(interactions_t, CBaseEntity *);
	void StopInteraction(bool);
	void UpdateInteraction();
	interactions_t TestInteractionsWithEntity(CBaseEntity *);
	void CancelActiveInteraction();
	void RecalculateAllInteractionsDisabled();

	// vtable[0] Schema_DynamicBinding
	// sizeof = 208
};
