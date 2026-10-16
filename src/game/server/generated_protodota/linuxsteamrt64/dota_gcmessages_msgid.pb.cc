// Reconstructed from DWARF by pahole; not original source.

// src/game/server/generated_protodota/linuxsteamrt64/dota_gcmessages_msgid.pb.cc:765
struct StaticDescriptorInitializer_dota_5fgcmessages_5fmsgid_2eproto {
	StaticDescriptorInitializer_dota_5fgcmessages_5fmsgid_2eproto();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// protobuf_AssignDesc_dota_5fgcmessages_5fmsgid_2eproto  (line 33, @0x0000000001bf1af0, libserver.so)  // inlines: _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto, ~basic_string
// calls: std::string::string(char const*,std::allocator<char> const&), google::protobuf::DescriptorPool::generated_pool(void), google::protobuf::DescriptorPool::FindFileByName(std::string const&), protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto, google::protobuf::internal::LogMessage::LogMessage(google::protobuf::LogLevel,char const*,int), google::protobuf::internal::LogMessage::operator<<(char const*), google::protobuf::internal::LogFinisher::operator=(google::protobuf::internal::LogMessage &), google::protobuf::internal::LogMessage::~LogMessage(), std::string::_Rep::_M_destroy(std::allocator<char> const&), _Unwind_Resume, std::string::_Rep::_M_dispose(std::allocator<char> const&)
// strings: "dota_gcmessages_msgid.proto", "generated_protodota/linuxsteamrt64/dota_gcmessages_msgid.pb.cc", "CHECK failed: file != NULL: "
// globals: protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto(void)::already_here, `anonymous namespace'::EDOTAGCMsg_descriptor_
void __cdecl protobuf_AssignDesc_dota_5fgcmessages_5fmsgid_2eproto()
{
  google::protobuf::DescriptorPool *v0; // rdi
  google::protobuf::DescriptorPool *v1; // rax
  __int64 FileByName; // r12
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // eax
  int v6; // edx
  char v7; // [rsp+1Eh] [rbp-32h] BYREF
  char v8; // [rsp+1Fh] [rbp-31h] BYREF
  google::protobuf::internal::LogMessage v9; // [rsp+20h] [rbp-30h] BYREF

  if ( !protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto(void)::already_here )
    protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto();
  std::string::string(&v9, "dota_gcmessages_msgid.proto", &v7);
  v1 = google::protobuf::DescriptorPool::generated_pool(v0);
  FileByName = google::protobuf::DescriptorPool::FindFileByName(v1, &v9);
  v3 = *&v9.level_ - 24LL;
  if ( (*&v9.level_ - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v5 = _InterlockedExchangeAdd((v3 + 16), 0xFFFFFFFF);
    }
    else
    {
      v6 = *(*&v9.level_ - 8LL);
      *(*&v9.level_ - 8LL) = v6 - 1;
      v5 = v6;
    }
    if ( v5 <= 0 )
      std::string::_Rep::_M_destroy(v3, &v8);
  }
  if ( FileByName == 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v9,
      google::protobuf::LogLevel::LOGLEVEL_FATAL,
      "generated_protodota/linuxsteamrt64/dota_gcmessages_msgid.pb.cc",
      38);
    v4 = google::protobuf::internal::LogMessage::operator<<(&v9, "CHECK failed: file != NULL: ");
    google::protobuf::internal::LogFinisher::operator=(&v8, v4);
    google::protobuf::internal::LogMessage::~LogMessage(&v9);
  }
  `anonymous namespace'::EDOTAGCMsg_descriptor_ = *(FileByName + 96);
}


// protobuf_RegisterTypes  (line 50, @0x0000000001bf1a80, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fgcmessages_5fmsgid_2eproto(void)
void __fastcall `anonymous namespace'::protobuf_RegisterTypes(const std::string *const a1)
{
  google::protobuf::Closure *v1; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fgcmessages_5fmsgid_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v1);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
}


// protobuf_ShutdownFile_dota_5fgcmessages_5fmsgid_2eproto  (line 56, @0x0000000001bf1a10, libserver.so)
void __cdecl protobuf_ShutdownFile_dota_5fgcmessages_5fmsgid_2eproto()
{
  ;
}


// protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto  (line 59, @0x0000000001bf1a20, libserver.so)
// calls: google::protobuf::internal::VerifyVersion(int,int,char const*), google::protobuf::DescriptorPool::InternalAddGeneratedFile(void const*,int), google::protobuf::MessageFactory::InternalRegisterGeneratedFile(char const*,void (*)(std::string const&)), google::protobuf::internal::OnShutdown(void (*)(void))
// callers: protobuf_AssignDesc_dota_5fgcmessages_5fmsgid_2eproto, protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto, _GLOBAL__sub_I_dota_gcmessages_msgid.pb.cc
// strings: "generated_protodota/linuxsteamrt64/dota_gcmessages_msgid.pb.cc", "dota_gcmessages_msgid.proto"
// globals: protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto(void)::already_here, `anonymous namespace'::protobuf_RegisterTypes(std::string const&), protobuf_ShutdownFile_dota_5fgcmessages_5fmsgid_2eproto(void)
void __cdecl protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto()
{
  const char *v0; // rcx
  int v1; // edx
  void (*v2)(const std::string *); // rdx
  void (*v3)(void); // rsi

  protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto(void)::already_here = 1;
  google::protobuf::internal::VerifyVersion(
    (&stru_1E9BE8.r_info + 1),
    2006000,
    "generated_protodota/linuxsteamrt64/dota_gcmessages_msgid.pb.cc",
    v0);
  google::protobuf::DescriptorPool::InternalAddGeneratedFile(&stru_328F4A0, &stru_6C18.r_addend + 4, v1);
  google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dota_gcmessages_msgid.proto",
    `anonymous namespace'::protobuf_RegisterTypes,
    v2);
  google::protobuf::internal::OnShutdown(protobuf_ShutdownFile_dota_5fgcmessages_5fmsgid_2eproto, v3);
}


// protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto  (line 59, @0x0000000001bf1c20, libserver.so)
// calls: protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto
// globals: protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto(void)::already_here
void __cdecl protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto()
{
  if ( !protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto(void)::already_here )
    protobuf_AddDesc_dota_5fgcmessages_5fmsgid_2eproto();
}


// EDOTAGCMsg_descriptor  (line 770, @0x0000000001bf1c40, libserver.so)  // inlines: Acquire_Load, FunctionClosure0, GoogleOnceInit, protobuf_AssignDescriptorsOnce
// calls: google::protobuf::GoogleOnceInitImpl(long *,google::protobuf::Closure *), google::protobuf::internal::FunctionClosure0::~FunctionClosure0, _Unwind_Resume
// globals: `anonymous namespace'::protobuf_AssignDescriptors_once_, protobuf_AssignDesc_dota_5fgcmessages_5fmsgid_2eproto(void), `anonymous namespace'::EDOTAGCMsg_descriptor_
const google::protobuf::EnumDescriptor *__cdecl EDOTAGCMsg_descriptor()
{
  google::protobuf::Closure *v0; // rdx
  __int64 v2[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( `anonymous namespace'::protobuf_AssignDescriptors_once_ != 2 )
  {
    LOBYTE(v2[2]) = 0;
    v2[0] = off_47BFB70;
    v2[1] = protobuf_AssignDesc_dota_5fgcmessages_5fmsgid_2eproto;
    google::protobuf::GoogleOnceInitImpl(&`anonymous namespace'::protobuf_AssignDescriptors_once_, v2, v0);
    google::protobuf::internal::FunctionClosure0::~FunctionClosure0(v2);
  }
  return `anonymous namespace'::EDOTAGCMsg_descriptor_;
}


// EDOTAGCMsg_IsValid  (line 774, @0x0000000001bf1cd0, libserver.so)
// globals: jpt_1BF1CF0
bool __fastcall EDOTAGCMsg_IsValid(int value)
{
  bool result; // al

  switch ( value )
  {
    case 7000:
    case 7001:
    case 7004:
    case 7005:
    case 7009:
    case 7010:
    case 7013:
    case 7014:
    case 7017:
    case 7026:
    case 7027:
    case 7028:
    case 7033:
    case 7034:
    case 7035:
    case 7036:
    case 7038:
    case 7040:
    case 7041:
    case 7042:
    case 7043:
    case 7044:
    case 7046:
    case 7047:
    case 7049:
    case 7055:
    case 7056:
    case 7057:
    case 7060:
    case 7061:
    case 7064:
    case 7065:
    case 7068:
    case 7069:
    case 7070:
    case 7071:
    case 7072:
    case 7073:
    case 7074:
    case 7075:
    case 7076:
    case 7077:
    case 7078:
    case 7079:
    case 7081:
    case 7082:
    case 7083:
    case 7084:
    case 7085:
    case 7086:
    case 7087:
    case 7088:
    case 7089:
    case 7090:
    case 7091:
    case 7092:
    case 7093:
    case 7094:
    case 7095:
    case 7096:
    case 7097:
    case 7098:
    case 7099:
    case 7102:
    case 7104:
    case 7111:
    case 7112:
    case 7113:
    case 7114:
    case 7115:
    case 7116:
    case 7121:
    case 7122:
    case 7123:
    case 7124:
    case 7125:
    case 7126:
    case 7127:
    case 7128:
    case 7129:
    case 7130:
    case 7131:
    case 7132:
    case 7133:
    case 7134:
    case 7141:
    case 7142:
    case 7143:
    case 7144:
    case 7147:
    case 7148:
    case 7149:
    case 7150:
    case 7151:
    case 7152:
    case 7153:
    case 7154:
    case 7155:
    case 7156:
    case 7157:
    case 7158:
    case 7159:
    case 7160:
    case 7161:
    case 7166:
    case 7167:
    case 7168:
    case 7169:
    case 7170:
    case 7171:
    case 7172:
    case 7173:
    case 7174:
    case 7176:
    case 7177:
    case 7178:
    case 7179:
    case 7180:
    case 7182:
    case 7183:
    case 7186:
    case 7188:
    case 7189:
    case 7190:
    case 7191:
    case 7192:
    case 7193:
    case 7194:
    case 7195:
    case 7196:
    case 7197:
    case 7198:
    case 7199:
    case 7200:
    case 7201:
    case 7203:
    case 7204:
    case 7205:
    case 7206:
    case 7207:
    case 7208:
    case 7209:
    case 7210:
    case 7212:
    case 7215:
    case 7216:
    case 7217:
    case 7218:
    case 7219:
    case 7220:
    case 7221:
    case 7222:
    case 7223:
    case 7224:
    case 7225:
    case 7226:
    case 7227:
    case 7228:
    case 7229:
    case 7230:
    case 7231:
    case 7232:
    case 7233:
    case 7234:
    case 7235:
    case 7236:
    case 7237:
    case 7240:
    case 7241:
    case 7242:
    case 7248:
    case 7249:
    case 7251:
    case 7254:
    case 7255:
    case 7256:
    case 7258:
    case 7259:
    case 7261:
    case 7262:
    case 7263:
    case 7264:
    case 7265:
    case 7266:
    case 7267:
    case 7268:
    case 7269:
    case 7270:
    case 7272:
    case 7273:
    case 7274:
    case 7275:
    case 7279:
    case 7280:
    case 7281:
    case 7282:
    case 7283:
    case 7284:
    case 7285:
    case 7286:
    case 7287:
    case 7288:
    case 7289:
    case 7290:
    case 7291:
    case 7292:
    case 7293:
    case 7294:
    case 7297:
    case 7298:
    case 7299:
    case 7300:
    case 7301:
    case 7302:
    case 7303:
    case 7304:
    case 7305:
    case 7306:
    case 7307:
    case 7308:
    case 7309:
    case 7310:
    case 7312:
    case 7313:
    case 7314:
    case 7315:
    case 7316:
    case 7317:
    case 7318:
    case 7319:
    case 7320:
    case 7321:
    case 7322:
    case 7323:
    case 7324:
    case 7325:
    case 7326:
    case 7327:
    case 7328:
    case 7329:
    case 7330:
    case 7331:
    case 7332:
    case 7333:
    case 7334:
    case 7335:
    case 7336:
    case 7337:
    case 7338:
    case 7339:
    case 7340:
    case 7341:
    case 7342:
    case 7343:
    case 7344:
    case 7345:
    case 7346:
    case 7347:
    case 7348:
    case 7349:
    case 7350:
    case 7351:
    case 7352:
    case 7353:
    case 7354:
    case 7355:
    case 7356:
    case 7357:
    case 7358:
    case 7359:
    case 7360:
    case 7361:
    case 7362:
    case 7363:
    case 7364:
    case 7365:
    case 7366:
    case 7367:
    case 7368:
    case 7369:
    case 7370:
    case 7371:
    case 7372:
    case 7373:
    case 7374:
    case 7375:
    case 7376:
    case 7377:
    case 7378:
    case 7379:
    case 7380:
    case 7381:
    case 7382:
    case 7383:
    case 7384:
    case 7387:
    case 7388:
    case 7390:
    case 7393:
    case 7394:
    case 7395:
    case 7396:
    case 7397:
    case 7398:
    case 7402:
    case 7403:
    case 7404:
    case 7405:
    case 7406:
    case 7407:
    case 7408:
    case 7409:
    case 7410:
    case 7411:
    case 7412:
    case 7413:
    case 7414:
    case 7415:
    case 7416:
    case 7417:
    case 7418:
    case 7420:
    case 7423:
    case 7424:
    case 7425:
    case 7426:
    case 7427:
    case 7428:
    case 7429:
    case 7430:
    case 7431:
    case 7432:
    case 7433:
    case 7434:
    case 7435:
    case 7436:
    case 7437:
    case 7438:
    case 7439:
    case 7440:
    case 7441:
    case 7443:
    case 7444:
    case 7445:
    case 7448:
    case 7449:
    case 7450:
    case 7451:
    case 7452:
    case 7453:
    case 7454:
    case 7455:
    case 7456:
    case 7457:
    case 7458:
    case 7459:
    case 7460:
    case 7461:
    case 7462:
    case 7463:
    case 7464:
    case 7465:
    case 7466:
    case 7467:
    case 7468:
    case 7469:
    case 7470:
    case 7471:
    case 7472:
    case 7473:
    case 7474:
    case 7475:
    case 7476:
    case 7477:
    case 7478:
    case 7480:
    case 7481:
    case 7482:
    case 7483:
    case 7484:
    case 7485:
    case 7486:
    case 7487:
    case 7488:
    case 7489:
    case 7490:
    case 7491:
    case 7492:
    case 7493:
    case 7494:
    case 7495:
    case 7496:
    case 7497:
    case 7499:
    case 7500:
    case 7501:
    case 7502:
    case 7503:
    case 7504:
    case 7505:
    case 7506:
    case 7507:
    case 7513:
    case 7514:
    case 7515:
    case 7516:
    case 7517:
    case 7518:
    case 7519:
    case 7520:
    case 7521:
    case 7522:
    case 7523:
    case 7524:
    case 7525:
    case 7526:
    case 7527:
    case 7528:
    case 7529:
    case 7530:
    case 7531:
    case 7532:
    case 7533:
    case 7534:
    case 7535:
    case 7536:
    case 7537:
    case 7538:
    case 7539:
    case 7540:
    case 7542:
    case 7543:
    case 7544:
    case 7545:
    case 7546:
    case 7547:
    case 7548:
    case 7549:
    case 7551:
    case 7552:
    case 7553:
    case 7554:
    case 7555:
    case 7556:
    case 7557:
    case 7558:
    case 7559:
    case 7560:
    case 7561:
    case 7562:
    case 7563:
    case 7564:
    case 7565:
    case 7566:
    case 7567:
    case 7569:
    case 7572:
    case 7573:
    case 7574:
    case 7576:
    case 7577:
    case 7578:
    case 7579:
    case 7580:
    case 7581:
    case 7582:
    case 7583:
    case 7584:
    case 7585:
    case 7586:
    case 7587:
    case 7588:
    case 7589:
    case 7590:
    case 7592:
    case 7593:
    case 7594:
    case 7595:
    case 7596:
    case 7597:
    case 7598:
    case 7599:
    case 7600:
    case 7601:
    case 7602:
    case 7603:
    case 7604:
    case 7605:
    case 7606:
    case 7607:
    case 7608:
    case 7609:
    case 7610:
    case 7611:
    case 7612:
    case 8001:
    case 8004:
    case 8006:
    case 8007:
    case 8008:
    case 8009:
    case 8010:
    case 8011:
    case 8012:
    case 8013:
    case 8014:
    case 8015:
    case 8016:
    case 8017:
    case 8018:
    case 8019:
    case 8020:
    case 8021:
    case 8022:
    case 8023:
    case 8024:
    case 8025:
    case 8026:
    case 8027:
    case 8028:
    case 8029:
    case 8030:
    case 8031:
    case 8032:
    case 8033:
    case 8034:
    case 8035:
    case 8036:
    case 8037:
    case 8040:
    case 8041:
    case 8042:
    case 8045:
    case 8046:
    case 8047:
    case 8048:
    case 8049:
    case 8050:
    case 8051:
    case 8052:
    case 8053:
    case 8054:
    case 8055:
    case 8057:
    case 8058:
    case 8059:
    case 8060:
    case 8061:
    case 8062:
    case 8063:
    case 8064:
    case 8065:
    case 8066:
    case 8067:
    case 8068:
    case 8069:
    case 8070:
    case 8071:
    case 8072:
    case 8073:
    case 8074:
    case 8075:
    case 8076:
    case 8077:
    case 8078:
    case 8079:
    case 8080:
    case 8081:
    case 8082:
    case 8083:
    case 8084:
    case 8088:
    case 8089:
    case 8090:
    case 8091:
    case 8092:
    case 8093:
    case 8095:
    case 8096:
    case 8097:
    case 8098:
    case 8099:
    case 8100:
    case 8103:
    case 8104:
    case 8106:
    case 8107:
    case 8108:
    case 8109:
    case 8110:
    case 8111:
    case 8112:
    case 8113:
    case 8114:
    case 8115:
    case 8116:
    case 8117:
    case 8118:
    case 8119:
    case 8120:
    case 8121:
    case 8124:
    case 8125:
    case 8126:
    case 8127:
    case 8128:
    case 8129:
    case 8130:
    case 8131:
    case 8132:
    case 8133:
    case 8134:
    case 8135:
    case 8136:
    case 8137:
    case 8138:
    case 8139:
    case 8140:
    case 8141:
    case 8144:
    case 8145:
    case 8146:
    case 8147:
    case 8148:
    case 8149:
    case 8150:
    case 8151:
    case 8152:
    case 8153:
    case 8154:
    case 8155:
    case 8156:
    case 8157:
    case 8158:
    case 8159:
    case 8160:
    case 8161:
    case 8162:
    case 8163:
    case 8164:
    case 8165:
    case 8166:
    case 8167:
    case 8168:
    case 8169:
    case 8170:
    case 8171:
    case 8172:
    case 8173:
    case 8174:
    case 8175:
    case 8176:
    case 8177:
    case 8178:
    case 8179:
    case 8180:
    case 8181:
    case 8182:
    case 8183:
    case 8184:
    case 8185:
    case 8186:
    case 8187:
    case 8188:
    case 8189:
    case 8190:
    case 8191:
    case 8192:
    case 8193:
    case 8194:
    case 8195:
    case 8196:
    case 8197:
    case 8198:
    case 8199:
    case 8200:
    case 8201:
    case 8202:
    case 8203:
    case 8204:
    case 8205:
    case 8206:
    case 8207:
    case 8208:
    case 8209:
    case 8210:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


