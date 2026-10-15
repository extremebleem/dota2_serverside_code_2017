// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier1/utl_timestamped_data_container.h:23
class CTimestampedDataContainer<AnimationOperationHistory_t, 3> {
	struct InternalData_t {
		float m_flSimulationTime;  // +0x1c
		InternalData_t();

		// sizeof = 32
	};
	/* tag__fprintf: const_type tag not supported! */;

protected:

	uint16 m_nCurrentSimState;  // +0x0
	uint16 m_nNextSimState;  // +0x2

	bool m_bDebug;  // +0x20
	class IPrintState {
		// sizeof = 0
	};
	CTimestampedDataContainer();
	void Setup();
	void Shutdown();
	AnimationOperationHistory_t * AllocateNewState(float);
	void ApplyNewState(float, AnimationOperationHistory_t *);
	bool HasValidData();
	float GetCurrentTimeSeconds();
	const AnimationOperationHistory_t * GetCurrentState();
	AnimationOperationHistory_t * GetCurrentStateForUpdate();
	int Count();
	const AnimationOperationHistory_t * Get(int);
	float ComputeInterpolationAmount(float, const AnimationOperationHistory_t * *, const AnimationOperationHistory_t * *, float *, float *);
	void ClearHistory();
	uint16 NextState(uint16);
	uint16 PrevState(uint16);
	void PrintStateHistoryTimes(IPrintState *);
	void SetDebug(bool);

	// sizeof = 40
};
