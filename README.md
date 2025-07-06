# Game of Life Simple C++ Implementation

An interactive, real-time implementation of Conway’s Game of Life using C++ and Raylib. Featuring dynamic cell updates with keyboard control over simulation speed and state.

https://github.com/user-attachments/assets/6f8b3551-f6e9-4b29-87c1-3e078be1eb35

## Features

- Classic Game of Life rules (B3/S23) implemented on a toroidal (wrap‑around) grid
- Real-time rendering using Raylib
- Keyboard controls for interactivity: ENTER — Start simulation; SPACE — Pause simulation; F — Increase frame rate (speed up); S — Decrease frame rate (slow down)
- Random initial grid fill
- Adjustable cell size and window resolution

## How it works
1. Grid Representation
- Grid class holds a 2D vector of ints (0 = dead, 1 = alive), sized (width/cellSize) × (height/cellSize)
- Methods to draw, read/write cells, check bounds, and fill randomly—including wrap-around logic via modulo for neighbor lookup

2. Simulation Logic
- Simulation class encapsulates two Grid objects (grid, tempGrid) and a run flag
- In Update(), if running:
  - Loop through every cell
  - Count live neighbors (8-direction wrap-around)
  - Apply rules: Live cell dies if <2 or >3 neighbors; Dead cell becomes live if exactly 3 neighbors
  - After checking all cells, swap grid ↔ tempGrid

3. Rendering & Interaction
- In main.cpp, Raylib window initializes at specified size
- Main loop:
  - Keyboard input to start/pause or adjust FPS
  - Call simulation.Update()
  - Render using: BeginDrawing(); ClearBackground(GREY); simulation.Draw(); EndDrawing();
  - Exit when window closes

## Requirements
- C++17 or newer
- Raylib installed and linked

## Extensibility Ideas
- Add mouse/touch input for toggling individual cells
- Change rule set
- Zoom in/out by adjusting cellSize dynamically
