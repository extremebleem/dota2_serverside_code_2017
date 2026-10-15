// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/econ/econ_item.h:103
class ISchemaAttributeTypeBase<CAttribute_HeroStatue> : public ISchemaAttributeType {
public:

private:

	static schema_attribute_stat_bucket_t s_InstanceStats;
	ISchemaAttributeTypeBase(ISchemaAttributeTypeBase<CAttribute_HeroStatue> &);
	ISchemaAttributeTypeBase(const ISchemaAttributeTypeBase<CAttribute_HeroStatue> &);
	ISchemaAttributeTypeBase();
	virtual void LoadEconAttributeValue(CEconItem *, const CEconItemAttributeDefinition *, const attribute_data_union_t &);
	virtual unsigned int GetTypeUniqueIdentifier();
	void ConvertTypedValueToEconAttributeValue(const CAttribute_HeroStatue &, attribute_data_union_t *);
	const CAttribute_HeroStatue & GetTypedValueContentsFromEconAttributeValue(const attribute_data_union_t &);
	void ConvertEconAttributeValueToTypedValue(const attribute_data_union_t &, CAttribute_HeroStatue *);
	virtual void InitializeNewEconAttributeValue(attribute_data_union_t *);
	virtual void UnloadEconAttributeValue(attribute_data_union_t *);
	virtual bool OnIterateAttributeValue(IEconItemAttributeIterator *, const CEconItemAttributeDefinition *, const attribute_data_union_t &);
	virtual void LoadByteStreamToEconAttributeValue(CEconItem *, const CEconItemAttributeDefinition *, const string &);
	virtual void ConvertEconAttributeValueToByteStream(const attribute_data_union_t &, string *);
	virtual void ConvertTypedValueToByteStream(const CAttribute_HeroStatue &, string *);
	virtual void ConvertByteStreamToTypedValue(const string &, CAttribute_HeroStatue *);
	virtual ~ISchemaAttributeTypeBase();

	// vtable[3] LoadEconAttributeValue
	// vtable[2] GetTypeUniqueIdentifier
	// vtable[8] InitializeNewEconAttributeValue
	// vtable[9] UnloadEconAttributeValue
	// vtable[10] OnIterateAttributeValue
	// vtable[7] LoadByteStreamToEconAttributeValue
	// vtable[4] ConvertEconAttributeValueToByteStream
	// vtable[12] ConvertTypedValueToByteStream
	// vtable[13] ConvertByteStreamToTypedValue
	// sizeof = 8
};

// src/game/shared/econ/econ_item.h:103
class ISchemaAttributeTypeBase<CAttribute_Socket> : public ISchemaAttributeType {
public:

private:

	static schema_attribute_stat_bucket_t s_InstanceStats;
	ISchemaAttributeTypeBase(ISchemaAttributeTypeBase<CAttribute_Socket> &);
	ISchemaAttributeTypeBase(const ISchemaAttributeTypeBase<CAttribute_Socket> &);
	ISchemaAttributeTypeBase();
	virtual void LoadEconAttributeValue(CEconItem *, const CEconItemAttributeDefinition *, const attribute_data_union_t &);
	virtual unsigned int GetTypeUniqueIdentifier();
	void ConvertTypedValueToEconAttributeValue(const CAttribute_Socket &, attribute_data_union_t *);
	const CAttribute_Socket & GetTypedValueContentsFromEconAttributeValue(const attribute_data_union_t &);
	void ConvertEconAttributeValueToTypedValue(const attribute_data_union_t &, CAttribute_Socket *);
	virtual void InitializeNewEconAttributeValue(attribute_data_union_t *);
	virtual void UnloadEconAttributeValue(attribute_data_union_t *);
	virtual bool OnIterateAttributeValue(IEconItemAttributeIterator *, const CEconItemAttributeDefinition *, const attribute_data_union_t &);
	virtual void LoadByteStreamToEconAttributeValue(CEconItem *, const CEconItemAttributeDefinition *, const string &);
	virtual void ConvertEconAttributeValueToByteStream(const attribute_data_union_t &, string *);
	virtual void ConvertTypedValueToByteStream(const CAttribute_Socket &, string *);
	virtual void ConvertByteStreamToTypedValue(const string &, CAttribute_Socket *);
	virtual ~ISchemaAttributeTypeBase();

	// vtable[3] LoadEconAttributeValue
	// vtable[2] GetTypeUniqueIdentifier
	// vtable[8] InitializeNewEconAttributeValue
	// vtable[9] UnloadEconAttributeValue
	// vtable[10] OnIterateAttributeValue
	// vtable[7] LoadByteStreamToEconAttributeValue
	// vtable[4] ConvertEconAttributeValueToByteStream
	// vtable[12] ConvertTypedValueToByteStream
	// vtable[13] ConvertByteStreamToTypedValue
	// sizeof = 8
};

// src/game/shared/econ/econ_item.h:103
class ISchemaAttributeTypeBase<float> : public ISchemaAttributeType {
public:

private:

	static schema_attribute_stat_bucket_t s_InstanceStats;
	ISchemaAttributeTypeBase(ISchemaAttributeTypeBase<float> &);
	ISchemaAttributeTypeBase(const ISchemaAttributeTypeBase<float> &);
	ISchemaAttributeTypeBase();
	virtual void LoadEconAttributeValue(CEconItem *, const CEconItemAttributeDefinition *, const attribute_data_union_t &);
	virtual unsigned int GetTypeUniqueIdentifier();
	void ConvertTypedValueToEconAttributeValue(const float &, attribute_data_union_t *);
	const float & GetTypedValueContentsFromEconAttributeValue(const attribute_data_union_t &);
	void ConvertEconAttributeValueToTypedValue(const attribute_data_union_t &, float *);
	virtual void InitializeNewEconAttributeValue(attribute_data_union_t *);
	virtual void UnloadEconAttributeValue(attribute_data_union_t *);
	virtual bool OnIterateAttributeValue(IEconItemAttributeIterator *, const CEconItemAttributeDefinition *, const attribute_data_union_t &);
	virtual void LoadByteStreamToEconAttributeValue(CEconItem *, const CEconItemAttributeDefinition *, const string &);
	virtual void ConvertEconAttributeValueToByteStream(const attribute_data_union_t &, string *);
	virtual void ConvertTypedValueToByteStream(const float &, string *);
	virtual void ConvertByteStreamToTypedValue(const string &, float *);
	virtual ~ISchemaAttributeTypeBase();

	// vtable[3] LoadEconAttributeValue
	// vtable[2] GetTypeUniqueIdentifier
	// vtable[8] InitializeNewEconAttributeValue
	// vtable[9] UnloadEconAttributeValue
	// vtable[10] OnIterateAttributeValue
	// vtable[7] LoadByteStreamToEconAttributeValue
	// vtable[4] ConvertEconAttributeValueToByteStream
	// vtable[12] ConvertTypedValueToByteStream
	// vtable[13] ConvertByteStreamToTypedValue
	// sizeof = 8
};

// src/game/shared/econ/econ_item.h:310
class CSchemaAttributeTypeBase<CAttribute_HeroStatue> : public ISchemaAttributeTypeBase<CAttribute_HeroStatue> {
public:

	CSchemaAttributeTypeBase(CSchemaAttributeTypeBase<CAttribute_HeroStatue> &);
	CSchemaAttributeTypeBase(const CSchemaAttributeTypeBase<CAttribute_HeroStatue> &);
	CSchemaAttributeTypeBase();
	virtual ~CSchemaAttributeTypeBase();

	// sizeof = 8
};

// src/game/shared/econ/econ_item.h:310
class CSchemaAttributeTypeBase<CAttribute_Socket> : public ISchemaAttributeTypeBase<CAttribute_Socket> {
public:

	CSchemaAttributeTypeBase(CSchemaAttributeTypeBase<CAttribute_Socket> &);
	CSchemaAttributeTypeBase(const CSchemaAttributeTypeBase<CAttribute_Socket> &);
	CSchemaAttributeTypeBase();
	virtual ~CSchemaAttributeTypeBase();

	// sizeof = 8
};

// src/game/shared/econ/econ_item.h:310
class CSchemaAttributeTypeBase<unsigned int> : public ISchemaAttributeTypeBase<unsigned int> {
public:

	CSchemaAttributeTypeBase(CSchemaAttributeTypeBase<unsigned int> &);
	CSchemaAttributeTypeBase(const CSchemaAttributeTypeBase<unsigned int> &);
	CSchemaAttributeTypeBase();
	virtual ~CSchemaAttributeTypeBase();

	// sizeof = 8
};

// src/game/shared/econ/econ_item.h:332
class CSchemaAttributeTypeProtobufBase<CAttribute_ItemDynamicRecipeComponent> : public CSchemaAttributeTypeBase<CAttribute_ItemDynamicRecipeComponent> {
public:

	CSchemaAttributeTypeProtobufBase(CSchemaAttributeTypeProtobufBase<CAttribute_ItemDynamicRecipeComponent> &);
	CSchemaAttributeTypeProtobufBase(const CSchemaAttributeTypeProtobufBase<CAttribute_ItemDynamicRecipeComponent> &);
	CSchemaAttributeTypeProtobufBase();
	virtual void ConvertTypedValueToByteStream(const CAttribute_ItemDynamicRecipeComponent &, string *);
	virtual void ConvertByteStreamToTypedValue(const string &, CAttribute_ItemDynamicRecipeComponent *);
	virtual bool BConvertStringToEconAttributeValue(const CEconItemAttributeDefinition *, const char *, attribute_data_union_t *, bool);
	virtual void ConvertEconAttributeValueToString(const CEconItemAttributeDefinition *, const attribute_data_union_t &, string *);
	virtual ~CSchemaAttributeTypeProtobufBase();

	// vtable[12] ConvertTypedValueToByteStream
	// vtable[13] ConvertByteStreamToTypedValue
	// vtable[5] BConvertStringToEconAttributeValue
	// vtable[6] ConvertEconAttributeValueToString
	// sizeof = 8
};

// src/game/shared/econ/econ_item.h:332
class CSchemaAttributeTypeProtobufBase<CAttribute_String> : public CSchemaAttributeTypeBase<CAttribute_String> {
public:

	CSchemaAttributeTypeProtobufBase(CSchemaAttributeTypeProtobufBase<CAttribute_String> &);
	CSchemaAttributeTypeProtobufBase(const CSchemaAttributeTypeProtobufBase<CAttribute_String> &);
	CSchemaAttributeTypeProtobufBase();
	virtual void ConvertTypedValueToByteStream(const CAttribute_String &, string *);
	virtual void ConvertByteStreamToTypedValue(const string &, CAttribute_String *);
	virtual bool BConvertStringToEconAttributeValue(const CEconItemAttributeDefinition *, const char *, attribute_data_union_t *, bool);
	virtual void ConvertEconAttributeValueToString(const CEconItemAttributeDefinition *, const attribute_data_union_t &, string *);
	virtual ~CSchemaAttributeTypeProtobufBase();

	// vtable[12] ConvertTypedValueToByteStream
	// vtable[13] ConvertByteStreamToTypedValue
	// vtable[5] BConvertStringToEconAttributeValue
	// vtable[6] ConvertEconAttributeValueToString
	// sizeof = 8
};

// ISchemaAttributeTypeBase: 4 more instantiations (full list in INDEX.tsv)
//   ISchemaAttributeTypeBase<long long unsigned int>
//   ISchemaAttributeTypeBase<unsigned int>
//   ISchemaAttributeTypeBase<CAttribute_ItemDynamicRecipeComponent>
//   ISchemaAttributeTypeBase<CAttribute_String>

// CSchemaAttributeTypeBase: 4 more instantiations (full list in INDEX.tsv)
//   CSchemaAttributeTypeBase<float>
//   CSchemaAttributeTypeBase<long long unsigned int>
//   CSchemaAttributeTypeBase<CAttribute_ItemDynamicRecipeComponent>
//   CSchemaAttributeTypeBase<CAttribute_String>
