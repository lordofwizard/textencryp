ascChar = input("Mesasge :  ")
finalChar = list(ascChar)
for i in range(0,len(ascChar)):
    x = ord(finalChar[i])
    if x > 64 and x < 78:
        x+=13
    elif x > 78 and x < 90:
        x-=13
    elif x > 96 and x < 110:
        x+=13
    elif x > 109 and x < 123:
        x-=13
        finalChar[i] = chr(x)

for j in range(0,len(ascChar)):
    mainresult = ''.join(finalChar[j])
print(mainresult)
#you are very dumb if you need explaination of this stuff
