// Reconstructed from DWARF by pahole; not original source.

// src/public/inetchannelinfo.h:35
struct SNetChannelLatencyStats {
	struct QoSInterval_t {
		short int m_nAvgLatency;  // +0x0
		short int m_nPacketsSent;  // +0x2
		short int m_nPacketsLost;  // +0x4

		// sizeof = 6
	};

	float peaklatency;  // +0x28
	int totaldropped;  // +0x2c
	int totalchoked;  // +0x30
	int totalpackets;  // +0x34
	int totalbytes;  // +0x38
	int m_nValidQoSIntervals;  // +0x3c
	SNetChannelLatencyStats();
	void Reset();

	// sizeof = 248
};

// src/public/inetchannelinfo.h:35
struct SNetChannelLatencyStats {
	struct QoSInterval_t {
		short int m_nAvgLatency;  // +0x0
		short int m_nPacketsSent;  // +0x2
		short int m_nPacketsLost;  // +0x4

		// sizeof = 6
	};

	float peaklatency;  // +0x28
	int totaldropped;  // +0x2c
	int totalchoked;  // +0x30
	int totalpackets;  // +0x34
	int totalbytes;  // +0x38
	int m_nValidQoSIntervals;  // +0x3c
	SNetChannelLatencyStats();
	void Reset();
	/* tag__fprintf: const_type tag not supported! */;

	// sizeof = 248
};

// src/public/inetchannelinfo.h:61
struct NetChanStat_t {
	float m_flAvg;  // +0x0
	float m_flMin;  // +0x4
	float m_flMax;  // +0x8
	float m_flStdDev;  // +0xc

	// sizeof = 16
};

// src/public/inetchannelinfo.h:66
class INetChannelInfo {
	int ()() * * _vptr.INetChannelInfo;  // +0x0
	INetChannelInfo(INetChannelInfo &);
	INetChannelInfo(const INetChannelInfo &);
	INetChannelInfo();
	virtual const char * GetName();
	virtual const char * GetAddress();
	virtual float GetTime();
	virtual float GetTimeConnected();
	virtual int GetBufferSize();
	virtual int GetDataRate();
	virtual bool IsLocalHost();
	virtual bool IsLoopback();
	virtual bool IsTimingOut();
	virtual bool IsPlayback();
	virtual float GetLatency(int);
	virtual float GetAvgLatency(int);
	virtual float GetStdDevLatency(int);
	virtual int GetLatencyBreakdown(NetChanStat_t *, NetChanStat_t *, NetChanStat_t *, NetChanStat_t *);
	virtual float GetAvgLoss(int);
	virtual float GetAvgChoke(int);
	virtual float GetAvgData(int);
	virtual float GetAvgPackets(int);
	virtual int GetTotalData(int);
	virtual int GetTotalPackets(int);
	virtual int GetSequenceNr(int);
	virtual bool IsValidPacket(int, int);
	virtual float GetPacketTime(int, int);
	virtual int GetPacketBits(int, int, int, bool);
	virtual float GetTimeSinceLastReceived();
	virtual float GetCommandInterpolationAmount(int, int);
	virtual void GetPacketResponseLatency(int, int, int *, int *);
	virtual void GetRemoteFramerate(float *, float *, float *);
	virtual float GetTimeoutSeconds();
	virtual void ResetLatencyStats(int);
	virtual const SNetChannelLatencyStats & GetLatencyStats(int);
	virtual void SetLatencyStats(int, const SNetChannelLatencyStats &);

	// vtable[0] GetName
	// vtable[1] GetAddress
	// vtable[2] GetTime
	// vtable[3] GetTimeConnected
	// vtable[4] GetBufferSize
	// vtable[5] GetDataRate
	// vtable[6] IsLocalHost
	// vtable[7] IsLoopback
	// vtable[8] IsTimingOut
	// vtable[9] IsPlayback
	// vtable[10] GetLatency
	// vtable[11] GetAvgLatency
	// vtable[12] GetStdDevLatency
	// vtable[13] GetLatencyBreakdown
	// vtable[14] GetAvgLoss
	// vtable[15] GetAvgChoke
	// vtable[16] GetAvgData
	// vtable[17] GetAvgPackets
	// vtable[18] GetTotalData
	// vtable[19] GetTotalPackets
	// vtable[20] GetSequenceNr
	// vtable[21] IsValidPacket
	// vtable[22] GetPacketTime
	// vtable[23] GetPacketBits
	// vtable[24] GetTimeSinceLastReceived
	// vtable[25] GetCommandInterpolationAmount
	// vtable[26] GetPacketResponseLatency
	// vtable[27] GetRemoteFramerate
	// vtable[28] GetTimeoutSeconds
	// vtable[29] ResetLatencyStats
	// vtable[30] GetLatencyStats
	// vtable[31] SetLatencyStats
	// sizeof = 8
};
