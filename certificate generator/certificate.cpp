#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

/*
void create_file(){
	fstream fout;
  
    // opens an existing csv file or creates a new file.
    fout.open("mak-certificate.txt", ios::out | ios::app);
    cout << "Enter names of 4 students for certificate";
 
    string name;
  
    // Read the input
    for (int i = 0; i < 4; i++) {
  
        cin>>name;
         // Insert the data to file
        fout<<name<<",";
    }
    fout.close();
} */

void generate_certificate(){
	 fstream fin;
	 fin.open("make-certificate.txt", ios::in);
	vector<string> n;
	 
      string tp,name="";
      int i=0;
      while(getline(fin, tp)); //read data from file object and put it into string.
for(int i=0;i<tp.length();i++){

	if(tp[i]!=',')
	name+=tp[i];
	else{
	n.push_back(name);
	name="";
}
}

for(int i=0;i<n.size();i++){
	std::string filename = n[i]+ ".txt";
   // std::ofstream file(filename);
    //file << student[i];
    
      fstream fout;
      
      fout.open(filename.c_str(), ios::out | ios::app);
		fout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -";
	fout<<endl;
	fout<<"\t\tCertificate of Completion"<<endl;
		fout<<"\t\t   - - - - - - - - - - - - - - - - - -"<<endl;
		fout<<"\n\n\t This is to certify that "<<n[i]<<" has successfully completed\n\t\t the course in Micro Biology."<<endl;
		fout<<"\n\n\n";
	fout<<"\n\n ________________ "<<"\t\t\t"<<" ________________"<<endl;
	fout<<"  Signature of Instructor"<<"\t\t\t"<<" Signature of HOD"<<endl;
	fout<<"\n\n";
	fout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
		
	
		
}

 
		    fin.close();

}



int main(){
	//	create_file(); already file is created 
        generate_certificate();
        cout<<"Your certificates are generated, Kindly check in your system";
        cout<<endl<<"Visit Again";
	return 0;
}
