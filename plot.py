from mpl_toolkits.mplot3d import Axes3D
import numpy as np
import matplotlib.pyplot as plt
import mpl_toolkits.mplot3d.axes3d as p3
import matplotlib.animation as animation
w=0
p=0
d=0
step_n = 30
X = [0 for x in range(1)]
X_coor=[0 for x in range(step_n)]
Y= [0 for x in range(1)]
Y_coor=[0 for x in range(step_n)]
Z = [0 for x in range(1)]
Z_coor=[0 for x in range(step_n)]
def randomize():
    dims = 3
    global X_coor
    global Y_coor
    global Z_coor

    #X=np.zeros((step_n,1))
    print("x is")
    print(X)
    step_set = [-1, 0, 1]
    origin = np.zeros((1, dims))
    # Simulate steps in 3D
    step_shape = (step_n, dims)
    steps_direction = np.random.choice(a=step_set, size=step_shape)
    new_data_o = np.random.rand(step_n)
    new_data = np.array([new_data_o]).T
    print(new_data)
    print(steps_direction)
    for i in range(step_n):
        if steps_direction[i][0]==0:
            print('stay')
            print(i)
            x=X.pop()
            X.append(0)
            X[0]=x
            X_coor[i]=X[0]
            print(X)
        elif steps_direction[i][0]==1:
            print(i)
            x=X.pop()
            X.append(0)
            X[0]=x+new_data[i]
            print(X)
            X_coor[i]=X[0]
        elif steps_direction[i][0]== -1:
            print(i)
            x=X.pop()
            X.append(0)
            X[0]=x-new_data[i]
            X_coor[i]=X[0]
    print('x isnew')
    print(X_coor[0])

    for i in range(step_n):
        if steps_direction[i][1]==0:
            print('stay')
            print(i)
            y=Y.pop()
            Y.append(0)
            Y[0]=y
            Y_coor[i]=Y[0]
        elif steps_direction[i][1]==1:
            print(i)
            y=Y.pop()
            Y.append(0)
            Y[0]=y+new_data[i]
            Y_coor[i]=Y[0]
        elif steps_direction[i][1]== -1:
            print(i)
            y=Y.pop()
            Y.append(0)
            Y[0]=y-new_data[i]
            Y_coor[i]=Y[0]
    print('y isnew')
    print(X_coor[0])
    for i in range(step_n):
        if steps_direction[i][2]==0:
            print('stay')
            print(i)
            z=Z.pop()
            Z.append(0)
            Z[0]=z
            Z_coor[i]=Z[0]
        elif steps_direction[i][2]==1:
            print(i)
            z=Z.pop()
            Z.append(0)
            Z[0]=z+new_data[i]
            Z_coor[i]=Z[0]
        elif steps_direction[i][2]== -1:
            print(i)
            z=Z.pop()
            Z.append(0)
            Z[0]=z-new_data[i]
            Z_coor[i]=Z[0]
    print('Z isnew')
    print(Z_coor[0])
    #return steps_direction

new_data=randomize()


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

map = plt.figure()
map_ax = Axes3D(map)
map_ax.autoscale(enable=True, axis='both', tight=True)

# # # Setting the axes properties
map_ax.set_xlim3d([0.0, 10.0])
map_ax.set_ylim3d([0.0, 10.0])
map_ax.set_zlim3d([0.0, 10.0])
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
