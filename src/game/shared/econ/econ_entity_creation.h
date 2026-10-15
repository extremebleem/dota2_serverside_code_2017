// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_entity_creation.h:25
class CItemGeneration : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CAutoGameSystem BaseClass;
	CItemGeneration(CItemGeneration &);
	CItemGeneration(const CItemGeneration &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CItemGeneration *);
	CItemGeneration();
	CBaseEntity * GenerateItemFromDefIndex(item_definition_index_t, const Vector &, const QAngle &, CEntitySpawnerContext<CBaseEntity> *);
	CBaseEntity * GenerateItemFromScriptData(CEconItemView *, const Vector &, const QAngle &, const char *, CEntitySpawnerContext<CBaseEntity> *, SpawnGroupHandle_t);
	void PrecacheItemFromDefIndex(item_definition_index_t, const CEntityPrecacheContext *);
	void PrecacheItemFromScriptData(CEconItemView *, const CEntityPrecacheContext *);
	void BuildAssetModifierContainer(CAssetModifierContainer *, int, CEconItemView * *);

private:

	CBaseEntity * SpawnItem(item_definition_index_t, const Vector &, const QAngle &, int, entityquality_t, const char *, CEntitySpawnerContext<CBaseEntity> *);
	void PrecacheItem(item_definition_index_t, int, entityquality_t, const CEntityPrecacheContext *);
	CBaseEntity * SpawnItem(CEconItemView *, const Vector &, const QAngle &, const char *, CEntitySpawnerContext<CBaseEntity> *, SpawnGroupHandle_t);
	void PrecacheItem(CEconItemView *, const CEntityPrecacheContext *);
	virtual ~CItemGeneration();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// sizeof = 24
};
