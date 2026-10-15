// Reconstructed from DWARF by pahole; not original source.

// src/source1_legacy/public/cstudiohdr.h:49
class CStudioHdr {
private:

	const CModel * m_pModel;  // +0x0
	bool m_bHasBoneContents;  // +0x8
	CStudioHdr();
	CStudioHdr(const CModel *);
	CStudioHdr(HModel, IGameModelInfo *);
	~CStudioHdr();
	void Init(const CModel *);
	void Init(HModel, IGameModelInfo *);
	void Term();
	bool IsValid();
	const CModel * GetModel();
	const CModel * operator const CModel*();
	int numbones();
	const char * boneName(int);
	Vector bonePosParentSpace(int);
	Quaternion boneRotParentSpace(int);
	bool BoneNameMatches(int, const char *);
	bool SequencesAvailable();
	int GetNumSeq();
	const ISequence * pSeqdesc(HSequence);
	int GetActivityListVersion();
	void SetActivityListVersion(int);
	int GetEventListVersion();
	void SetEventListVersion(int);
	int GetNumAttachments();
	AttachmentHandle_t FirstAttachmentHandle();
	AttachmentHandle_t NextAttachmentHandle(AttachmentHandle_t);
	AttachmentHandle_t GetAttachmentHandle(CUtlStringToken);
	int GetAttachmentBoneCount(AttachmentHandle_t);
	int GetAttachmentBone(AttachmentHandle_t, int);
	const char * GetAttachmentName(AttachmentHandle_t);
	bool SetupAttachmentTransform(AttachmentHandle_t, const matrix3x4a_t *, matrix3x4a_t &);
	int EntryNode(HSequence);
	int ExitNode(HSequence);
	int GetTransition(int, int);
	int GetNumPoseParameters();
	const PoseParamDesc_t & pPoseParameter(int);
	const char * GetPoseParameterName(int);
	int GetNumIKAutoplayLocks();
	const CSeqIKLock * pIKAutoplayLock(int);
	int numikchains();
	int GetNumIKChains();
	const CAnimIKChain * pIKChain(int);
	LocalFlexController_t numflexcontrollers();
	const CFlexController * pFlexcontroller(LocalFlexController_t);
	const char * name();
	const char * pszName();
	int numhitboxsets();
	int FindHitboxSetIndexByName(const char *);
	const CHitBoxSet * pHitboxSet(int);
	int GetBoneIndexForHitbox(const CHitBox *);
	CUtlStringToken GetSurfacePropForHitbox(const CHitBox *);
	int numbodyparts();
	int numbodypartmeshes(int);
	MeshGroupMask_t bodypartmask(int);
	MeshGroupMask_t bodypartmeshmask(int, int);
	const char * bodypartname(int);
	void bodypartmeshname(int, int, char *, int);
	int bodypartbyname(const char *);
	int bodypartmeshindexformask(int, MeshGroupMask_t);
	int numskinfamilies();
	CUtlStringToken gettokenforskinindex(int);
	int getindexforskintoken(CUtlStringToken);
	Vector eyeposition();
	uint32 flags();
	const char * pszSurfaceProp();
	CUtlStringToken GetSurfaceProp();
	float mass();
	Vector hull_min();
	Vector hull_max();
	Vector view_bbmin();
	Vector view_bbmax();
	float MaxEyeDeflection();
	const char * KeyValueText();
	int boneFlags(int);
	int boneParent(int);

	// sizeof = 16
};
