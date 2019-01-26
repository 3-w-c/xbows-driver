#include "keymap.hh"

// Map from keycode to key id.  This is used to build driver keymap and custom
// keymap.
uint16_t keyid[MAX_KEYCODE] = {
  0xffff,					  // None
  4, 5, 6, 7, 8, 9, 0xa, 0xb,			  // A B C D E F G H
  0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13,	  // I J K L M N O P
  0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, // Q R S T U V W X
  0x1c, 0x1d,					  // Y Z
  0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, // 1 2 3 4 5 6 7 8
  0x26, 0x27,					  // 9 0
  0x2d, 0x2e, 0x2f, 0x30,			  // -_ =+ [{ ]}
  0x31, 0x33, 0x34, 0x36, 0x37, 0x38,		  // \| ;: '" ,< .> /?
  0x35,						  // `~
  0x29, 0x2b, 0x39,				  // Esc Tab Capslock
  0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f,		  // F1 F2 F3 F4 F5 F6
  0x40, 0x41, 0x42, 0x43, 0x44, 0x45,		  // F7 F8 F9 F10 F11 F12
  0x28, 0x28,					  // REnter MEnter (same)
  0x0200, 0x2000, 0x2000,			  // LShft MShft RShft (same)
  0x0100, 0x0100, 0x1000,			  // Lctrl Mctrl (same) Rctrl
  0x0400, 0x4000,				  // Lalt Ralt
  0x2a, 0x2a,					  // Mbksp Rbksp (same)
  0x2c, 0x2c,					  // LSpc RSpc (same)
  0x0800,					  // Windows
  0x4b, 0x4e,					  // PageUp PageDn
  0x50, 0x4f, 0x52, 0x51,			  // Left Rt Up Down
  0x46, 0x4c,					  // Prtsc Del
  0xffff,					  // None (xbows)
  0x53, 0x54, 0x55, 0x58,			  // Numlock N/ N* Nenter
  0x59, 0x5a, 0x5b, 0x5c, 0x5d,			  // N1 N2 N3 N4 N5
  0x5e, 0x5f, 0x60, 0x61, 0x62,			  // N6 N7 N8 N9 N0 N.
  0x63, 0x56, 0x57,				  // N. N- N+
  // Media (03 suffix for custom)
  0x8301, 0xcd00, 0xb700, 0xb600, 0xb500,	  // play pause stop last next
  0xea00, 0xe900, 0xe200,			  // volup voldown mute
  // Mouse (0101 suffix for custom)
  0x0100, 0x0400, 0x0200, 0x0800, 0x1000, // lclk mclk rclk bkclk fwclk
  // Sys/Net (03 suffix for custom
  0x2402, 0x2502, 0x2702, 0x2a02, 0x2302, // back, fwd, refrsh, collect, home,
  0x8a01, 0x9401, 0x9201, 0x0106, 0x0119, 0x46, // email mycomp calc copy paste prtsc

  0xffff, 0xffff, 0xffff,	// Home, End, Insert
  0xffff			// Fn
};
