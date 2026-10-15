// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/isource2serverserializers.h:9
class ISource2ServerSerializers : public IAppSystem {
public:

	ISource2ServerSerializers(ISource2ServerSerializers &);
	ISource2ServerSerializers(const ISource2ServerSerializers &);
	ISource2ServerSerializers();
	virtual int GetSerializerCount();
	virtual void GetSerializer(int, char *, int, FlattenedSerializerHandle_t *);

	// vtable[11] GetSerializerCount
	// vtable[12] GetSerializer
	// sizeof = 8
};
