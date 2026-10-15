
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CC_NPC_Bipass  (line 460, @0x0000000002f11560, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Bipass(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x100000u);
}


// CC_NPC_Destroy  (line 470, @0x0000000002f115a0, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Destroy(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x200000u);
}


// CC_NPC_Kill  (line 478, @0x0000000002f115e0, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Kill(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x10000000u);
}


// CC_NPC_Enemies  (line 488, @0x0000000002f11620, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Enemies(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x400000u);
}


// CC_NPC_Focus  (line 498, @0x0000000002f11660, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
// globals: `vtable for'CNetMessagePB<138,CEntityMessageRemoveAllDecals,(SignonGroup_t)13,(NetChannelBufType_t)1,true>
void __fastcall CC_NPC_Focus(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(
    CommandClient,
    v2,
    &`vtable for'CNetMessagePB<138,CEntityMessageRemoveAllDecals,(SignonGroup_t)13,(NetChannelBufType_t)1,true>);
}


// CC_NPC_Nearest  (line 965, @0x0000000002f116a0, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Nearest(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x2000000000uLL);
}


// CC_NPC_Route  (line 975, @0x0000000002f116e0, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Route(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x80000u);
}


// CC_NPC_Select  (line 985, @0x0000000002f11720, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Select(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x20000u);
}


// CC_NPC_Combat  (line 995, @0x0000000002f11760, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Combat(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x1000000u);
}


// CC_NPC_Tasks  (line 1007, @0x0000000002f117a0, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Tasks(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, &loc_2000000);
}


// CC_NPC_Task_Text  (line 1017, @0x0000000002f117e0, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Task_Text(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x100000000uLL);
}


// CC_NPC_Conditions  (line 1027, @0x0000000002f11820, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Conditions(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x800000u);
}


// CC_NPC_Viewcone  (line 1037, @0x0000000002f11860, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Viewcone(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x8000000u);
}


// CC_NPC_Relationships  (line 1047, @0x0000000002f118a0, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_Relationships(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x400000000uLL);
}


// CC_NPC_ViewSteeringRegulations  (line 1057, @0x0000000002f118e0, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_GetCommandClient, SetDebugBits
void __fastcall CC_NPC_ViewSteeringRegulations(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v2; // rbx
  CBasePlayer *CommandClient; // rax

  v2 = "";
  if ( args->m_nArgc > 1 )
    v2 = args->m_ppArgv[1];
  CommandClient = UTIL_GetCommandClient();
  SetDebugBits(CommandClient, v2, 0x80000000);
}


// ai_test_los  (line 1132, @0x0000000002f11220, libserver.so)
void __fastcall ai_test_los(const CCommandContext *const ctx, const CCommand *const args)
{
  ;
}


// ainet_generate_report  (line 1148, @0x0000000002f124c0, libserver.so)
// calls: CVProfile::OutputReport(int,char const*,int)
// strings: "AINet"
void __fastcall ainet_generate_report(const CCommandContext *const ctx, const CCommand *const args)
{
  CVProfile::OutputReport(&g_VProfCurrentProfile, -517, "AINet", -1);
}


// ainet_generate_report_only  (line 1153, @0x0000000002f12480, libserver.so)
// calls: CVProfile::BudgetGroupNameToBudgetGroupID(char const*), CVProfile::OutputReport(int,char const*,int)
// strings: "AINet"
void __fastcall ainet_generate_report_only(const CCommandContext *const ctx, const CCommand *const args)
{
  int v2; // eax

  v2 = CVProfile::BudgetGroupNameToBudgetGroupID(&g_VProfCurrentProfile, "AINet");
  CVProfile::OutputReport(&g_VProfCurrentProfile, -517, "AINet", v2);
}


