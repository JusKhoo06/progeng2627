#include <iostream>

bool leap_year(int year){
    bool ly;
    if( (year % 4) == 0){ 
        // if multiple of 4

        if( (year % 100) == 0){ 
            if ((year % 400) ==0 ){
                ly=true;
            }
            else{
                ly=false;    
            }

        }
        else{ 
            // if not multiple of 100
            // (but still multiple of 4)
            ly=true;
            // ...

        }
    }
    else{
        // if not multiple of 4
        ly=false;
    }

    // TODO: check whether the year is a leap year or not
    // store result in variable ly

    return ly;
    // we *do not print* anything in the function
}

void next_date(int d1, int m1, int y1){

    int d2, m2, y2;
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    if (((m1==1)&&(d1==31))||((m1==3)&&(d1==31))||((m1==4)&&(d1==30))||((m1==5)&&(d1==31))||((m1==6)&&(d1==30))||((m1==7)&&(d1==31))||((m1==8)&&(d1==31))||((m1==9)&&(d1==30))||((m1==10)&&(d1==31))||((m1==11)&&(d1==30))||((m1==12)&&(d1==31))||(leap_year(y1)&& d1==28 && m1==2)||(leap_year(y1)&& d1==29 && m1==2)||(!(leap_year(y1)) && (d1==28 && m1==2))){
        if ((m1==12)&&(d1==31)){
            d2=1;
            m2=1;
            y2=y1+1;
        }
        if (leap_year(y1)){
            if (d1==28 && m1==2){
                d2=29;
                m2=2;
                y2=y1;
            }
            if (d1==29 && m1==2){
                d2=1;
                m2=3;
                y2=y1;
            }
        }
        if (!leap_year(y1)){
            if (d1==28 && m1==2){
                d2=1;
                m2=3;
                y2=y1;
            }
        }
        if(((m1==1)&&(d1==31))||((m1==3)&&(d1==31))||((m1==4)&&(d1==30))||((m1==5)&&(d1==31))||((m1==6)&&(d1==30))||((m1==7)&&(d1==31))||((m1==8)&&(d1==31))||((m1==9)&&(d1==30))||((m1==10)&&(d1==31))||((m1==11)&&(d1==30))){
 
            d2=1;
            m2=m1+1;
            y2=y1;
        }
    }

    else{
        d2=d1+1;
        m2=m1;
        y2=y1;
    }

    std::cout << "Next date is (D/M/Y) " << d2 << " / " << m2 <<" / " << y2 ;





    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main(){

    next_date(15, 1, 2023);

}