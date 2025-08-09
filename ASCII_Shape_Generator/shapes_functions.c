/*
 * shapes_functions.c
 *
 *  Created on: Aug 9, 2025
 *      Author: FARES
 */

#include <stdio.h>
#include <ctype.h>
#include "shapes_header.h"

/************ Pyramid Variations ***************/

// --- Full Pyramid Functions ---
void FullSolidStarPyramid(int rows) {
        for (int i = 1; i <= rows; ++i) {
            for (int space = 1; space <= rows - i; ++space)
                printf("  ");
            for (int k = 1; k <= 2 * i - 1; ++k)
                printf("* ");
            printf("\n");
        }
    }

void FullSolidNumberPyramid(int rows) {
	for (int i = 1; i <= rows; ++i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		int num = i;
		for (int k = 1; k <= 2 * i - 1; ++k)
			printf("%d ", num++);
		printf("\n");
	}
}

void FullSolidLetterPyramid(int rows) {
	for (int i = 0; i < rows; ++i) {
		for (int space = 1; space <= rows - i - 1; ++space)
			printf("  ");
		for (int k = 0; k <= i * 2; ++k)
			printf("%c ", 'A' + k);
		printf("\n");
	}
}

void FullHollowStarPyramid(int rows) {
	for (int i = 1; i <= rows; ++i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		for (int k = 1; k <= 2 * i - 1; ++k) {
			if (k == 1 || k == 2 * i - 1 || i == rows)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}

/*============================================*/

// --- Right Half Pyramid Functions ---
void RightSolidStarPyramid(int rows) {
	for (int i = 1; i <= rows; ++i) {
		for (int k = 1; k <= i; ++k)
			printf("* ");
		printf("\n");
	}
}

void RightSolidNumberPyramid(int rows) {
	for (int i = 1; i <= rows; ++i) {
		int num = 1;
		for (int k = 1; k <= i; ++k)
			printf("%d ", num++);
		printf("\n");
	}
}

void RightSolidLetterPyramid(int rows) {
	for (int i = 1; i <= rows; ++i) {
		char ch = 'A';
		for (int k = 1; k <= i; ++k)
			printf("%c ", ch++);
		printf("\n");
	}
}

void RightHollowStarPyramid(int rows) {
	for (int i = 1; i <= rows; ++i) {
		for (int k = 1; k <= i; ++k) {
			if (k == 1 || k == i || i == rows)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}

/*============================================*/

// --- Left Half Pyramid Functions ---
void LeftSolidStarPyramid(int rows) {
	for (int i = 1; i <= rows; ++i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		for (int k = 1; k <= i; ++k)
			printf("* ");
		printf("\n");
	}
}

void LeftSolidNumberPyramid(int rows) {
	for (int i = 1; i <= rows; ++i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		int num = 1;
		for (int k = 1; k <= i; ++k)
			printf("%d ", num++);
		printf("\n");
	}
}

void LeftSolidLetterPyramid(int rows) {
	for (int i = 1; i <= rows; ++i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		char ch = 'A';
		for (int k = 1; k <= i; ++k)
			printf("%c ", ch++);
		printf("\n");
	}
}

void LeftHollowStarPyramid(int rows) {
	for (int i = 1; i <= rows; ++i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		for (int k = 1; k <= i; ++k) {
			if (k == 1 || k == i || i == rows)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}

/*============================================*/

// --- Inverted Full Pyramid Functions ---
void InvFullSolidStarPyramid(int rows) {
	for (int i = rows; i >= 1; --i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		for (int k = 1; k <= 2 * i - 1; ++k)
			printf("* ");
		printf("\n");
	}
}

void InvFullSolidNumberPyramid(int rows) {
	for (int i = rows; i >= 1; --i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		int num = i;
		for (int k = 1; k <= 2 * i - 1; ++k)
			printf("%d ", num++);
		printf("\n");
	}
}

void InvFullSolidLetterPyramid(int rows) {
	for (int i = rows - 1; i >= 0; --i) {
		for (int space = 1; space <= rows - i - 1; ++space)
			printf("  ");
		for (int k = 0; k <= i * 2; ++k)
			printf("%c ", 'A' + k);
		printf("\n");
	}
}

void InvFullHollowStarPyramid(int rows) {
	for (int i = rows; i >= 1; --i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		for (int k = 1; k <= 2 * i - 1; ++k) {
			if (k == 1 || k == 2 * i - 1 || i == rows)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}

/*============================================*/

// --- Inverted Right Half Pyramid Functions ---
void InvRightSolidStarPyramid(int rows) {
	for (int i = rows; i >= 1; --i) {
		for (int k = 1; k <= i; ++k)
			printf("* ");
		printf("\n");
	}
}

void InvRightSolidNumberPyramid(int rows) {
	for (int i = rows; i >= 1; --i) {
		int num = 1;
		for (int k = 1; k <= i; ++k)
			printf("%d ", num++);
		printf("\n");
	}
}

void InvRightSolidLetterPyramid(int rows) {
	for (int i = rows; i >= 1; --i) {
		char ch = 'A';
		for (int k = 1; k <= i; ++k)
			printf("%c ", ch++);
		printf("\n");
	}
}

void InvRightHollowStarPyramid(int rows) {
	for (int i = rows; i >= 1; --i) {
		for (int k = 1; k <= i; ++k) {
			if (k == 1 || k == i || i == rows)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}

/*============================================*/

// --- Inverted Left Half Pyramid Functions ---
void InvLeftSolidStarPyramid(int rows) {
	for (int i = rows; i >= 1; --i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		for (int k = 1; k <= i; ++k)
			printf("* ");
		printf("\n");
	}
}

void InvLeftSolidNumberPyramid(int rows) {
	for (int i = rows; i >= 1; --i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		int num = 1;
		for (int k = 1; k <= i; ++k)
			printf("%d ", num++);
		printf("\n");
	}
}

void InvLeftSolidLetterPyramid(int rows) {
	for (int i = rows; i >= 1; --i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		char ch = 'A';
		for (int k = 1; k <= i; ++k)
			printf("%c ", ch++);
		printf("\n");
	}
}

void InvLeftHollowStarPyramid(int rows) {
	for (int i = rows; i >= 1; --i) {
		for (int space = 1; space <= rows - i; ++space)
			printf("  ");
		for (int k = 1; k <= i; ++k) {
			if (k == 1 || k == i || i == rows)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}

/*============ Diamond Variations ===========*/

// --- Diamond Shape Functions ---
void DiamondSolidStar(int rows) {
   FullSolidStarPyramid(rows);
   // Bottom half
   for (int i = rows - 1; i >= 1; --i) {
	   for (int space = 1; space <= rows - i; ++space)
		   printf("  ");
	   for (int k = 1; k <= 2 * i - 1; ++k)
		   printf("* ");
	   printf("\n");
   }
}

void DiamondSolidNumber(int rows) {
   FullSolidNumberPyramid(rows);
   // Bottom half
   for (int i = rows - 1; i >= 1; --i) {
	   for (int space = 1; space <= rows - i; ++space)
		   printf("  ");
	   int num = i;
	   for (int k = 1; k <= 2 * i - 1; ++k)
		   printf("%d ", num++);
	   printf("\n");
   }
}

void DiamondSolidLetter(int rows) {
   FullSolidLetterPyramid(rows);
   // Bottom half
   for (int i = rows - 2; i >= 0; --i) {
	   for (int space = 1; space <= rows - i - 1; ++space)
		   printf("  ");
	   for (int k = 0; k <= i * 2; ++k)
		   printf("%c ", 'A' + k);
	   printf("\n");
   }
}

void DiamondHollowStar(int rows) {
    for (int i = 0; i < 2 * rows - 1; i++) {
        int compaire;
        if (i < rows) {
            compaire = 2 * (rows - i) - 1;
        }else {
            compaire = 2 * (i - rows + 1) + 1;
        }
        for (int j = 0; j < compaire; j++) {
            printf(" ");
        }

        for (int k = 0; k < 2 * rows - compaire; k++) {
            if (k == 0 || k == 2 * rows - compaire - 1) {
                printf("* ");
            }else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

/*=========== HourGlass Variations ==========*/

// --- Hour glass Shape Functions ---
void HourglassSolidStar(int rows) {
	InvFullSolidStarPyramid(rows);
	FullSolidStarPyramid(rows);
}

void HourglassSolidNumber(int rows) {
	InvFullSolidNumberPyramid(rows);
	FullSolidNumberPyramid(rows);
}

void HourglassSolidLetter(int rows) {
	InvFullSolidLetterPyramid(rows);
	FullSolidLetterPyramid(rows);
}

void HourglassHollowStar(int rows) {
	InvFullHollowStarPyramid(rows);
	FullHollowStarPyramid(rows);
}

/*============================================*/

// --- Arrow shapes Function ---
void SolidRightArrow(int rows) {
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (int i = rows - 1; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");

	}
}

void HollowRightArrow(int rows) {
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1 || j == i) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		for (int k = 1; k <= rows - i; k++) {
			printf("  ");
		}
		printf("\n");
	}
	for (int p = rows - 1; p >= 1; p--) {
		for (int u = 1; u <= p; u++) {
			if (u == 1 || u == p) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		for (int t = 1; t <= rows - p; t++) {
			printf("  ");
		}
		printf("\n");
	}
}

void SolidLeftArrow(int rows) {
	int i, j;
	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= rows - i; j++) printf("  ");
		for (j = 1; j <= i; j++) printf("* ");
		printf("\n");
	}
	for (i = rows - 1; i >= 1; i--) {
		for (j = 1; j <= rows - i; j++) printf("  ");
		for (j = 1; j <= i; j++) printf("* ");
		printf("\n");
	}
}

void HollowLeftArrow(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= i; k++) {
            if (k == 1 || k == i) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int p = rows - 1; p >= 1; p--) {
        for (int u = 1; u <= rows - p; u++) {
            printf("  ");
        }
        for (int t = 1; t <= p; t++) {
            if (t == 1 || t == p) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

/*============================================*/

// --- Pascal's Triangle Function ---
void PascalTriangle(int rows) {
	for (int line = 0; line < rows; line++) {
		for (int space = 0; space < rows - line - 1; space++)
			printf("  ");
		int val = 1;
		for (int i = 0; i <= line; i++) {
			printf("%4d ", val);
			val = val * (line - i) / (i + 1);
		}
		printf("\n");
	}
}

/*============ Square Variations =============*/

// --- Square shape Function ---
void SolidSquare(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void HollowSquare(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (i == 1 || i == rows || j == 1 || j == rows)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

/*=========== Rhombus Variations ============*/

// --- Rhombus shapes Function ---
void SolidRightRhombus(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++)
            printf("  ");
        for (int j = 1; j <= rows; j++)
            printf("* ");
        printf("\n");
    }
}

void HollowRightRhombus(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++)
            printf("  ");
        for (int j = 1; j <= rows; j++)
            if (i == 1 || i == rows || j == 1 || j == rows)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
}

void SolidLeftRhombus(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= i - 1; space++)
            printf("  ");
        for (int j = 1; j <= rows; j++)
            printf("* ");
        printf("\n");
    }
}

void HollowLeftRhombus(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= i - 1; space++)
            printf("  ");
        for (int j = 1; j <= rows; j++)
            if (i == 1 || i == rows || j == 1 || j == rows)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
}

/*============= Heart_shape ================*/

// --- Heart Shape Function ---
void HeartShape(int rows) {
    for(int i=rows/2; i<=rows; i+=2){
        for(int j=1; j<rows-i; j+=2){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("*");
        }
        for(int p=1; p<=rows-i; p++){
            printf(" ");
        }
        for(int u=1; u<=i; u++){
            printf("*");
        }
        printf("\n");
    }
    for(int y=rows; y>=1; y--){
        for(int t=y; t<rows; t++){
            printf(" ");
        }
        for(int x=1; x<=(y*2)-1; x++){
            printf("*");
        }
        printf("\n");
    }
}

/************** shape print *******************/

// --- Shape print Function ---
void ShapePrint(void){
   int rows, star_num_letter, hollow_solid, Shape_type;
   printf("|===========================================|");
   printf(
	   "\nChoose pyramid type:\n"
	   "1 : Full Pyramid\n"
	   "2 : Right Half Pyramid\n"
	   "3 : Left Half Pyramid\n"
	   "4 : Inverted Full Pyramid\n"
	   "5 : Inverted Right Half Pyramid\n"
	   "6 : Inverted Left Half Pyramid\n"
	   "7 : Diamond Shape\n"
	   "8 : Hourglass Shape\n"
	   "9 : Left Arrow\n"
	   "10 : Right Arrow\n"
	   "11 : Pascal Triangle\n"
	   "12 : Square\n"
	   "13 : Right Rhombus\n"
	   "14 : Left Rhombus\n"
	   "15 : Heart shape\n"
	   "Choice: ");
   if (scanf("%d", &Shape_type) != 1) {
	   printf("ERROR: Invalid input. Please enter a number.\n");
	   return;
   }

   if (Shape_type == 11) {
	   printf("Enter the number of rows: ");
	   if (scanf("%d", &rows) != 1 || rows < 1) {
		   printf("ERROR: Invalid number of rows.\n");
		   return;
	   }
	   PascalTriangle(rows);
	   return;
   }

   if (Shape_type == 15) {
	   printf("Enter the number of rows: ");
	   if (scanf("%d", &rows) != 1 || rows < 1) {
		   printf("ERROR: Invalid number of rows.\n");
		   return;
	   }
	   HeartShape(rows);
	   return;
   }

   printf("\nEnter fill of the shape:\n1 : Hollow\n2 : Solid\nChoice: ");
   if (scanf("%d", &hollow_solid) != 1) {
	   printf("ERROR: Invalid input. Please enter a number.\n");
	   return;
   }

   if (hollow_solid == 1) {
	   printf("You chose Hollow\n");
	   printf("Enter the number of rows: ");
	   if (scanf("%d", &rows) != 1 || rows < 1) {
		   printf("ERROR: Invalid number of rows.\n");
		   return;
	   }
	   switch (Shape_type) {
		   case 1: FullHollowStarPyramid(rows); break;
		   case 2: RightHollowStarPyramid(rows); break;
		   case 3: LeftHollowStarPyramid(rows); break;
		   case 4: InvFullHollowStarPyramid(rows); break;
		   case 5: InvRightHollowStarPyramid(rows); break;
		   case 6: InvLeftHollowStarPyramid(rows); break;
		   case 7: DiamondHollowStar(rows); break;
		   case 8: HourglassHollowStar(rows); break;
		   case 9: HollowLeftArrow(rows); break;
		   case 10: HollowRightArrow(rows); break;
		   case 12: HollowSquare(rows); break;
		   case 13: HollowRightRhombus(rows); break;
		   case 14: HollowLeftRhombus(rows); break;
		   default: printf("ERROR: Invalid shape type. Please choose between (1-15)\n"); break;
	   }
   } else if (hollow_solid == 2) {
	   printf("You chose Solid\n");
	   printf("Enter building unit:\n1 : Stars\n2 : Numbers\n3 : Letters\nChoice: ");
	   if (scanf("%d", &star_num_letter) != 1) {
		   printf("ERROR: Invalid input. Please enter a number.\n");
		   return;
	   }
	   printf("Enter the number of rows: ");
	   if (scanf("%d", &rows) != 1 || rows < 1) {
		   printf("ERROR: Invalid number of rows.\n");
		   return;
	   }
	   switch (Shape_type) {
		   case 1:
			   switch (star_num_letter) {
				   case 1: FullSolidStarPyramid(rows); break;
				   case 2: FullSolidNumberPyramid(rows); break;
				   case 3: FullSolidLetterPyramid(rows); break;
				   default: printf("ERROR: Invalid building unit code. Please choose between (1-3)\n"); break;
			   }
			   break;
		   case 2:
			   switch (star_num_letter) {
				   case 1: RightSolidStarPyramid(rows); break;
				   case 2: RightSolidNumberPyramid(rows); break;
				   case 3: RightSolidLetterPyramid(rows); break;
				   default: printf("ERROR: Invalid building unit code. Please choose between (1-3)\n"); break;
			   }
			   break;
		   case 3:
			   switch (star_num_letter) {
				   case 1: LeftSolidStarPyramid(rows); break;
				   case 2: LeftSolidNumberPyramid(rows); break;
				   case 3: LeftSolidLetterPyramid(rows); break;
				   default: printf("ERROR: Invalid building unit code. Please choose between (1-3)\n"); break;
			   }
			   break;
		   case 4:
			   switch (star_num_letter) {
				   case 1: InvFullSolidStarPyramid(rows); break;
				   case 2: InvFullSolidNumberPyramid(rows); break;
				   case 3: InvFullSolidLetterPyramid(rows); break;
				   default: printf("ERROR: Invalid building unit code. Please choose between (1-3)\n"); break;
			   }
			   break;
		   case 5:
			   switch (star_num_letter) {
				   case 1: InvRightSolidStarPyramid(rows); break;
				   case 2: InvRightSolidNumberPyramid(rows); break;
				   case 3: InvRightSolidLetterPyramid(rows); break;
				   default: printf("ERROR: Invalid building unit code. Please choose between (1-3)\n"); break;
			   }
			   break;
		   case 6:
			   switch (star_num_letter) {
				   case 1: InvLeftSolidStarPyramid(rows); break;
				   case 2: InvLeftSolidNumberPyramid(rows); break;
				   case 3: InvLeftSolidLetterPyramid(rows); break;
				   default: printf("ERROR: Invalid building unit code. Please choose between (1-3)\n"); break;
			   }
			   break;
		   case 7:
			   switch (star_num_letter) {
				   case 1: DiamondSolidStar(rows); break;
				   case 2: DiamondSolidNumber(rows); break;
				   case 3: DiamondSolidLetter(rows); break;
				   default: printf("ERROR: Invalid building unit code. Please choose between (1-3)\n"); break;
			   }
			   break;
		   case 8:
			   switch (star_num_letter) {
				   case 1: HourglassSolidStar(rows); break;
				   case 2: HourglassSolidNumber(rows); break;
				   case 3: HourglassSolidLetter(rows); break;
				   default: printf("ERROR: Invalid building unit code. Please choose between (1-3)\n"); break;
			   }
			   break;
		   case 9:
			   switch (star_num_letter) {
				   case 1: SolidLeftArrow(rows); break;
				   default: printf("ERROR: Only stars supported for arrows.\n"); break;
			   }
			   break;
		   case 10:
			   switch (star_num_letter) {
				   case 1: SolidRightArrow(rows); break;
				   default: printf("ERROR: Only stars supported for arrows.\n"); break;
			   }
			   break;
		   case 12:
			   switch (star_num_letter) {
				   case 1: SolidSquare(rows); break;
				   default: printf("ERROR: Only stars supported for square.\n"); break;
			   }
			   break;
		   case 13:
			   switch (star_num_letter) {
				   case 1: SolidRightRhombus(rows); break;
				   default: printf("ERROR: Only stars supported for rhombus.\n"); break;
			   }
			   break;
		   case 14:
			   switch (star_num_letter) {
				   case 1: SolidLeftRhombus(rows); break;
				   default: printf("ERROR: Only stars supported for rhombus.\n"); break;
			   }
			   break;
		   default: printf("ERROR: Invalid pyramid type. Please choose between (1-15)\n"); break;
	   }
   } else {
	   printf("ERROR: Invalid fill shape code. Please choose between (1-2)\n");
   }
}
/**********************************************/
