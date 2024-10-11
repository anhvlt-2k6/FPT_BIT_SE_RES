
; Loop.asm  Loop 3 times, for each time: Accept 2 integers, 
; sum of them will be printed out

 include \masm32\include\masm32rt.inc 
 
; Prototype the sum function, 2 parameters
 sum PROTO :DWORD, :DWORD 

.code                       
start:                          
    call main                   
    exit
; ллллллллллллллллллллллллллллллллллллллллллллллллллллллллл

main proc
    LOCAL var1:DWORD      ; 2 DWORD integral variables
    LOCAL var2:DWORD      
    LOCAL result:DWORD    ; Result of operation 
    LOCAL COUNT: DWORD    ; count the loop

  ; initialize the loop
    mov COUNT, 3         
    print chr$("Program will comput sum of 2 integers ")
    print str$ (COUNT)
    print chr$(" times", 13,10)

  CONTD:                       ; Label for loop
    CMP COUNT, 0
    je STOP                    ; if COUNT =0, program terminates
    print chr$("Time ")        
    mov eax, 4                 ; 4-3 =1, 4-2=2, 4-1=3
    SUB eax, COUNT 
    print str$(eax)
    print chr$(":", 13, 10)
  ; Input 2 integers
    mov var1, sval(input("Enter number 1 : "))
    mov var2, sval(input("Enter number 2 : ")) 
  ; Invoke the procedure SUM to compute their sum
    invoke sum, var1 , var2
    mov result, eax  ; result = eax
  ; Print the result
    print chr$("Sum of them:")
    print str$(result)    
    print chr$(13,10)
    DEC COUNT         ; COUNT = COUNT -1
    JMP CONTD         ; repeat
  STOP:
    ret
main endp

; ллллллллллллллллллллллллллллллллллллллллллллллллллллллллллллл
sum proc v1: DWORD, v2:DWORD
   mov eax, v1 ; eax= v1
   add eax, v2 ; eax = eax + v2 -> Result in eax
   ret
sum endp

end start                       ; Tell MASM where the program ends
