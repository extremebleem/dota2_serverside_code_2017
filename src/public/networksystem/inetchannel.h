// Reconstructed from DWARF by pahole; not original source.

// src/public/networksystem/inetchannel.h:54
struct InstantReplayMessage_t {
	NetMessageHandle_t m_hMessage;  // +0x0
	void * m_pPayload;  // +0x8
	InstantReplayMessage_t();
	~InstantReplayMessage_t();
	void CopyFrom(const InstantReplayMessage_t *);
	void Release();
	void Detach();
	int GetType();

private:

	InstantReplayMessage_t(const InstantReplayMessage_t &);
	InstantReplayMessage_t & operator=(const InstantReplayMessage_t &);

	// sizeof = 16
};

// src/public/networksystem/inetchannel.h:110
class INetChannel : public INetChannelInfo {
public:

	INetChannel();
	virtual ~INetChannel();
	virtual int GetTotalPacketBytes(int, int);
	virtual int GetTotalPacketReliableBytes(int, int);
	virtual void SetTimeout(float, bool);
	virtual void Reset();
	virtual void Clear();
	virtual void Shutdown(ENetworkDisconnectionReason);
	virtual bool SendData(bf_write &, NetChannelBufType_t);
	virtual void SetChoked();
	virtual int Transmit(const char *, bf_write *);
	virtual const ns_address & GetRemoteAddress();
	virtual int GetDropNumber();
	virtual void UpdateMessageStats(int, uint32, bool);
	virtual bool CanPacket();
	virtual bool IsOverflowed();
	virtual bool HasPendingReliableData();
	virtual float GetTimeSinceLastReceived();
	virtual void SetMaxBufferSize(NetChannelBufType_t, int);
	virtual bool SetActiveChannel(INetChannel *);
	virtual void AttachSplitPlayer(CSplitScreenSlot, INetChannel *);
	virtual void DetachSplitPlayer(CSplitScreenSlot);
	virtual void SetUsesMaxRoutablePayload(bool);
	virtual void SetDataRate(float);
	virtual void SetUpdateRate(int);
	virtual void SetCommandRate(int);
	virtual bool IsTimedOut();
	virtual void SetRemoteFramerate(float, float, float);
	virtual bool IsRemoteDisconnected();
	virtual void SetNetMessageDispatcher(INetMessageDispatcher *);
	virtual INetMessageDispatcher * GetNetMessageDispatcher();
	virtual bool SendNetMessage(NetMessageHandle_t, const void *, NetChannelBufType_t);
	virtual void StartRegisteringMessageHandlers();
	virtual void FinishRegisteringMessageHandlers();
	virtual void RegisterNetMessageHandlerAbstract(CUtlSlot *, const CUtlAbstractDelegate &, int, NetMessageHandle_t, int);
	virtual void UnregisterNetMessageHandlerAbstract(CUtlSlot *, const CUtlAbstractDelegate &, NetMessageHandle_t);
	virtual void SetChallengeNr(unsigned int);
	virtual void GetSequenceData(int &, int &, int &);
	virtual void SetSequenceData(int, int, int);
	virtual int GetNumBitsWritten(NetChannelBufType_t);
	virtual void SetCompressionMode(bool);
	virtual void SetMaxRoutablePayloadSize(int);
	virtual int GetMaxRoutablePayloadSize();
	virtual bool ProcessPacket(bf_read &, bool);
	virtual void SetDemoRecorder(IDemoRecorderBase *);
	virtual void SetInstantReplayIntercept(IInstantReplayIntercept *);
	virtual void SetInterpolationAmount(float);
	virtual void SetFileTransmissionMode(bool);
	virtual bool IsNull();
	virtual bool ProcessDemoPacket(NetPacket_t *);
	virtual bool WasLastMessageReliable();
	virtual void InstallMessageFilter(INetworkMessageProcessingPreFilter *);
	virtual void UninstallMessageFilter(INetworkMessageProcessingPreFilter *);
	virtual void PostReceivedNetMessage(NetMessageHandle_t, const void *, const NetChannelBufType_t *);
	virtual void InsertReplayMessage(InstantReplayMessage_t &);
	virtual bool HasQueuedPackets();
	virtual bool HasQueuedMessage(uint16);
	virtual void SetPendingDisconnect(ENetworkDisconnectionReason);
	virtual ENetworkDisconnectionReason GetPendingDisconnect();
	virtual void SuppressTransmit(bool);
	virtual bool IsSuppressingTransmit();

	// vtable[34] GetTotalPacketBytes
	// vtable[35] GetTotalPacketReliableBytes
	// vtable[36] SetTimeout
	// vtable[37] Reset
	// vtable[38] Clear
	// vtable[39] Shutdown
	// vtable[40] SendData
	// vtable[41] SetChoked
	// vtable[42] Transmit
	// vtable[43] GetRemoteAddress
	// vtable[44] GetDropNumber
	// vtable[45] UpdateMessageStats
	// vtable[46] CanPacket
	// vtable[47] IsOverflowed
	// vtable[48] HasPendingReliableData
	// vtable[24] GetTimeSinceLastReceived
	// vtable[49] SetMaxBufferSize
	// vtable[50] SetActiveChannel
	// vtable[51] AttachSplitPlayer
	// vtable[52] DetachSplitPlayer
	// vtable[53] SetUsesMaxRoutablePayload
	// vtable[54] SetDataRate
	// vtable[55] SetUpdateRate
	// vtable[56] SetCommandRate
	// vtable[57] IsTimedOut
	// vtable[58] SetRemoteFramerate
	// vtable[59] IsRemoteDisconnected
	// vtable[60] SetNetMessageDispatcher
	// vtable[61] GetNetMessageDispatcher
	// vtable[62] SendNetMessage
	// vtable[63] StartRegisteringMessageHandlers
	// vtable[64] FinishRegisteringMessageHandlers
	// vtable[65] RegisterNetMessageHandlerAbstract
	// vtable[66] UnregisterNetMessageHandlerAbstract
	// vtable[67] SetChallengeNr
	// vtable[68] GetSequenceData
	// vtable[69] SetSequenceData
	// vtable[70] GetNumBitsWritten
	// vtable[71] SetCompressionMode
	// vtable[72] SetMaxRoutablePayloadSize
	// vtable[73] GetMaxRoutablePayloadSize
	// vtable[74] ProcessPacket
	// vtable[75] SetDemoRecorder
	// vtable[76] SetInstantReplayIntercept
	// vtable[77] SetInterpolationAmount
	// vtable[78] SetFileTransmissionMode
	// vtable[79] IsNull
	// vtable[80] ProcessDemoPacket
	// vtable[81] WasLastMessageReliable
	// vtable[82] InstallMessageFilter
	// vtable[83] UninstallMessageFilter
	// vtable[84] PostReceivedNetMessage
	// vtable[85] InsertReplayMessage
	// vtable[86] HasQueuedPackets
	// vtable[87] HasQueuedMessage
	// vtable[88] SetPendingDisconnect
	// vtable[89] GetPendingDisconnect
	// vtable[90] SuppressTransmit
	// vtable[91] IsSuppressingTransmit
	// sizeof = 8
};
