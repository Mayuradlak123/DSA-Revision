def panagram(str):
    k="abcdefghijklmnopqrstuvwxyz"
    # if len(str)<26:
    #     return False
    str=str.lower()
    for i in k:
        if i not in str:
            return False;
    return True

# str=input("Enter an String ")
if(panagram("The quick brown fox jumps over the lazy dog")):
    print("Given String is Panagram ")
else:
    print("Not Panagram ")