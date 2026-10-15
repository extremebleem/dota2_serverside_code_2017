
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// FastDelegate0<void>::operator()  (line 1048, @0x00000000026abb70, libserver.so)
// callers: CDOTA_PlayerResource::UpdateTeamSlot, CDOTA_PlayerResource::FindOrCreatePlayerID
void __fastcall FastDelegate0<void>::operator()(const FastDelegate0<void> *const this)
{
  void (*pfn)(detail::GenericClass *); // rax
  detail::GenericClass *v2; // rdi

  pfn = this->m_Closure.m_pFunction.__pfn;
  v2 = (this->m_Closure.m_pthis + this->m_Closure.m_pFunction.__delta);
  if ( (pfn & 1) != 0 )
    pfn = *(pfn + *v2 - 1);
  pfn(v2);
}


// FastDelegate0<bool>::InvokeStaticFunction  (line 1088, @0x0000000001b508a0, libserver.so)
bool __fastcall FastDelegate0<bool>::InvokeStaticFunction(const FastDelegate0<bool> *const this)
{
  return (this)();
}


// FastDelegate0<void>::InvokeStaticFunction  (line 1088, @0x0000000001b508b0, libserver.so)
void __fastcall FastDelegate0<void>::InvokeStaticFunction(const FastDelegate0<void> *const this)
{
  (this)();
}


// FastDelegate1<NetworkSerializationMode_t, void>::InvokeStaticFunction  (line 1214, @0x0000000001b2c610, libserver.so)
void __fastcall FastDelegate1<NetworkSerializationMode_t,void>::InvokeStaticFunction(
        const FastDelegate1<NetworkSerializationMode_t,void> *const this,
        NetworkSerializationMode_t p1)
{
  (this)(p1);
}


// FastDelegate1<bool, void>::InvokeStaticFunction  (line 1214, @0x00000000020f2170, libserver.so)
void __fastcall FastDelegate1<bool,void>::InvokeStaticFunction(const FastDelegate1<bool,void> *const this, bool p1)
{
  (this)(p1);
}


// FastDelegate1<const CUserMessageSayText2_t&, bool>::InvokeStaticFunction  (line 1214, @0x00000000020f2190, libserver.so)
bool __fastcall FastDelegate1<CUserMessageSayText2_t const&,bool>::InvokeStaticFunction(
        const FastDelegate1<const CUserMessageSayText2_t&,bool> *const this,
        const CUserMessageSayText2_t *const p1)
{
  return (this)(p1);
}


// FastDelegate2<int, CEntityHandle*, void>::InvokeStaticFunction  (line 1340, @0x00000000020f2180, libserver.so)
void __fastcall FastDelegate2<int,CEntityHandle *,void>::InvokeStaticFunction(
        const FastDelegate2<int,CEntityHandle*,void> *const this,
        int p1,
        CEntityHandle *p2)
{
  (this)(p1, p2);
}


// FastDelegate2<CBaseEntity*, const CEntityKeyValues*, void>::InvokeStaticFunction  (line 1340, @0x000000000217a850, libserver.so)
void __fastcall FastDelegate2<CBaseEntity *,CEntityKeyValues const*,void>::InvokeStaticFunction(
        const FastDelegate2<CBaseEntity*,const CEntityKeyValues*,void> *const this,
        CBaseEntity *p1,
        const CEntityKeyValues *p2)
{
  (this)(p1, p2);
}


// FastDelegate2<CPointHMDAnchor*, const CEntityKeyValues*, void>::InvokeStaticFunction  (line 1340, @0x0000000002304810, libserver.so)
void __fastcall FastDelegate2<CPointHMDAnchor *,CEntityKeyValues const*,void>::InvokeStaticFunction(
        const FastDelegate2<CPointHMDAnchor*,const CEntityKeyValues*,void> *const this,
        CPointHMDAnchor *p1,
        const CEntityKeyValues *p2)
{
  (this)(p1, p2);
}


// FastDelegate2<CPhysicsProp*, const CEntityKeyValues*, void>::InvokeStaticFunction  (line 1340, @0x0000000002371390, libserver.so)
void __fastcall FastDelegate2<CPhysicsProp *,CEntityKeyValues const*,void>::InvokeStaticFunction(
        const FastDelegate2<CPhysicsProp*,const CEntityKeyValues*,void> *const this,
        CPhysicsProp *p1,
        const CEntityKeyValues *p2)
{
  (this)(p1, p2);
}


// FastDelegate2<CDOTA_Item_Physical*, const CEntityKeyValues*, void>::InvokeStaticFunction  (line 1340, @0x0000000002456470, libserver.so)
void __fastcall FastDelegate2<CDOTA_Item_Physical *,CEntityKeyValues const*,void>::InvokeStaticFunction(
        const FastDelegate2<CDOTA_Item_Physical*,const CEntityKeyValues*,void> *const this,
        CDOTA_Item_Physical *p1,
        const CEntityKeyValues *p2)
{
  (this)(p1, p2);
}


// FastDelegate2<CDOTA_BaseNPC*, const CEntityKeyValues*, void>::InvokeStaticFunction  (line 1340, @0x0000000002552a30, libserver.so)
void __fastcall FastDelegate2<CDOTA_BaseNPC *,CEntityKeyValues const*,void>::InvokeStaticFunction(
        const FastDelegate2<CDOTA_BaseNPC*,const CEntityKeyValues*,void> *const this,
        CDOTA_BaseNPC *p1,
        const CEntityKeyValues *p2)
{
  (this)(p1, p2);
}


