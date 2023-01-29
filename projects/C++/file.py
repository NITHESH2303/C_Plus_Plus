import os
 
# Function to rename multiple files
def main():
   
    folder = "C:\\Users\\itops\\Desktop\\copy"
    for count, filename in enumerate(os.listdir(folder)):
        dst = f"bus {str(count+226)}.txt"
        src =f"{folder}/{filename}"  # foldername/filename, if .py file is outside folder
        dst =f"{folder}/{dst}"
         
        # rename() function will
        # rename all the files
        os.rename(src, dst)
 
# Driver Code
if __name__ == '__main__':
     
    # Calling main() function
    main()

# with open("C:\\Users\\itops\\Desktop\\bus 118.txt") as f:
#     lines = f.readlines()

# lines # ['This is the first line.\n', 'This is the second line.\n']
# str1 = lines[0][0]
# str2 = lines[0][1]

# list1 = list(str1)
# list2 = list(str2)
# print(list1)
# list1= "1"
# list2 = "2"


# lines # ["This is the line that's replaced.\n", 'This is the second line.\n']

# new_str1 = ''.join(list1)
# new_str2 = ''.join(list2)

# with open("test.txt", "w") as f:
#     f.writelines(lines)