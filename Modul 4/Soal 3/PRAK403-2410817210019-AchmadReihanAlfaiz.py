start, end = map(int, input().split())

start_static = start
end_static = end
range_val = abs(start - end)

for i in range(range_val + 1):
    if start_static > end_static:
        print(f"{start} {end}", end=(" - " if i != range_val else " "))
        start -= 1
        end += 1
    elif start_static < end_static:
        print(f"{start} {end}", end=(" - " if i != range_val else " "))
        start += 1
        end -= 1
