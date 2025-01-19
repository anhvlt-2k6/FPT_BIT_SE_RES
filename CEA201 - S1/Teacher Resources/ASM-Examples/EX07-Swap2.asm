
; EX06_Sum.asm   Accept 2 integers, swap them, print results

include \masm32\include\masm32rt.inc 
swap2 PROTO :DWORD, :DWORD ;  prototype the procedure 2 parameters for swapping

.code                       
start:                          ; The CODE entry point to the program
    call main                   ; branch to the "main" procedure
    exit
; лллллллллллллллллллллллллллллллллллллллллл
main proc
    LOCAL var1:DWORD    ; 2 DWORD integral variables
    LOCAL var2:DWORD    
    LOCAL add1:DWORD    ; 2 addreses of 2 variable
    LOCAL add2:DWORD    

  ; Input 2 integers
    mov var1, sval(input("Enter number 1 : "))
    mov var2, sval(input("Enter number 2 : "))   
  ; Get variable addresses to registers
    lea ebx, var1
    mov add1, ebx
    lea edx, var2
    mov add2, edx

   ; Invoke the procedure SWAP1 to swap 2 values inputted
    invoke swap2, ebx, edx

  ; Print the result
    print chr$(13,10,"After swapping:")
    print str$(var1)
    print chr$(", ")
    print str$(var2)

    ret
main endp
; ллллллллллллллллллллллллллллллллллллллллллл
swap2 proc addr1: DWORD, addr2:DWORD
   mov ebx, addr1
   mov edx, addr2
   mov addr1, edx  ; ebx= value at addr2
   mov addr2, ebx  ; value at add2 = value in eax
   
   ret
   
swap2 endp

end start                       
