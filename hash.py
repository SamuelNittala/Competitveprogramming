def range(array):
    bestrange = []
    longestrange = 0
    nums = {}
    for num in array:
        nums[num] = True
    for num in array:
        if not nums[num]:
            continue
        nums[num] = False
        currentLength = 1
        left = num -1
        right = num + 1
        while left in nums:
            currentLength += 1
            left -= 1
        while right in nums:
            currentLength += 1
            right += 1
        if currentLength > longestrange:
            longestrange = currentLength
            bestrange = [left+1 , right-1]
    
    return bestrange


array = list(map(int,input().split()))

print(range(array))