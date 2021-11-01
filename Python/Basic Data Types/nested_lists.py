if __name__ == '__main__':
    l = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        l.append([name, score])
    
    s = []
    for i in l:
        s.append(i[1])
        
    z = min(s)
    while min(s) == z:
        s.remove(min(s))
        
    z = min(s)
    f = []
    for i in l:
        if i[1] == z:
            f.append(i[0])
            
    f.sort()
    for i in f:
        print(i)
