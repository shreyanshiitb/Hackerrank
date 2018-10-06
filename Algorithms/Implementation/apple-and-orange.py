app = int(0)
ora = int(0)
home_start,home_end = map(int,(input().split()))
apple_tree,orange_tree = map(int,(input().split()))
apples,oranges = map(int,(input().split()))
apple_loc = list(map(int,input().split()))
orange_loc = list(map(int,input().split()))
for apple in apple_loc:
    if apple_tree+apple in range(home_start,home_end+1):
        app+=1
for orange in orange_loc:
    if orange_tree+orange in range(home_start,home_end+1):
        ora+=1
print(app)
print(ora)
    
