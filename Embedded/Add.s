	AREA RESET, DATA, READONLY
	EXPORT __Vectors
__Vectors
	DCD	0x10001000
	DCD	Reset_Handler
	
	AREA mycode, CODE, READONLY
	ENTRY
	EXPORT	Reset_Handler
Reset_Handler
	MOV	R1,#1
	MOV R2,#2
	ADD	R3,R2,R1
	END