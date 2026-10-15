// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/shareddefs.h:28
class CSchemaTypeOf<void (CGameEntity::*)()> {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/game/shared/shareddefs.h:29
class CSchemaTypeOf<void (CEntityInstance::*)(CBaseEntity*)> {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/game/shared/shareddefs.h:278
class CSchemaTypeOf<vote_create_failed_t> {
	CSchemaType * Get(ISchemaSystemTypeScope *);
	const char * GetEnumName();

	// sizeof = 1
};

// CSchemaTypeOf: 8 more instantiations (full list in INDEX.tsv)
//   CSchemaTypeOf<WeaponState_t>
//   CSchemaTypeOf<EntityDisolveType_t>
//   CSchemaTypeOf<DoorState_t>
//   CSchemaTypeOf<MaterialModifyMode_t>
//   CSchemaTypeOf<ScreenEffectType_t>
//   CSchemaTypeOf<ShadowType_t>
//   CSchemaTypeOf<Class_T>
//   CSchemaTypeOf<LatchDirtyPermission_t>
