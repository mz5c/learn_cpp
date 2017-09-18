#include <iostream>
using namespace std;

int pcount = 0;
void printRes(int a[],int n){
	    for(int i = 0; i < n; i++){
			        cout<<a[i]<<' ';
					    }
						    cout<<endl;
}
void dealNM(int n,int n1,int m,int a[],int ai,int sum){
	    for(int i = n1; i <= n; i++){
			        if(sum + i == m){
						            a[ai] = i;
									            pcount++;
												            printRes(a,ai+1);
															        }
																	        if(sum + i < m){
																				            sum += i;
																							            a[ai] = i;
																										            dealNM(n,i+1,m,a,ai+1,sum);
																													            sum -= i;
																																            a[ai] = 0;
																																			        }
																																					        if(sum + i > m){
																																								            break;
																																											        }
																																													    }
}
int main()
{
	    int n,m;
		    cout<<"input n m : ";
			    cin>>n>>m;
				    int a[10000] = {0};
					    dealNM(n,1,m,a,0,0);
						    cout<<"total num : "<<pcount<<endl;
							    cout << "Hello world!" << endl;
								    return 0;
}
