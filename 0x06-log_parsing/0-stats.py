#!/usr/bin/python3
"""
interview task
"""

import shlex
import sys

status_list = ["200", "301", "400", "401", "403", "404", "405", "500"]
value_list = [0, 0, 0, 0, 0, 0, 0, 0]
total_size = 0
counter = 0
try:
    for line in sys.stdin:
        if counter < 10:
            line_parts = shlex.split(line)
            status = line_parts[5]
            size = line_parts[6]

            total_size += int(size)
            for i in range(len(status_list)):
                if status_list[i] == status:
                    value_list[i] += 1
            counter += 1
        else:
            print("File size: {}".format(total_size))
            for i in range(len(status_list)):
                if value_list[i] > 0:
                    print("{}: {}".format(status_list[i], value_list[i]))
            counter = 0

except:
    pass

finally:
    print("File size: {}".format(total_size))
    for i in range(len(status_list)):
        if value_list[i] > 0:
            print("{}: {}".format(status_list[i], value_list[i]))
    counter = 0
