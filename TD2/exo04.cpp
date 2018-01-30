int somme (int a) {
	if(a<10) return a;
	//if(a==0) return a; //prof
	return a%10 + somme(a/10);
}

int supersomme (int a) {
	int b = somme(a);
	if(b<10) return b;
	return supersomme(b);
}

int supersomme(int n) {
	if(n<10) return n;
	return supersomme(somme(n));
}