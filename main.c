
#include <stdio.h>
#include <stdlib.h>
	
	//MerveKaradas-21181616028
	int main() {
	

     int secim,secim1,secim2,tercih,tercih1,tercih2,tercih3,tercih4,tercih5,tercih6,tercih7;
	 int sepettel1=0,sepetyazici1=0,sepetpc1=0,sepetsaat1 = 0,don;
	 float sepettel=0,sepetyazici=0,sepetpc=0,sepetsaat = 0;
	 float guncel=0.0,ucret=0.0;
		
	printf("*****************____ABC ELEKTORNIK____***************** \n\n");
	printf("-----------------------HOSGELDINIZ----------------------\n\n");
	printf("********************************************************\n\n\n");
	
	while(1) {
	
	printf("\n\n");
	printf("    ANA MENU EKRANI \n  ");
	printf("---------------------\n\n");
	printf(" 1-Urun ve fiyat sorgula\n");
	printf(" 2-Sepete urun ekle\n");
	printf(" 3-Siparis tamamla\n");
	printf(" 4-Sonlandir\n");
	printf(" ----------------------\n\n");
	printf(" Seciminiz: ");
	scanf(" %d", &secim); 
	
	
		

	while(secim==1) { //�r�n ve fiyat sorgulamas� i�in yap�lan d�ng�

	    printf("---------------------------------------------------\n\n");
	    printf("Hangi kategoriden urun sorgulamak istiyorsunuz?\n\n");
	    printf(" 1-Akilli telefon\n");
    	printf(" 2-Akilli saat\n");
    	printf(" 3-Yazici\n");
    	printf(" 4-Bilgisayar\n\n");
	    printf("---------------------------------------------------\n\n");
	    printf("Seciminiz: ");
	    scanf("%d", &secim1);
	    printf("\n\n\n");
	
	    if ( secim1 == 1 ) { //Ak�ll� telefon fiyat sorgu
          printf("***********************************\n\n");
          printf(" 1| Akilli telefon-1   1500.00 TL\n");
		  printf(" 2| Akilli telefon-2   2750.00 TL\n");
		  printf(" 3| Akilli telefon-3   8832.00 TL\n\n");
	      printf("***********************************\n\n"); 
	      
		  
	      printf(" 1-Baska urunleri sorgula\n");
	      printf(" 2-Ana menuye don\n\n");
	      printf(" Yapmak istediginiz islem : ");
	      scanf("%d", &tercih);
	      printf("\n\n");
	      
	      
	    if( tercih== 2){ //Ana men�ye d�nmek i�in while(secim==1) d�ng�s�n� k�rar ve ana men�ye d�ner.
	      	break;  }
	    else if(tercih==1) { //Ba�ka �r�nleri sorgulamak i�in i�inde oldu�u while(secim==1) d�ng�s�ne d�ner.
	     	continue; }
	    else {                                                                                 //Tan�mlanan say�lar harici say� giri�inde tekrar yap�lacak i�lemleri
	     	printf(" ! HATALI SAYI GIRISI-ANA MENUYE YONLENDIRILIYORSUNUZ.. ! \n");break;	 } // almak i�in break ile d�ng�y� k�rarak ana men�ye y�nlendirir.

	  } // if(secim1==1) 'in parantezi
		
	
	    else if( secim1 == 2) {//Ak�ll� saat fiyat sorgu
	      printf("***********************************\n\n");
          printf(" 1| Akilli saat-1   543.99 TL\n");
		  printf(" 2| Akilli saat-2   1324.50 TL\n");
		  printf(" 3| Akilli saat-3   850.00 TL\n\n");
	      printf("***********************************\n\n"); 
	      
	      printf(" 1-Baska urunleri sorgula\n");
	      printf(" 2-Ana menuye don\n\n");
		  printf(" Yapmak istediginiz islem : ");
	      scanf("%d", &tercih1);
	      printf("\n\n");
	        if( tercih1== 2){ //Ana men�ye d�nmek i�in while(secim==1) d�ng�s�n� k�rar ve ana men�ye d�ner.
	        	break;  }
	        else if(tercih1==1) { //Ba�ka �r�nleri sorgulamak i�in i�inde oldu�u while(secim==1) d�ng�s�ne d�ner.
	        	continue;}
	        else {                                                                               //Tan�mlanan say�lar harici say� giri�inde tekrar yap�lacak i�lemleri
	     	printf(" ! HATALI SAYI GIRISI-ANA MENUYE YONLENDIRILIYORSUNUZ.. ! \n");break;	 }	 // almak i�in break ile d�ng�y� k�rarak ana men�ye y�nlendirir.
	        	
	        	
		}// else if(secim1==2)'in parantezi
	      
	      
	      
	   else if( secim1 == 3) {//Yaz�c� fiyat sorgu
	      printf("***********************************\n\n");
	      printf(" 1| Yazici A   553.50 TL\n");
	      printf(" 2| Yazici B   848.20 TL\n");
		  printf(" 3| Yazici C   1433.33 TL\n\n");
	      printf("***********************************\n\n"); 
	      
	      printf(" 1-Baska urunleri sorgula\n");
	      printf(" 2-Ana menuye don\n\n");
		  printf(" Yapmak istediginiz islem : ");
	      scanf("%d", &tercih2);
	      printf("\n\n");
	       if( tercih2== 2){ //Ana men�ye d�nmek i�in while(secim==1) d�ng�s�n� k�rar ve ana men�ye d�ner.
	      	break; }
	       else if(tercih2==1) { //Ba�ka �r�nleri sorgulamak i�in i�inde oldu�u while(secim==1) d�ng�s�ne d�ner.
	        continue;}
	       else {                                                                               //Tan�mlanan say�lar harici say� giri�inde tekrar yap�lacak i�lemleri
	     	printf(" ! HATALI SAYI GIRISI-ANA MENUYE YONLENDIRILIYORSUNUZ.. ! \n");break;	 }  // almak i�in break ile d�ng�y� k�rarak ana men�ye y�nlendirir.
	        
		} //else if(secim1==3) '�n parantezi
		  
	      
	   else if(secim1 == 4) {//Bilgisayar fiyat sorgu
	       printf("***********************************\n\n");
	       printf(" 1| Bilgisayar X   14600.00 TL\n");
		   printf(" 2| Bilgisayar Y   12964.00 TL\n");
		   printf(" 3| Bilgisayar Z   22920.00 TL\n"); 
		   printf(" 2| Bilgisayar Q   36123.00 TL\n\n");
	       printf("***********************************\n\n");
	       
	       printf(" 1-Baska urunleri sorgula\n");
	       printf(" 2-Ana menuye don\n\n");
		   printf(" Yapmak istediginiz islem : ");
	      scanf("%d", &tercih3);
	      printf("\n");
	       if( tercih3== 2){ //Ana men�ye d�nmek i�in while(secim==1) d�ng�s�n� k�rar ve ana men�ye d�ner.
	      	break; }
	       else if(tercih3==1) { //Ba�ka �r�nleri sorgulamak i�in i�inde oldu�u while(secim==1) d�ng�s�ne d�ner.
	        continue;}
	       else {                                                                              //Tan�mlanan say�lar harici say� giri�inde tekrar yap�lacak i�lemleri
	     	printf(" ! HATALI SAYI GIRISI-ANA MENUYE YONLENDIRILIYORSUNUZ.. ! \n");break;	 } // almak i�in break ile d�ng�y� k�rarak ana men�ye y�nlendirir.
	        
		} // else if(secim1==4) '�n parantezi
		
		
		else{                                                                             //�r�n sorgulama ekran�nda hatal� giri� oldu�unda ekrana hatal� girdi�ini yazd�r�p
		    printf("! BILINMEYEN SAYI GIRISI-TEKRAR TANIMLANAN BIR SAYI GIRINIZ !\n");	} //tekrardan bir say� verisi ald�r�r.
	       
	       
	           } //while(secim==1)' in parantezi
	    
	

	
	    while(secim ==2) {  //�r�nleri sepete eklemek i�in yap�lan d�ng�
	           
	    printf("---------------------------------------------------\n\n");
	    printf("Hangi kategoriden urun eklemek istiyorsunuz?\n\n");
	    printf(" 1-Akilli telefon\n");
    	printf(" 2-Akilli saat\n");
    	printf(" 3-Yazici\n");
    	printf(" 4-Bilgisayar\n\n");
	    printf("---------------------------------------------------\n\n");
	    printf("Seciminiz: ");
	    scanf("%d", &secim2);
	    printf("\n\n\n");
	    
	    
	    if( secim2 == 1) { //Telefon kategorisinden sepete �r�n eklenmek istendi�inde
	         printf("***********************************\n\n");
	         printf("Akilli telefon kategorisinden hangisini sepete eklemek istersiniz ?\n");
             printf(" 1| Akilli telefon-1   1500.00 TL\n");
		     printf(" 2| Akilli telefon-2   2750.00 TL\n");
		     printf(" 3| Akilli telefon-3   8832.00 TL\n\n");
	         printf("***********************************\n\n");
	         printf("Seciminiz : ");
	         scanf("%d", &sepettel1);
	         
	          if( sepettel1 ==1) { //Ak�ll� telefon-1 i�in
	          	sepettel = 1500.00; 
                sepetsaat=0.00;
	          	sepetpc=0.00;
	          	sepetyazici=0.00;
	          	guncel=0.00;
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);  } 
				  
	          else if( sepettel1 ==2) { //Ak�ll� telefon-2 i�in
			    sepettel = 2750.00;
			    sepetsaat=0.00;
	          	sepetpc=0.00;
	          	sepetyazici=0.00;
			    guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
	          	printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel); }
				   
	          else if( sepettel1 ==3)  { //Ak�ll� telefon-3 i�in
	          	sepettel = 8832.00; 
	          	sepetsaat=0.00;
	          	sepetpc=0.00;
	          	sepetyazici=0.00;
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);	  }
				
			  else {  
				printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN-ANA MENUYE YONLENDIRILIYORSUNUZ!\n\n"); break;	}
				 //Telefon se�imi yaparken hatal� giri� sonucu hata bildirisi verip tekrardan do�ru veri almak i�in ana men�ye y�nlendirilir.
			  
			  
	         printf(" 1-Sepete urun eklemeye devam edilsin mi?\n");
	         printf(" 2-Ana menuye don\n\n");
		     printf(" Yapmak istediginiz islem : ");
	         scanf("%d", &tercih4);
	         printf("\n\n");
	         
	            if( tercih4== 2){ //Ana men�ye d�nmek i�in while(secim==2) d�ng�s�n� k�rar ve ana men�ye d�ner.
				            break;	 } 
	            else if(tercih4==1) { //Ba�ka �r�nleri sepete eklemek i�in i�inde oldu�u while(secim==2) d�ng�s�ne d�ner.
	          	            continue;}
	            else {                                                                                //Tan�mlanan say�lar harici say� giri�inde tekrar yap�lacak i�lemleri
			         printf(" ! HATALI SAYI GIRISI-ANA MENUYE YONLENDIRILIYORSUNUZ.. ! \n");break;	} // almak i�in break ile d�ng�y� k�rarak ana men�ye y�nlendirir.
		        
	         } //telefon kategorisi olan if(secim2 ==1)'in parantezi
	     
	    
	      else if ( secim2 ==2 ) { //Ak�ll� saat kategorisinden sepete �r�n eklenmek istendi�inde
	    	 printf("***********************************\n\n");
	         printf("Akilli saat kategorisinden hangisini sepete eklemek istersiniz ?\n");
	         printf(" 1| Akilli saat-1   543.99 TL\n");
		     printf(" 2| Akilli saat-2   1324.50 TL\n");
		     printf(" 3| Akilli saat-3   850.00 TL\n\n");
		     printf("***********************************\n\n");
		     printf("Seciminiz : ");
	         scanf("%d", &sepetsaat1);
	        
	         if(sepetsaat1 == 1) { //Ak�ll� saat-1 i�in
	         	sepettel=0.00;
	         	sepetpc=0.00;
	         	sepetyazici=0.00;
	          	sepetsaat = 543.99; 
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);  } 
				  
	         else if( sepetsaat1==2) { //Ak�ll� saat-2 i�in
			    sepetsaat = 1324.50;
			    sepettel=0.00;
	            sepetpc=0.00;
	         	sepetyazici=0.00;
			    guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
	          	printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);}
				   
	          else if ( sepetsaat1 ==3) { //Ak�ll� saat-3 i�in
	          	sepetsaat = 850.00; 
	          	sepettel=0.00;
	         	sepetpc=0.00;
	         	sepetyazici=0.00;
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);	  }
				
		     else {
			printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN-ANA MENUYE YONLENDIRILIYORSUNUZ!\n\n"); break;	}
			//Ak�ll� saat se�imi yaparken hatal� giri� sonucu hata bildirisi verip tekrardan do�ru veri almak i�in ana men�ye y�nlendirilir.
	         
	         
	         printf(" 1-Sepete urun eklemeye devam edilsin mi?\n");
	         printf(" 2-Ana menuye don\n\n");
		     printf(" Yapmak istediginiz islem : ");
	         scanf("%d", &tercih5);
	         printf("\n\n");
	            if( tercih5== 2){	//Ana men�ye d�nmek i�in while(secim==2) d�ng�s�n� k�rar ve ana men�ye d�ner.
	                              break;}
	            else if(tercih5==1){  //Ba�ka �r�nleri sepete eklemek i�in i�inde oldu�u while(secim==2) d�ng�s�ne d�ner.
	        	                  continue;	} 
	            else {                                                                                            //Tan�mlanan say�lar harici say� giri�inde tekrar yap�lacak i�lemleri
			    	printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN !\n\n");break;	} // almak i�in break ile d�ng�y� k�rarak ana men�ye y�nlendirir.	
			    	
			} //ak�ll� saat kategorisi olan else if(secim2 ==2)'in parantezi
				
	    
	      else if( secim2 == 3 ) { //Yaz�c� kategorisinden sepete �r�n eklenmek istendi�inde
	       	printf("***********************************\n\n");
	        printf("Yazici kategorisinden hangisini sepete eklemek istersiniz ?\n");
	        printf(" 1| Yazici A   553.50 TL\n");
	        printf(" 2| Yazici B   848.20 TL\n");
		    printf(" 3| Yazici C   1433.33 TL\n\n");
		    printf("***********************************\n\n");
		    printf("Seciminiz : ");
	        scanf("%d", &sepetyazici1);
	        
	        if(sepetyazici1 == 1) { //Yaz�c� A i�in
	         	sepettel=0.00;
	         	sepetpc=0.00;
	         	sepetyazici=553.50;
	          	sepetsaat = 0.00; 
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);  } 
				  
	        else if( sepetyazici1==2) { //Yaz�c� B i�in
			    sepetsaat = 0.00;
			    sepettel=0.00;
	            sepetpc=0.00;
	         	sepetyazici=848.20;
			    guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
	          	printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);}
				   
	        else if( sepetyazici1 ==3) { //Yaz�c� C i�in
	          	sepetsaat = 0.00; 
	          	sepettel=0.00;
	         	sepetpc=0.00;
	         	sepetyazici=1433.33;
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);	  }
				
			else {
				printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN-ANA MENUYE YONLENDIRILIYORSUNUZ!\n\n"); break;	}
	           //Yaz�c� se�imi yaparken hatal� giri� sonucu hata bildirisi verip tekrardan do�ru veri almak i�in ana men�ye y�nlendirilir.
	         
	          
	         
	         printf(" 1-Sepete urun eklemeye devam edilsin mi?\n");
	         printf(" 2-Ana menuye don\n\n");
		     printf(" Yapmak istediginiz islem : ");
	         scanf("%d", &tercih6);
	         printf("\n\n");
	           if( tercih6== 2){ //Ana men�ye d�nmek i�in while(secim==2) d�ng�s�n� k�rar ve ana men�ye d�ner.
	                    break; }
	           else if(tercih6==1){  //Ba�ka �r�nleri sepete eklemek i�in i�inde oldu�u while(secim==2) d�ng�s�ne d�ner.
	                    continue;	}
	           else {                                                                                         //Tan�mlanan say�lar harici say� giri�inde tekrar yap�lacak i�lemleri
				printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN !\n\n");break;	} // almak i�in break ile d�ng�y� k�rarak ana men�ye y�nlendirir.	
			    	
	           
		} //yaz�c� kategorisi olan else if(secim2 ==3)'�n parantezi
	    
	    
	    
	     else if(secim2 ==4){ //Bilgisayar kategorisinden sepete �r�n eklenmek istendi�inde
	    	printf("***********************************\n\n");
	        printf("Bilgisayar kategorisinden hangisini sepete eklemek istersiniz ?\n");
	        printf(" 1| Bilgisayar X   14600.00 TL\n");
		    printf(" 2| Bilgisayar Y   12964.00 TL\n");
		    printf(" 3| Bilgisayar Z   22920.00 TL\n"); 
		    printf(" 4| Bilgisayar Q   36123.00 TL \n\n");
		    printf("***********************************\n\n");
		    printf("Seciminiz : ");
	        scanf("%d", &sepetpc1);
	         
	        if(sepetpc1 == 1) { //Bilgisayar X i�in
	         	sepettel=0.00;
	         	sepetpc=14600.00;
	         	sepetyazici=0.00;
	          	sepetsaat = 0.00; 
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);  } 
				  
	        else if( sepetpc1==2) { //Bilgisayar Y i�in
			    sepetsaat = 0.00;
			    sepettel=0.00;
	            sepetpc=12964.00;
	         	sepetyazici=0.00;
			    guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
	          	printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);}
	          	
	        else if( sepetpc1==3) { //Bilgisayar Z i�in
			    sepetsaat = 0.00;
			    sepettel=0.00;
	            sepetpc=22920.00;
	         	sepetyazici=0.00;
			    guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
	          	printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);}	
				   
	        else if( sepetpc1==4) { //Bilgisayar Q i�in
	          	sepetsaat = 0.00; 
	          	sepettel=0.00;
	         	sepetpc=36123.00;
	         	sepetyazici=0.00;
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Se�ilen �r�n�n fiyat de�eri toplam de�erinin i�ine at�l�r.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);	  }
				
			else {
				printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN-ANA MENUYE YONLENDIRILIYORSUNUZ!\n\n"); break;	}
				//Bilgisayar se�imi yaparken hatal� giri� sonucu hata bildirisi verip tekrardan do�ru veri almak i�in ana men�ye y�nlendirilir.
	         
	         printf(" 1-Sepete urun eklemeye devam edilsin mi?\n");
	         printf(" 2-Ana menuye don\n\n");
		     printf(" Yapmak istediginiz islem : ");
	         scanf("%d", &tercih7);
	         printf("\n\n");
	            if( tercih7== 2){	 //Ana men�ye d�nmek i�in while(secim==2) d�ng�s�n� k�rar ve ana men�ye d�ner.
	                        break; }
	            else if(tercih7==1) { //Ba�ka �r�nleri sepete eklemek i�in i�inde oldu�u while(secim==2) d�ng�s�ne d�ner.
	        	            continue;  }
	            else {                                                                                             //Tan�mlanan say�lar harici say� giri�inde tekrar yap�lacak i�lemleri
			       	printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN !\n\n");break;	}  // almak i�in break ile d�ng�y� k�rarak ana men�ye y�nlendirir.
	   	
	      }   //bilgisayar kategorisi olan else if(secim2 ==4)'�n parantezi
	           
	        else {                                                                                        //while(secim==2) d�ng�s�nde tan�mlanan de�erler d���nda bir veri girilirse
			   printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN !\n\n");	} //else i�ine girerek tekrardan tan�ml� bir de�er girmesini s�yler. Do�ru de�er
	                                                                                                      //girene kadar d�ng� devam eder.
	       } //�r�nleri sepete eklemek i�in yap�lan d�ng� olan while(secim ==2)'nin parantezi
	           
	           
	           
	    while(secim==3) { // sipari� tamamlama ve tutar� g�stermek i�in yap�lan d�ng�
	       	
	       	printf("\n\n");
	    	printf("    SIPARIS TAMAMLAMA \n  ");
	        printf("---------------------\n\n");
	        
	       	ucret = guncel; //Yukar�daki se�ilen �r�nler guncel'in i�ine aktar�lm��t�.Guncel de�eri bu sefer toplam tutar�m�z� yans�tan ucrete at�yoruz.
	            
	        printf(" Toplam sepet tutariniz : %.2f TL\n\n ", ucret);
	        printf("-------------------------------------\n");
	        	
	        	
	        printf("\n Ana menuye donmek icin 1'e tiklayin : ");
	        scanf("%d", &don);
	        printf("\n\n");
	         
	            if( don== 1){	//Ana men�ye d�nmek i�in i�inde bulundu�u while(secim==3) d�ng�s�n� k�rar
	                    break;  }  
	            else {
				    printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN !\n\n");	}
				    //Hatal� de�er girdi�inde ekrana bast�r�l�r ve do�ru de�er girilene kadar bu d�ng� devam eder.
				    
		} //while(secim==3)'�n parantezi [sepet tutar�]
	           
	           
	       if(secim==4) { //Program sonland�rma
	       	printf("\n\n");
	        printf("--------------------------------\n\n\n");
	        printf(" Iyi Gunler Dileriz :)\n");
	        printf(" Program sonlandiriliyor...");
	        printf("\n\n"); break; // while(1) d�ng�s�n� k�rmak i�in
			}    
		   
		   
		   //Ana men�de tan�mlanan de�er harici say� giri�i oldu�unda ekrana yans�t�l�r.Tekrardan Ana men�ye while(1) d�ng�s�n�n i�ine girerek yeniden se�im istenir.
		   else if(secim !=1 && secim !=2 && secim !=3 && secim !=4){                                    //else koyunca while (secim==3) d�ng�den ��karak else i�in giriyor
		   printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN !\n\n");	  }  //o y�zden else if ile teker teker yazd�m
			 
	       
	       } // while(1)'in parantezi
	
	
	


	return 0;
}
