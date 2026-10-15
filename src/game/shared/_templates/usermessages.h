// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/usermessages.h:22
class CUserMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (NetChannelBufType_t)1> : public CNetMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true> {
public:

	CUserMessagePB(CUserMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (NetChannelBufType_t)1> *, CUserMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (NetChannelBufType_t)1> &);
	CUserMessagePB(CUserMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (NetChannelBufType_t)1> *, const CUserMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (NetChannelBufType_t)1> &);
	CUserMessagePB(CUserMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (NetChannelBufType_t)1> *);
	virtual ~CUserMessagePB(CUserMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (NetChannelBufType_t)1> *, int);

	// sizeof = 48
};

// src/game/shared/usermessages.h:22
class CUserMessagePB<138, CEntityMessageRemoveAllDecals, (NetChannelBufType_t)1> : public CNetMessagePB<138, CEntityMessageRemoveAllDecals, (SignonGroup_t)13u, (NetChannelBufType_t)1, true> {
public:

	CUserMessagePB(CUserMessagePB<138, CEntityMessageRemoveAllDecals, (NetChannelBufType_t)1> &);
	CUserMessagePB(const CUserMessagePB<138, CEntityMessageRemoveAllDecals, (NetChannelBufType_t)1> &);
	CUserMessagePB();
	virtual ~CUserMessagePB();

	// sizeof = 32
};

// src/game/shared/usermessages.h:22
class CUserMessagePB<101, CUserMessageAchievementEvent, (NetChannelBufType_t)1> : public CNetMessagePB<101, CUserMessageAchievementEvent, (SignonGroup_t)13u, (NetChannelBufType_t)1, true> {
public:

	CUserMessagePB(CUserMessagePB<101, CUserMessageAchievementEvent, (NetChannelBufType_t)1> &);
	CUserMessagePB(const CUserMessagePB<101, CUserMessageAchievementEvent, (NetChannelBufType_t)1> &);
	CUserMessagePB();
	virtual ~CUserMessagePB();

	// sizeof = 32
};

// src/game/shared/usermessages.h:102
class CEventPosterBase<CUserMessageAchievementEvent_t, 255> {
protected:

	CEventPosterBase(IRecipientFilter *, CSplitScreenSlot);
	~CEventPosterBase();
	CUserMessageAchievementEvent_t & GetMessageValue();

	// sizeof = 48
};

// src/game/shared/usermessages.h:102
class CEventPosterBase<CUserMessageKeyHintText_t, 255> {
protected:

	CEventPosterBase(IRecipientFilter *, CSplitScreenSlot);
	~CEventPosterBase();
	CUserMessageKeyHintText_t & GetMessageValue();

	// sizeof = 64
};

// src/game/shared/usermessages.h:102
class CEventPosterBase<CUserMessageCurrentTimescale_t, 255> {
protected:

	CEventPosterBase(IRecipientFilter *, CSplitScreenSlot);
	~CEventPosterBase();
	CUserMessageCurrentTimescale_t & GetMessageValue();

	// sizeof = 48
};

// src/game/shared/usermessages.h:124
class CEntityEventPosterBase<CEntityMessageRemoveAllDecals_t, 255> {
protected:

	CEntityEventPosterBase(CBaseEntity *, NetChannelBufType_t);
	~CEntityEventPosterBase();
	CEntityMessageRemoveAllDecals_t & GetMessageValue();

	// sizeof = 48
};

// src/game/shared/usermessages.h:124
class CEntityEventPosterBase<CEntityMessageScreenOverlay_t, 255> {
protected:

	CEntityEventPosterBase(CBaseEntity *, NetChannelBufType_t);
	~CEntityEventPosterBase();
	CEntityMessageScreenOverlay_t & GetMessageValue();

	// sizeof = 48
};

// src/game/shared/usermessages.h:124
class CEntityEventPosterBase<CEntityMessagePropagateForce_t, 255> {
protected:

	CEntityEventPosterBase(CBaseEntity *, NetChannelBufType_t);
	~CEntityEventPosterBase();
	CEntityMessagePropagateForce_t & GetMessageValue();

	// sizeof = 48
};

// CUserMessagePB: 113 more instantiations (full list in INDEX.tsv)
//   CUserMessagePB<137, CEntityMessageScreenOverlay, (NetChannelBufType_t)1>
//   CUserMessagePB<112, CUserMessageKeyHintText, (NetChannelBufType_t)1>
//   CUserMessagePB<105, CUserMessageDesiredTimescale, (NetChannelBufType_t)1>
//   CUserMessagePB<104, CUserMessageCurrentTimescale, (NetChannelBufType_t)1>
//   CUserMessagePB<109, CUserMessageHintText, (NetChannelBufType_t)1>
//   CUserMessagePB<129, CUserMessageVoiceSubtitle, (NetChannelBufType_t)1>
//   CUserMessagePB<126, CUserMessageTrain, (NetChannelBufType_t)1>
//   CUserMessagePB<115, CUserMessageResetHUD, (NetChannelBufType_t)1>
//   CUserMessagePB<127, CUserMessageVGUIMenu, (NetChannelBufType_t)1>
//   CUserMessagePB<133, CUserMessageCrosshairAngle, (NetChannelBufType_t)1>
//   CUserMessagePB<149, CUserMessageHapticPulse, (NetChannelBufType_t)1>
//   CUserMessagePB<139, CEntityMessagePropagateForce, (NetChannelBufType_t)1>
//   CUserMessagePB<102, CUserMessageCloseCaption, (NetChannelBufType_t)1>
//   CUserMessagePB<111, CUserMessageHudText, (NetChannelBufType_t)1>
//   CUserMessagePB<110, CUserMessageHudMsg, (NetChannelBufType_t)1>
//   CUserMessagePB<144, CUserMessageAudioParameter, (NetChannelBufType_t)1>
//   CUserMessagePB<125, CUserMessageScreenTilt, (NetChannelBufType_t)1>
//   CUserMessagePB<124, CUserMessageTextMsg, (NetChannelBufType_t)1>
//   CUserMessagePB<106, CUserMessageFade, (NetChannelBufType_t)1>
//   CUserMessagePB<120, CUserMessageShake, (NetChannelBufType_t)1>
//   CUserMessagePB<119, CUserMessageSayTextChannel, (NetChannelBufType_t)1>
//   CUserMessagePB<113, CUserMessageColoredText, (NetChannelBufType_t)1>
//   CUserMessagePB<118, CUserMessageSayText2, (NetChannelBufType_t)1>
//   CUserMessagePB<117, CUserMessageSayText, (NetChannelBufType_t)1>
//   CUserMessagePB<128, CUserMessageVoiceMask, (NetChannelBufType_t)1>
//   CUserMessagePB<114, CUserMessageRequestState, (NetChannelBufType_t)1>
//   CUserMessagePB<523, CDOTAUserMsg_AbilityPing, (NetChannelBufType_t)1>
//   CUserMessagePB<554, CMsgDOTACombatLogEntry, (NetChannelBufType_t)1>
//   CUserMessagePB<550, CDOTAUserMsg_CustomHudElement_Destroy, (NetChannelBufType_t)1>
//   CUserMessagePB<549, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>, (NetChannelBufType_t)1>
//   CUserMessagePB<548, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>, (NetChannelBufType_t)1>
//   CUserMessagePB<535, CDOTAUserMsg_StatsMatchDetails, (NetChannelBufType_t)1>
//   CUserMessagePB<479, CDOTAUserMsg_MiniKillCamInfo, (NetChannelBufType_t)1>
//   CUserMessagePB<468, CMsgDOTACombatLogEntry, (NetChannelBufType_t)1>
//   CUserMessagePB<467, CDOTAUserMsg_CombatHeroPositions, (NetChannelBufType_t)1>
//   CUserMessagePB<565, CDOTAUserMsg_FlipCoinResult, (NetChannelBufType_t)1>
//   CUserMessagePB<564, CDOTAUserMsg_RollDiceResult, (NetChannelBufType_t)1>
//   CUserMessagePB<563, CDOTAUserMsg_SelectPenaltyGold, (NetChannelBufType_t)1>
//   CUserMessagePB<562, CDOTAUserMsg_KillcamDamageTaken, (NetChannelBufType_t)1>
//   CUserMessagePB<559, CDOTAUserMsg_QuestStatus, (NetChannelBufType_t)1>
//   CUserMessagePB<555, CDOTAUserMsg_XPAlert, (NetChannelBufType_t)1>
//   CUserMessagePB<553, CDOTAUserMsg_ProjectionEvent, (NetChannelBufType_t)1>
//   CUserMessagePB<552, CDOTAUserMsg_ProjectionAbility, (NetChannelBufType_t)1>
//   CUserMessagePB<545, CDOTAUserMsg_GlyphAlert, (NetChannelBufType_t)1>
//   CUserMessagePB<544, CDOTAUserMsg_HPManaAlert, (NetChannelBufType_t)1>
//   CUserMessagePB<543, CDOTAUserMsg_ModifierAlert, (NetChannelBufType_t)1>
//   CUserMessagePB<540, CDOTAUserMsg_QuickBuyAlert, (NetChannelBufType_t)1>
//   CUserMessagePB<537, CDOTAUserMsg_BuyBackStateAlert, (NetChannelBufType_t)1>
//   CUserMessagePB<534, CDOTAUserMsg_EnemyItemAlert, (NetChannelBufType_t)1>
//   CUserMessagePB<531, CDOTAUserMsg_PlayerMMR, (NetChannelBufType_t)1>
//   CUserMessagePB<529, CDOTAUserMsg_WillPurchaseAlert, (NetChannelBufType_t)1>
//   CUserMessagePB<528, CDOTAUserMsg_BoosterState, (NetChannelBufType_t)1>
//   CUserMessagePB<515, CDOTAUserMsg_CustomMsg, (NetChannelBufType_t)1>
//   CUserMessagePB<510, CDOTAUserMsg_SendStatPopup, (NetChannelBufType_t)1>
//   CUserMessagePB<507, CDOTAUserMsg_ShowSurvey, (NetChannelBufType_t)1>
//   CUserMessagePB<506, CDOTAUserMsg_GamerulesStateChanged, (NetChannelBufType_t)1>
//   CUserMessagePB<499, CDOTAUserMsg_ItemAlert, (NetChannelBufType_t)1>
//   CUserMessagePB<497, CDOTAUserMsg_WorldLine, (NetChannelBufType_t)1>
//   CUserMessagePB<496, CDOTAUserMsg_SwapVerify, (NetChannelBufType_t)1>
//   CUserMessagePB<480, CDOTAUserMsg_MinimapDebugPoint, (NetChannelBufType_t)1>
//   CUserMessagePB<478, CDOTAUserMsg_MapLine, (NetChannelBufType_t)1>
//   CUserMessagePB<477, CDOTAUserMsg_LocationPing, (NetChannelBufType_t)1>
//   CUserMessagePB<130, CUserMessageSendAudio, (NetChannelBufType_t)1>
//   CUserMessagePB<556, CDOTAUserMsg_UpdateQuestProgress, (NetChannelBufType_t)1>
//   CUserMessagePB<492, CDOTAUserMsg_ItemPurchased, (NetChannelBufType_t)1>
//   CUserMessagePB<561, CDOTAUserMsg_SuggestHeroRole, (NetChannelBufType_t)1>
//   CUserMessagePB<560, CDOTAUserMsg_SuggestHeroPick, (NetChannelBufType_t)1>
//   CUserMessagePB<547, CDOTAUserMsg_SpectatorPlayerUnitOrders, (NetChannelBufType_t)1>
//   CUserMessagePB<519, CDOTAUserMsg_TE_ProjectileLoc, (NetChannelBufType_t)1>
//   CUserMessagePB<518, CDOTAUserMsg_TE_Projectile, (NetChannelBufType_t)1>
//   CUserMessagePB<511, CDOTAUserMsg_TutorialFinish, (NetChannelBufType_t)1>
//   CUserMessagePB<508, CDOTAUserMsg_TutorialFade, (NetChannelBufType_t)1>
//   CUserMessagePB<501, CDOTAUserMsg_ChatWheel, (NetChannelBufType_t)1>
//   CUserMessagePB<489, CDOTAUserMsg_ParticleManager, (NetChannelBufType_t)1>
//   CUserMessagePB<486, CDOTAUserMsg_SpectatorPlayerClick, (NetChannelBufType_t)1>
//   CUserMessagePB<476, CDOTAUserMsg_InvalidCommand, (NetChannelBufType_t)1>
//   CUserMessagePB<475, CDOTAUserMsg_GlobalLightDirection, (NetChannelBufType_t)1>
//   CUserMessagePB<474, CDOTAUserMsg_GlobalLightColor, (NetChannelBufType_t)1>
//   CUserMessagePB<473, CDOTAUserMsg_DodgeTrackingProjectiles, (NetChannelBufType_t)1>
//   CUserMessagePB<472, CDOTAUserMsg_DestroyLinearProjectile, (NetChannelBufType_t)1>
//   CUserMessagePB<471, CDOTAUserMsg_CreateLinearProjectile, (NetChannelBufType_t)1>
//   CUserMessagePB<538, CDOTAUserMsg_SpeechBubble, (NetChannelBufType_t)1>
//   CUserMessagePB<513, CDOTAUserMsg_SendGenericToolTip, (NetChannelBufType_t)1>
//   CUserMessagePB<509, CDOTAUserMsg_AddQuestLogEntry, (NetChannelBufType_t)1>
//   CUserMessagePB<505, CDOTAUserMsg_TutorialPingMinimap, (NetChannelBufType_t)1>
//   CUserMessagePB<504, CDOTAUserMsg_TutorialRequestExp, (NetChannelBufType_t)1>
//   CUserMessagePB<488, CDOTAUserMsg_UnitEvent, (NetChannelBufType_t)1>
//   CUserMessagePB<539, CDOTAUserMsg_CustomHeaderMessage, (NetChannelBufType_t)1>
//   CUserMessagePB<527, CDOTAUserMsg_VoteEnd, (NetChannelBufType_t)1>
//   CUserMessagePB<526, CDOTAUserMsg_VoteUpdate, (NetChannelBufType_t)1>
//   CUserMessagePB<525, CDOTAUserMsg_VoteStart, (NetChannelBufType_t)1>
//   CUserMessagePB<524, CDOTAUserMsg_ShowGenericPopup, (NetChannelBufType_t)1>
//   CUserMessagePB<493, CDOTAUserMsg_Ping, (NetChannelBufType_t)1>
//   CUserMessagePB<491, CDOTAUserMsg_HudError, (NetChannelBufType_t)1>
//   CUserMessagePB<487, CDOTAUserMsg_TutorialTipInfo, (NetChannelBufType_t)1>
//   CUserMessagePB<485, CDOTAUserMsg_SharedCooldown, (NetChannelBufType_t)1>
//   CUserMessagePB<484, CDOTAUserMsg_SetNextAutobuyItem, (NetChannelBufType_t)1>
//   CUserMessagePB<483, CDOTAUserMsg_OverheadEvent, (NetChannelBufType_t)1>
//   CUserMessagePB<481, CDOTAUserMsg_MinimapEvent, (NetChannelBufType_t)1>
//   CUserMessagePB<466, CDOTAUserMsg_ChatEvent, (NetChannelBufType_t)1>
//   CUserMessagePB<465, CDOTAUserMsg_AIDebugLine, (NetChannelBufType_t)1>
//   CUserMessagePB<490, CDOTAUserMsg_BotChat, (NetChannelBufType_t)1>
//   CUserMessagePB<522, CDOTAUserMsg_TE_UnitAnimationEnd, (NetChannelBufType_t)1>
//   CUserMessagePB<521, CDOTAUserMsg_TE_UnitAnimation, (NetChannelBufType_t)1>
//   CUserMessagePB<520, CDOTAUserMsg_TE_DotaBloodImpact, (NetChannelBufType_t)1>
//   CUserMessagePB<558, CMsgDOTAMatch, (NetChannelBufType_t)1>
//   CUserMessagePB<557, CDOTAMatchMetadataFile, (NetChannelBufType_t)1>
//   CUserMessagePB<494, CDOTAUserMsg_ItemFound, (NetChannelBufType_t)1>
//   CUserMessagePB<482, CDOTAUserMsg_NevermoreRequiem, (NetChannelBufType_t)1>
//   CUserMessagePB<533, CDOTAUserMsg_CourierKilledAlert, (NetChannelBufType_t)1>
//   CUserMessagePB<512, CDOTAUserMsg_SendRoshanPopup, (NetChannelBufType_t)1>
//   CUserMessagePB<536, CDOTAUserMsg_MiniTaunt, (NetChannelBufType_t)1>
//   CUserMessagePB<532, CDOTAUserMsg_AbilitySteal, (NetChannelBufType_t)1>

// CEventPosterBase: 19 more instantiations (full list in INDEX.tsv)
//   CEventPosterBase<CUserMessageDesiredTimescale_t, 255>
//   CEventPosterBase<CUserMessageHintText_t, 255>
//   CEventPosterBase<CUserMessageVoiceSubtitle_t, 255>
//   CEventPosterBase<CUserMessageVGUIMenu_t, 255>
//   CEventPosterBase<CUserMessageResetHUD_t, 255>
//   CEventPosterBase<CUserMessageTrain_t, 255>
//   CEventPosterBase<CUserMessageCrosshairAngle_t, 255>
//   CEventPosterBase<CUserMessageCloseCaption_t, 255>
//   CEventPosterBase<CUserMessageShake_t, 255>
//   CEventPosterBase<CUserMessageFade_t, 255>
//   CEventPosterBase<CUserMessageHudMsg_t, 255>
//   CEventPosterBase<CUserMessageTextMsg_t, 255>
//   CEventPosterBase<CUserMessageSayText_t, 255>
//   CEventPosterBase<CUserMessageSayText2_t, 255>
//   CEventPosterBase<CUserMessageSayTextChannel_t, 255>
//   CEventPosterBase<CUserMessageHudText_t, 255>
//   CEventPosterBase<CUserMessageColoredText_t, 255>
//   CEventPosterBase<CUserMessageRequestState_t, 255>
//   CEventPosterBase<CUserMessageVoiceMask_t, 255>
