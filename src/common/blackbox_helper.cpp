
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// BlackBox_Record  (line 15, @0x00000000021912f0, libserver.so)  // inlines: GetBool, GetInt
// calls: __cxa_guard_acquire, ConVarRef::IsValid, V_stricmp_fast, Msg, ConVarRef::ConVarRef, __cxa_guard_release, V_vsnprintf, __stack_chk_fail, __cxa_guard_abort, _Unwind_Resume
// callers: nb_dump_debug_history
// strings: "Invalid blackbox type: %s\n", "blackbox"
// globals: `guard variable for'BlackBox_Record(char const*,char const*,...)::blackbox, BlackBox_Record(char const*,char const*,...)::blackbox
void BlackBox_Record(const char *type, const char *pFormat, ...)
{
  int i; // ebx
  __int64 v5; // rax
  va_list marker; // [rsp+8h] [rbp-4F8h] BYREF
  char szMessage[1032]; // [rsp+20h] [rbp-4E0h] BYREF
  unsigned __int64 v8; // [rsp+428h] [rbp-D8h]

  v8 = __readfsqword(0x28u);
  if ( `guard variable for'BlackBox_Record(char const*,char const*,...)::blackbox == 0
    && __cxa_guard_acquire(&`guard variable for'BlackBox_Record(char const*,char const*,...)::blackbox) != 0 )
  {
    ConVarRef::ConVarRef(&BlackBox_Record(char const*,char const*,...)::blackbox, "blackbox");
    __cxa_guard_release(&`guard variable for'BlackBox_Record(char const*,char const*,...)::blackbox);
  }
  if ( ConVarRef::IsValid(&BlackBox_Record(char const*,char const*,...)::blackbox)
    && BlackBox_Record(char const*,char const*,...)::blackbox.m_pConVarState->m_Value.m_nValue != 0 )
  {
    for ( i = 0; i < (*(*blackboxrecorder + 136LL))(blackboxrecorder); ++i )
    {
      v5 = (*(*blackboxrecorder + 128LL))(blackboxrecorder, i);
      if ( V_stricmp_fast(v5, type) == 0 )
        break;
    }
    if ( (*(*blackboxrecorder + 136LL))(blackboxrecorder) > i )
    {
      va_start(marker, pFormat);
      V_vsnprintf(szMessage, 1024, pFormat, marker);
      (*(*blackboxrecorder + 88LL))(blackboxrecorder, i, szMessage);
    }
    else
    {
      Msg("Invalid blackbox type: %s\n", type);
    }
  }
}


