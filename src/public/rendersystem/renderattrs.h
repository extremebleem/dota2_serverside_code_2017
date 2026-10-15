// Reconstructed from DWARF by pahole; not original source.

// src/public/rendersystem/renderattrs.h:18
class CRenderAttributes {
	struct TextureAttrForStorage_t {
		HRenderTexture texture;  // +0x0
		int32 nSpecificMipLevelToBind;  // +0x8
		TextureAttrForStorage_t();
		TextureAttrForStorage_t(HRenderTexture, int32);
		TextureAttrForStorage_t(const TextureAttr_t &);
		TextureAttrForStorage_t & operator=(const TextureAttr_t &);
		~TextureAttrForStorage_t();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct TextureAttr_t {
		HRenderTexture texture;  // +0x0
		int32 nSpecificMipLevelToBind;  // +0x8
		TextureAttr_t();
		TextureAttr_t(HRenderTexture, int32);
		TextureAttr_t(const TextureAttrForStorage_t &);
		TextureAttr_t & operator=(const TextureAttrForStorage_t &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ConstantBufferAttr_t {
		ConstantBufferHandle_t hBuffer;  // +0x0
		uint32 nView;  // +0x8
		ConstantBufferAttr_t();
		ConstantBufferAttr_t(ConstantBufferHandle_t, uint32);
		ConstantBufferAttr_t(const ConstantBufferAttr_t &);
		ConstantBufferAttr_t & operator=(const ConstantBufferAttr_t &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	const CRenderAttributes * m_pParent;  // +0x310
	const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t> & TextureAttributes();
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t> & TextureAttributes();
	bool IsEmpty();
	void Clear(bool);
	void SetFloatValue(CUtlStringToken, float);
	float GetFloatValue(CUtlStringToken, float);
	bool GetFloatValue(float *, CUtlStringToken);
	void DeleteFloatValue(CUtlStringToken);
	void SetVector2DValue(CUtlStringToken, Vector2D);
	Vector2D GetVector2DValue(CUtlStringToken, Vector2D);
	bool GetVector2DValue(Vector2D *, CUtlStringToken);
	void DeleteVector2DValue(CUtlStringToken);
	void SetVectorValue(CUtlStringToken, Vector);
	Vector GetVectorValue(CUtlStringToken, Vector);
	bool GetVectorValue(Vector *, CUtlStringToken);
	void DeleteVectorValue(CUtlStringToken);
	void SetVector4DValue(CUtlStringToken, Vector4D);
	Vector4D GetVector4DValue(CUtlStringToken, Vector4D);
	bool GetVector4DValue(Vector4D *, CUtlStringToken);
	void DeleteVector4DValue(CUtlStringToken);
	void SetVMatrixValue(CUtlStringToken, VMatrix);
	VMatrix GetVMatrixValue(CUtlStringToken, VMatrix);
	bool GetVMatrixValue(VMatrix *, CUtlStringToken);
	void DeleteVMatrixValue(CUtlStringToken);
	void SetPtrValue(CUtlStringToken, void *);
	void * GetPtrValue(CUtlStringToken, void *);
	bool GetPtrValue(void * *, CUtlStringToken);
	void DeletePtrValue(CUtlStringToken);
	void SetStringValue(CUtlStringToken, const char *);
	bool GetStringValue(CUtlString *, CUtlStringToken);
	void DeleteStringValue(CUtlStringToken);
	void SetIntValue(CUtlStringToken, int);
	int GetIntValue(CUtlStringToken, int);
	bool GetIntValue(int *, CUtlStringToken);
	void DeleteIntValue(CUtlStringToken);
	void SetBoolValue(CUtlStringToken, bool);
	bool GetBoolValue(CUtlStringToken, bool);
	bool GetBoolValue(bool *, CUtlStringToken);
	void DeleteBoolValue(CUtlStringToken);
	void SetTextureValue(CUtlStringToken, HRenderTexture, int32);
	HRenderTexture GetTextureValue(CUtlStringToken, HRenderTexture);
	HRenderTexture GetFirstTexture();
	bool GetTextureValue(HRenderTexture *, CUtlStringToken);
	bool GetTextureValueAndMipLevelToBind(HRenderTexture *, int *, CUtlStringToken);
	void DeleteTextureValue(CUtlStringToken);
	void SetConstantBufferValue(CUtlStringToken, ConstantBufferHandle_t, uint32);
	ConstantBufferAttr_t GetConstantBufferValue(CUtlStringToken, ConstantBufferHandle_t, uint32);
	bool GetConstantBufferValue(ConstantBufferAttr_t *, CUtlStringToken);
	void DeleteConstantBufferValue(CUtlStringToken);
	void MoveToAnother(CRenderAttributes &);
	void MergeTo(CRenderAttributes &);
	void SetParent(const CRenderAttributes *);
	const CRenderAttributes * GetParent();
	CRenderAttributes();
	~CRenderAttributes();
	void SetAttr(CUtlStringToken, HRenderTexture);
	void SetAttr(CUtlStringToken, HRenderTextureStrong);
	void SetAttr(CUtlStringToken, float);
	void SetAttr(CUtlStringToken, const Vector &);
	void SetAttr(CUtlStringToken, const VMatrix &);
	void SetAttr(CUtlStringToken, void *);
	void SetAttr(CUtlStringToken, bool);

	// sizeof = 800
};

// src/public/rendersystem/renderattrs.h:18
class CRenderAttributes {
	struct TextureAttrForStorage_t {
		HRenderTexture texture;  // +0x0
		int32 nSpecificMipLevelToBind;  // +0x8
		TextureAttrForStorage_t();
		TextureAttrForStorage_t(HRenderTexture, int32);
		TextureAttrForStorage_t(const TextureAttr_t &);
		TextureAttrForStorage_t & operator=(const TextureAttr_t &);
		~TextureAttrForStorage_t();

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct TextureAttr_t {
		HRenderTexture texture;  // +0x0
		int32 nSpecificMipLevelToBind;  // +0x8
		TextureAttr_t();
		TextureAttr_t(HRenderTexture, int32);
		TextureAttr_t(const TextureAttrForStorage_t &);
		TextureAttr_t & operator=(const TextureAttrForStorage_t &);
		TextureAttr_t(const TextureAttr_t &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ConstantBufferAttr_t {
		ConstantBufferHandle_t hBuffer;  // +0x0
		uint32 nView;  // +0x8
		ConstantBufferAttr_t();
		ConstantBufferAttr_t(ConstantBufferHandle_t, uint32);
		ConstantBufferAttr_t(const ConstantBufferAttr_t &);
		ConstantBufferAttr_t & operator=(const ConstantBufferAttr_t &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	const CRenderAttributes * m_pParent;  // +0x310
	const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t> & TextureAttributes();
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t> & TextureAttributes();
	bool IsEmpty();
	void Clear(bool);
	void SetFloatValue(CUtlStringToken, float);
	float GetFloatValue(CUtlStringToken, float);
	bool GetFloatValue(float *, CUtlStringToken);
	void DeleteFloatValue(CUtlStringToken);
	void SetVector2DValue(CUtlStringToken, Vector2D);
	Vector2D GetVector2DValue(CUtlStringToken, Vector2D);
	bool GetVector2DValue(Vector2D *, CUtlStringToken);
	void DeleteVector2DValue(CUtlStringToken);
	void SetVectorValue(CUtlStringToken, Vector);
	Vector GetVectorValue(CUtlStringToken, Vector);
	bool GetVectorValue(Vector *, CUtlStringToken);
	void DeleteVectorValue(CUtlStringToken);
	void SetVector4DValue(CUtlStringToken, Vector4D);
	Vector4D GetVector4DValue(CUtlStringToken, Vector4D);
	bool GetVector4DValue(Vector4D *, CUtlStringToken);
	void DeleteVector4DValue(CUtlStringToken);
	void SetVMatrixValue(CUtlStringToken, VMatrix);
	VMatrix GetVMatrixValue(CUtlStringToken, VMatrix);
	bool GetVMatrixValue(VMatrix *, CUtlStringToken);
	void DeleteVMatrixValue(CUtlStringToken);
	void SetPtrValue(CUtlStringToken, void *);
	void * GetPtrValue(CUtlStringToken, void *);
	bool GetPtrValue(void * *, CUtlStringToken);
	void DeletePtrValue(CUtlStringToken);
	void SetStringValue(CUtlStringToken, const char *);
	bool GetStringValue(CUtlString *, CUtlStringToken);
	void DeleteStringValue(CUtlStringToken);
	void SetIntValue(CUtlStringToken, int);
	int GetIntValue(CUtlStringToken, int);
	bool GetIntValue(int *, CUtlStringToken);
	void DeleteIntValue(CUtlStringToken);
	void SetBoolValue(CUtlStringToken, bool);
	bool GetBoolValue(CUtlStringToken, bool);
	bool GetBoolValue(bool *, CUtlStringToken);
	void DeleteBoolValue(CUtlStringToken);
	void SetTextureValue(CUtlStringToken, HRenderTexture, int32);
	HRenderTexture GetTextureValue(CUtlStringToken, HRenderTexture);
	HRenderTexture GetFirstTexture();
	bool GetTextureValue(HRenderTexture *, CUtlStringToken);
	bool GetTextureValueAndMipLevelToBind(HRenderTexture *, int *, CUtlStringToken);
	void DeleteTextureValue(CUtlStringToken);
	void SetConstantBufferValue(CUtlStringToken, ConstantBufferHandle_t, uint32);
	ConstantBufferAttr_t GetConstantBufferValue(CUtlStringToken, ConstantBufferHandle_t, uint32);
	bool GetConstantBufferValue(ConstantBufferAttr_t *, CUtlStringToken);
	void DeleteConstantBufferValue(CUtlStringToken);
	void MoveToAnother(CRenderAttributes &);
	void MergeTo(CRenderAttributes &);
	void SetParent(const CRenderAttributes *);
	const CRenderAttributes * GetParent();
	CRenderAttributes();
	~CRenderAttributes();
	void SetAttr(CUtlStringToken, HRenderTexture);
	void SetAttr(CUtlStringToken, HRenderTextureStrong);
	void SetAttr(CUtlStringToken, float);
	void SetAttr(CUtlStringToken, const Vector &);
	void SetAttr(CUtlStringToken, const VMatrix &);
	void SetAttr(CUtlStringToken, void *);
	void SetAttr(CUtlStringToken, bool);

	// sizeof = 800
};

// src/public/rendersystem/renderattrs.h:18
class CRenderAttributes {
	struct TextureAttrForStorage_t {
		HRenderTexture texture;  // +0x0
		int32 nSpecificMipLevelToBind;  // +0x8
		TextureAttrForStorage_t();
		TextureAttrForStorage_t(HRenderTexture, int32);
		TextureAttrForStorage_t(const TextureAttr_t &);
		TextureAttrForStorage_t & operator=(const TextureAttr_t &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct TextureAttr_t {
		HRenderTexture texture;  // +0x0
		int32 nSpecificMipLevelToBind;  // +0x8
		TextureAttr_t();
		TextureAttr_t(HRenderTexture, int32);
		TextureAttr_t(const TextureAttrForStorage_t &);
		TextureAttr_t & operator=(const TextureAttrForStorage_t &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

	struct ConstantBufferAttr_t {
		ConstantBufferHandle_t hBuffer;  // +0x0
		uint32 nView;  // +0x8
		ConstantBufferAttr_t();
		ConstantBufferAttr_t(ConstantBufferHandle_t, uint32);
		ConstantBufferAttr_t(const ConstantBufferAttr_t &);
		ConstantBufferAttr_t & operator=(const ConstantBufferAttr_t &);

		// sizeof = 16
	};
	/* tag__fprintf: const_type tag not supported! */;

private:

	const CRenderAttributes * m_pParent;  // +0x310
	const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t> & TextureAttributes();
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 4, CRenderAttributes::TextureAttrForStorage_t> & TextureAttributes();
	bool IsEmpty();
	void Clear(bool);
	void SetFloatValue(CUtlStringToken, float);
	float GetFloatValue(CUtlStringToken, float);
	bool GetFloatValue(float *, CUtlStringToken);
	void DeleteFloatValue(CUtlStringToken);
	void SetVector2DValue(CUtlStringToken, Vector2D);
	Vector2D GetVector2DValue(CUtlStringToken, Vector2D);
	bool GetVector2DValue(Vector2D *, CUtlStringToken);
	void DeleteVector2DValue(CUtlStringToken);
	void SetVectorValue(CUtlStringToken, Vector);
	Vector GetVectorValue(CUtlStringToken, Vector);
	bool GetVectorValue(Vector *, CUtlStringToken);
	void DeleteVectorValue(CUtlStringToken);
	void SetVector4DValue(CUtlStringToken, Vector4D);
	Vector4D GetVector4DValue(CUtlStringToken, Vector4D);
	bool GetVector4DValue(Vector4D *, CUtlStringToken);
	void DeleteVector4DValue(CUtlStringToken);
	void SetVMatrixValue(CUtlStringToken, VMatrix);
	VMatrix GetVMatrixValue(CUtlStringToken, VMatrix);
	bool GetVMatrixValue(VMatrix *, CUtlStringToken);
	void DeleteVMatrixValue(CUtlStringToken);
	void SetPtrValue(CUtlStringToken, void *);
	void * GetPtrValue(CUtlStringToken, void *);
	bool GetPtrValue(void * *, CUtlStringToken);
	void DeletePtrValue(CUtlStringToken);
	void SetStringValue(CUtlStringToken, const char *);
	bool GetStringValue(CUtlString *, CUtlStringToken);
	void DeleteStringValue(CUtlStringToken);
	void SetIntValue(CUtlStringToken, int);
	int GetIntValue(CUtlStringToken, int);
	bool GetIntValue(int *, CUtlStringToken);
	void DeleteIntValue(CUtlStringToken);
	void SetBoolValue(CUtlStringToken, bool);
	bool GetBoolValue(CUtlStringToken, bool);
	bool GetBoolValue(bool *, CUtlStringToken);
	void DeleteBoolValue(CUtlStringToken);
	void SetTextureValue(CUtlStringToken, HRenderTexture, int32);
	HRenderTexture GetTextureValue(CUtlStringToken, HRenderTexture);
	HRenderTexture GetFirstTexture();
	bool GetTextureValue(HRenderTexture *, CUtlStringToken);
	bool GetTextureValueAndMipLevelToBind(HRenderTexture *, int *, CUtlStringToken);
	void DeleteTextureValue(CUtlStringToken);
	void SetConstantBufferValue(CUtlStringToken, ConstantBufferHandle_t, uint32);
	ConstantBufferAttr_t GetConstantBufferValue(CUtlStringToken, ConstantBufferHandle_t, uint32);
	bool GetConstantBufferValue(ConstantBufferAttr_t *, CUtlStringToken);
	void DeleteConstantBufferValue(CUtlStringToken);
	void MoveToAnother(CRenderAttributes &);
	void MergeTo(CRenderAttributes &);
	void SetParent(const CRenderAttributes *);
	const CRenderAttributes * GetParent();
	CRenderAttributes();
	~CRenderAttributes();
	void SetAttr(CUtlStringToken, HRenderTexture);
	void SetAttr(CUtlStringToken, HRenderTextureStrong);
	void SetAttr(CUtlStringToken, float);
	void SetAttr(CUtlStringToken, const Vector &);
	void SetAttr(CUtlStringToken, const VMatrix &);
	void SetAttr(CUtlStringToken, void *);
	void SetAttr(CUtlStringToken, bool);

	// sizeof = 800
};

// src/public/rendersystem/renderattrs.h:600
class CRenderAttributesDoubleBuffered {
private:

	const CRenderAttributes * GetSnapshot();
	CRenderAttributes * GetStaging();
	void UpdateSnapshot();
	void Clear(bool);
	CRenderAttributesDoubleBuffered();
	void SetFloatValue(CUtlStringToken, float);
	void SetVector2DValue(CUtlStringToken, Vector2D);
	void SetVectorValue(CUtlStringToken, Vector);
	void SetVector4DValue(CUtlStringToken, Vector4D);
	void SetVMatrixValue(CUtlStringToken, VMatrix);
	void SetPtrValue(CUtlStringToken, void *);
	void SetStringValue(CUtlStringToken, const char *);
	void SetIntValue(CUtlStringToken, int);
	void SetBoolValue(CUtlStringToken, bool);
	void SetTextureValue(CUtlStringToken, HRenderTexture);
	void SetConstantBufferValue(CUtlStringToken, ConstantBufferHandle_t);

	// sizeof = 1600
};
