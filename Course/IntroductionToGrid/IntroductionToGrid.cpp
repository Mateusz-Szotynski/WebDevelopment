//Display: Grid

	display: grid;
	
	grid-template-columns: 1fr 2fr;
	
	grid-template-rows: 1fr 1fr;
	
	gap: 10px;
	
//Grid Sizing

	grid-template-columns: 200px minmax(400px,800px);
	
	grid-template-rows: 200px 400px;
	
	grid-template-rows: repeat(2,200x);
	
	grid-template-columns: repeat(2,800px);
	
	grid-auto-rows: 300px
	
//Grid Placement

	Grid
	
	lines
	
	tracks
	
	cells
	
	container
	
	items
	
	grid-column: span 2;
	
	grid-column-start: 2;
	
	grid-column-end: 3;
	
	grid-row: span 2;
	
	grid-row-start: 2;
	
	grid-row-end: 3;
	
	grid-area: 2 / 1 / 3 / 3;