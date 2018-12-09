BOOTMAGIC_ENABLE  = no      # Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE   = no      # Mouse keys(+4700)
EXTRAKEY_ENABLE   = yes     # Audio control and System control(+450)
CONSOLE_ENABLE    = no      # Console for debug(+400)
COMMAND_ENABLE    = no      # Commands for debug and configuration
AUDIO_ENABLE      = no
NKRO_ENABLE	      = yes
RGBLIGHT_ENABLE   = yes
BACKLIGHT_ENABLE  = yes
BOOTLOADER 	      = qmk-dfu
EXTRAFLAGS        += -flto

ifndef QUANTUM_DIR
	include ../../../../Makefile
endif
