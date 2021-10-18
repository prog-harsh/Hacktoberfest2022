def mergeSort(values):
    if len(values) > 1:
        mid = len(values) // 2
        left = values[:mid]
        right = values[mid:]
        mergeSort(left)
        mergeSort(right)
        i = 0
        j = 0
        k = 0
        
        while i < len(left) and j < len(right):
            if left[i] <= right[j]:
              values[k] = left[i]
              i += 1
            else:
                values[k] = right[j]
                j += 1
            k += 1
        while i < len(left):
            values[k] = left[i]
            i += 1
            k += 1

        while j < len(right):
            values[k]=right[j]
            j += 1
            k += 1

values = []
values = [int(item) for item in input("Enter the values : ").split()]
mergeSort(values)
print(values)



