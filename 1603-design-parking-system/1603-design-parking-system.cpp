class ParkingSystem {
public:
    int n =3;
    int res[3];
    ParkingSystem(int big, int medium, int small) {
        res[0] = big;
        res[1] = medium;
        res[2] = small;
    }
    
    bool addCar(int carType) {
        if(carType==1){
            if(res[0]>0){
                res[0]--;
                return true;
            }
            return false;
        }else if(carType==2){
                if(res[1]>0){
                res[1]--;
                return true;
            }
            return false;            
        }else{
            if(res[2]>0){
                res[2]--;
                return true;
            }
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */