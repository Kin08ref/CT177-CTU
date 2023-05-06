void inDaThuc(DaThuc d){
	Position p=d;
	while(p->Next!=NULL){
		if (p->Next->Next==NULL)
			printf("%.3fX^%d",p->Next->e.he_so,p->Next->e.bac);
		else
			printf("%.3fX^%d + ",p->Next->e.he_so,p->Next->e.bac);
		p=p->Next;	
	}
	printf("\n");
}
DaThuc tinhDaoHam(DaThuc D){
	DaThuc dt;
	DonThuc e;
	dt=khoitao();
	Position p=D;
	while(p->Next!=NULL){
		e=p->Next->e;
		e.he_so *= e.bac;
		e.bac--;
		chenDonThuc(e,&dt);
		p=p->Next;
	}
	return dt;
}
DaThuc nhanDaThuc(DaThuc D1, DaThuc D2){
	DaThuc d;
	DonThuc e,temp;
	d=khoitao();
	Position q,p;
	p=D1;
	while (p->Next!=NULL){
		e=p->Next->e;
		q=D2;
		while (q->Next!=NULL){
			temp.he_so = e.he_so * q->Next->e.he_so;
			temp.bac = e.bac + q->Next->e.bac;
			chenDonThuc(temp,&d);
			q=q->Next;
		}	
		p=p->Next;
	}
	return d;
}

