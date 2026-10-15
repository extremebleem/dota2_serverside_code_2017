// Reconstructed from DWARF by pahole; not original source.

// src/public/globalvars_base.h:22
class CGlobalVarsBase {
	float realtime;  // +0x0
	int framecount;  // +0x4
	float absoluteframetime;  // +0x8
private:

	float m_flCurrentTime;  // +0xc
	float frametime;  // +0x10
	int maxClients;  // +0x14
	int tickcount;  // +0x18
	float interval_per_tick;  // +0x1c
	float m_flRenderTime;  // +0x20
	float interpolation_amount;  // +0x24
	FnGlobalVarsWarningFunc m_pfnWarningFunc;  // +0x28
	bool m_bInSimulation;  // +0x30
	bool m_bEnableAssertions;  // +0x31
	CGlobalVarsBase();
	CGlobalVarsBase(bool);
	void Init();
	bool IsClient();
	int GetNetworkBase(int, CEntityIndex);
	int GetNetworkBase(int, int);
	float rendertime(bool);
	void setrendertime(float);
	float curtime(bool);
	void setcurtime(float);
	float simorrendertime();
	int TimeToTicks(float);
	float TicksToTime(int);
	float RoundToTicks(float);
	bool IsInSimulation();
	void SetInSimulation(bool);
	void SetWarningFunc(FnGlobalVarsWarningFunc);

	// sizeof = 56
};
