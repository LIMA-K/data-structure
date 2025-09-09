f = open("f1.txt", "r")
w = f.readline()
li = []

# Split the line into words
j = w.strip().split()

# Capitalize each word
s = ''
for n in range(len(j)):
    j[n] = j[n][0].upper() + j[n][1:]

# Concatenate the words into a single string
for l in j:
    s = s + l + ' '
s = s.strip() + '\n'  # remove trailing space, add newline
li.append(s)

f.close()

# Write the modified line back to the file
f1 = open("f1.txt", "w")
for i in li:
    f1.writelines(i)
f1.close()

# Read and print the updated file content
f2 = open("f1.txt", "r")
print("After capitalise each word :\n\n", f2.read())
f2.close()
