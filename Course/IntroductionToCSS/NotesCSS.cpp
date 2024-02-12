//How to add CSS
	
	Inline (when 1 element):
	
	<html style="background: blue">
	</html>
	
	Internal (when 1 webpage):
	
	<html>
		<head>
			<style>
				html{
					background: red;
				}
			</style>
		</head>
	</html>
	
	External:
	
	Different file that is linked to html document by: <link rel="stylesheet" href="" />
	
	background-color: <--- Changes background color
	color:	<--- Changes color of the content
	
	
//CSS Selectors

	h2{		<--- Element Selector
		
	}

	.(name of the class){	<--- Class Selector
		
	}
	
	#(name of the id){		<--- ID Selector
		
	}
	
	p[draggable]{	<--- Attribute Selector	(Select ALL p with DRAGGABLE attribute)
		color: red;
	}
	
	p[draggable="false"]{	<--- Attribute Selector	(Select ALL p with DRAGGABLE="false" attribute)
		color: red;
	}
	
	*{	<--- Universal Selector (Targets everything)
		
	}
	
//Colors Properties

	background-color: red;
	
	color: red;
	
	https://colorhunt.co/  	<--- Color designs
	
	
//Fonts Properties

	font-weight: bold;
	
	font-size: 20px;	<--- Changes size of the font
	
	1px - 1/96 inch
	1pt - 1/72nd inch
	1em - 100% of parent
	1rem - 100% of root (html)
	
	font-family: sans-serif;
	
	text-align: center
	
	fonts.google.com
	
	
//The Box Model
	
	Content -> Padding -> Border -> Margin
	
	When we want to group a contect together then we create a <div> </div>
	
	
//The Cascade - Specificity and Inheritance
	
	Position: from top to bottom (bottom > top)
	
	Specificity: element selector -> class -> element selector with parameter -> id
	
	Type: external -> internal -> inline
	
	Importance: color: green !important;
	
	
//Combining Selectors
	
	Group: 
	selector, selector{
		
	}
	
	Child:
	selector > selector{
		
	}
	
	Descendant:
	selector selector{
		
	}
	
	Chaining:
	selectorselector{
		
	}
	
	Combining combinations:
	selector selectorselector{
		
	}
	
	
//Positioning

	Static:
	HTML default
	
	Relative:
	Position relative to default(static) position
	
	Absolute:
	Position relative to nearest positioned ancestor or top left corner of webpage
	z-index
	
	Fixed:
	Position relative to top left corner of browser window
	

//Display

	inline:
	goes in the same line, but cannot change height & width
	
	block:
	takes all of the width but you can change width & height
	
	inline-block:
	power of both. goes in the same line, and it is possible to change height & width
	
	none:
	element disapear
	
	
//Float

	float:
	text floats around div
	
	clear:
	clears float
	
	Use this only to wrap-up text around image. Not to make lay out of website!
	There are better tools like flexbox, grid or bootstrap
	
	
//Responsive Websites

	1: Media Queries
	
	2: CSS Grid
	
	3: CSS Flexbox
	
	4: External Frameworks e.g. Bootstrap
	

//Media Query

	@media (max-width: 600px){
		
	}
	
	@media (min-width: 600px){
		
	}
	
	@media (min-width: 600px) and (max-width: 900px){
		
	}
	
//Flexbox
	
	Display: Flex
	
	Display: Inline-Flex
	
	flex-direction: row
	
	flex-direction: column
	
	flex-basis: 100px
	
	flex-wrap: nowrap;
	
	flex-wrap: wrap;
	
	justify-content: flex-start;
	
	justify-content: flex-end;
	
	justify-content: center;
	
	justify-content: space-between;
	
	align-items: flex-start;
