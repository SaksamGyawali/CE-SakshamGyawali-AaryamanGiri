import numpy as np
import matplotlib.pyplot as plt
from scipy.interpolate import make_interp_spline

# Input sizes
sizes = np.array([500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500,
         6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000])

# Execution time for quick sort
quick_sort_times = np.array([0, 0, 3.123, 4.462, 7.852, 9.135, 10.42, 14.877, 12.727, 
                    16.156, 17.243, 19.673, 19.562, 20.242, 23.744, 23.848, 
                    27.538, 27.462, 30.243, 34.17])

# Creating smooth curves using spline interpolation
smooth_sizes = np.linspace(sizes.min(), sizes.max(), 300)
quick_sort_smooth = make_interp_spline(sizes, quick_sort_times)(smooth_sizes)

# Plotting the data
plt.plot(smooth_sizes, quick_sort_smooth, label='Quick Sort', color='r')

# Adding titles and labels
plt.title('Execution Time for Quick Sort')
plt.xlabel('Input Size')
plt.ylabel('Time (milliseconds)')
plt.legend()

# Display the plot
plt.show()