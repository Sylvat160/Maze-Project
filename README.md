

# Maze Project Documentation

## Table of Contents
1. [Introduction](#introduction)
2. [Project Structure](#project-structure)
3. [Compilation and Execution](#compilation-and-execution)
4. [Game Overview](#game-overview)
5. [Code Structure](#code-structure)
6. [Contributing](#contributing)
7. [License](#license)

## 1. Introduction <a name="introduction"></a>
The Maze project is a simple game application designed to generate and render mazes for user interaction. It provides a graphical interface for navigating through the maze while avoiding obstacles.

## 2. Project Structure <a name="project-structure"></a>
The project directory structure is organized as follows:

```
Maze/
|-- assets/               # Textures, audio, maps, and resources
|   |-- textures/         # Texture images
|   |-- audio/            # Audio files (music, sound effects)
|   |-- maps/             # Map files
|   |-- ...
|
|-- src/                  # Source code files
|   |-- main.c            # Entry point of the program
|   |-- game.c            # Game loop and main logic
|   |-- player.c          # Player movement and interaction
|   |-- map.c             # Map parsing and rendering
|   |-- textures.c        # Texture loading and rendering
|   |-- enemies.c         # Enemy logic
|   |-- ui.c              # User interface and HUD
|   |-- ...
|
|-- inc/                  # Header files
|   |-- game.h
|   |-- player.h
|   |-- map.h
|   |-- textures.h
|   |-- enemies.h
|   |-- ui.h
|   |-- ...
|
|-- Makefile              # Build automation
|-- README.md             # Project documentation
|-- LICENSE               # Licensing information
|-- .gitignore            # Git ignore file
|-- ...
```

- `assets/`: This directory holds all your resources, including texture images, audio files, map files, and any other assets your game uses.
- `src/`: This is where your source code files reside. Each major aspect of your game can have its own source file, like the game loop, player logic, map rendering, etc.
- `inc/`: Contains header files that correspond to each source file. This helps keep your code modular and allows you to separate declarations from implementations.
- `Makefile`: A file that contains build instructions for compiling your code. It helps automate the compilation process and produce executable files.
- `README.md`: A markdown file where you can provide project documentation, instructions, and explanations.
- `LICENSE`: A file containing licensing information for your project.
- `.gitignore`: A file that specifies which files and directories Git should ignore (like compiled binaries and temporary files).
- Other directories and files: You can create additional directories as needed, such as for fonts, additional levels, etc.


## 3. Compilation and Execution <a name="compilation-and-execution"></a>
To compile the project, navigate to the root directory and run the following command:

```bash
make
```

This will generate the `maze` executable in the `bin/` directory. To run the game, use the following command:

```bash
./bin/maze
```

## 4. Game Overview <a name="game-overview"></a>
The Maze game allows players to navigate through a maze, with the objective of reaching a designated endpoint while avoiding obstacles and enemies. Users can interact with the game using the graphical user interface provided.

## 5. Code Structure <a name="code-structure"></a>
The codebase is divided into several source files, each responsible for different aspects of the game:

- `enemies.c`: Contains code related to enemy behavior.
- `game.c`: Implements game logic and mechanics.
- `main.cpp`: Entry point of the application.
- `map.c`: Manages maze generation and rendering.
- `maze_renderer.cpp`: Handles the graphical rendering of the maze.
- `player.c`: Controls player movement and actions.
- `textures.c`: Handles texture loading and rendering.
- `ui.c`: Manages the user interface elements.

## 6. Contributing <a name="contributing"></a>
Contributions to the Maze project are welcome. To contribute, follow these steps:
1. Fork the project on GitHub.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them with clear messages.
4. Push your branch to your fork.
5. Create a pull request to the main repository.

## 7. License <a name="license"></a>
This project is licensed under the [MIT License](LICENSE). Please review the license file for more details.

---

This documentation provides an overview of the Maze project, its structure, how to compile and run it, and how to contribute to its development. Feel free to expand and customize it further to suit the specific needs of your project.