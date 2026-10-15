
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CProtobufSaveRestoreOps<PlaceDecalEvent_t>::Save  (line 18, @0x0000000001f74a40, libserver.so)  // inlines: BitByte, GetNumBytesWritten
// calls: bf_write::bf_write, __stack_chk_fail
// globals: CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding
void __fastcall CProtobufSaveRestoreOps<PlaceDecalEvent_t>::Save(
        CProtobufSaveRestoreOps<PlaceDecalEvent_t> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        ISave *pSave)
{
  void *pField; // r14
  const char *v5; // rax
  void (__fastcall *v6)(ISave *, __int64, _QWORD, char *); // r14
  unsigned int v7; // ebx
  __int64 v8; // rax
  bf_write writebuf; // [rsp+0h] [rbp-450h] BYREF
  char buffer[1032]; // [rsp+20h] [rbp-430h] BYREF
  unsigned __int64 v11; // [rsp+428h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  pField = fieldInfo->pField;
  v5 = (*CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding._vptr_IProtobufBinding)(&CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding);
  bf_write::bf_write(&writebuf, v5, buffer, 1024, -1);
  (*(CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding._vptr_IProtobufBinding
   + 7))(
    &CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding,
    pField,
    &writebuf);
  v6 = *(pSave->_vptr_ISave + 37);
  v7 = (writebuf.m_iCurBit + 7) >> 3;
  v8 = (*CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding._vptr_IProtobufBinding)(&CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding);
  v6(pSave, v8, v7, buffer);
}


// CProtobufSaveRestoreOps<PlaceDecalEvent_t>::Restore  (line 33, @0x0000000001f74b10, libserver.so)
// calls: bf_read::bf_read, __stack_chk_fail
// globals: CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding
void __fastcall CProtobufSaveRestoreOps<PlaceDecalEvent_t>::Restore(
        CProtobufSaveRestoreOps<PlaceDecalEvent_t> *const this,
        const SaveRestoreFieldInfo_t *const fieldInfo,
        IRestore *pRestore)
{
  void *pField; // r13
  unsigned int size; // r14d
  void (__fastcall *v6)(IRestore *, __int64, char *, __int64, _QWORD); // r15
  __int64 v7; // rax
  const char *v8; // rax
  SaveRestoreRecordHeader_t header; // [rsp+0h] [rbp-470h] BYREF
  bf_read readbuf; // [rsp+10h] [rbp-460h] BYREF
  char buffer[1032]; // [rsp+30h] [rbp-440h] BYREF
  unsigned __int64 v12; // [rsp+438h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  pField = fieldInfo->pField;
  (*(pRestore->_vptr_IRestore + 9))(pRestore, &header);
  size = header.size;
  v6 = *(pRestore->_vptr_IRestore + 31);
  v7 = (*CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding._vptr_IProtobufBinding)(&CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding);
  v6(pRestore, v7, buffer, 1024, size);
  v8 = (*CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding._vptr_IProtobufBinding)(&CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding);
  bf_read::bf_read(&readbuf, v8, buffer, 1024, -1);
  (*(CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding._vptr_IProtobufBinding
   + 6))(
    &CNetMessagePB<201,CMsgPlaceDecalEvent,(SignonGroup_t)12,(NetChannelBufType_t)1,true>::s_ProtobufBinding,
    pField,
    &readbuf);
}


