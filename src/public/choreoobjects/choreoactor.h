// Reconstructed from DWARF by pahole; not original source.

// src/public/choreoobjects/choreoactor.h:29
class CChoreoActor : public CChoreoObjectBase {
public:

private:

	bool m_bActive;  // +0x38
	bool m_bMarkedForSave;  // +0x39
	CChoreoActor(const char *);
	CChoreoActor & operator=(const CChoreoActor &);
	CChoreoActor(const CChoreoActor &);
	virtual bool IsChoreoActor();
	void SaveToBuffer(CUtlBuffer &, CChoreoScene *, IChoreoStringPool *);
	bool RestoreFromBuffer(SceneBinaryVersion_t, CUtlBuffer &, CChoreoScene *, IChoreoStringPool *);
	void SetName(const char *);
	const char * GetName();
	int GetNumChannels();
	CChoreoChannel * GetChannel(int);
	const CChoreoChannel * GetChannel(int);
	CChoreoChannel * FindChannel(const char *);
	const CChoreoChannel * FindChannel(const char *);
	void AddChannel(CChoreoChannel *);
	void RemoveChannel(CChoreoChannel *);
	int FindChannelIndex(const CChoreoChannel *);
	void SwapChannels(int, int);
	void RemoveAllChannels();
	void SetFacePoserModelName(const char *);
	const char * GetFacePoserModelName();
	void SetActive(bool);
	bool GetActive();
	bool IsMarkedForSave();
	void SetMarkedForSave(bool);
	void MarkForSaveAll(bool);

	// vtable[2] IsChoreoActor
	// sizeof = 64
};
