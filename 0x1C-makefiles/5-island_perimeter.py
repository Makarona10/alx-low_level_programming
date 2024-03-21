#!/usr/bin/python3
""" Task NO.5 """


def island_perimeter(grid):
    """ Island Perimeter func """
    per = 0
    x = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            x.append(grid[i][j])
    for i in range(len(x)):
        if i < len(x) - 1 and i > 0:
            if x[i] == 0 and x[i + 1] == 1 or x[i] == 0 and x[i - 1] == 1:
                per += 1
    if per % 2 == 0:
        per *= 2
    else:
        per = (per * 2) - 1
    return per
