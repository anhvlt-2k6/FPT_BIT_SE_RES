
; EX06_Sum.asm   Accept 2 integers, swap them, print results

include \masm32\include\masm32rt.inc 
swap1 PROTO :DWORD, :DWORD       ;  prototype the procedure 2 parameters for swapping

.code                       
start:                          ; The CODE entry point to the program
    call main                   ; branch to the "main" procedure
    exit
; ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл
main proc
    LOCAL var1:DWORD            ; 2 DWORD integral variables
    LOCAL var2:DWORD            ; 

  ; Input 2 integers
    mov var1, sval(input("Enter number 1 : "))
    mov var2, sval(input("Enter number 2 : "))   

  ; Invoke the procedure SWAP1 to swap 2 values inputted
    push eax         ; store EAX to STACK
    push ebx         ; store EBX to STACK

    invoke swap1, var1 , var2
    pop ebx
    pop eax          ; restore EAX from STACK
    
  ; Print the result
    print chr$("After swapping:")
    print str$(var1)
    print chr$(", ")
    print str$(var2)

    ret
main endp
; лллллллллллллллллллллллллллллллллллллллллллллл
swap1 proc v1: DWORD, v2:DWORD
   mov eax, v1 ; eax= v1
   mov ebx, v2 ; eax= v1
   mov v1, ebx
   mov v2, eax
   ret
swap1 endp

end start                       
