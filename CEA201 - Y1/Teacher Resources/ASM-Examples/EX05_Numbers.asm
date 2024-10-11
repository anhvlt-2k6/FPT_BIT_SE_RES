
; EX05_Numbers.asm

; Declare program model and all libraries using only one file

  include \masm32\include\masm32rt.inc 
    
.code                       
start:                          ; The CODE entry point to the program
    call main                   ; branch to the "main" procedure
    exit
; ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл

main proc
    LOCAL var1:DWORD            ; 2 DWORD integral variables
    LOCAL var2:DWORD            ; 
    LOCAL str1:DWORD            ; a string handle for the input data

  ; test the MOV and ADD instructions
    print chr$("Add 2 registers: 100 + 250= ") 
    mov eax, 100                ; copy the IMMEDIATE number 100 into the EAX register
    mov ecx, 250                ; copy the IMMEDIATE number 250 into the ECX register
    add ecx, eax                ; ADD EAX to ECX
    print str$(ecx)             ; show the result at the console
    print chr$(13,10,13,10)     ; 2 empty lines

  ; Input 2 integers
    mov var1, sval(input("Enter number 1 : "))
    mov var2, sval(input("Enter number 2 : "))

  ; compare 2 variables and process the result
    mov eax, var1               ; copy var1 to eax
    cmp eax, var2               ; CMP REG, VAR
    je equal                    ; jump if var1 is equal to 100 to "equal"
    jg bigger                   ; jump if var1 is greater than 100 to "bigger"
    jl smaller                  ; jump if var1 is less than 100 to "smaller"

  equal:
    print chr$("2 numbers you entered are equal.",13,10)
    jmp over

  bigger:
    print chr$("The number 1 you entered is greater than number 2",13,10)
    jmp over

  smaller:
    print chr$("The number 1 you entered is smaller than number 2",13,10)

  over:
    ret
main endp
; ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл

end start                       ; Tell MASM where the program ends
