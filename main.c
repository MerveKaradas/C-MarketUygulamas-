
#include <stdio.h>
#include <stdlib.h>
	
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
	
	
		

	while(secim==1) { //Ürün ve fiyat sorgulaması için yapılan döngü

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
	
	    if ( secim1 == 1 ) { //Akıllı telefon fiyat sorgu
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
	      
	      
	    if( tercih== 2){ //Ana menüye dönmek için while(secim==1) döngüsünü kırar ve ana menüye döner.
	      	break;  }
	    else if(tercih==1) { //Başka ürünleri sorgulamak için içinde olduğu while(secim==1) döngüsüne döner.
	     	continue; }
	    else {                                                                                 //Tanımlanan sayılar harici sayı girişinde tekrar yapılacak işlemleri
	     	printf(" ! HATALI SAYI GIRISI-ANA MENUYE YONLENDIRILIYORSUNUZ.. ! \n");break;	 } // almak için break ile döngüyü kırarak ana menüye yönlendirir.

	  } // if(secim1==1) 'in parantezi
		
	
	    else if( secim1 == 2) {//Akıllı saat fiyat sorgu
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
	        if( tercih1== 2){ //Ana menüye dönmek için while(secim==1) döngüsünü kırar ve ana menüye döner.
	        	break;  }
	        else if(tercih1==1) { //Başka ürünleri sorgulamak için içinde olduğu while(secim==1) döngüsüne döner.
	        	continue;}
	        else {                                                                               //Tanımlanan sayılar harici sayı girişinde tekrar yapılacak işlemleri
	     	printf(" ! HATALI SAYI GIRISI-ANA MENUYE YONLENDIRILIYORSUNUZ.. ! \n");break;	 }	 // almak için break ile döngüyü kırarak ana menüye yönlendirir.
	        	
	        	
		}// else if(secim1==2)'in parantezi
	      
	      
	      
	   else if( secim1 == 3) {//Yazıcı fiyat sorgu
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
	       if( tercih2== 2){ //Ana menüye dönmek için while(secim==1) döngüsünü kırar ve ana menüye döner.
	      	break; }
	       else if(tercih2==1) { //Başka ürünleri sorgulamak için içinde olduğu while(secim==1) döngüsüne döner.
	        continue;}
	       else {                                                                               //Tanımlanan sayılar harici sayı girişinde tekrar yapılacak işlemleri
	     	printf(" ! HATALI SAYI GIRISI-ANA MENUYE YONLENDIRILIYORSUNUZ.. ! \n");break;	 }  // almak için break ile döngüyü kırarak ana menüye yönlendirir.
	        
		} //else if(secim1==3) 'ün parantezi
		  
	      
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
	       if( tercih3== 2){ //Ana menüye dönmek için while(secim==1) döngüsünü kırar ve ana menüye döner.
	      	break; }
	       else if(tercih3==1) { //Başka ürünleri sorgulamak için içinde olduğu while(secim==1) döngüsüne döner.
	        continue;}
	       else {                                                                              //Tanımlanan sayılar harici sayı girişinde tekrar yapılacak işlemleri
	     	printf(" ! HATALI SAYI GIRISI-ANA MENUYE YONLENDIRILIYORSUNUZ.. ! \n");break;	 } // almak için break ile döngüyü kırarak ana menüye yönlendirir.
	        
		} // else if(secim1==4) 'ün parantezi
		
		
		else{                                                                             //Ürün sorgulama ekranında hatalı giriş olduğunda ekrana hatalı girdiğini yazdırıp
		    printf("! BILINMEYEN SAYI GIRISI-TEKRAR TANIMLANAN BIR SAYI GIRINIZ !\n");	} //tekrardan bir sayı verisi aldırır.
	       
	       
	           } //while(secim==1)' in parantezi
	    
	

	
	    while(secim ==2) {  //Ürünleri sepete eklemek için yapılan döngü
	           
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
	    
	    
	    if( secim2 == 1) { //Telefon kategorisinden sepete ürün eklenmek istendiğinde
	         printf("***********************************\n\n");
	         printf("Akilli telefon kategorisinden hangisini sepete eklemek istersiniz ?\n");
             printf(" 1| Akilli telefon-1   1500.00 TL\n");
		     printf(" 2| Akilli telefon-2   2750.00 TL\n");
		     printf(" 3| Akilli telefon-3   8832.00 TL\n\n");
	         printf("***********************************\n\n");
	         printf("Seciminiz : ");
	         scanf("%d", &sepettel1);
	         
	          if( sepettel1 ==1) { //Akıllı telefon-1 için
	          	sepettel = 1500.00; 
                sepetsaat=0.00;
	          	sepetpc=0.00;
	          	sepetyazici=0.00;
	          	guncel=0.00;
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);  } 
				  
	          else if( sepettel1 ==2) { //Akıllı telefon-2 için
			    sepettel = 2750.00;
			    sepetsaat=0.00;
	          	sepetpc=0.00;
	          	sepetyazici=0.00;
			    guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
	          	printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel); }
				   
	          else if( sepettel1 ==3)  { //Akıllı telefon-3 için
	          	sepettel = 8832.00; 
	          	sepetsaat=0.00;
	          	sepetpc=0.00;
	          	sepetyazici=0.00;
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);	  }
				
			  else {  
				printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN-ANA MENUYE YONLENDIRILIYORSUNUZ!\n\n"); break;	}
				 //Telefon seçimi yaparken hatalı giriş sonucu hata bildirisi verip tekrardan doğru veri almak için ana menüye yönlendirilir.
			  
			  
	         printf(" 1-Sepete urun eklemeye devam edilsin mi?\n");
	         printf(" 2-Ana menuye don\n\n");
		     printf(" Yapmak istediginiz islem : ");
	         scanf("%d", &tercih4);
	         printf("\n\n");
	         
	            if( tercih4== 2){ //Ana menüye dönmek için while(secim==2) döngüsünü kırar ve ana menüye döner.
				            break;	 } 
	            else if(tercih4==1) { //Başka ürünleri sepete eklemek için içinde olduğu while(secim==2) döngüsüne döner.
	          	            continue;}
	            else {                                                                                //Tanımlanan sayılar harici sayı girişinde tekrar yapılacak işlemleri
			         printf(" ! HATALI SAYI GIRISI-ANA MENUYE YONLENDIRILIYORSUNUZ.. ! \n");break;	} // almak için break ile döngüyü kırarak ana menüye yönlendirir.
		        
	         } //telefon kategorisi olan if(secim2 ==1)'in parantezi
	     
	    
	      else if ( secim2 ==2 ) { //Akıllı saat kategorisinden sepete ürün eklenmek istendiğinde
	    	 printf("***********************************\n\n");
	         printf("Akilli saat kategorisinden hangisini sepete eklemek istersiniz ?\n");
	         printf(" 1| Akilli saat-1   543.99 TL\n");
		     printf(" 2| Akilli saat-2   1324.50 TL\n");
		     printf(" 3| Akilli saat-3   850.00 TL\n\n");
		     printf("***********************************\n\n");
		     printf("Seciminiz : ");
	         scanf("%d", &sepetsaat1);
	        
	         if(sepetsaat1 == 1) { //Akıllı saat-1 için
	         	sepettel=0.00;
	         	sepetpc=0.00;
	         	sepetyazici=0.00;
	          	sepetsaat = 543.99; 
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);  } 
				  
	         else if( sepetsaat1==2) { //Akıllı saat-2 için
			    sepetsaat = 1324.50;
			    sepettel=0.00;
	            sepetpc=0.00;
	         	sepetyazici=0.00;
			    guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
	          	printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);}
				   
	          else if ( sepetsaat1 ==3) { //Akıllı saat-3 için
	          	sepetsaat = 850.00; 
	          	sepettel=0.00;
	         	sepetpc=0.00;
	         	sepetyazici=0.00;
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);	  }
				
		     else {
			printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN-ANA MENUYE YONLENDIRILIYORSUNUZ!\n\n"); break;	}
			//Akıllı saat seçimi yaparken hatalı giriş sonucu hata bildirisi verip tekrardan doğru veri almak için ana menüye yönlendirilir.
	         
	         
	         printf(" 1-Sepete urun eklemeye devam edilsin mi?\n");
	         printf(" 2-Ana menuye don\n\n");
		     printf(" Yapmak istediginiz islem : ");
	         scanf("%d", &tercih5);
	         printf("\n\n");
	            if( tercih5== 2){	//Ana menüye dönmek için while(secim==2) döngüsünü kırar ve ana menüye döner.
	                              break;}
	            else if(tercih5==1){  //Başka ürünleri sepete eklemek için içinde olduğu while(secim==2) döngüsüne döner.
	        	                  continue;	} 
	            else {                                                                                            //Tanımlanan sayılar harici sayı girişinde tekrar yapılacak işlemleri
			    	printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN !\n\n");break;	} // almak için break ile döngüyü kırarak ana menüye yönlendirir.	
			    	
			} //akıllı saat kategorisi olan else if(secim2 ==2)'in parantezi
				
	    
	      else if( secim2 == 3 ) { //Yazıcı kategorisinden sepete ürün eklenmek istendiğinde
	       	printf("***********************************\n\n");
	        printf("Yazici kategorisinden hangisini sepete eklemek istersiniz ?\n");
	        printf(" 1| Yazici A   553.50 TL\n");
	        printf(" 2| Yazici B   848.20 TL\n");
		    printf(" 3| Yazici C   1433.33 TL\n\n");
		    printf("***********************************\n\n");
		    printf("Seciminiz : ");
	        scanf("%d", &sepetyazici1);
	        
	        if(sepetyazici1 == 1) { //Yazıcı A için
	         	sepettel=0.00;
	         	sepetpc=0.00;
	         	sepetyazici=553.50;
	          	sepetsaat = 0.00; 
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);  } 
				  
	        else if( sepetyazici1==2) { //Yazıcı B için
			    sepetsaat = 0.00;
			    sepettel=0.00;
	            sepetpc=0.00;
	         	sepetyazici=848.20;
			    guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
	          	printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);}
				   
	        else if( sepetyazici1 ==3) { //Yazıcı C için
	          	sepetsaat = 0.00; 
	          	sepettel=0.00;
	         	sepetpc=0.00;
	         	sepetyazici=1433.33;
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);	  }
				
			else {
				printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN-ANA MENUYE YONLENDIRILIYORSUNUZ!\n\n"); break;	}
	           //Yazıcı seçimi yaparken hatalı giriş sonucu hata bildirisi verip tekrardan doğru veri almak için ana menüye yönlendirilir.
	         
	          
	         
	         printf(" 1-Sepete urun eklemeye devam edilsin mi?\n");
	         printf(" 2-Ana menuye don\n\n");
		     printf(" Yapmak istediginiz islem : ");
	         scanf("%d", &tercih6);
	         printf("\n\n");
	           if( tercih6== 2){ //Ana menüye dönmek için while(secim==2) döngüsünü kırar ve ana menüye döner.
	                    break; }
	           else if(tercih6==1){  //Başka ürünleri sepete eklemek için içinde olduğu while(secim==2) döngüsüne döner.
	                    continue;	}
	           else {                                                                                         //Tanımlanan sayılar harici sayı girişinde tekrar yapılacak işlemleri
				printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN !\n\n");break;	} // almak için break ile döngüyü kırarak ana menüye yönlendirir.	
			    	
	           
		} //yazıcı kategorisi olan else if(secim2 ==3)'ün parantezi
	    
	    
	    
	     else if(secim2 ==4){ //Bilgisayar kategorisinden sepete ürün eklenmek istendiğinde
	    	printf("***********************************\n\n");
	        printf("Bilgisayar kategorisinden hangisini sepete eklemek istersiniz ?\n");
	        printf(" 1| Bilgisayar X   14600.00 TL\n");
		    printf(" 2| Bilgisayar Y   12964.00 TL\n");
		    printf(" 3| Bilgisayar Z   22920.00 TL\n"); 
		    printf(" 4| Bilgisayar Q   36123.00 TL \n\n");
		    printf("***********************************\n\n");
		    printf("Seciminiz : ");
	        scanf("%d", &sepetpc1);
	         
	        if(sepetpc1 == 1) { //Bilgisayar X için
	         	sepettel=0.00;
	         	sepetpc=14600.00;
	         	sepetyazici=0.00;
	          	sepetsaat = 0.00; 
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);  } 
				  
	        else if( sepetpc1==2) { //Bilgisayar Y için
			    sepetsaat = 0.00;
			    sepettel=0.00;
	            sepetpc=12964.00;
	         	sepetyazici=0.00;
			    guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
	          	printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);}
	          	
	        else if( sepetpc1==3) { //Bilgisayar Z için
			    sepetsaat = 0.00;
			    sepettel=0.00;
	            sepetpc=22920.00;
	         	sepetyazici=0.00;
			    guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
	          	printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);}	
				   
	        else if( sepetpc1==4) { //Bilgisayar Q için
	          	sepetsaat = 0.00; 
	          	sepettel=0.00;
	         	sepetpc=36123.00;
	         	sepetyazici=0.00;
	          	guncel = guncel +sepettel + sepetpc + sepetsaat + sepetyazici; //Seçilen ürünün fiyat değeri toplam değerinin içine atılır.
				printf("Toplam Sepet Tutariniz : %.2f TL\n\n", guncel);	  }
				
			else {
				printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN-ANA MENUYE YONLENDIRILIYORSUNUZ!\n\n"); break;	}
				//Bilgisayar seçimi yaparken hatalı giriş sonucu hata bildirisi verip tekrardan doğru veri almak için ana menüye yönlendirilir.
	         
	         printf(" 1-Sepete urun eklemeye devam edilsin mi?\n");
	         printf(" 2-Ana menuye don\n\n");
		     printf(" Yapmak istediginiz islem : ");
	         scanf("%d", &tercih7);
	         printf("\n\n");
	            if( tercih7== 2){	 //Ana menüye dönmek için while(secim==2) döngüsünü kırar ve ana menüye döner.
	                        break; }
	            else if(tercih7==1) { //Başka ürünleri sepete eklemek için içinde olduğu while(secim==2) döngüsüne döner.
	        	            continue;  }
	            else {                                                                                             //Tanımlanan sayılar harici sayı girişinde tekrar yapılacak işlemleri
			       	printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN !\n\n");break;	}  // almak için break ile döngüyü kırarak ana menüye yönlendirir.
	   	
	      }   //bilgisayar kategorisi olan else if(secim2 ==4)'ün parantezi
	           
	        else {                                                                                        //while(secim==2) döngüsünde tanımlanan değerler dışında bir veri girilirse
			   printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN !\n\n");	} //else içine girerek tekrardan tanımlı bir değer girmesini söyler. Doğru değer
	                                                                                                      //girene kadar döngü devam eder.
	       } //ürünleri sepete eklemek için yapılan döngü olan while(secim ==2)'nin parantezi
	           
	           
	           
	    while(secim==3) { // sipariş tamamlama ve tutarı göstermek için yapılan döngü
	       	
	       	printf("\n\n");
	    	printf("    SIPARIS TAMAMLAMA \n  ");
	        printf("---------------------\n\n");
	        
	       	ucret = guncel; //Yukarıdaki seçilen ürünler guncel'in içine aktarılmıştı.Guncel değeri bu sefer toplam tutarımızı yansıtan ucrete atıyoruz.
	            
	        printf(" Toplam sepet tutariniz : %.2f TL\n\n ", ucret);
	        printf("-------------------------------------\n");
	        	
	        	
	        printf("\n Ana menuye donmek icin 1'e tiklayin : ");
	        scanf("%d", &don);
	        printf("\n\n");
	         
	            if( don== 1){	//Ana menüye dönmek için içinde bulunduğu while(secim==3) döngüsünü kırar
	                    break;  }  
	            else {
				    printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN !\n\n");	}
				    //Hatalı değer girdiğinde ekrana bastırılır ve doğru değer girilene kadar bu döngü devam eder.
				    
		} //while(secim==3)'ün parantezi [sepet tutarı]
	           
	           
	       if(secim==4) { //Program sonlandırma
	       	printf("\n\n");
	        printf("--------------------------------\n\n\n");
	        printf(" Iyi Gunler Dileriz :)\n");
	        printf(" Program sonlandiriliyor...");
	        printf("\n\n"); break; // while(1) döngüsünü kırmak için
			}    
		   
		   
		   //Ana menüde tanımlanan değer harici sayı girişi olduğunda ekrana yansıtılır.Tekrardan Ana menüye while(1) döngüsünün içine girerek yeniden seçim istenir.
		   else if(secim !=1 && secim !=2 && secim !=3 && secim !=4){                                    //else koyunca while (secim==3) döngüden çıkarak else için giriyor
		   printf("\n ! BILINMEYEN SAYI GIRISI-LUTFEN TANIMLANAN SAYILARDAN GIRIS YAPIN !\n\n");	  }  //o yüzden else if ile teker teker yazdım
			 
	       
	       } // while(1)'in parantezi
	
	
	


	return 0;
}
