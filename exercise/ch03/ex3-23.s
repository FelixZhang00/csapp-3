#long dw_loop(long x)
#x initially in %rdi
dw_loop:
 movq %rdi,%rax	  #%rax = x
 movq %rdi,%rcx
 imulq %rdi,%rcx  #%rcx=y=x*x
 leaq (%rdi,%rdi),%rdx	#%rdx=n=2*x
.L2:	#loop:
  leaq 1(%rcx,%rax),%rax  #compute x+=y+1
  subq $1,%rdx	#n--
  testq %rdx %rdx #Test n
  jg .L2  #if >0,goto loop
  rep;ret #return
