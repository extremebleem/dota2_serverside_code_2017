// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_usermessages.h:16
class CDOTAUserMsg_AIDebugLine_t : public CUserMessagePB<465, CDOTAUserMsg_AIDebugLine, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_AIDebugLine_t(CDOTAUserMsg_AIDebugLine_t &);
	CDOTAUserMsg_AIDebugLine_t(const CDOTAUserMsg_AIDebugLine_t &);
	CDOTAUserMsg_AIDebugLine_t();
	virtual ~CDOTAUserMsg_AIDebugLine_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:17
class CDOTAUserMsg_ChatEvent_t : public CUserMessagePB<466, CDOTAUserMsg_ChatEvent, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_ChatEvent_t(CDOTAUserMsg_ChatEvent_t &);
	CDOTAUserMsg_ChatEvent_t(const CDOTAUserMsg_ChatEvent_t &);
	CDOTAUserMsg_ChatEvent_t();
	virtual ~CDOTAUserMsg_ChatEvent_t();

	// sizeof = 64
};

// src/game/shared/dota/dota_usermessages.h:18
class CDOTAUserMsg_CombatHeroPositions_t : public CUserMessagePB<467, CDOTAUserMsg_CombatHeroPositions, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_CombatHeroPositions_t(CDOTAUserMsg_CombatHeroPositions_t &);
	CDOTAUserMsg_CombatHeroPositions_t(const CDOTAUserMsg_CombatHeroPositions_t &);
	CDOTAUserMsg_CombatHeroPositions_t();
	virtual ~CDOTAUserMsg_CombatHeroPositions_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:19
class CDOTAUserMsg_CombatLogData_t : public CUserMessagePB<468, CMsgDOTACombatLogEntry, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_CombatLogData_t(CDOTAUserMsg_CombatLogData_t &);
	CDOTAUserMsg_CombatLogData_t(const CDOTAUserMsg_CombatLogData_t &);
	CDOTAUserMsg_CombatLogData_t();
	virtual ~CDOTAUserMsg_CombatLogData_t();

	// sizeof = 232
};

// src/game/shared/dota/dota_usermessages.h:21
class CDOTAUserMsg_CreateLinearProjectile_t : public CUserMessagePB<471, CDOTAUserMsg_CreateLinearProjectile, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_CreateLinearProjectile_t(CDOTAUserMsg_CreateLinearProjectile_t &);
	CDOTAUserMsg_CreateLinearProjectile_t(const CDOTAUserMsg_CreateLinearProjectile_t &);
	CDOTAUserMsg_CreateLinearProjectile_t();
	virtual ~CDOTAUserMsg_CreateLinearProjectile_t();

	// sizeof = 80
};

// src/game/shared/dota/dota_usermessages.h:22
class CDOTAUserMsg_DestroyLinearProjectile_t : public CUserMessagePB<472, CDOTAUserMsg_DestroyLinearProjectile, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_DestroyLinearProjectile_t(CDOTAUserMsg_DestroyLinearProjectile_t &);
	CDOTAUserMsg_DestroyLinearProjectile_t(const CDOTAUserMsg_DestroyLinearProjectile_t &);
	CDOTAUserMsg_DestroyLinearProjectile_t();
	virtual ~CDOTAUserMsg_DestroyLinearProjectile_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:23
class CDOTAUserMsg_DodgeTrackingProjectiles_t : public CUserMessagePB<473, CDOTAUserMsg_DodgeTrackingProjectiles, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_DodgeTrackingProjectiles_t(CDOTAUserMsg_DodgeTrackingProjectiles_t &);
	CDOTAUserMsg_DodgeTrackingProjectiles_t(const CDOTAUserMsg_DodgeTrackingProjectiles_t &);
	CDOTAUserMsg_DodgeTrackingProjectiles_t();
	virtual ~CDOTAUserMsg_DodgeTrackingProjectiles_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:24
class CDOTAUserMsg_GlobalLightColor_t : public CUserMessagePB<474, CDOTAUserMsg_GlobalLightColor, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_GlobalLightColor_t(CDOTAUserMsg_GlobalLightColor_t &);
	CDOTAUserMsg_GlobalLightColor_t(const CDOTAUserMsg_GlobalLightColor_t &);
	CDOTAUserMsg_GlobalLightColor_t();
	virtual ~CDOTAUserMsg_GlobalLightColor_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:25
class CDOTAUserMsg_GlobalLightDirection_t : public CUserMessagePB<475, CDOTAUserMsg_GlobalLightDirection, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_GlobalLightDirection_t(CDOTAUserMsg_GlobalLightDirection_t &);
	CDOTAUserMsg_GlobalLightDirection_t(const CDOTAUserMsg_GlobalLightDirection_t &);
	CDOTAUserMsg_GlobalLightDirection_t();
	virtual ~CDOTAUserMsg_GlobalLightDirection_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:26
class CDOTAUserMsg_InvalidCommand_t : public CUserMessagePB<476, CDOTAUserMsg_InvalidCommand, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_InvalidCommand_t(CDOTAUserMsg_InvalidCommand_t &);
	CDOTAUserMsg_InvalidCommand_t(const CDOTAUserMsg_InvalidCommand_t &);
	CDOTAUserMsg_InvalidCommand_t();
	virtual ~CDOTAUserMsg_InvalidCommand_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:27
class CDOTAUserMsg_LocationPing_t : public CUserMessagePB<477, CDOTAUserMsg_LocationPing, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_LocationPing_t(CDOTAUserMsg_LocationPing_t &);
	CDOTAUserMsg_LocationPing_t(const CDOTAUserMsg_LocationPing_t &);
	CDOTAUserMsg_LocationPing_t();
	virtual ~CDOTAUserMsg_LocationPing_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:28
class CDOTAUserMsg_MapLine_t : public CUserMessagePB<478, CDOTAUserMsg_MapLine, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_MapLine_t(CDOTAUserMsg_MapLine_t &);
	CDOTAUserMsg_MapLine_t(const CDOTAUserMsg_MapLine_t &);
	CDOTAUserMsg_MapLine_t();
	virtual ~CDOTAUserMsg_MapLine_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:29
class CDOTAUserMsg_MiniKillCamInfo_t : public CUserMessagePB<479, CDOTAUserMsg_MiniKillCamInfo, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_MiniKillCamInfo_t(CDOTAUserMsg_MiniKillCamInfo_t &);
	CDOTAUserMsg_MiniKillCamInfo_t(const CDOTAUserMsg_MiniKillCamInfo_t &);
	CDOTAUserMsg_MiniKillCamInfo_t();
	virtual ~CDOTAUserMsg_MiniKillCamInfo_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:30
class CDOTAUserMsg_MinimapDebugPoint_t : public CUserMessagePB<480, CDOTAUserMsg_MinimapDebugPoint, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_MinimapDebugPoint_t(CDOTAUserMsg_MinimapDebugPoint_t &);
	CDOTAUserMsg_MinimapDebugPoint_t(const CDOTAUserMsg_MinimapDebugPoint_t &);
	CDOTAUserMsg_MinimapDebugPoint_t();
	virtual ~CDOTAUserMsg_MinimapDebugPoint_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:31
class CDOTAUserMsg_MinimapEvent_t : public CUserMessagePB<481, CDOTAUserMsg_MinimapEvent, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_MinimapEvent_t(CDOTAUserMsg_MinimapEvent_t &);
	CDOTAUserMsg_MinimapEvent_t(const CDOTAUserMsg_MinimapEvent_t &);
	CDOTAUserMsg_MinimapEvent_t();
	virtual ~CDOTAUserMsg_MinimapEvent_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:32
class CDOTAUserMsg_NevermoreRequiem_t : public CUserMessagePB<482, CDOTAUserMsg_NevermoreRequiem, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_NevermoreRequiem_t(CDOTAUserMsg_NevermoreRequiem_t &);
	CDOTAUserMsg_NevermoreRequiem_t(const CDOTAUserMsg_NevermoreRequiem_t &);
	CDOTAUserMsg_NevermoreRequiem_t();
	virtual ~CDOTAUserMsg_NevermoreRequiem_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:33
class CDOTAUserMsg_OverheadEvent_t : public CUserMessagePB<483, CDOTAUserMsg_OverheadEvent, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_OverheadEvent_t(CDOTAUserMsg_OverheadEvent_t &);
	CDOTAUserMsg_OverheadEvent_t(const CDOTAUserMsg_OverheadEvent_t &);
	CDOTAUserMsg_OverheadEvent_t();
	virtual ~CDOTAUserMsg_OverheadEvent_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:34
class CDOTAUserMsg_SetNextAutobuyItem_t : public CUserMessagePB<484, CDOTAUserMsg_SetNextAutobuyItem, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_SetNextAutobuyItem_t(CDOTAUserMsg_SetNextAutobuyItem_t &);
	CDOTAUserMsg_SetNextAutobuyItem_t(const CDOTAUserMsg_SetNextAutobuyItem_t &);
	CDOTAUserMsg_SetNextAutobuyItem_t();
	virtual ~CDOTAUserMsg_SetNextAutobuyItem_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:35
class CDOTAUserMsg_SharedCooldown_t : public CUserMessagePB<485, CDOTAUserMsg_SharedCooldown, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_SharedCooldown_t(CDOTAUserMsg_SharedCooldown_t &);
	CDOTAUserMsg_SharedCooldown_t(const CDOTAUserMsg_SharedCooldown_t &);
	CDOTAUserMsg_SharedCooldown_t();
	virtual ~CDOTAUserMsg_SharedCooldown_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:36
class CDOTAUserMsg_SpectatorPlayerClick_t : public CUserMessagePB<486, CDOTAUserMsg_SpectatorPlayerClick, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_SpectatorPlayerClick_t(CDOTAUserMsg_SpectatorPlayerClick_t &);
	CDOTAUserMsg_SpectatorPlayerClick_t(const CDOTAUserMsg_SpectatorPlayerClick_t &);
	CDOTAUserMsg_SpectatorPlayerClick_t();
	virtual ~CDOTAUserMsg_SpectatorPlayerClick_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:37
class CDOTAUserMsg_TutorialTipInfo_t : public CUserMessagePB<487, CDOTAUserMsg_TutorialTipInfo, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_TutorialTipInfo_t(CDOTAUserMsg_TutorialTipInfo_t &);
	CDOTAUserMsg_TutorialTipInfo_t(const CDOTAUserMsg_TutorialTipInfo_t &);
	CDOTAUserMsg_TutorialTipInfo_t();
	virtual ~CDOTAUserMsg_TutorialTipInfo_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:38
class CDOTAUserMsg_UnitEvent_t : public CUserMessagePB<488, CDOTAUserMsg_UnitEvent, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_UnitEvent_t(CDOTAUserMsg_UnitEvent_t &);
	CDOTAUserMsg_UnitEvent_t(const CDOTAUserMsg_UnitEvent_t &);
	CDOTAUserMsg_UnitEvent_t();
	virtual ~CDOTAUserMsg_UnitEvent_t();

	// sizeof = 88
};

// src/game/shared/dota/dota_usermessages.h:39
class CDOTAUserMsg_ParticleManager_t : public CUserMessagePB<489, CDOTAUserMsg_ParticleManager, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_ParticleManager_t(CDOTAUserMsg_ParticleManager_t &);
	CDOTAUserMsg_ParticleManager_t(const CDOTAUserMsg_ParticleManager_t &);
	CDOTAUserMsg_ParticleManager_t();
	virtual ~CDOTAUserMsg_ParticleManager_t();

	// sizeof = 152
};

// src/game/shared/dota/dota_usermessages.h:40
class CDOTAUserMsg_BotChat_t : public CUserMessagePB<490, CDOTAUserMsg_BotChat, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_BotChat_t(CDOTAUserMsg_BotChat_t &);
	CDOTAUserMsg_BotChat_t(const CDOTAUserMsg_BotChat_t &);
	CDOTAUserMsg_BotChat_t();
	virtual ~CDOTAUserMsg_BotChat_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:41
class CDOTAUserMsg_HudError_t : public CUserMessagePB<491, CDOTAUserMsg_HudError, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_HudError_t(CDOTAUserMsg_HudError_t &);
	CDOTAUserMsg_HudError_t(const CDOTAUserMsg_HudError_t &);
	CDOTAUserMsg_HudError_t();
	virtual ~CDOTAUserMsg_HudError_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:42
class CDOTAUserMsg_ItemPurchased_t : public CUserMessagePB<492, CDOTAUserMsg_ItemPurchased, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_ItemPurchased_t(CDOTAUserMsg_ItemPurchased_t &);
	CDOTAUserMsg_ItemPurchased_t(const CDOTAUserMsg_ItemPurchased_t &);
	CDOTAUserMsg_ItemPurchased_t();
	virtual ~CDOTAUserMsg_ItemPurchased_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:43
class CDOTAUserMsg_Ping_t : public CUserMessagePB<493, CDOTAUserMsg_Ping, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_Ping_t(CDOTAUserMsg_Ping_t &);
	CDOTAUserMsg_Ping_t(const CDOTAUserMsg_Ping_t &);
	CDOTAUserMsg_Ping_t();
	virtual ~CDOTAUserMsg_Ping_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:44
class CDOTAUserMsg_ItemFound_t : public CUserMessagePB<494, CDOTAUserMsg_ItemFound, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_ItemFound_t(CDOTAUserMsg_ItemFound_t &);
	CDOTAUserMsg_ItemFound_t(const CDOTAUserMsg_ItemFound_t &);
	CDOTAUserMsg_ItemFound_t();
	virtual ~CDOTAUserMsg_ItemFound_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:46
class CDOTAUserMsg_SwapVerify_t : public CUserMessagePB<496, CDOTAUserMsg_SwapVerify, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_SwapVerify_t(CDOTAUserMsg_SwapVerify_t &);
	CDOTAUserMsg_SwapVerify_t(const CDOTAUserMsg_SwapVerify_t &);
	CDOTAUserMsg_SwapVerify_t();
	virtual ~CDOTAUserMsg_SwapVerify_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:47
class CDOTAUserMsg_WorldLine_t : public CUserMessagePB<497, CDOTAUserMsg_WorldLine, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_WorldLine_t(CDOTAUserMsg_WorldLine_t &);
	CDOTAUserMsg_WorldLine_t(const CDOTAUserMsg_WorldLine_t &);
	CDOTAUserMsg_WorldLine_t();
	virtual ~CDOTAUserMsg_WorldLine_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:48
class CDOTAUserMsg_ItemAlert_t : public CUserMessagePB<499, CDOTAUserMsg_ItemAlert, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_ItemAlert_t(CDOTAUserMsg_ItemAlert_t &);
	CDOTAUserMsg_ItemAlert_t(const CDOTAUserMsg_ItemAlert_t &);
	CDOTAUserMsg_ItemAlert_t();
	virtual ~CDOTAUserMsg_ItemAlert_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:50
class CDOTAUserMsg_ChatWheel_t : public CUserMessagePB<501, CDOTAUserMsg_ChatWheel, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_ChatWheel_t(CDOTAUserMsg_ChatWheel_t &);
	CDOTAUserMsg_ChatWheel_t(const CDOTAUserMsg_ChatWheel_t &);
	CDOTAUserMsg_ChatWheel_t();
	virtual ~CDOTAUserMsg_ChatWheel_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:53
class CDOTAUserMsg_TutorialRequestExp_t : public CUserMessagePB<504, CDOTAUserMsg_TutorialRequestExp, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_TutorialRequestExp_t(CDOTAUserMsg_TutorialRequestExp_t &);
	CDOTAUserMsg_TutorialRequestExp_t(const CDOTAUserMsg_TutorialRequestExp_t &);
	CDOTAUserMsg_TutorialRequestExp_t();
	virtual ~CDOTAUserMsg_TutorialRequestExp_t();

	// sizeof = 24
};

// src/game/shared/dota/dota_usermessages.h:54
class CDOTAUserMsg_TutorialPingMinimap_t : public CUserMessagePB<505, CDOTAUserMsg_TutorialPingMinimap, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_TutorialPingMinimap_t(CDOTAUserMsg_TutorialPingMinimap_t &);
	CDOTAUserMsg_TutorialPingMinimap_t(const CDOTAUserMsg_TutorialPingMinimap_t &);
	CDOTAUserMsg_TutorialPingMinimap_t();
	virtual ~CDOTAUserMsg_TutorialPingMinimap_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:55
class CDOTAUserMsg_GamerulesStateChanged_t : public CUserMessagePB<506, CDOTAUserMsg_GamerulesStateChanged, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_GamerulesStateChanged_t(CDOTAUserMsg_GamerulesStateChanged_t &);
	CDOTAUserMsg_GamerulesStateChanged_t(const CDOTAUserMsg_GamerulesStateChanged_t &);
	CDOTAUserMsg_GamerulesStateChanged_t();
	virtual ~CDOTAUserMsg_GamerulesStateChanged_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:56
class CDOTAUserMsg_ShowSurvey_t : public CUserMessagePB<507, CDOTAUserMsg_ShowSurvey, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_ShowSurvey_t(CDOTAUserMsg_ShowSurvey_t &);
	CDOTAUserMsg_ShowSurvey_t(const CDOTAUserMsg_ShowSurvey_t &);
	CDOTAUserMsg_ShowSurvey_t();
	virtual ~CDOTAUserMsg_ShowSurvey_t();

	// sizeof = 64
};

// src/game/shared/dota/dota_usermessages.h:57
class CDOTAUserMsg_TutorialFade_t : public CUserMessagePB<508, CDOTAUserMsg_TutorialFade, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_TutorialFade_t(CDOTAUserMsg_TutorialFade_t &);
	CDOTAUserMsg_TutorialFade_t(const CDOTAUserMsg_TutorialFade_t &);
	CDOTAUserMsg_TutorialFade_t();
	virtual ~CDOTAUserMsg_TutorialFade_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:58
class CDOTAUserMsg_AddQuestLogEntry_t : public CUserMessagePB<509, CDOTAUserMsg_AddQuestLogEntry, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_AddQuestLogEntry_t(CDOTAUserMsg_AddQuestLogEntry_t &);
	CDOTAUserMsg_AddQuestLogEntry_t(const CDOTAUserMsg_AddQuestLogEntry_t &);
	CDOTAUserMsg_AddQuestLogEntry_t();
	virtual ~CDOTAUserMsg_AddQuestLogEntry_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:59
class CDOTAUserMsg_SendStatPopup_t : public CUserMessagePB<510, CDOTAUserMsg_SendStatPopup, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_SendStatPopup_t(CDOTAUserMsg_SendStatPopup_t &);
	CDOTAUserMsg_SendStatPopup_t(const CDOTAUserMsg_SendStatPopup_t &);
	CDOTAUserMsg_SendStatPopup_t();
	virtual ~CDOTAUserMsg_SendStatPopup_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:60
class CDOTAUserMsg_TutorialFinish_t : public CUserMessagePB<511, CDOTAUserMsg_TutorialFinish, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_TutorialFinish_t(CDOTAUserMsg_TutorialFinish_t &);
	CDOTAUserMsg_TutorialFinish_t(const CDOTAUserMsg_TutorialFinish_t &);
	CDOTAUserMsg_TutorialFinish_t();
	virtual ~CDOTAUserMsg_TutorialFinish_t();

	// sizeof = 56
};

// src/game/shared/dota/dota_usermessages.h:61
class CDOTAUserMsg_SendRoshanPopup_t : public CUserMessagePB<512, CDOTAUserMsg_SendRoshanPopup, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_SendRoshanPopup_t(CDOTAUserMsg_SendRoshanPopup_t &);
	CDOTAUserMsg_SendRoshanPopup_t(const CDOTAUserMsg_SendRoshanPopup_t &);
	CDOTAUserMsg_SendRoshanPopup_t();
	virtual ~CDOTAUserMsg_SendRoshanPopup_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:62
class CDOTAUserMsg_SendGenericToolTip_t : public CUserMessagePB<513, CDOTAUserMsg_SendGenericToolTip, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_SendGenericToolTip_t(CDOTAUserMsg_SendGenericToolTip_t &);
	CDOTAUserMsg_SendGenericToolTip_t(const CDOTAUserMsg_SendGenericToolTip_t &);
	CDOTAUserMsg_SendGenericToolTip_t();
	virtual ~CDOTAUserMsg_SendGenericToolTip_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:64
class CDOTAUserMsg_CustomMsg_t : public CUserMessagePB<515, CDOTAUserMsg_CustomMsg, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_CustomMsg_t(CDOTAUserMsg_CustomMsg_t &);
	CDOTAUserMsg_CustomMsg_t(const CDOTAUserMsg_CustomMsg_t &);
	CDOTAUserMsg_CustomMsg_t();
	virtual ~CDOTAUserMsg_CustomMsg_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:67
class CDOTAUserMsg_TEProjectile_t : public CUserMessagePB<518, CDOTAUserMsg_TE_Projectile, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_TEProjectile_t(CDOTAUserMsg_TEProjectile_t &);
	CDOTAUserMsg_TEProjectile_t(const CDOTAUserMsg_TEProjectile_t &);
	CDOTAUserMsg_TEProjectile_t();
	virtual ~CDOTAUserMsg_TEProjectile_t();

	// sizeof = 64
};

// src/game/shared/dota/dota_usermessages.h:68
class CDOTAUserMsg_TEProjectileLoc_t : public CUserMessagePB<519, CDOTAUserMsg_TE_ProjectileLoc, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_TEProjectileLoc_t(CDOTAUserMsg_TEProjectileLoc_t &);
	CDOTAUserMsg_TEProjectileLoc_t(const CDOTAUserMsg_TEProjectileLoc_t &);
	CDOTAUserMsg_TEProjectileLoc_t();
	virtual ~CDOTAUserMsg_TEProjectileLoc_t();

	// sizeof = 72
};

// src/game/shared/dota/dota_usermessages.h:69
class CDOTAUserMsg_TEDotaBloodImpact_t : public CUserMessagePB<520, CDOTAUserMsg_TE_DotaBloodImpact, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_TEDotaBloodImpact_t(CDOTAUserMsg_TEDotaBloodImpact_t &);
	CDOTAUserMsg_TEDotaBloodImpact_t(const CDOTAUserMsg_TEDotaBloodImpact_t &);
	CDOTAUserMsg_TEDotaBloodImpact_t();
	virtual ~CDOTAUserMsg_TEDotaBloodImpact_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:70
class CDOTAUserMsg_AbilityPing_t : public CUserMessagePB<523, CDOTAUserMsg_AbilityPing, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_AbilityPing_t(CDOTAUserMsg_AbilityPing_t &);
	CDOTAUserMsg_AbilityPing_t(const CDOTAUserMsg_AbilityPing_t &);
	CDOTAUserMsg_AbilityPing_t();
	virtual ~CDOTAUserMsg_AbilityPing_t();

	// sizeof = 56
};

// src/game/shared/dota/dota_usermessages.h:71
class CDOTAUserMsg_TEUnitAnimation_t : public CUserMessagePB<521, CDOTAUserMsg_TE_UnitAnimation, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_TEUnitAnimation_t(CDOTAUserMsg_TEUnitAnimation_t &);
	CDOTAUserMsg_TEUnitAnimation_t(const CDOTAUserMsg_TEUnitAnimation_t &);
	CDOTAUserMsg_TEUnitAnimation_t();
	virtual ~CDOTAUserMsg_TEUnitAnimation_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:72
class CDOTAUserMsg_TEUnitAnimationEnd_t : public CUserMessagePB<522, CDOTAUserMsg_TE_UnitAnimationEnd, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_TEUnitAnimationEnd_t(CDOTAUserMsg_TEUnitAnimationEnd_t &);
	CDOTAUserMsg_TEUnitAnimationEnd_t(const CDOTAUserMsg_TEUnitAnimationEnd_t &);
	CDOTAUserMsg_TEUnitAnimationEnd_t();
	virtual ~CDOTAUserMsg_TEUnitAnimationEnd_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:73
class CDOTAUserMsg_ShowGenericPopup_t : public CUserMessagePB<524, CDOTAUserMsg_ShowGenericPopup, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_ShowGenericPopup_t(CDOTAUserMsg_ShowGenericPopup_t &);
	CDOTAUserMsg_ShowGenericPopup_t(const CDOTAUserMsg_ShowGenericPopup_t &);
	CDOTAUserMsg_ShowGenericPopup_t();
	virtual ~CDOTAUserMsg_ShowGenericPopup_t();

	// sizeof = 64
};

// src/game/shared/dota/dota_usermessages.h:74
class CDOTAUserMsg_VoteStart_t : public CUserMessagePB<525, CDOTAUserMsg_VoteStart, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_VoteStart_t(CDOTAUserMsg_VoteStart_t &);
	CDOTAUserMsg_VoteStart_t(const CDOTAUserMsg_VoteStart_t &);
	CDOTAUserMsg_VoteStart_t();
	virtual ~CDOTAUserMsg_VoteStart_t();

	// sizeof = 64
};

// src/game/shared/dota/dota_usermessages.h:75
class CDOTAUserMsg_VoteUpdate_t : public CUserMessagePB<526, CDOTAUserMsg_VoteUpdate, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_VoteUpdate_t(CDOTAUserMsg_VoteUpdate_t &);
	CDOTAUserMsg_VoteUpdate_t(const CDOTAUserMsg_VoteUpdate_t &);
	CDOTAUserMsg_VoteUpdate_t();
	virtual ~CDOTAUserMsg_VoteUpdate_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:76
class CDOTAUserMsg_VoteEnd_t : public CUserMessagePB<527, CDOTAUserMsg_VoteEnd, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_VoteEnd_t(CDOTAUserMsg_VoteEnd_t &);
	CDOTAUserMsg_VoteEnd_t(const CDOTAUserMsg_VoteEnd_t &);
	CDOTAUserMsg_VoteEnd_t();
	virtual ~CDOTAUserMsg_VoteEnd_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:77
class CDOTAUserMsg_BoosterState_t : public CUserMessagePB<528, CDOTAUserMsg_BoosterState, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_BoosterState_t(CDOTAUserMsg_BoosterState_t &);
	CDOTAUserMsg_BoosterState_t(const CDOTAUserMsg_BoosterState_t &);
	CDOTAUserMsg_BoosterState_t();
	virtual ~CDOTAUserMsg_BoosterState_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:78
class CDOTAUserMsg_WillPurchaseAlert_t : public CUserMessagePB<529, CDOTAUserMsg_WillPurchaseAlert, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_WillPurchaseAlert_t(CDOTAUserMsg_WillPurchaseAlert_t &);
	CDOTAUserMsg_WillPurchaseAlert_t(const CDOTAUserMsg_WillPurchaseAlert_t &);
	CDOTAUserMsg_WillPurchaseAlert_t();
	virtual ~CDOTAUserMsg_WillPurchaseAlert_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:80
class CDOTAUserMsg_PlayerMMR_t : public CUserMessagePB<531, CDOTAUserMsg_PlayerMMR, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_PlayerMMR_t(CDOTAUserMsg_PlayerMMR_t &);
	CDOTAUserMsg_PlayerMMR_t(const CDOTAUserMsg_PlayerMMR_t &);
	CDOTAUserMsg_PlayerMMR_t();
	virtual ~CDOTAUserMsg_PlayerMMR_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:81
class CDOTAUserMsg_AbilitySteal_t : public CUserMessagePB<532, CDOTAUserMsg_AbilitySteal, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_AbilitySteal_t(CDOTAUserMsg_AbilitySteal_t &);
	CDOTAUserMsg_AbilitySteal_t(const CDOTAUserMsg_AbilitySteal_t &);
	CDOTAUserMsg_AbilitySteal_t();
	virtual ~CDOTAUserMsg_AbilitySteal_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:82
class CDOTAUserMsg_CourierKilledAlert_t : public CUserMessagePB<533, CDOTAUserMsg_CourierKilledAlert, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_CourierKilledAlert_t(CDOTAUserMsg_CourierKilledAlert_t &);
	CDOTAUserMsg_CourierKilledAlert_t(const CDOTAUserMsg_CourierKilledAlert_t &);
	CDOTAUserMsg_CourierKilledAlert_t();
	virtual ~CDOTAUserMsg_CourierKilledAlert_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:83
class CDOTAUserMsg_EnemyItemAlert_t : public CUserMessagePB<534, CDOTAUserMsg_EnemyItemAlert, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_EnemyItemAlert_t(CDOTAUserMsg_EnemyItemAlert_t &);
	CDOTAUserMsg_EnemyItemAlert_t(const CDOTAUserMsg_EnemyItemAlert_t &);
	CDOTAUserMsg_EnemyItemAlert_t();
	virtual ~CDOTAUserMsg_EnemyItemAlert_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:84
class CDOTAUserMsg_StatsMatchDetails_t : public CUserMessagePB<535, CDOTAUserMsg_StatsMatchDetails, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_StatsMatchDetails_t(CDOTAUserMsg_StatsMatchDetails_t &);
	CDOTAUserMsg_StatsMatchDetails_t(const CDOTAUserMsg_StatsMatchDetails_t &);
	CDOTAUserMsg_StatsMatchDetails_t();
	virtual ~CDOTAUserMsg_StatsMatchDetails_t();

	// sizeof = 168
};

// src/game/shared/dota/dota_usermessages.h:85
class CDOTAUserMsg_MiniTaunt_t : public CUserMessagePB<536, CDOTAUserMsg_MiniTaunt, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_MiniTaunt_t(CDOTAUserMsg_MiniTaunt_t &);
	CDOTAUserMsg_MiniTaunt_t(const CDOTAUserMsg_MiniTaunt_t &);
	CDOTAUserMsg_MiniTaunt_t();
	virtual ~CDOTAUserMsg_MiniTaunt_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:86
class CDOTAUserMsg_BuyBackStateAlert_t : public CUserMessagePB<537, CDOTAUserMsg_BuyBackStateAlert, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_BuyBackStateAlert_t(CDOTAUserMsg_BuyBackStateAlert_t &);
	CDOTAUserMsg_BuyBackStateAlert_t(const CDOTAUserMsg_BuyBackStateAlert_t &);
	CDOTAUserMsg_BuyBackStateAlert_t();
	virtual ~CDOTAUserMsg_BuyBackStateAlert_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:87
class CDOTAUserMsg_SpeechBubble_t : public CUserMessagePB<538, CDOTAUserMsg_SpeechBubble, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_SpeechBubble_t(CDOTAUserMsg_SpeechBubble_t &);
	CDOTAUserMsg_SpeechBubble_t(const CDOTAUserMsg_SpeechBubble_t &);
	CDOTAUserMsg_SpeechBubble_t();
	virtual ~CDOTAUserMsg_SpeechBubble_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:88
class CDOTAUserMsg_CustomHeaderMessage_t : public CUserMessagePB<539, CDOTAUserMsg_CustomHeaderMessage, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_CustomHeaderMessage_t(CDOTAUserMsg_CustomHeaderMessage_t &);
	CDOTAUserMsg_CustomHeaderMessage_t(const CDOTAUserMsg_CustomHeaderMessage_t &);
	CDOTAUserMsg_CustomHeaderMessage_t();
	virtual ~CDOTAUserMsg_CustomHeaderMessage_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:89
class CDOTAUserMsg_QuickBuyAlert_t : public CUserMessagePB<540, CDOTAUserMsg_QuickBuyAlert, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_QuickBuyAlert_t(CDOTAUserMsg_QuickBuyAlert_t &);
	CDOTAUserMsg_QuickBuyAlert_t(const CDOTAUserMsg_QuickBuyAlert_t &);
	CDOTAUserMsg_QuickBuyAlert_t();
	virtual ~CDOTAUserMsg_QuickBuyAlert_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:92
class CDOTAUserMsg_ModifierAlert_t : public CUserMessagePB<543, CDOTAUserMsg_ModifierAlert, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_ModifierAlert_t(CDOTAUserMsg_ModifierAlert_t &);
	CDOTAUserMsg_ModifierAlert_t(const CDOTAUserMsg_ModifierAlert_t &);
	CDOTAUserMsg_ModifierAlert_t();
	virtual ~CDOTAUserMsg_ModifierAlert_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:93
class CDOTAUserMsg_HPManaAlert_t : public CUserMessagePB<544, CDOTAUserMsg_HPManaAlert, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_HPManaAlert_t(CDOTAUserMsg_HPManaAlert_t &);
	CDOTAUserMsg_HPManaAlert_t(const CDOTAUserMsg_HPManaAlert_t &);
	CDOTAUserMsg_HPManaAlert_t();
	virtual ~CDOTAUserMsg_HPManaAlert_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:94
class CDOTAUserMsg_GlyphAlert_t : public CUserMessagePB<545, CDOTAUserMsg_GlyphAlert, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_GlyphAlert_t(CDOTAUserMsg_GlyphAlert_t &);
	CDOTAUserMsg_GlyphAlert_t(const CDOTAUserMsg_GlyphAlert_t &);
	CDOTAUserMsg_GlyphAlert_t();
	virtual ~CDOTAUserMsg_GlyphAlert_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:96
class CDOTAUserMsg_SpectatorPlayerUnitOrders_t : public CUserMessagePB<547, CDOTAUserMsg_SpectatorPlayerUnitOrders, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_SpectatorPlayerUnitOrders_t(CDOTAUserMsg_SpectatorPlayerUnitOrders_t &);
	CDOTAUserMsg_SpectatorPlayerUnitOrders_t(const CDOTAUserMsg_SpectatorPlayerUnitOrders_t &);
	CDOTAUserMsg_SpectatorPlayerUnitOrders_t();
	virtual ~CDOTAUserMsg_SpectatorPlayerUnitOrders_t();

	// sizeof = 72
};

// src/game/shared/dota/dota_usermessages.h:97
class CDOTAUserMsg_CustomHudElement_Create_t : public CUserMessagePB<548, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_CustomHudElement_Create_t(CDOTAUserMsg_CustomHudElement_Create_t &);
	CDOTAUserMsg_CustomHudElement_Create_t(const CDOTAUserMsg_CustomHudElement_Create_t &);
	CDOTAUserMsg_CustomHudElement_Create_t();
	virtual ~CDOTAUserMsg_CustomHudElement_Create_t();

	// sizeof = 56
};

// src/game/shared/dota/dota_usermessages.h:98
class CDOTAUserMsg_CustomHudElement_Modify_t : public CUserMessagePB<549, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_CustomHudElement_Modify_t(CDOTAUserMsg_CustomHudElement_Modify_t &);
	CDOTAUserMsg_CustomHudElement_Modify_t(const CDOTAUserMsg_CustomHudElement_Modify_t &);
	CDOTAUserMsg_CustomHudElement_Modify_t();
	virtual ~CDOTAUserMsg_CustomHudElement_Modify_t();

	// sizeof = 56
};

// src/game/shared/dota/dota_usermessages.h:99
class CDOTAUserMsg_CustomHudElement_Destroy_t : public CUserMessagePB<550, CDOTAUserMsg_CustomHudElement_Destroy, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_CustomHudElement_Destroy_t(CDOTAUserMsg_CustomHudElement_Destroy_t &);
	CDOTAUserMsg_CustomHudElement_Destroy_t(const CDOTAUserMsg_CustomHudElement_Destroy_t &);
	CDOTAUserMsg_CustomHudElement_Destroy_t();
	virtual ~CDOTAUserMsg_CustomHudElement_Destroy_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:101
class CDOTAUserMsg_ProjectionAbility_t : public CUserMessagePB<552, CDOTAUserMsg_ProjectionAbility, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_ProjectionAbility_t(CDOTAUserMsg_ProjectionAbility_t &);
	CDOTAUserMsg_ProjectionAbility_t(const CDOTAUserMsg_ProjectionAbility_t &);
	CDOTAUserMsg_ProjectionAbility_t();
	virtual ~CDOTAUserMsg_ProjectionAbility_t();

	// sizeof = 56
};

// src/game/shared/dota/dota_usermessages.h:102
class CDOTAUserMsg_ProjectionEvent_t : public CUserMessagePB<553, CDOTAUserMsg_ProjectionEvent, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_ProjectionEvent_t(CDOTAUserMsg_ProjectionEvent_t &);
	CDOTAUserMsg_ProjectionEvent_t(const CDOTAUserMsg_ProjectionEvent_t &);
	CDOTAUserMsg_ProjectionEvent_t();
	virtual ~CDOTAUserMsg_ProjectionEvent_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:103
class CDOTAUserMsg_CombatLogDataHLTV_t : public CUserMessagePB<554, CMsgDOTACombatLogEntry, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_CombatLogDataHLTV_t(CDOTAUserMsg_CombatLogDataHLTV_t &);
	CDOTAUserMsg_CombatLogDataHLTV_t(const CDOTAUserMsg_CombatLogDataHLTV_t &);
	CDOTAUserMsg_CombatLogDataHLTV_t();
	virtual ~CDOTAUserMsg_CombatLogDataHLTV_t();

	// sizeof = 232
};

// src/game/shared/dota/dota_usermessages.h:104
class CDOTAUserMsg_XPAlert_t : public CUserMessagePB<555, CDOTAUserMsg_XPAlert, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_XPAlert_t(CDOTAUserMsg_XPAlert_t &);
	CDOTAUserMsg_XPAlert_t(const CDOTAUserMsg_XPAlert_t &);
	CDOTAUserMsg_XPAlert_t();
	virtual ~CDOTAUserMsg_XPAlert_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:105
class CDOTAUserMsg_UpdateQuestProgress_t : public CUserMessagePB<556, CDOTAUserMsg_UpdateQuestProgress, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_UpdateQuestProgress_t(CDOTAUserMsg_UpdateQuestProgress_t &);
	CDOTAUserMsg_UpdateQuestProgress_t(const CDOTAUserMsg_UpdateQuestProgress_t &);
	CDOTAUserMsg_UpdateQuestProgress_t();
	virtual ~CDOTAUserMsg_UpdateQuestProgress_t();

	// sizeof = 24
};

// src/game/shared/dota/dota_usermessages.h:106
class CDOTAUserMsg_MatchMetadata_t : public CUserMessagePB<557, CDOTAMatchMetadataFile, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_MatchMetadata_t(CDOTAUserMsg_MatchMetadata_t &);
	CDOTAUserMsg_MatchMetadata_t(const CDOTAUserMsg_MatchMetadata_t &);
	CDOTAUserMsg_MatchMetadata_t();
	virtual ~CDOTAUserMsg_MatchMetadata_t();

	// sizeof = 56
};

// src/game/shared/dota/dota_usermessages.h:107
class CDOTAUserMsg_MatchDetails_t : public CUserMessagePB<558, CMsgDOTAMatch, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_MatchDetails_t(CDOTAUserMsg_MatchDetails_t &);
	CDOTAUserMsg_MatchDetails_t(const CDOTAUserMsg_MatchDetails_t &);
	CDOTAUserMsg_MatchDetails_t();
	virtual ~CDOTAUserMsg_MatchDetails_t();

	// sizeof = 336
};

// src/game/shared/dota/dota_usermessages.h:108
class CDOTAUserMsg_QuestStatus_t : public CUserMessagePB<559, CDOTAUserMsg_QuestStatus, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_QuestStatus_t(CDOTAUserMsg_QuestStatus_t &);
	CDOTAUserMsg_QuestStatus_t(const CDOTAUserMsg_QuestStatus_t &);
	CDOTAUserMsg_QuestStatus_t();
	virtual ~CDOTAUserMsg_QuestStatus_t();

	// sizeof = 56
};

// src/game/shared/dota/dota_usermessages.h:109
class CDOTAUserMsg_SuggestHeroPick_t : public CUserMessagePB<560, CDOTAUserMsg_SuggestHeroPick, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_SuggestHeroPick_t(CDOTAUserMsg_SuggestHeroPick_t &);
	CDOTAUserMsg_SuggestHeroPick_t(const CDOTAUserMsg_SuggestHeroPick_t &);
	CDOTAUserMsg_SuggestHeroPick_t();
	virtual ~CDOTAUserMsg_SuggestHeroPick_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:110
class CDOTAUserMsg_SuggestHeroRole_t : public CUserMessagePB<561, CDOTAUserMsg_SuggestHeroRole, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_SuggestHeroRole_t(CDOTAUserMsg_SuggestHeroRole_t &);
	CDOTAUserMsg_SuggestHeroRole_t(const CDOTAUserMsg_SuggestHeroRole_t &);
	CDOTAUserMsg_SuggestHeroRole_t();
	virtual ~CDOTAUserMsg_SuggestHeroRole_t();

	// sizeof = 40
};

// src/game/shared/dota/dota_usermessages.h:111
class CDOTAUserMsg_KillcamDamageTaken_t : public CUserMessagePB<562, CDOTAUserMsg_KillcamDamageTaken, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_KillcamDamageTaken_t(CDOTAUserMsg_KillcamDamageTaken_t &);
	CDOTAUserMsg_KillcamDamageTaken_t(const CDOTAUserMsg_KillcamDamageTaken_t &);
	CDOTAUserMsg_KillcamDamageTaken_t();
	virtual ~CDOTAUserMsg_KillcamDamageTaken_t();

	// sizeof = 56
};

// src/game/shared/dota/dota_usermessages.h:112
class CDOTAUserMsg_SelectPenaltyGold_t : public CUserMessagePB<563, CDOTAUserMsg_SelectPenaltyGold, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_SelectPenaltyGold_t(CDOTAUserMsg_SelectPenaltyGold_t &);
	CDOTAUserMsg_SelectPenaltyGold_t(const CDOTAUserMsg_SelectPenaltyGold_t &);
	CDOTAUserMsg_SelectPenaltyGold_t();
	virtual ~CDOTAUserMsg_SelectPenaltyGold_t();

	// sizeof = 32
};

// src/game/shared/dota/dota_usermessages.h:113
class CDOTAUserMsg_RollDiceResult_t : public CUserMessagePB<564, CDOTAUserMsg_RollDiceResult, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_RollDiceResult_t(CDOTAUserMsg_RollDiceResult_t &);
	CDOTAUserMsg_RollDiceResult_t(const CDOTAUserMsg_RollDiceResult_t &);
	CDOTAUserMsg_RollDiceResult_t();
	virtual ~CDOTAUserMsg_RollDiceResult_t();

	// sizeof = 48
};

// src/game/shared/dota/dota_usermessages.h:114
class CDOTAUserMsg_FlipCoinResult_t : public CUserMessagePB<565, CDOTAUserMsg_FlipCoinResult, (NetChannelBufType_t)1> {
public:

	CDOTAUserMsg_FlipCoinResult_t(CDOTAUserMsg_FlipCoinResult_t &);
	CDOTAUserMsg_FlipCoinResult_t(const CDOTAUserMsg_FlipCoinResult_t &);
	CDOTAUserMsg_FlipCoinResult_t();
	virtual ~CDOTAUserMsg_FlipCoinResult_t();

	// sizeof = 40
};
