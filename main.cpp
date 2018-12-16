using namespace std;

int main(){
	
	int x,y;
	cout<<"==> PROGRAM MENGETAHUI KUADRAN SUATU KOORDINAT <=="<<endl;
	
	cout<<"Masukan Koordinat X = ";
	cin>>x;
	cout<<"Masukan Koordinat Y = ";
	cin>>y;
	{
	if (x>0 && y>0)
		cout<<"KUADRAN I";
	if (x<0 && y>0)
		cout<<"KUADRAN II";
	if (x<0 && y<0)
		cout<<"KUADRAN III";
	if (x>0 && y<0)
		cout<<"KUADRAN IV";
}
	return 0;
}
