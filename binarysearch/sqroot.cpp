#include <iostream>
#include <cmath>

using namespace std;

int floorSqrt(int n) {
    if (n == 0 || n == 1) return n;

    int s = 0;
    int e = n;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        
        // Use long long to prevent overflow
        long long square = (long long)mid * mid;
        
        if (square == n) {
            return mid;
        }
        if (square < n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}
double moreprecise(int n ,int precison,int tempsol){
    double factor = 1;
    double ans = tempsol;
    for(int i =0;i<precison;i++){
        factor = factor/10;
        for(double j =ans;j*j<n;j=j+factor){//jab tak 6.x*6.x does not croos the original number it will iterate
            ans = j;
        }
    }return ans;
}

int main() {
    int n,k;
    cout << "Enter the number for which you want sqrt: ";
    cin >> n;
    cout<<"how much digits of precison u want";
    cin>>k;
    cout << "Floor of square root of " << n << " is: " << floorSqrt(n) << endl;
    ;
    cout<<"more precise solution is "<<moreprecise(n,k,floorSqrt(n))<<endl;
    return 0;
}