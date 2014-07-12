def solve():#f):
    n = input()
#    n = eval(f.readline())
    data = {}
    for i in range(0, n):
        temp = map(eval, raw_input().split(" "))
#        temp = map(eval, f.readline().split())
        if not temp[0] in data.keys():
            data[temp[0]] = []

        data[temp[0]].append(temp[1])

    min_result = -1
    max_result = 0
    for points in data.keys():
        data_point = data[points]
        for left in range(0, len(data_point)):
            for right in range(left + 1, len(data_point)):
                size = abs(data_point[left] - data_point[right])
                if points + size in data:
                    if data_point[left] in data[points + size] and data_point[right] in data[points + size]:
                        max_result = max(max_result, size)
                        min_result = min_flag(min_result, size)

                if points - size in data:
                    if data_point[left] in data[points - size] and data_point[right] in data[points - size]:
                        max_result = max(max_result, size)
                        min_result = min_flag(min_result, size)
        
    print str(min_result) + " " + str(max_result)

def min_flag(x, y):
    if x==-1:
        return y
    else:
        return min(x,y)
               



#f = open("input.txt")
num_case = input()
#num_case = eval(f.readline())

for c in range(0, num_case):
    #solve(f)
    solve()
#f.close()
