
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUserMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000001f78340, libserver.so)  // inlines: ~CBaseCmdKeyValues, ~CNetMessagePB
// calls: KeyValues::deleteThis, CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent
void __fastcall CUserMessagePB<148,CBaseCmdKeyValues<CUserMsg_CustomGameEvent>,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<148,CBaseCmdKeyValues<CUserMsg_CustomGameEvent>,(NetChannelBufType_t)1> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3FCB1F0;
  v2 = *(this + 5);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 5) = 0;
  }
  CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent(this);
}


// CUserMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000001f785a0, libserver.so)  // inlines: ~CBaseCmdKeyValues, ~CNetMessagePB, ~CUserMessagePB
// calls: KeyValues::deleteThis, CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent, operator delete
void __fastcall CUserMessagePB<148,CBaseCmdKeyValues<CUserMsg_CustomGameEvent>,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<148,CBaseCmdKeyValues<CUserMsg_CustomGameEvent>,(NetChannelBufType_t)1> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3FCB1F0;
  v2 = *(this + 5);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 5) = 0;
  }
  CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent(this);
  operator delete(this);
}


// CUserMessagePB<138, CEntityMessageRemoveAllDecals, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000217b820, libserver.so)  // inlines: ~CNetMessagePB
// calls: CEntityMessageRemoveAllDecals::~CEntityMessageRemoveAllDecals
void __fastcall CUserMessagePB<138,CEntityMessageRemoveAllDecals,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<138,CEntityMessageRemoveAllDecals,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4000010;
  CEntityMessageRemoveAllDecals::~CEntityMessageRemoveAllDecals(this);
}


// CUserMessagePB<138, CEntityMessageRemoveAllDecals, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000217b840, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessageRemoveAllDecals::~CEntityMessageRemoveAllDecals, operator delete
void __fastcall CUserMessagePB<138,CEntityMessageRemoveAllDecals,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<138,CEntityMessageRemoveAllDecals,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4000010;
  CEntityMessageRemoveAllDecals::~CEntityMessageRemoveAllDecals(this);
  operator delete(this);
}


// CUserMessagePB<101, CUserMessageAchievementEvent, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000217b910, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageAchievementEvent::~CUserMessageAchievementEvent
void __fastcall CUserMessagePB<101,CUserMessageAchievementEvent,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<101,CUserMessageAchievementEvent,(NetChannelBufType_t)1> *const this)
{
  *this = &off_3FFFDD0;
  CUserMessageAchievementEvent::~CUserMessageAchievementEvent(this);
}


// CUserMessagePB<101, CUserMessageAchievementEvent, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000217b930, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageAchievementEvent::~CUserMessageAchievementEvent, operator delete
void __fastcall CUserMessagePB<101,CUserMessageAchievementEvent,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<101,CUserMessageAchievementEvent,(NetChannelBufType_t)1> *const this)
{
  *this = &off_3FFFDD0;
  CUserMessageAchievementEvent::~CUserMessageAchievementEvent(this);
  operator delete(this);
}


// CUserMessagePB<137, CEntityMessageScreenOverlay, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002211310, libserver.so)  // inlines: ~CNetMessagePB
// calls: CEntityMessageScreenOverlay::~CEntityMessageScreenOverlay
void __fastcall CUserMessagePB<137,CEntityMessageScreenOverlay,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<137,CEntityMessageScreenOverlay,(NetChannelBufType_t)1> *const this)
{
  *this = &off_402A6D0;
  CEntityMessageScreenOverlay::~CEntityMessageScreenOverlay(this);
}


// CUserMessagePB<137, CEntityMessageScreenOverlay, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002211330, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessageScreenOverlay::~CEntityMessageScreenOverlay, operator delete
void __fastcall CUserMessagePB<137,CEntityMessageScreenOverlay,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<137,CEntityMessageScreenOverlay,(NetChannelBufType_t)1> *const this)
{
  *this = &off_402A6D0;
  CEntityMessageScreenOverlay::~CEntityMessageScreenOverlay(this);
  operator delete(this);
}


// CUserMessagePB<112, CUserMessageKeyHintText, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002211400, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageKeyHintText::~CUserMessageKeyHintText
void __fastcall CUserMessagePB<112,CUserMessageKeyHintText,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<112,CUserMessageKeyHintText,(NetChannelBufType_t)1> *const this)
{
  *this = &off_402A490;
  CUserMessageKeyHintText::~CUserMessageKeyHintText(this);
}


// CUserMessagePB<112, CUserMessageKeyHintText, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002211420, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageKeyHintText::~CUserMessageKeyHintText, operator delete
void __fastcall CUserMessagePB<112,CUserMessageKeyHintText,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<112,CUserMessageKeyHintText,(NetChannelBufType_t)1> *const this)
{
  *this = &off_402A490;
  CUserMessageKeyHintText::~CUserMessageKeyHintText(this);
  operator delete(this);
}


// CUserMessagePB<104, CUserMessageCurrentTimescale, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002247810, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageCurrentTimescale::~CUserMessageCurrentTimescale
void __fastcall CUserMessagePB<104,CUserMessageCurrentTimescale,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<104,CUserMessageCurrentTimescale,(NetChannelBufType_t)1> *const this)
{
  *this = &off_403FB70;
  CUserMessageCurrentTimescale::~CUserMessageCurrentTimescale(this);
}


// CUserMessagePB<104, CUserMessageCurrentTimescale, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002247830, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageCurrentTimescale::~CUserMessageCurrentTimescale, operator delete
void __fastcall CUserMessagePB<104,CUserMessageCurrentTimescale,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<104,CUserMessageCurrentTimescale,(NetChannelBufType_t)1> *const this)
{
  *this = &off_403FB70;
  CUserMessageCurrentTimescale::~CUserMessageCurrentTimescale(this);
  operator delete(this);
}


// CUserMessagePB<105, CUserMessageDesiredTimescale, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002247900, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageDesiredTimescale::~CUserMessageDesiredTimescale
void __fastcall CUserMessagePB<105,CUserMessageDesiredTimescale,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<105,CUserMessageDesiredTimescale,(NetChannelBufType_t)1> *const this)
{
  *this = &off_403FDB0;
  CUserMessageDesiredTimescale::~CUserMessageDesiredTimescale(this);
}


// CUserMessagePB<105, CUserMessageDesiredTimescale, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002247920, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageDesiredTimescale::~CUserMessageDesiredTimescale, operator delete
void __fastcall CUserMessagePB<105,CUserMessageDesiredTimescale,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<105,CUserMessageDesiredTimescale,(NetChannelBufType_t)1> *const this)
{
  *this = &off_403FDB0;
  CUserMessageDesiredTimescale::~CUserMessageDesiredTimescale(this);
  operator delete(this);
}


// CUserMessagePB<109, CUserMessageHintText, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000227c7e0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageHintText::~CUserMessageHintText
void __fastcall CUserMessagePB<109,CUserMessageHintText,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<109,CUserMessageHintText,(NetChannelBufType_t)1> *const this)
{
  *this = &off_404EF10;
  CUserMessageHintText::~CUserMessageHintText(this);
}


// CUserMessagePB<109, CUserMessageHintText, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000227c800, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageHintText::~CUserMessageHintText, operator delete
void __fastcall CUserMessagePB<109,CUserMessageHintText,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<109,CUserMessageHintText,(NetChannelBufType_t)1> *const this)
{
  *this = &off_404EF10;
  CUserMessageHintText::~CUserMessageHintText(this);
  operator delete(this);
}


// CUserMessagePB<129, CUserMessageVoiceSubtitle, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000022aa040, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageVoiceSubtitle::~CUserMessageVoiceSubtitle
void __fastcall CUserMessagePB<129,CUserMessageVoiceSubtitle,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<129,CUserMessageVoiceSubtitle,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40585D0;
  CUserMessageVoiceSubtitle::~CUserMessageVoiceSubtitle(this);
}


// CUserMessagePB<129, CUserMessageVoiceSubtitle, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000022aa060, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageVoiceSubtitle::~CUserMessageVoiceSubtitle, operator delete
void __fastcall CUserMessagePB<129,CUserMessageVoiceSubtitle,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<129,CUserMessageVoiceSubtitle,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40585D0;
  CUserMessageVoiceSubtitle::~CUserMessageVoiceSubtitle(this);
  operator delete(this);
}


// CUserMessagePB<127, CUserMessageVGUIMenu, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000023075e0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageVGUIMenu::~CUserMessageVGUIMenu
void __fastcall CUserMessagePB<127,CUserMessageVGUIMenu,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<127,CUserMessageVGUIMenu,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4073970;
  CUserMessageVGUIMenu::~CUserMessageVGUIMenu(this);
}


// CUserMessagePB<127, CUserMessageVGUIMenu, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002307600, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageVGUIMenu::~CUserMessageVGUIMenu, operator delete
void __fastcall CUserMessagePB<127,CUserMessageVGUIMenu,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<127,CUserMessageVGUIMenu,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4073970;
  CUserMessageVGUIMenu::~CUserMessageVGUIMenu(this);
  operator delete(this);
}


// CUserMessagePB<115, CUserMessageResetHUD, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000023076d0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageResetHUD::~CUserMessageResetHUD
void __fastcall CUserMessagePB<115,CUserMessageResetHUD,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<115,CUserMessageResetHUD,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4073BB0;
  CUserMessageResetHUD::~CUserMessageResetHUD(this);
}


// CUserMessagePB<115, CUserMessageResetHUD, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000023076f0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageResetHUD::~CUserMessageResetHUD, operator delete
void __fastcall CUserMessagePB<115,CUserMessageResetHUD,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<115,CUserMessageResetHUD,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4073BB0;
  CUserMessageResetHUD::~CUserMessageResetHUD(this);
  operator delete(this);
}


// CUserMessagePB<126, CUserMessageTrain, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000023077c0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageTrain::~CUserMessageTrain
void __fastcall CUserMessagePB<126,CUserMessageTrain,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<126,CUserMessageTrain,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4073DF0;
  CUserMessageTrain::~CUserMessageTrain(this);
}


// CUserMessagePB<126, CUserMessageTrain, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000023077e0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageTrain::~CUserMessageTrain, operator delete
void __fastcall CUserMessagePB<126,CUserMessageTrain,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<126,CUserMessageTrain,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4073DF0;
  CUserMessageTrain::~CUserMessageTrain(this);
  operator delete(this);
}


// CUserMessagePB<133, CUserMessageCrosshairAngle, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000023078b0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageCrosshairAngle::~CUserMessageCrosshairAngle
void __fastcall CUserMessagePB<133,CUserMessageCrosshairAngle,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<133,CUserMessageCrosshairAngle,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4073730;
  CUserMessageCrosshairAngle::~CUserMessageCrosshairAngle(this);
}


// CUserMessagePB<133, CUserMessageCrosshairAngle, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000023078d0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageCrosshairAngle::~CUserMessageCrosshairAngle, operator delete
void __fastcall CUserMessagePB<133,CUserMessageCrosshairAngle,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<133,CUserMessageCrosshairAngle,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4073730;
  CUserMessageCrosshairAngle::~CUserMessageCrosshairAngle(this);
  operator delete(this);
}


// CUserMessagePB<149, CUserMessageHapticPulse, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002373070, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageHapticPulse::~CUserMessageHapticPulse
void __fastcall CUserMessagePB<149,CUserMessageHapticPulse,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<149,CUserMessageHapticPulse,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4094BB0;
  CUserMessageHapticPulse::~CUserMessageHapticPulse(this);
}


// CUserMessagePB<149, CUserMessageHapticPulse, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002373090, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageHapticPulse::~CUserMessageHapticPulse, operator delete
void __fastcall CUserMessagePB<149,CUserMessageHapticPulse,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<149,CUserMessageHapticPulse,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4094BB0;
  CUserMessageHapticPulse::~CUserMessageHapticPulse(this);
  operator delete(this);
}


// CUserMessagePB<139, CEntityMessagePropagateForce, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000023ab290, libserver.so)  // inlines: ~CNetMessagePB
// calls: CEntityMessagePropagateForce::~CEntityMessagePropagateForce
void __fastcall CUserMessagePB<139,CEntityMessagePropagateForce,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<139,CEntityMessagePropagateForce,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40A4DD0;
  CEntityMessagePropagateForce::~CEntityMessagePropagateForce(this);
}


// CUserMessagePB<139, CEntityMessagePropagateForce, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000023ab2b0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessagePropagateForce::~CEntityMessagePropagateForce, operator delete
void __fastcall CUserMessagePB<139,CEntityMessagePropagateForce,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<139,CEntityMessagePropagateForce,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40A4DD0;
  CEntityMessagePropagateForce::~CEntityMessagePropagateForce(this);
  operator delete(this);
}


// CUserMessagePB<102, CUserMessageCloseCaption, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000023ab380, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageCloseCaption::~CUserMessageCloseCaption
void __fastcall CUserMessagePB<102,CUserMessageCloseCaption,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<102,CUserMessageCloseCaption,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40A4B90;
  CUserMessageCloseCaption::~CUserMessageCloseCaption(this);
}


// CUserMessagePB<102, CUserMessageCloseCaption, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000023ab3a0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageCloseCaption::~CUserMessageCloseCaption, operator delete
void __fastcall CUserMessagePB<102,CUserMessageCloseCaption,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<102,CUserMessageCloseCaption,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40A4B90;
  CUserMessageCloseCaption::~CUserMessageCloseCaption(this);
  operator delete(this);
}


// CUserMessagePB<125, CUserMessageScreenTilt, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002410a00, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageScreenTilt::~CUserMessageScreenTilt
void __fastcall CUserMessagePB<125,CUserMessageScreenTilt,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<125,CUserMessageScreenTilt,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CFC10;
  CUserMessageScreenTilt::~CUserMessageScreenTilt(this);
}


// CUserMessagePB<125, CUserMessageScreenTilt, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002410a20, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageScreenTilt::~CUserMessageScreenTilt, operator delete
void __fastcall CUserMessagePB<125,CUserMessageScreenTilt,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<125,CUserMessageScreenTilt,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CFC10;
  CUserMessageScreenTilt::~CUserMessageScreenTilt(this);
  operator delete(this);
}


// CUserMessagePB<144, CUserMessageAudioParameter, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002410af0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageAudioParameter::~CUserMessageAudioParameter
void __fastcall CUserMessagePB<144,CUserMessageAudioParameter,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<144,CUserMessageAudioParameter,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CFE50;
  CUserMessageAudioParameter::~CUserMessageAudioParameter(this);
}


// CUserMessagePB<144, CUserMessageAudioParameter, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002410b10, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageAudioParameter::~CUserMessageAudioParameter, operator delete
void __fastcall CUserMessagePB<144,CUserMessageAudioParameter,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<144,CUserMessageAudioParameter,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CFE50;
  CUserMessageAudioParameter::~CUserMessageAudioParameter(this);
  operator delete(this);
}


// CUserMessagePB<120, CUserMessageShake, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002410d10, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageShake::~CUserMessageShake
void __fastcall CUserMessagePB<120,CUserMessageShake,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<120,CUserMessageShake,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CF550;
  CUserMessageShake::~CUserMessageShake(this);
}


// CUserMessagePB<120, CUserMessageShake, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002410d30, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageShake::~CUserMessageShake, operator delete
void __fastcall CUserMessagePB<120,CUserMessageShake,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<120,CUserMessageShake,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CF550;
  CUserMessageShake::~CUserMessageShake(this);
  operator delete(this);
}


// CUserMessagePB<106, CUserMessageFade, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002410e00, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageFade::~CUserMessageFade
void __fastcall CUserMessagePB<106,CUserMessageFade,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<106,CUserMessageFade,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CF790;
  CUserMessageFade::~CUserMessageFade(this);
}


// CUserMessagePB<106, CUserMessageFade, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002410e20, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageFade::~CUserMessageFade, operator delete
void __fastcall CUserMessagePB<106,CUserMessageFade,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<106,CUserMessageFade,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CF790;
  CUserMessageFade::~CUserMessageFade(this);
  operator delete(this);
}


// CUserMessagePB<110, CUserMessageHudMsg, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002410ef0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageHudMsg::~CUserMessageHudMsg
void __fastcall CUserMessagePB<110,CUserMessageHudMsg,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<110,CUserMessageHudMsg,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40D0090;
  CUserMessageHudMsg::~CUserMessageHudMsg(this);
}


// CUserMessagePB<110, CUserMessageHudMsg, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002410f10, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageHudMsg::~CUserMessageHudMsg, operator delete
void __fastcall CUserMessagePB<110,CUserMessageHudMsg,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<110,CUserMessageHudMsg,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40D0090;
  CUserMessageHudMsg::~CUserMessageHudMsg(this);
  operator delete(this);
}


// CUserMessagePB<124, CUserMessageTextMsg, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002410fe0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageTextMsg::~CUserMessageTextMsg
void __fastcall CUserMessagePB<124,CUserMessageTextMsg,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<124,CUserMessageTextMsg,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CF9D0;
  CUserMessageTextMsg::~CUserMessageTextMsg(this);
}


// CUserMessagePB<124, CUserMessageTextMsg, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002411000, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageTextMsg::~CUserMessageTextMsg, operator delete
void __fastcall CUserMessagePB<124,CUserMessageTextMsg,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<124,CUserMessageTextMsg,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CF9D0;
  CUserMessageTextMsg::~CUserMessageTextMsg(this);
  operator delete(this);
}


// CUserMessagePB<117, CUserMessageSayText, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000024110d0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageSayText::~CUserMessageSayText
void __fastcall CUserMessagePB<117,CUserMessageSayText,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<117,CUserMessageSayText,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CEC50;
  CUserMessageSayText::~CUserMessageSayText(this);
}


// CUserMessagePB<117, CUserMessageSayText, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000024110f0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageSayText::~CUserMessageSayText, operator delete
void __fastcall CUserMessagePB<117,CUserMessageSayText,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<117,CUserMessageSayText,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CEC50;
  CUserMessageSayText::~CUserMessageSayText(this);
  operator delete(this);
}


// CUserMessagePB<118, CUserMessageSayText2, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000024111c0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageSayText2::~CUserMessageSayText2
void __fastcall CUserMessagePB<118,CUserMessageSayText2,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<118,CUserMessageSayText2,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CEE90;
  CUserMessageSayText2::~CUserMessageSayText2(this);
}


// CUserMessagePB<118, CUserMessageSayText2, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000024111e0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageSayText2::~CUserMessageSayText2, operator delete
void __fastcall CUserMessagePB<118,CUserMessageSayText2,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<118,CUserMessageSayText2,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CEE90;
  CUserMessageSayText2::~CUserMessageSayText2(this);
  operator delete(this);
}


// CUserMessagePB<119, CUserMessageSayTextChannel, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000024112b0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageSayTextChannel::~CUserMessageSayTextChannel
void __fastcall CUserMessagePB<119,CUserMessageSayTextChannel,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<119,CUserMessageSayTextChannel,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CF310;
  CUserMessageSayTextChannel::~CUserMessageSayTextChannel(this);
}


// CUserMessagePB<119, CUserMessageSayTextChannel, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000024112d0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageSayTextChannel::~CUserMessageSayTextChannel, operator delete
void __fastcall CUserMessagePB<119,CUserMessageSayTextChannel,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<119,CUserMessageSayTextChannel,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CF310;
  CUserMessageSayTextChannel::~CUserMessageSayTextChannel(this);
  operator delete(this);
}


// CUserMessagePB<111, CUserMessageHudText, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000024113a0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageHudText::~CUserMessageHudText
void __fastcall CUserMessagePB<111,CUserMessageHudText,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<111,CUserMessageHudText,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40D02D0;
  CUserMessageHudText::~CUserMessageHudText(this);
}


// CUserMessagePB<111, CUserMessageHudText, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000024113c0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageHudText::~CUserMessageHudText, operator delete
void __fastcall CUserMessagePB<111,CUserMessageHudText,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<111,CUserMessageHudText,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40D02D0;
  CUserMessageHudText::~CUserMessageHudText(this);
  operator delete(this);
}


// CUserMessagePB<113, CUserMessageColoredText, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002411490, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageColoredText::~CUserMessageColoredText
void __fastcall CUserMessagePB<113,CUserMessageColoredText,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<113,CUserMessageColoredText,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CF0D0;
  CUserMessageColoredText::~CUserMessageColoredText(this);
}


// CUserMessagePB<113, CUserMessageColoredText, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000024114b0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageColoredText::~CUserMessageColoredText, operator delete
void __fastcall CUserMessagePB<113,CUserMessageColoredText,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<113,CUserMessageColoredText,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CF0D0;
  CUserMessageColoredText::~CUserMessageColoredText(this);
  operator delete(this);
}


// CUserMessagePB<114, CUserMessageRequestState, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002411580, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageRequestState::~CUserMessageRequestState
void __fastcall CUserMessagePB<114,CUserMessageRequestState,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<114,CUserMessageRequestState,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CE7D0;
  CUserMessageRequestState::~CUserMessageRequestState(this);
}


// CUserMessagePB<114, CUserMessageRequestState, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000024115a0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageRequestState::~CUserMessageRequestState, operator delete
void __fastcall CUserMessagePB<114,CUserMessageRequestState,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<114,CUserMessageRequestState,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CE7D0;
  CUserMessageRequestState::~CUserMessageRequestState(this);
  operator delete(this);
}


// CUserMessagePB<128, CUserMessageVoiceMask, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002411670, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageVoiceMask::~CUserMessageVoiceMask
void __fastcall CUserMessagePB<128,CUserMessageVoiceMask,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<128,CUserMessageVoiceMask,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CEA10;
  CUserMessageVoiceMask::~CUserMessageVoiceMask(this);
}


// CUserMessagePB<128, CUserMessageVoiceMask, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002411690, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageVoiceMask::~CUserMessageVoiceMask, operator delete
void __fastcall CUserMessagePB<128,CUserMessageVoiceMask,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<128,CUserMessageVoiceMask,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40CEA10;
  CUserMessageVoiceMask::~CUserMessageVoiceMask(this);
  operator delete(this);
}


// CUserMessagePB<523, CDOTAUserMsg_AbilityPing, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002457500, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_AbilityPing::~CDOTAUserMsg_AbilityPing
void __fastcall CUserMessagePB<523,CDOTAUserMsg_AbilityPing,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<523,CDOTAUserMsg_AbilityPing,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40D4E10;
  CDOTAUserMsg_AbilityPing::~CDOTAUserMsg_AbilityPing(this);
}


// CUserMessagePB<523, CDOTAUserMsg_AbilityPing, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002457520, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_AbilityPing::~CDOTAUserMsg_AbilityPing, operator delete
void __fastcall CUserMessagePB<523,CDOTAUserMsg_AbilityPing,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<523,CDOTAUserMsg_AbilityPing,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40D4E10;
  CDOTAUserMsg_AbilityPing::~CDOTAUserMsg_AbilityPing(this);
  operator delete(this);
}


// CUserMessagePB<535, CDOTAUserMsg_StatsMatchDetails, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249a2d0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_StatsMatchDetails::~CDOTAUserMsg_StatsMatchDetails
void __fastcall CUserMessagePB<535,CDOTAUserMsg_StatsMatchDetails,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<535,CDOTAUserMsg_StatsMatchDetails,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40DBE50;
  CDOTAUserMsg_StatsMatchDetails::~CDOTAUserMsg_StatsMatchDetails(this);
}


// CUserMessagePB<535, CDOTAUserMsg_StatsMatchDetails, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249a2f0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_StatsMatchDetails::~CDOTAUserMsg_StatsMatchDetails, operator delete
void __fastcall CUserMessagePB<535,CDOTAUserMsg_StatsMatchDetails,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<535,CDOTAUserMsg_StatsMatchDetails,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40DBE50;
  CDOTAUserMsg_StatsMatchDetails::~CDOTAUserMsg_StatsMatchDetails(this);
  operator delete(this);
}


// CUserMessagePB<554, CMsgDOTACombatLogEntry, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249a3c0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry
void __fastcall CUserMessagePB<554,CMsgDOTACombatLogEntry,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<554,CMsgDOTACombatLogEntry,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40DC750;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(this);
}


// CUserMessagePB<554, CMsgDOTACombatLogEntry, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249a3e0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, operator delete
void __fastcall CUserMessagePB<554,CMsgDOTACombatLogEntry,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<554,CMsgDOTACombatLogEntry,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40DC750;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(this);
  operator delete(this);
}


// CUserMessagePB<468, CMsgDOTACombatLogEntry, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249a4b0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry
void __fastcall CUserMessagePB<468,CMsgDOTACombatLogEntry,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<468,CMsgDOTACombatLogEntry,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40DB9D0;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(this);
}


// CUserMessagePB<468, CMsgDOTACombatLogEntry, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249a4d0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry, operator delete
void __fastcall CUserMessagePB<468,CMsgDOTACombatLogEntry,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<468,CMsgDOTACombatLogEntry,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40DB9D0;
  CMsgDOTACombatLogEntry::~CMsgDOTACombatLogEntry(this);
  operator delete(this);
}


// CUserMessagePB<467, CDOTAUserMsg_CombatHeroPositions, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249a5a0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_CombatHeroPositions::~CDOTAUserMsg_CombatHeroPositions
void __fastcall CUserMessagePB<467,CDOTAUserMsg_CombatHeroPositions,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<467,CDOTAUserMsg_CombatHeroPositions,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40DB790;
  CDOTAUserMsg_CombatHeroPositions::~CDOTAUserMsg_CombatHeroPositions(this);
}


// CUserMessagePB<467, CDOTAUserMsg_CombatHeroPositions, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249a5c0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_CombatHeroPositions::~CDOTAUserMsg_CombatHeroPositions, operator delete
void __fastcall CUserMessagePB<467,CDOTAUserMsg_CombatHeroPositions,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<467,CDOTAUserMsg_CombatHeroPositions,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40DB790;
  CDOTAUserMsg_CombatHeroPositions::~CDOTAUserMsg_CombatHeroPositions(this);
  operator delete(this);
}


// CUserMessagePB<479, CDOTAUserMsg_MiniKillCamInfo, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249a690, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_MiniKillCamInfo::~CDOTAUserMsg_MiniKillCamInfo
void __fastcall CUserMessagePB<479,CDOTAUserMsg_MiniKillCamInfo,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<479,CDOTAUserMsg_MiniKillCamInfo,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40DBC10;
  CDOTAUserMsg_MiniKillCamInfo::~CDOTAUserMsg_MiniKillCamInfo(this);
}


// CUserMessagePB<479, CDOTAUserMsg_MiniKillCamInfo, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249a6b0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_MiniKillCamInfo::~CDOTAUserMsg_MiniKillCamInfo, operator delete
void __fastcall CUserMessagePB<479,CDOTAUserMsg_MiniKillCamInfo,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<479,CDOTAUserMsg_MiniKillCamInfo,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40DBC10;
  CDOTAUserMsg_MiniKillCamInfo::~CDOTAUserMsg_MiniKillCamInfo(this);
  operator delete(this);
}


// CUserMessagePB<550, CDOTAUserMsg_CustomHudElement_Destroy, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249aa60, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_CustomHudElement_Destroy::~CDOTAUserMsg_CustomHudElement_Destroy
void __fastcall CUserMessagePB<550,CDOTAUserMsg_CustomHudElement_Destroy,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<550,CDOTAUserMsg_CustomHudElement_Destroy,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40DC510;
  CDOTAUserMsg_CustomHudElement_Destroy::~CDOTAUserMsg_CustomHudElement_Destroy(this);
}


// CUserMessagePB<550, CDOTAUserMsg_CustomHudElement_Destroy, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249aa80, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_CustomHudElement_Destroy::~CDOTAUserMsg_CustomHudElement_Destroy, operator delete
void __fastcall CUserMessagePB<550,CDOTAUserMsg_CustomHudElement_Destroy,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<550,CDOTAUserMsg_CustomHudElement_Destroy,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40DC510;
  CDOTAUserMsg_CustomHudElement_Destroy::~CDOTAUserMsg_CustomHudElement_Destroy(this);
  operator delete(this);
}


// CUserMessagePB<548, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249d3b0, libserver.so)  // inlines: ~CBaseCmdKeyValues, ~CNetMessagePB
// calls: KeyValues::deleteThis, CDOTAUserMsg_CustomHudElement_Create::~CDOTAUserMsg_CustomHudElement_Create
void __fastcall CUserMessagePB<548,CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<548,CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>,(NetChannelBufType_t)1> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3F9ABF0;
  v2 = *(this + 6);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 6) = 0;
  }
  CDOTAUserMsg_CustomHudElement_Create::~CDOTAUserMsg_CustomHudElement_Create(this);
}


// CUserMessagePB<549, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249d470, libserver.so)  // inlines: ~CBaseCmdKeyValues, ~CNetMessagePB
// calls: KeyValues::deleteThis, CDOTAUserMsg_CustomHudElement_Modify::~CDOTAUserMsg_CustomHudElement_Modify
void __fastcall CUserMessagePB<549,CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<549,CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>,(NetChannelBufType_t)1> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3F9AD30;
  v2 = *(this + 6);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 6) = 0;
  }
  CDOTAUserMsg_CustomHudElement_Modify::~CDOTAUserMsg_CustomHudElement_Modify(this);
}


// CUserMessagePB<548, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249d540, libserver.so)  // inlines: ~CBaseCmdKeyValues, ~CNetMessagePB, ~CUserMessagePB
// calls: KeyValues::deleteThis, CDOTAUserMsg_CustomHudElement_Create::~CDOTAUserMsg_CustomHudElement_Create, operator delete
void __fastcall CUserMessagePB<548,CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<548,CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>,(NetChannelBufType_t)1> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3F9ABF0;
  v2 = *(this + 6);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 6) = 0;
  }
  CDOTAUserMsg_CustomHudElement_Create::~CDOTAUserMsg_CustomHudElement_Create(this);
  operator delete(this);
}


// CUserMessagePB<549, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000249d630, libserver.so)  // inlines: ~CBaseCmdKeyValues, ~CNetMessagePB, ~CUserMessagePB
// calls: KeyValues::deleteThis, CDOTAUserMsg_CustomHudElement_Modify::~CDOTAUserMsg_CustomHudElement_Modify, operator delete
void __fastcall CUserMessagePB<549,CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<549,CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>,(NetChannelBufType_t)1> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3F9AD30;
  v2 = *(this + 6);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 6) = 0;
  }
  CDOTAUserMsg_CustomHudElement_Modify::~CDOTAUserMsg_CustomHudElement_Modify(this);
  operator delete(this);
}


// CUserMessagePB<130, CUserMessageSendAudio, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002555d90, libserver.so)  // inlines: ~CNetMessagePB
// calls: CUserMessageSendAudio::~CUserMessageSendAudio
void __fastcall CUserMessagePB<130,CUserMessageSendAudio,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<130,CUserMessageSendAudio,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F1850;
  CUserMessageSendAudio::~CUserMessageSendAudio(this);
}


// CUserMessagePB<130, CUserMessageSendAudio, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002555db0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageSendAudio::~CUserMessageSendAudio, operator delete
void __fastcall CUserMessagePB<130,CUserMessageSendAudio,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<130,CUserMessageSendAudio,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F1850;
  CUserMessageSendAudio::~CUserMessageSendAudio(this);
  operator delete(this);
}


// CUserMessagePB<478, CDOTAUserMsg_MapLine, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556000, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_MapLine::~CDOTAUserMsg_MapLine
void __fastcall CUserMessagePB<478,CDOTAUserMsg_MapLine,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<478,CDOTAUserMsg_MapLine,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F1CD0;
  CDOTAUserMsg_MapLine::~CDOTAUserMsg_MapLine(this);
}


// CUserMessagePB<478, CDOTAUserMsg_MapLine, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556020, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_MapLine::~CDOTAUserMsg_MapLine, operator delete
void __fastcall CUserMessagePB<478,CDOTAUserMsg_MapLine,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<478,CDOTAUserMsg_MapLine,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F1CD0;
  CDOTAUserMsg_MapLine::~CDOTAUserMsg_MapLine(this);
  operator delete(this);
}


// CUserMessagePB<497, CDOTAUserMsg_WorldLine, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025560f0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_WorldLine::~CDOTAUserMsg_WorldLine
void __fastcall CUserMessagePB<497,CDOTAUserMsg_WorldLine,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<497,CDOTAUserMsg_WorldLine,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F2390;
  CDOTAUserMsg_WorldLine::~CDOTAUserMsg_WorldLine(this);
}


// CUserMessagePB<497, CDOTAUserMsg_WorldLine, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556110, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_WorldLine::~CDOTAUserMsg_WorldLine, operator delete
void __fastcall CUserMessagePB<497,CDOTAUserMsg_WorldLine,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<497,CDOTAUserMsg_WorldLine,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F2390;
  CDOTAUserMsg_WorldLine::~CDOTAUserMsg_WorldLine(this);
  operator delete(this);
}


// CUserMessagePB<499, CDOTAUserMsg_ItemAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025561e0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_ItemAlert::~CDOTAUserMsg_ItemAlert
void __fastcall CUserMessagePB<499,CDOTAUserMsg_ItemAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<499,CDOTAUserMsg_ItemAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F25D0;
  CDOTAUserMsg_ItemAlert::~CDOTAUserMsg_ItemAlert(this);
}


// CUserMessagePB<499, CDOTAUserMsg_ItemAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556200, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_ItemAlert::~CDOTAUserMsg_ItemAlert, operator delete
void __fastcall CUserMessagePB<499,CDOTAUserMsg_ItemAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<499,CDOTAUserMsg_ItemAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F25D0;
  CDOTAUserMsg_ItemAlert::~CDOTAUserMsg_ItemAlert(this);
  operator delete(this);
}


// CUserMessagePB<534, CDOTAUserMsg_EnemyItemAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025562d0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_EnemyItemAlert::~CDOTAUserMsg_EnemyItemAlert
void __fastcall CUserMessagePB<534,CDOTAUserMsg_EnemyItemAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<534,CDOTAUserMsg_EnemyItemAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F37D0;
  CDOTAUserMsg_EnemyItemAlert::~CDOTAUserMsg_EnemyItemAlert(this);
}


// CUserMessagePB<534, CDOTAUserMsg_EnemyItemAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025562f0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_EnemyItemAlert::~CDOTAUserMsg_EnemyItemAlert, operator delete
void __fastcall CUserMessagePB<534,CDOTAUserMsg_EnemyItemAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<534,CDOTAUserMsg_EnemyItemAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F37D0;
  CDOTAUserMsg_EnemyItemAlert::~CDOTAUserMsg_EnemyItemAlert(this);
  operator delete(this);
}


// CUserMessagePB<543, CDOTAUserMsg_ModifierAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025563c0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_ModifierAlert::~CDOTAUserMsg_ModifierAlert
void __fastcall CUserMessagePB<543,CDOTAUserMsg_ModifierAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<543,CDOTAUserMsg_ModifierAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F3E90;
  CDOTAUserMsg_ModifierAlert::~CDOTAUserMsg_ModifierAlert(this);
}


// CUserMessagePB<543, CDOTAUserMsg_ModifierAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025563e0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_ModifierAlert::~CDOTAUserMsg_ModifierAlert, operator delete
void __fastcall CUserMessagePB<543,CDOTAUserMsg_ModifierAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<543,CDOTAUserMsg_ModifierAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F3E90;
  CDOTAUserMsg_ModifierAlert::~CDOTAUserMsg_ModifierAlert(this);
  operator delete(this);
}


// CUserMessagePB<544, CDOTAUserMsg_HPManaAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556510, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_HPManaAlert::~CDOTAUserMsg_HPManaAlert
void __fastcall CUserMessagePB<544,CDOTAUserMsg_HPManaAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<544,CDOTAUserMsg_HPManaAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F40D0;
  CDOTAUserMsg_HPManaAlert::~CDOTAUserMsg_HPManaAlert(this);
}


// CUserMessagePB<544, CDOTAUserMsg_HPManaAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556530, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_HPManaAlert::~CDOTAUserMsg_HPManaAlert, operator delete
void __fastcall CUserMessagePB<544,CDOTAUserMsg_HPManaAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<544,CDOTAUserMsg_HPManaAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F40D0;
  CDOTAUserMsg_HPManaAlert::~CDOTAUserMsg_HPManaAlert(this);
  operator delete(this);
}


// CUserMessagePB<555, CDOTAUserMsg_XPAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556600, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_XPAlert::~CDOTAUserMsg_XPAlert
void __fastcall CUserMessagePB<555,CDOTAUserMsg_XPAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<555,CDOTAUserMsg_XPAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F49D0;
  CDOTAUserMsg_XPAlert::~CDOTAUserMsg_XPAlert(this);
}


// CUserMessagePB<555, CDOTAUserMsg_XPAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556620, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_XPAlert::~CDOTAUserMsg_XPAlert, operator delete
void __fastcall CUserMessagePB<555,CDOTAUserMsg_XPAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<555,CDOTAUserMsg_XPAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F49D0;
  CDOTAUserMsg_XPAlert::~CDOTAUserMsg_XPAlert(this);
  operator delete(this);
}


// CUserMessagePB<562, CDOTAUserMsg_KillcamDamageTaken, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025566f0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_KillcamDamageTaken::~CDOTAUserMsg_KillcamDamageTaken
void __fastcall CUserMessagePB<562,CDOTAUserMsg_KillcamDamageTaken,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<562,CDOTAUserMsg_KillcamDamageTaken,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F4E50;
  CDOTAUserMsg_KillcamDamageTaken::~CDOTAUserMsg_KillcamDamageTaken(this);
}


// CUserMessagePB<562, CDOTAUserMsg_KillcamDamageTaken, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556710, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_KillcamDamageTaken::~CDOTAUserMsg_KillcamDamageTaken, operator delete
void __fastcall CUserMessagePB<562,CDOTAUserMsg_KillcamDamageTaken,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<562,CDOTAUserMsg_KillcamDamageTaken,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F4E50;
  CDOTAUserMsg_KillcamDamageTaken::~CDOTAUserMsg_KillcamDamageTaken(this);
  operator delete(this);
}


// CUserMessagePB<545, CDOTAUserMsg_GlyphAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025567e0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_GlyphAlert::~CDOTAUserMsg_GlyphAlert
void __fastcall CUserMessagePB<545,CDOTAUserMsg_GlyphAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<545,CDOTAUserMsg_GlyphAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F4310;
  CDOTAUserMsg_GlyphAlert::~CDOTAUserMsg_GlyphAlert(this);
}


// CUserMessagePB<545, CDOTAUserMsg_GlyphAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556800, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_GlyphAlert::~CDOTAUserMsg_GlyphAlert, operator delete
void __fastcall CUserMessagePB<545,CDOTAUserMsg_GlyphAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<545,CDOTAUserMsg_GlyphAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F4310;
  CDOTAUserMsg_GlyphAlert::~CDOTAUserMsg_GlyphAlert(this);
  operator delete(this);
}


// CUserMessagePB<529, CDOTAUserMsg_WillPurchaseAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025568d0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_WillPurchaseAlert::~CDOTAUserMsg_WillPurchaseAlert
void __fastcall CUserMessagePB<529,CDOTAUserMsg_WillPurchaseAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<529,CDOTAUserMsg_WillPurchaseAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F3350;
  CDOTAUserMsg_WillPurchaseAlert::~CDOTAUserMsg_WillPurchaseAlert(this);
}


// CUserMessagePB<529, CDOTAUserMsg_WillPurchaseAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025568f0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_WillPurchaseAlert::~CDOTAUserMsg_WillPurchaseAlert, operator delete
void __fastcall CUserMessagePB<529,CDOTAUserMsg_WillPurchaseAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<529,CDOTAUserMsg_WillPurchaseAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F3350;
  CDOTAUserMsg_WillPurchaseAlert::~CDOTAUserMsg_WillPurchaseAlert(this);
  operator delete(this);
}


// CUserMessagePB<537, CDOTAUserMsg_BuyBackStateAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025569c0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_BuyBackStateAlert::~CDOTAUserMsg_BuyBackStateAlert
void __fastcall CUserMessagePB<537,CDOTAUserMsg_BuyBackStateAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<537,CDOTAUserMsg_BuyBackStateAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F3A10;
  CDOTAUserMsg_BuyBackStateAlert::~CDOTAUserMsg_BuyBackStateAlert(this);
}


// CUserMessagePB<537, CDOTAUserMsg_BuyBackStateAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025569e0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_BuyBackStateAlert::~CDOTAUserMsg_BuyBackStateAlert, operator delete
void __fastcall CUserMessagePB<537,CDOTAUserMsg_BuyBackStateAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<537,CDOTAUserMsg_BuyBackStateAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F3A10;
  CDOTAUserMsg_BuyBackStateAlert::~CDOTAUserMsg_BuyBackStateAlert(this);
  operator delete(this);
}


// CUserMessagePB<540, CDOTAUserMsg_QuickBuyAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556ab0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_QuickBuyAlert::~CDOTAUserMsg_QuickBuyAlert
void __fastcall CUserMessagePB<540,CDOTAUserMsg_QuickBuyAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<540,CDOTAUserMsg_QuickBuyAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F3C50;
  CDOTAUserMsg_QuickBuyAlert::~CDOTAUserMsg_QuickBuyAlert(this);
}


// CUserMessagePB<540, CDOTAUserMsg_QuickBuyAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556ad0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_QuickBuyAlert::~CDOTAUserMsg_QuickBuyAlert, operator delete
void __fastcall CUserMessagePB<540,CDOTAUserMsg_QuickBuyAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<540,CDOTAUserMsg_QuickBuyAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F3C50;
  CDOTAUserMsg_QuickBuyAlert::~CDOTAUserMsg_QuickBuyAlert(this);
  operator delete(this);
}


// CUserMessagePB<559, CDOTAUserMsg_QuestStatus, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556ba0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_QuestStatus::~CDOTAUserMsg_QuestStatus
void __fastcall CUserMessagePB<559,CDOTAUserMsg_QuestStatus,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<559,CDOTAUserMsg_QuestStatus,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F4C10;
  CDOTAUserMsg_QuestStatus::~CDOTAUserMsg_QuestStatus(this);
}


// CUserMessagePB<559, CDOTAUserMsg_QuestStatus, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556bc0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_QuestStatus::~CDOTAUserMsg_QuestStatus, operator delete
void __fastcall CUserMessagePB<559,CDOTAUserMsg_QuestStatus,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<559,CDOTAUserMsg_QuestStatus,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F4C10;
  CDOTAUserMsg_QuestStatus::~CDOTAUserMsg_QuestStatus(this);
  operator delete(this);
}


// CUserMessagePB<510, CDOTAUserMsg_SendStatPopup, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556c90, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_SendStatPopup::~CDOTAUserMsg_SendStatPopup
void __fastcall CUserMessagePB<510,CDOTAUserMsg_SendStatPopup,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<510,CDOTAUserMsg_SendStatPopup,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F2C90;
  CDOTAUserMsg_SendStatPopup::~CDOTAUserMsg_SendStatPopup(this);
}


// CUserMessagePB<510, CDOTAUserMsg_SendStatPopup, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556cb0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_SendStatPopup::~CDOTAUserMsg_SendStatPopup, operator delete
void __fastcall CUserMessagePB<510,CDOTAUserMsg_SendStatPopup,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<510,CDOTAUserMsg_SendStatPopup,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F2C90;
  CDOTAUserMsg_SendStatPopup::~CDOTAUserMsg_SendStatPopup(this);
  operator delete(this);
}


// CUserMessagePB<477, CDOTAUserMsg_LocationPing, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556d80, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_LocationPing::~CDOTAUserMsg_LocationPing
void __fastcall CUserMessagePB<477,CDOTAUserMsg_LocationPing,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<477,CDOTAUserMsg_LocationPing,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F1A90;
  CDOTAUserMsg_LocationPing::~CDOTAUserMsg_LocationPing(this);
}


// CUserMessagePB<477, CDOTAUserMsg_LocationPing, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556da0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_LocationPing::~CDOTAUserMsg_LocationPing, operator delete
void __fastcall CUserMessagePB<477,CDOTAUserMsg_LocationPing,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<477,CDOTAUserMsg_LocationPing,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F1A90;
  CDOTAUserMsg_LocationPing::~CDOTAUserMsg_LocationPing(this);
  operator delete(this);
}


// CUserMessagePB<564, CDOTAUserMsg_RollDiceResult, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556e70, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_RollDiceResult::~CDOTAUserMsg_RollDiceResult
void __fastcall CUserMessagePB<564,CDOTAUserMsg_RollDiceResult,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<564,CDOTAUserMsg_RollDiceResult,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F52D0;
  CDOTAUserMsg_RollDiceResult::~CDOTAUserMsg_RollDiceResult(this);
}


// CUserMessagePB<564, CDOTAUserMsg_RollDiceResult, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556e90, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_RollDiceResult::~CDOTAUserMsg_RollDiceResult, operator delete
void __fastcall CUserMessagePB<564,CDOTAUserMsg_RollDiceResult,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<564,CDOTAUserMsg_RollDiceResult,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F52D0;
  CDOTAUserMsg_RollDiceResult::~CDOTAUserMsg_RollDiceResult(this);
  operator delete(this);
}


// CUserMessagePB<565, CDOTAUserMsg_FlipCoinResult, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556f60, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_FlipCoinResult::~CDOTAUserMsg_FlipCoinResult
void __fastcall CUserMessagePB<565,CDOTAUserMsg_FlipCoinResult,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<565,CDOTAUserMsg_FlipCoinResult,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F5510;
  CDOTAUserMsg_FlipCoinResult::~CDOTAUserMsg_FlipCoinResult(this);
}


// CUserMessagePB<565, CDOTAUserMsg_FlipCoinResult, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002556f80, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_FlipCoinResult::~CDOTAUserMsg_FlipCoinResult, operator delete
void __fastcall CUserMessagePB<565,CDOTAUserMsg_FlipCoinResult,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<565,CDOTAUserMsg_FlipCoinResult,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F5510;
  CDOTAUserMsg_FlipCoinResult::~CDOTAUserMsg_FlipCoinResult(this);
  operator delete(this);
}


// CUserMessagePB<496, CDOTAUserMsg_SwapVerify, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557050, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_SwapVerify::~CDOTAUserMsg_SwapVerify
void __fastcall CUserMessagePB<496,CDOTAUserMsg_SwapVerify,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<496,CDOTAUserMsg_SwapVerify,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F2150;
  CDOTAUserMsg_SwapVerify::~CDOTAUserMsg_SwapVerify(this);
}


// CUserMessagePB<496, CDOTAUserMsg_SwapVerify, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557070, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_SwapVerify::~CDOTAUserMsg_SwapVerify, operator delete
void __fastcall CUserMessagePB<496,CDOTAUserMsg_SwapVerify,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<496,CDOTAUserMsg_SwapVerify,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F2150;
  CDOTAUserMsg_SwapVerify::~CDOTAUserMsg_SwapVerify(this);
  operator delete(this);
}


// CUserMessagePB<480, CDOTAUserMsg_MinimapDebugPoint, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557140, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_MinimapDebugPoint::~CDOTAUserMsg_MinimapDebugPoint
void __fastcall CUserMessagePB<480,CDOTAUserMsg_MinimapDebugPoint,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<480,CDOTAUserMsg_MinimapDebugPoint,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F1F10;
  CDOTAUserMsg_MinimapDebugPoint::~CDOTAUserMsg_MinimapDebugPoint(this);
}


// CUserMessagePB<480, CDOTAUserMsg_MinimapDebugPoint, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557160, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_MinimapDebugPoint::~CDOTAUserMsg_MinimapDebugPoint, operator delete
void __fastcall CUserMessagePB<480,CDOTAUserMsg_MinimapDebugPoint,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<480,CDOTAUserMsg_MinimapDebugPoint,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F1F10;
  CDOTAUserMsg_MinimapDebugPoint::~CDOTAUserMsg_MinimapDebugPoint(this);
  operator delete(this);
}


// CUserMessagePB<506, CDOTAUserMsg_GamerulesStateChanged, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557230, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_GamerulesStateChanged::~CDOTAUserMsg_GamerulesStateChanged
void __fastcall CUserMessagePB<506,CDOTAUserMsg_GamerulesStateChanged,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<506,CDOTAUserMsg_GamerulesStateChanged,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F2810;
  CDOTAUserMsg_GamerulesStateChanged::~CDOTAUserMsg_GamerulesStateChanged(this);
}


// CUserMessagePB<506, CDOTAUserMsg_GamerulesStateChanged, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557250, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_GamerulesStateChanged::~CDOTAUserMsg_GamerulesStateChanged, operator delete
void __fastcall CUserMessagePB<506,CDOTAUserMsg_GamerulesStateChanged,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<506,CDOTAUserMsg_GamerulesStateChanged,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F2810;
  CDOTAUserMsg_GamerulesStateChanged::~CDOTAUserMsg_GamerulesStateChanged(this);
  operator delete(this);
}


// CUserMessagePB<563, CDOTAUserMsg_SelectPenaltyGold, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557320, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_SelectPenaltyGold::~CDOTAUserMsg_SelectPenaltyGold
void __fastcall CUserMessagePB<563,CDOTAUserMsg_SelectPenaltyGold,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<563,CDOTAUserMsg_SelectPenaltyGold,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F5090;
  CDOTAUserMsg_SelectPenaltyGold::~CDOTAUserMsg_SelectPenaltyGold(this);
}


// CUserMessagePB<563, CDOTAUserMsg_SelectPenaltyGold, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557340, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_SelectPenaltyGold::~CDOTAUserMsg_SelectPenaltyGold, operator delete
void __fastcall CUserMessagePB<563,CDOTAUserMsg_SelectPenaltyGold,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<563,CDOTAUserMsg_SelectPenaltyGold,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F5090;
  CDOTAUserMsg_SelectPenaltyGold::~CDOTAUserMsg_SelectPenaltyGold(this);
  operator delete(this);
}


// CUserMessagePB<507, CDOTAUserMsg_ShowSurvey, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557410, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_ShowSurvey::~CDOTAUserMsg_ShowSurvey
void __fastcall CUserMessagePB<507,CDOTAUserMsg_ShowSurvey,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<507,CDOTAUserMsg_ShowSurvey,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F2A50;
  CDOTAUserMsg_ShowSurvey::~CDOTAUserMsg_ShowSurvey(this);
}


// CUserMessagePB<507, CDOTAUserMsg_ShowSurvey, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557430, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_ShowSurvey::~CDOTAUserMsg_ShowSurvey, operator delete
void __fastcall CUserMessagePB<507,CDOTAUserMsg_ShowSurvey,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<507,CDOTAUserMsg_ShowSurvey,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F2A50;
  CDOTAUserMsg_ShowSurvey::~CDOTAUserMsg_ShowSurvey(this);
  operator delete(this);
}


// CUserMessagePB<531, CDOTAUserMsg_PlayerMMR, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557500, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_PlayerMMR::~CDOTAUserMsg_PlayerMMR
void __fastcall CUserMessagePB<531,CDOTAUserMsg_PlayerMMR,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<531,CDOTAUserMsg_PlayerMMR,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F3590;
  CDOTAUserMsg_PlayerMMR::~CDOTAUserMsg_PlayerMMR(this);
}


// CUserMessagePB<531, CDOTAUserMsg_PlayerMMR, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557520, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_PlayerMMR::~CDOTAUserMsg_PlayerMMR, operator delete
void __fastcall CUserMessagePB<531,CDOTAUserMsg_PlayerMMR,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<531,CDOTAUserMsg_PlayerMMR,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F3590;
  CDOTAUserMsg_PlayerMMR::~CDOTAUserMsg_PlayerMMR(this);
  operator delete(this);
}


// CUserMessagePB<528, CDOTAUserMsg_BoosterState, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557630, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_BoosterState::~CDOTAUserMsg_BoosterState
void __fastcall CUserMessagePB<528,CDOTAUserMsg_BoosterState,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<528,CDOTAUserMsg_BoosterState,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F3110;
  CDOTAUserMsg_BoosterState::~CDOTAUserMsg_BoosterState(this);
}


// CUserMessagePB<528, CDOTAUserMsg_BoosterState, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557650, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_BoosterState::~CDOTAUserMsg_BoosterState, operator delete
void __fastcall CUserMessagePB<528,CDOTAUserMsg_BoosterState,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<528,CDOTAUserMsg_BoosterState,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F3110;
  CDOTAUserMsg_BoosterState::~CDOTAUserMsg_BoosterState(this);
  operator delete(this);
}


// CUserMessagePB<515, CDOTAUserMsg_CustomMsg, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557720, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_CustomMsg::~CDOTAUserMsg_CustomMsg
void __fastcall CUserMessagePB<515,CDOTAUserMsg_CustomMsg,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<515,CDOTAUserMsg_CustomMsg,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F2ED0;
  CDOTAUserMsg_CustomMsg::~CDOTAUserMsg_CustomMsg(this);
}


// CUserMessagePB<515, CDOTAUserMsg_CustomMsg, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557740, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_CustomMsg::~CDOTAUserMsg_CustomMsg, operator delete
void __fastcall CUserMessagePB<515,CDOTAUserMsg_CustomMsg,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<515,CDOTAUserMsg_CustomMsg,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F2ED0;
  CDOTAUserMsg_CustomMsg::~CDOTAUserMsg_CustomMsg(this);
  operator delete(this);
}


// CUserMessagePB<552, CDOTAUserMsg_ProjectionAbility, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557810, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_ProjectionAbility::~CDOTAUserMsg_ProjectionAbility
void __fastcall CUserMessagePB<552,CDOTAUserMsg_ProjectionAbility,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<552,CDOTAUserMsg_ProjectionAbility,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F4550;
  CDOTAUserMsg_ProjectionAbility::~CDOTAUserMsg_ProjectionAbility(this);
}


// CUserMessagePB<552, CDOTAUserMsg_ProjectionAbility, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557830, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_ProjectionAbility::~CDOTAUserMsg_ProjectionAbility, operator delete
void __fastcall CUserMessagePB<552,CDOTAUserMsg_ProjectionAbility,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<552,CDOTAUserMsg_ProjectionAbility,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F4550;
  CDOTAUserMsg_ProjectionAbility::~CDOTAUserMsg_ProjectionAbility(this);
  operator delete(this);
}


// CUserMessagePB<553, CDOTAUserMsg_ProjectionEvent, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557900, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_ProjectionEvent::~CDOTAUserMsg_ProjectionEvent
void __fastcall CUserMessagePB<553,CDOTAUserMsg_ProjectionEvent,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<553,CDOTAUserMsg_ProjectionEvent,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F4790;
  CDOTAUserMsg_ProjectionEvent::~CDOTAUserMsg_ProjectionEvent(this);
}


// CUserMessagePB<553, CDOTAUserMsg_ProjectionEvent, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002557920, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_ProjectionEvent::~CDOTAUserMsg_ProjectionEvent, operator delete
void __fastcall CUserMessagePB<553,CDOTAUserMsg_ProjectionEvent,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<553,CDOTAUserMsg_ProjectionEvent,(NetChannelBufType_t)1> *const this)
{
  *this = &off_40F4790;
  CDOTAUserMsg_ProjectionEvent::~CDOTAUserMsg_ProjectionEvent(this);
  operator delete(this);
}


// CUserMessagePB<556, CDOTAUserMsg_UpdateQuestProgress, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025c7b90, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_UpdateQuestProgress::~CDOTAUserMsg_UpdateQuestProgress
void __fastcall CUserMessagePB<556,CDOTAUserMsg_UpdateQuestProgress,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<556,CDOTAUserMsg_UpdateQuestProgress,(NetChannelBufType_t)1> *const this)
{
  *this = &off_41007B0;
  CDOTAUserMsg_UpdateQuestProgress::~CDOTAUserMsg_UpdateQuestProgress(this);
}


// CUserMessagePB<556, CDOTAUserMsg_UpdateQuestProgress, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025c7bb0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_UpdateQuestProgress::~CDOTAUserMsg_UpdateQuestProgress, operator delete
void __fastcall CUserMessagePB<556,CDOTAUserMsg_UpdateQuestProgress,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<556,CDOTAUserMsg_UpdateQuestProgress,(NetChannelBufType_t)1> *const this)
{
  *this = &off_41007B0;
  CDOTAUserMsg_UpdateQuestProgress::~CDOTAUserMsg_UpdateQuestProgress(this);
  operator delete(this);
}


// CUserMessagePB<492, CDOTAUserMsg_ItemPurchased, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025c7cc0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_ItemPurchased::~CDOTAUserMsg_ItemPurchased
void __fastcall CUserMessagePB<492,CDOTAUserMsg_ItemPurchased,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<492,CDOTAUserMsg_ItemPurchased,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4100570;
  CDOTAUserMsg_ItemPurchased::~CDOTAUserMsg_ItemPurchased(this);
}


// CUserMessagePB<492, CDOTAUserMsg_ItemPurchased, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000025c7ce0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_ItemPurchased::~CDOTAUserMsg_ItemPurchased, operator delete
void __fastcall CUserMessagePB<492,CDOTAUserMsg_ItemPurchased,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<492,CDOTAUserMsg_ItemPurchased,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4100570;
  CDOTAUserMsg_ItemPurchased::~CDOTAUserMsg_ItemPurchased(this);
  operator delete(this);
}


// CUserMessagePB<489, CDOTAUserMsg_ParticleManager, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a0bf0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager
void __fastcall CUserMessagePB<489,CDOTAUserMsg_ParticleManager,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<489,CDOTAUserMsg_ParticleManager,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416C590;
  CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(this);
}


// CUserMessagePB<489, CDOTAUserMsg_ParticleManager, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a0c10, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager, operator delete
void __fastcall CUserMessagePB<489,CDOTAUserMsg_ParticleManager,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<489,CDOTAUserMsg_ParticleManager,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416C590;
  CDOTAUserMsg_ParticleManager::~CDOTAUserMsg_ParticleManager(this);
  operator delete(this);
}


// CUserMessagePB<547, CDOTAUserMsg_SpectatorPlayerUnitOrders, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a0d30, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_SpectatorPlayerUnitOrders::~CDOTAUserMsg_SpectatorPlayerUnitOrders
void __fastcall CUserMessagePB<547,CDOTAUserMsg_SpectatorPlayerUnitOrders,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<547,CDOTAUserMsg_SpectatorPlayerUnitOrders,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416D310;
  CDOTAUserMsg_SpectatorPlayerUnitOrders::~CDOTAUserMsg_SpectatorPlayerUnitOrders(this);
}


// CUserMessagePB<547, CDOTAUserMsg_SpectatorPlayerUnitOrders, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a0d50, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_SpectatorPlayerUnitOrders::~CDOTAUserMsg_SpectatorPlayerUnitOrders, operator delete
void __fastcall CUserMessagePB<547,CDOTAUserMsg_SpectatorPlayerUnitOrders,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<547,CDOTAUserMsg_SpectatorPlayerUnitOrders,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416D310;
  CDOTAUserMsg_SpectatorPlayerUnitOrders::~CDOTAUserMsg_SpectatorPlayerUnitOrders(this);
  operator delete(this);
}


// CUserMessagePB<486, CDOTAUserMsg_SpectatorPlayerClick, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a0e20, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_SpectatorPlayerClick::~CDOTAUserMsg_SpectatorPlayerClick
void __fastcall CUserMessagePB<486,CDOTAUserMsg_SpectatorPlayerClick,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<486,CDOTAUserMsg_SpectatorPlayerClick,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416C350;
  CDOTAUserMsg_SpectatorPlayerClick::~CDOTAUserMsg_SpectatorPlayerClick(this);
}


// CUserMessagePB<486, CDOTAUserMsg_SpectatorPlayerClick, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a0e40, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_SpectatorPlayerClick::~CDOTAUserMsg_SpectatorPlayerClick, operator delete
void __fastcall CUserMessagePB<486,CDOTAUserMsg_SpectatorPlayerClick,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<486,CDOTAUserMsg_SpectatorPlayerClick,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416C350;
  CDOTAUserMsg_SpectatorPlayerClick::~CDOTAUserMsg_SpectatorPlayerClick(this);
  operator delete(this);
}


// CUserMessagePB<560, CDOTAUserMsg_SuggestHeroPick, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a0f10, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_SuggestHeroPick::~CDOTAUserMsg_SuggestHeroPick
void __fastcall CUserMessagePB<560,CDOTAUserMsg_SuggestHeroPick,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<560,CDOTAUserMsg_SuggestHeroPick,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416D550;
  CDOTAUserMsg_SuggestHeroPick::~CDOTAUserMsg_SuggestHeroPick(this);
}


// CUserMessagePB<560, CDOTAUserMsg_SuggestHeroPick, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a0f30, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_SuggestHeroPick::~CDOTAUserMsg_SuggestHeroPick, operator delete
void __fastcall CUserMessagePB<560,CDOTAUserMsg_SuggestHeroPick,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<560,CDOTAUserMsg_SuggestHeroPick,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416D550;
  CDOTAUserMsg_SuggestHeroPick::~CDOTAUserMsg_SuggestHeroPick(this);
  operator delete(this);
}


// CUserMessagePB<561, CDOTAUserMsg_SuggestHeroRole, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1000, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_SuggestHeroRole::~CDOTAUserMsg_SuggestHeroRole
void __fastcall CUserMessagePB<561,CDOTAUserMsg_SuggestHeroRole,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<561,CDOTAUserMsg_SuggestHeroRole,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416D790;
  CDOTAUserMsg_SuggestHeroRole::~CDOTAUserMsg_SuggestHeroRole(this);
}


// CUserMessagePB<561, CDOTAUserMsg_SuggestHeroRole, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1020, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_SuggestHeroRole::~CDOTAUserMsg_SuggestHeroRole, operator delete
void __fastcall CUserMessagePB<561,CDOTAUserMsg_SuggestHeroRole,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<561,CDOTAUserMsg_SuggestHeroRole,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416D790;
  CDOTAUserMsg_SuggestHeroRole::~CDOTAUserMsg_SuggestHeroRole(this);
  operator delete(this);
}


// CUserMessagePB<501, CDOTAUserMsg_ChatWheel, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1170, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_ChatWheel::~CDOTAUserMsg_ChatWheel
void __fastcall CUserMessagePB<501,CDOTAUserMsg_ChatWheel,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<501,CDOTAUserMsg_ChatWheel,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416C7D0;
  CDOTAUserMsg_ChatWheel::~CDOTAUserMsg_ChatWheel(this);
}


// CUserMessagePB<501, CDOTAUserMsg_ChatWheel, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1190, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_ChatWheel::~CDOTAUserMsg_ChatWheel, operator delete
void __fastcall CUserMessagePB<501,CDOTAUserMsg_ChatWheel,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<501,CDOTAUserMsg_ChatWheel,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416C7D0;
  CDOTAUserMsg_ChatWheel::~CDOTAUserMsg_ChatWheel(this);
  operator delete(this);
}


// CUserMessagePB<476, CDOTAUserMsg_InvalidCommand, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1260, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_InvalidCommand::~CDOTAUserMsg_InvalidCommand
void __fastcall CUserMessagePB<476,CDOTAUserMsg_InvalidCommand,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<476,CDOTAUserMsg_InvalidCommand,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416C110;
  CDOTAUserMsg_InvalidCommand::~CDOTAUserMsg_InvalidCommand(this);
}


// CUserMessagePB<476, CDOTAUserMsg_InvalidCommand, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1280, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_InvalidCommand::~CDOTAUserMsg_InvalidCommand, operator delete
void __fastcall CUserMessagePB<476,CDOTAUserMsg_InvalidCommand,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<476,CDOTAUserMsg_InvalidCommand,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416C110;
  CDOTAUserMsg_InvalidCommand::~CDOTAUserMsg_InvalidCommand(this);
  operator delete(this);
}


// CUserMessagePB<519, CDOTAUserMsg_TE_ProjectileLoc, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a14a0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_TE_ProjectileLoc::~CDOTAUserMsg_TE_ProjectileLoc
void __fastcall CUserMessagePB<519,CDOTAUserMsg_TE_ProjectileLoc,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<519,CDOTAUserMsg_TE_ProjectileLoc,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416D0D0;
  CDOTAUserMsg_TE_ProjectileLoc::~CDOTAUserMsg_TE_ProjectileLoc(this);
}


// CUserMessagePB<519, CDOTAUserMsg_TE_ProjectileLoc, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a14c0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_TE_ProjectileLoc::~CDOTAUserMsg_TE_ProjectileLoc, operator delete
void __fastcall CUserMessagePB<519,CDOTAUserMsg_TE_ProjectileLoc,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<519,CDOTAUserMsg_TE_ProjectileLoc,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416D0D0;
  CDOTAUserMsg_TE_ProjectileLoc::~CDOTAUserMsg_TE_ProjectileLoc(this);
  operator delete(this);
}


// CUserMessagePB<518, CDOTAUserMsg_TE_Projectile, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1590, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_TE_Projectile::~CDOTAUserMsg_TE_Projectile
void __fastcall CUserMessagePB<518,CDOTAUserMsg_TE_Projectile,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<518,CDOTAUserMsg_TE_Projectile,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416CE90;
  CDOTAUserMsg_TE_Projectile::~CDOTAUserMsg_TE_Projectile(this);
}


// CUserMessagePB<518, CDOTAUserMsg_TE_Projectile, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a15b0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_TE_Projectile::~CDOTAUserMsg_TE_Projectile, operator delete
void __fastcall CUserMessagePB<518,CDOTAUserMsg_TE_Projectile,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<518,CDOTAUserMsg_TE_Projectile,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416CE90;
  CDOTAUserMsg_TE_Projectile::~CDOTAUserMsg_TE_Projectile(this);
  operator delete(this);
}


// CUserMessagePB<473, CDOTAUserMsg_DodgeTrackingProjectiles, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1680, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_DodgeTrackingProjectiles::~CDOTAUserMsg_DodgeTrackingProjectiles
void __fastcall CUserMessagePB<473,CDOTAUserMsg_DodgeTrackingProjectiles,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<473,CDOTAUserMsg_DodgeTrackingProjectiles,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416BA50;
  CDOTAUserMsg_DodgeTrackingProjectiles::~CDOTAUserMsg_DodgeTrackingProjectiles(this);
}


// CUserMessagePB<473, CDOTAUserMsg_DodgeTrackingProjectiles, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a16a0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_DodgeTrackingProjectiles::~CDOTAUserMsg_DodgeTrackingProjectiles, operator delete
void __fastcall CUserMessagePB<473,CDOTAUserMsg_DodgeTrackingProjectiles,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<473,CDOTAUserMsg_DodgeTrackingProjectiles,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416BA50;
  CDOTAUserMsg_DodgeTrackingProjectiles::~CDOTAUserMsg_DodgeTrackingProjectiles(this);
  operator delete(this);
}


// CUserMessagePB<471, CDOTAUserMsg_CreateLinearProjectile, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1770, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_CreateLinearProjectile::~CDOTAUserMsg_CreateLinearProjectile
void __fastcall CUserMessagePB<471,CDOTAUserMsg_CreateLinearProjectile,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<471,CDOTAUserMsg_CreateLinearProjectile,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416B5D0;
  CDOTAUserMsg_CreateLinearProjectile::~CDOTAUserMsg_CreateLinearProjectile(this);
}


// CUserMessagePB<471, CDOTAUserMsg_CreateLinearProjectile, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1790, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_CreateLinearProjectile::~CDOTAUserMsg_CreateLinearProjectile, operator delete
void __fastcall CUserMessagePB<471,CDOTAUserMsg_CreateLinearProjectile,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<471,CDOTAUserMsg_CreateLinearProjectile,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416B5D0;
  CDOTAUserMsg_CreateLinearProjectile::~CDOTAUserMsg_CreateLinearProjectile(this);
  operator delete(this);
}


// CUserMessagePB<472, CDOTAUserMsg_DestroyLinearProjectile, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1860, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_DestroyLinearProjectile::~CDOTAUserMsg_DestroyLinearProjectile
void __fastcall CUserMessagePB<472,CDOTAUserMsg_DestroyLinearProjectile,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<472,CDOTAUserMsg_DestroyLinearProjectile,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416B810;
  CDOTAUserMsg_DestroyLinearProjectile::~CDOTAUserMsg_DestroyLinearProjectile(this);
}


// CUserMessagePB<472, CDOTAUserMsg_DestroyLinearProjectile, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1880, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_DestroyLinearProjectile::~CDOTAUserMsg_DestroyLinearProjectile, operator delete
void __fastcall CUserMessagePB<472,CDOTAUserMsg_DestroyLinearProjectile,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<472,CDOTAUserMsg_DestroyLinearProjectile,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416B810;
  CDOTAUserMsg_DestroyLinearProjectile::~CDOTAUserMsg_DestroyLinearProjectile(this);
  operator delete(this);
}


// CUserMessagePB<511, CDOTAUserMsg_TutorialFinish, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1950, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_TutorialFinish::~CDOTAUserMsg_TutorialFinish
void __fastcall CUserMessagePB<511,CDOTAUserMsg_TutorialFinish,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<511,CDOTAUserMsg_TutorialFinish,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416CC50;
  CDOTAUserMsg_TutorialFinish::~CDOTAUserMsg_TutorialFinish(this);
}


// CUserMessagePB<511, CDOTAUserMsg_TutorialFinish, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1970, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_TutorialFinish::~CDOTAUserMsg_TutorialFinish, operator delete
void __fastcall CUserMessagePB<511,CDOTAUserMsg_TutorialFinish,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<511,CDOTAUserMsg_TutorialFinish,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416CC50;
  CDOTAUserMsg_TutorialFinish::~CDOTAUserMsg_TutorialFinish(this);
  operator delete(this);
}


// CUserMessagePB<508, CDOTAUserMsg_TutorialFade, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1a40, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_TutorialFade::~CDOTAUserMsg_TutorialFade
void __fastcall CUserMessagePB<508,CDOTAUserMsg_TutorialFade,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<508,CDOTAUserMsg_TutorialFade,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416CA10;
  CDOTAUserMsg_TutorialFade::~CDOTAUserMsg_TutorialFade(this);
}


// CUserMessagePB<508, CDOTAUserMsg_TutorialFade, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1a60, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_TutorialFade::~CDOTAUserMsg_TutorialFade, operator delete
void __fastcall CUserMessagePB<508,CDOTAUserMsg_TutorialFade,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<508,CDOTAUserMsg_TutorialFade,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416CA10;
  CDOTAUserMsg_TutorialFade::~CDOTAUserMsg_TutorialFade(this);
  operator delete(this);
}


// CUserMessagePB<474, CDOTAUserMsg_GlobalLightColor, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1b30, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_GlobalLightColor::~CDOTAUserMsg_GlobalLightColor
void __fastcall CUserMessagePB<474,CDOTAUserMsg_GlobalLightColor,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<474,CDOTAUserMsg_GlobalLightColor,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416BC90;
  CDOTAUserMsg_GlobalLightColor::~CDOTAUserMsg_GlobalLightColor(this);
}


// CUserMessagePB<474, CDOTAUserMsg_GlobalLightColor, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1b50, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_GlobalLightColor::~CDOTAUserMsg_GlobalLightColor, operator delete
void __fastcall CUserMessagePB<474,CDOTAUserMsg_GlobalLightColor,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<474,CDOTAUserMsg_GlobalLightColor,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416BC90;
  CDOTAUserMsg_GlobalLightColor::~CDOTAUserMsg_GlobalLightColor(this);
  operator delete(this);
}


// CUserMessagePB<475, CDOTAUserMsg_GlobalLightDirection, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1c20, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_GlobalLightDirection::~CDOTAUserMsg_GlobalLightDirection
void __fastcall CUserMessagePB<475,CDOTAUserMsg_GlobalLightDirection,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<475,CDOTAUserMsg_GlobalLightDirection,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416BED0;
  CDOTAUserMsg_GlobalLightDirection::~CDOTAUserMsg_GlobalLightDirection(this);
}


// CUserMessagePB<475, CDOTAUserMsg_GlobalLightDirection, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000026a1c40, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_GlobalLightDirection::~CDOTAUserMsg_GlobalLightDirection, operator delete
void __fastcall CUserMessagePB<475,CDOTAUserMsg_GlobalLightDirection,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<475,CDOTAUserMsg_GlobalLightDirection,(NetChannelBufType_t)1> *const this)
{
  *this = &off_416BED0;
  CDOTAUserMsg_GlobalLightDirection::~CDOTAUserMsg_GlobalLightDirection(this);
  operator delete(this);
}


// CUserMessagePB<488, CDOTAUserMsg_UnitEvent, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000273bd90, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent
void __fastcall CUserMessagePB<488,CDOTAUserMsg_UnitEvent,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<488,CDOTAUserMsg_UnitEvent,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4186250;
  CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent(this);
}


// CUserMessagePB<488, CDOTAUserMsg_UnitEvent, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000273bdb0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent, operator delete
void __fastcall CUserMessagePB<488,CDOTAUserMsg_UnitEvent,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<488,CDOTAUserMsg_UnitEvent,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4186250;
  CDOTAUserMsg_UnitEvent::~CDOTAUserMsg_UnitEvent(this);
  operator delete(this);
}


// CUserMessagePB<538, CDOTAUserMsg_SpeechBubble, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000273be80, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_SpeechBubble::~CDOTAUserMsg_SpeechBubble
void __fastcall CUserMessagePB<538,CDOTAUserMsg_SpeechBubble,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<538,CDOTAUserMsg_SpeechBubble,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4186D90;
  CDOTAUserMsg_SpeechBubble::~CDOTAUserMsg_SpeechBubble(this);
}


// CUserMessagePB<538, CDOTAUserMsg_SpeechBubble, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000273bea0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_SpeechBubble::~CDOTAUserMsg_SpeechBubble, operator delete
void __fastcall CUserMessagePB<538,CDOTAUserMsg_SpeechBubble,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<538,CDOTAUserMsg_SpeechBubble,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4186D90;
  CDOTAUserMsg_SpeechBubble::~CDOTAUserMsg_SpeechBubble(this);
  operator delete(this);
}


// CUserMessagePB<504, CDOTAUserMsg_TutorialRequestExp, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000273bfb0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_TutorialRequestExp::~CDOTAUserMsg_TutorialRequestExp
void __fastcall CUserMessagePB<504,CDOTAUserMsg_TutorialRequestExp,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<504,CDOTAUserMsg_TutorialRequestExp,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4186490;
  CDOTAUserMsg_TutorialRequestExp::~CDOTAUserMsg_TutorialRequestExp(this);
}


// CUserMessagePB<504, CDOTAUserMsg_TutorialRequestExp, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000273bfd0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_TutorialRequestExp::~CDOTAUserMsg_TutorialRequestExp, operator delete
void __fastcall CUserMessagePB<504,CDOTAUserMsg_TutorialRequestExp,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<504,CDOTAUserMsg_TutorialRequestExp,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4186490;
  CDOTAUserMsg_TutorialRequestExp::~CDOTAUserMsg_TutorialRequestExp(this);
  operator delete(this);
}


// CUserMessagePB<513, CDOTAUserMsg_SendGenericToolTip, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000273c0a0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_SendGenericToolTip::~CDOTAUserMsg_SendGenericToolTip
void __fastcall CUserMessagePB<513,CDOTAUserMsg_SendGenericToolTip,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<513,CDOTAUserMsg_SendGenericToolTip,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4186B50;
  CDOTAUserMsg_SendGenericToolTip::~CDOTAUserMsg_SendGenericToolTip(this);
}


// CUserMessagePB<513, CDOTAUserMsg_SendGenericToolTip, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000273c0c0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_SendGenericToolTip::~CDOTAUserMsg_SendGenericToolTip, operator delete
void __fastcall CUserMessagePB<513,CDOTAUserMsg_SendGenericToolTip,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<513,CDOTAUserMsg_SendGenericToolTip,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4186B50;
  CDOTAUserMsg_SendGenericToolTip::~CDOTAUserMsg_SendGenericToolTip(this);
  operator delete(this);
}


// CUserMessagePB<505, CDOTAUserMsg_TutorialPingMinimap, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000273c190, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_TutorialPingMinimap::~CDOTAUserMsg_TutorialPingMinimap
void __fastcall CUserMessagePB<505,CDOTAUserMsg_TutorialPingMinimap,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<505,CDOTAUserMsg_TutorialPingMinimap,(NetChannelBufType_t)1> *const this)
{
  *this = &off_41866D0;
  CDOTAUserMsg_TutorialPingMinimap::~CDOTAUserMsg_TutorialPingMinimap(this);
}


// CUserMessagePB<505, CDOTAUserMsg_TutorialPingMinimap, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000273c1b0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_TutorialPingMinimap::~CDOTAUserMsg_TutorialPingMinimap, operator delete
void __fastcall CUserMessagePB<505,CDOTAUserMsg_TutorialPingMinimap,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<505,CDOTAUserMsg_TutorialPingMinimap,(NetChannelBufType_t)1> *const this)
{
  *this = &off_41866D0;
  CDOTAUserMsg_TutorialPingMinimap::~CDOTAUserMsg_TutorialPingMinimap(this);
  operator delete(this);
}


// CUserMessagePB<509, CDOTAUserMsg_AddQuestLogEntry, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000273c280, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_AddQuestLogEntry::~CDOTAUserMsg_AddQuestLogEntry
void __fastcall CUserMessagePB<509,CDOTAUserMsg_AddQuestLogEntry,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<509,CDOTAUserMsg_AddQuestLogEntry,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4186910;
  CDOTAUserMsg_AddQuestLogEntry::~CDOTAUserMsg_AddQuestLogEntry(this);
}


// CUserMessagePB<509, CDOTAUserMsg_AddQuestLogEntry, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000273c2a0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_AddQuestLogEntry::~CDOTAUserMsg_AddQuestLogEntry, operator delete
void __fastcall CUserMessagePB<509,CDOTAUserMsg_AddQuestLogEntry,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<509,CDOTAUserMsg_AddQuestLogEntry,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4186910;
  CDOTAUserMsg_AddQuestLogEntry::~CDOTAUserMsg_AddQuestLogEntry(this);
  operator delete(this);
}


// CUserMessagePB<485, CDOTAUserMsg_SharedCooldown, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027cfa30, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_SharedCooldown::~CDOTAUserMsg_SharedCooldown
void __fastcall CUserMessagePB<485,CDOTAUserMsg_SharedCooldown,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<485,CDOTAUserMsg_SharedCooldown,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B1870;
  CDOTAUserMsg_SharedCooldown::~CDOTAUserMsg_SharedCooldown(this);
}


// CUserMessagePB<485, CDOTAUserMsg_SharedCooldown, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027cfa50, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_SharedCooldown::~CDOTAUserMsg_SharedCooldown, operator delete
void __fastcall CUserMessagePB<485,CDOTAUserMsg_SharedCooldown,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<485,CDOTAUserMsg_SharedCooldown,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B1870;
  CDOTAUserMsg_SharedCooldown::~CDOTAUserMsg_SharedCooldown(this);
  operator delete(this);
}


// CUserMessagePB<484, CDOTAUserMsg_SetNextAutobuyItem, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027cfb20, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_SetNextAutobuyItem::~CDOTAUserMsg_SetNextAutobuyItem
void __fastcall CUserMessagePB<484,CDOTAUserMsg_SetNextAutobuyItem,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<484,CDOTAUserMsg_SetNextAutobuyItem,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B1630;
  CDOTAUserMsg_SetNextAutobuyItem::~CDOTAUserMsg_SetNextAutobuyItem(this);
}


// CUserMessagePB<484, CDOTAUserMsg_SetNextAutobuyItem, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027cfb40, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_SetNextAutobuyItem::~CDOTAUserMsg_SetNextAutobuyItem, operator delete
void __fastcall CUserMessagePB<484,CDOTAUserMsg_SetNextAutobuyItem,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<484,CDOTAUserMsg_SetNextAutobuyItem,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B1630;
  CDOTAUserMsg_SetNextAutobuyItem::~CDOTAUserMsg_SetNextAutobuyItem(this);
  operator delete(this);
}


// CUserMessagePB<493, CDOTAUserMsg_Ping, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027cfc10, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_Ping::~CDOTAUserMsg_Ping
void __fastcall CUserMessagePB<493,CDOTAUserMsg_Ping,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<493,CDOTAUserMsg_Ping,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B1F30;
  CDOTAUserMsg_Ping::~CDOTAUserMsg_Ping(this);
}


// CUserMessagePB<493, CDOTAUserMsg_Ping, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027cfc30, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_Ping::~CDOTAUserMsg_Ping, operator delete
void __fastcall CUserMessagePB<493,CDOTAUserMsg_Ping,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<493,CDOTAUserMsg_Ping,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B1F30;
  CDOTAUserMsg_Ping::~CDOTAUserMsg_Ping(this);
  operator delete(this);
}


// CUserMessagePB<491, CDOTAUserMsg_HudError, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027cfd40, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_HudError::~CDOTAUserMsg_HudError
void __fastcall CUserMessagePB<491,CDOTAUserMsg_HudError,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<491,CDOTAUserMsg_HudError,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B1CF0;
  CDOTAUserMsg_HudError::~CDOTAUserMsg_HudError(this);
}


// CUserMessagePB<491, CDOTAUserMsg_HudError, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027cfd60, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_HudError::~CDOTAUserMsg_HudError, operator delete
void __fastcall CUserMessagePB<491,CDOTAUserMsg_HudError,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<491,CDOTAUserMsg_HudError,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B1CF0;
  CDOTAUserMsg_HudError::~CDOTAUserMsg_HudError(this);
  operator delete(this);
}


// CUserMessagePB<483, CDOTAUserMsg_OverheadEvent, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027cfe30, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_OverheadEvent::~CDOTAUserMsg_OverheadEvent
void __fastcall CUserMessagePB<483,CDOTAUserMsg_OverheadEvent,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<483,CDOTAUserMsg_OverheadEvent,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B13F0;
  CDOTAUserMsg_OverheadEvent::~CDOTAUserMsg_OverheadEvent(this);
}


// CUserMessagePB<483, CDOTAUserMsg_OverheadEvent, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027cfe50, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_OverheadEvent::~CDOTAUserMsg_OverheadEvent, operator delete
void __fastcall CUserMessagePB<483,CDOTAUserMsg_OverheadEvent,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<483,CDOTAUserMsg_OverheadEvent,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B13F0;
  CDOTAUserMsg_OverheadEvent::~CDOTAUserMsg_OverheadEvent(this);
  operator delete(this);
}


// CUserMessagePB<466, CDOTAUserMsg_ChatEvent, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027cff20, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_ChatEvent::~CDOTAUserMsg_ChatEvent
void __fastcall CUserMessagePB<466,CDOTAUserMsg_ChatEvent,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<466,CDOTAUserMsg_ChatEvent,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B0F70;
  CDOTAUserMsg_ChatEvent::~CDOTAUserMsg_ChatEvent(this);
}


// CUserMessagePB<466, CDOTAUserMsg_ChatEvent, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027cff40, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_ChatEvent::~CDOTAUserMsg_ChatEvent, operator delete
void __fastcall CUserMessagePB<466,CDOTAUserMsg_ChatEvent,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<466,CDOTAUserMsg_ChatEvent,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B0F70;
  CDOTAUserMsg_ChatEvent::~CDOTAUserMsg_ChatEvent(this);
  operator delete(this);
}


// CUserMessagePB<487, CDOTAUserMsg_TutorialTipInfo, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d0010, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_TutorialTipInfo::~CDOTAUserMsg_TutorialTipInfo
void __fastcall CUserMessagePB<487,CDOTAUserMsg_TutorialTipInfo,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<487,CDOTAUserMsg_TutorialTipInfo,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B1AB0;
  CDOTAUserMsg_TutorialTipInfo::~CDOTAUserMsg_TutorialTipInfo(this);
}


// CUserMessagePB<487, CDOTAUserMsg_TutorialTipInfo, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d0030, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_TutorialTipInfo::~CDOTAUserMsg_TutorialTipInfo, operator delete
void __fastcall CUserMessagePB<487,CDOTAUserMsg_TutorialTipInfo,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<487,CDOTAUserMsg_TutorialTipInfo,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B1AB0;
  CDOTAUserMsg_TutorialTipInfo::~CDOTAUserMsg_TutorialTipInfo(this);
  operator delete(this);
}


// CUserMessagePB<481, CDOTAUserMsg_MinimapEvent, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d0190, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_MinimapEvent::~CDOTAUserMsg_MinimapEvent
void __fastcall CUserMessagePB<481,CDOTAUserMsg_MinimapEvent,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<481,CDOTAUserMsg_MinimapEvent,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B11B0;
  CDOTAUserMsg_MinimapEvent::~CDOTAUserMsg_MinimapEvent(this);
}


// CUserMessagePB<481, CDOTAUserMsg_MinimapEvent, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d01b0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_MinimapEvent::~CDOTAUserMsg_MinimapEvent, operator delete
void __fastcall CUserMessagePB<481,CDOTAUserMsg_MinimapEvent,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<481,CDOTAUserMsg_MinimapEvent,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B11B0;
  CDOTAUserMsg_MinimapEvent::~CDOTAUserMsg_MinimapEvent(this);
  operator delete(this);
}


// CUserMessagePB<525, CDOTAUserMsg_VoteStart, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d0280, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_VoteStart::~CDOTAUserMsg_VoteStart
void __fastcall CUserMessagePB<525,CDOTAUserMsg_VoteStart,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<525,CDOTAUserMsg_VoteStart,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B23B0;
  CDOTAUserMsg_VoteStart::~CDOTAUserMsg_VoteStart(this);
}


// CUserMessagePB<525, CDOTAUserMsg_VoteStart, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d02a0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_VoteStart::~CDOTAUserMsg_VoteStart, operator delete
void __fastcall CUserMessagePB<525,CDOTAUserMsg_VoteStart,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<525,CDOTAUserMsg_VoteStart,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B23B0;
  CDOTAUserMsg_VoteStart::~CDOTAUserMsg_VoteStart(this);
  operator delete(this);
}


// CUserMessagePB<527, CDOTAUserMsg_VoteEnd, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d0370, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_VoteEnd::~CDOTAUserMsg_VoteEnd
void __fastcall CUserMessagePB<527,CDOTAUserMsg_VoteEnd,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<527,CDOTAUserMsg_VoteEnd,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B2830;
  CDOTAUserMsg_VoteEnd::~CDOTAUserMsg_VoteEnd(this);
}


// CUserMessagePB<527, CDOTAUserMsg_VoteEnd, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d0390, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_VoteEnd::~CDOTAUserMsg_VoteEnd, operator delete
void __fastcall CUserMessagePB<527,CDOTAUserMsg_VoteEnd,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<527,CDOTAUserMsg_VoteEnd,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B2830;
  CDOTAUserMsg_VoteEnd::~CDOTAUserMsg_VoteEnd(this);
  operator delete(this);
}


// CUserMessagePB<526, CDOTAUserMsg_VoteUpdate, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d0460, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_VoteUpdate::~CDOTAUserMsg_VoteUpdate
void __fastcall CUserMessagePB<526,CDOTAUserMsg_VoteUpdate,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<526,CDOTAUserMsg_VoteUpdate,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B25F0;
  CDOTAUserMsg_VoteUpdate::~CDOTAUserMsg_VoteUpdate(this);
}


// CUserMessagePB<526, CDOTAUserMsg_VoteUpdate, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d0480, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_VoteUpdate::~CDOTAUserMsg_VoteUpdate, operator delete
void __fastcall CUserMessagePB<526,CDOTAUserMsg_VoteUpdate,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<526,CDOTAUserMsg_VoteUpdate,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B25F0;
  CDOTAUserMsg_VoteUpdate::~CDOTAUserMsg_VoteUpdate(this);
  operator delete(this);
}


// CUserMessagePB<524, CDOTAUserMsg_ShowGenericPopup, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d0670, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_ShowGenericPopup::~CDOTAUserMsg_ShowGenericPopup
void __fastcall CUserMessagePB<524,CDOTAUserMsg_ShowGenericPopup,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<524,CDOTAUserMsg_ShowGenericPopup,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B2170;
  CDOTAUserMsg_ShowGenericPopup::~CDOTAUserMsg_ShowGenericPopup(this);
}


// CUserMessagePB<524, CDOTAUserMsg_ShowGenericPopup, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d0690, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_ShowGenericPopup::~CDOTAUserMsg_ShowGenericPopup, operator delete
void __fastcall CUserMessagePB<524,CDOTAUserMsg_ShowGenericPopup,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<524,CDOTAUserMsg_ShowGenericPopup,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B2170;
  CDOTAUserMsg_ShowGenericPopup::~CDOTAUserMsg_ShowGenericPopup(this);
  operator delete(this);
}


// CUserMessagePB<539, CDOTAUserMsg_CustomHeaderMessage, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d0760, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_CustomHeaderMessage::~CDOTAUserMsg_CustomHeaderMessage
void __fastcall CUserMessagePB<539,CDOTAUserMsg_CustomHeaderMessage,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<539,CDOTAUserMsg_CustomHeaderMessage,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B2A70;
  CDOTAUserMsg_CustomHeaderMessage::~CDOTAUserMsg_CustomHeaderMessage(this);
}


// CUserMessagePB<539, CDOTAUserMsg_CustomHeaderMessage, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000027d0780, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_CustomHeaderMessage::~CDOTAUserMsg_CustomHeaderMessage, operator delete
void __fastcall CUserMessagePB<539,CDOTAUserMsg_CustomHeaderMessage,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<539,CDOTAUserMsg_CustomHeaderMessage,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B2A70;
  CDOTAUserMsg_CustomHeaderMessage::~CDOTAUserMsg_CustomHeaderMessage(this);
  operator delete(this);
}


// CUserMessagePB<465, CDOTAUserMsg_AIDebugLine, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002812580, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_AIDebugLine::~CDOTAUserMsg_AIDebugLine
void __fastcall CUserMessagePB<465,CDOTAUserMsg_AIDebugLine,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<465,CDOTAUserMsg_AIDebugLine,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B63B0;
  CDOTAUserMsg_AIDebugLine::~CDOTAUserMsg_AIDebugLine(this);
}


// CUserMessagePB<465, CDOTAUserMsg_AIDebugLine, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000028125a0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_AIDebugLine::~CDOTAUserMsg_AIDebugLine, operator delete
void __fastcall CUserMessagePB<465,CDOTAUserMsg_AIDebugLine,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<465,CDOTAUserMsg_AIDebugLine,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B63B0;
  CDOTAUserMsg_AIDebugLine::~CDOTAUserMsg_AIDebugLine(this);
  operator delete(this);
}


// CUserMessagePB<490, CDOTAUserMsg_BotChat, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002868cc0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_BotChat::~CDOTAUserMsg_BotChat
void __fastcall CUserMessagePB<490,CDOTAUserMsg_BotChat,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<490,CDOTAUserMsg_BotChat,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B8BF0;
  CDOTAUserMsg_BotChat::~CDOTAUserMsg_BotChat(this);
}


// CUserMessagePB<490, CDOTAUserMsg_BotChat, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002868ce0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_BotChat::~CDOTAUserMsg_BotChat, operator delete
void __fastcall CUserMessagePB<490,CDOTAUserMsg_BotChat,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<490,CDOTAUserMsg_BotChat,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42B8BF0;
  CDOTAUserMsg_BotChat::~CDOTAUserMsg_BotChat(this);
  operator delete(this);
}


// CUserMessagePB<520, CDOTAUserMsg_TE_DotaBloodImpact, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000296b310, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_TE_DotaBloodImpact::~CDOTAUserMsg_TE_DotaBloodImpact
void __fastcall CUserMessagePB<520,CDOTAUserMsg_TE_DotaBloodImpact,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<520,CDOTAUserMsg_TE_DotaBloodImpact,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42D5230;
  CDOTAUserMsg_TE_DotaBloodImpact::~CDOTAUserMsg_TE_DotaBloodImpact(this);
}


// CUserMessagePB<520, CDOTAUserMsg_TE_DotaBloodImpact, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000296b330, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_TE_DotaBloodImpact::~CDOTAUserMsg_TE_DotaBloodImpact, operator delete
void __fastcall CUserMessagePB<520,CDOTAUserMsg_TE_DotaBloodImpact,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<520,CDOTAUserMsg_TE_DotaBloodImpact,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42D5230;
  CDOTAUserMsg_TE_DotaBloodImpact::~CDOTAUserMsg_TE_DotaBloodImpact(this);
  operator delete(this);
}


// CUserMessagePB<521, CDOTAUserMsg_TE_UnitAnimation, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000296b400, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_TE_UnitAnimation::~CDOTAUserMsg_TE_UnitAnimation
void __fastcall CUserMessagePB<521,CDOTAUserMsg_TE_UnitAnimation,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<521,CDOTAUserMsg_TE_UnitAnimation,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42D5470;
  CDOTAUserMsg_TE_UnitAnimation::~CDOTAUserMsg_TE_UnitAnimation(this);
}


// CUserMessagePB<521, CDOTAUserMsg_TE_UnitAnimation, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000296b420, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_TE_UnitAnimation::~CDOTAUserMsg_TE_UnitAnimation, operator delete
void __fastcall CUserMessagePB<521,CDOTAUserMsg_TE_UnitAnimation,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<521,CDOTAUserMsg_TE_UnitAnimation,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42D5470;
  CDOTAUserMsg_TE_UnitAnimation::~CDOTAUserMsg_TE_UnitAnimation(this);
  operator delete(this);
}


// CUserMessagePB<522, CDOTAUserMsg_TE_UnitAnimationEnd, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000296b4f0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_TE_UnitAnimationEnd::~CDOTAUserMsg_TE_UnitAnimationEnd
void __fastcall CUserMessagePB<522,CDOTAUserMsg_TE_UnitAnimationEnd,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<522,CDOTAUserMsg_TE_UnitAnimationEnd,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42D56B0;
  CDOTAUserMsg_TE_UnitAnimationEnd::~CDOTAUserMsg_TE_UnitAnimationEnd(this);
}


// CUserMessagePB<522, CDOTAUserMsg_TE_UnitAnimationEnd, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x000000000296b510, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_TE_UnitAnimationEnd::~CDOTAUserMsg_TE_UnitAnimationEnd, operator delete
void __fastcall CUserMessagePB<522,CDOTAUserMsg_TE_UnitAnimationEnd,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<522,CDOTAUserMsg_TE_UnitAnimationEnd,(NetChannelBufType_t)1> *const this)
{
  *this = &off_42D56B0;
  CDOTAUserMsg_TE_UnitAnimationEnd::~CDOTAUserMsg_TE_UnitAnimationEnd(this);
  operator delete(this);
}


// CUserMessagePB<558, CMsgDOTAMatch, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000029a8cd0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CMsgDOTAMatch::~CMsgDOTAMatch
void __fastcall CUserMessagePB<558,CMsgDOTAMatch,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<558,CMsgDOTAMatch,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4303D90;
  CMsgDOTAMatch::~CMsgDOTAMatch(this);
}


// CUserMessagePB<558, CMsgDOTAMatch, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000029a8cf0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CMsgDOTAMatch::~CMsgDOTAMatch, operator delete
void __fastcall CUserMessagePB<558,CMsgDOTAMatch,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<558,CMsgDOTAMatch,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4303D90;
  CMsgDOTAMatch::~CMsgDOTAMatch(this);
  operator delete(this);
}


// CUserMessagePB<557, CDOTAMatchMetadataFile, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000029a8dc0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile
void __fastcall CUserMessagePB<557,CDOTAMatchMetadataFile,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<557,CDOTAMatchMetadataFile,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4303B50;
  CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile(this);
}


// CUserMessagePB<557, CDOTAMatchMetadataFile, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000029a8de0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile, operator delete
void __fastcall CUserMessagePB<557,CDOTAMatchMetadataFile,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<557,CDOTAMatchMetadataFile,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4303B50;
  CDOTAMatchMetadataFile::~CDOTAMatchMetadataFile(this);
  operator delete(this);
}


// CUserMessagePB<494, CDOTAUserMsg_ItemFound, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000029a8fa0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_ItemFound::~CDOTAUserMsg_ItemFound
void __fastcall CUserMessagePB<494,CDOTAUserMsg_ItemFound,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<494,CDOTAUserMsg_ItemFound,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4303910;
  CDOTAUserMsg_ItemFound::~CDOTAUserMsg_ItemFound(this);
}


// CUserMessagePB<494, CDOTAUserMsg_ItemFound, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x00000000029a8fc0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_ItemFound::~CDOTAUserMsg_ItemFound, operator delete
void __fastcall CUserMessagePB<494,CDOTAUserMsg_ItemFound,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<494,CDOTAUserMsg_ItemFound,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4303910;
  CDOTAUserMsg_ItemFound::~CDOTAUserMsg_ItemFound(this);
  operator delete(this);
}


// CUserMessagePB<482, CDOTAUserMsg_NevermoreRequiem, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002a19150, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_NevermoreRequiem::~CDOTAUserMsg_NevermoreRequiem
void __fastcall CUserMessagePB<482,CDOTAUserMsg_NevermoreRequiem,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<482,CDOTAUserMsg_NevermoreRequiem,(NetChannelBufType_t)1> *const this)
{
  *this = &off_430C7B0;
  CDOTAUserMsg_NevermoreRequiem::~CDOTAUserMsg_NevermoreRequiem(this);
}


// CUserMessagePB<482, CDOTAUserMsg_NevermoreRequiem, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002a19170, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_NevermoreRequiem::~CDOTAUserMsg_NevermoreRequiem, operator delete
void __fastcall CUserMessagePB<482,CDOTAUserMsg_NevermoreRequiem,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<482,CDOTAUserMsg_NevermoreRequiem,(NetChannelBufType_t)1> *const this)
{
  *this = &off_430C7B0;
  CDOTAUserMsg_NevermoreRequiem::~CDOTAUserMsg_NevermoreRequiem(this);
  operator delete(this);
}


// CUserMessagePB<533, CDOTAUserMsg_CourierKilledAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002ac24d0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_CourierKilledAlert::~CDOTAUserMsg_CourierKilledAlert
void __fastcall CUserMessagePB<533,CDOTAUserMsg_CourierKilledAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<533,CDOTAUserMsg_CourierKilledAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_43CB570;
  CDOTAUserMsg_CourierKilledAlert::~CDOTAUserMsg_CourierKilledAlert(this);
}


// CUserMessagePB<533, CDOTAUserMsg_CourierKilledAlert, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002ac24f0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_CourierKilledAlert::~CDOTAUserMsg_CourierKilledAlert, operator delete
void __fastcall CUserMessagePB<533,CDOTAUserMsg_CourierKilledAlert,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<533,CDOTAUserMsg_CourierKilledAlert,(NetChannelBufType_t)1> *const this)
{
  *this = &off_43CB570;
  CDOTAUserMsg_CourierKilledAlert::~CDOTAUserMsg_CourierKilledAlert(this);
  operator delete(this);
}


// CUserMessagePB<512, CDOTAUserMsg_SendRoshanPopup, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002b1d8b0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_SendRoshanPopup::~CDOTAUserMsg_SendRoshanPopup
void __fastcall CUserMessagePB<512,CDOTAUserMsg_SendRoshanPopup,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<512,CDOTAUserMsg_SendRoshanPopup,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4440330;
  CDOTAUserMsg_SendRoshanPopup::~CDOTAUserMsg_SendRoshanPopup(this);
}


// CUserMessagePB<512, CDOTAUserMsg_SendRoshanPopup, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002b1d8d0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_SendRoshanPopup::~CDOTAUserMsg_SendRoshanPopup, operator delete
void __fastcall CUserMessagePB<512,CDOTAUserMsg_SendRoshanPopup,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<512,CDOTAUserMsg_SendRoshanPopup,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4440330;
  CDOTAUserMsg_SendRoshanPopup::~CDOTAUserMsg_SendRoshanPopup(this);
  operator delete(this);
}


// CUserMessagePB<532, CDOTAUserMsg_AbilitySteal, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002d2cc40, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_AbilitySteal::~CDOTAUserMsg_AbilitySteal
void __fastcall CUserMessagePB<532,CDOTAUserMsg_AbilitySteal,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<532,CDOTAUserMsg_AbilitySteal,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4607EF0;
  CDOTAUserMsg_AbilitySteal::~CDOTAUserMsg_AbilitySteal(this);
}


// CUserMessagePB<532, CDOTAUserMsg_AbilitySteal, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002d2cc60, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_AbilitySteal::~CDOTAUserMsg_AbilitySteal, operator delete
void __fastcall CUserMessagePB<532,CDOTAUserMsg_AbilitySteal,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<532,CDOTAUserMsg_AbilitySteal,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4607EF0;
  CDOTAUserMsg_AbilitySteal::~CDOTAUserMsg_AbilitySteal(this);
  operator delete(this);
}


// CUserMessagePB<536, CDOTAUserMsg_MiniTaunt, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002d2cde0, libserver.so)  // inlines: ~CNetMessagePB
// calls: CDOTAUserMsg_MiniTaunt::~CDOTAUserMsg_MiniTaunt
void __fastcall CUserMessagePB<536,CDOTAUserMsg_MiniTaunt,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<536,CDOTAUserMsg_MiniTaunt,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4608130;
  CDOTAUserMsg_MiniTaunt::~CDOTAUserMsg_MiniTaunt(this);
}


// CUserMessagePB<536, CDOTAUserMsg_MiniTaunt, (NetChannelBufType_t)1>::~CUserMessagePB  (line 22, @0x0000000002d2ce00, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTAUserMsg_MiniTaunt::~CDOTAUserMsg_MiniTaunt, operator delete
void __fastcall CUserMessagePB<536,CDOTAUserMsg_MiniTaunt,(NetChannelBufType_t)1>::~CUserMessagePB(
        CUserMessagePB<536,CDOTAUserMsg_MiniTaunt,(NetChannelBufType_t)1> *const this)
{
  *this = &off_4608130;
  CDOTAUserMsg_MiniTaunt::~CDOTAUserMsg_MiniTaunt(this);
  operator delete(this);
}


// CUserMessageCurrentTimescale_t::~CUserMessageCurrentTimescale_t  (line 27, @0x0000000002247860, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageCurrentTimescale::~CUserMessageCurrentTimescale
void __fastcall CUserMessageCurrentTimescale_t::~CUserMessageCurrentTimescale_t(
        CUserMessageCurrentTimescale_t *const this)
{
  *this = &off_403FB70;
  CUserMessageCurrentTimescale::~CUserMessageCurrentTimescale(this);
}


// CUserMessageCurrentTimescale_t::~CUserMessageCurrentTimescale_t  (line 27, @0x0000000002247880, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageCurrentTimescale_t, ~CUserMessagePB
// calls: CUserMessageCurrentTimescale::~CUserMessageCurrentTimescale, operator delete
void __fastcall CUserMessageCurrentTimescale_t::~CUserMessageCurrentTimescale_t(
        CUserMessageCurrentTimescale_t *const this)
{
  *this = &off_403FB70;
  CUserMessageCurrentTimescale::~CUserMessageCurrentTimescale(this);
  operator delete(this);
}


// CUserMessageDesiredTimescale_t::~CUserMessageDesiredTimescale_t  (line 28, @0x0000000002247950, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageDesiredTimescale::~CUserMessageDesiredTimescale
void __fastcall CUserMessageDesiredTimescale_t::~CUserMessageDesiredTimescale_t(
        CUserMessageDesiredTimescale_t *const this)
{
  *this = &off_403FDB0;
  CUserMessageDesiredTimescale::~CUserMessageDesiredTimescale(this);
}


// CUserMessageDesiredTimescale_t::~CUserMessageDesiredTimescale_t  (line 28, @0x0000000002247970, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageDesiredTimescale_t, ~CUserMessagePB
// calls: CUserMessageDesiredTimescale::~CUserMessageDesiredTimescale, operator delete
void __fastcall CUserMessageDesiredTimescale_t::~CUserMessageDesiredTimescale_t(
        CUserMessageDesiredTimescale_t *const this)
{
  *this = &off_403FDB0;
  CUserMessageDesiredTimescale::~CUserMessageDesiredTimescale(this);
  operator delete(this);
}


// CUserMessageHintText_t::~CUserMessageHintText_t  (line 29, @0x000000000227c830, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageHintText::~CUserMessageHintText
void __fastcall CUserMessageHintText_t::~CUserMessageHintText_t(CUserMessageHintText_t *const this)
{
  *this = &off_404EF10;
  CUserMessageHintText::~CUserMessageHintText(this);
}


// CUserMessageHintText_t::~CUserMessageHintText_t  (line 29, @0x000000000227c850, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageHintText_t, ~CUserMessagePB
// calls: CUserMessageHintText::~CUserMessageHintText, operator delete
void __fastcall CUserMessageHintText_t::~CUserMessageHintText_t(CUserMessageHintText_t *const this)
{
  *this = &off_404EF10;
  CUserMessageHintText::~CUserMessageHintText(this);
  operator delete(this);
}


// CUserMessageRequestState_t::~CUserMessageRequestState_t  (line 30, @0x00000000024115d0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageRequestState::~CUserMessageRequestState
void __fastcall CUserMessageRequestState_t::~CUserMessageRequestState_t(CUserMessageRequestState_t *const this)
{
  *this = &off_40CE7D0;
  CUserMessageRequestState::~CUserMessageRequestState(this);
}


// CUserMessageRequestState_t::~CUserMessageRequestState_t  (line 30, @0x00000000024115f0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageRequestState_t
// calls: CUserMessageRequestState::~CUserMessageRequestState, operator delete
void __fastcall CUserMessageRequestState_t::~CUserMessageRequestState_t(CUserMessageRequestState_t *const this)
{
  *this = &off_40CE7D0;
  CUserMessageRequestState::~CUserMessageRequestState(this);
  operator delete(this);
}


// CUserMessageVoiceMask_t::~CUserMessageVoiceMask_t  (line 31, @0x00000000024116c0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageVoiceMask::~CUserMessageVoiceMask
void __fastcall CUserMessageVoiceMask_t::~CUserMessageVoiceMask_t(CUserMessageVoiceMask_t *const this)
{
  *this = &off_40CEA10;
  CUserMessageVoiceMask::~CUserMessageVoiceMask(this);
}


// CUserMessageVoiceMask_t::~CUserMessageVoiceMask_t  (line 31, @0x00000000024116e0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageVoiceMask_t
// calls: CUserMessageVoiceMask::~CUserMessageVoiceMask, operator delete
void __fastcall CUserMessageVoiceMask_t::~CUserMessageVoiceMask_t(CUserMessageVoiceMask_t *const this)
{
  *this = &off_40CEA10;
  CUserMessageVoiceMask::~CUserMessageVoiceMask(this);
  operator delete(this);
}


// CUserMessageKeyHintText_t::~CUserMessageKeyHintText_t  (line 32, @0x0000000002211450, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageKeyHintText::~CUserMessageKeyHintText
void __fastcall CUserMessageKeyHintText_t::~CUserMessageKeyHintText_t(CUserMessageKeyHintText_t *const this)
{
  *this = &off_402A490;
  CUserMessageKeyHintText::~CUserMessageKeyHintText(this);
}


// CUserMessageKeyHintText_t::~CUserMessageKeyHintText_t  (line 32, @0x0000000002211470, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageKeyHintText_t, ~CUserMessagePB
// calls: CUserMessageKeyHintText::~CUserMessageKeyHintText, operator delete
void __fastcall CUserMessageKeyHintText_t::~CUserMessageKeyHintText_t(CUserMessageKeyHintText_t *const this)
{
  *this = &off_402A490;
  CUserMessageKeyHintText::~CUserMessageKeyHintText(this);
  operator delete(this);
}


// CUserMessageCrosshairAngle_t::~CUserMessageCrosshairAngle_t  (line 35, @0x0000000002307900, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageCrosshairAngle::~CUserMessageCrosshairAngle
void __fastcall CUserMessageCrosshairAngle_t::~CUserMessageCrosshairAngle_t(CUserMessageCrosshairAngle_t *const this)
{
  *this = &off_4073730;
  CUserMessageCrosshairAngle::~CUserMessageCrosshairAngle(this);
}


// CUserMessageCrosshairAngle_t::~CUserMessageCrosshairAngle_t  (line 35, @0x0000000002307920, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageCrosshairAngle_t, ~CUserMessagePB
// calls: CUserMessageCrosshairAngle::~CUserMessageCrosshairAngle, operator delete
void __fastcall CUserMessageCrosshairAngle_t::~CUserMessageCrosshairAngle_t(CUserMessageCrosshairAngle_t *const this)
{
  *this = &off_4073730;
  CUserMessageCrosshairAngle::~CUserMessageCrosshairAngle(this);
  operator delete(this);
}


// CUserMessageVGUIMenu_t::~CUserMessageVGUIMenu_t  (line 36, @0x0000000002307630, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageVGUIMenu::~CUserMessageVGUIMenu
void __fastcall CUserMessageVGUIMenu_t::~CUserMessageVGUIMenu_t(CUserMessageVGUIMenu_t *const this)
{
  *this = &off_4073970;
  CUserMessageVGUIMenu::~CUserMessageVGUIMenu(this);
}


// CUserMessageVGUIMenu_t::~CUserMessageVGUIMenu_t  (line 36, @0x0000000002307650, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageVGUIMenu_t
// calls: CUserMessageVGUIMenu::~CUserMessageVGUIMenu, operator delete
void __fastcall CUserMessageVGUIMenu_t::~CUserMessageVGUIMenu_t(CUserMessageVGUIMenu_t *const this)
{
  *this = &off_4073970;
  CUserMessageVGUIMenu::~CUserMessageVGUIMenu(this);
  operator delete(this);
}


// CUserMessageSayText_t::~CUserMessageSayText_t  (line 37, @0x0000000002411120, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageSayText::~CUserMessageSayText
void __fastcall CUserMessageSayText_t::~CUserMessageSayText_t(CUserMessageSayText_t *const this)
{
  *this = &off_40CEC50;
  CUserMessageSayText::~CUserMessageSayText(this);
}


// CUserMessageSayText_t::~CUserMessageSayText_t  (line 37, @0x0000000002411140, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageSayText_t
// calls: CUserMessageSayText::~CUserMessageSayText, operator delete
void __fastcall CUserMessageSayText_t::~CUserMessageSayText_t(CUserMessageSayText_t *const this)
{
  *this = &off_40CEC50;
  CUserMessageSayText::~CUserMessageSayText(this);
  operator delete(this);
}


// CUserMessageSayText2_t::~CUserMessageSayText2_t  (line 38, @0x0000000002411210, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageSayText2::~CUserMessageSayText2
void __fastcall CUserMessageSayText2_t::~CUserMessageSayText2_t(CUserMessageSayText2_t *const this)
{
  *this = &off_40CEE90;
  CUserMessageSayText2::~CUserMessageSayText2(this);
}


// CUserMessageSayText2_t::~CUserMessageSayText2_t  (line 38, @0x0000000002411230, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageSayText2_t
// calls: CUserMessageSayText2::~CUserMessageSayText2, operator delete
void __fastcall CUserMessageSayText2_t::~CUserMessageSayText2_t(CUserMessageSayText2_t *const this)
{
  *this = &off_40CEE90;
  CUserMessageSayText2::~CUserMessageSayText2(this);
  operator delete(this);
}


// CUserMessageColoredText_t::~CUserMessageColoredText_t  (line 39, @0x00000000024114e0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageColoredText::~CUserMessageColoredText
void __fastcall CUserMessageColoredText_t::~CUserMessageColoredText_t(CUserMessageColoredText_t *const this)
{
  *this = &off_40CF0D0;
  CUserMessageColoredText::~CUserMessageColoredText(this);
}


// CUserMessageColoredText_t::~CUserMessageColoredText_t  (line 39, @0x0000000002411500, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageColoredText_t, ~CUserMessagePB
// calls: CUserMessageColoredText::~CUserMessageColoredText, operator delete
void __fastcall CUserMessageColoredText_t::~CUserMessageColoredText_t(CUserMessageColoredText_t *const this)
{
  *this = &off_40CF0D0;
  CUserMessageColoredText::~CUserMessageColoredText(this);
  operator delete(this);
}


// CUserMessageSayTextChannel_t::~CUserMessageSayTextChannel_t  (line 40, @0x0000000002411300, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageSayTextChannel::~CUserMessageSayTextChannel
void __fastcall CUserMessageSayTextChannel_t::~CUserMessageSayTextChannel_t(CUserMessageSayTextChannel_t *const this)
{
  *this = &off_40CF310;
  CUserMessageSayTextChannel::~CUserMessageSayTextChannel(this);
}


// CUserMessageSayTextChannel_t::~CUserMessageSayTextChannel_t  (line 40, @0x0000000002411320, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageSayTextChannel_t
// calls: CUserMessageSayTextChannel::~CUserMessageSayTextChannel, operator delete
void __fastcall CUserMessageSayTextChannel_t::~CUserMessageSayTextChannel_t(CUserMessageSayTextChannel_t *const this)
{
  *this = &off_40CF310;
  CUserMessageSayTextChannel::~CUserMessageSayTextChannel(this);
  operator delete(this);
}


// CUserMessageShake_t::~CUserMessageShake_t  (line 41, @0x0000000002410d60, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageShake::~CUserMessageShake
void __fastcall CUserMessageShake_t::~CUserMessageShake_t(CUserMessageShake_t *const this)
{
  *this = &off_40CF550;
  CUserMessageShake::~CUserMessageShake(this);
}


// CUserMessageShake_t::~CUserMessageShake_t  (line 41, @0x0000000002410d80, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageShake_t
// calls: CUserMessageShake::~CUserMessageShake, operator delete
void __fastcall CUserMessageShake_t::~CUserMessageShake_t(CUserMessageShake_t *const this)
{
  *this = &off_40CF550;
  CUserMessageShake::~CUserMessageShake(this);
  operator delete(this);
}


// CUserMessageFade_t::~CUserMessageFade_t  (line 43, @0x0000000002410e50, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageFade::~CUserMessageFade
void __fastcall CUserMessageFade_t::~CUserMessageFade_t(CUserMessageFade_t *const this)
{
  *this = &off_40CF790;
  CUserMessageFade::~CUserMessageFade(this);
}


// CUserMessageFade_t::~CUserMessageFade_t  (line 43, @0x0000000002410e70, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageFade_t, ~CUserMessagePB
// calls: CUserMessageFade::~CUserMessageFade, operator delete
void __fastcall CUserMessageFade_t::~CUserMessageFade_t(CUserMessageFade_t *const this)
{
  *this = &off_40CF790;
  CUserMessageFade::~CUserMessageFade(this);
  operator delete(this);
}


// CUserMessageTextMsg_t::~CUserMessageTextMsg_t  (line 44, @0x0000000002411030, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageTextMsg::~CUserMessageTextMsg
void __fastcall CUserMessageTextMsg_t::~CUserMessageTextMsg_t(CUserMessageTextMsg_t *const this)
{
  *this = &off_40CF9D0;
  CUserMessageTextMsg::~CUserMessageTextMsg(this);
}


// CUserMessageTextMsg_t::~CUserMessageTextMsg_t  (line 44, @0x0000000002411050, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageTextMsg_t
// calls: CUserMessageTextMsg::~CUserMessageTextMsg, operator delete
void __fastcall CUserMessageTextMsg_t::~CUserMessageTextMsg_t(CUserMessageTextMsg_t *const this)
{
  *this = &off_40CF9D0;
  CUserMessageTextMsg::~CUserMessageTextMsg(this);
  operator delete(this);
}


// CUserMessageAchievementEvent_t::~CUserMessageAchievementEvent_t  (line 45, @0x000000000217b960, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageAchievementEvent::~CUserMessageAchievementEvent
void __fastcall CUserMessageAchievementEvent_t::~CUserMessageAchievementEvent_t(
        CUserMessageAchievementEvent_t *const this)
{
  *this = &off_3FFFDD0;
  CUserMessageAchievementEvent::~CUserMessageAchievementEvent(this);
}


// CUserMessageAchievementEvent_t::~CUserMessageAchievementEvent_t  (line 45, @0x000000000217b980, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageAchievementEvent_t, ~CUserMessagePB
// calls: CUserMessageAchievementEvent::~CUserMessageAchievementEvent, operator delete
void __fastcall CUserMessageAchievementEvent_t::~CUserMessageAchievementEvent_t(
        CUserMessageAchievementEvent_t *const this)
{
  *this = &off_3FFFDD0;
  CUserMessageAchievementEvent::~CUserMessageAchievementEvent(this);
  operator delete(this);
}


// CUserMessageScreenTilt_t::~CUserMessageScreenTilt_t  (line 47, @0x0000000002410a50, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageScreenTilt::~CUserMessageScreenTilt
void __fastcall CUserMessageScreenTilt_t::~CUserMessageScreenTilt_t(CUserMessageScreenTilt_t *const this)
{
  *this = &off_40CFC10;
  CUserMessageScreenTilt::~CUserMessageScreenTilt(this);
}


// CUserMessageScreenTilt_t::~CUserMessageScreenTilt_t  (line 47, @0x0000000002410a70, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageScreenTilt_t
// calls: CUserMessageScreenTilt::~CUserMessageScreenTilt, operator delete
void __fastcall CUserMessageScreenTilt_t::~CUserMessageScreenTilt_t(CUserMessageScreenTilt_t *const this)
{
  *this = &off_40CFC10;
  CUserMessageScreenTilt::~CUserMessageScreenTilt(this);
  operator delete(this);
}


// CUserMessageVoiceSubtitle_t::~CUserMessageVoiceSubtitle_t  (line 49, @0x00000000022aa090, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageVoiceSubtitle::~CUserMessageVoiceSubtitle
void __fastcall CUserMessageVoiceSubtitle_t::~CUserMessageVoiceSubtitle_t(CUserMessageVoiceSubtitle_t *const this)
{
  *this = &off_40585D0;
  CUserMessageVoiceSubtitle::~CUserMessageVoiceSubtitle(this);
}


// CUserMessageVoiceSubtitle_t::~CUserMessageVoiceSubtitle_t  (line 49, @0x00000000022aa0b0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageVoiceSubtitle_t
// calls: CUserMessageVoiceSubtitle::~CUserMessageVoiceSubtitle, operator delete
void __fastcall CUserMessageVoiceSubtitle_t::~CUserMessageVoiceSubtitle_t(CUserMessageVoiceSubtitle_t *const this)
{
  *this = &off_40585D0;
  CUserMessageVoiceSubtitle::~CUserMessageVoiceSubtitle(this);
  operator delete(this);
}


// CUserMessageSendAudio_t::~CUserMessageSendAudio_t  (line 50, @0x0000000002555de0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageSendAudio::~CUserMessageSendAudio
void __fastcall CUserMessageSendAudio_t::~CUserMessageSendAudio_t(CUserMessageSendAudio_t *const this)
{
  *this = &off_40F1850;
  CUserMessageSendAudio::~CUserMessageSendAudio(this);
}


// CUserMessageSendAudio_t::~CUserMessageSendAudio_t  (line 50, @0x0000000002555e00, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageSendAudio_t
// calls: CUserMessageSendAudio::~CUserMessageSendAudio, operator delete
void __fastcall CUserMessageSendAudio_t::~CUserMessageSendAudio_t(CUserMessageSendAudio_t *const this)
{
  *this = &off_40F1850;
  CUserMessageSendAudio::~CUserMessageSendAudio(this);
  operator delete(this);
}


// CUserMessageCloseCaption_t::~CUserMessageCloseCaption_t  (line 51, @0x00000000023ab3d0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageCloseCaption::~CUserMessageCloseCaption
void __fastcall CUserMessageCloseCaption_t::~CUserMessageCloseCaption_t(CUserMessageCloseCaption_t *const this)
{
  *this = &off_40A4B90;
  CUserMessageCloseCaption::~CUserMessageCloseCaption(this);
}


// CUserMessageCloseCaption_t::~CUserMessageCloseCaption_t  (line 51, @0x00000000023ab3f0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageCloseCaption_t, ~CUserMessagePB
// calls: CUserMessageCloseCaption::~CUserMessageCloseCaption, operator delete
void __fastcall CUserMessageCloseCaption_t::~CUserMessageCloseCaption_t(CUserMessageCloseCaption_t *const this)
{
  *this = &off_40A4B90;
  CUserMessageCloseCaption::~CUserMessageCloseCaption(this);
  operator delete(this);
}


// CUserMessageHandHapticPulse_t::~CUserMessageHandHapticPulse_t  (line 55, @0x00000000023730c0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageHapticPulse::~CUserMessageHapticPulse
void __fastcall CUserMessageHandHapticPulse_t::~CUserMessageHandHapticPulse_t(
        CUserMessageHandHapticPulse_t *const this)
{
  *this = &off_4094BB0;
  CUserMessageHapticPulse::~CUserMessageHapticPulse(this);
}


// CUserMessageHandHapticPulse_t::~CUserMessageHandHapticPulse_t  (line 55, @0x00000000023730e0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageHandHapticPulse_t, ~CUserMessagePB
// calls: CUserMessageHapticPulse::~CUserMessageHapticPulse, operator delete
void __fastcall CUserMessageHandHapticPulse_t::~CUserMessageHandHapticPulse_t(
        CUserMessageHandHapticPulse_t *const this)
{
  *this = &off_4094BB0;
  CUserMessageHapticPulse::~CUserMessageHapticPulse(this);
  operator delete(this);
}


// CUserMessageAudioParameter_t::~CUserMessageAudioParameter_t  (line 57, @0x0000000002410b40, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageAudioParameter::~CUserMessageAudioParameter
void __fastcall CUserMessageAudioParameter_t::~CUserMessageAudioParameter_t(CUserMessageAudioParameter_t *const this)
{
  *this = &off_40CFE50;
  CUserMessageAudioParameter::~CUserMessageAudioParameter(this);
}


// CUserMessageAudioParameter_t::~CUserMessageAudioParameter_t  (line 57, @0x0000000002410b60, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageAudioParameter_t, ~CUserMessagePB
// calls: CUserMessageAudioParameter::~CUserMessageAudioParameter, operator delete
void __fastcall CUserMessageAudioParameter_t::~CUserMessageAudioParameter_t(CUserMessageAudioParameter_t *const this)
{
  *this = &off_40CFE50;
  CUserMessageAudioParameter::~CUserMessageAudioParameter(this);
  operator delete(this);
}


// CUserMessageHudMsg_t::~CUserMessageHudMsg_t  (line 63, @0x0000000002410f40, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageHudMsg::~CUserMessageHudMsg
void __fastcall CUserMessageHudMsg_t::~CUserMessageHudMsg_t(CUserMessageHudMsg_t *const this)
{
  *this = &off_40D0090;
  CUserMessageHudMsg::~CUserMessageHudMsg(this);
}


// CUserMessageHudMsg_t::~CUserMessageHudMsg_t  (line 63, @0x0000000002410f60, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageHudMsg_t, ~CUserMessagePB
// calls: CUserMessageHudMsg::~CUserMessageHudMsg, operator delete
void __fastcall CUserMessageHudMsg_t::~CUserMessageHudMsg_t(CUserMessageHudMsg_t *const this)
{
  *this = &off_40D0090;
  CUserMessageHudMsg::~CUserMessageHudMsg(this);
  operator delete(this);
}


// CUserMessageHudText_t::~CUserMessageHudText_t  (line 82, @0x00000000024113f0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageHudText::~CUserMessageHudText
void __fastcall CUserMessageHudText_t::~CUserMessageHudText_t(CUserMessageHudText_t *const this)
{
  *this = &off_40D02D0;
  CUserMessageHudText::~CUserMessageHudText(this);
}


// CUserMessageHudText_t::~CUserMessageHudText_t  (line 82, @0x0000000002411410, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessageHudText_t, ~CUserMessagePB
// calls: CUserMessageHudText::~CUserMessageHudText, operator delete
void __fastcall CUserMessageHudText_t::~CUserMessageHudText_t(CUserMessageHudText_t *const this)
{
  *this = &off_40D02D0;
  CUserMessageHudText::~CUserMessageHudText(this);
  operator delete(this);
}


// CUserMessageResetHUD_t::~CUserMessageResetHUD_t  (line 83, @0x0000000002307720, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageResetHUD::~CUserMessageResetHUD
void __fastcall CUserMessageResetHUD_t::~CUserMessageResetHUD_t(CUserMessageResetHUD_t *const this)
{
  *this = &off_4073BB0;
  CUserMessageResetHUD::~CUserMessageResetHUD(this);
}


// CUserMessageResetHUD_t::~CUserMessageResetHUD_t  (line 83, @0x0000000002307740, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageResetHUD_t
// calls: CUserMessageResetHUD::~CUserMessageResetHUD, operator delete
void __fastcall CUserMessageResetHUD_t::~CUserMessageResetHUD_t(CUserMessageResetHUD_t *const this)
{
  *this = &off_4073BB0;
  CUserMessageResetHUD::~CUserMessageResetHUD(this);
  operator delete(this);
}


// CUserMessageTrain_t::~CUserMessageTrain_t  (line 85, @0x0000000002307810, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CUserMessageTrain::~CUserMessageTrain
void __fastcall CUserMessageTrain_t::~CUserMessageTrain_t(CUserMessageTrain_t *const this)
{
  *this = &off_4073DF0;
  CUserMessageTrain::~CUserMessageTrain(this);
}


// CUserMessageTrain_t::~CUserMessageTrain_t  (line 85, @0x0000000002307830, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageTrain_t
// calls: CUserMessageTrain::~CUserMessageTrain, operator delete
void __fastcall CUserMessageTrain_t::~CUserMessageTrain_t(CUserMessageTrain_t *const this)
{
  *this = &off_4073DF0;
  CUserMessageTrain::~CUserMessageTrain(this);
  operator delete(this);
}


// CEntityMessageScreenOverlay_t::~CEntityMessageScreenOverlay_t  (line 89, @0x0000000002211360, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessageScreenOverlay::~CEntityMessageScreenOverlay
void __fastcall CEntityMessageScreenOverlay_t::~CEntityMessageScreenOverlay_t(
        CEntityMessageScreenOverlay_t *const this)
{
  *this = &off_402A6D0;
  CEntityMessageScreenOverlay::~CEntityMessageScreenOverlay(this);
}


// CEntityMessageScreenOverlay_t::~CEntityMessageScreenOverlay_t  (line 89, @0x0000000002211380, libserver.so)  // inlines: ~CEntityMessageScreenOverlay_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessageScreenOverlay::~CEntityMessageScreenOverlay, operator delete
void __fastcall CEntityMessageScreenOverlay_t::~CEntityMessageScreenOverlay_t(
        CEntityMessageScreenOverlay_t *const this)
{
  *this = &off_402A6D0;
  CEntityMessageScreenOverlay::~CEntityMessageScreenOverlay(this);
  operator delete(this);
}


// CEntityMessageRemoveAllDecals_t::~CEntityMessageRemoveAllDecals_t  (line 90, @0x000000000217b870, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessageRemoveAllDecals::~CEntityMessageRemoveAllDecals
void __fastcall CEntityMessageRemoveAllDecals_t::~CEntityMessageRemoveAllDecals_t(
        CEntityMessageRemoveAllDecals_t *const this)
{
  *this = &off_4000010;
  CEntityMessageRemoveAllDecals::~CEntityMessageRemoveAllDecals(this);
}


// CEntityMessageRemoveAllDecals_t::~CEntityMessageRemoveAllDecals_t  (line 90, @0x000000000217b890, libserver.so)  // inlines: ~CEntityMessageRemoveAllDecals_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessageRemoveAllDecals::~CEntityMessageRemoveAllDecals, operator delete
void __fastcall CEntityMessageRemoveAllDecals_t::~CEntityMessageRemoveAllDecals_t(
        CEntityMessageRemoveAllDecals_t *const this)
{
  *this = &off_4000010;
  CEntityMessageRemoveAllDecals::~CEntityMessageRemoveAllDecals(this);
  operator delete(this);
}


// CEntityMessagePropagateForce_t::~CEntityMessagePropagateForce_t  (line 91, @0x00000000023ab2e0, libserver.so)  // inlines: ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessagePropagateForce::~CEntityMessagePropagateForce
void __fastcall CEntityMessagePropagateForce_t::~CEntityMessagePropagateForce_t(
        CEntityMessagePropagateForce_t *const this)
{
  *this = &off_40A4DD0;
  CEntityMessagePropagateForce::~CEntityMessagePropagateForce(this);
}


// CEntityMessagePropagateForce_t::~CEntityMessagePropagateForce_t  (line 91, @0x00000000023ab300, libserver.so)  // inlines: ~CEntityMessagePropagateForce_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessagePropagateForce::~CEntityMessagePropagateForce, operator delete
void __fastcall CEntityMessagePropagateForce_t::~CEntityMessagePropagateForce_t(
        CEntityMessagePropagateForce_t *const this)
{
  *this = &off_40A4DD0;
  CEntityMessagePropagateForce::~CEntityMessagePropagateForce(this);
  operator delete(this);
}


// CUserMsg_CustomGameEvent_t::~CUserMsg_CustomGameEvent_t  (line 96, @0x0000000001f78380, libserver.so)  // inlines: ~CBaseCmdKeyValues, ~CNetMessagePB, ~CUserMessagePB
// calls: KeyValues::deleteThis, CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent
void __fastcall CUserMsg_CustomGameEvent_t::~CUserMsg_CustomGameEvent_t(CUserMsg_CustomGameEvent_t *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3FCB1F0;
  v2 = *(this + 5);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 5) = 0;
  }
  CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent(this);
}


// CUserMsg_CustomGameEvent_t::~CUserMsg_CustomGameEvent_t  (line 96, @0x0000000001f78650, libserver.so)  // inlines: ~CBaseCmdKeyValues, ~CNetMessagePB, ~CUserMessagePB, ~CUserMsg_CustomGameEvent_t
// calls: KeyValues::deleteThis, CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent, operator delete
void __fastcall CUserMsg_CustomGameEvent_t::~CUserMsg_CustomGameEvent_t(CUserMsg_CustomGameEvent_t *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3FCB1F0;
  v2 = *(this + 5);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 5) = 0;
  }
  CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent(this);
  operator delete(this);
}


// CEventPosterBase<CUserMessageKeyHintText_t, 255>::~CEventPosterBase  (line 109, @0x000000000221a1c0, libserver.so)  // inlines: FindGameEvent<CUserMessageKeyHintText_t>, FindOrCreateGameEvent<CUserMessageKeyHintText_t>, PostEvent<CUserMessageKeyHintText_t>, ~CNetMessagePB, ~CUserMessageKeyHintText_t, ~CUserMessagePB
// calls: CUserMessageKeyHintText::~CUserMessageKeyHintText
// callers: CEnvHudHint::InputShowHudHint, CEnvHudHint::InputHideHudHint
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent
void __fastcall CEventPosterBase<CUserMessageKeyHintText_t,255>::~CEventPosterBase(
        CEventPosterBase<CUserMessageKeyHintText_t,255> *const this)
{
  CUserMessageKeyHintText *v1; // r12
  __int64 v3; // r14
  IGameEventSystem *v4; // r13
  void (__fastcall *v5)(IGameEventSystem *, _QWORD, _QWORD, __int64, __int64, CUserMessageKeyHintText *, __int64); // r15
  __int64 v6; // [rsp+10h] [rbp-40h]
  unsigned int v7; // [rsp+1Ch] [rbp-34h]

  v1 = (this + 8);
  v3 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent;
  v4 = g_pGameEventSystem;
  v6 = *this;
  v7 = *(this + 14);
  v5 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageKeyHintText_t>(bool)::s_hEvent);
  v5(v4, v7, 0, v6, v3, v1, 48);
  *(this + 1) = &off_402A490;
  CUserMessageKeyHintText::~CUserMessageKeyHintText(v1);
}


// CEventPosterBase<CUserMessageHintText_t, 255>::~CEventPosterBase  (line 109, @0x0000000002282790, libserver.so)  // inlines: FindGameEvent<CUserMessageHintText_t>, FindOrCreateGameEvent<CUserMessageHintText_t>, PostEvent<CUserMessageHintText_t>, ~CNetMessagePB, ~CUserMessageHintText_t, ~CUserMessagePB
// calls: CUserMessageHintText::~CUserMessageHintText
// callers: CHintMessage::Send
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageHintText_t>(bool)::s_hEvent
void __fastcall CEventPosterBase<CUserMessageHintText_t,255>::~CEventPosterBase(
        CEventPosterBase<CUserMessageHintText_t,255> *const this)
{
  CUserMessageHintText *v1; // r12
  __int64 v3; // r14
  IGameEventSystem *v4; // r13
  void (__fastcall *v5)(IGameEventSystem *, _QWORD, _QWORD, __int64, __int64, CUserMessageHintText *, __int64); // r15
  __int64 v6; // [rsp+10h] [rbp-40h]
  unsigned int v7; // [rsp+1Ch] [rbp-34h]

  v1 = (this + 8);
  v3 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageHintText_t>(bool)::s_hEvent;
  v4 = g_pGameEventSystem;
  v6 = *this;
  v7 = *(this + 10);
  v5 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageHintText_t>(bool)::s_hEvent);
  v5(v4, v7, 0, v6, v3, v1, 32);
  *(this + 1) = &off_404EF10;
  CUserMessageHintText::~CUserMessageHintText(v1);
}


// CEventPosterBase<CUserMessageVoiceSubtitle_t, 255>::~CEventPosterBase  (line 109, @0x00000000022b7310, libserver.so)  // inlines: FindGameEvent<CUserMessageVoiceSubtitle_t>, FindOrCreateGameEvent<CUserMessageVoiceSubtitle_t>, PostEvent<CUserMessageVoiceSubtitle_t>, ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageVoiceSubtitle_t
// calls: CUserMessageVoiceSubtitle::~CUserMessageVoiceSubtitle
// callers: CMultiplayRules::VoiceCommand
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceSubtitle_t>(bool)::s_hEvent
void __fastcall CEventPosterBase<CUserMessageVoiceSubtitle_t,255>::~CEventPosterBase(
        CEventPosterBase<CUserMessageVoiceSubtitle_t,255> *const this)
{
  CUserMessageVoiceSubtitle *v1; // r12
  __int64 v3; // r14
  IGameEventSystem *v4; // r13
  void (__fastcall *v5)(IGameEventSystem *, _QWORD, _QWORD, __int64, __int64, CUserMessageVoiceSubtitle *, __int64); // r15
  __int64 v6; // [rsp+10h] [rbp-40h]
  unsigned int v7; // [rsp+1Ch] [rbp-34h]

  v1 = (this + 8);
  v3 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceSubtitle_t>(bool)::s_hEvent;
  v4 = g_pGameEventSystem;
  v6 = *this;
  v7 = *(this + 12);
  v5 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageVoiceSubtitle_t>(bool)::s_hEvent);
  v5(v4, v7, 0, v6, v3, v1, 40);
  *(this + 1) = &off_40585D0;
  CUserMessageVoiceSubtitle::~CUserMessageVoiceSubtitle(v1);
}


// CEventPosterBase<CUserMessageVGUIMenu_t, 255>::~CEventPosterBase  (line 109, @0x000000000231e8e0, libserver.so)  // inlines: FindGameEvent<CUserMessageVGUIMenu_t>, FindOrCreateGameEvent<CUserMessageVGUIMenu_t>, PostEvent<CUserMessageVGUIMenu_t>, ~CNetMessagePB, ~CUserMessagePB, ~CUserMessageVGUIMenu_t
// calls: CUserMessageVGUIMenu::~CUserMessageVGUIMenu
// callers: CBasePlayer::ShowViewPortPanel, ShowViewPortPanelToAll
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageVGUIMenu_t>(bool)::s_hEvent
void __fastcall CEventPosterBase<CUserMessageVGUIMenu_t,255>::~CEventPosterBase(
        CEventPosterBase<CUserMessageVGUIMenu_t,255> *const this)
{
  CUserMessageVGUIMenu *v1; // r12
  __int64 v3; // r14
  IGameEventSystem *v4; // r13
  void (__fastcall *v5)(IGameEventSystem *, _QWORD, _QWORD, __int64, __int64, CUserMessageVGUIMenu *, __int64); // r15
  __int64 v6; // [rsp+10h] [rbp-40h]
  unsigned int v7; // [rsp+1Ch] [rbp-34h]

  v1 = (this + 8);
  v3 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageVGUIMenu_t>(bool)::s_hEvent;
  v4 = g_pGameEventSystem;
  v6 = *this;
  v7 = *(this + 18);
  v5 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageVGUIMenu_t>(bool)::s_hEvent);
  v5(v4, v7, 0, v6, v3, v1, 64);
  *(this + 1) = &off_4073970;
  CUserMessageVGUIMenu::~CUserMessageVGUIMenu(v1);
}


// CEventPosterBase<CUserMessageCrosshairAngle_t, 255>::~CEventPosterBase  (line 109, @0x000000000231e9d0, libserver.so)  // inlines: FindGameEvent<CUserMessageCrosshairAngle_t>, FindOrCreateGameEvent<CUserMessageCrosshairAngle_t>, PostEvent<CUserMessageCrosshairAngle_t>, ~CNetMessagePB, ~CUserMessageCrosshairAngle_t, ~CUserMessagePB
// calls: CUserMessageCrosshairAngle::~CUserMessageCrosshairAngle
// callers: CBasePlayer::ResetAutoaim
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageCrosshairAngle_t>(bool)::s_hEvent
void __fastcall CEventPosterBase<CUserMessageCrosshairAngle_t,255>::~CEventPosterBase(
        CEventPosterBase<CUserMessageCrosshairAngle_t,255> *const this)
{
  CUserMessageCrosshairAngle *v1; // r12
  __int64 v3; // r14
  IGameEventSystem *v4; // r13
  void (__fastcall *v5)(IGameEventSystem *, _QWORD, _QWORD, __int64, __int64, CUserMessageCrosshairAngle *, __int64); // r15
  __int64 v6; // [rsp+10h] [rbp-40h]
  unsigned int v7; // [rsp+1Ch] [rbp-34h]

  v1 = (this + 8);
  v3 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageCrosshairAngle_t>(bool)::s_hEvent;
  v4 = g_pGameEventSystem;
  v6 = *this;
  v7 = *(this + 10);
  v5 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageCrosshairAngle_t>(bool)::s_hEvent);
  v5(v4, v7, 0, v6, v3, v1, 32);
  *(this + 1) = &off_4073730;
  CUserMessageCrosshairAngle::~CUserMessageCrosshairAngle(v1);
}


// CEventPosterBase<CUserMessageCloseCaption_t, 255>::~CEventPosterBase  (line 109, @0x00000000023af6f0, libserver.so)  // inlines: FindGameEvent<CUserMessageCloseCaption_t>, FindOrCreateGameEvent<CUserMessageCloseCaption_t>, PostEvent<CUserMessageCloseCaption_t>, ~CNetMessagePB, ~CUserMessageCloseCaption_t, ~CUserMessagePB
// calls: CUserMessageCloseCaption::~CUserMessageCloseCaption
// callers: CSceneEntity::DispatchStartSpeak
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageCloseCaption_t>(bool)::s_hEvent
void __fastcall CEventPosterBase<CUserMessageCloseCaption_t,255>::~CEventPosterBase(
        CEventPosterBase<CUserMessageCloseCaption_t,255> *const this)
{
  CUserMessageCloseCaption *v1; // r12
  __int64 v3; // r14
  IGameEventSystem *v4; // r13
  void (__fastcall *v5)(IGameEventSystem *, _QWORD, _QWORD, __int64, __int64, CUserMessageCloseCaption *, __int64); // r15
  __int64 v6; // [rsp+10h] [rbp-40h]
  unsigned int v7; // [rsp+1Ch] [rbp-34h]

  v1 = (this + 8);
  v3 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageCloseCaption_t>(bool)::s_hEvent;
  v4 = g_pGameEventSystem;
  v6 = *this;
  v7 = *(this + 12);
  v5 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageCloseCaption_t>(bool)::s_hEvent);
  v5(v4, v7, 0, v6, v3, v1, 40);
  *(this + 1) = &off_40A4B90;
  CUserMessageCloseCaption::~CUserMessageCloseCaption(v1);
}


// CEventPosterBase<CUserMessageHudText_t, 255>::~CEventPosterBase  (line 109, @0x0000000002413aa0, libserver.so)  // inlines: FindGameEvent<CUserMessageHudText_t>, FindOrCreateGameEvent<CUserMessageHudText_t>, PostEvent<CUserMessageHudText_t>, ~CNetMessagePB, ~CUserMessageHudText_t, ~CUserMessagePB
// calls: CUserMessageHudText::~CUserMessageHudText
// callers: UTIL_ShowMessage
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudText_t>(bool)::s_hEvent
void __fastcall CEventPosterBase<CUserMessageHudText_t,255>::~CEventPosterBase(
        CEventPosterBase<CUserMessageHudText_t,255> *const this)
{
  CUserMessageHudText *v1; // r12
  __int64 v3; // r14
  IGameEventSystem *v4; // r13
  void (__fastcall *v5)(IGameEventSystem *, _QWORD, _QWORD, __int64, __int64, CUserMessageHudText *, __int64); // r15
  __int64 v6; // [rsp+10h] [rbp-40h]
  unsigned int v7; // [rsp+1Ch] [rbp-34h]

  v1 = (this + 8);
  v3 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudText_t>(bool)::s_hEvent;
  v4 = g_pGameEventSystem;
  v6 = *this;
  v7 = *(this + 10);
  v5 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageHudText_t>(bool)::s_hEvent);
  v5(v4, v7, 0, v6, v3, v1, 32);
  *(this + 1) = &off_40D02D0;
  CUserMessageHudText::~CUserMessageHudText(v1);
}


// CEventPosterBase<CUserMessageColoredText_t, 255>::~CEventPosterBase  (line 109, @0x0000000002413b90, libserver.so)  // inlines: FindGameEvent<CUserMessageColoredText_t>, FindOrCreateGameEvent<CUserMessageColoredText_t>, PostEvent<CUserMessageColoredText_t>, ~CNetMessagePB, ~CUserMessageColoredText_t, ~CUserMessagePB
// calls: CUserMessageColoredText::~CUserMessageColoredText
// callers: UTIL_MessageText_WithContext, UTIL_MessageTextAll_WithContext
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent
void __fastcall CEventPosterBase<CUserMessageColoredText_t,255>::~CEventPosterBase(
        CEventPosterBase<CUserMessageColoredText_t,255> *const this)
{
  CUserMessageColoredText *v1; // r12
  __int64 v3; // r14
  IGameEventSystem *v4; // r13
  void (__fastcall *v5)(IGameEventSystem *, _QWORD, _QWORD, __int64, __int64, CUserMessageColoredText *, __int64); // r15
  __int64 v6; // [rsp+10h] [rbp-40h]
  unsigned int v7; // [rsp+1Ch] [rbp-34h]

  v1 = (this + 8);
  v3 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent;
  v4 = g_pGameEventSystem;
  v6 = *this;
  v7 = *(this + 16);
  v5 = *(*g_pGameEventSystem + 128LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CUserMessageColoredText_t>(bool)::s_hEvent);
  v5(v4, v7, 0, v6, v3, v1, 56);
  *(this + 1) = &off_40CF0D0;
  CUserMessageColoredText::~CUserMessageColoredText(v1);
}


// CEntityEventPosterBase<CEntityMessagePropagateForce_t, 255>::~CEntityEventPosterBase  (line 132, @0x00000000023b6f50, libserver.so)  // inlines: FindGameEvent<CEntityMessagePropagateForce_t>, FindOrCreateGameEvent<CEntityMessagePropagateForce_t>, PostEntityEvent<CEntityMessagePropagateForce_t>, ~CEntityMessagePropagateForce_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CEntityMessagePropagateForce::~CEntityMessagePropagateForce
// callers: CRopeKeyframe::PropagateForce
// globals: IGameEventSystem::FindOrCreateGameEvent<CEntityMessagePropagateForce_t>(bool)::s_hEvent
void __fastcall CEntityEventPosterBase<CEntityMessagePropagateForce_t,255>::~CEntityEventPosterBase(
        CEntityEventPosterBase<CEntityMessagePropagateForce_t,255> *const this)
{
  CEntityMessagePropagateForce *v1; // r12
  __int64 v3; // r14
  IGameEventSystem *v4; // r13
  void (__fastcall *v5)(IGameEventSystem *, CEntityEventPosterBase<CEntityMessagePropagateForce_t,255> *const, __int64, CEntityMessagePropagateForce *, __int64, _QWORD); // r15
  unsigned int v6; // [rsp+Ch] [rbp-34h]

  v1 = (this + 8);
  v3 = IGameEventSystem::FindOrCreateGameEvent<CEntityMessagePropagateForce_t>(bool)::s_hEvent;
  v4 = g_pGameEventSystem;
  v6 = *(this + 1);
  v5 = *(*g_pGameEventSystem + 136LL);
  (*(*g_pNetworkMessages + 96LL))(
    g_pNetworkMessages,
    IGameEventSystem::FindOrCreateGameEvent<CEntityMessagePropagateForce_t>(bool)::s_hEvent);
  v5(v4, this, v3, v1, 32, v6);
  *(this + 1) = &off_40A4DD0;
  CEntityMessagePropagateForce::~CEntityMessagePropagateForce(v1);
}


