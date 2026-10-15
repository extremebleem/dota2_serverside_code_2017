// Reconstructed from DWARF by pahole; not original source.

// src/game/include/igamemodelinfo.h:58
class IGameModelInfo : public IAppSystem {
public:

	IGameModelInfo();
	virtual ~IGameModelInfo();
	virtual HModel GetModelIndex(const char *);
	virtual bool IsValidModel(HModel);
	virtual bool GetModelName(HModel, char *, int);
	virtual void GetModelBounds(HModel, Vector &, Vector &);
	virtual void GetModelRenderBounds(HModel, Vector &, Vector &);
	virtual int GetModelFrameCount(HModel);
	virtual int GetModelType(HModel);
	virtual bool IsTranslucent(HModel);
	virtual bool IsTranslucentTwoPass(HModel);
	virtual void Unused0();
	virtual float GetModelRadius(HModel);
	virtual void GetModelMaterialColor(HModel, const Vector &, const QAngle &, trace_t *, Vector &);
	virtual void SetLevelScreenFadeRange(float, float);
	virtual void GetLevelScreenFadeRange(float *, float *);
	virtual void SetViewScreenFadeRange(float, float);
	virtual unsigned char ComputeLevelScreenFade(const Vector &, float, float);
	virtual unsigned char ComputeViewScreenFade(const Vector &, float, float);
	virtual bool IsModelPrecached(const char *);
	virtual void ForceModelBounds(const char *, const Vector &, const Vector &);

	// vtable[13] GetModelIndex
	// vtable[14] IsValidModel
	// vtable[15] GetModelName
	// vtable[16] GetModelBounds
	// vtable[17] GetModelRenderBounds
	// vtable[18] GetModelFrameCount
	// vtable[19] GetModelType
	// vtable[20] IsTranslucent
	// vtable[21] IsTranslucentTwoPass
	// vtable[22] Unused0
	// vtable[23] GetModelRadius
	// vtable[24] GetModelMaterialColor
	// vtable[25] SetLevelScreenFadeRange
	// vtable[26] GetLevelScreenFadeRange
	// vtable[27] SetViewScreenFadeRange
	// vtable[28] ComputeLevelScreenFade
	// vtable[29] ComputeViewScreenFade
	// vtable[30] IsModelPrecached
	// vtable[31] ForceModelBounds
	// sizeof = 8
};
