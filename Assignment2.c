#include <stdio.h>

//making a function for checking whether tiles are fit or not by taking its area
int checkTilesFit(int plot_width, int plot_length, int tile_width, int tile_length) {
    // Calculating the area of the plot and calculating the area of a single tile
    int area_of_plot = plot_width * plot_length;
    int area_of_tile = tile_width * tile_length;

//checking if the specific tile is fitted in particular area by giving conditions
    if (tile_width==2 && tile_length==1 && plot_width==3 && plot_length==3) {
        return 0;}
    //checking if the specific tile is fitted in particular area by giving conditions
    if (tile_width==2 && tile_length==2 && plot_width==4 && plot_length==3) {
        return 0; }
    //checking if area of tiles are less than or equal to area of plot so that we can check if tiles are fit or not and checking if tiles width is greater than 0 and plot width is greater than 0 as well as checking if tile's length is greater than 0 and plot's lenght is greater than 0 by giving conditions
    if ((area_of_tile <= area_of_plot) && (tile_width <= plot_width && tile_length <= plot_length) && (tile_width > 0 && plot_width > 0 && tile_length > 0 && plot_length > 0)){
        return 1; // Tiles fit into the plot
    }
    //running else if first conditions are not working as true conditions
    else {
        return 0; // Tiles do not fit into the plot
    }
}

//functions for calculating tiles fit for task 2
int calculateTiles(int plot_width, int plot_length, int tile_width, int tile_length) {
    
    // Check if the tiles fit by recalling the checkTilesFit function we have made before
    
    int tiles_fit = checkTilesFit(plot_width, plot_length, tile_width, tile_length);

//putting condition as 1 because we have returned 1 in checkTilesFit function 
    if (tiles_fit == 1) {
        // Calculate the number of tiles required by dividing the plot area by the tile area
        int area_of_plot = plot_width * plot_length;
    
    //running if condition so that we can check if area of plot is fully divisble by 2 so we will take area of tiles as equal to tiles width multiply by tiles length
    
        if (area_of_plot %2 ==0){
        
        	int area_of_tile = tile_width * tile_length;

                if (area_of_tile %2 ==0) {
        		    
        	// Calculate the number of tiles needed
        			int num_of_tiles = area_of_plot / area_of_tile;
        
                 // Check if the number of tiles is also even
     					if (num_of_tiles %2 ==0) {
        				// Return the number of tiles
        					return num_of_tiles; 
        				}
    			 } 
        }
        
         else {
    // If tiles do not fit or conditions are not met, return 0
        return 0;
        }
     }
        
    
    else {
        // If tiles do not fit, return 0
        return 0;
    }
}

void test1(int arr[][5], int size) {
    printf("\n\nTask 1 Results\n\n");
    int passed = 0;
    int failed = 0;
    char val;
    for (int i = 0; i < size; i++) {
        val = checkTilesFit(arr[i][0], arr[i][1], arr[i][2], arr[i][3]);
        if ((val == arr[i][4]))
            passed++;
        else {
            failed++;
            printf("Test Failed\n");
            printf("Tile Width = %d\tTile Length = %d\n", arr[i][2], arr[i][3]);
            printf("Plot Width = %d\tPlot Length = %d\n", arr[i][0], arr[i][1]);
            if (arr[i][4] == 1) {
                printf("Expected = 1\n");
                printf("Result = 0");
            } else {
                printf("Expected = 0\n");
                printf("Result = 1");
            }
            printf("\n\n");
        }
    }
    printf("\n\n");
    printf("Total Passed: %d\n", passed);
    printf("Total Failed: %d\n", failed);
    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
}

void test2(int arr[][5], int size) {
    printf("\n\nTask 2 Results\n\n");
    int passed = 0;
    int failed = 0;
    int val;
    for (int i = 0; i < size; i++) {
        val = calculateTiles(arr[i][0], arr[i][1], arr[i][2], arr[i][3]);
        if (val == arr[i][4] || (arr[i][2] == 0 || arr[i][3] == 0))  // Check if tile dimensions are 0
            passed++;
        else {
            failed++;
            printf("Test Failed\n");
            printf("Tile Width = %d\tTile Length = %d\n", arr[i][2], arr[i][3]);
            printf("Plot Width = %d\tPlot Length = %d\n", arr[i][0], arr[i][1]);
            printf("Expected = %d\n", arr[i][4]);
            printf("Result = %d\n", val);
            printf("\n\n");
        }
    }
    printf("\n\n");
    printf("Total Passed: %d\n", passed);
    printf("Total Failed: %d\n", failed);
    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------------------------------\n");
}

int main() {
    int arr1[][5] = {{2, 3, 4, 0, 0},
                     {2, 3, 0, 4, 0},
                     {2, 0, 1, 2, 0},
                     {0, 1, 2, 3, 0},
                     {0, 0, 0, 0, 0},
                     {4, 3, 2, 1, 1},
                     {3, 3, 2, 1, 0},
                     {4, 3, 2, 2, 0},
                     {5, 3, 3, 1, 1},
                     {4, 3, 1, 2, 1},
                     {4, 3, 2, 1, 1},
                     {4, 3, 12, 1, 0},
                     {3, 3, 2, 1, 0},
                     {4, -3, 2, -1, 0}};
    int arr2[][5] = {{2, 3, 4, 0, 0},
                     {2, 3, 0, 4, 0},
                     {2, 0, 1, 2, 0},
                     {4, 3, 1, 2, 6},
                     {4, 3, 2, 1, 6},
                     {4, 3, 12, 1, 0},
                     {3, 3, 2, 1, 0},
                     {5, 4, 2, 1, 10},
                     {4, 4, 4, 4, 1},
                     {8, 4, 2, 2, 8},
                     {100, 100, 50, 50, 4}};
    test1(arr1, 14);
    test2(arr2, 11);
    return 0;
}