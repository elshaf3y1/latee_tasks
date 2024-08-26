class PID {
private:
    float kp, ki, kd;
    float output;
    float setpoint;
    float lower_limit, upper_limit;
    
    // this variable is going to be used in the differential and the integral components
    float previous_time;

    // this variable is going to be used to get the differential component
    float previous_error;
public:

    // a function you will use in your implementation
    float map_to_limits(float value) {
        return  value < lower_limit ? lower_limit :
                value > upper_limit ? upper_limit :
                value;
    }
    
    // this function sets limits to the output of the pid controller
    void set_limits(float lower, float upper) {
        lower_limit = lower;
        upper_limit = upper;    
    }
    
    // this function sets the parameters used by the pid to tune the error
    void set_parameters(float _kp, float _ki, float _kd) {
        kp = _kp;
        ki = _ki;
        kd = _kd;
    }
    
    // the setpoint is what is used as input into the pid
    void update_setpoint(float _setpoint) {
        setpoint = _setpoint;
    }
    
    float get_output() {
        return output;
    }
    
    void compute_output(float feedback) {
        float current_error = setpoint-feedback;
        float current_time = millis();
        float p = kp*current_error; //proportional term
        float time_change = (millis()-current_time)/1000.0; 
        float d = kd*(current_error-previous_error)/time_change; //derivative term 
        float i = i + ki*current_error*time_change;//integral term 
        output = map_to_limits(p+d+i); //u(t)...pid output after checcking the limits.
        previous_time=current_time;
        previous_error = current_error;    
    }

};
