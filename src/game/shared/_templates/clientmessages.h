// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/clientmessages.h:42
class CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t> : public CUtlSlot, public IClientMessageDelegateHook {
public:

private:

	CUtlDelegate<bool(CEntityIndex, const CDOTAClientMsg_EventPointsTip_t&)> m_delegate;  // +0x40
	bool m_bInitialized;  // +0x58
	bool m_bDestructionAllowed;  // +0x59
	CClientMessageDelegateHook(const CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t> &);
	CClientMessageDelegateHook();
	~CClientMessageDelegateHook();
	virtual void SetDestructionAllowed();
	virtual void Release();
	void SetDelegate(const CUtlDelegate<bool(CEntityIndex, const CDOTAClientMsg_EventPointsTip_t&)> &);
	bool Dispatch(const CDOTAClientMsg_EventPointsTip_t &);

	// vtable[1] SetDestructionAllowed
	// vtable[0] Release
	// sizeof = 96
};

// src/game/shared/clientmessages.h:42
class CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t> : public CUtlSlot, public IClientMessageDelegateHook {
public:

private:

	CUtlDelegate<bool(CEntityIndex, const CDOTAClientMsg_CoinWager_t&)> m_delegate;  // +0x40
	bool m_bInitialized;  // +0x58
	bool m_bDestructionAllowed;  // +0x59
	CClientMessageDelegateHook(const CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t> &);
	CClientMessageDelegateHook();
	~CClientMessageDelegateHook();
	virtual void SetDestructionAllowed();
	virtual void Release();
	void SetDelegate(const CUtlDelegate<bool(CEntityIndex, const CDOTAClientMsg_CoinWager_t&)> &);
	bool Dispatch(const CDOTAClientMsg_CoinWager_t &);

	// vtable[1] SetDestructionAllowed
	// vtable[0] Release
	// sizeof = 96
};

// src/game/shared/clientmessages.h:42
class CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t> : public CUtlSlot, public IClientMessageDelegateHook {
public:

private:

	CUtlDelegate<bool(CEntityIndex, const CDOTAClientMsg_ChallengeSelect_t&)> m_delegate;  // +0x40
	bool m_bInitialized;  // +0x58
	bool m_bDestructionAllowed;  // +0x59
	CClientMessageDelegateHook(const CClientMessageDelegateHook<CDOTAClientMsg_ChallengeSelect_t> &);
	CClientMessageDelegateHook();
	~CClientMessageDelegateHook();
	virtual void SetDestructionAllowed();
	virtual void Release();
	void SetDelegate(const CUtlDelegate<bool(CEntityIndex, const CDOTAClientMsg_ChallengeSelect_t&)> &);
	bool Dispatch(const CDOTAClientMsg_ChallengeSelect_t &);

	// vtable[1] SetDestructionAllowed
	// vtable[0] Release
	// sizeof = 96
};

// CClientMessageDelegateHook: 47 more instantiations (full list in INDEX.tsv)
//   CClientMessageDelegateHook<CDOTAClientMsg_ChallengeReroll_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_QuestStatus_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_MapPing_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_MapLine_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_AspectRatio_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_UnitsAutoAttackMode_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_SearchString_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_Pause_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_ShopViewMode_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_SetUnitShareFlag_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_SwapRequest_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_SwapAccept_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_WorldLine_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_RequestGraphUpdate_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_ItemAlert_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_EnemyItemAlert_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_ModifierAlert_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_ClickedBuff_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_HPManaAlert_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_GlyphAlert_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_WillPurchaseAlert_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_ChatWheel_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_SendStatPopup_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_BeginLastHitChallenge_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_UpdateQuickBuy_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_PlayerShowCase_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_TeleportRequiresHalt_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_CameraZoomAmount_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_BroadcasterUsingCameraman_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_BroadcasterUsingAssistedCameraOperator_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_FreeInventory_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_BuyBackStateAlert_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_FillEmptySlotsWithBots_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_QuickBuyAlert_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_HeroStatueLike_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_DemoHero_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_ExecuteOrders_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_XPAlert_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_MatchMetadata_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_ToggleAutoattack_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_SpecialAbility_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_KillcamDamageTaken_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_SetEnemyStartingPosition_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_SetDesiredWardPlacement_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_RollDice_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_FlipCoin_t>
//   CClientMessageDelegateHook<CDOTAClientMsg_RecordVote_t>
