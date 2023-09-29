def split_balanced_string(S):
    result = []
    count = 0

    for char in S:
        if char == 'R':
            count += 1
        else:
            count -= 1

        if count == 0:
            result.append(S[:len(result) * 2 + 2])
            S = S[len(result) * 2 + 2:]

    return result

S =input().strip()
balanced_strings = split_balanced_string(S)
print(len(balanced_strings))
for balanced_str in balanced_strings:
    print(balanced_str)