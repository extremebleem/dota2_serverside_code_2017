// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/ai_speechconcept.h:17
class CAI_Concept : public CRR_Concept {
public:

protected:

	EHANDLE m_hSpeaker;  // +0x4
	CAI_Concept();
	CAI_Concept(const char *);
	EHANDLE GetSpeaker();
	void SetSpeaker(EHANDLE);
	CAI_Concept(const CAI_Concept &);

	// sizeof = 8
};
