#include <stdio.h>

int main(){
	short l,h,p=1,r=9;
	char field[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}} ;
	short nfield[3][3];
	while (r>0){
		printf("%c|%c|%c\n",field[0][0],field[1][0],field[2][0]);
		printf("-----\n");
		printf("%c|%c|%c\n",field[0][1],field[1][1],field[2][1]);
		printf("-----\n");
		printf("%c|%c|%c\n\n",field[0][2],field[1][2],field[2][2]);
		printf("Input\n");
		scanf("%hd %hd", &l, &h);
		
		if (h!=0 && h!=1 && h!=2){
			printf("Wrong input\n");
			continue;}
		else if (l!=0 && l!=1 && l!=2){
			printf("Wrong Input\n");
			continue;}
		else if (field[h][l] != ' '){
			printf("Wrong Input\n");
			continue;}
		else if (p == 0){
			field[h][l] = 'X';
			nfield[h][l] = 1;
			
			}
		else if (p == 1){
			field[h][l] = 'O';
			nfield[h][l] = 2;
			}
			
		if ((nfield[h][1] == nfield[h][0] && nfield [h][2] == nfield[h][1]) ||
		(nfield[0][l] == nfield[1][l] && nfield[1][l] == nfield[2][l])){break;}
		else if	((l+h)%2==0 && nfield[1][1] != 0){
			if ((nfield[0][0] == nfield[2][2] && nfield[1][1] == nfield[0][0]) ||
				(nfield[0][2] == nfield[2][0] && nfield[1][1] == nfield[0][2])){
					break;
				}
		}
		p = (p + 1)%2;
		r = r-1;
		
	}
	
	return 0;
}
