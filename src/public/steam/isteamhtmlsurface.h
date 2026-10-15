// Reconstructed from DWARF by pahole; not original source.

// src/public/steam/isteamhtmlsurface.h:21
class ISteamHTMLSurface {
	enum EHTMLMouseButton {
		eHTMLMouseButton_Left = 0,
		eHTMLMouseButton_Right = 0x1,
		eHTMLMouseButton_Middle = 0x2,
	};

	enum EHTMLKeyModifiers {
		k_eHTMLKeyModifier_None = 0,
		k_eHTMLKeyModifier_AltDown = 0x1,
		k_eHTMLKeyModifier_CtrlDown = 0x2,
		k_eHTMLKeyModifier_ShiftDown = 0x4,
	};

	int ()() * * _vptr.ISteamHTMLSurface;  // +0x0
	ISteamHTMLSurface();
	virtual ~ISteamHTMLSurface();
	virtual bool Init();
	virtual bool Shutdown();
	virtual SteamAPICall_t CreateBrowser(const char *, const char *);
	virtual void RemoveBrowser(HHTMLBrowser);
	virtual void LoadURL(HHTMLBrowser, const char *, const char *);
	virtual void SetSize(HHTMLBrowser, uint32, uint32);
	virtual void StopLoad(HHTMLBrowser);
	virtual void Reload(HHTMLBrowser);
	virtual void GoBack(HHTMLBrowser);
	virtual void GoForward(HHTMLBrowser);
	virtual void AddHeader(HHTMLBrowser, const char *, const char *);
	virtual void ExecuteJavascript(HHTMLBrowser, const char *);
	virtual void MouseUp(HHTMLBrowser, EHTMLMouseButton);
	virtual void MouseDown(HHTMLBrowser, EHTMLMouseButton);
	virtual void MouseDoubleClick(HHTMLBrowser, EHTMLMouseButton);
	virtual void MouseMove(HHTMLBrowser, int, int);
	virtual void MouseWheel(HHTMLBrowser, int32);
	virtual void KeyDown(HHTMLBrowser, uint32, EHTMLKeyModifiers);
	virtual void KeyUp(HHTMLBrowser, uint32, EHTMLKeyModifiers);
	virtual void KeyChar(HHTMLBrowser, uint32, EHTMLKeyModifiers);
	virtual void SetHorizontalScroll(HHTMLBrowser, uint32);
	virtual void SetVerticalScroll(HHTMLBrowser, uint32);
	virtual void SetKeyFocus(HHTMLBrowser, bool);
	virtual void ViewSource(HHTMLBrowser);
	virtual void CopyToClipboard(HHTMLBrowser);
	virtual void PasteFromClipboard(HHTMLBrowser);
	virtual void Find(HHTMLBrowser, const char *, bool, bool);
	virtual void StopFind(HHTMLBrowser);
	virtual void GetLinkAtPosition(HHTMLBrowser, int, int);
	virtual void SetCookie(const char *, const char *, const char *, const char *, RTime32, bool, bool);
	virtual void SetPageScaleFactor(HHTMLBrowser, float, int, int);
	virtual void SetBackgroundMode(HHTMLBrowser, bool);
	virtual void AllowStartRequest(HHTMLBrowser, bool);
	virtual void JSDialogResponse(HHTMLBrowser, bool);
	virtual void FileLoadDialogResponse(HHTMLBrowser, const char * *);

	// vtable[2] Init
	// vtable[3] Shutdown
	// vtable[4] CreateBrowser
	// vtable[5] RemoveBrowser
	// vtable[6] LoadURL
	// vtable[7] SetSize
	// vtable[8] StopLoad
	// vtable[9] Reload
	// vtable[10] GoBack
	// vtable[11] GoForward
	// vtable[12] AddHeader
	// vtable[13] ExecuteJavascript
	// vtable[14] MouseUp
	// vtable[15] MouseDown
	// vtable[16] MouseDoubleClick
	// vtable[17] MouseMove
	// vtable[18] MouseWheel
	// vtable[19] KeyDown
	// vtable[20] KeyUp
	// vtable[21] KeyChar
	// vtable[22] SetHorizontalScroll
	// vtable[23] SetVerticalScroll
	// vtable[24] SetKeyFocus
	// vtable[25] ViewSource
	// vtable[26] CopyToClipboard
	// vtable[27] PasteFromClipboard
	// vtable[28] Find
	// vtable[29] StopFind
	// vtable[30] GetLinkAtPosition
	// vtable[31] SetCookie
	// vtable[32] SetPageScaleFactor
	// vtable[33] SetBackgroundMode
	// vtable[34] AllowStartRequest
	// vtable[35] JSDialogResponse
	// vtable[36] FileLoadDialogResponse
	// sizeof = 8
};
