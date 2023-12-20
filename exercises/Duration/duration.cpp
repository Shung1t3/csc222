
#include "Duration.hpp"


Duration::Duration(){
    day = 0;
    hour = 0;
    minute = 0;
    second = 0;

};

Duration::Duration(int s){
    day = 0;
    hour = 0;
    minute = 0;
    second = s;

};

void Duration::convert(){
    day += second / 86400;
    second = second % 86400;
    hour += second / 3600;
    second = second % 3600;
    minute += second / 60;
    second = second % 60;
}

int Duration::days(){
    convert();

return day;

}

int Duration::hours(){
    convert();

return hour;

}

int Duration::minutes(){
    convert();

return minute;

}

int Duration::seconds(){
    convert();

return second;

}
int Duration::get_seconds()const{
    int temp = (86400*day)+(3600*hour)+(60*minute)+ second;
return temp;
}

std::string Duration::to_string(){
    convert();
    std::string finl = "P";
    if(day > 0){
        finl += std::to_string(day) + "D";
    };

    finl += "T";

    if(hour > 0){
        finl += std::to_string(hour) + "H";
    }

    if(minute > 0){
        finl += std::to_string(minute) + "M";

    }
    if (day == 0 && hour == 0 && minute == 0 && second == 0) {
        finl += "0S";
    }else if(second > 0){
        finl += std::to_string(second) + "S";

    }
    

return finl;
}

Duration Duration::operator + (const Duration& a){
    int s = get_seconds() + a.get_seconds();
    Duration temp = Duration(s);
    temp.convert();

return temp;
}

Duration Duration::operator - (const Duration& m){
    int s = get_seconds() - m.get_seconds();
    Duration temp = Duration(s);
    temp.convert();

return temp;
}

//giorno giovanna