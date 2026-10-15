
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_protobuf.cpp  (line 0, @0x0000000001a67430, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_protobuf_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// ProtobufLogHandler  (line 15, @0x0000000002f8c7a0, libserver.so)
// calls: Msg
// strings: "Protobuf %s(%d): %s"
void __fastcall ProtobufLogHandler(
        google::protobuf::LogLevel level,
        const char *filename,
        int line,
        const std::string *const message)
{
  Msg("Protobuf %s(%d): %s", filename, line, message->_M_dataplus._M_p);
}


// InstallProtobufLogHandler  (line 27, @0x0000000002f8c7c0, libserver.so)
// calls: google::protobuf::SetLogHandler(void (*)(google::protobuf::LogLevel,char const*,int,std::string const&))
// callers: CSource2Server::Connect
// globals: ProtobufLogHandler(google::protobuf::LogLevel,char const*,int,std::string const&), s_pOldHandler
void __cdecl InstallProtobufLogHandler()
{
  s_pOldHandler = google::protobuf::SetLogHandler(ProtobufLogHandler);
}


// UninstallProtobufLogHandler  (line 32, @0x0000000002f8c7e0, libserver.so)
// calls: google::protobuf::SetLogHandler(void (*)(google::protobuf::LogLevel,char const*,int,std::string const&))
// globals: s_pOldHandler
void __cdecl UninstallProtobufLogHandler()
{
  google::protobuf::SetLogHandler(s_pOldHandler);
}


