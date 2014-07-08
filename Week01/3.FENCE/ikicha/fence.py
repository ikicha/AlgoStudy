def solve():
    n = input()
    data = map(int, raw_input().split())
    max = 0
    for i in range(n):
        for j in range(i,n):
            size = (j-i+1)*reduce(lambda x, y: min(x,y), data[i:j+1])
            if max < size:
                max = size
    print max

def min(lhs, rhs):
    if lhs > rhs:
        return rhs
    else:
        return lhs






num_case = input()

for i in range(num_case):
    solve()
