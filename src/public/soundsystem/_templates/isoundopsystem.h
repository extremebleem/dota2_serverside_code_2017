// Reconstructed from DWARF by pahole; not original source.

// src/public/soundsystem/isoundopsystem.h:257
class CSchemaTypeOf<SndOpEventGuid_t> {
	CSchemaType * Get(ISchemaSystemTypeScope *);

	// sizeof = 1
};

// src/public/soundsystem/isoundopsystem.h:465
class CSosMessageQueue<SoundEventGuid_t> {
	struct Entry_t {
		Entry_t(SoundEventGuid_t, CSosEventInfo_t *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	CSosMessageQueue();
	SosMessageQueueIndex_t InvalidIndex();
	SosMessageQueueIndex_t Count();
	SoundEventGuid_t GetKeyByIndex(SosMessageQueueIndex_t);
	CSosEventInfo_t * operator[](SosMessageQueueIndex_t);
	SosMessageQueueIndex_t FindFirstKeyIndex(SoundEventGuid_t);
	CSosEventInfo_t * * AddMessage(SoundEventGuid_t, CSosEventInfo_t *);
	void AddStartStop(SoundEventGuid_t, CSosEventInfo_t *);
	CSosEventInfoWithFieldData_t * * StartAddFieldInfo(SoundEventGuid_t, SosMessageQueueInfoType_t, bool);
	void RemoveAndDeleteIndex(SosMessageQueueIndex_t);
	void RemoveAll();
	void RemoveAndDeleteAll(SoundEventGuid_t);
	void RemoveAndDeleteAll();
	~CSosMessageQueue();

	// sizeof = 24
};

// src/public/soundsystem/isoundopsystem.h:465
class CSosMessageQueue<unsigned int> {
	struct Entry_t {
		unsigned int key;  // +0x0

		Entry_t(unsigned int, CSosEventInfo_t *);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	CSosMessageQueue();
	SosMessageQueueIndex_t InvalidIndex();
	SosMessageQueueIndex_t Count();
	unsigned int GetKeyByIndex(SosMessageQueueIndex_t);
	CSosEventInfo_t * operator[](SosMessageQueueIndex_t);
	SosMessageQueueIndex_t FindFirstKeyIndex(unsigned int);
	CSosEventInfo_t * * AddMessage(unsigned int, CSosEventInfo_t *);
	void AddStartStop(unsigned int, CSosEventInfo_t *);
	CSosEventInfoWithFieldData_t * * StartAddFieldInfo(unsigned int, SosMessageQueueInfoType_t, bool);
	void RemoveAndDeleteIndex(SosMessageQueueIndex_t);
	void RemoveAll();
	void RemoveAndDeleteAll(unsigned int);
	void RemoveAndDeleteAll();
	~CSosMessageQueue();

	// sizeof = 24
};
