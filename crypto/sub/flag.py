enc = [140, 145, 154, 140, 192, 117, 179, 120, 164, 185, 102, 178, 120, 164, 122, 186, 167, 124, 183, 121, 166, 168, 124, 102, 117, 179, 194]

pref = "GLUG"

# for i, c in enumerate(pref):
#   print(ord(c)-enc[i])

flag = ''.join([ chr(a-69) for a in enc])
print(flag)
# GLUG{0n3_t!m3_5ub7r4ac7!0n}
