// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nav_game.h:18
class CNavMeshGameEventListener : public CGameEventListener, public INavMeshGameEventListener {
public:

protected:

	const CNavMesh & m_rNavMesh;  // +0x18
	CNavMeshGameEventListener(const CNavMeshGameEventListener &);
	CNavMeshGameEventListener(CNavMesh &);
	virtual ~CNavMeshGameEventListener();
	virtual void OnNavMeshDestroy();
	virtual void FireGameEvent(IGameEvent *);

	// vtable[3] OnNavMeshDestroy
	// vtable[2] FireGameEvent
	// sizeof = 32
};
