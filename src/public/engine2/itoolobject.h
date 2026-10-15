// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/itoolobject.h:44
class IToolObject {
	int ()() * * _vptr.IToolObject;  // +0x0
private:

	IToolObject(const IToolObject &);
	IToolObject(IToolObjectContext *);
	virtual ~IToolObject();
	virtual void UpdateStateFromKeyValues(const CEntityKeyValues *);
	virtual void GetStateAsKeyValues(CEntityKeyValues *);
	virtual CSceneObject * CreateSceneObjectForRenderInstance(const matrix3x4_t &, ISceneWorld *);
	virtual void WriteSceneViewRenderAttributes(CRenderAttributes &);
	virtual bool GenerateFogState(SceneFogParams_t *);
	virtual CSceneObject * GenerateDirectionalLight(ISceneWorld *);
	virtual CSceneObject * GenerateSkybox(ISceneWorld *);

protected:

	IToolObjectContext * Context();

	// vtable[2] UpdateStateFromKeyValues
	// vtable[3] GetStateAsKeyValues
	// vtable[4] CreateSceneObjectForRenderInstance
	// vtable[5] WriteSceneViewRenderAttributes
	// vtable[6] GenerateFogState
	// vtable[7] GenerateDirectionalLight
	// vtable[8] GenerateSkybox
	// sizeof = 16
};
