// Reconstructed from DWARF by pahole; not original source.

// src/public/soundsystem/isoundsystem.h:320
class IAudioOutputStream {
	int ()() * * _vptr.IAudioOutputStream;  // +0x0
	IAudioOutputStream();
	virtual ~IAudioOutputStream();
	virtual void AddAudioData(const int16 *, uint, uint);
	virtual void SetVolume(float);
	virtual uint32 QueuedSampleCount();

	// vtable[2] AddAudioData
	// vtable[3] SetVolume
	// vtable[4] QueuedSampleCount
	// sizeof = 8
};
