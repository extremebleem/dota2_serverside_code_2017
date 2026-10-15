// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/util_shared.h:262
class IntervalTimer {
	class NetworkVar_m_timestamp {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.IntervalTimer;  // +0x0
private:

protected:

	IntervalTimer & operator=(IntervalTimer &);
	IntervalTimer & operator=(const IntervalTimer &);
	~IntervalTimer();
	IntervalTimer(IntervalTimer &);
	IntervalTimer(const IntervalTimer &);

private:

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	IntervalTimer();
	void Reset();
	void Start();
	void StartFromTime(float);
	void Invalidate();
	bool HasStarted();
	float GetElapsedTime();
	bool IsLessThen(float);
	bool IsGreaterThen(float);
	float GetStartTime();

protected:

	float Now();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 16
};

// src/game/shared/util_shared.h:262
class IntervalTimer {
	class NetworkVar_m_timestamp {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.IntervalTimer;  // +0x0
private:

protected:

	typedef IntervalTimer ThisClass;
	IntervalTimer & operator=(IntervalTimer &);
	IntervalTimer & operator=(const IntervalTimer &);
	~IntervalTimer();
	IntervalTimer(IntervalTimer &);
	IntervalTimer(const IntervalTimer &);

private:

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	IntervalTimer();
	void Reset();
	void Start();
	void StartFromTime(float);
	void Invalidate();
	bool HasStarted();
	float GetElapsedTime();
	bool IsLessThen(float);
	bool IsGreaterThen(float);
	float GetStartTime();

protected:

	float Now();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 16
};

// src/game/shared/util_shared.h:335
class CountdownTimer {
	class NetworkVar_m_duration {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_timestamp {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	int ()() * * _vptr.CountdownTimer;  // +0x0
private:

	bool m_bUseGlobalsTime;  // +0x10
	typedef CountdownTimer ThisClass;
	CountdownTimer(const CountdownTimer &);
	~CountdownTimer();

	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	CountdownTimer & operator=(const CountdownTimer &);
	CountdownTimer();
	void Reset();
	void Start(float);
	void StartFromTime(float, float);
	void ExtendDuration(float);
	void Invalidate();
	bool HasStarted();
	bool IsElapsed();
	float GetElapsedTime();
	float GetRemainingTime();
	float GetCountdownDuration();
	float GetStartTime();
	void SetUseLocalGlobalsTime(bool);
	float GetRemainingRatio();
	float Now();

	// vtable[0] Schema_DynamicBinding
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 24
};

// src/game/shared/util_shared.h:457
class CSortedEntityList {
	class CEntityReportLess {
		bool Less(const ENTITYPTR &, const ENTITYPTR &, void *);

		// sizeof = 1
	};
	/* tag__fprintf: const_type tag not supported! */;
	typedef CBaseEntity * ENTITYPTR;

private:

	int m_emptyCount;  // +0x28
	CSortedEntityList();
	void AddEntityToList(CBaseEntity *);
	void ReportEntityList();
	~CSortedEntityList();

	// sizeof = 48
};

// src/game/shared/util_shared.h:496
class CTimeline : public IntervalTimer {
	class NetworkVar_m_flValues {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_nValueCounts {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_nBucketCount {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flInterval {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flFinalValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nCompressionType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bStopped {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

	static datamap_t m_DataMap;

private:

	function<float()> m_fnTime;  // +0x220
	typedef CTimeline ThisClass;
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void NetworkStateChanged();
	virtual void NetworkStateChanged(uint32, int32, ChangeAccessorFieldPathIndex_t);
	virtual void NetworkStateChangedLog(const char *, const char *);
	CTimeline();
	void ClearValues();
	void ClearAndStart();
	void StopRecording();
	void RecordValue(float);
	void RecordFinalValue(float);
	int Count();
	float GetValue(int);
	float GetValueAtInterp(float);
	float GetValueTime(int);
	float GetInterval();
	void SetCompressionType(TimelineCompression_t);
	TimelineCompression_t GetCompressionType();
	void SetTimeFunction(const function<float()> &);
	int GetCurrentBucket();
	void Compress();

	// vtable[4] GetDataDescMap
	// vtable[1] NetworkStateChanged
	// vtable[2] NetworkStateChanged
	// vtable[3] NetworkStateChangedLog
	// sizeof = 576
};

// src/game/shared/util_shared.h:598
class CAllowPrecacheScopeGuard {
private:

	bool m_bIsPrecacheEnabled;  // +0x0
	CAllowPrecacheScopeGuard();
	~CAllowPrecacheScopeGuard();

	// sizeof = 1
};

// src/game/shared/util_shared.h:755
class CFlaggedEntitiesEnum : public IPartitionEnumerator {
public:

private:

	int m_listMax;  // +0x10
	int m_flagMask;  // +0x14
	int m_count;  // +0x18
	CFlaggedEntitiesEnum(CFlaggedEntitiesEnum &);
	CFlaggedEntitiesEnum(const CFlaggedEntitiesEnum &);
	CFlaggedEntitiesEnum(CBaseEntity * *, int, int);
	bool AddToList(CBaseEntity *);
	virtual IterationRetval_t EnumElement(CBaseEntity *);
	int GetCount();
	int GetMaxCount();

	// vtable[0] EnumElement
	// sizeof = 32
};

// src/game/shared/util_shared.h:785
class CHurtableEntitiesEnum : public IPartitionEnumerator {
public:

private:

	int m_listMax;  // +0x10
	int m_count;  // +0x14
	CHurtableEntitiesEnum(CHurtableEntitiesEnum &);
	CHurtableEntitiesEnum(const CHurtableEntitiesEnum &);
	CHurtableEntitiesEnum(CBaseEntity * *, int);
	virtual IterationRetval_t EnumElement(CBaseEntity *);
	int GetCount();
	bool AddToList(CBaseEntity *);

	// vtable[0] EnumElement
	// sizeof = 24
};

// src/game/shared/util_shared.h:822
class CEntitySphereQuery {
private:

	int m_listIndex;  // +0x0

	CEntitySphereQuery(const Vector &, float);
	CBaseEntity * GetCurrentEntity();
	void NextEntity();
	~CEntitySphereQuery();

	// sizeof = 4128
};

// src/game/shared/util_shared.h:851
class COnlyWarnOnce {
private:

	CUtlRBTree<unsigned int, short unsigned int, bool (*)(unsigned int const&, unsigned int const&), CUtlMemory<UtlRBTreeNode_t<unsigned int, short unsigned int>, short unsigned int> > m_Warnings;  // +0x0
	COnlyWarnOnce();
	void Warn(const char *);
	~COnlyWarnOnce();

	// sizeof = 40
};

// src/game/shared/util_shared.h:886
class CEntityKeyIdIndexList {
	const char * m_pRoot;  // +0x0
	CEntityKeyIdIndexList(const char *, int);
	uint32 GenerateStringCode(int);
	uint32 GetHashForIndex(int);
	EntityKeyId_t GetEntityKeyForIndex(int);

	// sizeof = 32
};
