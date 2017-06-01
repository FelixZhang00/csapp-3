
# 清零%rdx 寄存器
simple1:
  xorq %rdx,%rdx #48 31 d2

# 算术右移同样可以清零寄存器
simple2:
  sarq $64,%rdx #48 c1 fa 40

# 直接mov竟然需要7个字节！
sample3:
  movq $0,%rdx
