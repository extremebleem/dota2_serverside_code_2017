
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IPhysIntersectionDictionary::AcquirePreindexedCollisionGroupName<11>  (line 35, @0x0000000001f88700, libserver.so)  // inlines: CUtlStringToken
// callers: CPhysicsGameSystem::InitializeStandardCollisionNames
bool __fastcall IPhysIntersectionDictionary::AcquirePreindexedCollisionGroupName<11>(
        IPhysIntersectionDictionary *const this,
        char (*const str)[11],
        int nPreferredIndex)
{
  int v4; // esi
  bool (__fastcall *v5)(IPhysIntersectionDictionary *const, unsigned int *, char *, _QWORD); // r9
  int v6; // ecx
  char v7; // r8
  int v8; // esi
  int v9; // ecx
  int v10; // ecx
  int v11; // r10d
  int v12; // esi
  unsigned int v13; // r10d
  int v14; // ecx
  char v15; // r8
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  int v19; // r11d
  int v20; // esi
  unsigned int v21; // r8d
  int v22; // esi
  unsigned int v24[4]; // [rsp+0h] [rbp-10h] BYREF

  v4 = (*str)[0];
  v5 = *(this->_vptr_IPhysIntersectionDictionary + 12);
  v6 = (*str)[1];
  if ( (v4 - 65) <= 0x19u )
    v4 += 32;
  if ( (v6 - 65) <= 0x19u )
    v6 += 32;
  v7 = (*str)[2];
  v8 = (v6 << 8) + v4;
  v9 = v7;
  if ( (v7 - 65) <= 0x19u )
    v9 = v7 + 32;
  v10 = v8 + (v9 << 16);
  v11 = (*str)[3] << 24;
  if ( ((*str)[3] - 65) <= 0x19u )
    v11 += 0x20000000;
  v12 = (*str)[4];
  v13 = (1540483477 * ((1540483477 * (v11 + v10)) ^ ((1540483477 * (v11 + v10)) >> 24))) ^ 0x961DF29C;
  v14 = (*str)[5];
  if ( ((*str)[4] - 65) <= 0x19u )
    v12 += 32;
  if ( (v14 - 65) <= 0x19u )
    v14 += 32;
  v15 = (*str)[6];
  v16 = (v14 << 8) + v12;
  v17 = v15;
  if ( (v15 - 65) <= 0x19u )
    v17 = v15 + 32;
  v18 = v16 + (v17 << 16);
  v19 = (*str)[7] << 24;
  if ( ((*str)[7] - 65) <= 0x19u )
    v19 += 0x20000000;
  v20 = (*str)[9];
  if ( ((*str)[9] - 65) <= 0x19u )
    v20 += 32;
  v21 = (v20 << 8)
      ^ (1540483477 * v13)
      ^ (1540483477 * ((1540483477 * (v19 + v18)) ^ ((1540483477 * (v19 + v18)) >> 24)));
  v22 = (*str)[8];
  if ( ((*str)[8] - 65) <= 0x19u )
    v22 += 32;
  v24[0] = (1540483477 * ((1540483477 * (v22 ^ v21)) ^ ((1540483477 * (v22 ^ v21)) >> 13)))
         ^ ((1540483477 * ((1540483477 * (v22 ^ v21)) ^ ((1540483477 * (v22 ^ v21)) >> 13))) >> 15);
  return v5(this, v24, str, nPreferredIndex);
}


// IPhysIntersectionDictionary::AcquirePreindexedCollisionGroupName<13>  (line 35, @0x0000000001f888d0, libserver.so)  // inlines: CUtlStringToken
// callers: CPhysicsGameSystem::InitializeStandardCollisionNames
bool __fastcall IPhysIntersectionDictionary::AcquirePreindexedCollisionGroupName<13>(
        IPhysIntersectionDictionary *const this,
        char (*const str)[13],
        int nPreferredIndex)
{
  int v4; // esi
  bool (__fastcall *v5)(IPhysIntersectionDictionary *const, int *, char *, _QWORD); // r9
  int v6; // ecx
  char v7; // r8
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  int v11; // r10d
  unsigned int v12; // ecx
  int v13; // esi
  unsigned int v14; // ecx
  int v15; // r8d
  char v16; // r10
  int v17; // esi
  int v18; // r8d
  int v19; // esi
  int v20; // r11d
  unsigned int v21; // r8d
  int v22; // esi
  int v23; // r8d
  int v24; // r10d
  char v25; // r11
  int v26; // esi
  int v27; // r10d
  int v28; // r10d
  int v29; // ecx
  unsigned int v30; // esi
  unsigned int v31; // r8d
  int v33[4]; // [rsp+0h] [rbp-10h] BYREF

  v4 = (*str)[0];
  v5 = *(this->_vptr_IPhysIntersectionDictionary + 12);
  v6 = (*str)[1];
  if ( (v4 - 65) <= 0x19u )
    v4 += 32;
  if ( (v6 - 65) <= 0x19u )
    v6 += 32;
  v7 = (*str)[2];
  v8 = (v6 << 8) + v4;
  v9 = v7;
  if ( (v7 - 65) <= 0x19u )
    v9 = v7 + 32;
  v10 = (v9 << 16) + v8;
  v11 = (*str)[3] << 24;
  if ( ((*str)[3] - 65) <= 0x19u )
    v11 += 0x20000000;
  v12 = (1540483477 * (v11 + v10)) ^ ((1540483477 * (v11 + v10)) >> 24);
  v13 = (*str)[4];
  v14 = (1540483477 * v12) ^ 0xDE7A1F72;
  v15 = (*str)[5];
  if ( ((*str)[4] - 65) <= 0x19u )
    v13 += 32;
  if ( (v15 - 65) <= 0x19u )
    v15 += 32;
  v16 = (*str)[6];
  v17 = (v15 << 8) + v13;
  v18 = v16;
  if ( (v16 - 65) <= 0x19u )
    v18 = v16 + 32;
  v19 = (v18 << 16) + v17;
  v20 = (*str)[7] << 24;
  if ( ((*str)[7] - 65) <= 0x19u )
    v20 += 0x20000000;
  v21 = (1540483477 * (v20 + v19)) ^ ((1540483477 * (v20 + v19)) >> 24);
  v22 = (*str)[8];
  v23 = (1540483477 * v14) ^ (1540483477 * v21);
  if ( ((*str)[8] - 65) <= 0x19u )
    v22 += 32;
  v24 = (*str)[9];
  if ( ((*str)[9] - 65) <= 0x19u )
    v24 += 32;
  v25 = (*str)[10];
  v26 = (v24 << 8) + v22;
  v27 = v25;
  if ( (v25 - 65) <= 0x19u )
    v27 = v25 + 32;
  v28 = v26 + (v27 << 16);
  v29 = (*str)[11] << 24;
  if ( ((*str)[11] - 65) <= 0x19u )
    v29 = ((*str)[11] + 32) << 24;
  v30 = (1540483477 * (v28 + v29)) ^ ((1540483477 * (v28 + v29)) >> 24);
  v31 = 1540483477 * ((1540483477 * v23) ^ (1540483477 * v30) ^ (((1540483477 * v23) ^ (1540483477 * v30)) >> 13));
  v33[0] = v31 ^ (v31 >> 15);
  return v5(this, v33, str, nPreferredIndex);
}


// IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<11>  (line 38, @0x0000000001f88b10, libserver.so)  // inlines: CUtlStringToken
// callers: CPhysicsGameSystem::InitializeStandardCollisionNames
IntersectionLayerIndex __fastcall IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<11>(
        IPhysIntersectionDictionary *const this,
        char (*const pName)[11],
        int nPreferredIndex)
{
  int v4; // esi
  IntersectionLayerIndex (__fastcall *v5)(IPhysIntersectionDictionary *const, unsigned int *, char *, _QWORD); // r9
  int v6; // ecx
  char v7; // r8
  int v8; // esi
  int v9; // ecx
  int v10; // ecx
  int v11; // r10d
  int v12; // esi
  unsigned int v13; // r10d
  int v14; // ecx
  char v15; // r8
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  int v19; // r11d
  int v20; // esi
  unsigned int v21; // r8d
  int v22; // esi
  unsigned int v24[4]; // [rsp+0h] [rbp-10h] BYREF

  v4 = (*pName)[0];
  v5 = *(this->_vptr_IPhysIntersectionDictionary + 13);
  v6 = (*pName)[1];
  if ( (v4 - 65) <= 0x19u )
    v4 += 32;
  if ( (v6 - 65) <= 0x19u )
    v6 += 32;
  v7 = (*pName)[2];
  v8 = (v6 << 8) + v4;
  v9 = v7;
  if ( (v7 - 65) <= 0x19u )
    v9 = v7 + 32;
  v10 = v8 + (v9 << 16);
  v11 = (*pName)[3] << 24;
  if ( ((*pName)[3] - 65) <= 0x19u )
    v11 += 0x20000000;
  v12 = (*pName)[4];
  v13 = (1540483477 * ((1540483477 * (v11 + v10)) ^ ((1540483477 * (v11 + v10)) >> 24))) ^ 0x961DF29C;
  v14 = (*pName)[5];
  if ( ((*pName)[4] - 65) <= 0x19u )
    v12 += 32;
  if ( (v14 - 65) <= 0x19u )
    v14 += 32;
  v15 = (*pName)[6];
  v16 = (v14 << 8) + v12;
  v17 = v15;
  if ( (v15 - 65) <= 0x19u )
    v17 = v15 + 32;
  v18 = v16 + (v17 << 16);
  v19 = (*pName)[7] << 24;
  if ( ((*pName)[7] - 65) <= 0x19u )
    v19 += 0x20000000;
  v20 = (*pName)[9];
  if ( ((*pName)[9] - 65) <= 0x19u )
    v20 += 32;
  v21 = (v20 << 8)
      ^ (1540483477 * v13)
      ^ (1540483477 * ((1540483477 * (v19 + v18)) ^ ((1540483477 * (v19 + v18)) >> 24)));
  v22 = (*pName)[8];
  if ( ((*pName)[8] - 65) <= 0x19u )
    v22 += 32;
  v24[0] = (1540483477 * ((1540483477 * (v22 ^ v21)) ^ ((1540483477 * (v22 ^ v21)) >> 13)))
         ^ ((1540483477 * ((1540483477 * (v22 ^ v21)) ^ ((1540483477 * (v22 ^ v21)) >> 13))) >> 15);
  return v5(this, v24, pName, nPreferredIndex);
}


// IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<7>  (line 38, @0x0000000001f88ce0, libserver.so)  // inlines: CUtlStringToken
// callers: CPhysicsGameSystem::InitializeStandardCollisionNames
IntersectionLayerIndex __fastcall IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<7>(
        IPhysIntersectionDictionary *const this,
        char (*const pName)[7],
        int nPreferredIndex)
{
  int v4; // esi
  IntersectionLayerIndex (__fastcall *v5)(IPhysIntersectionDictionary *const, unsigned int *, char *, _QWORD); // r9
  int v6; // r8d
  char v7; // cl
  int v8; // esi
  int v9; // r8d
  int v10; // esi
  int v11; // r10d
  unsigned int v12; // r8d
  int v13; // esi
  int v14; // r8d
  int v15; // r8d
  int v16; // esi
  unsigned int v18[4]; // [rsp+0h] [rbp-10h] BYREF

  v4 = (*pName)[0];
  v5 = *(this->_vptr_IPhysIntersectionDictionary + 13);
  if ( (v4 - 65) <= 0x19u )
    v4 += 32;
  v6 = (*pName)[1];
  if ( ((*pName)[1] - 65) <= 0x19u )
    v6 += 32;
  v7 = (*pName)[2];
  v8 = (v6 << 8) + v4;
  v9 = v7;
  if ( (v7 - 65) <= 0x19u )
    v9 = v7 + 32;
  v10 = (v9 << 16) + v8;
  v11 = (*pName)[3] << 24;
  if ( ((*pName)[3] - 65) <= 0x19u )
    v11 += 0x20000000;
  v12 = (1540483477 * (v11 + v10)) ^ ((1540483477 * (v11 + v10)) >> 24);
  v13 = (*pName)[5];
  v14 = (1540483477 * v12) ^ 0x4846FFA0;
  if ( ((*pName)[5] - 65) <= 0x19u )
    v13 += 32;
  v15 = (v13 << 8) ^ v14;
  v16 = (*pName)[4];
  if ( ((*pName)[4] - 65) <= 0x19u )
    v16 += 32;
  v18[0] = (1540483477 * ((1540483477 * (v16 ^ v15)) ^ ((1540483477 * (v16 ^ v15)) >> 13)))
         ^ ((1540483477 * ((1540483477 * (v16 ^ v15)) ^ ((1540483477 * (v16 ^ v15)) >> 13))) >> 15);
  return v5(this, v18, pName, nPreferredIndex);
}


// IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<14>  (line 38, @0x0000000001f88e10, libserver.so)  // inlines: CUtlStringToken
// callers: CPhysicsGameSystem::InitializeStandardCollisionNames
IntersectionLayerIndex __fastcall IPhysIntersectionDictionary::AcquirePreindexedInteractionLayer<14>(
        IPhysIntersectionDictionary *const this,
        char (*const pName)[14],
        int nPreferredIndex)
{
  int v4; // esi
  IntersectionLayerIndex (__fastcall *v5)(IPhysIntersectionDictionary *const, int *, char *, _QWORD); // r9
  int v6; // ecx
  char v7; // r8
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  int v11; // r10d
  unsigned int v12; // ecx
  int v13; // esi
  int v14; // ecx
  int v15; // r8d
  char v16; // r10
  int v17; // esi
  int v18; // r8d
  int v19; // esi
  int v20; // r11d
  unsigned int v21; // r8d
  int v22; // esi
  int v23; // r8d
  int v24; // r10d
  char v25; // cl
  int v26; // esi
  int v27; // r10d
  int v28; // r10d
  int v29; // r11d
  unsigned int v30; // esi
  int v31; // r8d
  unsigned int v32; // r8d
  int v34[4]; // [rsp+0h] [rbp-10h] BYREF

  v4 = (*pName)[0];
  v5 = *(this->_vptr_IPhysIntersectionDictionary + 13);
  v6 = (*pName)[1];
  if ( (v4 - 65) <= 0x19u )
    v4 += 32;
  if ( (v6 - 65) <= 0x19u )
    v6 += 32;
  v7 = (*pName)[2];
  v8 = (v6 << 8) + v4;
  v9 = v7;
  if ( (v7 - 65) <= 0x19u )
    v9 = v7 + 32;
  v10 = (v9 << 16) + v8;
  v11 = (*pName)[3] << 24;
  if ( ((*pName)[3] - 65) <= 0x19u )
    v11 += 0x20000000;
  v12 = (1540483477 * (v11 + v10)) ^ ((1540483477 * (v11 + v10)) >> 24);
  v13 = (*pName)[4];
  v14 = (1540483477 * v12) ^ 0x3A4C0907;
  v15 = (*pName)[5];
  if ( ((*pName)[4] - 65) <= 0x19u )
    v13 += 32;
  if ( (v15 - 65) <= 0x19u )
    v15 += 32;
  v16 = (*pName)[6];
  v17 = (v15 << 8) + v13;
  v18 = v16;
  if ( (v16 - 65) <= 0x19u )
    v18 = v16 + 32;
  v19 = (v18 << 16) + v17;
  v20 = (*pName)[7] << 24;
  if ( ((*pName)[7] - 65) <= 0x19u )
    v20 += 0x20000000;
  v21 = (1540483477 * (v20 + v19)) ^ ((1540483477 * (v20 + v19)) >> 24);
  v22 = (*pName)[8];
  v23 = (1540483477 * v14) ^ (1540483477 * v21);
  if ( ((*pName)[8] - 65) <= 0x19u )
    v22 += 32;
  v24 = (*pName)[9];
  if ( ((*pName)[9] - 65) <= 0x19u )
    v24 += 32;
  v25 = (*pName)[10];
  v26 = (v24 << 8) + v22;
  v27 = v25;
  if ( (v25 - 65) <= 0x19u )
    v27 = v25 + 32;
  v28 = v26 + (v27 << 16);
  v29 = (*pName)[11] << 24;
  if ( ((*pName)[11] - 65) <= 0x19u )
    v29 += 0x20000000;
  v30 = (1540483477 * v23) ^ (1540483477 * ((1540483477 * (v29 + v28)) ^ ((1540483477 * (v29 + v28)) >> 24)));
  v31 = (*pName)[12];
  if ( ((*pName)[12] - 65) <= 0x19u )
    v31 += 32;
  v32 = 1540483477 * ((1540483477 * (v31 ^ v30)) ^ ((1540483477 * (v31 ^ v30)) >> 13));
  v34[0] = v32 ^ (v32 >> 15);
  return v5(this, v34, pName, nPreferredIndex);
}


