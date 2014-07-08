def solve():
    n = input()
    data = map(int, raw_input().split())
    max_height = max(data)
    min_height = min(data)
    result = 0
    flag = [0] * max_height
    result = 0
    for height in data:
        for i in range(min_height,max_height):
            if i < height:
                flag[i] = flag[i] + 1
            else:
                result = max(flag[i] * (i + 1), result)
                flag[i] = 0
    result = max(flag[max_height-1] * max_height, result)
    print result

        
num_case = input()

for i in range(num_case):
    solve()
