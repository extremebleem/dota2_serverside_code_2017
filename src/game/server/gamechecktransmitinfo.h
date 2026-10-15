// Reconstructed from DWARF by pahole; not original source.

// src/game/server/gamechecktransmitinfo.h:16
class CGameCheckTransmitInfo {
	int m_nRecipientTeamNumber;  // +0x20
	int m_nRecipientCoachedTeamNumber;  // +0x24
	bool m_bGameOverState;  // +0x28
	bool m_bRecipientHLTV;  // +0x29
	bool m_bRecipientLowViolence;  // +0x2a
	bool m_bRecipientIsObserver;  // +0x2b
	CGameCheckTransmitInfo();
	CGameCheckTransmitInfo(CCheckTransmitInfo *, CBasePlayer *, CTeam *, CBaseEntity *, int, int, bool, bool, bool, bool);

	// sizeof = 48
};
