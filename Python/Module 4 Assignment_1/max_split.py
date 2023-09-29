s = input()
count_l = s.count("L")
count_r = s.count("R")
curr_str = ""
balanced_str = []
for c in s:
    curr_str += c

    if c == "L":
        cnt_l -= 1
    else:
        cnt_r -= 1

    if cnt_l == cnt_r:
        balanced_str.append(curr_str)
        curr_str = ""
        cnt_l = 0
        cnt_r = 0

print(len(balanced_str))

for ch in balanced_str:
    print(ch)