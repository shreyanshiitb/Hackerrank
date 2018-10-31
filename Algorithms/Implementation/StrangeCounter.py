time = input()
t = 1
value = 3
delta = 3
while (t + delta <= time):
    t += delta
    delta *= 2
    value *= 2
print value - time + t
