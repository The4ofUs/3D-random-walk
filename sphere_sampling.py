import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import csv

data = csv.reader(open('output.csv', 'r'), delimiter=",", quotechar='|')
column1, column2,column3 = [], [],[]
for row in data:
    column1.append(float(row[2]))
    column2.append(float(row[3]))
    column3.append(float(row[4]))


fig = plt.figure()
ax = plt.axes(projection='3d')
ax = fig.add_subplot(111, projection='3d')
ax.scatter(column1,column2,column3)

plt.show()
