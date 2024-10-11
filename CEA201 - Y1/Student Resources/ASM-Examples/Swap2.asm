
; Swap2.asm   Accept 2 integers, swap them, print results
include \masm32\include\masm32rt.inc 

swap2 PROTO : PTR DWORD, : PTR DWORD ;  parameters are addresses

.code                       
start:                          
    call main                   
    exit
; лллллллллллллллллллл
main proc
    LOCAL var1:DWORD  ; integral variable
    LOCAL pVar1: DWORD   ; address of var1
    LOCAL var2:DWORD  ; integral variable
    LOCAL pVar2: DWORD  ; address of var2

  ; Input 2 integers
    mov var1, sval(input("Enter number 1 : "))
    mov var2, sval(input("Enter number 2 : "))   

  ; Get addresses of var1, var2 to pVar1, pVar2
    lea eax, var1  ; var1, var2 are local --> use LEA
    mov pVar1, eax
    lea eax, var2
    mov pVar2, eax
    
  ; Output information of var1, var2
    print chr$("var1, address:")
    print str$(pVar1)
    print chr$(", value:")
    print str$(var1)
    print chr$(13,10)
    print chr$("var2, address:")
    print str$(pVar2)
    print chr$(", value:")
    print str$(var2)
    print chr$(13,10)
    
  ; Invoke the procedure SWAP1 to swap 2 values inputted
    push eax         ; store EAX to STACK
    push ebx         ; store EBX to STACK
    invoke swap2, pVar1 , pVar2
    pop ebx          ; restore EBX, EAX from STACK
    pop eax   
           
  ; Print the result
    print chr$("After swapping:")
    print str$(var1)
    print chr$(", ")
    print str$(var2)

    ret
main endp
; лллллллллллллллллллллллллллллллллллл
swap2 proc add1: PTR DWORD, add2: PTR DWORD
  ; Print out information of arguments
    print chr$("Argument 1, address:") 
    lea eax, add1    
    print str$(eax)
    print chr$(", value:")
    print str$(add1)
    print chr$(13,10)
    print chr$("Argument 2, address:")
    lea eax, add2
    print str$(eax)
    print chr$(", value:")
    print str$(add2)
    print chr$(13,10)
  ; swap values
    mov edx, add1  ; You must access value at address using a register 
    mov eax, [edx] ; eax= value at add1
    mov edx, add2
    mov ebx, [edx] ; ebx= value at add2
    mov edx, add1
    mov [edx], ebx  ; value at add1= ebx
    mov edx, add2
    mov [edx], eax  ; value at add2= eax
    ret
swap2 endp

end start                       

