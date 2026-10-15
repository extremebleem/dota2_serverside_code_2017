// Reconstructed from DWARF by pahole; not original source.

// src/mathlib/icekey.cpp:18
class IceSubkey {
	long unsigned int val[3];  // +0x0

	// sizeof = 24
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// gf_exp7  (line 95, @0x00000000031b5880, libserver.so)  // inlines: gf_mult
// callers: IceKey::IceKey
unsigned __int64 __fastcall gf_exp7(unsigned int b, unsigned int m)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned __int64 result; // rax

  if ( b == 0 )
    return 0;
  v2 = b;
  v3 = b;
  v4 = 0;
  do
  {
    if ( (v3 & 1) != 0 )
      v4 ^= v2;
    v2 *= 2;
    if ( v2 >= 0x100 )
      v2 ^= m;
    v3 >>= 1;
  }
  while ( v3 != 0 );
  if ( v4 == 0 )
    return 0;
  v5 = b;
  v6 = 0;
  do
  {
    if ( (v4 & 1) != 0 )
      v6 ^= v5;
    v5 *= 2;
    if ( v5 >= 0x100 )
      v5 ^= m;
    v4 >>= 1;
  }
  while ( v4 != 0 );
  if ( v6 == 0 )
    return 0;
  v7 = v6;
  do
  {
    if ( (v6 & 1) != 0 )
      v4 ^= v7;
    v7 *= 2;
    if ( v7 >= 0x100 )
      v7 ^= m;
    v6 >>= 1;
  }
  while ( v6 != 0 );
  for ( result = 0; v4 != 0; v4 >>= 1 )
  {
    if ( (v4 & 1) != 0 )
      result = b ^ result;
    b *= 2;
    if ( b >= 0x100 )
      b ^= m;
  }
  return result;
}


// IceKey::IceKey  (line 167, @0x00000000031b5960, libserver.so)  // inlines: gf_exp7, ice_perm32, ice_sboxes_init
// calls: operator new [], gf_exp7
// callers: UTIL_DecodeICE, UTIL_EncodeICE, CDOTAGCServerSystem::SerializeLastMatchMetadataToString, DecodeICE
// globals: ice_sboxes_initialised, ice_smod, ice_sxor, ice_pbox
void __fastcall IceKey::IceKey(IceKey *const this, int n)
{
  size_t v2; // rdi
  unsigned __int64 *v3; // r15
  int i; // r14d
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rbx
  bool v9; // zf
  unsigned int v10; // edi
  unsigned int v11; // edx
  unsigned __int64 v12; // r9
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  const unsigned __int64 *v16; // rsi
  unsigned __int64 v17; // rax
  const unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  const unsigned __int64 *v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  const unsigned __int64 *v24; // rsi
  unsigned int v27; // [rsp+1Ch] [rbp-34h]
  unsigned int v28; // [rsp+1Ch] [rbp-34h]

  if ( ice_sboxes_initialised == 0 )
  {
    v3 = ice_sbox[3];
    for ( i = 0; i != 1024; ++i )
    {
      v11 = (i >> 1);
      v12 = 0;
      v13 = i & 1 | ((i & 0x200) >> 8);
      if ( ice_sxor[0][v13] != v11 )
      {
        v14 = gf_exp7(ice_sxor[0][v13] ^ (i >> 1), ice_smod[0][v13]);
        v11 = (i >> 1);
        v15 = v14 << 24;
        v12 = 0;
        if ( v15 != 0 )
        {
          v16 = ice_pbox;
          do
          {
            if ( (v15 & 1) != 0 )
              v12 |= *v16;
            ++v16;
            v15 >>= 1;
          }
          while ( v15 != 0 );
        }
      }
      *(v3 - 3072) = v12;
      v5 = 0;
      if ( ice_sxor[1][v13] != v11 )
      {
        v28 = v11;
        v22 = gf_exp7(ice_sxor[1][v13] ^ v11, ice_smod[1][v13]);
        v11 = v28;
        v23 = v22 << 16;
        v5 = 0;
        if ( v23 != 0 )
        {
          v24 = ice_pbox;
          do
          {
            if ( (v23 & 1) != 0 )
              v5 |= *v24;
            ++v24;
            v23 >>= 1;
          }
          while ( v23 != 0 );
        }
      }
      *(v3 - 2048) = v5;
      v6 = 0;
      if ( ice_sxor[2][v13] != v11 )
      {
        v27 = v11;
        v19 = gf_exp7(ice_sxor[2][v13] ^ v11, ice_smod[2][v13]);
        v11 = v27;
        v20 = v19 << 8;
        v6 = 0;
        if ( v20 != 0 )
        {
          v21 = ice_pbox;
          do
          {
            if ( (v20 & 1) != 0 )
              v6 |= *v21;
            ++v21;
            v20 >>= 1;
          }
          while ( v20 != 0 );
        }
      }
      v7 = v13 + 12;
      v8 = 0;
      v9 = ice_sxor[0][v7] == v11;
      v10 = ice_sxor[0][v7] ^ v11;
      *(v3 - 1024) = v6;
      if ( !v9 )
      {
        v17 = gf_exp7(v10, ice_smod[0][v7]);
        if ( v17 != 0 )
        {
          v18 = ice_pbox;
          do
          {
            if ( (v17 & 1) != 0 )
              v8 |= *v18;
            ++v18;
            v17 >>= 1;
          }
          while ( v17 != 0 );
        }
      }
      *v3++ = v8;
    }
    ice_sboxes_initialised = 1;
    if ( n > 0 )
      goto LABEL_3;
LABEL_37:
    v2 = 192;
    this->_size = 1;
    this->_rounds = 8;
    goto LABEL_5;
  }
  if ( n <= 0 )
    goto LABEL_37;
LABEL_3:
  v2 = -1;
  this->_size = n;
  this->_rounds = 16 * n;
  if ( (16 * n) <= 0x550000000000000LL )
    v2 = 384LL * n;
LABEL_5:
  this->_keysched = operator new[](v2);
}


// IceKey::~IceKey  (line 190, @0x00000000031b5bd0, libserver.so)
// calls: operator delete []
// callers: UTIL_DecodeICE, UTIL_EncodeICE, CDOTAGCServerSystem::SerializeLastMatchMetadataToString, DecodeICE
void __fastcall IceKey::~IceKey(IceKey *const this)
{
  __int64 v1; // rax
  int i; // edx
  IceSubkey *keysched; // rdi

  v1 = 0;
  for ( i = 0; this->_rounds > i; ++v1 )
  {
    ++i;
    this->_keysched[v1].val[0] = 0;
    this->_keysched[v1].val[1] = 0;
    this->_keysched[v1].val[2] = 0;
  }
  this->_size = 0;
  this->_rounds = 0;
  keysched = this->_keysched;
  if ( keysched != 0 )
    operator delete[](keysched);
}


// ice_f  (line 209, @0x00000000031b57e0, libserver.so)
// callers: IceKey::encrypt, IceKey::decrypt
// globals: ice_sbox
unsigned __int64 __fastcall ice_f(unsigned __int64 p, const IceSubkey *sk)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax

  v2 = p & 0x3FF | (4 * p) & 0xFFC00;
  v3 = sk->val[2] & (v2 ^ ((p >> 16) & 0x3FF | ((p >> 14) | (p << 18)) & 0xFFC00));
  v4 = v3 ^ sk->val[0] ^ ((p >> 16) & 0x3FF | ((p >> 14) | (p << 18)) & 0xFFC00);
  return ice_sbox[3][(v3 ^ LODWORD(sk->val[1]) ^ v2) & 0x3FF]
       | ice_sbox[2][(v3 ^ sk->val[1] ^ v2) >> 10]
       | ice_sbox[0][v4 >> 10]
       | ice_sbox[1][v4 & 0x3FF];
}


// IceKey::encrypt  (line 243, @0x00000000031b5c40, libserver.so)
// calls: ice_f
// callers: UTIL_EncodeICE, CDOTAGCServerSystem::SerializeLastMatchMetadataToString
void __fastcall IceKey::encrypt(const IceKey *const this, const unsigned __int8 *ptext, unsigned __int8 *ctext)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  int rounds; // eax
  IceSubkey *keysched; // r15
  IceSubkey *v7; // r13
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  const IceSubkey *v10; // rsi
  __int64 i; // rax

  v3 = (ptext[2] << 8) | ptext[3] | (ptext[1] << 16) | (*ptext << 24);
  v4 = (ptext[6] << 8) | ptext[7] | (ptext[5] << 16) | (ptext[4] << 24);
  rounds = this->_rounds;
  if ( rounds > 0 )
  {
    keysched = this->_keysched;
    v7 = keysched + 2;
    v8 = &keysched[2 * ((rounds - 1) >> 1) + 2];
    while ( 1 )
    {
      v9 = ice_f(v4, keysched);
      v10 = keysched + 1;
      keysched = v7;
      v3 ^= v9;
      v4 ^= ice_f(v3, v10);
      if ( v7 == v8 )
        break;
      v7 += 2;
    }
  }
  for ( i = 0; i != -4; --i )
  {
    ctext[i + 3] = v4;
    v4 >>= 8;
    ctext[i + 7] = v3;
    v3 >>= 8;
  }
}


// IceKey::decrypt  (line 278, @0x00000000031b5d20, libserver.so)
// calls: ice_f
// callers: UTIL_DecodeICE, DecodeICE
void __fastcall IceKey::decrypt(const IceKey *const this, const unsigned __int8 *ctext, unsigned __int8 *ptext)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r12
  int v6; // r14d
  const IceSubkey *v7; // r13
  unsigned __int64 v8; // rax
  const IceSubkey *v9; // rsi
  __int64 i; // rax

  v4 = (ctext[2] << 8) | ctext[3] | (ctext[1] << 16) | (*ctext << 24);
  v5 = (ctext[6] << 8) | ctext[7] | (ctext[5] << 16) | (ctext[4] << 24);
  v6 = this->_rounds - 1;
  if ( v6 > 0 )
  {
    v7 = &this->_keysched[v6];
    do
    {
      v6 -= 2;
      v8 = ice_f(v5, v7);
      v9 = v7 - 1;
      v7 -= 2;
      v4 ^= v8;
      v5 ^= ice_f(v4, v9);
    }
    while ( v6 > 0 );
  }
  for ( i = 0; i != -4; --i )
  {
    ptext[i + 3] = v5;
    v5 >>= 8;
    ptext[i + 7] = v4;
    v4 >>= 8;
  }
}


// IceKey::scheduleBuild  (line 313, @0x00000000031b5df0, libserver.so)
// callers: IceKey::set
void __fastcall IceKey::scheduleBuild(IceKey *const this, unsigned __int16 *kb, int n, const int *keyrot)
{
  __int64 v4; // r14
  __int64 i; // r13
  unsigned __int64 v7; // r9
  IceSubkey *v8; // r11
  int v9; // r8d
  int v10; // r10d
  int v11; // ecx
  __int64 *j; // rax
  char v13; // dl
  unsigned __int16 *v14; // rdi
  __int16 v15; // dx

  v4 = n;
  for ( i = 0; i != 8; ++i )
  {
    v7 = 0;
    v8 = &this->_keysched[v4];
    v9 = 0;
    v10 = keyrot[i];
    v8->val[0] = 0;
    v8->val[1] = 0;
    v8->val[2] = 0;
    while ( 1 )
    {
      v11 = 0;
      for ( j = &v8->val[v9 % 3]; ; v7 = *j )
      {
        v13 = v11++ + v10;
        v14 = &kb[v13 & 3];
        v15 = !(*v14 & 1);
        *j = (2 * v7) | *v14 & 1;
        *v14 = (*v14 >> 1) | (v15 << 15);
        if ( v11 == 4 )
          break;
      }
      if ( ++v9 == 15 )
        break;
      v7 = v8->val[v9 % 3];
    }
    ++v4;
  }
}


// IceKey::set  (line 349, @0x00000000031b5f00, libserver.so)
// calls: IceKey::scheduleBuild
// callers: UTIL_DecodeICE, UTIL_EncodeICE, CDOTAGCServerSystem::SerializeLastMatchMetadataToString, DecodeICE
// globals: ice_keyrot
void __fastcall IceKey::set(IceKey *const this, const unsigned __int8 *key)
{
  const unsigned __int8 *v3; // rbx
  int v4; // r13d
  unsigned __int16 *v5; // rdx
  const unsigned __int8 *v6; // rax
  __int16 v7; // si
  int v8; // edx
  int v9; // edx
  unsigned __int64 i; // rax
  unsigned __int16 *v11; // rsi
  __int16 v12; // cx
  __int16 v13; // dx
  const unsigned __int8 *keya; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int16 kb[32]; // [rsp+8h] [rbp-40h] BYREF

  keya = key;
  if ( this->_rounds == 8 )
  {
    for ( i = 0; i != 8; i += 2LL )
    {
      v11 = &kb[i / 0xFFFFFFFFFFFFFFFELL + 3];
      v12 = keya[i];
      v13 = keya[i + 1];
      *v11 = (v12 << 8) | v13;
    }
    IceKey::scheduleBuild(this, kb, 0, ice_keyrot);
  }
  else if ( this->_size > 0 )
  {
    v3 = keya;
    v4 = 0;
    do
    {
      v5 = &kb[3];
      v6 = v3;
      do
      {
        v7 = *v6;
        --v5;
        v6 += 2;
        v5[1] = (v7 << 8) | *(v6 - 1);
      }
      while ( v5 != (&keya + 6) );
      v8 = 8 * v4++;
      IceKey::scheduleBuild(this, kb, v8, ice_keyrot);
      v9 = keya - v3;
      v3 += 8;
      IceKey::scheduleBuild(this, kb, v9 + this->_rounds - 8, &ice_keyrot[8]);
    }
    while ( this->_size > v4 );
  }
}


// IceKey::keySize  (line 382, @0x00000000031b6010, libserver.so)
int __fastcall IceKey::keySize(const IceKey *const this)
{
  return 8 * this->_size;
}


// IceKey::blockSize  (line 393, @0x00000000031b6020, libserver.so)
// callers: UTIL_DecodeICE
int __fastcall IceKey::blockSize(const IceKey *const this)
{
  return 8;
}


// DecodeICE  (line 400, @0x00000000031b6030, libserver.so)  // inlines: V_memcpy, memcpy
// calls: IceKey::IceKey, IceKey::set, IceKey::decrypt, memcpy, IceKey::~IceKey, __stack_chk_fail
void __fastcall DecodeICE(unsigned __int8 *pBuffer, int nSize, const unsigned __int8 *pKey)
{
  int v5; // eax
  void *v6; // rsp
  unsigned __int8 *v7; // r13
  unsigned __int8 *v8; // r15
  signed __int64 v9; // r12
  signed int v10; // r14d
  size_t v11; // rdx
  unsigned __int8 *p1; // [rsp+10h] [rbp-60h] BYREF
  unsigned __int8 *p2; // [rsp+18h] [rbp-58h]
  IceKey ice; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-38h]

  p1 = pBuffer;
  v15 = __readfsqword(0x28u);
  if ( pKey != 0 )
  {
    IceKey::IceKey(&ice, 0);
    IceKey::set(&ice, pKey);
    v5 = nSize + 7;
    if ( nSize + 7 < 0 )
      v5 = nSize + 14;
    v6 = alloca((((v5 & 0xFFFFFFF8) + 31) & 0xFFFFFFF0) + 16LL);
    p2 = (&p1 & 0xFFFFFFFFFFFFFFEFLL);
    if ( nSize <= 7 )
    {
      v11 = 0;
    }
    else
    {
      v7 = &p2[8 * ((nSize - 8) >> 3) + 8];
      v8 = p2;
      v9 = p1 - p2;
      do
      {
        IceKey::decrypt(&ice, &v8[v9], v8);
        v8 += 8;
      }
      while ( v8 != v7 );
      v10 = 8 * ((nSize - 8) >> 3) + 8;
      if ( v10 < 0 )
        __debugbreak();
      v11 = v10;
    }
    memcpy(p1, p2, v11);
    IceKey::~IceKey(&ice);
  }
}


