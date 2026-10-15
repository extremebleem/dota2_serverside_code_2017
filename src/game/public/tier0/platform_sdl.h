// Reconstructed from DWARF by pahole; not original source.

// src/game/public/tier0/platform_sdl.h:19
struct PlatSDLFunctions_t {
	int (*pSDL_Init)(Uint32);  // +0x0
	void (*pSDL_Quit)();  // +0x8
	int (*pSDL_InitSubSystem)(Uint32);  // +0x10
	void (*pSDL_QuitSubSystem)(Uint32);  // +0x18
	Uint32 (*pSDL_WasInit)(Uint32);  // +0x20
	const char * (*pSDL_GetHint)(const char *);  // +0x28
	SDL_bool (*pSDL_SetHint)(const char *, const char *);  // +0x30
	const char * (*pSDL_GetError)();  // +0x38
	char * (*pSDL_iconv_string)(const char *, const char *, const char *, size_t);  // +0x40
	size_t (*pSDL_wcslen)(const wchar_t *);  // +0x48
	void (*pSDL_free)(void *);  // +0x50
	char * (*pSDL_getenv)(const char *);  // +0x58
	int (*pSDL_setenv)(const char *, const char *, int);  // +0x60
	SDL_RWops * (*pSDL_RWFromFile)(const char *, const char *);  // +0x68
	int (*pSDL_GetDesktopDisplayMode)(int, SDL_DisplayMode *);  // +0x70
	int (*pSDL_GetNumVideoDisplays)();  // +0x78
	int (*pSDL_GetDisplayBounds)(int, SDL_Rect *);  // +0x80
	int (*pSDL_GetDisplayDPI)(int, float *, float *, float *);  // +0x88
	const char * (*pSDL_GetDisplayName)(int);  // +0x90
	SDL_Window * (*pSDL_CreateWindow)(const char *, int, int, int, int, Uint32);  // +0x98
	void (*pSDL_DestroyWindow)(SDL_Window *);  // +0xa0
	Uint32 (*pSDL_GetWindowFlags)(SDL_Window *);  // +0xa8
	int (*pSDL_GetWindowDisplayIndex)(SDL_Window *);  // +0xb0
	SDL_Window * (*pSDL_GetWindowFromID)(Uint32);  // +0xb8
	const char * (*pSDL_GetWindowTitle)(SDL_Window *);  // +0xc0
	void (*pSDL_SetWindowTitle)(SDL_Window *, const char *);  // +0xc8
	void (*pSDL_SetWindowIcon)(SDL_Window *, SDL_Surface *);  // +0xd0
	void (*pSDL_SetWindowBordered)(SDL_Window *, SDL_bool);  // +0xd8
	int (*pSDL_SetWindowFullscreen)(SDL_Window *, Uint32);  // +0xe0
	void (*pSDL_ShowWindow)(SDL_Window *);  // +0xe8
	void (*pSDL_HideWindow)(SDL_Window *);  // +0xf0
	void (*pSDL_RaiseWindow)(SDL_Window *);  // +0xf8
	void (*pSDL_MinimizeWindow)(SDL_Window *);  // +0x100
	void (*pSDL_RestoreWindow)(SDL_Window *);  // +0x108
	void (*pSDL_GetWindowPosition)(SDL_Window *, int *, int *);  // +0x110
	void (*pSDL_SetWindowPosition)(SDL_Window *, int, int);  // +0x118
	void (*pSDL_GetWindowSize)(SDL_Window *, int *, int *);  // +0x120
	void (*pSDL_SetWindowSize)(SDL_Window *, int, int);  // +0x128
	SDL_bool (*pSDL_GetWindowGrab)(SDL_Window *);  // +0x130
	SDL_Window * (*pSDL_GetGrabbedWindow)();  // +0x138
	void (*pSDL_SetWindowGrab)(SDL_Window *, SDL_bool);  // +0x140
	SDL_bool (*pSDL_GetWindowWMInfo)(SDL_Window *, SDL_SysWMinfo *);  // +0x148
	SDL_bool (*pSDL_IsScreenSaverEnabled)();  // +0x150
	void (*pSDL_EnableScreenSaver)();  // +0x158
	void (*pSDL_DisableScreenSaver)();  // +0x160
	int (*pSDL_PollEvent)(SDL_Event *);  // +0x168
	int (*pSDL_WaitEvent)(SDL_Event *);  // +0x170
	int (*pSDL_WaitEventTimeout)(SDL_Event *, int);  // +0x178
	SDL_Surface * (*pSDL_LoadBMP_RW)(SDL_RWops *, int);  // +0x180
	void (*pSDL_WarpMouseInWindow)(SDL_Window *, int, int);  // +0x188
	int (*pSDL_WarpMouseGlobal)(int, int);  // +0x190
	SDL_bool (*pSDL_GetRelativeMouseMode)();  // +0x198
	int (*pSDL_SetRelativeMouseMode)(SDL_bool);  // +0x1a0
	SDL_Cursor * (*pSDL_CreateCursor)(const Uint8 *, const Uint8 *, int, int, int, int);  // +0x1a8
	SDL_Cursor * (*pSDL_CreateColorCursor)(SDL_Surface *, int, int);  // +0x1b0
	SDL_Cursor * (*pSDL_CreateSystemCursor)(SDL_SystemCursor);  // +0x1b8
	void (*pSDL_SetCursor)(SDL_Cursor *);  // +0x1c0
	SDL_Cursor * (*pSDL_GetCursor)();  // +0x1c8
	SDL_Cursor * (*pSDL_GetDefaultCursor)();  // +0x1d0
	void (*pSDL_FreeCursor)(SDL_Cursor *);  // +0x1d8
	int (*pSDL_ShowCursor)(int);  // +0x1e0
	SDL_Keymod (*pSDL_GetModState)();  // +0x1e8
	const char * (*pSDL_GetKeyName)(SDL_Keycode);  // +0x1f0
	const char * (*pSDL_GetScancodeName)(SDL_Scancode);  // +0x1f8
	SDL_Keycode (*pSDL_GetKeyFromScancode)(SDL_Scancode);  // +0x200
	SDL_Scancode (*pSDL_GetScancodeFromKey)(SDL_Keycode);  // +0x208
	int (*pSDL_ShowMessageBox)(const SDL_MessageBoxData *, int *);  // +0x210
	SDL_Window * (*pSDL_GetKeyboardFocus)();  // +0x218
	int (*pSDL_GetNumAudioDevices)(int);  // +0x220
	const char * (*pSDL_GetAudioDeviceName)(int, int);  // +0x228
	SDL_AudioDeviceID (*pSDL_OpenAudioDevice)(const char *, int, const SDL_AudioSpec *, SDL_AudioSpec *, int);  // +0x230
	void (*pSDL_CloseAudioDevice)(SDL_AudioDeviceID);  // +0x238
	void (*pSDL_PauseAudioDevice)(SDL_AudioDeviceID, int);  // +0x240
	int (*pSDL_QueueAudio)(SDL_AudioDeviceID, const void *, Uint32);  // +0x248
	Uint32 (*pSDL_GetQueuedAudioSize)(SDL_AudioDeviceID);  // +0x250
	void (*pSDL_ClearQueuedAudio)(SDL_AudioDeviceID);  // +0x258
	int (*pSDL_SetClipboardText)(const char *);  // +0x260
	char * (*pSDL_GetClipboardText)();  // +0x268
	SDL_bool (*pSDL_HasClipboardText)();  // +0x270
	SDL_Surface * (*pSDL_CreateRGBSurface)(Uint32, int, int, int, Uint32, Uint32, Uint32, Uint32);  // +0x278
	void (*pSDL_FreeSurface)(SDL_Surface *);  // +0x280
	int (*pSDL_UpperBlitScaled)(SDL_Surface *, const SDL_Rect *, SDL_Surface *, SDL_Rect *);  // +0x288
	int (*pSDL_NumJoysticks)();  // +0x290
	const char * (*pSDL_JoystickNameForIndex)(int);  // +0x298
	SDL_Joystick * (*pSDL_JoystickOpen)(int);  // +0x2a0
	const char * (*pSDL_JoystickName)(SDL_Joystick *);  // +0x2a8
	int (*pSDL_JoystickNumAxes)(SDL_Joystick *);  // +0x2b0
	int (*pSDL_JoystickNumBalls)(SDL_Joystick *);  // +0x2b8
	int (*pSDL_JoystickNumHats)(SDL_Joystick *);  // +0x2c0
	int (*pSDL_JoystickNumButtons)(SDL_Joystick *);  // +0x2c8
	void (*pSDL_JoystickUpdate)();  // +0x2d0
	Sint16 (*pSDL_JoystickGetAxis)(SDL_Joystick *, int);  // +0x2d8
	Uint8 (*pSDL_JoystickGetHat)(SDL_Joystick *, int);  // +0x2e0
	int (*pSDL_JoystickGetBall)(SDL_Joystick *, int, int *, int *);  // +0x2e8
	Uint8 (*pSDL_JoystickGetButton)(SDL_Joystick *, int);  // +0x2f0
	void (*pSDL_JoystickClose)(SDL_Joystick *);  // +0x2f8
	int (*pSDL_GetNumDisplayModes)(int);  // +0x300
	int (*pSDL_GetDisplayMode)(int, int, SDL_DisplayMode *);  // +0x308
	int (*pSDL_GetCurrentDisplayMode)(int, SDL_DisplayMode *);  // +0x310
	int (*pSDL_SetWindowGammaRamp)(SDL_Window *, const Uint16 *, const Uint16 *, const Uint16 *);  // +0x318
	void (*pSDL_StartTextInput)();  // +0x320
	SDL_bool (*pSDL_IsTextInputActive)();  // +0x328
	void (*pSDL_StopTextInput)();  // +0x330
	void (*pSDL_SetTextInputRect)(SDL_Rect *);  // +0x338
	SDL_bool (*pSDL_HasScreenKeyboardSupport)();  // +0x340
	SDL_bool (*pSDL_IsScreenKeyboardShown)(SDL_Window *);  // +0x348

	// sizeof = 848
};
