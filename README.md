# Poker AI: Building a Pluribus-like AI

This repository contains code and resources for building a poker AI inspired by Pluribus, the AI developed by Facebook AI Research and Carnegie Mellon University.

## Overview

Pluribus is a state-of-the-art AI that has achieved superhuman performance in six-player no-limit Texas Hold'em poker. It uses a combination of techniques including Monte Carlo Counterfactual Regret Minimization (MCCFR), abstraction, and real-time search to compute its strategy.

Our goal is to build an AI that uses similar techniques to play poker. This is a challenging task that involves a deep understanding of both poker strategy and advanced AI algorithms.

## Project Structure

- `src/`: This directory contains the source code for the poker AI.
- `docs/`: This directory contains documentation for the project.

## Prerequisites

- CMake version 3.10 or higher
- A C++ compiler that supports the C++11 standard

## Building the Project

1. Clone the repository:

   ```
   git clone https://github.com/yourusername/MyProject.git
   cd MyProject
   ```

2. Create a build directory and navigate into it:

   ```
   mkdir build
   cd build
   ```

3. Run CMake to generate the build files. You can specify the build type by setting the `BUILD_TYPE` variable. The options are `DEV`, `STAGING`, and `PROD`:

   ```
   cmake .. -DBUILD_TYPE=DEV
   ```

4. Build the project:
   ```
   cmake --build .
   ```

## Running the Project

After building the project, you can run it with the following command:

    ```
    ./poker-engine
    ```

## Contributing

We welcome contributions to this project. If you have a feature request, bug report, or proposal, please open an issue on GitHub. If you would like to contribute code, please open a pull request.

## License

This project is licensed under the MIT License. See the LICENSE file for details.
