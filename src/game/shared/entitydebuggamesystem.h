// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/entitydebuggamesystem.h:19
struct OverlayLine_t {
	int r;  // +0x18
	int g;  // +0x1c
	int b;  // +0x20
	bool noDepthTest;  // +0x24
	bool draw;  // +0x25
	OverlayLine_t();

	// sizeof = 40
};

// src/game/shared/entitydebuggamesystem.h:107
class CEntityDebugGameSystem : public CAutoGameSystem, public CUtlSlot {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

	enum {
		NUM_DEBUG_OVERLAY_LINES = 0x14,
	};

	struct EntityDebugInfo_t {
		uint64 m_nDebugOverlays;  // +0x0

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

	class CCommandMemberInitializer_OnEntityReport {
	private:

		CCommandMemberInitializer_OnEntityReport();
		~CCommandMemberInitializer_OnEntityReport();

		// sizeof = 152
	};

	class CCommandMemberInitializer_OnEntitySummary {
	private:

		CCommandMemberInitializer_OnEntitySummary();
		~CCommandMemberInitializer_OnEntitySummary();

		// sizeof = 152
	};

	struct DebugScrollingMessage_t {
		float m_flStartAbsTime;  // +0x0
		float m_flTimeToLive;  // +0x4
		DebugScrollingMessage_t();
		~DebugScrollingMessage_t();
		DebugScrollingMessage_t(const DebugScrollingMessage_t &);

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

protected:

	static IGameSystemFactory * sm_Factory;

private:

	int m_nDebugOverlayIndex;  // +0x4c
	typedef CUtlHashtable<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<unsigned int>, undefined_t, CUtlMemory<CUtlHashtableEntry<unsigned int, CEntityDebugGameSystem::EntityDebugInfo_t>, int> > DebugEntityHash_t;

	DebugEntityHash_t m_simDebugEntities;  // +0x220
	DebugEntityHash_t m_renderDebugEntities;  // +0x240
	CUtlMap<int, CUtlVector<CEntityDebugGameSystem::DebugScrollingMessage_t, CUtlMemory<CEntityDebugGameSystem::DebugScrollingMessage_t, int> >*, short unsigned int, bool (*)(int const&, int const&)> m_ScrollingMessageLists;  // +0x260
	bool m_bInDebugSelect;  // +0x2a0

	typedef CAutoGameSystem BaseClass;
	typedef handle_t DebugEntityHandle_t;
	CEntityDebugGameSystem(CEntityDebugGameSystem &);
	CEntityDebugGameSystem(const CEntityDebugGameSystem &);

protected:

	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CEntityDebugGameSystem *);
	CEntityDebugGameSystem();
	void SetDebugBits(CEntityInstance *, uint64);
	bool HasDebugBitsSet(const CEntityInstance *, uint64);
	void ClearDebugBits(CEntityInstance *, uint64);
	void ToggleDebugBits(CEntityInstance *, uint64);
	void SetDebugBitsOnMatchingEntities(CEntityInstance *, const char *, uint64, float);
	void ClearDebugBitsOnMatchingEntities(CEntityInstance *, const char *, uint64, float);
	void ToggleDebugBitsOnMatchingEntities(CEntityInstance *, const char *, uint64, float);
	void AddStickyEntTextName(CEntityInstance *, const char *);
	void RemoveStickyEntTextName(CEntityInstance *, const char *);
	void ClearStickyEntTextNames(CEntityInstance *);
	void DumpStickyEntTextNames();
	void OnEntityCreated(CEntityInstance *);
	int GetPriority();
	void ToggleGrid(CEntityInstance *);
	void ClearAllDebugBits();
	int64 GetDebugBits(const CEntityInstance *);
	void AddScrollingMessage(CEntityInstance *, const char *, float, VertexColor_t);
	void ToggleDebugSelect(CEntityIndex);
	CEntityIndex GetDebugPlayerIndex();
	void SetDebugPlayerIndex(CEntityIndex);
	void AddDebugLine(const Vector &, const Vector &, bool, bool);
	void DrawEditModeNav();

private:

	void OnEntityReport(const CCommandContext &, const CCommand &);
	void OnEntitySummary(const CCommandContext &, const CCommand &);
	virtual void GameInit(const EventGameInit_t &);
	void OnPostSimulate(const EventSimulate_t &);
	virtual void OnClientGamePostSimulate(const EventClientGamePostSimulate_t &);
	virtual void OnServerGamePostSimulate(const EventServerGamePostSimulate_t &);
	virtual void PreRender(const EventClientPreRender_t &);
	void SetDebugBits(DebugEntityHash_t &, CEntityInstance *, uint64);
	bool HasDebugBitsSet(DebugEntityHash_t &, const CEntityInstance *, uint64);
	void ClearDebugBits(DebugEntityHash_t &, CEntityInstance *, uint64);
	void ToggleDebugBits(DebugEntityHash_t &, CEntityInstance *, uint64);
	int64 GetDebugBits(DebugEntityHash_t &, const CEntityInstance *);
	void DrawScrollingMessageLists(float, float);
	void DrawDebugSelect();
	void DrawMassReport();
	void DrawOverlayLines();
	OverlayLine_t * GetDebugOverlayLine();
	void AgeScrollingMessageLists(float, float);
	virtual ~CEntityDebugGameSystem();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[3] GameInit
	// vtable[28] OnClientGamePostSimulate
	// vtable[27] OnServerGamePostSimulate
	// vtable[20] PreRender
	// sizeof = 680
};
