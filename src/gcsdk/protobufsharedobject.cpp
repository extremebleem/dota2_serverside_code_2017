
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_protobufsharedobject.cpp  (line 0, @0x0000000001a6e610, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_protobufsharedobject_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// GCSDK::CopyProtoBufField  (line 37, @0x0000000003237260, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, cpp_type, is_repeated, ~basic_string
// calls: std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: GCSDK::CProtoBufSharedObjectBase::BuildDestroyToMessage
// globals: jpt_32372D0, jpt_3237314
void __fastcall GCSDK::CopyProtoBufField(
        google::protobuf::Message *const msgDest,
        const google::protobuf::Message *const msgSource,
        const google::protobuf::FieldDescriptor *pFieldDest,
        const google::protobuf::FieldDescriptor *pFieldSource)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, __int64); // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // r15d
  __int64 v33; // rax
  void (__fastcall *v34)(__int64, __int64); // r14
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // cc
  __int64 v40; // rax
  unsigned int v41; // r15d
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r15d
  void (__fastcall *v47)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, __int64); // r14
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  void (__fastcall *v51)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD, __int64); // r14
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // r15d
  void (__fastcall *v55)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, __int64); // r14
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  void (__fastcall *v59)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD, __int64); // r14
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned int v62; // r15d
  void (__fastcall *v63)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD); // r14
  __int64 v64; // rax
  unsigned int v65; // eax
  __int64 v66; // rax
  void (__fastcall *v67)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD, _QWORD); // r14
  __int64 v68; // rax
  unsigned int v69; // eax
  unsigned int v70; // r15d
  void (__fastcall *v71)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, __int64); // r14
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  void (__fastcall *v75)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD, __int64); // r14
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned int v78; // r15d
  void (__fastcall *v79)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD); // r14
  __int64 v80; // rax
  unsigned int v81; // eax
  __int64 v82; // rax
  void (__fastcall *v83)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD, _QWORD); // r14
  __int64 v84; // rax
  unsigned int v85; // eax
  unsigned int v86; // r15d
  void (__fastcall *v87)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *); // r14
  __int64 v88; // rax
  __int64 v89; // rax
  void (__fastcall *v90)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD); // r14
  __int64 v91; // rax
  unsigned int v92; // r15d
  void (__fastcall *v93)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *); // r14
  __int64 v94; // rax
  __int64 v95; // rax
  void (__fastcall *v96)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD); // r14
  __int64 v97; // rax
  unsigned int v98; // r15d
  void (__fastcall *v99)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD); // r14
  __int64 v100; // rax
  unsigned __int8 v101; // al
  __int64 v102; // rax
  void (__fastcall *v103)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD, _QWORD); // r14
  __int64 v104; // rax
  unsigned __int8 v105; // al
  int v106; // edx
  int v107; // eax
  int v108; // edx
  __int64 v109; // [rsp+10h] [rbp-70h]
  __int64 v110; // [rsp+18h] [rbp-68h]
  void (__fastcall *v111)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD *); // [rsp+18h] [rbp-68h]
  void (__fastcall *v112)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, _QWORD, _QWORD *); // [rsp+18h] [rbp-68h]
  __int64 v113; // [rsp+18h] [rbp-68h]
  __int64 v114; // [rsp+18h] [rbp-68h]
  __int64 v115; // [rsp+18h] [rbp-68h]
  __int64 v116; // [rsp+18h] [rbp-68h]
  __int64 v117; // [rsp+18h] [rbp-68h]
  __int64 v118; // [rsp+18h] [rbp-68h]
  __int64 v119; // [rsp+18h] [rbp-68h]
  __int64 v120; // [rsp+18h] [rbp-68h]
  const google::protobuf::FieldDescriptor *pFieldSourcej; // [rsp+20h] [rbp-60h]
  const google::protobuf::FieldDescriptor *pFieldSourcea; // [rsp+20h] [rbp-60h]
  const google::protobuf::FieldDescriptor *pFieldSourceb; // [rsp+20h] [rbp-60h]
  const google::protobuf::FieldDescriptor *pFieldSourcec; // [rsp+20h] [rbp-60h]
  const google::protobuf::FieldDescriptor *pFieldSourced; // [rsp+20h] [rbp-60h]
  const google::protobuf::FieldDescriptor *pFieldSourcee; // [rsp+20h] [rbp-60h]
  const google::protobuf::FieldDescriptor *pFieldSourcef; // [rsp+20h] [rbp-60h]
  const google::protobuf::FieldDescriptor *pFieldSourceg; // [rsp+20h] [rbp-60h]
  const google::protobuf::FieldDescriptor *pFieldSourceh; // [rsp+20h] [rbp-60h]
  const google::protobuf::FieldDescriptor *pFieldSourcei; // [rsp+20h] [rbp-60h]
  int nFieldSize; // [rsp+28h] [rbp-58h]
  void (__fastcall *nFieldSizea)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, __int64); // [rsp+28h] [rbp-58h]
  void (__fastcall *nFieldSizeb)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *, __int64); // [rsp+28h] [rbp-58h]
  void (__fastcall *nFieldSizec)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *); // [rsp+28h] [rbp-58h]
  void (__fastcall *nFieldSized)(__int64, google::protobuf::Message *const, const google::protobuf::FieldDescriptor *); // [rsp+28h] [rbp-58h]
  char v136; // [rsp+3Fh] [rbp-41h] BYREF
  _QWORD v137[8]; // [rsp+40h] [rbp-40h] BYREF

  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[pFieldSource->type_] == google::protobuf::FieldDescriptor::kTypeToCppTypeMap[pFieldDest->type_]
    && (pFieldSource->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED) == (pFieldDest->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED) )
  {
    if ( pFieldSource->label_ == google::protobuf::FieldDescriptor::Label::LABEL_REPEATED )
    {
      v8 = (*(*msgSource + 144LL))(msgSource);
      nFieldSize = (*(*v8 + 48LL))(v8, msgSource, pFieldSource);
      switch ( pFieldDest->type_ )
      {
        case google::protobuf::FieldDescriptor::Type::TYPE_DOUBLE:
          v92 = 0;
          if ( nFieldSize > 0 )
          {
            pFieldSourceh = pFieldSource;
            do
            {
              v95 = (*(*msgDest + 144LL))(msgDest);
              v39 = (*(*v95 + 48LL))(v95, msgDest, pFieldDest) <= v92;
              v119 = (*(*msgDest + 144LL))(msgDest);
              if ( v39 )
              {
                v93 = *(*v119 + 528LL);
                v94 = (*(*msgSource + 144LL))(msgSource);
                (*(*v94 + 360LL))(v94, msgSource, pFieldSourceh, v92);
                v93(v119, msgDest, pFieldDest);
              }
              else
              {
                v96 = *(*v119 + 448LL);
                v97 = (*(*msgSource + 144LL))(msgSource);
                (*(*v97 + 360LL))(v97, msgSource, pFieldSourceh, v92);
                v96(v119, msgDest, pFieldDest, v92);
              }
              ++v92;
            }
            while ( v92 != nFieldSize );
          }
          break;
        case google::protobuf::FieldDescriptor::Type::TYPE_FLOAT:
          v86 = 0;
          if ( nFieldSize > 0 )
          {
            pFieldSourceg = pFieldSource;
            do
            {
              v89 = (*(*msgDest + 144LL))(msgDest);
              v39 = (*(*v89 + 48LL))(v89, msgDest, pFieldDest) <= v86;
              v118 = (*(*msgDest + 144LL))(msgDest);
              if ( v39 )
              {
                v87 = *(*v118 + 520LL);
                v88 = (*(*msgSource + 144LL))(msgSource);
                (*(*v88 + 352LL))(v88, msgSource, pFieldSourceg, v86);
                v87(v118, msgDest, pFieldDest);
              }
              else
              {
                v90 = *(*v118 + 440LL);
                v91 = (*(*msgSource + 144LL))(msgSource);
                (*(*v91 + 352LL))(v91, msgSource, pFieldSourceg, v86);
                v90(v118, msgDest, pFieldDest, v86);
              }
              ++v86;
            }
            while ( v86 != nFieldSize );
          }
          break;
        case google::protobuf::FieldDescriptor::Type::TYPE_INT64:
        case google::protobuf::FieldDescriptor::Type::TYPE_SFIXED64:
        case google::protobuf::FieldDescriptor::Type::TYPE_SINT64:
          v70 = 0;
          if ( nFieldSize > 0 )
          {
            pFieldSourcee = pFieldSource;
            do
            {
              v74 = (*(*msgDest + 144LL))(msgDest);
              v39 = (*(*v74 + 48LL))(v74, msgDest, pFieldDest) <= v70;
              v116 = (*(*msgDest + 144LL))(msgDest);
              if ( v39 )
              {
                v71 = *(*v116 + 496LL);
                v72 = (*(*msgSource + 144LL))(msgSource);
                v73 = (*(*v72 + 328LL))(v72, msgSource, pFieldSourcee, v70);
                v71(v116, msgDest, pFieldDest, v73);
              }
              else
              {
                v75 = *(*v116 + 416LL);
                v76 = (*(*msgSource + 144LL))(msgSource);
                v77 = (*(*v76 + 328LL))(v76, msgSource, pFieldSourcee, v70);
                v75(v116, msgDest, pFieldDest, v70, v77);
              }
              ++v70;
            }
            while ( v70 != nFieldSize );
          }
          break;
        case google::protobuf::FieldDescriptor::Type::TYPE_UINT64:
        case google::protobuf::FieldDescriptor::Type::TYPE_FIXED64:
          v54 = 0;
          if ( nFieldSize > 0 )
          {
            pFieldSourcec = pFieldSource;
            do
            {
              v58 = (*(*msgDest + 144LL))(msgDest);
              v39 = (*(*v58 + 48LL))(v58, msgDest, pFieldDest) <= v54;
              v114 = (*(*msgDest + 144LL))(msgDest);
              if ( v39 )
              {
                v55 = *(*v114 + 512LL);
                v56 = (*(*msgSource + 144LL))(msgSource);
                v57 = (*(*v56 + 344LL))(v56, msgSource, pFieldSourcec, v54);
                v55(v114, msgDest, pFieldDest, v57);
              }
              else
              {
                v59 = *(*v114 + 432LL);
                v60 = (*(*msgSource + 144LL))(msgSource);
                v61 = (*(*v60 + 344LL))(v60, msgSource, pFieldSourcec, v54);
                v59(v114, msgDest, pFieldDest, v54, v61);
              }
              ++v54;
            }
            while ( v54 != nFieldSize );
          }
          break;
        case google::protobuf::FieldDescriptor::Type::TYPE_INT32:
        case google::protobuf::FieldDescriptor::Type::TYPE_SFIXED32:
        case google::protobuf::FieldDescriptor::Type::TYPE_SINT32:
          if ( nFieldSize > 0 )
          {
            v78 = 0;
            pFieldSourcef = pFieldSource;
            do
            {
              v82 = (*(*msgDest + 144LL))(msgDest);
              v39 = (*(*v82 + 48LL))(v82, msgDest, pFieldDest) <= v78;
              v117 = (*(*msgDest + 144LL))(msgDest);
              if ( v39 )
              {
                v79 = *(*v117 + 488LL);
                v80 = (*(*msgSource + 144LL))(msgSource);
                v81 = (*(*v80 + 320LL))(v80, msgSource, pFieldSourcef, v78);
                v79(v117, msgDest, pFieldDest, v81);
              }
              else
              {
                v83 = *(*v117 + 408LL);
                v84 = (*(*msgSource + 144LL))(msgSource);
                v85 = (*(*v84 + 320LL))(v84, msgSource, pFieldSourcef, v78);
                v83(v117, msgDest, pFieldDest, v78, v85);
              }
              ++v78;
            }
            while ( v78 != nFieldSize );
          }
          break;
        case google::protobuf::FieldDescriptor::Type::TYPE_FIXED32:
        case google::protobuf::FieldDescriptor::Type::TYPE_UINT32:
          v62 = 0;
          if ( nFieldSize > 0 )
          {
            pFieldSourced = pFieldSource;
            do
            {
              v66 = (*(*msgDest + 144LL))(msgDest);
              v39 = (*(*v66 + 48LL))(v66, msgDest, pFieldDest) <= v62;
              v115 = (*(*msgDest + 144LL))(msgDest);
              if ( v39 )
              {
                v63 = *(*v115 + 504LL);
                v64 = (*(*msgSource + 144LL))(msgSource);
                v65 = (*(*v64 + 336LL))(v64, msgSource, pFieldSourced, v62);
                v63(v115, msgDest, pFieldDest, v65);
              }
              else
              {
                v67 = *(*v115 + 424LL);
                v68 = (*(*msgSource + 144LL))(msgSource);
                v69 = (*(*v68 + 336LL))(v68, msgSource, pFieldSourced, v62);
                v67(v115, msgDest, pFieldDest, v62, v69);
              }
              ++v62;
            }
            while ( v62 != nFieldSize );
          }
          break;
        case google::protobuf::FieldDescriptor::Type::TYPE_BOOL:
          v98 = 0;
          if ( nFieldSize > 0 )
          {
            pFieldSourcei = pFieldSource;
            do
            {
              v102 = (*(*msgDest + 144LL))(msgDest);
              v39 = (*(*v102 + 48LL))(v102, msgDest, pFieldDest) <= v98;
              v120 = (*(*msgDest + 144LL))(msgDest);
              if ( v39 )
              {
                v99 = *(*v120 + 536LL);
                v100 = (*(*msgSource + 144LL))(msgSource);
                v101 = (*(*v100 + 368LL))(v100, msgSource, pFieldSourcei, v98);
                v99(v120, msgDest, pFieldDest, v101);
              }
              else
              {
                v103 = *(*v120 + 456LL);
                v104 = (*(*msgSource + 144LL))(msgSource);
                v105 = (*(*v104 + 368LL))(v104, msgSource, pFieldSourcei, v98);
                v103(v120, msgDest, pFieldDest, v98, v105);
              }
              ++v98;
            }
            while ( v98 != nFieldSize );
          }
          break;
        case google::protobuf::FieldDescriptor::Type::TYPE_STRING:
        case google::protobuf::FieldDescriptor::Type::TYPE_BYTES:
          v41 = 0;
          if ( nFieldSize > 0 )
          {
            do
            {
              v44 = (*(*msgDest + 144LL))(msgDest);
              v39 = (*(*v44 + 48LL))(v44, msgDest, pFieldDest) <= v41;
              v109 = (*(*msgDest + 144LL))(msgDest);
              if ( v39 )
              {
                v111 = *(*v109 + 544LL);
                v42 = (*(*msgSource + 144LL))(msgSource);
                (*(*v42 + 376LL))(v137, v42, msgSource, pFieldSource, v41);
                v111(v109, msgDest, pFieldDest, v137);
              }
              else
              {
                v112 = *(*v109 + 464LL);
                v45 = (*(*msgSource + 144LL))(msgSource);
                (*(*v45 + 376LL))(v137, v45, msgSource, pFieldSource, v41);
                v112(v109, msgDest, pFieldDest, v41, v137);
              }
              v43 = v137[0] - 24LL;
              if ( (v137[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
              {
                if ( &_pthread_key_create != 0 )
                {
                  v107 = _InterlockedExchangeAdd((v43 + 16), 0xFFFFFFFF);
                }
                else
                {
                  v108 = *(v137[0] - 8LL);
                  *(v137[0] - 8LL) = v108 - 1;
                  v107 = v108;
                }
                if ( v107 <= 0 )
                  std::string::_Rep::_M_destroy(v43, &v136);
              }
              ++v41;
            }
            while ( v41 != nFieldSize );
          }
          break;
        case google::protobuf::FieldDescriptor::Type::TYPE_GROUP:
        case google::protobuf::FieldDescriptor::Type::TYPE_MESSAGE:
          v32 = 0;
          if ( nFieldSize > 0 )
          {
            pFieldSourcea = pFieldSource;
            do
            {
              v38 = (*(*msgDest + 144LL))(msgDest);
              v39 = (*(*v38 + 48LL))(v38, msgDest, pFieldDest) <= v32;
              v40 = (*(*msgDest + 144LL))(msgDest);
              if ( v39 )
                v33 = (*(*v40 + 560LL))(v40, msgDest, pFieldDest, 0);
              else
                v33 = (*(*v40 + 480LL))(v40, msgDest, pFieldDest, v32);
              v110 = v33;
              v34 = *(*v33 + 104LL);
              v35 = (*(*msgSource + 144LL))(msgSource);
              v36 = v32++;
              v37 = (*(*v35 + 392LL))(v35, msgSource, pFieldSourcea, v36);
              v34(v110, v37);
            }
            while ( v32 != nFieldSize );
          }
          break;
        case google::protobuf::FieldDescriptor::Type::TYPE_ENUM:
          v46 = 0;
          if ( nFieldSize > 0 )
          {
            pFieldSourceb = pFieldSource;
            do
            {
              v50 = (*(*msgDest + 144LL))(msgDest);
              v39 = (*(*v50 + 48LL))(v50, msgDest, pFieldDest) <= v46;
              v113 = (*(*msgDest + 144LL))(msgDest);
              if ( v39 )
              {
                v47 = *(*v113 + 552LL);
                v48 = (*(*msgSource + 144LL))(msgSource);
                v49 = (*(*v48 + 384LL))(v48, msgSource, pFieldSourceb, v46);
                v47(v113, msgDest, pFieldDest, v49);
              }
              else
              {
                v51 = *(*v113 + 472LL);
                v52 = (*(*msgSource + 144LL))(msgSource);
                v53 = (*(*v52 + 384LL))(v52, msgSource, pFieldSourceb, v46);
                v51(v113, msgDest, pFieldDest, v46, v53);
              }
              ++v46;
            }
            while ( v46 != nFieldSize );
          }
          break;
        default:
          return;
      }
    }
    else
    {
      switch ( pFieldSource->type_ )
      {
        case google::protobuf::FieldDescriptor::Type::TYPE_DOUBLE:
          v26 = (*(*msgDest + 144LL))(msgDest);
          nFieldSized = *(*v26 + 264LL);
          v27 = (*(*msgSource + 144LL))(msgSource);
          (*(*v27 + 176LL))(v27, msgSource, pFieldSource);
          nFieldSized(v26, msgDest, pFieldDest);
          return;
        case google::protobuf::FieldDescriptor::Type::TYPE_FLOAT:
          v24 = (*(*msgDest + 144LL))(msgDest);
          nFieldSizec = *(*v24 + 256LL);
          v25 = (*(*msgSource + 144LL))(msgSource);
          (*(*v25 + 168LL))(v25, msgSource, pFieldSource);
          nFieldSizec(v24, msgDest, pFieldDest);
          return;
        case google::protobuf::FieldDescriptor::Type::TYPE_INT64:
        case google::protobuf::FieldDescriptor::Type::TYPE_SFIXED64:
        case google::protobuf::FieldDescriptor::Type::TYPE_SINT64:
          v18 = (*(*msgDest + 144LL))(msgDest);
          nFieldSizea = *(*v18 + 232LL);
          v30 = (*(*msgSource + 144LL))(msgSource);
          v20 = (*(*v30 + 144LL))(v30, msgSource, pFieldSource);
          goto LABEL_14;
        case google::protobuf::FieldDescriptor::Type::TYPE_UINT64:
        case google::protobuf::FieldDescriptor::Type::TYPE_FIXED64:
          v18 = (*(*msgDest + 144LL))(msgDest);
          nFieldSizea = *(*v18 + 248LL);
          v28 = (*(*msgSource + 144LL))(msgSource);
          v20 = (*(*v28 + 160LL))(v28, msgSource, pFieldSource);
          goto LABEL_14;
        case google::protobuf::FieldDescriptor::Type::TYPE_INT32:
        case google::protobuf::FieldDescriptor::Type::TYPE_SFIXED32:
        case google::protobuf::FieldDescriptor::Type::TYPE_SINT32:
          v21 = (*(*msgDest + 144LL))(msgDest);
          nFieldSizeb = *(*v21 + 224LL);
          v31 = (*(*msgSource + 144LL))(msgSource);
          v23 = (*(*v31 + 136LL))(v31, msgSource, pFieldSource);
          goto LABEL_16;
        case google::protobuf::FieldDescriptor::Type::TYPE_FIXED32:
        case google::protobuf::FieldDescriptor::Type::TYPE_UINT32:
          v21 = (*(*msgDest + 144LL))(msgDest);
          nFieldSizeb = *(*v21 + 240LL);
          v29 = (*(*msgSource + 144LL))(msgSource);
          v23 = (*(*v29 + 152LL))(v29, msgSource, pFieldSource);
          goto LABEL_16;
        case google::protobuf::FieldDescriptor::Type::TYPE_BOOL:
          v21 = (*(*msgDest + 144LL))(msgDest);
          nFieldSizeb = *(*v21 + 272LL);
          v22 = (*(*msgSource + 144LL))(msgSource);
          v23 = (*(*v22 + 184LL))(v22, msgSource, pFieldSource);
LABEL_16:
          nFieldSizeb(v21, msgDest, pFieldDest, v23);
          break;
        case google::protobuf::FieldDescriptor::Type::TYPE_STRING:
        case google::protobuf::FieldDescriptor::Type::TYPE_BYTES:
          v14 = (*(*msgDest + 144LL))(msgDest);
          pFieldSourcej = *(*v14 + 280LL);
          v15 = (*(*msgSource + 144LL))(msgSource);
          (*(*v15 + 192LL))(v137, v15, msgSource, pFieldSource);
          (pFieldSourcej)(v14, msgDest, pFieldDest, v137);
          v16 = v137[0] - 24LL;
          if ( (v137[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create != 0 )
            {
              v17 = _InterlockedExchangeAdd((v16 + 16), 0xFFFFFFFF);
            }
            else
            {
              v106 = *(v137[0] - 8LL);
              *(v137[0] - 8LL) = v106 - 1;
              v17 = v106;
            }
            if ( v17 <= 0 )
              std::string::_Rep::_M_destroy(v16, &v136);
          }
          break;
        case google::protobuf::FieldDescriptor::Type::TYPE_GROUP:
        case google::protobuf::FieldDescriptor::Type::TYPE_MESSAGE:
          v9 = (*(*msgDest + 144LL))(msgDest);
          v10 = (*(*v9 + 296LL))(v9, msgDest, pFieldDest, 0);
          v11 = *(*v10 + 104LL);
          v12 = (*(*msgSource + 144LL))(msgSource);
          v13 = (*(*v12 + 208LL))(v12, msgSource, pFieldSource, 0);
          v11(v10, v13);
          break;
        case google::protobuf::FieldDescriptor::Type::TYPE_ENUM:
          v18 = (*(*msgDest + 144LL))(msgDest);
          nFieldSizea = *(*v18 + 288LL);
          v19 = (*(*msgSource + 144LL))(msgSource);
          v20 = (*(*v19 + 200LL))(v19, msgSource, pFieldSource);
LABEL_14:
          nFieldSizea(v18, msgDest, pFieldDest, v20);
          break;
        default:
          return;
      }
    }
  }
}


// GCSDK::IsProtoBufFieldLess  (line 282, @0x00000000032380b0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, c_str, cpp_type, ~basic_string
// calls: V_stricmp_fast, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: GCSDK::CProtoBufSharedObjectBase::BIsKeyLess
// globals: jpt_323810E
bool __fastcall GCSDK::IsProtoBufFieldLess(
        const google::protobuf::Message *const msgLHS,
        const google::protobuf::Message *const msgRHS,
        const google::protobuf::FieldDescriptor *pFieldLHS,
        const google::protobuf::FieldDescriptor *pFieldRHS)
{
  int v5; // r9d
  bool result; // al
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int8 v32; // bl
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // ebx
  __int64 v36; // rax
  int v37; // ecx
  int v38; // edx
  int v39; // ecx
  bool pFieldRHSb; // [rsp+8h] [rbp-58h]
  double pFieldRHSg; // [rsp+8h] [rbp-58h]
  float pFieldRHSh; // [rsp+8h] [rbp-58h]
  bool pFieldRHSk; // [rsp+8h] [rbp-58h]
  char v53; // [rsp+1Fh] [rbp-41h] BYREF
  _QWORD v54[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v55[6]; // [rsp+30h] [rbp-30h] BYREF

  v5 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[pFieldLHS->type_];
  result = 0;
  if ( v5 == google::protobuf::FieldDescriptor::kTypeToCppTypeMap[pFieldRHS->type_] )
  {
    switch ( v5 )
    {
      case 1:
        v15 = (*(*msgLHS + 144LL))(msgLHS);
        v16 = (*(*v15 + 136LL))(v15, msgLHS, pFieldLHS);
        v17 = (*(*msgRHS + 144LL))(msgRHS);
        result = v16 < (*(*v17 + 136LL))(v17, msgRHS, pFieldRHS);
        break;
      case 2:
        v18 = (*(*msgLHS + 144LL))(msgLHS);
        v19 = (*(*v18 + 144LL))(v18, msgLHS, pFieldLHS);
        v20 = (*(*msgRHS + 144LL))(msgRHS);
        result = v19 < (*(*v20 + 144LL))(v20, msgRHS, pFieldRHS);
        break;
      case 3:
        v21 = (*(*msgLHS + 144LL))(msgLHS);
        v22 = (*(*v21 + 152LL))(v21, msgLHS, pFieldLHS);
        v23 = (*(*msgRHS + 144LL))(msgRHS);
        result = v22 < (*(*v23 + 152LL))(v23, msgRHS, pFieldRHS);
        break;
      case 4:
        v24 = (*(*msgLHS + 144LL))(msgLHS);
        v25 = (*(*v24 + 160LL))(v24, msgLHS, pFieldLHS);
        v26 = (*(*msgRHS + 144LL))(msgRHS);
        result = v25 < (*(*v26 + 160LL))(v26, msgRHS, pFieldRHS);
        break;
      case 5:
        v27 = (*(*msgLHS + 144LL))(msgLHS);
        pFieldRHSg = (*(*v27 + 176LL))(v27, msgLHS, pFieldLHS);
        v28 = (*(*msgRHS + 144LL))(msgRHS);
        result = (*(*v28 + 176LL))(v28, msgRHS, pFieldRHS) > pFieldRHSg;
        break;
      case 6:
        v29 = (*(*msgLHS + 144LL))(msgLHS);
        pFieldRHSh = (*(*v29 + 168LL))(v29, msgLHS, pFieldLHS);
        v30 = (*(*msgRHS + 144LL))(msgRHS);
        result = (*(*v30 + 168LL))(v30, msgRHS, pFieldRHS) > pFieldRHSh;
        break;
      case 7:
        v31 = (*(*msgLHS + 144LL))(msgLHS);
        v32 = (*(*v31 + 184LL))(v31, msgLHS, pFieldLHS);
        v33 = (*(*msgRHS + 144LL))(msgRHS);
        result = (*(*v33 + 184LL))(v33, msgRHS, pFieldRHS) > v32;
        break;
      case 8:
        v34 = (*(*msgLHS + 144LL))(msgLHS);
        v35 = *((*(*v34 + 200LL))(v34, msgLHS, pFieldLHS) + 16);
        v36 = (*(*msgRHS + 144LL))(msgRHS);
        result = v35 < *((*(*v36 + 200LL))(v36, msgRHS, pFieldRHS) + 16);
        break;
      case 9:
        v9 = (*(*msgRHS + 144LL))(msgRHS);
        (*(*v9 + 192LL))(v55, v9, msgRHS, pFieldRHS);
        v10 = v55[0];
        v11 = (*(*msgLHS + 144LL))(msgLHS);
        (*(*v11 + 192LL))(v54, v11, msgLHS, pFieldLHS);
        result = V_stricmp_fast(v54[0], v10) > 0;
        v12 = v54[0] - 24LL;
        if ( (v54[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create != 0 )
          {
            v38 = _InterlockedExchangeAdd((v12 + 16), 0xFFFFFFFF);
          }
          else
          {
            v39 = *(v54[0] - 8LL);
            *(v54[0] - 8LL) = v39 - 1;
            v38 = v39;
          }
          if ( v38 <= 0 )
          {
            pFieldRHSk = result;
            std::string::_Rep::_M_destroy(v12, &v53);
            result = pFieldRHSk;
          }
        }
        v13 = v55[0] - 24LL;
        if ( (v55[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          if ( &_pthread_key_create != 0 )
          {
            v14 = _InterlockedExchangeAdd((v13 + 16), 0xFFFFFFFF);
          }
          else
          {
            v37 = *(v55[0] - 8LL);
            *(v55[0] - 8LL) = v37 - 1;
            v14 = v37;
          }
          if ( v14 <= 0 )
          {
            pFieldRHSb = result;
            std::string::_Rep::_M_destroy(v13, v54);
            result = pFieldRHSb;
          }
        }
        break;
      default:
        result = 0;
        break;
    }
  }
  return result;
}


// GCSDK::CProtoBufSharedObjectBase::BIsKeyLess  (line 360, @0x0000000003238530, libserver.so)  // inlines: Get, GetDescriptor, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<bool>, 8u, false>, GetPObject, IsKeyField, field
// calls: google::protobuf::internal::ExtensionSet::GetBool(int,bool), GCSDK::IsProtoBufFieldLess
bool __fastcall GCSDK::CProtoBufSharedObjectBase::BIsKeyLess(
        const GCSDK::CProtoBufSharedObjectBase *const this,
        const GCSDK::CSharedObject *const soRHS)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  int i; // r12d
  const google::protobuf::FieldDescriptor *v6; // r15
  bool result; // al
  const google::protobuf::Message *msgRHS; // [rsp+0h] [rbp-40h]
  const google::protobuf::Message *msgLHS; // [rsp+8h] [rbp-38h]

  msgLHS = (*(this->_vptr_CSharedObject + 10))(this);
  msgRHS = (*(soRHS->_vptr_CSharedObject + 10))(soRHS);
  v3 = (*(*msgLHS + 152LL))(msgLHS);
  if ( *(v3 + 44) > 0 )
  {
    v4 = 0;
    for ( i = 0; *(v3 + 44) > i; ++i )
    {
      v6 = (*(v3 + 48) + v4);
      if ( google::protobuf::internal::ExtensionSet::GetBool(
             (v6->options_ + 8),
             key_field.number_,
             key_field.default_value_) != 0 )
      {
        result = GCSDK::IsProtoBufFieldLess(msgLHS, msgRHS, v6, v6);
        if ( result )
          return result;
        if ( GCSDK::IsProtoBufFieldLess(msgRHS, msgLHS, v6, v6) )
          break;
      }
      v4 += 136;
    }
  }
  return 0;
}


// GCSDK::CProtoBufSharedObjectBase::Dump  (line 388, @0x0000000003238600, libserver.so)  // inlines: CUtlMemory, CUtlStringList, CUtlStringList_Base, CUtlVector, CUtlVectorBase, Purge, PurgeAndDeleteElements, RemoveAll, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~CUtlMemory, ~CUtlStringList, ~CUtlStringList_Base, ~CUtlVector, ~CUtlVectorBase, ~basic_string
// calls: google::protobuf::Message::DebugString(void), V_SplitString(char const*,char const*,CUtlVector<char *,CUtlMemory<char *,int>> &), GCSDK::EGInternal_EmitInfo, CUtlMemory<char*, int>::Purge, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
// callers: CDOTALobby::Dump, CEconItem::Dump, GCSDK::CProtoBufSharedObjectBase::Dump
void __fastcall GCSDK::CProtoBufSharedObjectBase::Dump(const google::protobuf::Message *const msg)
{
  __int64 v1; // rdi
  __int64 v2; // r12
  int v3; // ebx
  __int64 v4; // r12
  int v5; // ebx
  char *v6; // rsi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-51h] BYREF
  __int64 v10; // [rsp+10h] [rbp-50h] BYREF
  CUtlStringList lines; // [rsp+20h] [rbp-40h] BYREF

  lines.m_Size = 0;
  lines.m_Memory.m_pMemory = 0;
  lines.m_Memory.m_nAllocationCount = 0;
  lines.m_Memory.m_nGrowSize = 0;
  google::protobuf::Message::DebugString(&v10);
  V_SplitString(v10, "\n", &lines);
  v1 = v10 - 24;
  if ( (v10 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd((v1 + 16), 0xFFFFFFFF);
    }
    else
    {
      v8 = *(v10 - 8);
      *(v10 - 8) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v1, &v9);
  }
  if ( lines.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      GCSDK::EGInternal_EmitInfo(&GCSDK::SPEW_SHAREDOBJ, 1, 1, "%s\n", lines.m_Memory.m_pMemory[v2]);
      ++v3;
      ++v2;
    }
    while ( lines.m_Size > v3 );
    if ( lines.m_Size > 0 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        ++v5;
        v6 = lines.m_Memory.m_pMemory[v4++];
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6);
      }
      while ( v5 < lines.m_Size );
    }
  }
  lines.m_Size = 0;
  if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<char *,int>::Purge(&lines.m_Memory);
    if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&lines.m_Memory);
  }
}


// GCSDK::CProtoBufSharedObjectBase::Dump  (line 402, @0x0000000003238800, libserver.so)  // inlines: GetPObject
// calls: GCSDK::CProtoBufSharedObjectBase::Dump
void __fastcall GCSDK::CProtoBufSharedObjectBase::Dump(const GCSDK::CProtoBufSharedObjectBase *const this)
{
  const google::protobuf::Message *v1; // rax

  v1 = (*(this->_vptr_CSharedObject + 10))(this);
  GCSDK::CProtoBufSharedObjectBase::Dump(v1);
}


// GCSDK::CProtoBufSharedObjectBase::BParseFromMessage  (line 414, @0x00000000032371c0, libserver.so)
// calls: google::protobuf::MessageLite::ParseFromArray(void const*,int)
bool __fastcall GCSDK::CProtoBufSharedObjectBase::BParseFromMessage(
        GCSDK::CProtoBufSharedObjectBase *const this,
        const CUtlBuffer *const buffer)
{
  google::protobuf::MessageLite *v3; // rax

  v3 = (*(this->_vptr_CSharedObject + 10))(this);
  return google::protobuf::MessageLite::ParseFromArray(v3, buffer->m_Memory.m_pMemory, buffer->m_nMaxPut);
}


// GCSDK::CProtoBufSharedObjectBase::BUpdateFromNetwork  (line 426, @0x0000000003237130, libserver.so)  // inlines: GetPObject
bool __fastcall GCSDK::CProtoBufSharedObjectBase::BUpdateFromNetwork(
        GCSDK::CProtoBufSharedObjectBase *const this,
        const GCSDK::CSharedObject *const objUpdate)
{
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64, __int64); // r13
  __int64 v5; // rax

  v3 = (*(this->_vptr_CSharedObject + 10))(this);
  v4 = *(*v3 + 104LL);
  v5 = (*(objUpdate->_vptr_CSharedObject + 10))(objUpdate);
  v4(v3, v5);
  return 1;
}


// GCSDK::CProtoBufSharedObjectBase::SerializeToBuffer  (line 440, @0x0000000003238820, libserver.so)  // inlines: Clear
// calls: CUtlBuffer::AddNullTermination, CUtlBuffer::EnsureCapacity, CUtlBuffer::SeekPut
bool __fastcall GCSDK::CProtoBufSharedObjectBase::SerializeToBuffer(
        const google::protobuf::Message *const msg,
        CUtlBuffer *const bufOutput)
{
  int v4; // eax
  int v5; // r13d

  v4 = (*(*msg + 72LL))(msg);
  bufOutput->m_Get = 0;
  v5 = v4;
  bufOutput->m_Put = 0;
  bufOutput->m_Error = 0;
  bufOutput->m_nOffset = 0;
  bufOutput->m_nMaxPut = -1;
  CUtlBuffer::AddNullTermination(bufOutput);
  CUtlBuffer::EnsureCapacity(bufOutput, v5);
  (*(*msg + 88LL))(msg, bufOutput->m_Memory.m_pMemory);
  CUtlBuffer::SeekPut(bufOutput, CUtlBuffer::SeekType_t::SEEK_HEAD, v5);
  return 1;
}


// GCSDK::CProtoBufSharedObjectBase::BAddToMessage  (line 454, @0x00000000032371f0, libserver.so)  // inlines: GetPObject
// calls: google::protobuf::MessageLite::SerializeToString(std::string *)
bool __fastcall GCSDK::CProtoBufSharedObjectBase::BAddToMessage(
        const GCSDK::CProtoBufSharedObjectBase *const this,
        std::string *pBuffer)
{
  google::protobuf::MessageLite *v3; // rax

  v3 = (*(this->_vptr_CSharedObject + 10))(this);
  return google::protobuf::MessageLite::SerializeToString(v3, pBuffer);
}


// GCSDK::CProtoBufSharedObjectBase::BuildDestroyToMessage  (line 517, @0x00000000032388a0, libserver.so)  // inlines: Get, GetDescriptor, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<bool>, 8u, false>, IsKeyField, field
// calls: google::protobuf::internal::ExtensionSet::GetBool(int,bool), GCSDK::CopyProtoBufField
// callers: GCSDK::CProtoBufSharedObjectBase::BAddDestroyToMessage
google::protobuf::Message *__fastcall GCSDK::CProtoBufSharedObjectBase::BuildDestroyToMessage(
        const google::protobuf::Message *const msg)
{
  __int64 v2; // r12
  __int64 v3; // r15
  int v4; // ebx
  const google::protobuf::FieldDescriptor *v5; // r14
  google::protobuf::Message *pMessageToSend; // [rsp+8h] [rbp-38h]

  v2 = (*(*msg + 152LL))(msg);
  pMessageToSend = (*(*msg + 24LL))(msg);
  if ( *(v2 + 44) > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = (*(v2 + 48) + v3);
      if ( google::protobuf::internal::ExtensionSet::GetBool(
             (v5->options_ + 8),
             key_field.number_,
             key_field.default_value_) != 0 )
        GCSDK::CopyProtoBufField(pMessageToSend, msg, v5, v5);
      ++v4;
      v3 += 136;
    }
    while ( *(v2 + 44) > v4 );
  }
  return pMessageToSend;
}


// GCSDK::CProtoBufSharedObjectBase::BAddDestroyToMessage  (line 537, @0x0000000003238960, libserver.so)  // inlines: GetPObject
// calls: GCSDK::CProtoBufSharedObjectBase::BuildDestroyToMessage, google::protobuf::MessageLite::SerializeToString(std::string *)
bool __fastcall GCSDK::CProtoBufSharedObjectBase::BAddDestroyToMessage(
        const GCSDK::CProtoBufSharedObjectBase *const this,
        std::string *pBuffer)
{
  const google::protobuf::Message *v3; // rax
  google::protobuf::Message *v4; // rbx

  v3 = (*(this->_vptr_CSharedObject + 10))(this);
  v4 = GCSDK::CProtoBufSharedObjectBase::BuildDestroyToMessage(v3);
  google::protobuf::MessageLite::SerializeToString(v4, pBuffer);
  if ( v4 != 0 )
    (*(*v4 + 8LL))(v4);
  return 1;
}


// GCSDK::CProtoBufSharedObjectBase::Copy  (line 551, @0x0000000003237180, libserver.so)  // inlines: GetPObject
void __fastcall GCSDK::CProtoBufSharedObjectBase::Copy(
        GCSDK::CProtoBufSharedObjectBase *const this,
        const GCSDK::CSharedObject *const soRHS)
{
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64, __int64); // r13
  __int64 v5; // rax

  v3 = (*(this->_vptr_CSharedObject + 10))(this);
  v4 = *(*v3 + 104LL);
  v5 = (*(soRHS->_vptr_CSharedObject + 10))(soRHS);
  v4(v3, v5);
}


