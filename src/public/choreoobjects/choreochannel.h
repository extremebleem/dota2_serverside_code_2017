// Reconstructed from DWARF by pahole; not original source.

// src/public/choreoobjects/choreochannel.h:30
class CChoreoChannel : public CChoreoObjectBase {
public:

private:

	bool m_bActive;  // +0x38
	bool m_bMarkedForSave;  // +0x39
	CChoreoChannel(const char *);
	CChoreoChannel & operator=(const CChoreoChannel &);
	CChoreoChannel(const CChoreoChannel &);
	virtual bool IsChoreoChannel();
	void SaveToBuffer(CUtlBuffer &, CChoreoScene *, IChoreoStringPool *);
	bool RestoreFromBuffer(SceneBinaryVersion_t, CUtlBuffer &, CChoreoScene *, CChoreoActor *, IChoreoStringPool *);
	void SetName(const char *);
	const char * GetName();
	int GetNumEvents();
	CChoreoEvent * GetEvent(int);
	const CChoreoEvent * GetEvent(int);
	void AddEvent(CChoreoEvent *);
	void RemoveEvent(CChoreoEvent *);
	int FindEventIndex(CChoreoEvent *);
	void RemoveAllEvents();
	CChoreoActor * GetActor();
	void SetActor(CChoreoActor *);
	void SetActive(bool);
	bool GetActive();
	void ReconcileGestureTimes();
	void ReconcileCloseCaption();
	bool IsMarkedForSave();
	void SetMarkedForSave(bool);
	void MarkForSaveAll(bool);
	bool GetSortedCombinedEventList(const char *, CUtlRBTree<const CChoreoEvent*, short unsigned int, bool (*)(const CChoreoEvent* const&, const CChoreoEvent* const&), CUt);

	// vtable[1] IsChoreoChannel
	// sizeof = 64
};
