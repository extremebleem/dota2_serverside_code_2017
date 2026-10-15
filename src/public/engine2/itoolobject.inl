
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IToolObject::~IToolObject  (line 50, @0x0000000001eea610, libserver.so)
void __fastcall IToolObject::~IToolObject(IToolObject *const this)
{
  this->_vptr_IToolObject = off_3FB7BF0;
}


// IToolObject::~IToolObject  (line 50, @0x0000000001eebab0, libserver.so)  // inlines: ~IToolObject
// calls: operator delete
void __fastcall IToolObject::~IToolObject(IToolObject *const this)
{
  this->_vptr_IToolObject = off_3FB7BF0;
  operator delete(this);
}


// IToolObject::UpdateStateFromKeyValues  (line 53, @0x0000000001eea620, libserver.so)
void __fastcall IToolObject::UpdateStateFromKeyValues(IToolObject *const this, const CEntityKeyValues *pKeyValues)
{
  ;
}


// IToolObject::GetStateAsKeyValues  (line 56, @0x0000000001eea630, libserver.so)
void __fastcall IToolObject::GetStateAsKeyValues(const IToolObject *const this, CEntityKeyValues *pOutKeyValues)
{
  ;
}


// IToolObject::CreateSceneObjectForRenderInstance  (line 62, @0x0000000001eea640, libserver.so)
CSceneObject *__fastcall IToolObject::CreateSceneObjectForRenderInstance(
        const IToolObject *const this,
        const matrix3x4_t *const mTransform,
        ISceneWorld *pSceneworld)
{
  return 0;
}


// IToolObject::WriteSceneViewRenderAttributes  (line 64, @0x0000000001eea650, libserver.so)
void __fastcall IToolObject::WriteSceneViewRenderAttributes(
        IToolObject *const this,
        CRenderAttributes *const renderAttributes)
{
  ;
}


// IToolObject::GenerateFogState  (line 67, @0x0000000001eea660, libserver.so)
bool __fastcall IToolObject::GenerateFogState(const IToolObject *const this, SceneFogParams_t *pOutFogState)
{
  return 0;
}


// IToolObject::GenerateDirectionalLight  (line 71, @0x0000000001eea670, libserver.so)
CSceneObject *__fastcall IToolObject::GenerateDirectionalLight(const IToolObject *const this, ISceneWorld *pSceneWorld)
{
  return 0;
}


// IToolObject::GenerateSkybox  (line 75, @0x0000000001eea680, libserver.so)
CSceneObject *__fastcall IToolObject::GenerateSkybox(const IToolObject *const this, ISceneWorld *pSceneWorld)
{
  return 0;
}


