document.addEventListener('DOMContentLoaded', function () {
    const gridContainer = document.getElementById('grid-container');
    const gridSize = 30;
    let grid = createGrid(gridSize);
  
    function createGrid(size) {
      const grid = [];
      for (let i = 0; i < size; i++) {
        const row = [];
        for (let j = 0; j < size; j++) {
          row.push(false);
        }
        grid.push(row);
      }
      return grid;
    }
  
    function renderGrid() {
      gridContainer.innerHTML = '';
      grid.forEach((row, rowIndex) => {
        row.forEach((cell, colIndex) => {
          const cellElement = document.createElement('div');
          cellElement.className = `cell ${cell ? 'alive' : ''}`;
          cellElement.addEventListener('click', () => toggleCell(rowIndex, colIndex));
          gridContainer.appendChild(cellElement);
        });
      });
    }
  
    function toggleCell(row, col) {
      grid[row][col] = !grid[row][col];
      renderGrid();
    }
  
    renderGrid();
  });
  