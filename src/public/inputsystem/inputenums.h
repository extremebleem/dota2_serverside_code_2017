// Reconstructed from DWARF by pahole; not original source.

// src/public/inputsystem/inputenums.h:152
struct InputEvent_t {
	PlatWindow_t m_hWnd;  // +0x0
	int m_nType;  // +0x8
	int m_nTick;  // +0xc
	uint64 m_nData;  // +0x10
	int m_nData2;  // +0x18
	int m_nData3;  // +0x1c
	bool IsQualifierPressed(int);
	bool IsControlPressed();
	bool IsShiftPressed();
	bool IsAltPressed();
	bool IsGuiPressed();
	int GetCursorPositionX();
	int GetCursorPositionY();
	int GetCursorPositionDeltaX();
	int GetCursorPositionDeltaY();
	IntVector2D WindowRelativeMouseCoordinates(PlatWindow_t);

	// sizeof = 32
};
