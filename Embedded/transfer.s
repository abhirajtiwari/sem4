	AREA RESET, DATA, READONLY
	EXPORT __Vectors2
__Vectors2
	DCD 0x10001000
	DCD	Reset_Handler2

	AREA transfers, CODE, READONLY
	ENTRY
	EXPORT Reset_Handler2
Reset_Handler2
	MOV R3,R1
	MOV R1,R2
	MOV R2,R3
	;MOV	R1,R1 ;jabardasti
	END