// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/iplayeranimstate.h:24
class IPlayerAnimState {
	int ()() * * _vptr.IPlayerAnimState;  // +0x0
	~IPlayerAnimState();
	IPlayerAnimState(IPlayerAnimState &);
	IPlayerAnimState(const IPlayerAnimState &);
	IPlayerAnimState();
	virtual void Release();
	virtual void OnNewModel();
	virtual void Update(float, float);
	virtual void ClearAnimationState();
	virtual const QAngle & GetRenderAngles();
	virtual void OnMainActivityChanged(Activity, Activity);

	// vtable[0] Release
	// vtable[1] OnNewModel
	// vtable[2] Update
	// vtable[3] ClearAnimationState
	// vtable[4] GetRenderAngles
	// vtable[5] OnMainActivityChanged
	// sizeof = 8
} __attribute__((__packed__));
