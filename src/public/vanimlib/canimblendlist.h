// Reconstructed from DWARF by pahole; not original source.

// src/public/vanimlib/canimblendlist.h:13
class CAnimationBlendList {
private:

	const CModel * m_pModel;  // +0x0
	int m_nAnimation[4];  // +0x18
	float m_flCycle[4];  // +0x28
	float m_flWeight[4];  // +0x38
	int m_nNumFrames[4];  // +0x48
	float m_flFPS[4];  // +0x58
	int m_nCount;  // +0x68
	CAnimationBlendList(const CModel *);
	CAnimationBlendList(const CModel *, HSequence, const float *);
	CAnimationBlendList(const ISequence *, const float *);
	const CModel * GetCModel();
	bool IsValid();
	int Count();
	HSequence hSequence(int);
	float flWeight(int);
	float flScale(int);
	float FPS(int);
	int NumFrames(int);
	const CAnimDesc * pAnimdesc(int);
	const ISequence * pSeqdesc(int);
	bool AddSequence(HSequence, float);

	// sizeof = 112
};
