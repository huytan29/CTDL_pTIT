#include <bits/stdc++.h>
struct Student{
	char Ten[30];
	int MaSV;
};
 
struct SV{
	Student s;
	SV *next;
};
typedef struct SV* sv;
sv makeNode(){
	Student s;
	cin.getline(s.Ten,30);
    cin>>s.MaSV;
    cin.ignore();
	sv tmp = new SV();
	tmp->s = s;
	tmp->next = NULL;
	return tmp;
}
void insertLast(sv &a){
	sv tmp = makeNode();
	if(a == NULL){
		a = tmp;
	}
	else{
		sv p = a;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = tmp;
	}
}
 
void in(Student s){
	cout << s.Ten << endl;
    cout<<s.MaSV<<endl;
}
void in2(Student s){
	cout << s.Ten << endl;
} 
void inds(sv a){
	while(a != NULL){
		in(a->s);
		a = a->next;
	}
	cout << endl;
}
void inds2(sv a){
	while(a != NULL){
		in2(a->s);
		a = a->next;
	}
	cout << endl;
}
int main(){
	sv head = NULL;
	for(int i=1;i<=10; i++)
    {
        insertLast(head);
    }
    cout<<"DANH SACH SV: "<<endl;
    inds(head);
    cout<<"DANH SACH TEN SV: "<<endl;
    inds2(head);
	return 0;
}