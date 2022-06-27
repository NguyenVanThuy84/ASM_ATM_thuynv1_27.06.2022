#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Chuong trinh hoat dong may ATM (Nguyen Van Thuy-TT2205E).

// Tao ham menu (in ra cac lua chon)
void menu()
{
	char user[40];
	int chonso;
	printf ("Chao mung %s da dang nhap thanh cong \n", user);
	printf ("2. chon rut tien \n");
 	printf ("3. chon chuyen khoan \n");
 	printf ("4. chon xem so du \n");
 	printf ("0. chon ket thuc \n");
	return;
}
// Tao ham login (username, password)
int login(char user,  int pass)
{   int result;
	if (user =='T' && pass == 123)
	{
	result =1;
    }
	else
	result = 0;
return (result);
	//exit
}
// Tao ham rut tien- Withdraw (int num)
void rut_tien(int num)
{
    int tk = 10000000;
    printf("Nhap so tien can rut \n");
	scanf("%d",&num);
	if (num > tk)
	{
		printf ("So tien khong du de rut \n");
	} 
	else if (num % 50000 != 0)
	{
		printf ("So tien rut phai la boi so cua 50000 \n");
	}
	else if (num <= tk && num % 50000 == 0 )
	{
		tk -= num;
		printf("So tien da rut la: %d \n",num);
		printf ("So tien con lai trong tai khoan la: %d \n", tk);
	}
}
// Tao ham chuyen khoan-Transfer (stk,num)
void transfer(int id, int num)
{
	int tk = 10000000, tai_khoan, tien_chuyen;
	printf ("Nhap tai khoan muon chuyen:************\n");
	scanf ("%d", &tai_khoan);
	printf ("Nhap so tien muon chuyen:    \n");
	scanf ("%d", &tien_chuyen);
	if (tien_chuyen < 3000000 && tien_chuyen % 50 == 0 && tien_chuyen <= tk)
	{
		tk -= tien_chuyen;
		printf ("Ban da chuyen khoan thanh cong so tien: %d \n", tien_chuyen);
		printf ("So tien con lai trong tai khoan la: %d \n", tk);	
	}
	else
	printf ("So tien chuyen khong hop le \n");
} 	
// Tao ham kiem tra so du-check()
void so_du(void)
{	int tk = 10000000;
	printf ("So du trong tai khoan la: %d \n", tk);	
}
// ham chinh main
int main() 
{
	int chon_so, num, tai_khoan, tien_chuyen, pass;
	char user;
	printf ("Hay dua the vao \n");
	printf ("Nhap ho va ten cua ban vao:****************\n");
	scanf ("%c", &user);
	printf ("Nhap ma PIN:***********\n");
	fflush(stdin);
	scanf ("%d", &pass);
	if (login(user, pass) == 1)
	{
	  do
	   {
	    menu();
	    printf ("Moi ban chon so:   \n");
 		scanf ("%d",&chon_so);
	    switch(chon_so)
	    {
		case 2:
		rut_tien(num);
		break;
		case 3:
		transfer(tai_khoan, tien_chuyen);
		break;
		case 4:
		so_du();
		break;
		case 0:
		break;
	    }
}
	while(chon_so !=0);
}
return ;
}

