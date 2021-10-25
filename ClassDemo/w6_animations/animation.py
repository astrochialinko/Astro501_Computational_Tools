import numpy as np
import matplotlib.pyplot as plt

# function to return the x- and y- positions of the moving "particle" at time "time"
# For now it retures a circle, of radius 'radiusCircle', traced over a period 'Period'

def position(time, radiusCircle=10.0, Period=1.0):

    # calculate positions
    xPos=radiusCircle*np.cos(2.*np.pi*time/Period)
    yPos=radiusCircle*np.sin(2.*np.pi*time/Period)

    return xPos, yPos

# make background dark
plt.style.use('dark_background')

# interactive plotting
plt.ion()

# size of figure in inches
figsize=(8.,7.)

# make it 1 for screen, zero for files
screen=0

# max time to evolve
TMAX=2.0


iScene=1
Nsteps=64

for index in range(0, Nsteps):
    plt.figure(figsize=figsize)

    # calcualte current time
    time=index/(Nsteps-1.)*TMAX

    # calcuate current position
    xPos, yPos=position(time)

    # plot the positions
    plt.plot(xPos,yPos,'go',ms=20)
    plt.axis([-15,15,-15,15])

    if (screen==1):
        plt.show()
        plt.pause(0.01)
    else:
        plt.savefig("fig"+str(iScene).zfill(3)+'.png', bbox_inches='tight')

    iScene+=1
    plt.close()







