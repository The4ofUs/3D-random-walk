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


fig = plt.figure(1)
ax = plt.axes(projection='3d')
ax = fig.add_subplot(111, projection='3d')
ax.scatter(column1,column2,column3)




def update_line(num):
    global w,p,d
    xdata, ydata, zdata = hl._verts3d
    hl.set_xdata(list(np.append(xdata, X_coor[w])))
    hl.set_ydata(list(np.append(ydata, Y_coor[p])))
    hl.set_3d_properties(list(np.append(zdata, Z_coor[d])))
    plt.draw()
    #print(new_data[d][2])
    #plt.show(block=True)
    w=w+1
    p=p+1
    d=d+1

map = plt.figure(2)
map_ax = Axes3D(map)
map_ax.autoscale(enable=True, axis='both', tight=True)

# # # Setting the axes properties
map_ax.set_xlim3d([-5.0, 5.0])
map_ax.set_ylim3d([-5.0, 5.0])
map_ax.set_zlim3d([-5.0, 5.0])
map_ax.set_xlabel('X')
map_ax.set_ylabel('Y')
map_ax.set_zlabel('Z')
hl, = map_ax.plot3D([0], [0], [0])
#i=0
for i in range(step_n):
    update_line(hl)
    plt.show(block=False)
    plt.pause(0.5)


plt.show()
