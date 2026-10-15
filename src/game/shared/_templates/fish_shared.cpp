// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/fish_shared.cpp:11
class CFishPos<0> : public CGameNetworkFieldSerializerBase<3, 1> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);
	bool GetEntityReportDescString(const NetworkableData_t *, CUtlString &);
	const char * GetSerializerName();

	// sizeof = 1
};

// src/game/shared/fish_shared.cpp:11
class CFishPos<1> : public CGameNetworkFieldSerializerBase<3, 1> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);
	bool GetEntityReportDescString(const NetworkableData_t *, CUtlString &);
	const char * GetSerializerName();

	// sizeof = 1
};

// src/game/shared/fish_shared.cpp:11
class CFishPos<2> : public CGameNetworkFieldSerializerBase<3, 1> {
public:

	NetworkFieldResult_t Serialize(const NetworkSerializerInfo_t &, int, NetworkableData_t *);
	NetworkFieldResult_t Unserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);
	bool GetEntityReportDescString(const NetworkableData_t *, CUtlString &);
	const char * GetSerializerName();

	// sizeof = 1
};
