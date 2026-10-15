// Reconstructed from DWARF by pahole; not original source.

// src/public/animationsystem/ivssequence.h:22
class IVSSequence : public ISequence {
public:

	IVSSequence();
	virtual ~IVSSequence();
	int Script_MaxFrame(HSCRIPT);
	HSCRIPT Script_GetModel();
	ScriptVariant_t Script_KeyValueText();
	const char * Script_KeyValueTextString();
	ScriptVariant_t Script_GetEvent(int);
	ScriptVariant_t Script_GetMaxBounds();
	ScriptVariant_t Script_GetAllAnimations();
	ScriptVariant_t Script_GetAllSequences();
	void Script_SetActivityType(int, int);
	ScriptVariant_t Script_GetNextSequence(int);
	ScriptVariant_t Script_GetRagdollBoneWeights();
	int Script_FPS(HSCRIPT);
	int Script_CPS(HSCRIPT);
	int Script_Duration(HSCRIPT);
	ScriptVariant_t Script_MovementAndDuration(float, float, HSCRIPT);
	ScriptVariant_t Script_Movement(float, float, HSCRIPT);
	ScriptVariant_t Script_Velocity(float, HSCRIPT);
	float Script_FindDistance(float, HSCRIPT);
	ScriptVariant_t Script_GetAssetInfo();

	// sizeof = 8
};
