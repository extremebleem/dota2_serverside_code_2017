// Reconstructed from DWARF by pahole; not original source.

// src/public/ivoiceserver.h:22
class IVoiceServer : public IAppSystem {
public:

	IVoiceServer();
	virtual ~IVoiceServer();
	virtual bool GetClientListening(int, int);
	virtual bool SetClientListening(int, int, bool);
	virtual bool SetClientProximity(int, int, bool);

	// vtable[13] GetClientListening
	// vtable[14] SetClientListening
	// vtable[15] SetClientProximity
	// sizeof = 8
};
