int ktDay(NganXep S){
	return S.Dinh==0;
}




#define Maxlength 100
typedef int ElementType;
typedef struct {
    ElementType DuLieu[Maxlength];
    int Dinh;
}NganXep;




void khoitao(NganXep *pS){
	pS->Dinh=SoPhanTu;
}




void xoa(NganXep *pS){
	if ( pS->Dinh!=SoPhanTu )
		pS->Dinh++;
}




void them (int x,NganXep *pS){
	if ( pS->Dinh!=0 ){
		pS->Dinh--;
		pS->DuLieu[pS->Dinh]=x;
	}
}




int giatriDinh(NganXep S){
	return S.DuLieu[S.Dinh];
}





void hienthi(NganXep *pS){
	while ( pS->Dinh!=SoPhanTu ){
		printf("%d ", pS->DuLieu[pS->Dinh]);
		xoa(pS);
	}
}






