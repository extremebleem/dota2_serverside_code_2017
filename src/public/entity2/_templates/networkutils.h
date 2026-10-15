// Reconstructed from DWARF by pahole; not original source.

// src/public/entity2/networkutils.h:39
class CGameNetworkFieldSerializerBase<2, 1> {
	size_t GetDataSize(const NetworkFieldInfo_t &);
	bool ParseData(const FieldMetaInfo_t &, const CSchemaClassBindingBase *, const NetworkFieldInfo_t &, void *);
	bool GetEntityReportDescString(const NetworkableData_t *, CUtlString &);
	NetworkableDataType_t GetNetDataType();
	int GetNumComponents();
	const char * GetSerializerName();

	// sizeof = 1
};

// src/public/entity2/networkutils.h:39
class CGameNetworkFieldSerializerBase<3, 3> {
	size_t GetDataSize(const NetworkFieldInfo_t &);
	bool ParseData(const FieldMetaInfo_t &, const CSchemaClassBindingBase *, const NetworkFieldInfo_t &, void *);
	bool GetEntityReportDescString(const NetworkableData_t *, CUtlString &);
	NetworkableDataType_t GetNetDataType();
	int GetNumComponents();
	const char * GetSerializerName();

	// sizeof = 1
};

// src/public/entity2/networkutils.h:39
class CGameNetworkFieldSerializerBase<1, 1> {
	size_t GetDataSize(const NetworkFieldInfo_t &);
	bool ParseData(const FieldMetaInfo_t &, const CSchemaClassBindingBase *, const NetworkFieldInfo_t &, void *);
	bool GetEntityReportDescString(const NetworkableData_t *, CUtlString &);
	NetworkableDataType_t GetNetDataType();
	int GetNumComponents();
	const char * GetSerializerName();

	// sizeof = 1
};

// src/public/entity2/networkutils.h:73
class CValidatingNetworkFieldSerializer<CAnimTimeSerializer> {
	NetworkFieldResult_t ValidatingUnserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// src/public/entity2/networkutils.h:73
class CValidatingNetworkFieldSerializer<CSimulationTimeSerializer> {
	NetworkFieldResult_t ValidatingUnserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// src/public/entity2/networkutils.h:73
class CValidatingNetworkFieldSerializer<CFuncRotatingSimulationTimeSerializer> {
	NetworkFieldResult_t ValidatingUnserialize(const NetworkUnserializerInfo_t &, int, const NetworkableData_t *);

	// sizeof = 1
};

// CGameNetworkFieldSerializerBase: 1 more instantiations (full list in INDEX.tsv)
//   CGameNetworkFieldSerializerBase<3, 1>

// CValidatingNetworkFieldSerializer: 18 more instantiations (full list in INDEX.tsv)
//   CValidatingNetworkFieldSerializer<CStepSimulationFuncRotatingAnglesSerializer>
//   CValidatingNetworkFieldSerializer<CCropFlagsToPlayerFlagBitsLength>
//   CValidatingNetworkFieldSerializer<CClampHealth>
//   CValidatingNetworkFieldSerializer<CIntegerWithMinusOneSerializer>
//   CValidatingNetworkFieldSerializer<CNormalizedAngle>
//   CValidatingNetworkFieldSerializer<CGameSceneNodeSerializer>
//   CValidatingNetworkFieldSerializer<CGameSceneNodeStepSimulationOriginSerializer>
//   CValidatingNetworkFieldSerializer<CGameSceneNodeStepSimulationAnglesSerializer>
//   CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<0> >
//   CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<1> >
//   CValidatingNetworkFieldSerializer<CGameSceneNodeCellSerializer<2> >
//   CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<0> >
//   CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<1> >
//   CValidatingNetworkFieldSerializer<CGameSceneNodeOriginSerializer<2> >
//   CValidatingNetworkFieldSerializer<CFishPos0>
//   CValidatingNetworkFieldSerializer<CFishPos1>
//   CValidatingNetworkFieldSerializer<CFishPos2>
//   CValidatingNetworkFieldSerializer<CEHandleSerializer>
