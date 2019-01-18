void main() {
TRISB.F0=0;
TRISB.F1=1;
PORTB.F0=0;
while(1){
if (PORTB.F1==0)
PORTB.F0=1;
else
PORTB.F0=0;
}
}