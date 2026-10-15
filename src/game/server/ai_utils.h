// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ai_utils.h:55
class CAI_MoveMonitor {
private:

	float m_flMarkTolerance;  // +0xc

	static datamap_t m_DataMap;

	CAI_MoveMonitor();
	void SetMark(const Vector &, float);
	void SetMark(CBaseEntity *, float);
	void ClearMark();
	bool IsMarkSet();
	bool TargetMoved(const Vector &);
	bool TargetMoved2D(const Vector2D &);
	bool TargetMoved(CBaseEntity *);
	bool TargetMoved2D(CBaseEntity *);
	Vector GetMarkPos();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// sizeof = 16
};

// src/game/server/ai_utils.h:257
struct AI_FreePassParams_t {
	int ()() * * _vptr.AI_FreePassParams_t;  // +0x0
private:

	float timeToTrigger;  // +0x8
	float duration;  // +0xc
	float moveTolerance;  // +0x10
	float refillRate;  // +0x14
	float coverDist;  // +0x18
	float peekTime;  // +0x1c
	float peekTimeAfterDamage;  // +0x20
	float peekEyeDist;  // +0x24
	float peekEyeDistZ;  // +0x28

	static datamap_t m_DataMap;
	AI_FreePassParams_t & operator=(AI_FreePassParams_t &);
	AI_FreePassParams_t & operator=(const AI_FreePassParams_t &);
	AI_FreePassParams_t(AI_FreePassParams_t &);
	AI_FreePassParams_t(const AI_FreePassParams_t &);
	~AI_FreePassParams_t();
	AI_FreePassParams_t();

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);

	// vtable[0] Schema_DynamicBinding
	// sizeof = 48
};

// src/game/server/ai_utils.h:277
class CAI_FreePass : public CAI_Component {
public:

private:

	EHANDLE m_hTarget;  // +0x10
	float m_FreePassTimeRemaining;  // +0x14

	static datamap_t m_DataMap;

	CAI_FreePass();
	void Reset(float, float);
	void SetPassTarget(CBaseEntity *);
	CBaseEntity * GetPassTarget();
	void SetParams(const AI_FreePassParams_t &);
	const AI_FreePassParams_t & GetParams();
	void Update();
	bool HasPass();
	void Revoke(bool);
	float GetTimeRemaining();
	void SetTimeRemaining(float);
	bool ShouldAllowFVisible(bool);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual ~CAI_FreePass();

	// vtable[0] Schema_DynamicBinding
	// sizeof = 88
};
