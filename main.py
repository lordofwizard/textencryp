msg = input("Message:\t")               #input
counter = 0                             #just for for loop
msg = list(msg)                         #needs to be converted into an array first -_-

for lascii in msg:
    lascii = ord(lascii)                #convert into ascii
    if lascii > 64 and lascii < 78:
        lascii = lascii + 13
    elif lascii > 78 and lascii < 90:
        lascii = lascii - 13
    elif lascii > 96 and lascii < 110:
        lascii = lascii + 13
    elif lascii > 109 and lascii < 123:
        lascii = lascii - 13
    msg[counter] = chr(lascii)          #reconvert into string
    counter = counter + 1               #array thingy

msg = ''.join(msg)                      #conversion into str again
print("\nEncrypted:\t",msg)
#code can be even more elegant and simpler but I am in hell so don't have power to learn anything >_<
