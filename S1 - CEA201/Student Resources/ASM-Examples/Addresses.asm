
; Addresses.asm
; Draw memory of a program

include \masm32\include\masm32rt.inc 
  
.data          ; initialized data 
  anInt DD 123
  txt1 db "I love you", 0
  
.data?          ; Un-initialized data 
  aReal DD ?
  txt2  db 128 dup (?)
  
.code                       
start:                          ; The CODE entry point to the program
    call main                   ; branch to the "main" procedure
    exit
; лллл

main proc
    LOCAL var1: DWORD           
    
 ; Access address and value of anInt
    print chr$("Address of anInt:")
    mov eax, OFFSET anInt ; Operator OFFSET will get address of a global var
    print str$(eax)    
    print chr$(", value:")
    print str$(anInt)
    print chr$(13,10)
 ; Access address and value of txt1
    print chr$("Address of txt1:")
    mov eax, OFFSET txt1 
    print str$(eax)    
    print chr$(", value:")
    print OFFSET txt1
    print chr$(13,10)
 ; Access address and value of aReal
    print chr$("Address of aReal:")
    mov eax, OFFSET aReal
    print str$(eax)    
    print chr$(", value:")
    mov aReal, 5809
    print str$(aReal)
    print chr$(13,10)
  ; Access address and value of txt2
    print chr$("Address of txt2:")
    mov eax, OFFSET txt2 
    print str$(eax)    
    print chr$(", value:")
    print OFFSET txt2
    print chr$(13,10)
  ; Access address and value of local variable var1
    mov var1, 1000
    print chr$("Address of var1:")
    lea eax, var1      ; LEA get local variable address
    print str$(eax)    
    print chr$(", value:")
    print str$(var1)
    print chr$(13,10)        

    ret
main endp
; лллллллллллллллллл
end start                      
