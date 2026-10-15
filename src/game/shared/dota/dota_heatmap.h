// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/dota_heatmap.h:12
class CDOTAHeatmapManager {
	struct Building_t {
		EHANDLE hEntity;  // +0x0

		bool bRadiant;  // +0x10
		uint8 unPosQuantX;  // +0x11
		uint8 unPosQuantY;  // +0x12

		float flDeathTime;  // +0x14
		Building_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int m_nLastRecordedSecond;  // +0x0

	CDOTAHeatmapManager & Get();
	void Initialize();
	void Update(float);
	void SerializeBuildingData(int, CDOTAMatchPrivateMetadata_Team &);
	void SerializePlayerData(int, CDOTAMatchPrivateMetadata_Team_Player &);
	void OnBuildingDeath(CDOTA_BaseNPC_Building *);
	CDOTAHeatmapManager();
	~CDOTAHeatmapManager();
	void InitializeBuildings();

	// sizeof = 608
};

// src/game/shared/dota/dota_heatmap.h:12
class CDOTAHeatmapManager {
	struct Building_t {
		EHANDLE hEntity;  // +0x0

		bool bRadiant;  // +0x10
		uint8 unPosQuantX;  // +0x11
		uint8 unPosQuantY;  // +0x12

		float flDeathTime;  // +0x14
		Building_t();
		~Building_t();

		// sizeof = 24
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	int m_nLastRecordedSecond;  // +0x0

	CDOTAHeatmapManager & Get();
	void Initialize();
	void Update(float);
	void SerializeBuildingData(int, CDOTAMatchPrivateMetadata_Team &);
	void SerializePlayerData(int, CDOTAMatchPrivateMetadata_Team_Player &);
	void OnBuildingDeath(CDOTA_BaseNPC_Building *);
	CDOTAHeatmapManager();
	~CDOTAHeatmapManager();
	void InitializeBuildings();

	// sizeof = 608
};
