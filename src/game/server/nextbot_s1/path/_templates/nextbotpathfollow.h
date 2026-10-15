// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/path/nextbotpathfollow.h:118
class CPathAndFollower<CNavPathNB> : public CPathFollower {
public:

	CPathAndFollower(CPathAndFollower<CNavPathNB> &);
	CPathAndFollower(const CPathAndFollower<CNavPathNB> &);
	CPathAndFollower();
	CNavPathNB & GetTemplatedPath();
	virtual ~CPathAndFollower();

	// sizeof = 23000
};
