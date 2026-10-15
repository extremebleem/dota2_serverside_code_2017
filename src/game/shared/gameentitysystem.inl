
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IEntityListener::OnEntityCreated  (line 34, @0x0000000001f71be0, libserver.so)
void __fastcall IEntityListener::OnEntityCreated(IEntityListener *const this, CEntityInstance *pEntity)
{
  ;
}


// IEntityListener::OnEntitySpawned  (line 35, @0x0000000001f71bf0, libserver.so)
void __fastcall IEntityListener::OnEntitySpawned(IEntityListener *const this, CEntityInstance *pEntity)
{
  ;
}


// IEntityListener::OnEntityDeleted  (line 36, @0x0000000001f71c00, libserver.so)
void __fastcall IEntityListener::OnEntityDeleted(IEntityListener *const this, CEntityInstance *pEntity)
{
  ;
}


// IEntityListener::OnEntityParentChanged  (line 37, @0x0000000001f71c10, libserver.so)
void __fastcall IEntityListener::OnEntityParentChanged(
        IEntityListener *const this,
        CEntityInstance *pEntity,
        CEntityInstance *pNewParent)
{
  ;
}


// ISpawnGroupEntityFilter::~ISpawnGroupEntityFilter  (line 50, @0x0000000001f71c20, libserver.so)
void __fastcall ISpawnGroupEntityFilter::~ISpawnGroupEntityFilter(ISpawnGroupEntityFilter *const this)
{
  this->_vptr_ISpawnGroupEntityFilter = off_3FCAF10;
}


// ISpawnGroupEntityFilter::~ISpawnGroupEntityFilter  (line 50, @0x0000000001f73c10, libserver.so)  // inlines: ~ISpawnGroupEntityFilter
// calls: operator delete
void __fastcall ISpawnGroupEntityFilter::~ISpawnGroupEntityFilter(ISpawnGroupEntityFilter *const this)
{
  this->_vptr_ISpawnGroupEntityFilter = off_3FCAF10;
  operator delete(this);
}


// CGameEntitySystem::NextEntByClass<CDOTA_Item>  (line 243, @0x0000000002977630, libserver.so)
// calls: CGameEntitySystem::NextEnt, __dynamic_cast
// callers: CDOTA_BaseNPC::AttemptToPurchaseItem
CDOTA_Item *__fastcall CGameEntitySystem::NextEntByClass<CDOTA_Item>(CGameEntitySystem *const this, CDOTA_Item *start)
{
  CBaseEntity *Ent; // rbx
  CDOTA_Item *result; // rax

  Ent = CGameEntitySystem::NextEnt(this, start);
  if ( Ent == 0 )
    return 0;
  while ( 1 )
  {
    result = __dynamic_cast(Ent, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Item, 0);
    if ( result != 0 )
      break;
    Ent = CGameEntitySystem::NextEnt(this, Ent);
    if ( Ent == 0 )
      return 0;
  }
  return result;
}


// CEntityClassList<CPointCamera>::~CEntityClassList  (line 551, @0x0000000001eecc90, libserver.so)
// calls: CBaseEntityClassList::~CBaseEntityClassList
void __fastcall CEntityClassList<CPointCamera>::~CEntityClassList(CEntityClassList<CPointCamera> *const this)
{
  CBaseEntityClassList::~CBaseEntityClassList(this);
}


// CEntityClassList<CSkyCamera>::~CEntityClassList  (line 551, @0x00000000023ab420, libserver.so)
// calls: CBaseEntityClassList::~CBaseEntityClassList
void __fastcall CEntityClassList<CSkyCamera>::~CEntityClassList(CEntityClassList<CSkyCamera> *const this)
{
  CBaseEntityClassList::~CBaseEntityClassList(this);
}


