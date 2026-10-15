// Reconstructed from DWARF by pahole; not original source.

// src/public/networksystem/inetworkmessages.h:65
class NetworkableDataTraits_t<long long int> {
	NetworkableDataType_t GetDataType();
	int GetNumComps();

	// sizeof = 1
};

// src/public/networksystem/inetworkmessages.h:66
class NetworkableDataTraits_t<long long unsigned int> {
	NetworkableDataType_t GetDataType();
	int GetNumComps();

	// sizeof = 1
};

// src/public/networksystem/inetworkmessages.h:68
class NetworkableDataTraits_t<float> {
	NetworkableDataType_t GetDataType();
	int GetNumComps();

	// sizeof = 1
};

// src/public/networksystem/inetworkmessages.h:982
class CNetMessagePB<52, CBaseCmdKeyValues<CSVCMsg_CmdKeyValues>, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> : public CBaseCmdKeyValues<CSVCMsg_CmdKeyValues> {
public:

	class CProtobufBinding {
		static string s_typeName;

		// sizeof = 0
	};

protected:

	static CProtobufBinding s_ProtobufBinding;
	CNetMessagePB(CNetMessagePB<52, CBaseCmdKeyValues<CSVCMsg_CmdKeyValues>, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> *, const CNetMessagePB<52, CBaseCmdKeyValues<CSVCMsg_CmdKeyValues>, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> &);
	int GetNetworkMessageTypeId();
	CNetMessagePB(CNetMessagePB<52, CBaseCmdKeyValues<CSVCMsg_CmdKeyValues>, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> *);
	virtual ~CNetMessagePB(CNetMessagePB<52, CBaseCmdKeyValues<CSVCMsg_CmdKeyValues>, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> *, int);
	IProtobufBinding * GetProtobufBinding();

	// sizeof = 40
};

// src/public/networksystem/inetworkmessages.h:982
class CNetMessagePB<34, CBaseCmdKeyValues<CCLCMsg_CmdKeyValues>, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> : public CBaseCmdKeyValues<CCLCMsg_CmdKeyValues> {
public:

	class CProtobufBinding {
		static string s_typeName;

		// sizeof = 0
	};

protected:

	static CProtobufBinding s_ProtobufBinding;
	CNetMessagePB(CNetMessagePB<34, CBaseCmdKeyValues<CCLCMsg_CmdKeyValues>, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> *, const CNetMessagePB<34, CBaseCmdKeyValues<CCLCMsg_CmdKeyValues>, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> &);
	int GetNetworkMessageTypeId();
	CNetMessagePB(CNetMessagePB<34, CBaseCmdKeyValues<CCLCMsg_CmdKeyValues>, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> *);
	virtual ~CNetMessagePB(CNetMessagePB<34, CBaseCmdKeyValues<CCLCMsg_CmdKeyValues>, (SignonGroup_t)9u, (NetChannelBufType_t)1, false> *, int);
	IProtobufBinding * GetProtobufBinding();

	// sizeof = 40
};

// src/public/networksystem/inetworkmessages.h:982
class CNetMessagePB<26, CCLCMsg_FileCRCCheck, (SignonGroup_t)10u, (NetChannelBufType_t)1, false> : public CCLCMsg_FileCRCCheck {
public:

	class CProtobufBinding {
		static string s_typeName;

		// sizeof = 0
	};

protected:

	static CProtobufBinding s_ProtobufBinding;
	CNetMessagePB(const CNetMessagePB<26, CCLCMsg_FileCRCCheck, (SignonGroup_t)10u, (NetChannelBufType_t)1, false> &);
	int GetNetworkMessageTypeId();
	CNetMessagePB();
	virtual ~CNetMessagePB();
	IProtobufBinding * GetProtobufBinding();

	// sizeof = 56
};

// NetworkableDataTraits_t: 2 more instantiations (full list in INDEX.tsv)
//   NetworkableDataTraits_t<Vector>
//   NetworkableDataTraits_t<QAngle>

// CNetMessagePB: 190 more instantiations (full list in INDEX.tsv)
//   CNetMessagePB<13, CNETMsg_SpawnGroup_LoadCompleted, (SignonGroup_t)15u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<12, CNETMsg_SpawnGroup_Unload, (SignonGroup_t)15u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<11, CNETMsg_SpawnGroup_SetCreationTick, (SignonGroup_t)15u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<9, CNETMsg_SpawnGroup_ManifestUpdate, (SignonGroup_t)15u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<8, CNETMsg_SpawnGroup_Load, (SignonGroup_t)15u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<7, CNETMsg_SignonState, (SignonGroup_t)10u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<4, CNETMsg_Tick, (SignonGroup_t)3u, (NetChannelBufType_t)0, false>
//   CNetMessagePB<5, CNETMsg_StringCmd, (SignonGroup_t)9u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<6, CNETMsg_SetConVar, (SignonGroup_t)9u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<201, CMsgPlaceDecalEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<-1, ToolEvent_SFMToolActiveStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, ToolEvent_SFMRecordingStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, ToolEvent_FireEntityInput, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, ToolEvent_GetEntityInputs, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, ToolEvent_GetEntityInfo, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, RestartMapToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, DestroyEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, SpawnEntityToolEventResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, SpawnEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, TraceRayServerToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, ChangeMapToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<211, CMsgSosSetLibraryStackFields, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<210, CMsgSosSetSoundEventParams, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<212, CMsgSosStopSoundEventHash, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<209, CMsgSosStopSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<208, CMsgSosStartSoundEvent, (SignonGroup_t)4u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<204, CMsgClearDecalsForSkeletonInstanceEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<203, CMsgClearEntityDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<202, CMsgClearWorldDecalsEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<201, CMsgPlaceDecalEvent, (SignonGroup_t)12u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<-1, ToolEvent_SFMRecordingStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, ToolEvent_SFMToolActiveStateChanged, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, ToolEvent_FireEntityInput, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, ToolEvent_GetEntityInputsResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, ToolEvent_GetEntityInputs, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, ToolEvent_GetEntityInfoResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, ToolEvent_GetEntityInfo, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, RestartMapToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, DestroyAllEntitiesToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, DestroyEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, SpawnEntityToolEventResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, SpawnEntityToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, ToolTraceRayResult, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<-1, TraceRayServerToolEvent, (SignonGroup_t)11u, (NetChannelBufType_t)1, false>
//   CNetMessagePB<207, CMsgSource1LegacyGameEvent, (SignonGroup_t)5u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<138, CEntityMessageRemoveAllDecals, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<101, CUserMessageAchievementEvent, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<137, CEntityMessageScreenOverlay, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<112, CUserMessageKeyHintText, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<205, CMsgSource1LegacyGameEventList, (SignonGroup_t)10u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<105, CUserMessageDesiredTimescale, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<104, CUserMessageCurrentTimescale, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<62, CSVCMsg_HLTVStatus, (SignonGroup_t)0u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<109, CUserMessageHintText, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<129, CUserMessageVoiceSubtitle, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<126, CUserMessageTrain, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<115, CUserMessageResetHUD, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<127, CUserMessageVGUIMenu, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<133, CUserMessageCrosshairAngle, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<149, CUserMessageHapticPulse, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<139, CEntityMessagePropagateForce, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<102, CUserMessageCloseCaption, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<111, CUserMessageHudText, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<110, CUserMessageHudMsg, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<144, CUserMessageAudioParameter, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<125, CUserMessageScreenTilt, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<124, CUserMessageTextMsg, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<106, CUserMessageFade, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<120, CUserMessageShake, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<119, CUserMessageSayTextChannel, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<113, CUserMessageColoredText, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<118, CUserMessageSayText2, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<117, CUserMessageSayText, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<128, CUserMessageVoiceMask, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<114, CUserMessageRequestState, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<523, CDOTAUserMsg_AbilityPing, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<554, CMsgDOTACombatLogEntry, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<550, CDOTAUserMsg_CustomHudElement_Destroy, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<549, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>, (SignonGroup_t)13u, (NetChannelBufType_t)1, 
//   CNetMessagePB<548, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>, (SignonGroup_t)13u, (NetChannelBufType_t)1, 
//   CNetMessagePB<535, CDOTAUserMsg_StatsMatchDetails, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<479, CDOTAUserMsg_MiniKillCamInfo, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<468, CMsgDOTACombatLogEntry, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<467, CDOTAUserMsg_CombatHeroPositions, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<565, CDOTAUserMsg_FlipCoinResult, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<564, CDOTAUserMsg_RollDiceResult, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<563, CDOTAUserMsg_SelectPenaltyGold, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<562, CDOTAUserMsg_KillcamDamageTaken, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<559, CDOTAUserMsg_QuestStatus, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<555, CDOTAUserMsg_XPAlert, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<553, CDOTAUserMsg_ProjectionEvent, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<552, CDOTAUserMsg_ProjectionAbility, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<545, CDOTAUserMsg_GlyphAlert, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<544, CDOTAUserMsg_HPManaAlert, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<543, CDOTAUserMsg_ModifierAlert, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<540, CDOTAUserMsg_QuickBuyAlert, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<537, CDOTAUserMsg_BuyBackStateAlert, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<534, CDOTAUserMsg_EnemyItemAlert, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<531, CDOTAUserMsg_PlayerMMR, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<529, CDOTAUserMsg_WillPurchaseAlert, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<528, CDOTAUserMsg_BoosterState, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<515, CDOTAUserMsg_CustomMsg, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<510, CDOTAUserMsg_SendStatPopup, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<507, CDOTAUserMsg_ShowSurvey, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<506, CDOTAUserMsg_GamerulesStateChanged, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<499, CDOTAUserMsg_ItemAlert, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<497, CDOTAUserMsg_WorldLine, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<496, CDOTAUserMsg_SwapVerify, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<480, CDOTAUserMsg_MinimapDebugPoint, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<478, CDOTAUserMsg_MapLine, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<477, CDOTAUserMsg_LocationPing, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<130, CUserMessageSendAudio, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<556, CDOTAUserMsg_UpdateQuestProgress, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<492, CDOTAUserMsg_ItemPurchased, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<561, CDOTAUserMsg_SuggestHeroRole, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<560, CDOTAUserMsg_SuggestHeroPick, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<547, CDOTAUserMsg_SpectatorPlayerUnitOrders, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<519, CDOTAUserMsg_TE_ProjectileLoc, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<518, CDOTAUserMsg_TE_Projectile, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<511, CDOTAUserMsg_TutorialFinish, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<508, CDOTAUserMsg_TutorialFade, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<501, CDOTAUserMsg_ChatWheel, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<489, CDOTAUserMsg_ParticleManager, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<486, CDOTAUserMsg_SpectatorPlayerClick, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<476, CDOTAUserMsg_InvalidCommand, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<475, CDOTAUserMsg_GlobalLightDirection, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<474, CDOTAUserMsg_GlobalLightColor, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<473, CDOTAUserMsg_DodgeTrackingProjectiles, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<472, CDOTAUserMsg_DestroyLinearProjectile, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<471, CDOTAUserMsg_CreateLinearProjectile, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<538, CDOTAUserMsg_SpeechBubble, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<513, CDOTAUserMsg_SendGenericToolTip, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<509, CDOTAUserMsg_AddQuestLogEntry, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<505, CDOTAUserMsg_TutorialPingMinimap, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<504, CDOTAUserMsg_TutorialRequestExp, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<488, CDOTAUserMsg_UnitEvent, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<539, CDOTAUserMsg_CustomHeaderMessage, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<527, CDOTAUserMsg_VoteEnd, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<526, CDOTAUserMsg_VoteUpdate, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<525, CDOTAUserMsg_VoteStart, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<524, CDOTAUserMsg_ShowGenericPopup, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<493, CDOTAUserMsg_Ping, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<491, CDOTAUserMsg_HudError, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<487, CDOTAUserMsg_TutorialTipInfo, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<485, CDOTAUserMsg_SharedCooldown, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<484, CDOTAUserMsg_SetNextAutobuyItem, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<483, CDOTAUserMsg_OverheadEvent, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<481, CDOTAUserMsg_MinimapEvent, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<466, CDOTAUserMsg_ChatEvent, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<465, CDOTAUserMsg_AIDebugLine, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<490, CDOTAUserMsg_BotChat, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<522, CDOTAUserMsg_TE_UnitAnimationEnd, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<521, CDOTAUserMsg_TE_UnitAnimation, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<520, CDOTAUserMsg_TE_DotaBloodImpact, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<558, CMsgDOTAMatch, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<557, CDOTAMatchMetadataFile, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<494, CDOTAUserMsg_ItemFound, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<482, CDOTAUserMsg_NevermoreRequiem, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<533, CDOTAUserMsg_CourierKilledAlert, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<512, CDOTAUserMsg_SendRoshanPopup, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<536, CDOTAUserMsg_MiniTaunt, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<532, CDOTAUserMsg_AbilitySteal, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>
//   CNetMessagePB<420, CMsgTEDust, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<413, CMsgTEFizz, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<419, CMsgTEExplosion, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<412, CMsgTEEnergySplash, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<400, CMsgTEEffectDispatch, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<410, CMsgTEDecal, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<409, CMsgTEBubbleTrail, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<408, CMsgTEBubbles, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<407, CMsgTEBSPDecal, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<406, CMsgTEBreakModel, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<418, CMsgTEBloodStream, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<405, CMsgTEBeamRing, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<404, CMsgTEBeamPoints, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<403, CMsgTEBeamEnts, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<402, CMsgTEBeamEntPoint, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<401, CMsgTEArmorRicochet, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<411, CMsgTEWorldDecal, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<422, CMsgTESparks, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<426, CMsgTESmoke, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<425, CMsgTEProjectedDecal, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<424, CMsgTEPlayerDecal, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<423, CMsgTEPhysicsProp, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<417, CMsgTEMuzzleFlash, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<421, CMsgTELargeFunnel, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<416, CMsgTEImpact, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<415, CMsgTEGlowSprite, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
//   CNetMessagePB<414, CMsgTEShatterSurface, (SignonGroup_t)5u, (NetChannelBufType_t)0, true>
