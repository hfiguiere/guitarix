v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 48800 45800 1 0 1 gnd-1.sym
C 43100 45200 1 0 0 input-1.sym
{
T 43100 45500 5 10 0 0 0 0 1
device=INPUT
T 43100 45200 5 10 1 1 0 0 1
refdes=IN1
}
C 48700 45000 1 180 1 output-1.sym
{
T 48800 44700 5 10 0 0 180 6 1
device=OUTPUT
T 48900 45000 5 10 1 1 180 6 1
refdes=OUT1
}
C 45000 43700 1 90 0 resistor-2.sym
{
T 44650 44100 5 10 0 0 90 0 1
device=RESISTOR
T 45300 44400 5 10 1 1 180 0 1
refdes=R11
T 45100 43800 5 10 1 1 0 0 1
value=220
}
C 45000 43400 1 0 1 gnd-1.sym
C 42300 43600 1 0 0 pentode.sym
{
T 45100 46200 5 10 1 1 0 0 1
refdes=U5
T 44700 45700 5 10 0 1 0 0 1
device=PENTODE
T 45200 45900 5 10 1 1 0 0 1
value=EL84
}
N 46000 44600 44900 44600 4
N 45500 45700 46000 45700 4
N 46000 45700 46000 44600 4
C 47300 43700 1 0 0 generic-power-1.sym
{
T 47500 43900 5 10 0 1 0 0 1
device=POWER
T 47832 43949 5 10 1 1 0 0 1
value=340V
T 47309 43952 5 10 1 1 0 0 1
refdes=Vcc4
}
C 47200 44800 1 0 0 transformer-3.sym
{
T 47600 46200 5 10 1 1 0 0 1
refdes=Trans
T 47200 46400 5 10 0 0 0 0 1
device=TRANSFORMER
T 48200 44700 5 10 0 1 0 0 1
value=w1=1000,w2=1000,w3=64,R=5400
}
N 45500 45500 47200 45500 4
N 44700 46500 47200 46500 4
N 47200 46500 47200 46100 4
N 47500 43700 47200 43700 4
N 47200 43700 47200 44900 4
C 45800 44600 1 270 0 capacitor-1.sym
{
T 46500 44400 5 10 0 0 270 0 1
device=CAPACITOR
T 46700 44400 5 10 0 0 270 0 1
symversion=0.1
T 45900 44400 5 10 1 1 180 0 1
refdes=C1
T 45500 43800 5 10 1 1 0 0 1
value=22u
}
N 46000 43700 44900 43700 4
