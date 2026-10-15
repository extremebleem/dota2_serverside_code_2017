
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseServerVehicle::operator=  (line 129, @0x000000000202a560, libserver.so)  // inlines: operator=, operator[]
// calls: CUtlVectorBase<CPassengerInfo, CUtlMemory<CPassengerInfo, int> >::SetCount, CUtlVectorBase<CPassengerRole, CUtlMemory<CPassengerRole, int> >::SetCount, CUtlVectorBase<CPassengerSeat, CUtlMemory<CPassengerSeat, int> >::SetCount, CUtlVectorBase<CPassengerSeatTransition, CUtlMemory<CPassengerSeatTransition, int> >::SetCount, CUtlVectorBase<CBaseServerVehicle::entryanim_t, CUtlMemory<CBaseServerVehicle::entryanim_t, int> >::SetCount, memcpy, CUtlVectorBase<CBaseServerVehicle::exitanim_t, CUtlMemory<CBaseServerVehicle::exitanim_t, int> >::SetCount, CUtlVectorBase<vehicle_gear_t, CUtlMemory<vehicle_gear_t, int> >::SetCount, CUtlVectorBase<vehicle_crashsound_t, CUtlMemory<vehicle_crashsound_t, int> >::SetCount
// callers: CSchemaClassBinding<CBaseServerVehicle>::AllocateAndCopyConstruct, CSchemaClassBinding<CBaseServerVehicle>::Copy, CSchemaClassBinding<CFourWheelServerVehicle>::AllocateAndCopyConstruct, CSchemaClassBinding<CFourWheelServerVehicle>::Copy
CBaseServerVehicle *__fastcall CBaseServerVehicle::operator=(
        CBaseServerVehicle *const this,
        const CBaseServerVehicle *const a2)
{
  CUtlVector<CPassengerInfo,CUtlMemory<CPassengerInfo,int> > *p_m_PassengerInfo; // rdi
  int m_Size; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  char *v7; // rdx
  char *v8; // rax
  int v9; // ebx
  CPassengerRole *v10; // rbx
  int v11; // r13d
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  CPassengerSeat *v14; // r14
  CPassengerSeat *v15; // r15
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  char *v20; // rcx
  char *v21; // rdx
  int v22; // r12d
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  char *v26; // rcx
  char *v27; // rdx
  int v28; // ebx
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // r12
  unsigned __int64 v32; // rsi
  CBaseServerVehicle::entryanim_t *v33; // rdi
  int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  bool *v38; // rdx
  bool *v39; // rax
  int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  _DWORD *v44; // rcx
  _DWORD *v45; // rdx
  int v46; // ebx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  char *v50; // rcx
  char *v51; // rdx
  __int64 i; // rax
  __int64 j; // rax
  __int64 v55; // [rsp+0h] [rbp-60h]
  unsigned __int64 v58; // [rsp+18h] [rbp-48h]
  CPassengerRole *v59; // [rsp+20h] [rbp-40h]
  __int64 v60; // [rsp+28h] [rbp-38h]

  p_m_PassengerInfo = &this->m_PassengerInfo;
  if ( p_m_PassengerInfo != &a2->m_PassengerInfo )
  {
    m_Size = a2->m_PassengerInfo.m_Size;
    CUtlVectorBase<CPassengerInfo,CUtlMemory<CPassengerInfo,int>>::SetCount(p_m_PassengerInfo, m_Size);
    if ( m_Size > 0 )
    {
      v4 = 0;
      do
      {
        v5 = v4;
        v6 = v4;
        v4 += 32;
        v7 = a2->m_PassengerInfo.m_Memory.m_pMemory + v5;
        v8 = this->m_PassengerInfo.m_Memory.m_pMemory + v6;
        *v8 = *v7;
        *(v8 + 1) = *(v7 + 1);
        *(v8 + 1) = *(v7 + 1);
        *(v8 + 2) = *(v7 + 2);
        *(v8 + 6) = *(v7 + 6);
      }
      while ( v4 != 32 * ((m_Size - 1) + 1LL) );
    }
  }
  if ( &this->m_PassengerRoles != &a2->m_PassengerRoles )
  {
    v9 = a2->m_PassengerRoles.m_Size;
    CUtlVectorBase<CPassengerRole,CUtlMemory<CPassengerRole,int>>::SetCount(&this->m_PassengerRoles, v9);
    if ( v9 > 0 )
    {
      v58 = 0;
      v55 = 32 * ((v9 - 1) + 1LL);
      do
      {
        v10 = &a2->m_PassengerRoles.m_Memory.m_pMemory[v58 / 0x20];
        v59 = &this->m_PassengerRoles.m_Memory.m_pMemory[v58 / 0x20];
        v59->m_strName.u.m_Id = v10->m_strName.u.m_Id;
        if ( &v59->m_PassengerSeats != &v10->m_PassengerSeats )
        {
          v11 = v10->m_PassengerSeats.m_Size;
          CUtlVectorBase<CPassengerSeat,CUtlMemory<CPassengerSeat,int>>::SetCount(&v59->m_PassengerSeats, v11);
          if ( v11 > 0 )
          {
            v12 = (v11 - 1) + 1LL;
            v13 = 0;
            v60 = v12 << 6;
            do
            {
              v14 = &v10->m_PassengerSeats.m_Memory.m_pMemory[v13 / 0x40];
              v15 = &v59->m_PassengerSeats.m_Memory.m_pMemory[v13 / 0x40];
              v15->m_strSeatName.u.m_Id = v14->m_strSeatName.u.m_Id;
              v15->m_nAttachmentID = v14->m_nAttachmentID;
              if ( &v15->m_EntryTransitions != &v14->m_EntryTransitions )
              {
                v16 = v14->m_EntryTransitions.m_Size;
                CUtlVectorBase<CPassengerSeatTransition,CUtlMemory<CPassengerSeatTransition,int>>::SetCount(
                  &v15->m_EntryTransitions,
                  v16);
                if ( v16 > 0 )
                {
                  v17 = 0;
                  do
                  {
                    v18 = v17;
                    v19 = v17;
                    v17 += 16;
                    v20 = v14->m_EntryTransitions.m_Memory.m_pMemory + v18;
                    v21 = v15->m_EntryTransitions.m_Memory.m_pMemory + v19;
                    *v21 = *v20;
                    *(v21 + 2) = *(v20 + 2);
                  }
                  while ( v17 != 16 * ((v16 - 1) + 1LL) );
                }
              }
              if ( &v15->m_ExitTransitions != &v14->m_ExitTransitions )
              {
                v22 = v14->m_ExitTransitions.m_Size;
                CUtlVectorBase<CPassengerSeatTransition,CUtlMemory<CPassengerSeatTransition,int>>::SetCount(
                  &v15->m_ExitTransitions,
                  v22);
                if ( v22 > 0 )
                {
                  v23 = 0;
                  do
                  {
                    v24 = v23;
                    v25 = v23;
                    v23 += 16;
                    v26 = v14->m_ExitTransitions.m_Memory.m_pMemory + v24;
                    v27 = v15->m_ExitTransitions.m_Memory.m_pMemory + v25;
                    *v27 = *v26;
                    *(v27 + 2) = *(v26 + 2);
                  }
                  while ( v23 != 16 * ((v22 - 1) + 1LL) );
                }
              }
              v13 += 64LL;
            }
            while ( v13 != v60 );
          }
        }
        v58 += 32LL;
      }
      while ( v58 != v55 );
    }
  }
  this->m_pVehicle = a2->m_pVehicle;
  this->m_pDrivableVehicle = a2->m_pDrivableVehicle;
  this->m_nNPCButtons = a2->m_nNPCButtons;
  this->m_nPrevNPCButtons = a2->m_nPrevNPCButtons;
  this->m_flTurnDegrees = a2->m_flTurnDegrees;
  if ( &this->m_EntryAnimations != &a2->m_EntryAnimations )
  {
    v28 = a2->m_EntryAnimations.m_Size;
    CUtlVectorBase<CBaseServerVehicle::entryanim_t,CUtlMemory<CBaseServerVehicle::entryanim_t,int>>::SetCount(
      &this->m_EntryAnimations,
      v28);
    if ( v28 > 0 )
    {
      v29 = (v28 - 1);
      v30 = 0;
      v31 = 132 * (v29 + 1);
      do
      {
        v32 = v30;
        v33 = &this->m_EntryAnimations.m_Memory.m_pMemory[v30 / 0x84];
        v30 += 132LL;
        memcpy(v33, a2->m_EntryAnimations.m_Memory.m_pMemory + v32, sizeof(CBaseServerVehicle::entryanim_t));
      }
      while ( v30 != v31 );
    }
  }
  if ( &this->m_ExitAnimations != &a2->m_ExitAnimations )
  {
    v34 = a2->m_ExitAnimations.m_Size;
    CUtlVectorBase<CBaseServerVehicle::exitanim_t,CUtlMemory<CBaseServerVehicle::exitanim_t,int>>::SetCount(
      &this->m_ExitAnimations,
      v34);
    if ( v34 > 0 )
    {
      v35 = 0;
      do
      {
        v36 = v35;
        v37 = v35;
        v35 += 156;
        v38 = &a2->m_ExitAnimations.m_Memory.m_pMemory->bUpright + v36;
        v39 = &this->m_ExitAnimations.m_Memory.m_pMemory->bUpright + v37;
        *v39 = *v38;
        v39[1] = v38[1];
        *(v39 + 2) = *(v38 + 2);
        *(v39 + 10) = *(v38 + 10);
        *(v39 + 18) = *(v38 + 18);
        *(v39 + 26) = *(v38 + 26);
        *(v39 + 34) = *(v38 + 34);
        *(v39 + 42) = *(v38 + 42);
        *(v39 + 50) = *(v38 + 50);
        *(v39 + 58) = *(v38 + 58);
        *(v39 + 66) = *(v38 + 66);
        *(v39 + 74) = *(v38 + 74);
        *(v39 + 82) = *(v38 + 82);
        *(v39 + 90) = *(v38 + 90);
        *(v39 + 98) = *(v38 + 98);
        *(v39 + 106) = *(v38 + 106);
        *(v39 + 114) = *(v38 + 114);
        *(v39 + 122) = *(v38 + 122);
        *(v39 + 33) = *(v38 + 33);
        *(v39 + 34) = *(v38 + 34);
        *(v39 + 35) = *(v38 + 35);
        *(v39 + 36) = *(v38 + 36);
        *(v39 + 37) = *(v38 + 37);
        *(v39 + 38) = *(v38 + 38);
      }
      while ( v35 != 156 * ((v34 - 1) + 1LL) );
    }
  }
  this->m_bParsedAnimations = a2->m_bParsedAnimations;
  this->m_bUseLegacyExitChecks = a2->m_bUseLegacyExitChecks;
  this->m_iCurrentExitAnim = a2->m_iCurrentExitAnim;
  this->m_vecCurrentExitEndPoint.x = a2->m_vecCurrentExitEndPoint.x;
  this->m_vecCurrentExitEndPoint.y = a2->m_vecCurrentExitEndPoint.y;
  this->m_vecCurrentExitEndPoint.z = a2->m_vecCurrentExitEndPoint.z;
  this->m_savedViewOffset.x = a2->m_savedViewOffset.x;
  this->m_savedViewOffset.y = a2->m_savedViewOffset.y;
  this->m_savedViewOffset.z = a2->m_savedViewOffset.z;
  this->m_hExitBlocker.m_Index = a2->m_hExitBlocker.m_Index;
  this->m_chPreviousTextureType = a2->m_chPreviousTextureType;
  if ( &this->m_vehicleSounds.pGears != &a2->m_vehicleSounds.pGears )
  {
    v40 = a2->m_vehicleSounds.pGears.m_Size;
    CUtlVectorBase<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>::SetCount(&this->m_vehicleSounds.pGears, v40);
    if ( v40 > 0 )
    {
      v41 = 0;
      do
      {
        v42 = v41;
        v43 = v41;
        v41 += 24;
        v44 = (a2->m_vehicleSounds.pGears.m_Memory.m_pMemory + v42);
        v45 = (this->m_vehicleSounds.pGears.m_Memory.m_pMemory + v43);
        v45[2] = v44[2];
        v45[3] = v44[3];
        v45[4] = v44[4];
      }
      while ( v41 != 8 * (3LL * (v40 - 1) + 3) );
    }
  }
  if ( &this->m_vehicleSounds.crashSounds != &a2->m_vehicleSounds.crashSounds )
  {
    v46 = a2->m_vehicleSounds.crashSounds.m_Size;
    CUtlVectorBase<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>::SetCount(
      &this->m_vehicleSounds.crashSounds,
      v46);
    if ( v46 > 0 )
    {
      v47 = 0;
      do
      {
        v48 = v47;
        v49 = v47;
        v47 += 32;
        v50 = a2->m_vehicleSounds.crashSounds.m_Memory.m_pMemory + v48;
        v51 = this->m_vehicleSounds.crashSounds.m_Memory.m_pMemory + v49;
        *(v51 + 2) = *(v50 + 2);
        *(v51 + 3) = *(v50 + 3);
        *(v51 + 4) = *(v50 + 4);
        *(v51 + 3) = *(v50 + 3);
      }
      while ( v47 != 32 * ((v46 - 1) + 1LL) );
    }
  }
  for ( i = 0; i != 9; ++i )
    this->m_vehicleSounds.iszSound[i].u.m_Id = a2->m_vehicleSounds.iszSound[i].u.m_Id;
  for ( j = 0; j != 20; ++j )
    this->m_vehicleSounds.iszStateSounds[j].u.m_Id = a2->m_vehicleSounds.iszStateSounds[j].u.m_Id;
  *this->m_vehicleSounds.minStateTime = *a2->m_vehicleSounds.minStateTime;
  *&this->m_vehicleSounds.minStateTime[2] = *&a2->m_vehicleSounds.minStateTime[2];
  *&this->m_vehicleSounds.minStateTime[4] = *&a2->m_vehicleSounds.minStateTime[4];
  *&this->m_vehicleSounds.minStateTime[6] = *&a2->m_vehicleSounds.minStateTime[6];
  *&this->m_vehicleSounds.minStateTime[8] = *&a2->m_vehicleSounds.minStateTime[8];
  *&this->m_vehicleSounds.minStateTime[10] = *&a2->m_vehicleSounds.minStateTime[10];
  *&this->m_vehicleSounds.minStateTime[12] = *&a2->m_vehicleSounds.minStateTime[12];
  *&this->m_vehicleSounds.minStateTime[14] = *&a2->m_vehicleSounds.minStateTime[14];
  *&this->m_vehicleSounds.minStateTime[16] = *&a2->m_vehicleSounds.minStateTime[16];
  *&this->m_vehicleSounds.minStateTime[18] = *&a2->m_vehicleSounds.minStateTime[18];
  this->m_flVehicleVolume = a2->m_flVehicleVolume;
  this->m_iSoundGear = a2->m_iSoundGear;
  this->m_flSpeedPercentage = a2->m_flSpeedPercentage;
  this->m_pStateSound = a2->m_pStateSound;
  this->m_pStateSoundFade = a2->m_pStateSoundFade;
  this->m_soundState = a2->m_soundState;
  this->m_soundStateStartTime = a2->m_soundStateStartTime;
  this->m_lastSpeed = a2->m_lastSpeed;
  return this;
}


// CBaseServerVehicle::Schema_DynamicBinding  (line 131, @0x0000000002410bd0, libserver.so)
// calls: CBaseServerVehicle::Schema_VerifyBindingIsRegistered
const CSchemaClassBindingBase *__fastcall CBaseServerVehicle::Schema_DynamicBinding(
        const CBaseServerVehicle *const this)
{
  CBaseServerVehicle::Schema_VerifyBindingIsRegistered();
  return CBaseServerVehicle::s_pSchemaBinding;
}


// CBaseServerVehicle::IsPassengerUsingStandardWeapons  (line 149, @0x0000000002410160, libserver.so)
bool __fastcall CBaseServerVehicle::IsPassengerUsingStandardWeapons(const CBaseServerVehicle *const this, int nRole)
{
  return 0;
}


// CBaseServerVehicle::GetVehicleEnt  (line 157, @0x0000000002410170, libserver.so)
CBaseEntity *__fastcall CBaseServerVehicle::GetVehicleEnt(CBaseServerVehicle *const this)
{
  return this->m_pVehicle;
}


// CBaseServerVehicle::IsPassengerVisible  (line 159, @0x0000000002410180, libserver.so)
bool __fastcall CBaseServerVehicle::IsPassengerVisible(CBaseServerVehicle *const this, int nRole)
{
  return 0;
}


// CBaseServerVehicle::IsPassengerDamagable  (line 160, @0x0000000002410190, libserver.so)
bool __fastcall CBaseServerVehicle::IsPassengerDamagable(CBaseServerVehicle *const this, int nRole)
{
  return 1;
}


// CBaseServerVehicle::IsVehicleUpright  (line 163, @0x00000000024101a0, libserver.so)
bool __fastcall CBaseServerVehicle::IsVehicleUpright(CBaseServerVehicle *const this)
{
  return 1;
}


// CBaseServerVehicle::IsPassengerEntering  (line 164, @0x00000000024101b0, libserver.so)
bool __fastcall CBaseServerVehicle::IsPassengerEntering(CBaseServerVehicle *const this)
{
  return 0;
}


// CBaseServerVehicle::IsPassengerExiting  (line 165, @0x00000000024101c0, libserver.so)
bool __fastcall CBaseServerVehicle::IsPassengerExiting(CBaseServerVehicle *const this)
{
  return 0;
}


// CBaseServerVehicle::ClassifyPassenger  (line 172, @0x00000000024101d0, libserver.so)
Class_T __fastcall CBaseServerVehicle::ClassifyPassenger(
        CBaseServerVehicle *const this,
        CBaseCombatCharacter *pPassenger,
        Class_T defaultClassification)
{
  return defaultClassification;
}


// CBaseServerVehicle::PassengerDamageModifier  (line 173, @0x00000000024101e0, libserver.so)
float __fastcall CBaseServerVehicle::PassengerDamageModifier(
        CBaseServerVehicle *const this,
        const CTakeDamageInfo *const info)
{
  return 1.0;
}


// CBaseServerVehicle::GetVehicleParams  (line 174, @0x00000000024101f0, libserver.so)
const vehicleparams_t *__fastcall CBaseServerVehicle::GetVehicleParams(CBaseServerVehicle *const this)
{
  return 0;
}


// CBaseServerVehicle::IsVehicleBodyInWater  (line 175, @0x0000000002410200, libserver.so)
bool __fastcall CBaseServerVehicle::IsVehicleBodyInWater(CBaseServerVehicle *const this)
{
  return 0;
}


// CBaseServerVehicle::GetVehicleController  (line 176, @0x0000000002410210, libserver.so)
IPhysicsVehicleController *__fastcall CBaseServerVehicle::GetVehicleController(CBaseServerVehicle *const this)
{
  return 0;
}


// CBaseServerVehicle::NPC_CanDrive  (line 179, @0x0000000002410220, libserver.so)
bool __fastcall CBaseServerVehicle::NPC_CanDrive(CBaseServerVehicle *const this)
{
  return 1;
}


// CBaseServerVehicle::NPC_SetDriver  (line 180, @0x0000000002410230, libserver.so)
void __fastcall CBaseServerVehicle::NPC_SetDriver(CBaseServerVehicle *const this, CNPC_VehicleDriver *pDriver)
{
  ;
}


// CBaseServerVehicle::NPC_DriveVehicle  (line 181, @0x0000000002410240, libserver.so)
void __fastcall CBaseServerVehicle::NPC_DriveVehicle(CBaseServerVehicle *const this)
{
  ;
}


// CBaseServerVehicle::NPC_HasPrimaryWeapon  (line 191, @0x0000000002410250, libserver.so)
bool __fastcall CBaseServerVehicle::NPC_HasPrimaryWeapon(CBaseServerVehicle *const this)
{
  return 0;
}


// CBaseServerVehicle::NPC_HasSecondaryWeapon  (line 192, @0x0000000002410260, libserver.so)
bool __fastcall CBaseServerVehicle::NPC_HasSecondaryWeapon(CBaseServerVehicle *const this)
{
  return 0;
}


// CBaseServerVehicle::NPC_AimPrimaryWeapon  (line 193, @0x0000000002410270, libserver.so)
void __fastcall CBaseServerVehicle::NPC_AimPrimaryWeapon(CBaseServerVehicle *const this)
{
  ;
}


// CBaseServerVehicle::NPC_AimSecondaryWeapon  (line 194, @0x0000000002410280, libserver.so)
void __fastcall CBaseServerVehicle::NPC_AimSecondaryWeapon(CBaseServerVehicle *const this)
{
  ;
}


// CBaseServerVehicle::GetDriver  (line 247, @0x0000000002410290, libserver.so)
CBaseEntity *__fastcall CBaseServerVehicle::GetDriver(CBaseServerVehicle *const this)
{
  return (*(this->_vptr_IVehicle + 1))(this, 0);
}


