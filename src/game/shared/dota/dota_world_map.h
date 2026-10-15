// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_world_map.h:14
class CDOTA_World_Map_Location {
	int m_nLocationID;  // +0x0
	bool m_bDisabled;  // +0x4

	int m_nPositionX;  // +0x8
	int m_nPositionY;  // +0xc
	int m_nVisibleWhenOtherLocationComplete;  // +0x28
	int m_nVisibleOnlyWhenBotMatchesComplete;  // +0x2c
	int m_nVisibleOnlyWhenLaningTutorialsComplete;  // +0x30
	int m_nPlayableWhenOtherLocationComplete;  // +0x34
	CDOTA_World_Map_Location();
	~CDOTA_World_Map_Location();

	// sizeof = 64
};

// src/game/shared/dota/dota_world_map.h:38
class CDOTA_World_Map {
private:

	DOTALocationMap_t m_mapLocations;  // +0x0
	CDOTA_World_Map();
	~CDOTA_World_Map();
	void LoadWorldMap();
	CDOTA_World_Map_Location * GetLocationByID(int);
	DOTALocationMap_t & GetLocations();
	int FindLocationID(const char *);
	void LoadWorldMapFile(const char *);

	// sizeof = 40
};

// src/game/shared/dota/dota_world_map.h:63
class CDOTAMapLocationState : public CProtoBufSharedObject<CSODOTAMapLocationState, 2008> {
public:

	static const uint32 k_nTypeID = 2008;
	CDOTAMapLocationState(CDOTAMapLocationState &);
	CDOTAMapLocationState(const CDOTAMapLocationState &);
	CDOTAMapLocationState();
	int GetLocationID();
	void SetLocationID(int);
	bool GetCompleted();
	void SetCompleted(bool);
	uint32 GetAccountID();
	void SetAccountID(uint32);
	virtual ~CDOTAMapLocationState();

	// sizeof = 48
};
