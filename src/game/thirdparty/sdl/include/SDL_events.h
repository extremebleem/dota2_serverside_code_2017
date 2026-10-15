// Reconstructed from DWARF by pahole; not original source.

// src/game/thirdparty/sdl/include/SDL_events.h:165
struct SDL_CommonEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4

	// sizeof = 8
};

// src/game/thirdparty/sdl/include/SDL_events.h:174
struct SDL_WindowEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	Uint32 windowID;  // +0x8
	Uint8 event;  // +0xc
	Uint8 padding1;  // +0xd
	Uint8 padding2;  // +0xe
	Uint8 padding3;  // +0xf
	Sint32 data1;  // +0x10
	Sint32 data2;  // +0x14

	// sizeof = 24
};

// src/game/thirdparty/sdl/include/SDL_events.h:190
struct SDL_KeyboardEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	Uint32 windowID;  // +0x8
	Uint8 state;  // +0xc
	Uint8 repeat;  // +0xd
	Uint8 padding2;  // +0xe
	Uint8 padding3;  // +0xf
	SDL_Keysym keysym;  // +0x10

	// sizeof = 32
};

// src/game/thirdparty/sdl/include/SDL_events.h:206
struct SDL_TextEditingEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	Uint32 windowID;  // +0x8
	char text[32];  // +0xc
	Sint32 start;  // +0x2c
	Sint32 length;  // +0x30

	// sizeof = 52
};

// src/game/thirdparty/sdl/include/SDL_events.h:221
struct SDL_TextInputEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	Uint32 windowID;  // +0x8
	char text[32];  // +0xc

	// sizeof = 44
};

// src/game/thirdparty/sdl/include/SDL_events.h:232
struct SDL_MouseMotionEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	Uint32 windowID;  // +0x8
	Uint32 which;  // +0xc
	Uint32 state;  // +0x10
	Sint32 x;  // +0x14
	Sint32 y;  // +0x18
	Sint32 xrel;  // +0x1c
	Sint32 yrel;  // +0x20

	// sizeof = 36
};

// src/game/thirdparty/sdl/include/SDL_events.h:248
struct SDL_MouseButtonEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	Uint32 windowID;  // +0x8
	Uint32 which;  // +0xc
	Uint8 button;  // +0x10
	Uint8 state;  // +0x11
	Uint8 clicks;  // +0x12
	Uint8 padding1;  // +0x13
	Sint32 x;  // +0x14
	Sint32 y;  // +0x18

	// sizeof = 28
};

// src/game/thirdparty/sdl/include/SDL_events.h:265
struct SDL_MouseWheelEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	Uint32 windowID;  // +0x8
	Uint32 which;  // +0xc
	Sint32 x;  // +0x10
	Sint32 y;  // +0x14
	Uint32 direction;  // +0x18

	// sizeof = 28
};

// src/game/thirdparty/sdl/include/SDL_events.h:279
struct SDL_JoyAxisEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	SDL_JoystickID which;  // +0x8
	Uint8 axis;  // +0xc
	Uint8 padding1;  // +0xd
	Uint8 padding2;  // +0xe
	Uint8 padding3;  // +0xf
	Sint16 value;  // +0x10
	Uint16 padding4;  // +0x12

	// sizeof = 20
};

// src/game/thirdparty/sdl/include/SDL_events.h:295
struct SDL_JoyBallEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	SDL_JoystickID which;  // +0x8
	Uint8 ball;  // +0xc
	Uint8 padding1;  // +0xd
	Uint8 padding2;  // +0xe
	Uint8 padding3;  // +0xf
	Sint16 xrel;  // +0x10
	Sint16 yrel;  // +0x12

	// sizeof = 20
};

// src/game/thirdparty/sdl/include/SDL_events.h:311
struct SDL_JoyHatEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	SDL_JoystickID which;  // +0x8
	Uint8 hat;  // +0xc
	Uint8 value;  // +0xd
	Uint8 padding1;  // +0xe
	Uint8 padding2;  // +0xf

	// sizeof = 16
};

// src/game/thirdparty/sdl/include/SDL_events.h:331
struct SDL_JoyButtonEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	SDL_JoystickID which;  // +0x8
	Uint8 button;  // +0xc
	Uint8 state;  // +0xd
	Uint8 padding1;  // +0xe
	Uint8 padding2;  // +0xf

	// sizeof = 16
};

// src/game/thirdparty/sdl/include/SDL_events.h:345
struct SDL_JoyDeviceEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	Sint32 which;  // +0x8

	// sizeof = 12
};

// src/game/thirdparty/sdl/include/SDL_events.h:356
struct SDL_ControllerAxisEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	SDL_JoystickID which;  // +0x8
	Uint8 axis;  // +0xc
	Uint8 padding1;  // +0xd
	Uint8 padding2;  // +0xe
	Uint8 padding3;  // +0xf
	Sint16 value;  // +0x10
	Uint16 padding4;  // +0x12

	// sizeof = 20
};

// src/game/thirdparty/sdl/include/SDL_events.h:373
struct SDL_ControllerButtonEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	SDL_JoystickID which;  // +0x8
	Uint8 button;  // +0xc
	Uint8 state;  // +0xd
	Uint8 padding1;  // +0xe
	Uint8 padding2;  // +0xf

	// sizeof = 16
};

// src/game/thirdparty/sdl/include/SDL_events.h:388
struct SDL_ControllerDeviceEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	Sint32 which;  // +0x8

	// sizeof = 12
};

// src/game/thirdparty/sdl/include/SDL_events.h:398
struct SDL_AudioDeviceEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	Uint32 which;  // +0x8
	Uint8 iscapture;  // +0xc
	Uint8 padding1;  // +0xd
	Uint8 padding2;  // +0xe
	Uint8 padding3;  // +0xf

	// sizeof = 16
};

// src/game/thirdparty/sdl/include/SDL_events.h:413
struct SDL_TouchFingerEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	SDL_TouchID touchId;  // +0x8
	SDL_FingerID fingerId;  // +0x10
	float x;  // +0x18
	float y;  // +0x1c
	float dx;  // +0x20
	float dy;  // +0x24
	float pressure;  // +0x28

	// sizeof = 48
};

// src/game/thirdparty/sdl/include/SDL_events.h:430
struct SDL_MultiGestureEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	SDL_TouchID touchId;  // +0x8
	float dTheta;  // +0x10
	float dDist;  // +0x14
	float x;  // +0x18
	float y;  // +0x1c
	Uint16 numFingers;  // +0x20
	Uint16 padding;  // +0x22

	// sizeof = 40
};

// src/game/thirdparty/sdl/include/SDL_events.h:447
struct SDL_DollarGestureEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	SDL_TouchID touchId;  // +0x8
	SDL_GestureID gestureId;  // +0x10
	Uint32 numFingers;  // +0x18
	float error;  // +0x1c
	float x;  // +0x20
	float y;  // +0x24

	// sizeof = 40
};

// src/game/thirdparty/sdl/include/SDL_events.h:465
struct SDL_DropEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	char * file;  // +0x8
	Uint32 windowID;  // +0x10

	// sizeof = 24
};

// src/game/thirdparty/sdl/include/SDL_events.h:477
struct SDL_QuitEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4

	// sizeof = 8
};

// src/game/thirdparty/sdl/include/SDL_events.h:495
struct SDL_UserEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	Uint32 windowID;  // +0x8
	Sint32 code;  // +0xc
	void * data1;  // +0x10
	void * data2;  // +0x18

	// sizeof = 32
};

// src/game/thirdparty/sdl/include/SDL_events.h:515
struct SDL_SysWMEvent {
	Uint32 type;  // +0x0
	Uint32 timestamp;  // +0x4
	SDL_SysWMmsg * msg;  // +0x8

	// sizeof = 16
};

// src/game/thirdparty/sdl/include/SDL_events.h:525
union SDL_Event {
	Uint32 type;  // +0x0
	SDL_CommonEvent common;  // +0x0
	SDL_WindowEvent window;  // +0x0
	SDL_KeyboardEvent key;  // +0x0
	SDL_TextEditingEvent edit;  // +0x0
	SDL_TextInputEvent text;  // +0x0
	SDL_MouseMotionEvent motion;  // +0x0
	SDL_MouseButtonEvent button;  // +0x0
	SDL_MouseWheelEvent wheel;  // +0x0
	SDL_JoyAxisEvent jaxis;  // +0x0
	SDL_JoyBallEvent jball;  // +0x0
	SDL_JoyHatEvent jhat;  // +0x0
	SDL_JoyButtonEvent jbutton;  // +0x0
	SDL_JoyDeviceEvent jdevice;  // +0x0
	SDL_ControllerAxisEvent caxis;  // +0x0
	SDL_ControllerButtonEvent cbutton;  // +0x0
	SDL_ControllerDeviceEvent cdevice;  // +0x0
	SDL_AudioDeviceEvent adevice;  // +0x0
	SDL_QuitEvent quit;  // +0x0
	SDL_UserEvent user;  // +0x0
	SDL_SysWMEvent syswm;  // +0x0
	SDL_TouchFingerEvent tfinger;  // +0x0
	SDL_MultiGestureEvent mgesture;  // +0x0
	SDL_DollarGestureEvent dgesture;  // +0x0
	SDL_DropEvent drop;  // +0x0
	unsigned char padding[56];  // +0x0
};
