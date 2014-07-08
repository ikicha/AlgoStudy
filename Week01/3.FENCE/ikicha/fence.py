def solve():
    n = input()
    data = map(int, raw_input().split())
    max_height = max(data)
    min_height = min(data)
    result = 0
    flag = [0] * max_height
    result = [0] * max_height
    for height in data:
        for i in range(0,max_height):
            if i < height:
                flag[i] = flag[i] + 1
            else:
                result[i] = max(flag[i], result[i])
                flag[i] = 0
    result[max_height-1] = max(flag[max_height-1], result[max_height-1]);
    max_size = 0
    for i in range(min_height, max_height):
        max_size = max(result[i] * (i + 1), max_size)
    print max_size

        
num_case = input()

for i in range(num_case):
    solve()
