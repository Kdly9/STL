#include <iostream>

using namespace std;
struct tree{
        float data;
    tree *l, *r;};
class der
{public:

        float data;
    tree *l, *r;

void push(tree *&t, float x)
{
    if(t == NULL)
    {
        t = new tree;
        t->data = x;
        t->l = t->r = NULL;
    }
  //  cout <<d->data<<endl;
   if(t->data > x) push(t->l,x);
   if(t->data < x) push(t->r,x);
   //cout <<(t->data)<<endl;}
    //if (float(t->data) == x){t->l = NULL; push(t->l,x);}


}

void sred(tree *d, float &s)
{
    int k = 0;
    if(d!=NULL)
    {
        s+=d->data;
        sred(d->l, s);
        k++;
        sred(d->r, s);
    }
}
};

int main()
{ setlocale(LC_ALL, "Rus");
 tree *t = NULL;
der m;
// t=m.perem();
    float N, x=0, s = 0, sr;
    cout << "Число узлов = "; cin >> N;
    for(int i = 1; i <= N; i++)
    {
        cin >> x;
     m.push(t,x);
    }

    m.sred(t,s);
    cout<<"Сумма = "<<s<<endl;
    sr = s/N;
    cout << sr<<endl;;
    m.push(t,sr);


    return 0;
}
