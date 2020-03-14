
#ifndef time_unit_conversions_h
#define time_unit_conversions_h


#endif /* time_unit_conversions_h */


double u_to_s(double microseconds){
    return microseconds/1000000;
}

double s_to_u(double seconds){
    return seconds*1000000;
}

double u_to_m(double microseconds){
    return microseconds/1000;
}

double m_to_u(double milliseconds){
    return milliseconds*1000;
}

double m_to_s(double milliseconds){
    return milliseconds/1000;
}

double s_to_m(double seconds){
    return seconds/1000;
}
