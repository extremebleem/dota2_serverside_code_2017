// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_speechbubble.h:17
class CSpeechBubbleManager : public CBaseEntity {
	class NetworkVar_m_SpeechBubbles {
		typedef ThisClass OuterClass_t;
		OuterClass_t * GetOuter(void *);
		void NetworkStateChanged(void *);

		// sizeof = 1
	};
	typedef CSpeechBubbleManager ThisClass;

public:

private:

	short unsigned int m_unBubbleCount;  // +0x7e0
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
	CSpeechBubbleManager(CSpeechBubbleManager &);
	CSpeechBubbleManager(CSpeechBubbleManager &);
	CSpeechBubbleManager();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	virtual int ObjectCaps();
	bool AddSpeechBubble(int, CBaseEntity *, string_t, float, int, int);
	void DestroyAllSpeechBubbles();
	int SpeechBubbleCount();
	const char * GetSpeechBubbleSpeech(int);
	CBaseEntity * GetSpeechBubbleNPC(int);
	float GetSpeechDuration(int);
	virtual ~CSpeechBubbleManager();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// vtable[19] ObjectCaps
	// sizeof = 2024
};
