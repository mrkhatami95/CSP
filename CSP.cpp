// CSP.cpp : Defines the entry point for the console application.
// Mohammad Reza
// Constraint satisfaction problems implementation using backtracking technique.

#include "stdafx.h"

#include "iostream"

using namespace std;

int o=-1,r=-1,w=-1,u=-1,t=-1,f=-1,x1=-1,x2=-1,x3=-1;

bool isSatisfied(){
	
	if(o > -1 && r > -1 && x1 > -1){
	
		if(o + o != r + (10 * x1))
			return false;
	}
	
	if(o > -1 && o == r)
		return false;
	
	if(o > -1 && o == w)
		return false;

	if(o > -1 && o == u)
		return false;

	if(o > -1 && o == t)
		return false;

	if(o > -1 && o == f)
		return false;

	if(f > -1 && x3 > -1){
	
		if(f != x3)
			return false;
	}

	if(r > -1 && r == w)
		return false;
	
	if(r > -1 && r == u)
		return false;

	if(r > -1 && r == t)
		return false;

	if(r > -1 && r == f)
		return false;

	if(x1 > -1 && w > -1 && u > -1 && x2 > -1){
		if(x1 + w + w != u + (10 * x2))
			return false;
	}
	
	if(w > -1 && w == u)
		return false;
	if(w > -1 && w == t)
		return false;
	if(w > -1 && w == f)
		return false;

	if(x2 > -1 && t > -1 && o > -1 && x3 > -1){
		if(x2 + t + t != o + (10 * x3))
			return false;
	}

	
	
	if(t  > -1 && t == f)
		return false;

	return true;
}

bool isComplete(){
	if( o > -1 && r > -1 && w > -1 && u > -1 && t > -1 && f > -1 && x1 > -1 && x2 > -1 && x3 > -1)
		return true;
	else
		return false;
}	
 
void main()
{



	for(int i = 0 ; i < 10 ; i++){
		o = i;
		
		for(int x = 0 ; x <= 1 ; x++){
			x1 = x;

			for(int y = 0 ; y <= 1 ; y++){
				x2 = y;

				for(int z = 0 ; z <= 1 ; z++){
					x3 = z;

					for(int j = 0 ; j < 10 ; j++){
							r = j;
		
						for(int k = 0 ; k < 10 ; k++){
							w = k;

							for(int q = 0 ; q < 10 ; q++){
								u = q;

								for(int e = 0 ; e < 10 ; e++){
									t = e;

									for(int h = 0 ; h < 10 ; h++){
										f = h;

										if(isSatisfied() && isComplete())
											cout << t << "," << w << "," << o << "=" << f << o << u << r << endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}	

	int i;
	cin >> i;

}

