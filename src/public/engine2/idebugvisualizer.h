// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/idebugvisualizer.h:25
class IDebugVisualizer {
	int ()() * * _vptr.IDebugVisualizer;  // +0x0
	IDebugVisualizer(const IDebugVisualizer &);
	IDebugVisualizer();
	virtual ~IDebugVisualizer();
	virtual void SetOverlayStartTime(float, bool);
	virtual void DebugDraw(CFrustum *, ISceneView *, float, float);
	virtual void AgeList(float, float);

	// vtable[2] SetOverlayStartTime
	// vtable[3] DebugDraw
	// vtable[4] AgeList
	// sizeof = 8
};

// src/public/engine2/idebugvisualizer.h:40
class CDebugVisualizerAbsTime : public IDebugVisualizer {
public:

protected:

	CDebugVisualizerAbsTime();
	virtual ~CDebugVisualizerAbsTime();
	virtual void SetOverlayStartTime(float, bool);
	virtual void DebugDraw(CFrustum *, ISceneView *, float, float);
	virtual void AgeList(float, float);

	// vtable[2] SetOverlayStartTime
	// vtable[3] DebugDraw
	// vtable[4] AgeList
	// sizeof = 16
};
