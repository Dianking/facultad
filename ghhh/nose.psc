Proceso sin_titulo
	num1<- 5
	num2<-45
	num3<-2133
	Si num1 > num2 y num1 >num3  Entonces
		Si num2 >num3  Entonces
			num1 <- num1
			num2<- num2 
			num3<-num3 
		SiNo
			Si num2 < num3  Entonces
				num1 <- num1 
				aux <- num2
				num2 <- num3
				num3<- aux 
				
			Fin Si
		Fin Si
	SiNo
		
	
	Fin Si
FinProceso
