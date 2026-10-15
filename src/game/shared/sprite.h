// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/sprite.h:85
class CSprite : public CBaseModelEntity {
	class NetworkVar_m_hSpriteMaterial {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hAttachedToEntity {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nAttachment {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flSpriteFramerate {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFrame {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nBrightness {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flBrightnessTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flSpriteScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flScaleTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bWorldSpaceScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flGlowProxySize {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flHDRColorScale {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	float m_flDieTime;  // +0x498

	SceneObjectUpdaterHandle_t m_hUpdater;  // +0x4a0

	float m_flLastTime;  // +0x4c4
	float m_flMaxFrame;  // +0x4c8
	float m_flStartScale;  // +0x4cc
	float m_flDestScale;  // +0x4d0
	float m_flScaleTimeStart;  // +0x4d4
	int m_nStartBrightness;  // +0x4d8
	int m_nDestBrightness;  // +0x4dc
	float m_flBrightnessTimeStart;  // +0x4e0
	int m_nSpriteWidth;  // +0x4e4
	int m_nSpriteHeight;  // +0x4e8
	typedef CBaseModelEntity BaseClass;
	typedef CSprite ThisClass;

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
	CSprite(CSprite &);
	CSprite(CSprite &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CSprite();
	void SetMaterialByIndex(HMaterial);
	void GetMaterialName(const char *, char *);

protected:

	virtual void PreFirstNetworkUpdate();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void ComputeWorldSpaceSurroundingBox(Vector *, Vector *);
	void SetGlowProxySize(float);
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual int UpdateTransmitState();
	void SetAsTemporary();
	bool IsTemporary();
	virtual int ObjectCaps();
	virtual void OnRestore();
	void AnimateThink();
	void ExpandThink();
	void Animate(float);
	void Expand(float, float);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void InputHideSprite(inputdata_t &);
	void InputShowSprite(inputdata_t &);
	void InputToggleSprite(inputdata_t &);
	void InputColorRedValue(inputdata_t &);
	void InputColorBlueValue(inputdata_t &);
	void InputColorGreenValue(inputdata_t &);
	void SetAttachment(CBaseEntity *, int);
	void TurnOff();
	void TurnOn();
	bool IsOn();
	float Frames();
	void SetTransparency(int, int, int, int, int, int);
	void SetTexture(HMaterial);
	void SetColor(int, int, int);
	void SetBrightness(int, float);
	void SetScale(float, float);
	void SetSpriteScale(float);
	void EnableWorldSpaceScale(bool);
	float GetScale();
	int GetBrightness();
	float GetHDRColorScale();
	void FadeAndDie(float);
	void AnimateAndDie(float);
	void AnimateForTime(float, float);
	void FadeOutFromSpawn();
	void BeginFadeOutThink();
	void AnimateUntilDead();
	void OnSpriteScaleChanged();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CSprite * SpriteCreate(const char *, const Vector &, bool);
	virtual ~CSprite();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[28] HackToMakeAVTable
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[200] PreFirstNetworkUpdate
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[63] ComputeWorldSpaceSurroundingBox
	// vtable[65] ShouldTransmit
	// vtable[64] UpdateTransmitState
	// vtable[19] ObjectCaps
	// vtable[18] OnRestore
	// vtable[108] Use
	// vtable[34] GetDataDescMap
	// sizeof = 1264
};

// src/game/shared/sprite.h:302
class CSpriteOriented : public CSprite {
public:

private:

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
	CSpriteOriented(CSpriteOriented &);
	CSpriteOriented(CSpriteOriented &);
	CSpriteOriented();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CSpriteOriented();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// sizeof = 1264
};
