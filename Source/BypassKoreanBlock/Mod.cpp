// v1.0.0: 0x1405E07F4
SIG_SCAN
(
	sigSaturationBlock,
	"\x88\x05\x00\x00\x00\x00\x49\x83\xff",
	"xx????xxx"
);


//DivaMegaMix.exe+5E07F4 - 88 05 50F9B600        - mov [DivaMegaMix.exe+115014A],al

/*
DivaMegaMix.exe+5E07F4 - 90                    - nop
DivaMegaMix.exe+5E07F5 - 90                    - nop
DivaMegaMix.exe+5E07F6 - 90                    - nop
DivaMegaMix.exe+5E07F7 - 90                    - nop
DivaMegaMix.exe+5E07F8 - 90                    - nop
DivaMegaMix.exe+5E07F9 - 90                    - nop
*/

extern "C" __declspec(dllexport) void Init()
{
	WRITE_MEMORY(sigSaturationBlock(), uint8_t, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90);
}
