def solve():
    n = input()
    data = []
    for i in range(0, n):
        in_var = raw_input()
        data.append(map(eval, in_var.split(" ")))

    data.sort()
    min_result = -1
    max_result = 0
    for i in range(0, len(data)):
        for j in range(i + 1, len(data)):
            if data[i][0]!=data[j][0]:
                break
            size = abs(data[i][1] - data[j][1])
            if ([data[i][0]+size, data[i][1]] in data and [data[j][0]+size, data[j][1]] in data):
                max_result = max(max_result, size)
                min_result = min_flag(min_result, size)

            if ([data[i][0]-size, data[i][1]] in data and [data[j][0]-size, data[j][1]] in data):
                max_result = max(max_result, size)
                min_result = min_flag(min_result, size)
        
    print str(min_result) + " " + str(max_result)

def min_flag(x, y):
    if x==-1:
        return y
    else:
        return min(x,y)

               




num_case = input()

for c in range(0, num_case):
    solve()

