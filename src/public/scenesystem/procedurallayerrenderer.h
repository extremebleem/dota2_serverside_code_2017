// Reconstructed from DWARF by pahole; not original source.

// src/public/scenesystem/procedurallayerrenderer.h:16
class IProceduralLayerRenderer {
	int ()() * * _vptr.IProceduralLayerRenderer;  // +0x0
	IProceduralLayerRenderer();
	virtual void Render(ISceneView *, IRenderContext *, ISceneLayer *, SceneSystemPerFrameStats_t *);
	virtual ~IProceduralLayerRenderer();

	// vtable[0] Render
	// sizeof = 8
};
