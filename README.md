This repo contains nodes which will save the trajectory of a bot in a yaml file and later can visualize the trajectory.

There is a traj_client node that takes the argument as the duration.

Trajectory_saver node saves the data from now going backwards  for the duration given by the client.

Trajectory_reader node visualizes the trajectory_data by transforming the data into the odom frame.

The bot used is from my personal project with using the teleop_key inputs from the keyboard.
