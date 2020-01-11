	AREA RESET, DATA, READONLY
	EXPORT __Vectors
__Vectors
	DCD 0x00010001
	DCD Reset_Handler
	
	AREA mycode, CODE, READONLY
	ENTRY
	EXPORT Reset_Handler
start	dcd	1,2,3,4,5,6,7,8,9,10
Reset_Handler
	mov	R10, #10
	ldr	R0, =start
	ldr	r5,=result
loop
	ldr	R1,[R0]
	add	r2,r2,r1
	add	R0,#4
	subs R10,#1
	bne loop
	str	r2, [r5]
stop
	b stop

	AREA mydata, DATA, READWRITE
result	DCD	0
	
	end
	