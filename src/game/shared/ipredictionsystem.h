// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/ipredictionsystem.h:21
class IPredictionSystem {
	int ()() * * _vptr.IPredictionSystem;  // +0x0
	static IPredictionSystem * g_pPredictionSystems;
private:

	bool m_bSuppressEvent;  // +0x10

	int m_nStatusPushed;  // +0x20
	IPredictionSystem(const IPredictionSystem &);
	IPredictionSystem();
	virtual ~IPredictionSystem();
	IPredictionSystem * GetNext();
	void SetSuppressEvent(bool);
	void SetSuppressHost(CEntityInstance *);
	const CEntityInstance * GetSuppressHost();
	bool CanPredict();
	void SuppressEvents(bool);
	void SuppressHostEvents(CEntityInstance *);
	void Push();
	void Pop();
	void _Push();
	void _Pop();
	bool DisableFiltering();

	// sizeof = 40
};

// src/game/shared/ipredictionsystem.h:139
class CDisablePredictionFiltering {
private:

	bool m_bDisabled;  // +0x0
	CDisablePredictionFiltering(bool);
	~CDisablePredictionFiltering();

	// sizeof = 1
};
