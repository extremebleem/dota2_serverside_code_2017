// Reconstructed from DWARF by pahole; not original source.

// src/public/soundsystem/lowlevel.h:24
class CAudioMixBuffer {
	float m_flData[512];  // +0x0

	// sizeof = 2048
};

// src/public/soundsystem/lowlevel.h:157
class IAudioDevice2 {
	int ()() * * _vptr.IAudioDevice2;  // +0x0
protected:

	const char * m_pName;  // +0x8
	int m_nChannels;  // +0x10
	int m_nSampleBits;  // +0x14
	int m_nSampleRate;  // +0x18
	bool m_bIsActive;  // +0x1c
	bool m_bIsHeadphone;  // +0x1d
	bool m_bSupportsBufferStarvationDetection;  // +0x1e
	bool m_bIsCaptureDevice;  // +0x1f
	IAudioDevice2();
	virtual ~IAudioDevice2();
	virtual void OutputBuffer(int, CAudioMixBuffer *);
	virtual void Shutdown();
	virtual int QueuedBufferCount();
	virtual int EmptyBufferCount();
	virtual void CancelOutput();
	virtual void WaitForComplete();
	virtual void UpdateFocus(bool);
	virtual void ClearBuffer();
	virtual const wchar_t * GetDeviceID();
	virtual void OutputDebugInfo();
	virtual bool SetShouldPlayWhenNotInFocus(bool);
	const char * Name();
	int ChannelCount();
	int MixChannelCount();
	int BitsPerSample();
	int SampleRate();
	bool IsSurround();
	bool IsSurroundCenter();
	bool IsActive();
	bool IsHeadphone();
	bool CanDetectBufferStarvation();
	bool IsCaptureDevice();
	int DeviceSampleBytes();
	void Pause();
	void UnPause();

	// vtable[2] OutputBuffer
	// vtable[3] Shutdown
	// vtable[4] QueuedBufferCount
	// vtable[5] EmptyBufferCount
	// vtable[6] CancelOutput
	// vtable[7] WaitForComplete
	// vtable[8] UpdateFocus
	// vtable[9] ClearBuffer
	// vtable[10] GetDeviceID
	// vtable[11] OutputDebugInfo
	// vtable[12] SetShouldPlayWhenNotInFocus
	// sizeof = 32
};
