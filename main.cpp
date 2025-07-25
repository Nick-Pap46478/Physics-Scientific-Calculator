/*
This is a Astronautical Calculator Programme which is the only one in its kind
because it is an all in one programme as it includes a lot of advanced equations
that you can choose from in two clicks without that much effort.
You choose the calculation you are struggling doing with pencil and paper, input the
variables and in a few milliseconds your problem will be solved.
C Copyright Nick Pap 2025||All Rights Reserved
// 2
*/
#include <iostream> // 1
#include <math.h>
#include <cmath>
#include <iostream>
#include <limits> // 2
#include <string.h> // $
#include <string> // @
#include <io.h> // ?
#include <fcntl.h> // ?
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <windows.h>
#ifndef _O_U16TEXT // ?
#define _O_U16TEXT 0x00020000 // ?
#endif // ?
using namespace std;
const long double Inf = numeric_limits<long double>::infinity(); // 2
const long double G = 6.6743*pow(10,-11); // 2 6.674=>6.6743 +1 digit +3
const long double e = 2.718281;
const long double PI = 3.141592;
 using namespace std;
 void Credits () { // $
   system("cls");
 wcout<<L"                                                C Copyright Nick Pap 2025||All Rights Reserved"<<endl;
 } // @
 void visviva() {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 wcout <<"Mass of the Center Body in Kilograms (M):" <<endl; // 2 Body oxi Object
 long double Mass;
 cin >> Mass;
 wcout <<"Distance Center-Center between the Center Body and the Satellite in meters (r):" <<endl; // 2 Body oxi Object
 long double r;
 cin >> r;
 wcout <<"Semi-Major Axis in meters (a):" <<endl;
 long double a;
 cin >> a;
 long double localvariable = G;
 long double V = sqrt(localvariable*Mass*(2/r-1/a));
 long double result = V;
 wcout<<L"G=";wcout<<localvariable;wcout<<"Nm^2/Kg^2"; wcout<<"    ---"<<endl; // 26-29
 wcout<<L"                             |=>GM=μ"<<endl;
 wcout<<"M=";wcout<<Mass;wcout<<"Kg";wcout<<"---"<<endl;
 wcout<<"r=";wcout<<r;wcout<<"m"<<endl;
 wcout<<"a=";wcout<<a;wcout<<"m"<<endl;
 wcout<<"V=sqrt(G×M×(2/r-1/a))=>"<<endl;
 wcout<<"V=sqrt(";wcout<<G;wcout<<L"×";wcout<<Mass;wcout<<L"×(2/";wcout<<r;wcout<<"-1/";wcout<<a;wcout<<"))";wcout<<"=>"<<endl;
 wcout<<"V=";wcout<<result;wcout<<"m/s"<<endl;

 }
 void CircularSatelliteSpeed() {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 wcout <<"Mass of the Center Body in Kilograms (M):" <<endl; // 2 Body oxi Object
 long double Mass;
 cin >> Mass;
 wcout <<"Distance Center-Center between the Center Body and the Satellite in meters (r_cs):" <<endl; // 2 Body oxi Object
 long double r;
 cin >> r;
 long double localvariable = G;
 long double V = sqrt(localvariable*Mass/r);
 long double result = V;
 wcout<<"G=";wcout<<localvariable;wcout<<"Nm^2/Kg^2"; wcout<<"    ---"<<endl;
 wcout<<L"                             |=>GM=μ"<<endl;
 wcout<<"M=";wcout<<Mass;wcout<<"Kg";wcout<<"    ---"<<endl;
 wcout<<"r_cs=";wcout<<r;wcout<<"m"<<endl;
 wcout<<"V_cs=sqrt(μ/r_cs)" <<"=>"<<endl;
 wcout<<"V_esc=sqrt("<<G<<L"×"<<Mass<<"/"<<r<<")"<<"=>"<<endl;
 wcout<<"V_cs=";wcout<<result;wcout<<"m/s"<<endl;
 }
 void EscapeVelocity() {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 wcout <<"Mass of the Center Body in Kilograms (M):" <<endl; // 2 Body oxi Object
 long double Mass;
 cin >> Mass;
 wcout <<"Distance Center-Center between the Center Body and the Satellite in meters (r):" <<endl; // 2 Body oxi Object
 long double r;
 cin >> r;
 long double localvariable = G;
 long double V = sqrt(localvariable*2*Mass/r);
 long double result = V;
 wcout<<"G=";wcout<<localvariable;wcout<<"Nm^2/Kg^2"; wcout<<"    ---"<<endl;
 wcout<<L"                             |=>GM=μ"<<endl;
 wcout<<"M=";wcout<<Mass;wcout<<"Kg";wcout<<"    ---"<<endl;
 wcout<<"r=";wcout<<r;wcout<<"m"<<endl;
 wcout<<L"V_esc=sqrt(2μ/r)"<<"=>"<<endl;
 wcout<<L"V_esc=sqrt(2"<<G<<L"×"<<Mass<<"/"<<r<<")"<<"=>"<<endl;
 wcout<<"V_esc=";wcout<<result;wcout<<"m/s"<<endl;
 }
 void BurnTimeOfTsiolkovskyEquation() {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 wcout<<"Stating Mass in kg (m_0):";
 long double mzero;
 cin >> mzero;
 wcout <<L"Rate Of Fuel Consumption in Kg/S (m•):";
 long double mdot;
 cin >> mdot;
 wcout <<"Initial Velocity in m/s (U_start):";
 long double Ustart;
 cin>>Ustart;
 wcout <<"Desirable Velocity in m/s (V):";
 long double V;
 cin >> V;
 wcout << L"Angle Of Desirable Velocity Vector in degrees or rad (β):";
 long double b;
 cin >> b;
 wcout << L"Angle Of Initial Velocity Vector in degrees or rad (α):";
 long double a;
 cin >> a;
 wcout << "Specific Impulse in s (I_sp):";
 long double Isp;
 cin >> Isp;
 wcout << "Gravity Acceleration im m/s^2 (g_0):";
 long double g;
 cin >> g;
 long double localvar = e;
 long double Ue = g*Isp;
  long double localpi = PI;
 long double theta = b-a;
 long double tburn = mzero/mdot*(1-pow(localvar, -(sqrt(pow(Ustart, 2)+pow(V, 2)-2*Ustart*V*cos(theta*localpi/180))/Ue))); // ? // Made PI to localpi
 long double result = tburn;
 wcout <<L"m_0="<<mzero<<"kg"<<endl;
 wcout <<L"m•="<<mdot<<"kg/s"<<endl;
 wcout <<"U_start="<<Ustart<<"m/s"<<endl;
 wcout <<"V="<<V<<"m/s"<<endl;
 wcout <<L"β="<<b<<endl;
 wcout <<L"α="<<a<<endl;
 wcout <<"I_sp="<<Isp<<"s"<<endl;
 wcout <<"g_0="<<g<<"m/s^2"<<endl;
 wcout <<"U_e="<<Isp*g<<"m/s"<<endl;
 wcout <<L"t_burn=m_0/m•×(1-e^-(sqrt(U_start^2+V^2-2×U_start×V×cos(|β-α|))/Ue))=>"<<endl;
 wcout <<L"t_burn="<<mzero<<"/"<<mdot<<L"×(1-"<<e<<"^"<<"-(sqrt("<<Ustart<<"^2+"<<V<<L"^2-2×"<<Ustart<<L"×"<<V<<L"×"<<"cos(|"<<b<<"-"<<a<<"))/"<<Ue<<"))=>"<<endl;
 wcout <<"t_burn="<<result<<"s"<<endl;
 }
 void DeflectionAngleEquation() {wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
    wcout << "Current Velocity in m/s (V):";
    long double V;
    cin >> V;
    wcout << "Escape Velocity in m/s (V_esc):";
    long double Vesc;
    cin >> Vesc;
    long double localPI = PI;
    long double arcsine = 1/(2*(V*V/Vesc*Vesc)-1);
    long double delta = 2*asin(arcsine*PI/180);
    long double result = delta;
    wcout<<L"δ=2Xarcsin[1/2(VXV/V_escXV_esc)-1]=>"<<endl;
    wcout<<L"δ=2Χarcsin[1/2("<<V<<"X"<<V<<"/"<<Vesc<<"X"<<Vesc<<"-1=>"<<endl;
    wcout <<L"δ="<<result<<L"°"<<endl;
 }
 void HohmannTransferOrbit() {wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 wcout <<"Mass of the Center Body in Kilograms (M):" <<endl; // 2 Body oxi Object
 long double Mass;
 cin >> Mass;
 wcout <<"Distance Center-Center between the Center Body and the Satellite in meters (r_1):" <<endl; // 2 Body oxi Object
 long double r;
 cin >> r;
 cout <<"Desirable Semi-Major Axis in meters (a_transfer):" <<endl;
 long double atransfer;
 cin >> atransfer;
 long double localvariable = G;
 long double Vptransfer = sqrt(localvariable*Mass*(2/r-1/atransfer));
 long double result = Vptransfer;
 wcout<<"G=";cout<<localvariable;cout<<"Nm^2/Kg^2"; cout<<"    ---"<<endl;
 wcout<<L"                                           |=>GM=μ"<<endl;
 wcout<<"M=";cout<<Mass;cout<<"Kg";cout<<"    ---"<<endl;
 wcout<<"r_1=";cout<<r;cout<<"m"<<endl;
 wcout<<"a_transfer=";cout<<atransfer;cout<<"m"<<endl;
 wcout<<L"V_p,transfer=sqrt(G×M×(2/r_1-1/a_transfer))=>"<<endl;
 wcout<<L"V_p,transfer=sqrt(";cout<<G;cout<<L"×";cout<<Mass;cout<<L"×(2/";cout<<r;cout<<"-1/";cout<<atransfer;cout<<"))";cout<<"=>"<<endl;
 wcout<<"V_p,transfer=";cout<<result;cout<<"m/s"<<endl;
 }
 void CalculationOfStartingPointOfCenterBodyToArriveAtTheDesirablePointOfItsOrbitInADesirableTime() { // 2
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
    wcout <<L"Angle Velocity in degrees/s (ω):";
    long double omega;
    cin >> omega;
    wcout <<L"Time Of Flight in d (X):";
    long double TOF;
    cin >> TOF;
    long double fi = omega*TOF;
    long double result = fi;
    wcout <<L"Φ=ωXX=>"<<endl;
    wcout <<L"Φ="<<omega<<L"X"<<TOF<<"=>"<<endl;
    wcout <<L"Φ="<<result<<L"°"<<endl;
    }
    void TheTwoBodyProblem() { // 2
      wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
    wcout<<"Mass of Body i which is the Body that the forces apply to in kg (m_i):";
    long double mi;
    cin >> mi;
    wcout<<"Mass of Body j which is the Body that apply forces in kg (m_j):";
    long double mj;
    cin >> mj;
    wcout<<"Point of i Body in X axis in Coordinates (X_i):";
    long double Xi;
    cin >> Xi;
    wcout<<"Point of j Body in X axis in Coordinates (X_j):";
    long double Xj;
    cin >> Xj;
    wcout<<"Point of i Body in y axis in Coordinates (y_i):";
    long double yi;
    cin >> yi;
    wcout<<"Point of j Body in y axis in Coordinates (y_j):";
    long double yj;
    cin >> yj;
    wcout<<"Point of i Body in Z axis in Coordinates (Z_i):";
    long double Zi;
    cin >> Zi;
    wcout<<"Point of j Body in Z axis in Coordinates (Z_j):";
    long double Zj;
    cin >> Zj;
    wcout<<"Drag Force applying to Body i in X axis in N Coordinates (F_DragX):";
    long double FDragX;
    cin >> FDragX;
    wcout<<" Drag Force applying to Body i in y axis in N Coordinates (F_Dragy):";
    long double FDragy;
    cin >> FDragy;
    wcout<<" Drag Force applying to Body i in Z axis in N Coordinates (F_DragZ):";
    long double FDragZ;
    cin >> FDragZ;
                      wcout<<"Thrust Force applying to Body i in X axis in N Coordinates (F_ThrustX):";
                         long double FThrustX;
                              cin >> FThrustX;
                              wcout<<" Thrust Force applying to Body i in y axis in N Coordinates (F_Thrusty):";
                                  long double FThrusty;
                                   cin >> FThrusty;
                                wcout<<" Thrust Force applying to Body i in Z axis in N Coordinates (F_ThrustZ):";
                                     long double FThrustZ;
                                      cin >> FThrustZ;
                                                                                     wcout<<"Magnetic Force applying to Body i in X axis in N Coordinates (F_MagX):";
                                                                                   long double FMagX;
                                                                                         cin >> FMagX;
                                                                                  wcout<<" Magnetic Force applying to Body i in y axis in N Coordinates (F_Magy):";
                                                                                   long double FMagy;
                                                                                         cin >> FMagy;
                                                                                 wcout<<" Magnetic Force applying to Body i in Z axis in N Coordinates (F_MagZ):";
                                                                                             long double FMagZ;
                                                                                              cin >> FMagZ;
wcout<<" Perturb Force applying to Body i in X axis in N Coordinates (F_PerturbX):";
long double FPerturbX;
cin >> FPerturbX;
wcout<<" Perturb Force applying to Body i in y axis in N Coordinates (F_Perturby):";
long double FPerturby;
cin >> FPerturby;
wcout<<" Perturb Force applying to Body i in Z axis in N Coordinates (F_PerturbZ):";
long double FPerturbZ;
cin >> FPerturbZ;
                          wcout<<" Solar Pressure Force applying to Body i in X axis in N Coordinates (F_Solar PressureX):";
                         long double FSolarPressureX;
                           cin >> FSolarPressureX;
                             wcout<<" Solar Pressure Force applying to Body i in y axis in N Coordinates (F_Solar Pressurey):";
                                       long double FSolarPressurey;
                                         cin >> FSolarPressurey;
                                        wcout<<" Solar Pressure Force applying to Body i in Z axis in N Coordinates (F_Solar PressureZ):";
                                            long double FSolarPressureZ;
                                            cin >> FSolarPressureZ;
                                            wcout<<" Any other Force applying to Body i in X axis in N Coordinates (F_otherfsX):";
                         long double FotherfsX;
                           cin >> FotherfsX;
                             wcout<<" Any other Force applying to Body i in y axis in N Coordinates (F_otherfsy):";
                                       long double Fotherfsy;
                                         cin >> Fotherfsy;
                                        wcout<<" Any other Force applying to Body i in Z axis in N Coordinates (F_otherfsZ):";
                                            long double FotherfsZ;
                                            cin >> FotherfsZ;
                                            long double localvariableG = G;
    long double rji;
    rji = sqrt((pow((Xi-Xj), 2))+(pow((yi-yj), 2))+(pow((Zi-Zj), 2)));
    long double RJIX = Xi-Xj; // ------|
    long double RJIy = yi-yj; //       |=> RJI=(Xi-Xj,yi-yj,Zi-Zj)
    long double RJIZ = Zi-Zj; // ------|
    long double FOTHERX = FDragX+FThrustX+FMagX+FPerturbX; // ------|
    long double FOTHERy = FDragy+FThrusty+FMagy+FPerturby; // ------|=> F_OTHER=(F_OTHERX,F_OTHERy,F_OTHERZ)
    long double FOTHERZ = FDragZ+FThrustZ+FMagZ+FPerturbZ; // ------|
    long double FgX = -localvariableG*mi*(mj/pow(rji, 3))*(RJIX);
    long double Fgy = -localvariableG*mi*(mj/pow(rji, 3))*(RJIy);
    long double FgZ = -localvariableG*mi*(mj/pow(rji, 3))*(RJIZ);
    long double FTOTALX = FgX+FOTHERX;
    long double FTOTALy = Fgy+FOTHERy;
    long double FTOTALZ = FgZ+FOTHERZ;
    wcout << L"F_TOTAL=-Gm_iΣj=1 j≠i n=1 m_j/r_ji^3(R_JI)+F_OTHER=>"<<endl;
    wcout << L"F_TOTAL=F_g+F_OTHER=>"<<endl;
    wcout << L"F_TOTAL=("<<FTOTALX<<"N,"<<FTOTALy<<"N,"<<FTOTALZ<<"N)"<<endl;
    }
 
 void TheNBodyProblem() {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   while (true) {
   wcout<< "[2] The 2-Body Problem"<<endl;
   wcout<< "[0] Cancel"<<endl;
   wcout<< "Which Problem do you want to solve?";
   float prob;
   cin >> prob;
   if (prob==2) {
      TheTwoBodyProblem();
   }
   else if (prob==0) {
   break;
   }
   else {
      wcout <<"..."<<prob<<" is an imaginary number in this world. You are only allowed to choose 2..."<<endl;
   }}
 }
 void info() {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 wcout <<"Astronautical Calculator is an open source programme written in C++."<<endl;
 wcout <<"It can be used to calculate advanced Astrodynamical equations from VisViva and Escape Velocity, all the way to Hohmann Transfer Orbit and The N-Body Problem faster than the blink of an eye."<<endl;
 wcout <<"It was first developed in 17/7/2025 by Nick Pap."<<endl;
 }
 void ThrustEquation() { // 2
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 wcout<<L"Rate of fuel consumption in kg/s (m•):";
 long double mdot;
 cin >> mdot;
 wcout<<L"Specific Impulse in s (I_sp):";
 long double Isp;
 cin >> Isp;
 wcout<<L"Gravitational Acceleration in m/s^2 (g_0):";
 long double g;
 cin >> g;
 long double Fthrust = mdot*Isp*g;
 wcout<<L"F_thrust=m•×U_e=>"<<endl;
 wcout<<L"F_thrust="<<mdot<<L"×"<<Isp<<L"×"<<g<<endl;
 wcout<<"F_thrust="<<Fthrust<<"N"<<endl;
 } // 2
 void GravitationalAccelerationCalculator () {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 long double M;
 wcout<<"Mass of the Body(j) you want to calculate its g in kg (M):";
 cin >> M;
 long double r;
 wcout<<"Distance Center-Center Body(j)-Body(i) that g applies to in m (r):";
 cin >> r;
 long double localvariableG = G;
 long double g = G*M/pow(r, 2);
 long double result = g;
 wcout <<L"g(r)=G*M/r^2=>"<<endl;
 wcout <<L"g(r)="<<G<<"*"<<M<<"/"<<r<<"^2=>"<<endl;
 wcout <<result<<L"m/s^2"<<endl; // 2 = ? added units when output
 } // New 1 = @ = $
 void AstronauticalCalculator () {   // int main => void AstronauticalCalculator
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
 string num;
 while (true) {
 wcout << "[1] VisViva Equation" <<endl;
 wcout << "[2] Circular Satellite Speed"<<endl;
 wcout << "[3] Escape Velocity"<<endl;
 wcout << "[4] Burn Time Of Tsiolkovsky Equation"<<endl;
 wcout << "[5] Deflection Angle Equation"<<endl;
 wcout << "[6] Hohmann Transfer Orbit"<<endl;
 wcout << "[7] Calculation Of Starting Point Of Center Body To Arrive At The Desirable Point Of Its Orbit In A Desirable Time"<<endl; // 2 Body oxi Object
 wcout << "[8] The N-Body Problem"<<endl; // 2
 wcout << "[9] Thrust Equation"<<endl;
 wcout << "[10] Gravitational Acceleration"<<endl; // $
 wcout << "[0] Back"<<endl; // $
 wcout << "[i] Infrormation"<<endl;
 wcout << "[99] Credits"<<endl;
 wcout << "[100] Exit"<<endl; // 2
 wcout <<"[~] Type a number:";
 getline(cin, num);
 if (num == "1") {
 visviva();
 }
 else if (num == "2") {
 CircularSatelliteSpeed();
 }
 else if (num == "3") {
 EscapeVelocity();
 }
 else if (num == "4") {
 BurnTimeOfTsiolkovskyEquation();
 }
 else if (num == "5") {
DeflectionAngleEquation();
 }
 else if (num == "6") {
    HohmannTransferOrbit();
 }
 else if (num == "7") {
    CalculationOfStartingPointOfCenterBodyToArriveAtTheDesirablePointOfItsOrbitInADesirableTime(); // 2 Body oxi Object
 }
 else if (num == "8") { // 2
   TheNBodyProblem();
 }
 else if (num == "9") {
 ThrustEquation();
 }
 else if (num=="10") {
 GravitationalAccelerationCalculator ();
 } // $
 else if (num=="0") {
 break;
 } // $
 else if (num == "i") {
 
 }
 else if (num == "99") {
   system("cls");
   wcout << "                                                       Programmers                                                                     "<<endl;
 
   wcout << "                                                       Nick Pap"<<endl;

   wcout << "                                                       Scientists"<<endl;

   wcout << "                                                       Nick Pap"<<endl;

   wcout << "                                                       Producers"<<endl;

   wcout << "                                                       Nick Pap"<<endl;

   wcout << "                                         C Copyright Nick Pap 2025||All Rights Reserved"<<endl;
}
 else if (num == "100") {
   exit(0);
 } // 2
 else { wcout<<"oops wrong num"<<endl; }
  }
  //return 0;
 } // 1
 // // //
 /*                      CLASS:                                         ID:                                                                                                  
         
                           1                                              1         17/7/2025 23:44                     */
 //                        2                                              2         18/7/2025 16:29                           // These are old
 // These ID CLASS are old
 void RequiredVelocitytohittarget () { // 1 // 1
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 long double d;
 wcout <<"Distance between point of launch and target in m (d):";
 cin >> d;
 long double g;
 wcout <<"Gravitational Acceleration in m/s^2 (g):";
 cin >> g;
 long double theta;
 wcout <<L"Angle Point Of Launch-Horizon in degrees (θ):";
 cin >> theta;
 long double twoXtheta;
 twoXtheta = 2*theta;
 long double localvariablePI = PI;
 long double sine = sin(theta*localvariablePI/180);
 long double sinres = sine;
 long double V;
 V = sqrt(d*g/sinres);
 long double result = V;
 wcout<<L"V=sqrt(d*g/sin(2*θ))=>"<<endl;
 wcout<<L"V=sqrt("<<d<<"*"<<g<<"/sin(2*"<<theta<<"))=>"<<endl;
 wcout << "V=" <<result<<"m/s" <<endl;
 }
 void BallisticCalculator() {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
 string i;
 while (true) {
 wcout<<"[1] Launch Velocity"<<endl;
 wcout<<"[0] Back"<<endl;
 wcout<<"[~] Type here:";
 getline(cin, i);
 if(i=="1") {
 RequiredVelocitytohittarget();
 }
 else if(i=="0") {break;}
 else {wcout<<"Try again but correctly this time by making sure you have no typos"<<endl;}
 }
 }
 void AngularMomentum () {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 long double M;
 wcout<<"Mass of the Body in kg (M):";
 cin >> M;
 long double V;
 wcout<<"Velocity of the Body in m/s (V):";
 cin >> V;
 long double r;
 wcout <<"Radius in m (r):";
 cin >> r;
 long double P = M*V;
 long double L = P*r;
 long double result = L;
 wcout<<"L=M*V*r=>"<<endl;
 wcout<<"L="<<M<<"*"<<V<<"*"<<r<<"=>"<<endl;
 wcout<<"L="<<result<<"kgm^2/s"<<endl;
 }
 void Torque () {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 long double F;
 wcout<<"Force applied to the Body in N (F):";
 cin >> F;
 long double r;
 wcout<<"Radius in m (r):";
 cin >> r;
 long double theta;
 wcout <<L"Angle between the applied (F)orce and the Body in degrees (θ):";
 cin >> theta;
 long double localvariablePI = PI;
 long double sine = sin(theta*localvariablePI/180);
 long double sineres = sine;
 long double t = F*r*sineres;
 long double result = t;
 wcout<<L"t=F*r*sin(θ)=>"<<endl;
 wcout<<L"t="<<F<<"*"<<r<<"*sin("<<theta<<")"<<"=>"<<endl;
 wcout<<"t="<<result<<"Nm"<<endl;
 }
 void RotationalDynamicsCalculator() {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
 string i;
 while (true) {
 wcout<<"[1] Angular Momentum"<<endl;
 wcout<<"[2] Torque"<<endl;
 wcout<<"[0] Back"<<endl;
 wcout<<"[~] Type here:";
 getline(cin, i);
 if(i=="1") {
 AngularMomentum();
 }
 else if(i=="2") {
 Torque();
 }
 else if(i=="0") {break;}
 else {wcout<<"Nah that ain't proper input"<<endl;}
 }
 }
 void LinearMomentum () {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 long double M;
 wcout <<"Mass of the Body in kg (M):";
 cin >> M;
 long double V;
 wcout <<"Velocity of the Body in m/s (V):";
 cin >> V;
 long double P = M*V;
 long double result = P;
 wcout<<"P=M*V=>"<<endl;
 wcout<<"P="<<M<<"*"<<V<<"=>"<<endl;
 wcout<<"P="<<result<<"kgm/s"<<endl;
 }
 void LinearDynamicsCalculator () {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
 string i;
 while (true) {
 wcout<<"[1] Linear Momentum"<<endl;
 wcout<<"[0] Back"<<endl;
 wcout<<"[~] Type here:";
 getline(cin, i);
 if(i=="1") {
 LinearMomentum();
 }
 else if (i=="0") {break;}
 else {wcout<<"This input is wrong"<<endl;}
 }
 }
 void Velocity () {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 long double d;
 wcout <<"Distance traversed in m (d):";
 cin >> d;
 long double t;
 wcout <<"Time taken for the (D)istance to be traversed in s (t):";
 cin >> t;
 long double V = d/t;
 long double result = V;
 wcout<<"V=d/t=>"<<endl;
 wcout<<"V="<<d<<"/"<<t<<"=>"<<endl;
 wcout<<"V="<<result<<"m/s"<<endl;
 }
 void KinematicsCalculator () {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
 string i;
 while (true) {
 wcout<<"[1] Velocity"<<endl;
 wcout<<"[0] Back"<<endl;
 wcout<<"[~] Type here:";
 getline(cin, i);
 if(i=="1") {
 Velocity();
 }
 else if(i=="0") {break;}
 else {wcout<<"Watch out for any typos"<<endl;}
 }
 }
 void Weight () {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   system("cls");
 long double M;
 wcout<<"Mass of the Body in kg (M):";
 cin>>M;
 long double g;
 wcout<<"Gravitational Acceleration in m/s^2 (g):";
 cin>>g;
 long double W = M*g;
 long double result = W;
 wcout<<"W=M*g=>"<<endl;
 wcout<<"W="<<M<<"*"<<g<<"=>"<<endl;
 wcout<<"W="<<result<<"N"<<endl;
 }
 void Mass () {
   system("cls");
   long double ro;
   wcout<<L"Density of the Body in kg/m^3 (ρ):";
   cin>>ro;
   long double V;
   wcout<<"Volume of the Body in m^3 (V):";
   cin>>V;
   long double M = ro*V;
   long double result = M;
   wcout<<L"M=ρV=>"<<endl;
   wcout<<"M="<<ro<<"*"<<V<<"=>"<<endl;
   wcout<<"M="<<result<<"kg"<<endl;
 }
 void MechanicsCalculator () {
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
 string i;
 while (true) {
 wcout<<"[1] Weight"<<endl;
 wcout<<"[2] Mass"<<endl;
 wcout<<"[0] Back"<<endl;
 wcout<<"[~] Type here:";
 getline(cin, i);
 if(i=="1") {
 Weight();
 }
 else if(i=="2") {
   Mass();
 }
 else if(i=="0") {break;}
 else{wcout<<"Wrong input"<<endl;}
 }
 } // ?
/*void Color () {
   string option;
   getline(cin, option);
   system();
 }
 void Settings () {
   string set;
   while(true) {
   wcout<<"[1] Color"<<endl;
   wcout<<"[0] Back"<<endl;
   wcout<<"[~] Type here:"<<endl;
   getline(cin, set);
   if(set=="1") {
      Color();
   }
   else if(set=="0") {
      break;
   }
   }
 }*/
/*void QuantumPhysicsCalculator () {
   string i;

   getline(cin, i);
}*/
 /* 
 This is a Physics Scientific-Calculator containing a lot of equations from simple to advanced
 It is made by Nick Pap
 © Copyright Nick Pap 2025||All Rights Reserved
 */ // 1
 int main () { // This is the main function
   _setmode(_fileno(stdout), _O_U16TEXT); // ?
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
   wcout<<""<<endl;
 string input;
 wcout<<"                                                             Welcome to the Physics Calculator made by Nick Pap"<<endl;
 wcout<<""<<endl;
 while (true) {
 wcout <<"[1] Astrodynamics/Orbital Mechanics Calculator"<<endl; // Scientific Calculator // Επιστημονικό Κομπιουτεράκι // Astronautical Calculator // The Astrodynamics Calculator comes from my Astronautical Calculator
 wcout <<"[2] Ballistic Calculator"<<endl;
 wcout <<"[3] Rotational Dynamics Calculator"<<endl;
 wcout <<"[4] Linear Dynamics Calculator"<<endl;
 wcout <<"[5] Kinematics Calculator"<<endl;
 wcout <<"[6] Mechanics Calculator"<<endl;
 //wcout <<"[7] Quantum Physics Calculator"<<endl;
 wcout <<"[C] Credits"<<endl;
 wcout <<"[I] Information"<<endl;
// wcout <<"[S] Settings"<<endl;
 wcout <<"[E] Exit"<<endl;
 wcout <<"[~] Type here:";
 getline(cin, input);
 if(input=="1") {
 AstronauticalCalculator();
 }
 else if(input=="2") {
 BallisticCalculator();
 }
 else if(input=="3") {
 RotationalDynamicsCalculator();
 }
 else if(input=="4") {
 LinearDynamicsCalculator();
 }
 else if(input=="5") {
 KinematicsCalculator();
 }
 else if(input=="6") {
 MechanicsCalculator();
 }
 //else if(input=="7") {
  // QuantumPhysicsCalculator();
 //}
 else if(input=="C") {
 Credits();
 }
 else if(input=="I") {
 wcout<<"This is a Physics Calculator containing dozens of equations from simple ones like Weight and Velocity to Pretty Advanced Astrodynamics equationd such us the Hohmann Transfer Orbit and The N-Body Problem"<<endl;
 wcout<<"You can finally calculate the equetions you've been struggling with faster than a blink of an eye."<<endl;
 wcout<<"To use simply type a number/letter/character or a word that matches your calculation"<<endl;
 }
 /*else if(input=="S") {
   void Settings();
 }*/
 else if(input=="E") {
 exit(0);
 }
 else{wcout<<"Make sure you type correctly"<<endl;}
 }
 } // 1 // 1
 // ID:         CLASS:
 //  1            1 23/7/2025 20:44
 //  2            2 25/7/2025 17:28
