using namespace std;

int main(){
	
	int x,y;
	cout<<"==> PROGRAM MENGETAHUI KUADRAN SUATU KOORDINAT <=="<<endl;
	
	cout<<"Masukan Koordinat X = ";
	cin>>x;
	cout<<"Masukan Koordinat Y = ";
	cin>>y;
	{
	if (x>0 && y>0) //plus dan plus
		cout<<"KUADRAN I";
	if (x<0 && y>0) //plus dan minus
		cout<<"KUADRAN II";
	if (x<0 && y<0) //minus dan minus
		cout<<"KUADRAN III";
	if (x>0 && y<0) //minus dan plus
		cout<<"KUADRAN IV";
}
	return 0;
}
