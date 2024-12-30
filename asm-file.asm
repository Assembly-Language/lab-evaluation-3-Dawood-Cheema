

INCLUDE Irvine32.inc
.data




.code
asmfunc PROC  a1:ptr dword,a2:ptr dword , a3:dword

mov esi,a1
mov ecx,a2
mov ebx,a3

mov eax ,0
mov edi,0
mov edx,10

positive:
mov eax ,dword ptr [esi]
test eax ,8000h
jnz skip


inc edi
skip:

add esi,4
dec edx
jnz positive

mov dword ptr [ebx] , edi
   
    ret
asmfunc ENDP
end