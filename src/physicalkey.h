#pragma once

// Physical positions of the printable keys on a standard ANSI keyboard.
// The legacy names are used by clients that already encode these positions.
#if defined(IS_WINDOWS)
#define PHYSICAL_CODE(scan, mac, xkb) scan
using PhysicalKeyCode = int;
#elif defined(IS_MACOSX)
#define PHYSICAL_CODE(scan, mac, xkb) mac
using PhysicalKeyCode = MMKeyCode;
#elif defined(USE_X11)
#define PHYSICAL_CODE(scan, mac, xkb) xkb
using PhysicalKeyCode = const char*;
#endif

static const struct {
	const char* code;
	char legacy;
	PhysicalKeyCode native;
} physicalPrintableKeys[] = {
	{ "Digit1", '1', PHYSICAL_CODE(0x02, kVK_ANSI_1, "AE01") },
	{ "Digit2", '2', PHYSICAL_CODE(0x03, kVK_ANSI_2, "AE02") },
	{ "Digit3", '3', PHYSICAL_CODE(0x04, kVK_ANSI_3, "AE03") },
	{ "Digit4", '4', PHYSICAL_CODE(0x05, kVK_ANSI_4, "AE04") },
	{ "Digit5", '5', PHYSICAL_CODE(0x06, kVK_ANSI_5, "AE05") },
	{ "Digit6", '6', PHYSICAL_CODE(0x07, kVK_ANSI_6, "AE06") },
	{ "Digit7", '7', PHYSICAL_CODE(0x08, kVK_ANSI_7, "AE07") },
	{ "Digit8", '8', PHYSICAL_CODE(0x09, kVK_ANSI_8, "AE08") },
	{ "Digit9", '9', PHYSICAL_CODE(0x0a, kVK_ANSI_9, "AE09") },
	{ "Digit0", '0', PHYSICAL_CODE(0x0b, kVK_ANSI_0, "AE10") },
	{ "Minus", '-', PHYSICAL_CODE(0x0c, kVK_ANSI_Minus, "AE11") },
	{ "Equal", '=', PHYSICAL_CODE(0x0d, kVK_ANSI_Equal, "AE12") },
	{ "KeyQ", 'q', PHYSICAL_CODE(0x10, kVK_ANSI_Q, "AD01") },
	{ "KeyW", 'w', PHYSICAL_CODE(0x11, kVK_ANSI_W, "AD02") },
	{ "KeyE", 'e', PHYSICAL_CODE(0x12, kVK_ANSI_E, "AD03") },
	{ "KeyR", 'r', PHYSICAL_CODE(0x13, kVK_ANSI_R, "AD04") },
	{ "KeyT", 't', PHYSICAL_CODE(0x14, kVK_ANSI_T, "AD05") },
	{ "KeyY", 'y', PHYSICAL_CODE(0x15, kVK_ANSI_Y, "AD06") },
	{ "KeyU", 'u', PHYSICAL_CODE(0x16, kVK_ANSI_U, "AD07") },
	{ "KeyI", 'i', PHYSICAL_CODE(0x17, kVK_ANSI_I, "AD08") },
	{ "KeyO", 'o', PHYSICAL_CODE(0x18, kVK_ANSI_O, "AD09") },
	{ "KeyP", 'p', PHYSICAL_CODE(0x19, kVK_ANSI_P, "AD10") },
	{ "BracketLeft", '[', PHYSICAL_CODE(0x1a, kVK_ANSI_LeftBracket, "AD11") },
	{ "BracketRight", ']', PHYSICAL_CODE(0x1b, kVK_ANSI_RightBracket, "AD12") },
	{ "KeyA", 'a', PHYSICAL_CODE(0x1e, kVK_ANSI_A, "AC01") },
	{ "KeyS", 's', PHYSICAL_CODE(0x1f, kVK_ANSI_S, "AC02") },
	{ "KeyD", 'd', PHYSICAL_CODE(0x20, kVK_ANSI_D, "AC03") },
	{ "KeyF", 'f', PHYSICAL_CODE(0x21, kVK_ANSI_F, "AC04") },
	{ "KeyG", 'g', PHYSICAL_CODE(0x22, kVK_ANSI_G, "AC05") },
	{ "KeyH", 'h', PHYSICAL_CODE(0x23, kVK_ANSI_H, "AC06") },
	{ "KeyJ", 'j', PHYSICAL_CODE(0x24, kVK_ANSI_J, "AC07") },
	{ "KeyK", 'k', PHYSICAL_CODE(0x25, kVK_ANSI_K, "AC08") },
	{ "KeyL", 'l', PHYSICAL_CODE(0x26, kVK_ANSI_L, "AC09") },
	{ "Semicolon", ';', PHYSICAL_CODE(0x27, kVK_ANSI_Semicolon, "AC10") },
	{ "Quote", '\'', PHYSICAL_CODE(0x28, kVK_ANSI_Quote, "AC11") },
	{ "KeyZ", 'z', PHYSICAL_CODE(0x2c, kVK_ANSI_Z, "AB01") },
	{ "KeyX", 'x', PHYSICAL_CODE(0x2d, kVK_ANSI_X, "AB02") },
	{ "KeyC", 'c', PHYSICAL_CODE(0x2e, kVK_ANSI_C, "AB03") },
	{ "KeyV", 'v', PHYSICAL_CODE(0x2f, kVK_ANSI_V, "AB04") },
	{ "KeyB", 'b', PHYSICAL_CODE(0x30, kVK_ANSI_B, "AB05") },
	{ "KeyN", 'n', PHYSICAL_CODE(0x31, kVK_ANSI_N, "AB06") },
	{ "KeyM", 'm', PHYSICAL_CODE(0x32, kVK_ANSI_M, "AB07") },
	{ "Comma", ',', PHYSICAL_CODE(0x33, kVK_ANSI_Comma, "AB08") },
	{ "Period", '.', PHYSICAL_CODE(0x34, kVK_ANSI_Period, "AB09") },
	{ "Slash", '/', PHYSICAL_CODE(0x35, kVK_ANSI_Slash, "AB10") },
	{ "Backquote", '`', PHYSICAL_CODE(0x29, kVK_ANSI_Grave, "TLDE") },
	{ "Backslash", '\\', PHYSICAL_CODE(0x2b, kVK_ANSI_Backslash, "BKSL") },
};

#undef PHYSICAL_CODE
